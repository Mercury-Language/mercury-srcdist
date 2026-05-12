/*
** Automatically generated from `parse_item.m'
** by the Mercury compiler,
** version rotd-2026-05-12
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


// :- module parse_tree.parse_item.
// :- implementation.

/*
INIT mercury__parse_tree__parse_item__init
ENDINIT
*/

#include "parse_tree.parse_item.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "version_array.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_class.mih"
#include "parse_tree.parse_dcg_goal.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_inst_mode_defn.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_mutable.mih"
#include "parse_tree.parse_pragma.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_defn.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_type_repn.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.version.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_decl_in_class_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_decl_in_class_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_decl_in_class_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_2;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_incl_imp_use_0[3];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_incl_imp_use_0[3];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_incl_imp_use_0[3];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_maybe_allow_mode_defn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_allow_mode_defn_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_allow_mode_defn_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_purity_attr_0[1];

static const MR_NotagFunctorDesc parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0[2];

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_quant_constr_attr_0_0[2];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1[2];

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_quant_constr_attr_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_quant_constr_attr_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_quant_constr_attr_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quant_constr_attr_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_0[1];

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_1[1];

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_2[1];

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_3[1];

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_3;

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_4;

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_5;

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_6;

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_7;

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_3[2];

static const MR_DuPtagLayout parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_var_term_kind_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_var_term_kind_0[8];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_var_term_kind_0[8];

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_promise_ex_item__1975__1_1_f_0(
  MR_Word HeadVar__1_176);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1779__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__check_type_and_maybe_mode_list_is_consistent__1426__1_1_f_0(
  MR_Word HeadVar__1_106);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1254__1_2_f_0(
  MR_Word ContextPieces_21,
  MR_Integer LambdaHeadVar__1_63);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__1135__1_2_f_0(
  MR_Word ContextPieces_27,
  MR_Integer LambdaHeadVar__1_78);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__965__1_2_p_0(
  MR_Word HeadVar__1_118,
  MR_Word * HeadVar__2_119);

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(
  MR_Word DefaultModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeModule_8);

static void MR_CALL 
parse_tree__parse_item__parse_module_name_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeModuleName_6);

static void MR_CALL 
parse_tree__parse_item__make_item_avail_use_4_p_0(
  MR_Word Context_5,
  MR_Word SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8);

static void MR_CALL 
parse_tree__parse_item__make_item_avail_import_4_p_0(
  MR_Word Context_5,
  MR_Word SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8);

static void MR_CALL 
parse_tree__parse_item__make_item_include_4_p_0(
  MR_Word Context_5,
  MR_Word SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Incl_8);

static void MR_CALL 
parse_tree__parse_item__parse_clause_term_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_clause_term_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_53_93_95_48_6_p_0(
  MR_Word ModuleName_7,
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word * MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_item__parse_promise_item_5_p_0(
  MR_Word VarSet_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word SeqNum_9,
  MR_Word * MaybeIOM_10);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IIU_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_section_marker_6_p_0(
  MR_String Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word SeqNum_10,
  MR_Word Section_11,
  MR_Word * MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_item__parse_module_marker_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Word SeqNum_7,
  MR_Word * MaybeIOM_8);

static MR_bool MR_CALL 
parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_String Functor_13,
  MR_Word ArgTerms_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word PurityAttrs0_18,
  MR_Word QuantConstrAttrs0_19,
  MR_Word * MaybeIOM_20);

static void MR_CALL 
parse_tree__parse_item__parse_purity_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word Purity_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_30,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_constraint_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word QuantType_19,
  MR_Word PurityAttrs_20,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_33,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_quant_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word QuantType_19,
  MR_Word PurityAttrs_20,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_33,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word IsInClass_13,
  MR_Word SeqNum_15,
  MR_Word PurityAttrs_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_promise_ex_item_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_promise_ex_item_9_p_0(
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word PromiseType_15,
  MR_Word PurityAttrCord_16,
  MR_Word QuantConstrAttrCord_17,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word PredOrFunc_19,
  MR_Word PurityAttrs_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_inst_no_with_type_2_f_0(
  MR_Word TypeInfo_for_T_59,
  MR_Word PredOrFunc_4,
  MR_Word Term_5);

static void MR_CALL 
parse_tree__parse_item__parse_with_inst_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeWithInstTerm_9,
  MR_Word * MaybeWithInst_10);

static void MR_CALL 
parse_tree__parse_item__parse_with_type_suffix_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_6,
  MR_Word * BeforeWithTypeTerm_7,
  MR_Word * MaybeWithType_8);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word MaybeDetism_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word PurityAttrs_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_2_13_p_0(
  MR_Word FuncName_14,
  MR_Word Args_15,
  MR_Word ReturnArg_16,
  MR_Word FuncTerm_17,
  MR_Word Term_18,
  MR_Word VarSet_19,
  MR_Word MaybeDetism_20,
  MR_Word ExistQVars_21,
  MR_Word Constraints_22,
  MR_Word Context_23,
  MR_Word SeqNum_24,
  MR_Word PurityAttrs_25,
  MR_Word * MaybeIOM_26);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_13_p_0(
  MR_Word PredOrFunc_14,
  MR_Word ModuleName_15,
  MR_Word VarSet_16,
  MR_Word PredTypeTerm_17,
  MR_Word WithType_18,
  MR_Word WithInst_19,
  MR_Word MaybeDetism_20,
  MR_Word IsInClass_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PurityAttrs_24,
  MR_Word QuantConstrAttrs_25,
  MR_Word * MaybeIOM_26);

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_type_no_with_inst_2_f_0(
  MR_Word TypeInfo_for_T_59,
  MR_Word PredOrFunc_4,
  MR_Word Term_5);

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_inst_no_arg_modes_2_f_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word PredOrFunc_4,
  MR_Word Term_5);

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0(
  MR_Word TypesAndMaybeModes_5,
  MR_Word MaybeRetTypeAndMaybeMode_6,
  MR_Word Context_7,
  MR_Word * MaybeResult_8);

static void MR_CALL 
parse_tree__parse_item__classify_type_and_maybe_mode_list_4_p_0(
  MR_Integer ArgNum_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ArgTerms_12,
  MR_Word IsInClass_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word AllowModeDefn_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word Term_11,
  MR_Word IsInClass_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word QuantConstrAttrs_15,
  MR_Word * MaybeIOM_16);

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_inst_and_detism_2_f_0(
  MR_Word TypeInfo_for_T_61,
  MR_Word DeclKindPiece_4,
  MR_Word Term_5);

static void MR_CALL 
parse_tree__parse_item__parse_determinism_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeDetismTerm_9,
  MR_Word * MaybeMaybeDetism_10);

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word IsInClass_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word WithInst_17,
  MR_Word MaybeDetism_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20);

static MR_Word MR_CALL 
parse_tree__parse_item__desugar_field_access_1_f_0(
  MR_Word Term_3);

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0(
  MR_Word Functor_12,
  MR_Word ArgTerms_13,
  MR_Word ModuleName_14,
  MR_Word RetModeTerm_15,
  MR_Word FullTerm_16,
  MR_Word VarSet_17,
  MR_Word MaybeDetism_18,
  MR_Word Context_19,
  MR_Word SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word QuantConstrAttrs_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeExistClassInstContext_10);

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0(
  MR_Word Functor_12,
  MR_Word ArgTerms_13,
  MR_Word ModuleName_14,
  MR_Word PredModeTerm_15,
  MR_Word VarSet_16,
  MR_Word WithInst_17,
  MR_Word MaybeDetism_18,
  MR_Word Context_19,
  MR_Word SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_UnivQVars_0_7,
  MR_Word * STATE_VARIABLE_UnivQVars_8,
  MR_Word STATE_VARIABLE_ExistQVars_0_9,
  MR_Word * STATE_VARIABLE_ExistQVars_10,
  MR_Word STATE_VARIABLE_UnivClassConstraints_0_11,
  MR_Word * STATE_VARIABLE_UnivClassConstraints_12,
  MR_Word STATE_VARIABLE_UnivInstConstraints_0_13,
  MR_Word * STATE_VARIABLE_UnivInstConstraints_14,
  MR_Word HeadVar__15_15,
  MR_Word * HeadVar__16_16,
  MR_Word HeadVar__17_17,
  MR_Word * HeadVar__18_18);

static MR_Word MR_CALL 
parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(
  MR_String Functor_4,
  MR_Word Context_5);

static MR_Word MR_CALL 
parse_tree__parse_item__decl_is_not_an_atom_2_f_0(
  MR_Word VarSet_4,
  MR_Word Term_5);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____var_term_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____var_term_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_item_scalar_common_1[298][2];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_2[11][3];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_4[4][5];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_7[3][7];


struct parse_tree__parse_item__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_item__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_item__vector_common_type_6_0_s parse_tree__parse_item_vector_common_6[64];



static /* final */ const MR_Box parse_tree__parse_item_scalar_common_1[298][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_item_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_item_scalar_common_1[9]))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: only"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pred, func and mode declarations"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "allowed"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in class interfaces."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a type class"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a clause for a function"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a clause for a predicate"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an instance for a type class"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a mode for a type class function method"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a mode for a function"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a mode for a type class predicate method"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a mode for a predicate"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a type class function method"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a function"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a type class predicate method"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a predicate"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "whose name is a"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a valid declaration."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a valid declaration type."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "purity annotations"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on mode declarations."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the keyword"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may appear in declarations"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a list of variables."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to denote the quantification"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the symbol"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a conjunction of constraints."))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to introduce a constraint or"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may appear"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a predicate or function declaration."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as an annotation in front of"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not allowed"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a type class method declaration."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at the beginning of"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a module name."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[109]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one or more module names."))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a list of"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a predicate or function."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or the declaration of one mode"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be either the definition of a mode,"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from item ids to timestamps."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a module name, and a tuple containing maps"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a version number,"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should have exactly three arguments,"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "version_numbers"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was created by an obsolete compiler,"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[143]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this interface file"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "so it must be rebuilt."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[140])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should specify the types and maybe the modes"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the arguments of a"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "method declaration:"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotation of a"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[164]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[167])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[161])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the return value:"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[60])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[180])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "missing"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[184]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[186]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "sign"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[188]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from the return type."))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that should separate the argument types"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[193])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[196]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[198]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "some but not all"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[200]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments have modes."))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "return value"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type class method mode"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[161])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[207])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[207])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the mode declaration of the predicate"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In predicate"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[207])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the mode declaration of the function"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the return value"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the mode declaration of the function"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate purity annotations"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[217]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are not allowed."))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be a goal."))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[223]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[224])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not have"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[226]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a purity attribute."))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have the form"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[230]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[232]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[234]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[236]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 238 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[237])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "determinism,"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[239]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[241]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotation:"))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[243]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[245]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[244])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[246])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "capital letters"))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[248]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module names starting with"))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[250]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[249])))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[252]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[254]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that specifies a"))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[256]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[257])))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[259]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not also specify"))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[261]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[263]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotation."))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[265]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[266])))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotation itself also specifies a determinism."))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[269])))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is because the"))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[271]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[270])))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that does not specify"))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[273]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[274])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument modes"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[276]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not specify"))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[278]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotation"))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[280]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[281])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must also specify"))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[283]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[245]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[281])))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to specify the types of the arguments it adds."))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[286]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that specifies argument modes and also has a"))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[288]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[289])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must also include"))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[291]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to specify the modes of the arguments it adds."))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[293]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[296]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_item_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_item__parse_promise_ex_item_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3])),
    ((MR_Box) (parse_tree__parse_item__parse_item_or_marker_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3])),
    ((MR_Box) (parse_tree__parse_item__parse_item_or_marker_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3])),
    ((MR_Box) (parse_tree__parse_item__parse_clause_term_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3])),
    ((MR_Box) (parse_tree__parse_item__parse_clause_term_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_3[9][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "true")) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_7[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};


static /* final */ const struct parse_tree__parse_item__vector_common_type_6_0_s parse_tree__parse_item_vector_common_6[64] = {
  /* row   0 */   { NULL },
  /* row   1 */   { NULL },
  /* row   2 */   { NULL },
  /* row   3 */   { NULL },
  /* row   4 */   { (MR_String) "impure" },
  /* row   5 */   { NULL },
  /* row   6 */   { (MR_String) "promise_exhaustive" },
  /* row   7 */   { (MR_String) "promise_exclusive" },
  /* row   8 */   { (MR_String) "func" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { (MR_String) "mode" },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { (MR_String) "all" },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { (MR_String) "pred" },
  /* row  32 */   { NULL },
  /* row  33 */   { NULL },
  /* row  34 */   { (MR_String) "semipure" },
  /* row  35 */   { NULL },
  /* row  36 */   { NULL },
  /* row  37 */   { NULL },
  /* row  38 */   { NULL },
  /* row  39 */   { (MR_String) "promise_exclusive_exhaustive" },
  /* row  40 */   { NULL },
  /* row  41 */   { (MR_String) "=>" },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "some" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { (MR_String) "<=" },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_item__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_0 = {
  (MR_String) "decl_is_in_class",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_1 = {
  (MR_String) "decl_is_not_in_class",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_decl_in_class_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_decl_in_class_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_1
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_decl_in_class_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_decl_in_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____decl_in_class_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____decl_in_class_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "decl_in_class",
  { parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_decl_in_class_0 },
  { parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_decl_in_class_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_decl_in_class_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_0 = {
  (MR_String) "iiu_include_module",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_1 = {
  (MR_String) "iiu_import_module",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_2 = {
  (MR_String) "iiu_use_module",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_incl_imp_use_0[3] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_incl_imp_use_0[3] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_2
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_incl_imp_use_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_incl_imp_use_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____incl_imp_use_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____incl_imp_use_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "incl_imp_use",
  { parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_incl_imp_use_0 },
  { parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_incl_imp_use_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_incl_imp_use_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_0 = {
  (MR_String) "allow_mode_decl_and_defn",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_1 = {
  (MR_String) "allow_mode_decl_only",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_maybe_allow_mode_defn_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_allow_mode_defn_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_1
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_allow_mode_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_allow_mode_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "maybe_allow_mode_defn",
  { parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_allow_mode_defn_0 },
  { parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_maybe_allow_mode_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_allow_mode_defn_0,

};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_purity_attr_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0 = {
  (MR_String) "purity_attr",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__parse_item____Unify____purity_attr_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____purity_attr_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "purity_attr",
  { &parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0 },
  { &parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_purity_attr_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_quantifier_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0)
};

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_quant_constr_attr_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0 = {
  (MR_String) "qca_quant_vars",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0,
  NULL,
  parse_tree__parse_item__parse_tree__parse_item__field_locns_quant_constr_attr_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_quantifier_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0)
};

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_quant_constr_attr_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1 = {
  (MR_String) "qca_constraint",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1,
  NULL,
  parse_tree__parse_item__parse_tree__parse_item__field_locns_quant_constr_attr_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0[1] = { &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_1[1] = { &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1 };

static const MR_DuPtagLayout parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_quant_constr_attr_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_quant_constr_attr_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quant_constr_attr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "quant_constr_attr",
  { parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_quant_constr_attr_0 },
  { parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_quant_constr_attr_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quant_constr_attr_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_decl_in_class_0) };

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_0 = {
  (MR_String) "vtk_type_decl_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_0,
  NULL,
  parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_decl_in_class_0) };

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_1 = {
  (MR_String) "vtk_type_decl_func",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_1,
  NULL,
  parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_decl_in_class_0) };

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_2 = {
  (MR_String) "vtk_mode_decl_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_2,
  NULL,
  parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_decl_in_class_0) };

static const MR_DuArgLocn parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_3 = {
  (MR_String) "vtk_mode_decl_func",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  parse_tree__parse_item__parse_tree__parse_item__field_types_var_term_kind_0_3,
  NULL,
  parse_tree__parse_item__parse_tree__parse_item__field_locns_var_term_kind_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_4 = {
  (MR_String) "vtk_class_decl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_5 = {
  (MR_String) "vtk_instance_decl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_6 = {
  (MR_String) "vtk_clause_pred",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_7 = {
  (MR_String) "vtk_clause_func",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_0[4] = {
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_4,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_5,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_6,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_7
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_1[1] = { &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_2[1] = { &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_3[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_2,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_3
};

static const MR_DuPtagLayout parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_var_term_kind_0[4] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_var_term_kind_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_var_term_kind_0[8] = {
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_4,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_7,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_6,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_5,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_3,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_2,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_var_term_kind_0_0
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_var_term_kind_0[8] = {
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_var_term_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_item____Unify____var_term_kind_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____var_term_kind_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "var_term_kind",
  { parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_var_term_kind_0 },
  { parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_var_term_kind_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_var_term_kind_0,

};

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_promise_ex_item__1975__1_1_f_0(
  MR_Word HeadVar__1_176)
{
  MR_Word HeadVar__2_177;

  HeadVar__2_177 = mercury__term__coerce_var_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_176);
  return HeadVar__2_177;
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1779__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_38, HeadVar__2_39);
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__check_type_and_maybe_mode_list_is_consistent__1426__1_1_f_0(
  MR_Word HeadVar__1_106)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_107;
  MR_Integer ArgNum_109 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_106, 0))));

  succeeded = (ArgNum_109 < (MR_Integer) 0);
  if (succeeded)
    HeadVar__2_107 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[203]));
  else
    {
      HeadVar__2_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HeadVar__2_107, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, HeadVar__2_107, 1) = ((MR_Box) (ArgNum_109));
    }
  return HeadVar__2_107;
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1254__1_2_f_0(
  MR_Word ContextPieces_21,
  MR_Integer LambdaHeadVar__1_63)
{
  MR_Word LambdaHeadVar__2_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_69;
  MR_Word Var_70;

  {
    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_70, 1) = ((MR_Box) (LambdaHeadVar__1_63));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[174])));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[172])));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
  }
  Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66);
  LambdaHeadVar__2_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_65);
  return LambdaHeadVar__2_64;
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__1135__1_2_f_0(
  MR_Word ContextPieces_27,
  MR_Integer LambdaHeadVar__1_78)
{
  MR_Word LambdaHeadVar__2_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word Var_85;

  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (LambdaHeadVar__1_78));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[174])));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[172])));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
  }
  Var_80 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81);
  LambdaHeadVar__2_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_27, Var_80);
  return LambdaHeadVar__2_79;
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__965__1_2_p_0(
  MR_Word HeadVar__1_118,
  MR_Word * HeadVar__2_119)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_118, HeadVar__2_119);
}

void MR_CALL 
parse_tree__parse_item____Compare____var_term_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Integer Var_24 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_25 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_24 < Var_25);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_24 > Var_25);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Integer Var_22 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_23 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_22 < Var_23);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_22 > Var_23);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                      MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                      MR_Integer Var_20 = (MR_Integer) (ArgX1_8);
                      MR_Integer Var_21 = (MR_Integer) (ArgY1_9);

                      succeeded = (Var_20 < Var_21);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_20 > Var_21);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                      MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                      MR_Integer Var_18 = (MR_Integer) (ArgX1_10);
                      MR_Integer Var_19 = (MR_Integer) (ArgY1_11);

                      succeeded = (Var_18 < Var_19);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_18 > Var_19);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__parse_item____Unify____var_term_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_7 == ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
      MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_11;
      MR_Integer Var_20 = (MR_Integer) (ArgX1_9);
      MR_Integer Var_21 = (MR_Integer) (ArgY1_10);

      succeeded = (Var_20 < Var_21);
      if (succeeded)
      {
        SubResult1_11 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_20 > Var_21);
        if (succeeded)
        {
          SubResult1_11 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_11;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_12)), ((MR_Box) (ArgY2_13)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_22 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_23 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_22 < Var_23);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_22 > Var_23);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (ArgX1_7 == ArgY1_8);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__parse_item_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&parse_tree__parse_item_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(
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
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0(
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
parse_tree__parse_item____Unify____incl_imp_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0(
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

MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(
  MR_Word DefaultModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeModule_8)
{
  if (((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0))
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_4_p_0(DefaultModuleName_5, VarSet_6, Term_7, MaybeModule_8);
  else
  {
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Term_7, 1))));
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_44;

    Var_21 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[251])));
    Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[253])));
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[255])));
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_29);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_20);
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_implicitly_qualified_module_name\'/4"));
      MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModule_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_name_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeModuleName_6)
{
  parse_tree__parse_sym_name__parse_sym_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5, MaybeModuleName_6);
}

static void MR_CALL 
parse_tree__parse_item__make_item_avail_use_4_p_0(
  MR_Word Context_5,
  MR_Word SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8)
{
  MR_Word AvailUseInfo_9;

  {
    AvailUseInfo_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AvailUseInfo_9, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, AvailUseInfo_9, 1) = ((MR_Box) (Context_5));
    MR_hl_field(0, AvailUseInfo_9, 2) = ((MR_Box) (SeqNum_6));
  }
  *Avail_8 = (MR_Word) (MR_mkword(1, (MR_Word) (AvailUseInfo_9)));
}

static void MR_CALL 
parse_tree__parse_item__make_item_avail_import_4_p_0(
  MR_Word Context_5,
  MR_Word SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8)
{
  MR_Word AvailImportInfo_9;

  {
    AvailImportInfo_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AvailImportInfo_9, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, AvailImportInfo_9, 1) = ((MR_Box) (Context_5));
    MR_hl_field(0, AvailImportInfo_9, 2) = ((MR_Box) (SeqNum_6));
  }
  *Avail_8 = (MR_Word) ((MR_Word) (AvailImportInfo_9));
}

static void MR_CALL 
parse_tree__parse_item__make_item_include_4_p_0(
  MR_Word Context_5,
  MR_Word SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Incl_8)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Incl_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (SeqNum_6));
  }
}

void MR_CALL 
parse_tree__parse_item__parse_class_decl_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeClassMethod_8)
{
  MR_bool succeeded;
  MR_Word TermContext_9;
  MR_Word MaybeIOM_10;
  MR_Word Var_38;
  MR_Word Var_39;

  TermContext_9 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
  Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
  parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(ModuleName_5, VarSet_6, Term_7, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_38, Var_39, &MaybeIOM_10);
  if (((MR_tag((MR_Word) MaybeIOM_10)) == (MR_Integer) 0))
    *MaybeClassMethod_8 = (MR_Word) (MaybeIOM_10);
  else
  {
    MR_Word IOM_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOM_10, 0))));
    MR_Word ItemPredDecl_13;
    MR_Word Var_40;

    succeeded = ((MR_tag((MR_Word) IOM_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_40 = ((MR_Word) ((MR_hl_field(1, IOM_12, 0))));
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1);
      if (succeeded)
        ItemPredDecl_13 = (MR_Word) (MR_body((MR_Word) (Var_40), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 0))));
      MR_Word PorF_15 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_13, 1))) & (MR_Integer) 1);
      MR_Word ArgDecls_16 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 2))));
      MR_Word WithType_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 3))));
      MR_Word WithInst_18 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 4))));
      MR_Word MaybeDetism_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 5))));
      MR_Word TypeVarSet_21 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 7))));
      MR_Word InstVarSet_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 8))));
      MR_Word ExistQVars_23 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 9))));
      MR_Word Purity_24 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_13, 10))) & (MR_Integer) 3);
      MR_Word Constraints_25 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 11))));
      MR_Word Context_26 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, 12))));
      MR_Word PredOrFuncInfo_28;
      MR_Word ClassDecl_29;

      {
        PredOrFuncInfo_28 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredOrFuncInfo_28, 0) = ((MR_Box) (Name_14));
        MR_hl_field(0, PredOrFuncInfo_28, 1) = (MR_Box) ((MR_Unsigned) (PorF_15));
        MR_hl_field(0, PredOrFuncInfo_28, 2) = ((MR_Box) (ArgDecls_16));
        MR_hl_field(0, PredOrFuncInfo_28, 3) = ((MR_Box) (WithType_17));
        MR_hl_field(0, PredOrFuncInfo_28, 4) = ((MR_Box) (WithInst_18));
        MR_hl_field(0, PredOrFuncInfo_28, 5) = ((MR_Box) (MaybeDetism_19));
        MR_hl_field(0, PredOrFuncInfo_28, 6) = ((MR_Box) (TypeVarSet_21));
        MR_hl_field(0, PredOrFuncInfo_28, 7) = ((MR_Box) (InstVarSet_22));
        MR_hl_field(0, PredOrFuncInfo_28, 8) = ((MR_Box) (ExistQVars_23));
        MR_hl_field(0, PredOrFuncInfo_28, 9) = (MR_Box) ((MR_Unsigned) (Purity_24));
        MR_hl_field(0, PredOrFuncInfo_28, 10) = ((MR_Box) (Constraints_25));
        MR_hl_field(0, PredOrFuncInfo_28, 11) = ((MR_Box) (Context_26));
      }
      ClassDecl_29 = (MR_Word) ((MR_Word) (PredOrFuncInfo_28));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeClassMethod_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ClassDecl_29));
      }
    }
    else
    {
      MR_Word ItemModeDecl_30;
      MR_Word Var_41;

      succeeded = ((MR_tag((MR_Word) IOM_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(1, IOM_12, 0))));
        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2);
        if (succeeded)
          ItemModeDecl_30 = (MR_Word) (MR_body((MR_Word) (Var_41), (MR_Integer) 2));
      }
      if (succeeded)
      {
        MR_Word MaybePorF_31 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 1))));
        MR_Word ArgModes_32 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 2))));
        MR_Word ModeInfo_33;
        MR_Word Name_75 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 0))));
        MR_Word WithInst_76 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 3))));
        MR_Word MaybeDetism_77 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 4))));
        MR_Word InstVarSet_78 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 5))));
        MR_Word Context_79 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, 6))));
        MR_Word ClassDecl_81;

        {
          ModeInfo_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModeInfo_33, 0) = ((MR_Box) (Name_75));
          MR_hl_field(0, ModeInfo_33, 1) = ((MR_Box) (MaybePorF_31));
          MR_hl_field(0, ModeInfo_33, 2) = ((MR_Box) (ArgModes_32));
          MR_hl_field(0, ModeInfo_33, 3) = ((MR_Box) (WithInst_76));
          MR_hl_field(0, ModeInfo_33, 4) = ((MR_Box) (MaybeDetism_77));
          MR_hl_field(0, ModeInfo_33, 5) = ((MR_Box) (InstVarSet_78));
          MR_hl_field(0, ModeInfo_33, 6) = ((MR_Box) (Context_79));
        }
        ClassDecl_81 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_33)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeClassMethod_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ClassDecl_81));
        }
      }
      else
      {
        MR_Word Pieces_34;
        MR_Word Spec_35;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_52;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_72;

        Var_47 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[15])));
        Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[19])));
        Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[22])));
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[17])), Var_57);
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
        Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[13])), Var_46);
        {
          Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_class_decl\'/4"));
          MR_hl_field(0, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_35, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeClassMethod_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_clause_term_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_119;

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__965__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_119);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_119));
}

static void MR_CALL 
parse_tree__parse_item__parse_clause_term_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_119;

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__965__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_119);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_119));
}

void MR_CALL 
parse_tree__parse_item__parse_clause_term_5_p_0(
  MR_Word MaybeModuleName_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word SeqNum_9,
  MR_Word * MaybeClause_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_Word DCGHeadTerm_11;
  MR_Word DCGBodyTerm_12;
  MR_Word DCGContext_13;
  MR_Word Var_20;
  MR_String Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
    DCGContext_13 = ((MR_Word) ((MR_hl_field(0, Term_8, 2))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
      succeeded = (strcmp(Var_21, (MR_String) "-->") == 0);
      if (succeeded)
      {
        succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DCGHeadTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DCGBodyTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
    parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(MaybeModuleName_6, VarSet_7, DCGHeadTerm_11, DCGBodyTerm_12, DCGContext_13, SeqNum_9, MaybeClause_10);
  else
  {
    MR_Word HeadTerm_17;
    MR_Word BodyTerm_18;
    MR_Word ClauseContext_19;
    MR_Word ProgVarSet0_34;
    MR_Word GoalContextPieces_35;
    MR_Word MaybeBodyGoal_36;
    MR_Word ProgVarSet_37;
    MR_Word VarSet_38;
    MR_Word HeadTermPrime_14;
    MR_Word BodyTermPrime_15;
    MR_Word TermContext_16;
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word FuncHeadTerm_42;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word FuncHeadTerm0_39;
    MR_Word Var_57;
    MR_String Var_58;
    MR_Word Var_59;

    succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
      TermContext_16 = ((MR_Word) ((MR_hl_field(0, Term_8, 2))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, 0))));
        succeeded = (strcmp(Var_26, (MR_String) ":-") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTermPrime_14 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              BodyTermPrime_15 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      HeadTerm_17 = HeadTermPrime_14;
      BodyTerm_18 = BodyTermPrime_15;
      ClauseContext_19 = TermContext_16;
    }
    else
    {
      HeadTerm_17 = Term_8;
      ClauseContext_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_17);
      {
        BodyTerm_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BodyTerm_18, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_3[0]));
        MR_hl_field(0, BodyTerm_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, BodyTerm_18, 2) = ((MR_Box) (ClauseContext_19));
      }
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, &ProgVarSet0_34);
    GoalContextPieces_35 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
    parse_tree__parse_goal__parse_goal_5_p_0(BodyTerm_18, GoalContextPieces_35, &MaybeBodyGoal_36, ProgVarSet0_34, &ProgVarSet_37);
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ProgVarSet_37, &VarSet_38);
    succeeded = ((MR_tag((MR_Word) HeadTerm_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(0, HeadTerm_17, 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, HeadTerm_17, 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_String) ((MR_hl_field(0, Var_57, 0))));
        succeeded = (strcmp(Var_58, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncHeadTerm0_39 = ((MR_Word) ((MR_hl_field(1, Var_59, 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_61 = ((MR_Word) ((MR_hl_field(1, Var_60, 1))));
              succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FuncHeadTerm_42 = parse_tree__parse_item__desugar_field_access_1_f_0(FuncHeadTerm0_39);
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeFunctor_45;
      MR_Word Spec_44;

      succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_7, (MR_Word) ((MR_Unsigned) 12U), FuncHeadTerm_42, &Spec_44);
      if (succeeded)
      {
        MR_Word Var_63;

        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Spec_44));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_61));
        }
        {
          MaybeFunctor_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeFunctor_45, 0) = ((MR_Box) (Var_63));
        }
      }
      else
      {
        MR_Word HeadContextPieces_46;

        HeadContextPieces_46 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[152])));
        if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_38, HeadContextPieces_46, FuncHeadTerm_42, &MaybeFunctor_45);
        else
        {
          MR_Word ModuleName_47 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_6, 0))));

          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_47, VarSet_38, HeadContextPieces_46, FuncHeadTerm_42, &MaybeFunctor_45);
        }
      }
      if (((MR_tag((MR_Word) MaybeFunctor_45)) == (MR_Integer) 0))
      {
        MR_Word FunctorSpecs_55 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_45, 0))));
        MR_Word Specs_56;
        MR_Word Var_73;

        Var_73 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_36);
        Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_55, Var_73);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeClause_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_56));
        }
      }
      else
      {
        MR_Word SymName_48 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_45, 0))));
        MR_Word ArgTerms0_49 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_45, 1))));
        MR_Word ArgTerms_52;
        MR_Word ProgArgTerms_53;
        MR_Word ItemClause_54;

        ArgTerms_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), ArgTerms0_49, Var_60);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[9]), ArgTerms_52, &ProgArgTerms_53);
        {
          ItemClause_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemClause_54, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, ItemClause_54, 1) = ((MR_Box) (SymName_48));
          MR_hl_field(0, ItemClause_54, 2) = ((MR_Box) (ProgArgTerms_53));
          MR_hl_field(0, ItemClause_54, 3) = ((MR_Box) (ProgVarSet_37));
          MR_hl_field(0, ItemClause_54, 4) = ((MR_Box) (MaybeBodyGoal_36));
          MR_hl_field(0, ItemClause_54, 5) = ((MR_Box) (ClauseContext_19));
          MR_hl_field(0, ItemClause_54, 6) = ((MR_Box) (SeqNum_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeClause_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ItemClause_54));
        }
      }
    }
    else
    {
      MR_Word MaybeFunctor_115;
      MR_Word Spec_76;

      succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_7, (MR_Word) ((MR_Unsigned) 8U), HeadTerm_17, &Spec_76);
      if (succeeded)
      {
        MR_Word Var_67;

        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Spec_76));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeFunctor_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeFunctor_115, 0) = ((MR_Box) (Var_67));
        }
      }
      else
      {
        MR_Word HeadContextPieces_75;

        HeadContextPieces_75 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[154])));
        if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_38, HeadContextPieces_75, HeadTerm_17, &MaybeFunctor_115);
        else
        {
          MR_Word ModuleName_74 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_6, 0))));

          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_74, VarSet_38, HeadContextPieces_75, HeadTerm_17, &MaybeFunctor_115);
        }
      }
      if (((MR_tag((MR_Word) MaybeFunctor_115)) == (MR_Integer) 0))
      {
        MR_Word FunctorSpecs_86 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_115, 0))));
        MR_Word Specs_87;
        MR_Word Var_88;

        Var_88 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_36);
        Specs_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_86, Var_88);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeClause_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_87));
        }
      }
      else
      {
        MR_Word SymName_91 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_115, 0))));
        MR_Word ArgTerms_94 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_115, 1))));
        MR_Word ProgArgTerms_95;
        MR_Word ItemClause_96;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[10]), ArgTerms_94, &ProgArgTerms_95);
        {
          ItemClause_96 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemClause_96, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, ItemClause_96, 1) = ((MR_Box) (SymName_91));
          MR_hl_field(0, ItemClause_96, 2) = ((MR_Box) (ProgArgTerms_95));
          MR_hl_field(0, ItemClause_96, 3) = ((MR_Box) (ProgVarSet_37));
          MR_hl_field(0, ItemClause_96, 4) = ((MR_Box) (MaybeBodyGoal_36));
          MR_hl_field(0, ItemClause_96, 5) = ((MR_Box) (ClauseContext_19));
          MR_hl_field(0, ItemClause_96, 6) = ((MR_Box) (SeqNum_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeClause_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ItemClause_96));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_119;

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__965__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_119);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_119));
}

static void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_119;

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__965__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_119);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_119));
}

void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word SeqNum_9,
  MR_Word * MaybeIOM_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_Word DeclTerm_11;
  MR_Word Var_16;
  MR_String Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(0, Var_16, 0))));
      succeeded = (strcmp(Var_17, (MR_String) ":-") == 0);
      if (succeeded)
      {
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DeclTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String Functor_23;
    MR_Word ArgTerms_24;
    MR_Word Context_25;
    MR_Word Var_28;

    succeeded = ((MR_tag((MR_Word) DeclTerm_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(0, DeclTerm_11, 0))));
      ArgTerms_24 = ((MR_Word) ((MR_hl_field(0, DeclTerm_11, 1))));
      Context_25 = ((MR_Word) ((MR_hl_field(0, DeclTerm_11, 2))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
        Functor_23 = ((MR_String) ((MR_hl_field(0, Var_28, 0))));
    }
    if (succeeded)
    {
      MR_Word MaybeIOMPrime_26;

      {
        MR_Integer case_num_0 = (MR_Integer) -1;

        switch (MR_nth_code_unit(Functor_23, 0)) {
          case (MR_Integer) 60:
            if (MR_offset_streq(1, Functor_23, (MR_String) "<="))
              case_num_0 = (MR_Integer) 0;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(1, Functor_23, (MR_String) "=>"))
              case_num_0 = (MR_Integer) 1;
            break;
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(Functor_23, 1)) {
              case (MR_Integer) 98:
                if (MR_offset_strn_eq(2, 7, Functor_23, (MR_String) "abstract_"))
                  switch (MR_nth_code_unit(Functor_23, 9)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(10, Functor_23, (MR_String) "abstract_inst"))
                        case_num_0 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(10, Functor_23, (MR_String) "abstract_mode"))
                        case_num_0 = (MR_Integer) 3;
                      break;
                  }
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(2, Functor_23, (MR_String) "all"))
                  case_num_0 = (MR_Integer) 4;
                break;
            }
            break;
          case (MR_Integer) 101:
            if (MR_offset_streq(1, Functor_23, (MR_String) "end_module"))
              case_num_0 = (MR_Integer) 6;
            break;
          case (MR_Integer) 102:
            switch (MR_nth_code_unit(Functor_23, 1)) {
              case (MR_Integer) 105:
                if (MR_offset_strn_eq(2, 4, Functor_23, (MR_String) "finali"))
                  switch (MR_nth_code_unit(Functor_23, 6)) {
                    case (MR_Integer) 115:
                      if (MR_offset_streq(7, Functor_23, (MR_String) "finalise"))
                        case_num_0 = (MR_Integer) 7;
                      break;
                    case (MR_Integer) 122:
                      if (MR_offset_streq(7, Functor_23, (MR_String) "finalize"))
                        case_num_0 = (MR_Integer) 7;
                      break;
                  }
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(2, Functor_23, (MR_String) "func"))
                  case_num_0 = (MR_Integer) 8;
                break;
            }
            break;
          case (MR_Integer) 105:
            switch (MR_nth_code_unit(Functor_23, 1)) {
              case (MR_Integer) 109:
                switch (MR_nth_code_unit(Functor_23, 2)) {
                  case (MR_Integer) 112:
                    switch (MR_nth_code_unit(Functor_23, 3)) {
                      case (MR_Integer) 108:
                        if (MR_offset_streq(4, Functor_23, (MR_String) "implementation"))
                          case_num_0 = (MR_Integer) 10;
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(4, Functor_23, (MR_String) "import_module"))
                          case_num_0 = (MR_Integer) 12;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(4, Functor_23, (MR_String) "impure"))
                          case_num_0 = (MR_Integer) 15;
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 110:
                switch (MR_nth_code_unit(Functor_23, 2)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "include_module"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_strn_eq(3, 5, Functor_23, (MR_String) "initiali"))
                      switch (MR_nth_code_unit(Functor_23, 8)) {
                        case (MR_Integer) 115:
                          if (MR_offset_streq(9, Functor_23, (MR_String) "initialise"))
                            case_num_0 = (MR_Integer) 17;
                          break;
                        case (MR_Integer) 122:
                          if (MR_offset_streq(9, Functor_23, (MR_String) "initialize"))
                            case_num_0 = (MR_Integer) 17;
                          break;
                      }
                    break;
                  case (MR_Integer) 115:
                    switch (MR_nth_code_unit(Functor_23, 3)) {
                      case (MR_Integer) 116:
                        switch (MR_nth_code_unit(Functor_23, 4)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 18;
                            break;
                          case (MR_Integer) 97:
                            if (MR_offset_streq(5, Functor_23, (MR_String) "instance"))
                              case_num_0 = (MR_Integer) 19;
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "interface"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 109:
            switch (MR_nth_code_unit(Functor_23, 1)) {
              case (MR_Integer) 111:
                switch (MR_nth_code_unit(Functor_23, 2)) {
                  case (MR_Integer) 100:
                    switch (MR_nth_code_unit(Functor_23, 3)) {
                      case (MR_Integer) 101:
                        if (MR_offset_streq(4, Functor_23, (MR_String) "mode"))
                          case_num_0 = (MR_Integer) 20;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(4, Functor_23, (MR_String) "module"))
                          case_num_0 = (MR_Integer) 21;
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(2, Functor_23, (MR_String) "mutable"))
                  case_num_0 = (MR_Integer) 22;
                break;
            }
            break;
          case (MR_Integer) 112:
            switch (MR_nth_code_unit(Functor_23, 1)) {
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(Functor_23, 2)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "pragma"))
                      case_num_0 = (MR_Integer) 23;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "pred"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "promise"))
                      case_num_0 = (MR_Integer) 24;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 115:
            switch (MR_nth_code_unit(Functor_23, 1)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(2, Functor_23, (MR_String) "semipure"))
                  case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 111:
                switch (MR_nth_code_unit(Functor_23, 2)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "solver"))
                      case_num_0 = (MR_Integer) 25;
                    break;
                  case (MR_Integer) 109:
                    if (MR_offset_streq(3, Functor_23, (MR_String) "some"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 116:
            if (MR_offset_strn_eq(1, 3, Functor_23, (MR_String) "type"))
              switch (MR_nth_code_unit(Functor_23, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 26;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(5, Functor_23, (MR_String) "type_representation"))
                    case_num_0 = (MR_Integer) 27;
                  break;
                case (MR_Integer) 99:
                  if (MR_offset_streq(5, Functor_23, (MR_String) "typeclass"))
                    case_num_0 = (MR_Integer) 28;
                  break;
              }
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(1, Functor_23, (MR_String) "use_module"))
              case_num_0 = (MR_Integer) 14;
            break;
          case (MR_Integer) 118:
            if (MR_offset_streq(1, Functor_23, (MR_String) "version_numbers"))
              case_num_0 = (MR_Integer) 29;
            break;
        }
        switch (case_num_0) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              // case "<="
              ;
              {
                MR_Word Var_47;
                MR_Word Var_48;

                Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
                Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
                parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 1, Var_47, Var_48, &MaybeIOMPrime_26);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              // case "=>"
              ;
              {
                MR_Word Var_58;
                MR_Word Var_59;

                Var_58 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
                Var_59 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
                parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 0, Var_58, Var_59, &MaybeIOMPrime_26);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              // case "abstract_inst"
              ;
              parse_tree__parse_inst_mode_defn__parse_abstract_inst_defn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              // case "abstract_mode"
              ;
              parse_tree__parse_inst_mode_defn__parse_abstract_mode_defn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              // case "all"
              ;
              {
                MR_Word Var_45;
                MR_Word Var_46;

                Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
                Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
                parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 1, Var_45, Var_46, &MaybeIOMPrime_26);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              // case "some"
              ;
              {
                MR_Word Var_64;
                MR_Word Var_65;

                Var_64 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
                Var_65 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
                parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 0, Var_64, Var_65, &MaybeIOMPrime_26);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              // case "end_module"
              ;
              {
                MR_Word ModuleName_80;
                MR_Word TypeCtorInfo_45_103;
                MR_Word ModuleNameTerm_79;
                MR_Word Var_84;

                succeeded = (ArgTerms_24 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ModuleNameTerm_79 = ((MR_Word) ((MR_hl_field(1, ArgTerms_24, 0))));
                  Var_84 = ((MR_Word) ((MR_hl_field(1, ArgTerms_24, 1))));
                  succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_45_103 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeCtorInfo_45_103, ModuleNameTerm_79, &ModuleName_80);
                  }
                }
                if (succeeded)
                {
                  MR_Word Marker_81;

                  {
                    Marker_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Marker_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Marker_81, 1) = ((MR_Box) (ModuleName_80));
                    MR_hl_field(3, Marker_81, 2) = ((MR_Box) (Context_25));
                    MR_hl_field(3, Marker_81, 3) = ((MR_Box) (SeqNum_9));
                  }
                  {
                    MaybeIOMPrime_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeIOMPrime_26, 0) = ((MR_Box) (Marker_81));
                  }
                }
                else
                {
                  MR_Word Pieces_82;
                  MR_Word Spec_83;
                  MR_Word Var_89;
                  MR_Word Var_90;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Word Var_101;

                  Var_90 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[112])));
                  Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[108])));
                  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
                  Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_92);
                  Pieces_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[110])), Var_89);
                  {
                    Spec_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_end_module_marker\'/4"));
                    MR_hl_field(0, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(0, Spec_83, 3) = ((MR_Box) (Context_25));
                    MR_hl_field(0, Spec_83, 4) = ((MR_Box) (Pieces_82));
                  }
                  {
                    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Spec_83));
                    MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeIOMPrime_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MaybeIOMPrime_26, 0) = ((MR_Box) (Var_101));
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              // case "finalise", "finalize"
              ;
              parse_tree__parse_mutable__parse_finalise_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              // case "func"
              ;
              parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              // case "pred"
              ;
              parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              // case "implementation"
              ;
              parse_tree__parse_item__parse_section_marker_6_p_0(Functor_23, ArgTerms_24, Context_25, SeqNum_9, (MR_Integer) 1, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              // case "interface"
              ;
              parse_tree__parse_item__parse_section_marker_6_p_0(Functor_23, ArgTerms_24, Context_25, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              // case "import_module"
              ;
              parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, Context_25, SeqNum_9, (MR_Integer) 1, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              // case "include_module"
              ;
              parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, Context_25, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 14:
            {
              // case "use_module"
              ;
              parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, Context_25, SeqNum_9, (MR_Integer) 2, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              // case "impure"
              ;
              {
                MR_Word Var_49;
                MR_Word Var_50;

                Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
                Var_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
                parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 2, Var_49, Var_50, &MaybeIOMPrime_26);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 16:
            {
              // case "semipure"
              ;
              {
                MR_Word Var_75;
                MR_Word Var_76;

                Var_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
                Var_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
                parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 1, Var_75, Var_76, &MaybeIOMPrime_26);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 17:
            {
              // case "initialise", "initialize"
              ;
              parse_tree__parse_mutable__parse_initialise_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 18:
            {
              // case "inst"
              ;
              parse_tree__parse_inst_mode_defn__parse_inst_defn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 19:
            {
              // case "instance"
              ;
              parse_tree__parse_class__parse_instance_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 20:
            {
              // case "mode"
              ;
              parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(ModuleName_6, VarSet_7, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 21:
            {
              // case "module"
              ;
              parse_tree__parse_item__parse_module_marker_4_p_0(ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 22:
            {
              // case "mutable"
              ;
              parse_tree__parse_mutable__parse_mutable_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 23:
            {
              // case "pragma"
              ;
              parse_tree__parse_pragma__parse_pragma_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 24:
            {
              // case "promise"
              ;
              parse_tree__parse_item__parse_promise_item_5_p_0(VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 25:
            {
              // case "solver"
              ;
              parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 26:
            {
              // case "type"
              ;
              parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 27:
            {
              // case "type_representation"
              ;
              parse_tree__parse_type_repn__parse_type_repn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 28:
            {
              // case "typeclass"
              ;
              parse_tree__parse_class__parse_typeclass_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_24, Context_25, SeqNum_9, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 29:
            {
              // case "version_numbers"
              ;
              parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_53_93_95_48_6_p_0(ModuleName_6, Functor_23, ArgTerms_24, Context_25, &MaybeIOMPrime_26);
              succeeded = MR_TRUE;
            }
            break;
        }
      }
      if (succeeded)
        *MaybeIOM_10 = MaybeIOMPrime_26;
      else
      {
        MR_Word Spec_27;
        MR_Word Var_30;

        Spec_27 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(Functor_23, Context_25);
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Spec_27));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
        }
      }
    }
    else
    {
      MR_Word Var_32;
      MR_Word Spec_34;

      Spec_34 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_7, DeclTerm_11);
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Spec_34));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
  }
  else
  {
    MR_Word MaybeClause_13;
    MR_Word Var_20;
    MR_Word DCGHeadTerm_105;
    MR_Word DCGBodyTerm_106;
    MR_Word DCGContext_107;
    MR_Word Var_114;
    MR_String Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;

    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (ModuleName_6));
    }
    succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_114 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
      Var_116 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
      DCGContext_107 = ((MR_Word) ((MR_hl_field(0, Term_8, 2))));
      succeeded = ((MR_tag((MR_Word) Var_114)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_115 = ((MR_String) ((MR_hl_field(0, Var_114, 0))));
        succeeded = (strcmp(Var_115, (MR_String) "-->") == 0);
        if (succeeded)
        {
          succeeded = (Var_116 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DCGHeadTerm_105 = ((MR_Word) ((MR_hl_field(1, Var_116, 0))));
            Var_117 = ((MR_Word) ((MR_hl_field(1, Var_116, 1))));
            succeeded = (Var_117 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DCGBodyTerm_106 = ((MR_Word) ((MR_hl_field(1, Var_117, 0))));
              Var_118 = ((MR_Word) ((MR_hl_field(1, Var_117, 1))));
              succeeded = (Var_118 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(Var_20, VarSet_7, DCGHeadTerm_105, DCGBodyTerm_106, DCGContext_107, SeqNum_9, &MaybeClause_13);
    else
    {
      MR_Word HeadTerm_111;
      MR_Word BodyTerm_112;
      MR_Word ClauseContext_113;
      MR_Word ProgVarSet0_128;
      MR_Word GoalContextPieces_129;
      MR_Word MaybeBodyGoal_130;
      MR_Word ProgVarSet_131;
      MR_Word VarSet_132;
      MR_Word HeadTermPrime_108;
      MR_Word BodyTermPrime_109;
      MR_Word TermContext_110;
      MR_Word Var_119;
      MR_String Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word FuncHeadTerm_136;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word FuncHeadTerm0_133;
      MR_Word Var_151;
      MR_String Var_152;
      MR_Word Var_153;

      succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_119 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
        Var_121 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
        TermContext_110 = ((MR_Word) ((MR_hl_field(0, Term_8, 2))));
        succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_120 = ((MR_String) ((MR_hl_field(0, Var_119, 0))));
          succeeded = (strcmp(Var_120, (MR_String) ":-") == 0);
          if (succeeded)
          {
            succeeded = (Var_121 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTermPrime_108 = ((MR_Word) ((MR_hl_field(1, Var_121, 0))));
              Var_122 = ((MR_Word) ((MR_hl_field(1, Var_121, 1))));
              succeeded = (Var_122 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyTermPrime_109 = ((MR_Word) ((MR_hl_field(1, Var_122, 0))));
                Var_123 = ((MR_Word) ((MR_hl_field(1, Var_122, 1))));
                succeeded = (Var_123 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        HeadTerm_111 = HeadTermPrime_108;
        BodyTerm_112 = BodyTermPrime_109;
        ClauseContext_113 = TermContext_110;
      }
      else
      {
        HeadTerm_111 = Term_8;
        ClauseContext_113 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_111);
        {
          BodyTerm_112 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyTerm_112, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_3[0]));
          MR_hl_field(0, BodyTerm_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, BodyTerm_112, 2) = ((MR_Box) (ClauseContext_113));
        }
      }
      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, &ProgVarSet0_128);
      GoalContextPieces_129 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
      parse_tree__parse_goal__parse_goal_5_p_0(BodyTerm_112, GoalContextPieces_129, &MaybeBodyGoal_130, ProgVarSet0_128, &ProgVarSet_131);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ProgVarSet_131, &VarSet_132);
      succeeded = ((MR_tag((MR_Word) HeadTerm_111)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_151 = ((MR_Word) ((MR_hl_field(0, HeadTerm_111, 0))));
        Var_153 = ((MR_Word) ((MR_hl_field(0, HeadTerm_111, 1))));
        succeeded = ((MR_tag((MR_Word) Var_151)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_152 = ((MR_String) ((MR_hl_field(0, Var_151, 0))));
          succeeded = (strcmp(Var_152, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = (Var_153 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncHeadTerm0_133 = ((MR_Word) ((MR_hl_field(1, Var_153, 0))));
              Var_154 = ((MR_Word) ((MR_hl_field(1, Var_153, 1))));
              succeeded = (Var_154 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_155 = ((MR_Word) ((MR_hl_field(1, Var_154, 1))));
                succeeded = (Var_155 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FuncHeadTerm_136 = parse_tree__parse_item__desugar_field_access_1_f_0(FuncHeadTerm0_133);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Spec_138;

        succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_7, (MR_Word) ((MR_Unsigned) 12U), FuncHeadTerm_136, &Spec_138);
        if (succeeded)
        {
          MR_Word FunctorSpecs_149;
          MR_Word Specs_150;
          MR_Word Var_167;

          {
            FunctorSpecs_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FunctorSpecs_149, 0) = ((MR_Box) (Spec_138));
            MR_hl_field(1, FunctorSpecs_149, 1) = ((MR_Box) (Var_155));
          }
          Var_167 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_130);
          Specs_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_149, Var_167);
          {
            MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_150));
          }
        }
        else
        {
          MR_Word HeadContextPieces_140;
          MR_Word ModuleName_141;
          MR_Word MaybeFunctor_234;

          HeadContextPieces_140 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[152])));
          ModuleName_141 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_141, VarSet_132, HeadContextPieces_140, FuncHeadTerm_136, &MaybeFunctor_234);
          if (((MR_tag((MR_Word) MaybeFunctor_234)) == (MR_Integer) 0))
          {
            MR_Word FunctorSpecs_224 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_234, 0))));
            MR_Word Specs_225;
            MR_Word Var_226;

            Var_226 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_130);
            Specs_225 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_224, Var_226);
            {
              MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_225));
            }
          }
          else
          {
            MR_Word SymName_142 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_234, 0))));
            MR_Word ArgTerms0_143 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_234, 1))));
            MR_Word ArgTerms_146;
            MR_Word ProgArgTerms_147;
            MR_Word ItemClause_148;

            ArgTerms_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), ArgTerms0_143, Var_154);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[7]), ArgTerms_146, &ProgArgTerms_147);
            {
              ItemClause_148 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ItemClause_148, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, ItemClause_148, 1) = ((MR_Box) (SymName_142));
              MR_hl_field(0, ItemClause_148, 2) = ((MR_Box) (ProgArgTerms_147));
              MR_hl_field(0, ItemClause_148, 3) = ((MR_Box) (ProgVarSet_131));
              MR_hl_field(0, ItemClause_148, 4) = ((MR_Box) (MaybeBodyGoal_130));
              MR_hl_field(0, ItemClause_148, 5) = ((MR_Box) (ClauseContext_113));
              MR_hl_field(0, ItemClause_148, 6) = ((MR_Box) (SeqNum_9));
            }
            {
              MaybeClause_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeClause_13, 0) = ((MR_Box) (ItemClause_148));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_170;

        succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_7, (MR_Word) ((MR_Unsigned) 8U), HeadTerm_111, &Spec_170);
        if (succeeded)
        {
          MR_Word FunctorSpecs_180;
          MR_Word Specs_181;
          MR_Word Var_182;

          {
            FunctorSpecs_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FunctorSpecs_180, 0) = ((MR_Box) (Spec_170));
            MR_hl_field(1, FunctorSpecs_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_182 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_130);
          Specs_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_180, Var_182);
          {
            MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_181));
          }
        }
        else
        {
          MR_Word ModuleName_168;
          MR_Word HeadContextPieces_169;
          MR_Word MaybeFunctor_255;

          HeadContextPieces_169 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[154])));
          ModuleName_168 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_168, VarSet_132, HeadContextPieces_169, HeadTerm_111, &MaybeFunctor_255);
          if (((MR_tag((MR_Word) MaybeFunctor_255)) == (MR_Integer) 0))
          {
            MR_Word FunctorSpecs_240 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_255, 0))));
            MR_Word Specs_241;
            MR_Word Var_242;

            Var_242 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_130);
            Specs_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_240, Var_242);
            {
              MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_241));
            }
          }
          else
          {
            MR_Word SymName_185 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_255, 0))));
            MR_Word ArgTerms_188 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_255, 1))));
            MR_Word ProgArgTerms_189;
            MR_Word ItemClause_190;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[8]), ArgTerms_188, &ProgArgTerms_189);
            {
              ItemClause_190 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ItemClause_190, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ItemClause_190, 1) = ((MR_Box) (SymName_185));
              MR_hl_field(0, ItemClause_190, 2) = ((MR_Box) (ProgArgTerms_189));
              MR_hl_field(0, ItemClause_190, 3) = ((MR_Box) (ProgVarSet_131));
              MR_hl_field(0, ItemClause_190, 4) = ((MR_Box) (MaybeBodyGoal_130));
              MR_hl_field(0, ItemClause_190, 5) = ((MR_Box) (ClauseContext_113));
              MR_hl_field(0, ItemClause_190, 6) = ((MR_Box) (SeqNum_9));
            }
            {
              MaybeClause_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeClause_13, 0) = ((MR_Box) (ItemClause_190));
            }
          }
        }
      }
    }
    if (((MR_tag((MR_Word) MaybeClause_13)) == (MR_Integer) 0))
      *MaybeIOM_10 = (MR_Word) (MaybeClause_13);
    else
    {
      MR_Word ItemClause_14 = ((MR_Word) ((MR_hl_field(1, MaybeClause_13, 0))));
      MR_Word Var_21;
      MR_Word Var_22 = (MR_Word) ((MR_Word) (ItemClause_14));

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_53_93_95_48_6_p_0(
  MR_Word ModuleName_7,
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((ArgTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_121;
    MR_Word Pieces_127;
    MR_Word Spec_128;

    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (Functor_8));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[137])));
    }
    {
      Pieces_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_127, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
      MR_hl_field(1, Pieces_127, 1) = ((MR_Box) (Var_98));
    }
    {
      Spec_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_128, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
      MR_hl_field(0, Spec_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_128, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_128, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_128, 4) = ((MR_Box) (Pieces_127));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (Spec_128));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_121));
    }
  }
  else
  {
    MR_Word Var_184 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 1))));
    MR_Word Var_185 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));

    if ((Var_184 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_144;
      MR_Word Pieces_146;
      MR_Word Spec_147;

      {
        Var_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_139, 0) = ((MR_Box) ((MR_Unsigned) 35U));
        MR_hl_field(3, Var_139, 1) = ((MR_Box) (Functor_8));
      }
      {
        Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
        MR_hl_field(1, Var_138, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[137])));
      }
      {
        Pieces_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_146, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
        MR_hl_field(1, Pieces_146, 1) = ((MR_Box) (Var_138));
      }
      {
        Spec_147 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_147, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
        MR_hl_field(0, Spec_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_147, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_147, 3) = ((MR_Box) (Context_10));
        MR_hl_field(0, Spec_147, 4) = ((MR_Box) (Pieces_146));
      }
      {
        Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_144, 0) = ((MR_Box) (Spec_147));
        MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_144));
      }
    }
    else
    {
      MR_Word Var_186 = ((MR_Word) ((MR_hl_field(1, Var_184, 1))));
      MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, Var_184, 0))));

      if ((Var_186 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_156;
        MR_Word Pieces_158;
        MR_Word Spec_159;

        {
          Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 35U));
          MR_hl_field(3, Var_151, 1) = ((MR_Box) (Functor_8));
        }
        {
          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
          MR_hl_field(1, Var_150, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[137])));
        }
        {
          Pieces_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_158, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
          MR_hl_field(1, Pieces_158, 1) = ((MR_Box) (Var_150));
        }
        {
          Spec_159 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_159, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
          MR_hl_field(0, Spec_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_159, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_159, 3) = ((MR_Box) (Context_10));
          MR_hl_field(0, Spec_159, 4) = ((MR_Box) (Pieces_158));
        }
        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (Spec_159));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_156));
        }
      }
      else
      {
        MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, Var_186, 1))));
        MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, Var_186, 0))));

        if ((Var_188 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer VN_16;

          succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_185, &VN_16);
          if (succeeded)
          {
            MR_Integer Var_134;

            Var_134 = recompilation__version__module_item_version_numbers_version_number_0_f_0();
            succeeded = (VN_16 == Var_134);
            if (succeeded)
            {
              MR_Word Var_135;

              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_187, &Var_135);
              if (succeeded)
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_135);
              if (succeeded)
              {
                MR_Word MaybeVersionNumbers_17;

                recompilation__version__parse_module_item_version_numbers_2_p_0(Var_189, &MaybeVersionNumbers_17);
                if (((MR_tag((MR_Word) MaybeVersionNumbers_17)) == (MR_Integer) 0))
                  *MaybeIOM_12 = (MR_Word) (MaybeVersionNumbers_17);
                else
                {
                  MR_Word VersionNumbers_18 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_17, 0))));
                  MR_Word IOM_19;

                  {
                    IOM_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, IOM_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, IOM_19, 1) = ((MR_Box) (VersionNumbers_18));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeIOM_12 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IOM_19));
                  }
                }
              }
              else
              {
                MR_Word Spec_22;
                MR_Word Var_49;
                MR_Word Var_50;

                Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_187);
                {
                  Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
                  MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Var_49));
                  MR_hl_field(0, Spec_22, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[142])));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_22));
                  MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
                }
              }
            }
            else
            {
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Pieces_123;
              MR_Word Spec_124;

              Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[148])));
              Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
              Pieces_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[146])), Var_59);
              {
                Spec_124 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
                MR_hl_field(0, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, Spec_124, 3) = ((MR_Box) (Context_10));
                MR_hl_field(0, Spec_124, 4) = ((MR_Box) (Pieces_123));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_124));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_71));
              }
            }
          }
          else
          {
            MR_Word VersionNumberContext_23;
            MR_Word Var_88;
            MR_Word Spec_126;

            VersionNumberContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_189);
            {
              Spec_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_126, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
              MR_hl_field(0, Spec_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_126, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_126, 3) = ((MR_Box) (VersionNumberContext_23));
              MR_hl_field(0, Spec_126, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[150])));
            }
            {
              Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_88, 0) = ((MR_Box) (Spec_126));
              MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
            }
          }
        }
        else
        {
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_168;
          MR_Word Pieces_170;
          MR_Word Spec_171;

          {
            Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 35U));
            MR_hl_field(3, Var_163, 1) = ((MR_Box) (Functor_8));
          }
          {
            Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_162, 0) = ((MR_Box) (Var_163));
            MR_hl_field(1, Var_162, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[137])));
          }
          {
            Pieces_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_170, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
            MR_hl_field(1, Pieces_170, 1) = ((MR_Box) (Var_162));
          }
          {
            Spec_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_171, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
            MR_hl_field(0, Spec_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_171, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_171, 3) = ((MR_Box) (Context_10));
            MR_hl_field(0, Spec_171, 4) = ((MR_Box) (Pieces_170));
          }
          {
            Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_168, 0) = ((MR_Box) (Spec_171));
            MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_168));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_promise_item_5_p_0(
  MR_Word VarSet_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word SeqNum_9,
  MR_Word * MaybeIOM_10)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Term_11;
  MR_Word Var_30;

  if (succeeded)
  {
    Term_11 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, 1))));
    succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ProgVarSet0_12;
    MR_Word ContextPieces_13;
    MR_Word MaybeGoal0_14;
    MR_Word ProgVarSet_15;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, &ProgVarSet0_12);
    ContextPieces_13 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
    parse_tree__parse_goal__parse_goal_5_p_0(Term_11, ContextPieces_13, &MaybeGoal0_14, ProgVarSet0_12, &ProgVarSet_15);
    if (((MR_tag((MR_Word) MaybeGoal0_14)) == (MR_Integer) 0))
    {
      MR_Word Specs_27 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_14, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
      }
    }
    else
    {
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_14, 0))));
      MR_Word GoalWarningSpecs_17 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_14, 1))));

      if ((GoalWarningSpecs_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UnivVars_21;
        MR_Word Goal_22;
        MR_Word ItemPromise_23;
        MR_Word Item_24;
        MR_Word Var_34;
        MR_Word UnivVars0_19;
        MR_Word AllGoal_20;
        MR_Word Var_31;
        MR_Word Var_32;

        succeeded = ((((MR_tag((MR_Word) Goal0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal0_16, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_31 = ((((MR_Unsigned) ((MR_hl_field(3, Goal0_16, 1))) >> 1)) & (MR_Integer) 1);
          Var_32 = ((MR_Unsigned) ((MR_hl_field(3, Goal0_16, 1))) & (MR_Integer) 1);
          UnivVars0_19 = ((MR_Word) ((MR_hl_field(3, Goal0_16, 3))));
          AllGoal_20 = ((MR_Word) ((MR_hl_field(3, Goal0_16, 4))));
          succeeded = (Var_31 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (Var_32 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          UnivVars_21 = UnivVars0_19;
          Goal_22 = AllGoal_20;
        }
        else
        {
          UnivVars_21 = (MR_Word) ((MR_Unsigned) 0U);
          Goal_22 = Goal0_16;
        }
        {
          ItemPromise_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemPromise_23, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          MR_hl_field(0, ItemPromise_23, 1) = ((MR_Box) (Goal_22));
          MR_hl_field(0, ItemPromise_23, 2) = ((MR_Box) (ProgVarSet_15));
          MR_hl_field(0, ItemPromise_23, 3) = ((MR_Box) (UnivVars_21));
          MR_hl_field(0, ItemPromise_23, 4) = ((MR_Box) (Context_8));
          MR_hl_field(0, ItemPromise_23, 5) = ((MR_Box) (SeqNum_9));
        }
        {
          Item_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Item_24, 1) = ((MR_Box) (ItemPromise_23));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Item_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalWarningSpecs_17));
        }
    }
  }
  else
  {
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_63;

    Var_40 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[222])));
    Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[225])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_48);
    Pieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_39);
    {
      Spec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_item\'/5"));
      MR_hl_field(0, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_29, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Avail_8;

  parse_tree__parse_item__make_item_avail_use_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_Avail_8);
  *wrapper_arg_2 = ((MR_Box) (conv4_Avail_8));
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Incl_8;

  parse_tree__parse_item__make_item_include_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Incl_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_Incl_8));
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Avail_8;

  parse_tree__parse_item__make_item_avail_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Avail_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_Avail_8));
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeModule_8;

  parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybeModule_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_MaybeModule_8));
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeModuleName_6;

  parse_tree__parse_item__parse_module_name_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeModuleName_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeModuleName_6));
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IIU_15,
  MR_Word * MaybeIOM_16)
{
  MR_Word Parser_17;

  switch (IIU_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        Parser_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[2]));
        MR_hl_field(0, Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1));
        MR_hl_field(0, Parser_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Parser_17, 3) = ((MR_Box) (VarSet_10));
      }
      break;
    case (MR_Integer) 0:
      {
        Parser_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_7[0]));
        MR_hl_field(0, Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2));
        MR_hl_field(0, Parser_17, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Parser_17, 3) = ((MR_Box) (ModuleName_9));
        MR_hl_field(0, Parser_17, 4) = ((MR_Box) (VarSet_10));
      }
      break;
  }
  if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Article_34;
    MR_Word Pieces_35;
    MR_Word Spec_36;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_77;

    switch (IIU_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        Article_34 = (MR_String) "an";
        break;
      case (MR_Integer) 2:
        Article_34 = (MR_String) "a";
        break;
    }
    {
      Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_49, 1) = ((MR_Box) (Article_34));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[57])));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (Functor_11));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
    }
    Var_52 = parse_tree__error_spec__color_as_subject_1_f_0(Var_53);
    Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[119])));
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_59);
    Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_51);
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_incl_imp_use_items\'/8"));
      MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Context_13));
      MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_35));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
    }
  }
  else
  {
    MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
    MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

    if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeModuleNames_19;

      parse_tree__parse_util__parse_comma_separated_one_or_more_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parser_17, Var_153, &MaybeModuleNames_19);
      if (((MR_tag((MR_Word) MaybeModuleNames_19)) == (MR_Integer) 0))
        *MaybeIOM_16 = (MR_Word) (MaybeModuleNames_19);
      else
      {
        MR_Word ModuleNames_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleNames_19, 0))));
        MR_Word HeadModuleName_21 = ((MR_Word) ((MR_hl_field(0, ModuleNames_20, 0))));
        MR_Word TailModuleNames_22 = ((MR_Word) ((MR_hl_field(0, ModuleNames_20, 1))));
        MR_Word IOM_25;

        switch (IIU_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word HeadImport_26;
              MR_Word TailImports_27;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word AvailImportInfo_154;

              {
                AvailImportInfo_154 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, AvailImportInfo_154, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(0, AvailImportInfo_154, 1) = ((MR_Box) (Context_13));
                MR_hl_field(0, AvailImportInfo_154, 2) = ((MR_Box) (SeqNum_14));
              }
              HeadImport_26 = (MR_Word) ((MR_Word) (AvailImportInfo_154));
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_7[1]));
                MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3));
                MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_40, 3) = ((MR_Box) (Context_13));
                MR_hl_field(0, Var_40, 4) = ((MR_Box) (SeqNum_14));
              }
              mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_40, TailModuleNames_22, &TailImports_27);
              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_41, 0) = ((MR_Box) (HeadImport_26));
                MR_hl_field(0, Var_41, 1) = ((MR_Box) (TailImports_27));
              }
              {
                IOM_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, IOM_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, IOM_25, 1) = ((MR_Box) (Var_41));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word HeadIncl_23;
              MR_Word TailIncls_24;
              MR_Word Var_38;
              MR_Word Var_39;

              {
                HeadIncl_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HeadIncl_23, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(0, HeadIncl_23, 1) = ((MR_Box) (Context_13));
                MR_hl_field(0, HeadIncl_23, 2) = ((MR_Box) (SeqNum_14));
              }
              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_7[2]));
                MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4));
                MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_38, 3) = ((MR_Box) (Context_13));
                MR_hl_field(0, Var_38, 4) = ((MR_Box) (SeqNum_14));
              }
              mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_38, TailModuleNames_22, &TailIncls_24);
              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_39, 0) = ((MR_Box) (HeadIncl_23));
                MR_hl_field(0, Var_39, 1) = ((MR_Box) (TailIncls_24));
              }
              {
                IOM_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, IOM_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, IOM_25, 1) = ((MR_Box) (Var_39));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadUse_28;
              MR_Word TailUses_29;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word AvailUseInfo_155;

              {
                AvailUseInfo_155 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, AvailUseInfo_155, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(0, AvailUseInfo_155, 1) = ((MR_Box) (Context_13));
                MR_hl_field(0, AvailUseInfo_155, 2) = ((MR_Box) (SeqNum_14));
              }
              HeadUse_28 = (MR_Word) (MR_mkword(1, (MR_Word) (AvailUseInfo_155)));
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_7[1]));
                MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5));
                MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_42, 3) = ((MR_Box) (Context_13));
                MR_hl_field(0, Var_42, 4) = ((MR_Box) (SeqNum_14));
              }
              mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_42, TailModuleNames_22, &TailUses_29);
              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_43, 0) = ((MR_Box) (HeadUse_28));
                MR_hl_field(0, Var_43, 1) = ((MR_Box) (TailUses_29));
              }
              {
                IOM_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, IOM_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, IOM_25, 1) = ((MR_Box) (Var_43));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IOM_25));
        }
      }
    }
    else
    {
      MR_String Article_94;
      MR_Word Pieces_95;
      MR_Word Spec_96;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_120;

      switch (IIU_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          Article_94 = (MR_String) "an";
          break;
        case (MR_Integer) 2:
          Article_94 = (MR_String) "a";
          break;
      }
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_101, 1) = ((MR_Box) (Article_94));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[57])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 35U));
        MR_hl_field(3, Var_106, 1) = ((MR_Box) (Functor_11));
      }
      {
        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
        MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
      }
      Var_104 = parse_tree__error_spec__color_as_subject_1_f_0(Var_105);
      Var_112 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[119])));
      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
      Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_111);
      Pieces_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_103);
      {
        Spec_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_96, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_incl_imp_use_items\'/8"));
        MR_hl_field(0, Spec_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_96, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_96, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, Spec_96, 4) = ((MR_Box) (Pieces_95));
      }
      {
        Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_120, 0) = ((MR_Box) (Spec_96));
        MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_120));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_section_marker_6_p_0(
  MR_String Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Word SeqNum_10,
  MR_Word Section_11,
  MR_Word * MaybeIOM_12)
{
  if ((ArgTerms_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Marker_13;

    {
      Marker_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Marker_13, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Marker_13, 1) = (MR_Box) ((MR_Unsigned) (Section_11));
      MR_hl_field(3, Marker_13, 2) = ((MR_Box) (Context_9));
      MR_hl_field(3, Marker_13, 3) = ((MR_Box) (SeqNum_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Marker_13));
    }
  }
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_42;

    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
    }
    Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
    Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[114])));
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_30);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[110])), Var_22);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_section_marker\'/6"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_marker_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Word SeqNum_7,
  MR_Word * MaybeIOM_8)
{
  MR_bool succeeded = (ArgTerms_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ModuleName_10;
  MR_Word TypeCtorInfo_45_45;
  MR_Word ModuleNameTerm_9;
  MR_Word Var_14;

  if (succeeded)
  {
    ModuleNameTerm_9 = ((MR_Word) ((MR_hl_field(1, ArgTerms_5, 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_5, 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_45_45 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_2_p_0(TypeCtorInfo_45_45, ModuleNameTerm_9, &ModuleName_10);
    }
  }
  if (succeeded)
  {
    MR_Word Marker_11;

    {
      Marker_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Marker_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Marker_11, 1) = ((MR_Box) (ModuleName_10));
      MR_hl_field(3, Marker_11, 2) = ((MR_Box) (Context_6));
      MR_hl_field(3, Marker_11, 3) = ((MR_Box) (SeqNum_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Marker_11));
    }
  }
  else
  {
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_43;

    Var_20 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[104])));
    Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[108])));
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_28);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_19);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_module_marker\'/4"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_String Functor_13,
  MR_Word ArgTerms_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word PurityAttrs0_18,
  MR_Word QuantConstrAttrs0_19,
  MR_Word * MaybeIOM_20)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string6(Functor_13)) & (MR_Integer) 63);
  MR_String str_1 = ((&parse_tree__parse_item_vector_common_6[0 + slot_0]))->parse_tree__parse_item__vector_common_type_6_0__vct_6_f_0;

  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_13) == 0))))
  {
    // we found a match; dispatch to the corresponding code
    ;
    switch (slot_0) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
        {
          // case "impure"
          ;
          parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 2, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          // case "promise_exhaustive"
          ;
          parse_tree__parse_item__parse_promise_ex_item_9_p_0(VarSet_12, Functor_13, ArgTerms_14, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case "promise_exclusive"
          ;
          parse_tree__parse_item__parse_promise_ex_item_9_p_0(VarSet_12, Functor_13, ArgTerms_14, Context_16, SeqNum_17, (MR_Integer) 0, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case "func"
          ;
          {
            MR_Word Var_65;
            MR_Word Var_66;

            Var_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrs0_18);
            Var_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrs0_19);
            parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, Var_65, Var_66, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 17:
        {
          // case "mode"
          ;
          {
            MR_Word MaybeIOM0_21;
            MR_Word Var_31;

            Var_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrs0_19);
            parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(ModuleName_11, VarSet_12, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, Var_31, &MaybeIOM0_21);
            succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrs0_18);
            if (succeeded)
              *MaybeIOM_20 = MaybeIOM0_21;
            else
            {
              MR_Word Pieces_22;
              MR_Word Spec_23;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_42;
              MR_Word Var_47;
              MR_Word Var_48;

              Var_37 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[66])));
              Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[68])));
              Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[70])));
              Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[17])), Var_47);
              Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
              Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_36);
              {
                Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_attr_decl_item_or_marker\'/10"));
                MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_16));
                MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
              }
              if (((MR_tag((MR_Word) MaybeIOM0_21)) == (MR_Integer) 0))
              {
                MR_Word Specs0_25 = ((MR_Word) ((MR_hl_field(0, MaybeIOM0_21, 0))));
                MR_Word Var_64;

                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) (Specs0_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_20 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
                }
              }
              else
              {
                MR_Word Var_62;

                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_20 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
                }
              }
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 26:
        {
          // case "all"
          ;
          parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 31:
        {
          // case "pred"
          ;
          {
            MR_Word Var_76;
            MR_Word Var_77;

            Var_76 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrs0_18);
            Var_77 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrs0_19);
            parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, Var_76, Var_77, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 34:
        {
          // case "semipure"
          ;
          parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 39:
        {
          // case "promise_exclusive_exhaustive"
          ;
          parse_tree__parse_item__parse_promise_ex_item_9_p_0(VarSet_12, Functor_13, ArgTerms_14, Context_16, SeqNum_17, (MR_Integer) 2, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 41:
        {
          // case "=>"
          ;
          parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 48:
        {
          // case "some"
          ;
          parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 59:
        {
          // case "<="
          ;
          parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
          succeeded = MR_TRUE;
        }
        break;
    }
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item__parse_purity_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word Purity_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_30,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_66;

    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_39 = parse_tree__error_spec__color_as_subject_1_f_0(Var_40);
    Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[92])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[88])), Var_48);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_43);
    Pieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[82])), Var_38);
    {
      Spec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_purity_attr\'/11"));
      MR_hl_field(0, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_29, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
    }
  }
  else
  {
    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 1))));
    MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 0))));

    if ((Var_128 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PurityAttr_24 = (MR_Word) (Purity_19);
      MR_Word STATE_VARIABLE_PurityAttrs_1_32;

      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), ((MR_Box) (PurityAttr_24)), STATE_VARIABLE_PurityAttrs_0_30, &STATE_VARIABLE_PurityAttrs_1_32);
      parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(ModuleName_12, VarSet_13, Var_129, IsInClass_16, SeqNum_18, STATE_VARIABLE_PurityAttrs_1_32, QuantConstrAttrs_21, MaybeIOM_22);
    }
    else
    {
      MR_Word Pieces_70;
      MR_Word Spec_71;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_96;

      {
        Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_79, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_77 = parse_tree__error_spec__color_as_subject_1_f_0(Var_78);
      Var_87 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
      Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[92])));
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[88])), Var_86);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_81);
      Pieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[82])), Var_76);
      {
        Spec_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_purity_attr\'/11"));
        MR_hl_field(0, Spec_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_71, 3) = ((MR_Box) (Context_17));
        MR_hl_field(0, Spec_71, 4) = ((MR_Box) (Pieces_70));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Spec_71));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_constraint_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word QuantType_19,
  MR_Word PurityAttrs_20,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_33,
  MR_Word * MaybeIOM_22)
{
  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_72;

    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
    Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[86])));
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])), Var_54);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_49);
    Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[82])), Var_44);
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_constraint_attr\'/11"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
  else
  {
    MR_Word Var_163 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 1))));
    MR_Word Var_164 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 0))));

    if ((Var_163 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_76;
      MR_Word Spec_77;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_87;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_102;

      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_85, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_83 = parse_tree__error_spec__color_as_subject_1_f_0(Var_84);
      Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[86])));
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])), Var_92);
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_87);
      Pieces_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[82])), Var_82);
      {
        Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_constraint_attr\'/11"));
        MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Context_17));
        MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_76));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Spec_77));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
      }
    }
    else
    {
      MR_Word Var_165 = ((MR_Word) ((MR_hl_field(1, Var_163, 1))));
      MR_Word Var_166 = ((MR_Word) ((MR_hl_field(1, Var_163, 0))));

      if ((Var_165 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ConstrAttr_25;
        MR_Word STATE_VARIABLE_QuantConstrAttrs_1_36;

        {
          ConstrAttr_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConstrAttr_25, 0) = (MR_Box) ((MR_Unsigned) (QuantType_19));
          MR_hl_field(1, ConstrAttr_25, 1) = ((MR_Box) (Var_166));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), ((MR_Box) (ConstrAttr_25)), STATE_VARIABLE_QuantConstrAttrs_0_33, &STATE_VARIABLE_QuantConstrAttrs_1_36);
        parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(ModuleName_12, VarSet_13, Var_164, IsInClass_16, SeqNum_18, PurityAttrs_20, STATE_VARIABLE_QuantConstrAttrs_1_36, MaybeIOM_22);
      }
      else
      {
        MR_Word Pieces_105;
        MR_Word Spec_106;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_116;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_131;

        {
          Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_114, 1) = ((MR_Box) (Functor_14));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_112 = parse_tree__error_spec__color_as_subject_1_f_0(Var_113);
        Var_122 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[86])));
        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])), Var_121);
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_116);
        Pieces_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[82])), Var_111);
        {
          Spec_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_constraint_attr\'/11"));
          MR_hl_field(0, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_106, 3) = ((MR_Box) (Context_17));
          MR_hl_field(0, Spec_106, 4) = ((MR_Box) (Pieces_105));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (Spec_106));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_quant_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word QuantType_19,
  MR_Word PurityAttrs_20,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_33,
  MR_Word * MaybeIOM_22)
{
  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_72;

    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
    Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[80])));
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])), Var_54);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_49);
    Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[72])), Var_44);
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_quant_attr\'/11"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
  else
  {
    MR_Word Var_163 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 1))));
    MR_Word Var_164 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 0))));

    if ((Var_163 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_76;
      MR_Word Spec_77;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_87;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_102;

      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_85, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_83 = parse_tree__error_spec__color_as_subject_1_f_0(Var_84);
      Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[80])));
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])), Var_92);
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_87);
      Pieces_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[72])), Var_82);
      {
        Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_quant_attr\'/11"));
        MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Context_17));
        MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_76));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Spec_77));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
      }
    }
    else
    {
      MR_Word Var_165 = ((MR_Word) ((MR_hl_field(1, Var_163, 1))));
      MR_Word Var_166 = ((MR_Word) ((MR_hl_field(1, Var_163, 0))));

      if ((Var_165 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word QuantAttr_25;
        MR_Word STATE_VARIABLE_QuantConstrAttrs_1_36;

        {
          QuantAttr_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QuantAttr_25, 0) = (MR_Box) ((MR_Unsigned) (QuantType_19));
          MR_hl_field(0, QuantAttr_25, 1) = ((MR_Box) (Var_164));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), ((MR_Box) (QuantAttr_25)), STATE_VARIABLE_QuantConstrAttrs_0_33, &STATE_VARIABLE_QuantConstrAttrs_1_36);
        parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(ModuleName_12, VarSet_13, Var_166, IsInClass_16, SeqNum_18, PurityAttrs_20, STATE_VARIABLE_QuantConstrAttrs_1_36, MaybeIOM_22);
      }
      else
      {
        MR_Word Pieces_105;
        MR_Word Spec_106;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_116;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_131;

        {
          Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_114, 1) = ((MR_Box) (Functor_14));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_112 = parse_tree__error_spec__color_as_subject_1_f_0(Var_113);
        Var_122 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[76])));
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[80])));
        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])), Var_121);
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_116);
        Pieces_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[72])), Var_111);
        {
          Spec_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_quant_attr\'/11"));
          MR_hl_field(0, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_106, 3) = ((MR_Box) (Context_17));
          MR_hl_field(0, Spec_106, 4) = ((MR_Box) (Pieces_105));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (Spec_106));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word IsInClass_13,
  MR_Word SeqNum_15,
  MR_Word PurityAttrs_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
  MR_String Functor_19;
  MR_Word ArgTerms_20;
  MR_Word FunctorContext_21;
  MR_Word Var_25;

  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_12, 0))));
    ArgTerms_20 = ((MR_Word) ((MR_hl_field(0, Term_12, 1))));
    FunctorContext_21 = ((MR_Word) ((MR_hl_field(0, Term_12, 2))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
      Functor_19 = ((MR_String) ((MR_hl_field(0, Var_25, 0))));
  }
  if (succeeded)
  {
    MR_Word MaybeIOMPrime_22;

    succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, PurityAttrs_16, QuantConstrAttrs_17, &MaybeIOMPrime_22);
    if (succeeded)
      *MaybeIOM_18 = MaybeIOMPrime_22;
    else
    {
      succeeded = (strcmp(Functor_19, (MR_String) ":-") == 0);
      if (succeeded)
        succeeded = (IsInClass_13 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_41;
        MR_Word Var_55;

        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (Functor_19));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
        Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[94])));
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[98])), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_41);
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_35);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_30);
        {
          Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_attributed_decl\'/9"));
          MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_24, 3) = ((MR_Box) (FunctorContext_21));
          MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
        }
      }
      else
      {
        MR_Word Var_57;
        MR_Word Spec_61;
        MR_Word Pieces_64;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_Word Var_79;
        MR_Word Var_80;

        {
          Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_72, 1) = ((MR_Box) (Functor_19));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_70 = parse_tree__error_spec__color_as_subject_1_f_0(Var_71);
        Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[64])));
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[60])), Var_79);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_74);
        Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_69);
        {
          Spec_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_61, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_functor_is_not_valid\'/2"));
          MR_hl_field(0, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_61, 3) = ((MR_Box) (FunctorContext_21));
          MR_hl_field(0, Spec_61, 4) = ((MR_Box) (Pieces_64));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (Spec_61));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
        }
      }
    }
  }
  else
  {
    MR_Word Var_59;
    MR_Word Spec_62;

    Spec_62 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_11, Term_12);
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Spec_62));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_59));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_promise_ex_item_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_177;

  conv0_HeadVar__2_177 = parse_tree__parse_item__IntroducedFrom__func__parse_promise_ex_item__1975__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_177));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_item__parse_promise_ex_item_9_p_0(
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word PromiseType_15,
  MR_Word PurityAttrCord_16,
  MR_Word QuantConstrAttrCord_17,
  MR_Word * MaybeIOM_18)
{
  MR_bool succeeded = (ArgTerms_12 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Term_19;
  MR_Word Var_48;

  if (succeeded)
  {
    Term_19 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));
    Var_48 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
    succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word PurityAttrs_20;
    MR_Word PuritySpecs_21;
    MR_Word QuantConstrAttrs_26;
    MR_Word ContextPieces_27;
    MR_Word MaybeUnivVars_30;
    MR_Word ProgVarSet0_34;
    MR_Word MaybeGoal0_35;
    MR_Word ProgVarSet_36;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word VarsTerm_29;
    MR_Word QuantConstrAttr_28;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word UnivVars_37;
    MR_Word Goal_38;
    MR_Word GoalWarningSpecs_39;

    PurityAttrs_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrCord_16);
    if ((PurityAttrs_20 == (MR_Word) ((MR_Unsigned) 0U)))
      PuritySpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PurityPieces_24;
      MR_Word PuritySpec_25;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_61;
      MR_Word Var_62;

      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 35U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (Functor_11));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
      }
      Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
      Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[227])));
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[229])));
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_61);
      PurityPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_53);
      {
        PuritySpec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PuritySpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_ex_item\'/9"));
        MR_hl_field(0, PuritySpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, PuritySpec_25, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, PuritySpec_25, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, PuritySpec_25, 4) = ((MR_Box) (PurityPieces_24));
      }
      {
        PuritySpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PuritySpecs_21, 0) = ((MR_Box) (PuritySpec_25));
        MR_hl_field(1, PuritySpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    QuantConstrAttrs_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrCord_17);
    {
      Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_81, 1) = ((MR_Box) (Functor_11));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[161])));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    ContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77);
    succeeded = (QuantConstrAttrs_26 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      QuantConstrAttr_28 = ((MR_Word) ((MR_hl_field(1, QuantConstrAttrs_26, 0))));
      Var_88 = ((MR_Word) ((MR_hl_field(1, QuantConstrAttrs_26, 1))));
      succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) QuantConstrAttr_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_89 = ((MR_Unsigned) ((MR_hl_field(0, QuantConstrAttr_28, 0))) & (MR_Integer) 1);
          VarsTerm_29 = ((MR_Word) ((MR_hl_field(0, QuantConstrAttr_28, 1))));
          succeeded = (Var_89 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
      parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0((MR_Integer) 1, (MR_Integer) 0, ContextPieces_27, VarSet_10, VarsTerm_29, &MaybeUnivVars_30);
    else
    {
      MR_String Form_31;
      MR_Word UnivVarsPieces_32;
      MR_Word UnivVarsSpec_33;
      MR_String Var_93;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_113;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_133;

      Var_93 = mercury__string__f_43_43_2_f_0(Functor_11, (MR_String) " ( <disjunction> )");
      Form_31 = mercury__string__f_43_43_2_f_0((MR_String) ":- all [<vars>] ", Var_93);
      {
        Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 35U));
        MR_hl_field(3, Var_102, 1) = ((MR_Box) (Functor_11));
      }
      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
      }
      Var_100 = parse_tree__error_spec__color_as_subject_1_f_0(Var_101);
      Var_108 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[231])));
      {
        Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_121, 1) = ((MR_Box) (Form_31));
      }
      {
        Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
        MR_hl_field(1, Var_120, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[26])));
      }
      Var_119 = parse_tree__error_spec__color_as_correct_1_f_0(Var_120);
      Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_119, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[235])));
      Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[233])), Var_118);
      Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, Var_113);
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_107);
      UnivVarsPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_99);
      {
        UnivVarsSpec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnivVarsSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_ex_item\'/9"));
        MR_hl_field(0, UnivVarsSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, UnivVarsSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, UnivVarsSpec_33, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, UnivVarsSpec_33, 4) = ((MR_Box) (UnivVarsPieces_32));
      }
      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (UnivVarsSpec_33));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeUnivVars_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeUnivVars_30, 0) = ((MR_Box) (Var_133));
      }
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, &ProgVarSet0_34);
    parse_tree__parse_goal__parse_goal_5_p_0(Term_19, ContextPieces_27, &MaybeGoal0_35, ProgVarSet0_34, &ProgVarSet_36);
    succeeded = (PuritySpecs_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeUnivVars_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        UnivVars_37 = ((MR_Word) ((MR_hl_field(1, MaybeUnivVars_30, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeGoal0_35)) == (MR_Integer) 1);
        if (succeeded)
        {
          Goal_38 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_35, 0))));
          GoalWarningSpecs_39 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_35, 1))));
          succeeded = (GoalWarningSpecs_39 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word UnivProgVars_40;
      MR_Word ItemPromise_41;
      MR_Word Item_42;
      MR_Word Var_136;

      UnivProgVars_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[10]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[6]), UnivVars_37);
      {
        ItemPromise_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemPromise_41, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_15));
        MR_hl_field(0, ItemPromise_41, 1) = ((MR_Box) (Goal_38));
        MR_hl_field(0, ItemPromise_41, 2) = ((MR_Box) (ProgVarSet_36));
        MR_hl_field(0, ItemPromise_41, 3) = ((MR_Box) (UnivProgVars_40));
        MR_hl_field(0, ItemPromise_41, 4) = ((MR_Box) (Context_13));
        MR_hl_field(0, ItemPromise_41, 5) = ((MR_Box) (SeqNum_14));
      }
      {
        Item_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Item_42, 1) = ((MR_Box) (ItemPromise_41));
      }
      {
        Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_136, 0) = ((MR_Box) (Item_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_136));
      }
    }
    else
    {
      MR_Word GoalSpecs_44;
      MR_Word Specs_45;
      MR_Word Var_137;
      MR_Word Var_138;

      if (((MR_tag((MR_Word) MaybeGoal0_35)) == (MR_Integer) 0))
        GoalSpecs_44 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_35, 0))));
      else
        GoalSpecs_44 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_35, 1))));
      Var_138 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[11]), MaybeUnivVars_30);
      Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_138, GoalSpecs_44);
      Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PuritySpecs_21, Var_137);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_45));
      }
    }
  }
  else
  {
    MR_Word Pieces_46;
    MR_Word Spec_47;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_166;

    {
      Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_146, 1) = ((MR_Box) (Functor_11));
    }
    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
      MR_hl_field(1, Var_145, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
    }
    Var_144 = parse_tree__error_spec__color_as_subject_1_f_0(Var_145);
    Var_152 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[225])));
    Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
    Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_144, Var_151);
    Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_143);
    {
      Spec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_ex_item\'/9"));
      MR_hl_field(0, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_47, 3) = ((MR_Box) (Context_13));
      MR_hl_field(0, Spec_47, 4) = ((MR_Box) (Pieces_46));
    }
    {
      Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_166, 0) = ((MR_Box) (Spec_47));
      MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_166));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word PredOrFunc_19,
  MR_Word PurityAttrs_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  MR_bool succeeded;

  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_45;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_125;
    MR_Word Spec_129;

    {
      Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_97, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
    }
    Var_95 = parse_tree__error_spec__color_as_subject_1_f_0(Var_96);
    Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[122])));
    {
      Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_115, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[138])));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[156])));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[155])));
      MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
    }
    Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, Var_108);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_102);
    Pieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_94);
    {
      Spec_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_129, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_or_func_decl_item\'/11"));
      MR_hl_field(0, Spec_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_129, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_129, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Spec_129, 4) = ((MR_Box) (Pieces_45));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (Spec_129));
      MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_125));
    }
  }
  else
  {
    MR_Word Var_208 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 1))));
    MR_Word Var_209 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, 0))));

    if ((Var_208 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredOrFuncDeclPieces_24;
      MR_Word DetismContextPieces_25;
      MR_Word BeforeDetismTerm_26;
      MR_Word MaybeMaybeDetism_27;
      MR_Word WithInstContextPieces_28;
      MR_Word BeforeWithInstTerm_29;
      MR_Word MaybeWithInst_30;
      MR_Word MaybeWithType_32;
      MR_Word BaseTerm_33;
      MR_Word Var_64;
      MR_Word Var_69;
      MR_Word MaybeDetism_34;
      MR_Word WithInst_35;
      MR_Word WithType_36;

      switch (IsInClass_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_49;
            MR_Word Var_50;

            {
              Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_50, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[159])));
            }
            {
              PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[157])));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 1) = ((MR_Box) (Var_49));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_57;

            {
              Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_57, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
            }
            {
              PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 0) = ((MR_Box) (Var_57));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[161])));
            }
          }
          break;
      }
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[163])), PredOrFuncDeclPieces_24);
      DetismContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64);
      parse_tree__parse_item__parse_determinism_suffix_5_p_0(VarSet_13, DetismContextPieces_25, Var_209, &BeforeDetismTerm_26, &MaybeMaybeDetism_27);
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[169])), PredOrFuncDeclPieces_24);
      WithInstContextPieces_28 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69);
      parse_tree__parse_item__parse_with_inst_suffix_5_p_0(VarSet_13, WithInstContextPieces_28, BeforeDetismTerm_26, &BeforeWithInstTerm_29, &MaybeWithInst_30);
      parse_tree__parse_item__parse_with_type_suffix_4_p_0(VarSet_13, BeforeWithInstTerm_29, &BaseTerm_33, &MaybeWithType_32);
      succeeded = ((MR_tag((MR_Word) MaybeMaybeDetism_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        MaybeDetism_34 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeDetism_27, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeWithInst_30)) == (MR_Integer) 1);
        if (succeeded)
        {
          WithInst_35 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_30, 0))));
          succeeded = ((MR_tag((MR_Word) MaybeWithType_32)) == (MR_Integer) 1);
          if (succeeded)
            WithType_36 = ((MR_Word) ((MR_hl_field(1, MaybeWithType_32, 0))));
        }
      }
      if (succeeded)
      {
        succeeded = (WithInst_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeDetism_34 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Spec_39;
          MR_Word Var_80;
          MR_Word Var_81;

          {
            Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_80, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
          }
          Spec_39 = parse_tree__parse_item__report_with_inst_and_detism_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_80, BaseTerm_33);
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) (Spec_39));
            MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
          }
        }
        else
        {
          succeeded = (WithInst_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (WithType_36 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word Var_83;
            MR_Word Spec_127;

            Spec_127 = parse_tree__parse_item__report_with_inst_no_with_type_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredOrFunc_19, BaseTerm_33);
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Spec_127));
              MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_83));
            }
          }
          else
          {
            succeeded = (PredOrFunc_19 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (WithType_36 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              parse_tree__parse_item__parse_func_decl_base_10_p_0(ModuleName_12, VarSet_13, BaseTerm_33, MaybeDetism_34, IsInClass_16, Context_17, SeqNum_18, PurityAttrs_20, QuantConstrAttrs_21, MaybeIOM_22);
            else
              parse_tree__parse_item__parse_pred_decl_base_13_p_0(PredOrFunc_19, ModuleName_12, VarSet_13, BaseTerm_33, WithType_36, WithInst_35, MaybeDetism_34, IsInClass_16, Context_17, SeqNum_18, PurityAttrs_20, QuantConstrAttrs_21, MaybeIOM_22);
          }
        }
      }
      else
      {
        MR_Word Specs_41;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;

        Var_85 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[2]), MaybeMaybeDetism_27);
        Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[3]), MaybeWithInst_30);
        Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[4]), MaybeWithType_32);
        Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_87, Var_88);
        Specs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_85, Var_86);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_41));
        }
      }
    }
    else
    {
      MR_Word Pieces_138;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_157;
      MR_Word Var_160;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_169;
      MR_Word Spec_171;

      {
        Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 35U));
        MR_hl_field(3, Var_146, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
        MR_hl_field(1, Var_145, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])));
      }
      Var_144 = parse_tree__error_spec__color_as_subject_1_f_0(Var_145);
      Var_152 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[122])));
      {
        Var_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_164, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_164, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_163, 0) = ((MR_Box) (Var_164));
        MR_hl_field(1, Var_163, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[138])));
      }
      {
        Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_160, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[156])));
        MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_163));
      }
      {
        Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_157, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[155])));
        MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_160));
      }
      Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, Var_157);
      Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_144, Var_151);
      Pieces_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_143);
      {
        Spec_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_171, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_or_func_decl_item\'/11"));
        MR_hl_field(0, Spec_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_171, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_171, 3) = ((MR_Box) (Context_17));
        MR_hl_field(0, Spec_171, 4) = ((MR_Box) (Pieces_138));
      }
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (Spec_171));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_169));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_inst_no_with_type_2_f_0(
  MR_Word TypeInfo_for_T_59,
  MR_Word PredOrFunc_4,
  MR_Word Term_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Context_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word Var_42;

  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_13, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_4));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[258])));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_12));
  }
  Var_22 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[282])));
  Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[284])));
  Var_42 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[285])));
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[287])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[264])), Var_41);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_36);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_30);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9, Var_21);
  Context_8 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_59, Term_5);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.report_with_inst_no_with_type\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static void MR_CALL 
parse_tree__parse_item__parse_with_inst_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeWithInstTerm_9,
  MR_Word * MaybeWithInst_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_Word BeforeWithInstTermPrime_11;
  MR_Word InstTerm_12;
  MR_Word Var_17;
  MR_String Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, 0))));
      succeeded = (strcmp(Var_18, (MR_String) "with_inst") == 0);
      if (succeeded)
      {
        succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeWithInstTermPrime_11 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InstTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, 1))));
            succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeInst_14;

    *BeforeWithInstTerm_9 = BeforeWithInstTermPrime_11;
    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_6, ContextPieces_7, InstTerm_12, &MaybeInst_14);
    if (((MR_tag((MR_Word) MaybeInst_14)) == (MR_Integer) 0))
      *MaybeWithInst_10 = (MR_Word) (MaybeInst_14);
    else
    {
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, MaybeInst_14, 0))));
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Inst_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeWithInst_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
      }
    }
  }
  else
  {
    *BeforeWithInstTerm_9 = Term_8;
    *MaybeWithInst_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[8]));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_with_type_suffix_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_6,
  MR_Word * BeforeWithTypeTerm_7,
  MR_Word * MaybeWithType_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word BeforeWithTypeTermPrime_10;
  MR_Word TypeTerm_11;
  MR_Word TypeQualifier_9;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_String Var_39;

  if (succeeded)
  {
    TypeQualifier_9 = ((MR_Word) ((MR_hl_field(0, Term_6, 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_6, 1))));
    succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BeforeWithTypeTermPrime_10 = ((MR_Word) ((MR_hl_field(1, Var_17, 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, 1))));
      succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
        Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) TypeQualifier_9)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_39 = ((MR_String) ((MR_hl_field(0, TypeQualifier_9, 0))));
            if ((strcmp(Var_39, (MR_String) ":") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(Var_39, (MR_String) "with_type") == 0))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ContextPieces_13;
    MR_Word MaybeType_14;

    *BeforeWithTypeTerm_7 = BeforeWithTypeTermPrime_10;
    ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[247])));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[6])), VarSet_5, ContextPieces_13, TypeTerm_11, &MaybeType_14);
    if (((MR_tag((MR_Word) MaybeType_14)) == (MR_Integer) 0))
      *MaybeWithType_8 = (MR_Word) (MaybeType_14);
    else
    {
      MR_Word Type_15 = ((MR_Word) ((MR_hl_field(1, MaybeType_14, 0))));
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Type_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeWithType_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
      }
    }
  }
  else
  {
    *BeforeWithTypeTerm_7 = Term_6;
    *MaybeWithType_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[7]));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_64;

  conv0_LambdaHeadVar__2_64 = parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1254__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word MaybeDetism_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word PurityAttrs_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20)
{
  MR_bool succeeded;
  MR_Word ContextPieces_21;
  MR_Word MaybeContext_22;

  ContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[177])));
  parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_11, VarSet_12, QuantConstrAttrs_19, ContextPieces_21, &MaybeContext_22);
  if (((MR_tag((MR_Word) MaybeContext_22)) == (MR_Integer) 0))
  {
    MR_Word Specs_23 = ((MR_Word) ((MR_hl_field(0, MaybeContext_22, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
    }
  }
  else
  {
    MR_Word ExistQVars_24 = ((MR_Word) ((MR_hl_field(1, MaybeContext_22, 0))));
    MR_Word Constraints_25 = ((MR_Word) ((MR_hl_field(1, MaybeContext_22, 1))));
    MR_Word InstConstraints_26 = ((MR_Word) ((MR_hl_field(1, MaybeContext_22, 2))));
    MR_Word MaybeSugaredFuncTerm_27;
    MR_Word ReturnTerm_28;
    MR_Word Var_55;
    MR_String Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_55 = ((MR_Word) ((MR_hl_field(0, Term_13, 0))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, Term_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_56 = ((MR_String) ((MR_hl_field(0, Var_55, 0))));
        succeeded = (strcmp(Var_56, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeSugaredFuncTerm_27 = ((MR_Word) ((MR_hl_field(1, Var_57, 0))));
            Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, 1))));
            succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ReturnTerm_28 = ((MR_Word) ((MR_hl_field(1, Var_58, 0))));
              Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, 1))));
              succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Spec_30;
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_60, 0) = (MR_Box) ((MR_Unsigned) (IsInClass_15));
      }
      succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_12, Var_60, MaybeSugaredFuncTerm_27, &Spec_30);
      if (succeeded)
      {
        MR_Word Var_61;

        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (Spec_30));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
        }
      }
      else
      {
        MR_Word FuncTerm_31;
        MR_Word MaybeFuncNameAndArgs_32;

        FuncTerm_31 = parse_tree__parse_item__desugar_field_access_1_f_0(MaybeSugaredFuncTerm_27);
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_11, VarSet_12, ContextPieces_21, FuncTerm_31, &MaybeFuncNameAndArgs_32);
        if (((MR_tag((MR_Word) MaybeFuncNameAndArgs_32)) == (MR_Integer) 0))
        {
          MR_Word Specs_141 = ((MR_Word) ((MR_hl_field(0, MaybeFuncNameAndArgs_32, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_20 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_141));
          }
        }
        else
        {
          MR_Word FuncName_33 = ((MR_Word) ((MR_hl_field(1, MaybeFuncNameAndArgs_32, 0))));
          MR_Word ArgTerms_34 = ((MR_Word) ((MR_hl_field(1, MaybeFuncNameAndArgs_32, 1))));
          MR_Word ArgContextFunc_35;
          MR_Word ArgTypesAndMaybeModes_37;
          MR_Word ArgTMSpecs_38;
          MR_Word RetContextPieces_39;
          MR_Word MaybeRetTypeAndMaybeMode_40;
          MR_Word Var_77;
          MR_Word Var_82;
          MR_Word RetTypeAndMaybeMode_41;

          {
            ArgContextFunc_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgContextFunc_35, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[1]));
            MR_hl_field(0, ArgContextFunc_35, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_decl_base_10_p_0_1));
            MR_hl_field(0, ArgContextFunc_35, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, ArgContextFunc_35, 3) = ((MR_Box) (ContextPieces_21));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (InstConstraints_26));
          }
          parse_tree__parse_type_name__parse_types_and_maybe_modes_10_p_0(Var_77, (MR_Integer) 0, (MR_Integer) 3, VarSet_12, ArgContextFunc_35, ArgTerms_34, (MR_Integer) 1, &ArgTypesAndMaybeModes_37, (MR_Word) ((MR_Unsigned) 0U), &ArgTMSpecs_38);
          Var_82 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[179])));
          RetContextPieces_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_82);
          parse_tree__parse_type_name__parse_type_and_maybe_mode_7_p_0(Var_77, (MR_Integer) 0, (MR_Integer) 4, VarSet_12, RetContextPieces_39, ReturnTerm_28, &MaybeRetTypeAndMaybeMode_40);
          succeeded = (ArgTMSpecs_38 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeRetTypeAndMaybeMode_40)) == (MR_Integer) 1);
            if (succeeded)
              RetTypeAndMaybeMode_41 = ((MR_Word) ((MR_hl_field(1, MaybeRetTypeAndMaybeMode_40, 0))));
          }
          if (succeeded)
            parse_tree__parse_item__parse_func_decl_base_2_13_p_0(FuncName_33, ArgTypesAndMaybeModes_37, RetTypeAndMaybeMode_41, FuncTerm_31, Term_13, VarSet_12, MaybeDetism_14, ExistQVars_24, Constraints_25, Context_16, SeqNum_17, PurityAttrs_18, MaybeIOM_20);
          else
          {
            MR_Word Var_92;
            MR_Word Specs_143;

            Var_92 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_type_and_maybe_mode_0), MaybeRetTypeAndMaybeMode_40);
            Specs_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgTMSpecs_38, Var_92);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_20 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_143));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Pieces_42;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_112;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Spec_149;

      Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[185])));
      Var_118 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[191])));
      Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[195])));
      Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[187])), Var_117);
      Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, Var_112);
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[183])), Var_106);
      Var_138 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
      {
        Spec_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_149, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_func_decl_base\'/10"));
        MR_hl_field(0, Spec_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_149, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_149, 3) = ((MR_Box) (Var_138));
        MR_hl_field(0, Spec_149, 4) = ((MR_Box) (Pieces_42));
      }
      {
        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_139, 0) = ((MR_Box) (Spec_149));
        MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_139));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_2_13_p_0(
  MR_Word FuncName_14,
  MR_Word Args_15,
  MR_Word ReturnArg_16,
  MR_Word FuncTerm_17,
  MR_Word Term_18,
  MR_Word VarSet_19,
  MR_Word MaybeDetism_20,
  MR_Word ExistQVars_21,
  MR_Word Constraints_22,
  MR_Word Context_23,
  MR_Word SeqNum_24,
  MR_Word PurityAttrs_25,
  MR_Word * MaybeIOM_26)
{
  MR_bool succeeded;
  MR_Word MaybeTypesAndMaybeModes_27;
  MR_Word MaybePurity_28;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word TypesAndMaybeModes_29;
  MR_Word Purity_30;

  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (ReturnArg_16));
  }
  Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FuncTerm_17);
  parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0(Args_15, Var_44, Var_45, &MaybeTypesAndMaybeModes_27);
  if ((PurityAttrs_25 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybePurity_28 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[4]));
  else
  {
    MR_Word PurityAttr_64 = ((MR_Word) ((MR_hl_field(1, PurityAttrs_25, 0))));
    MR_Word PurityAttrs_65 = ((MR_Word) ((MR_hl_field(1, PurityAttrs_25, 1))));
    MR_Word Purity_67 = (MR_Word) (PurityAttr_64);

    if ((PurityAttrs_65 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybePurity_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePurity_28, 0) = ((MR_Box) (Purity_67));
      }
    else
    {
      MR_Word Pieces_70;
      MR_Word Spec_71;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_94;

      Var_77 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[218])));
      Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[220])));
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
      Pieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_76);
      {
        Spec_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.get_purity_from_attrs\'/3"));
        MR_hl_field(0, Spec_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_71, 3) = ((MR_Box) (Context_23));
        MR_hl_field(0, Spec_71, 4) = ((MR_Box) (Pieces_70));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Spec_71));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybePurity_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybePurity_28, 0) = ((MR_Box) (Var_94));
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeTypesAndMaybeModes_27)) == (MR_Integer) 1);
  if (succeeded)
  {
    TypesAndMaybeModes_29 = ((MR_Word) ((MR_hl_field(1, MaybeTypesAndMaybeModes_27, 0))));
    succeeded = ((MR_tag((MR_Word) MaybePurity_28)) == (MR_Integer) 1);
    if (succeeded)
      Purity_30 = ((MR_Word) ((MR_hl_field(1, MaybePurity_28, 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_31;
    MR_Word IVarSet_32;
    MR_Word InconsistentVars_34;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_19, &TVarSet_31);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_19, &IVarSet_32);
    switch (MR_tag((MR_Word) TypesAndMaybeModes_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        InconsistentVars_34 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypesAndModes_35 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes_29, 0))));

          parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_tms_2_p_0(TypesAndModes_35, &InconsistentVars_34);
        }
        break;
    }
    if ((InconsistentVars_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ItemPredDecl_37;
      MR_Word Item_38;
      MR_Word Var_49;

      {
        ItemPredDecl_37 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemPredDecl_37, 0) = ((MR_Box) (FuncName_14));
        MR_hl_field(0, ItemPredDecl_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, ItemPredDecl_37, 2) = ((MR_Box) (TypesAndMaybeModes_29));
        MR_hl_field(0, ItemPredDecl_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ItemPredDecl_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ItemPredDecl_37, 5) = ((MR_Box) (MaybeDetism_20));
        MR_hl_field(0, ItemPredDecl_37, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ItemPredDecl_37, 7) = ((MR_Box) (TVarSet_31));
        MR_hl_field(0, ItemPredDecl_37, 8) = ((MR_Box) (IVarSet_32));
        MR_hl_field(0, ItemPredDecl_37, 9) = ((MR_Box) (ExistQVars_21));
        MR_hl_field(0, ItemPredDecl_37, 10) = (MR_Box) ((MR_Unsigned) (Purity_30));
        MR_hl_field(0, ItemPredDecl_37, 11) = ((MR_Box) (Constraints_22));
        MR_hl_field(0, ItemPredDecl_37, 12) = ((MR_Box) (Context_23));
        MR_hl_field(0, ItemPredDecl_37, 13) = ((MR_Box) (SeqNum_24));
      }
      Item_38 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemPredDecl_37)));
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Item_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_26 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
      }
    }
    else
    {
      MR_Word HeadInconsistentVar_39 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_34, 0))));
      MR_Word TailInconsistentVars_40 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_34, 1))));
      MR_Word Spec_42;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_18);
      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0((MR_String) "in function declaration", Var_50, IVarSet_32, HeadInconsistentVar_39, TailInconsistentVars_40, &Spec_42);
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_42));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_26 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
      }
    }
  }
  else
  {
    MR_Word Specs_43;
    MR_Word Var_53;
    MR_Word Var_54;

    Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_types_and_maybe_modes_0), MaybeTypesAndMaybeModes_27);
    Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0), MaybePurity_28);
    Specs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_53, Var_54);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_43));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_79;

  conv0_LambdaHeadVar__2_79 = parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__1135__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_79));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_13_p_0(
  MR_Word PredOrFunc_14,
  MR_Word ModuleName_15,
  MR_Word VarSet_16,
  MR_Word PredTypeTerm_17,
  MR_Word WithType_18,
  MR_Word WithInst_19,
  MR_Word MaybeDetism_20,
  MR_Word IsInClass_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PurityAttrs_24,
  MR_Word QuantConstrAttrs_25,
  MR_Word * MaybeIOM_26)
{
  MR_bool succeeded;
  MR_Word ContextPieces_27;
  MR_Word MaybeExistClassInstContext_28;
  MR_Word MaybePurity_29;
  MR_Word Var_62;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word ExistQVars_30;
  MR_Word Constraints_31;
  MR_Word InstConstraints_32;
  MR_Word Purity_33;

  Var_62 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162]))));
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_67 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[295]));
      break;
    case (MR_Integer) 0:
      Var_67 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[297]));
      break;
  }
  Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67);
  Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[171])));
  Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_68);
  ContextPieces_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_65);
  parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_15, VarSet_16, QuantConstrAttrs_25, ContextPieces_27, &MaybeExistClassInstContext_28);
  parse_tree__parse_item__get_purity_from_attrs_3_p_0(Context_22, PurityAttrs_24, &MaybePurity_29);
  succeeded = ((MR_tag((MR_Word) MaybeExistClassInstContext_28)) == (MR_Integer) 1);
  if (succeeded)
  {
    ExistQVars_30 = ((MR_Word) ((MR_hl_field(1, MaybeExistClassInstContext_28, 0))));
    Constraints_31 = ((MR_Word) ((MR_hl_field(1, MaybeExistClassInstContext_28, 1))));
    InstConstraints_32 = ((MR_Word) ((MR_hl_field(1, MaybeExistClassInstContext_28, 2))));
    succeeded = ((MR_tag((MR_Word) MaybePurity_29)) == (MR_Integer) 1);
    if (succeeded)
      Purity_33 = ((MR_Word) ((MR_hl_field(1, MaybePurity_29, 0))));
  }
  if (succeeded)
  {
    MR_Word Spec_34;
    MR_Word Var_75;

    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = (MR_Box) ((MR_Unsigned) (IsInClass_21));
    }
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_16, Var_75, PredTypeTerm_17, &Spec_34);
    if (succeeded)
    {
      MR_Word Var_76;

      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Spec_34));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_26 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
      }
    }
    else
    {
      MR_Word MaybePredNameAndArgs_35;

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_15, VarSet_16, ContextPieces_27, PredTypeTerm_17, &MaybePredNameAndArgs_35);
      if (((MR_tag((MR_Word) MaybePredNameAndArgs_35)) == (MR_Integer) 0))
      {
        MR_Word Specs_36 = ((MR_Word) ((MR_hl_field(0, MaybePredNameAndArgs_35, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_26 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_36));
        }
      }
      else
      {
        MR_Word Functor_37 = ((MR_Word) ((MR_hl_field(1, MaybePredNameAndArgs_35, 0))));
        MR_Word ArgTerms_38 = ((MR_Word) ((MR_hl_field(1, MaybePredNameAndArgs_35, 1))));
        MR_Word ArgContextFunc_39;
        MR_Word TypeAndMaybeModeList_41;
        MR_Word TMSpecs_42;
        MR_Word PredTypeContext_43;
        MR_Word MaybeTypesAndMaybeModes_44;
        MR_Word Var_92;
        MR_Word TypesAndMaybeModes_45;

        {
          ArgContextFunc_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgContextFunc_39, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[1]));
          MR_hl_field(0, ArgContextFunc_39, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_decl_base_13_p_0_1));
          MR_hl_field(0, ArgContextFunc_39, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ArgContextFunc_39, 3) = ((MR_Box) (ContextPieces_27));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (InstConstraints_32));
        }
        parse_tree__parse_type_name__parse_types_and_maybe_modes_10_p_0(Var_92, (MR_Integer) 0, (MR_Integer) 2, VarSet_16, ArgContextFunc_39, ArgTerms_38, (MR_Integer) 1, &TypeAndMaybeModeList_41, (MR_Word) ((MR_Unsigned) 0U), &TMSpecs_42);
        PredTypeContext_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTypeTerm_17);
        parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0(TypeAndMaybeModeList_41, (MR_Word) ((MR_Unsigned) 0U), PredTypeContext_43, &MaybeTypesAndMaybeModes_44);
        succeeded = (TMSpecs_42 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeTypesAndMaybeModes_44)) == (MR_Integer) 1);
          if (succeeded)
            TypesAndMaybeModes_45 = ((MR_Word) ((MR_hl_field(1, MaybeTypesAndMaybeModes_44, 0))));
        }
        if (succeeded)
        {
          MR_Word Var_98;

          succeeded = (WithInst_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypesAndMaybeModes_45)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_98 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes_45, 0))));
              succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word Var_99;
            MR_Word Spec_113;

            Spec_113 = parse_tree__parse_item__report_with_inst_no_arg_modes_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredOrFunc_14, PredTypeTerm_17);
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (Spec_113));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_26 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
            }
          }
          else
          {
            MR_Word Var_101;

            succeeded = (WithInst_19 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (WithType_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) TypesAndMaybeModes_45)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_101 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes_45, 0))));
                  succeeded = (Var_101 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_102;
              MR_Word Spec_114;

              Spec_114 = parse_tree__parse_item__report_with_type_no_with_inst_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredOrFunc_14, PredTypeTerm_17);
              {
                Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_102, 0) = ((MR_Box) (Spec_114));
                MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_26 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
              }
            }
            else
            {
              MR_Word TypeVarSet_52;
              MR_Word InstVarSet_53;

              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_16, &TypeVarSet_52);
              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_16, &InstVarSet_53);
              switch (MR_tag((MR_Word) TypesAndMaybeModes_45)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word ItemPredDecl_58;
                    MR_Word Item_59;
                    MR_Word Var_104;

                    {
                      ItemPredDecl_58 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ItemPredDecl_58, 0) = ((MR_Box) (Functor_37));
                      MR_hl_field(0, ItemPredDecl_58, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
                      MR_hl_field(0, ItemPredDecl_58, 2) = ((MR_Box) (TypesAndMaybeModes_45));
                      MR_hl_field(0, ItemPredDecl_58, 3) = ((MR_Box) (WithType_18));
                      MR_hl_field(0, ItemPredDecl_58, 4) = ((MR_Box) (WithInst_19));
                      MR_hl_field(0, ItemPredDecl_58, 5) = ((MR_Box) (MaybeDetism_20));
                      MR_hl_field(0, ItemPredDecl_58, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, ItemPredDecl_58, 7) = ((MR_Box) (TypeVarSet_52));
                      MR_hl_field(0, ItemPredDecl_58, 8) = ((MR_Box) (InstVarSet_53));
                      MR_hl_field(0, ItemPredDecl_58, 9) = ((MR_Box) (ExistQVars_30));
                      MR_hl_field(0, ItemPredDecl_58, 10) = (MR_Box) ((MR_Unsigned) (Purity_33));
                      MR_hl_field(0, ItemPredDecl_58, 11) = ((MR_Box) (Constraints_31));
                      MR_hl_field(0, ItemPredDecl_58, 12) = ((MR_Box) (Context_22));
                      MR_hl_field(0, ItemPredDecl_58, 13) = ((MR_Box) (SeqNum_23));
                    }
                    Item_59 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemPredDecl_58)));
                    {
                      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_104, 0) = ((MR_Box) (Item_59));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeIOM_26 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Var_104));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypesAndModes_56 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes_45, 0))));
                    MR_Word InconsistentVars_148;

                    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_tms_2_p_0(TypesAndModes_56, &InconsistentVars_148);
                    if ((InconsistentVars_148 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word ItemPredDecl_141;
                      MR_Word Item_142;
                      MR_Word Var_143;

                      {
                        ItemPredDecl_141 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, ItemPredDecl_141, 0) = ((MR_Box) (Functor_37));
                        MR_hl_field(0, ItemPredDecl_141, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
                        MR_hl_field(0, ItemPredDecl_141, 2) = ((MR_Box) (TypesAndMaybeModes_45));
                        MR_hl_field(0, ItemPredDecl_141, 3) = ((MR_Box) (WithType_18));
                        MR_hl_field(0, ItemPredDecl_141, 4) = ((MR_Box) (WithInst_19));
                        MR_hl_field(0, ItemPredDecl_141, 5) = ((MR_Box) (MaybeDetism_20));
                        MR_hl_field(0, ItemPredDecl_141, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, ItemPredDecl_141, 7) = ((MR_Box) (TypeVarSet_52));
                        MR_hl_field(0, ItemPredDecl_141, 8) = ((MR_Box) (InstVarSet_53));
                        MR_hl_field(0, ItemPredDecl_141, 9) = ((MR_Box) (ExistQVars_30));
                        MR_hl_field(0, ItemPredDecl_141, 10) = (MR_Box) ((MR_Unsigned) (Purity_33));
                        MR_hl_field(0, ItemPredDecl_141, 11) = ((MR_Box) (Constraints_31));
                        MR_hl_field(0, ItemPredDecl_141, 12) = ((MR_Box) (Context_22));
                        MR_hl_field(0, ItemPredDecl_141, 13) = ((MR_Box) (SeqNum_23));
                      }
                      Item_142 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemPredDecl_141)));
                      {
                        Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_143, 0) = ((MR_Box) (Item_142));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeIOM_26 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_143));
                      }
                    }
                    else
                    {
                      MR_Word HeadInconsistentVar_60 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_148, 0))));
                      MR_Word TailInconsistentVars_61 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_148, 1))));
                      MR_String Var_105;
                      MR_Word Var_106;
                      MR_Word Var_107;
                      MR_Word Spec_115;

                      switch (PredOrFunc_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_105 = (MR_String) "in function declaration";
                          break;
                        case (MR_Integer) 0:
                          Var_105 = (MR_String) "in predicate declaration";
                          break;
                      }
                      Var_106 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTypeTerm_17);
                      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0(Var_105, Var_106, InstVarSet_53, HeadInconsistentVar_60, TailInconsistentVars_61, &Spec_115);
                      {
                        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Spec_115));
                        MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeIOM_26 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
                      }
                    }
                  }
                  break;
              }
            }
          }
        }
        else
        {
          MR_Word Var_109;
          MR_Word Specs_120;

          Var_109 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_types_and_maybe_modes_0), MaybeTypesAndMaybeModes_44);
          Specs_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TMSpecs_42, Var_109);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_120));
          }
        }
      }
    }
  }
  else
  {
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Specs_127;

    Var_110 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0), MaybePurity_29);
    Var_111 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_univ_exist_constraints_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[0]), MaybeExistClassInstContext_28);
    Specs_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_110, Var_111);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_127));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_type_no_with_inst_2_f_0(
  MR_Word TypeInfo_for_T_59,
  MR_Word PredOrFunc_4,
  MR_Word Term_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Context_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word Var_42;

  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_13, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_4));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[290])));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_12));
  }
  Var_22 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[285])));
  Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[292])));
  Var_42 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[282])));
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[294])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[264])), Var_41);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_36);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_30);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9, Var_21);
  Context_8 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_59, Term_5);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.report_with_type_no_with_inst\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_inst_no_arg_modes_2_f_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word PredOrFunc_4,
  MR_Word Term_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Context_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_38;

  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_13, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_4));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[275])));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_12));
  }
  Var_22 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[277])));
  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[279])));
  Var_38 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[267])));
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[264])), Var_38);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_33);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_27);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9, Var_21);
  Context_8 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_49, Term_5);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.report_with_inst_no_arg_modes\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[4]));
  else
  {
    MR_Word PurityAttr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word PurityAttrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Purity_10 = (MR_Word) (PurityAttr_7);

    if ((PurityAttrs_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Purity_10));
      }
    else
    {
      MR_Word Pieces_13;
      MR_Word Spec_14;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_37;

      Var_20 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[218])));
      Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[220])));
      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
      Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_25);
      Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_19);
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.get_purity_from_attrs\'/3"));
        MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_14, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_107;

  conv1_HeadVar__2_107 = parse_tree__parse_item__IntroducedFrom__func__check_type_and_maybe_mode_list_is_consistent__1426__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_107));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_item__check_type_and_maybe_mode_list_is_consistent_4_p_0(
  MR_Word TypesAndMaybeModes_5,
  MR_Word MaybeRetTypeAndMaybeMode_6,
  MR_Word Context_7,
  MR_Word * MaybeResult_8)
{
  MR_bool succeeded;
  MR_Word WithModeArgs0_9;
  MR_Word WithoutModeArgs0_10;
  MR_Word WithModeArgs_11;
  MR_Word WithoutModeArgs_12;

  parse_tree__parse_item__classify_type_and_maybe_mode_list_4_p_0((MR_Integer) 1, TypesAndMaybeModes_5, &WithModeArgs0_9, &WithoutModeArgs0_10);
  if ((MaybeRetTypeAndMaybeMode_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    WithModeArgs_11 = WithModeArgs0_9;
    WithoutModeArgs_12 = WithoutModeArgs0_10;
  }
  else
  {
    MR_Word RetTypeAndMaybeMode_13 = ((MR_Word) ((MR_hl_field(1, MaybeRetTypeAndMaybeMode_6, 0))));

    if (((MR_tag((MR_Word) RetTypeAndMaybeMode_13)) == (MR_Integer) 1))
    {
      MR_Word RetMode_15 = ((MR_Word) ((MR_hl_field(1, RetTypeAndMaybeMode_13, 1))));
      MR_Word RetTM_16;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word RetType_94 = ((MR_Word) ((MR_hl_field(1, RetTypeAndMaybeMode_13, 0))));

      {
        RetTM_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RetTM_16, 0) = ((MR_Box) (RetType_94));
        MR_hl_field(0, RetTM_16, 1) = ((MR_Box) (RetMode_15));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) ((MR_Integer) -1));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (RetTM_16));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      WithModeArgs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_2[2]), WithModeArgs0_9, Var_42);
      WithoutModeArgs_12 = WithoutModeArgs0_10;
    }
    else
    {
      MR_Word RetType_14 = ((MR_Word) ((MR_hl_field(0, RetTypeAndMaybeMode_13, 0))));
      MR_Word Var_38;
      MR_Word Var_39;

      WithModeArgs_11 = WithModeArgs0_9;
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) ((MR_Integer) -1));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (RetType_14));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      WithoutModeArgs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_2[1]), WithoutModeArgs0_10, Var_38);
    }
  }
  if ((WithModeArgs_11 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((WithoutModeArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeResult_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[1]));
    else
    {
      MR_Word Types_19;
      MR_Word Var_47;

      mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), WithoutModeArgs_12, &Types_19);
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Types_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeResult_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_47));
      }
    }
  else
  if ((WithoutModeArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypesAndModes_22;
    MR_Word Var_48;

    mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), WithModeArgs_11, &TypesAndModes_22);
    {
      Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_48, 0) = ((MR_Box) (TypesAndModes_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeResult_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
    }
  }
  else
  {
    MR_Word FirstWithout_25 = ((MR_Word) ((MR_hl_field(1, WithoutModeArgs_12, 0))));
    MR_Word RestWithout_26 = ((MR_Word) ((MR_hl_field(1, WithoutModeArgs_12, 1))));
    MR_Word IdPieces_27;
    MR_Word Pieces_35;
    MR_Word Spec_36;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_92;

    if ((RestWithout_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Piece0_110;
      MR_Word Var_112;
      MR_Integer ArgNum_117 = ((MR_Integer) ((MR_hl_field(0, FirstWithout_25, 0))));

      succeeded = (ArgNum_117 < (MR_Integer) 0);
      if (succeeded)
        Piece0_110 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[203]));
      else
        {
          Piece0_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Piece0_110, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Piece0_110, 1) = ((MR_Box) (ArgNum_117));
        }
      {
        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_112, 0) = ((MR_Box) (Piece0_110));
        MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[26])));
      }
      Var_54 = parse_tree__error_spec__color_pieces_2_f_0((MR_Integer) 4, Var_112);
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
      IdPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[197])), Var_53);
    }
    else
    {
      MR_String And_32;
      MR_Word WithoutArgNumPieces_33;
      MR_Word WithoutArgNumsPieces_34;
      MR_Word Var_70;
      MR_Integer LastWithoutModeArgNum_30;
      MR_Word Var_58;
      MR_Integer Var_59;
      MR_Box conv0_Var_58;

      succeeded = mercury__list__last_2_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_2[1]), WithoutModeArgs_12, &conv0_Var_58);
      if (succeeded)
      {
        Var_58 = ((MR_Word) (conv0_Var_58));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        LastWithoutModeArgNum_30 = ((MR_Integer) ((MR_hl_field(0, Var_58, 0))));
        Var_59 = (MR_Integer) 0;
        succeeded = (LastWithoutModeArgNum_30 < Var_59);
      }
      if (succeeded)
        And_32 = (MR_String) "and the";
      else
        And_32 = (MR_String) "and";
      WithoutArgNumPieces_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_2[1]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[5]), WithoutModeArgs_12);
      WithoutArgNumsPieces_34 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 4, And_32, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[26])), WithoutArgNumPieces_33);
      Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WithoutArgNumsPieces_34, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
      IdPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[199])), Var_70);
    }
    Var_79 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[201])));
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (IdPieces_27));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[202])));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
    }
    Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_84);
    Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_78);
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.check_type_and_maybe_mode_list_is_consistent\'/4"));
      MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_35));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeResult_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__classify_type_and_maybe_mode_list_4_p_0(
  MR_Integer ArgNum_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Head_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word WithModeArgs0_11;
    MR_Word WithoutModeArgs0_12;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) ArgNum_1 + (MR_Unsigned) 1);

    parse_tree__parse_item__classify_type_and_maybe_mode_list_4_p_0(Var_15, Tail_8, &WithModeArgs0_11, &WithoutModeArgs0_12);
    if (((MR_tag((MR_Word) Head_7)) == (MR_Integer) 1))
    {
      MR_Word Mode_14 = ((MR_Word) ((MR_hl_field(1, Head_7, 1))));
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Type_20 = ((MR_Word) ((MR_hl_field(1, Head_7, 0))));

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Type_20));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (Mode_14));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (ArgNum_1));
        MR_hl_field(0, Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (WithModeArgs0_11));
      }
      *HeadVar__4_4 = WithoutModeArgs0_12;
    }
    else
    {
      MR_Word Type_13 = ((MR_Word) ((MR_hl_field(0, Head_7, 0))));
      MR_Word Var_17;

      *HeadVar__3_3 = WithModeArgs0_11;
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (ArgNum_1));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (Type_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (WithoutModeArgs0_12));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ArgTerms_12,
  MR_Word IsInClass_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word AllowModeDefn_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18)
{
  MR_bool succeeded;

  if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_26;
    MR_Word Spec_27;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_69;

    Var_40 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[121])));
    Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[122])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[128])));
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_48);
    Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_39);
    {
      Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_defn_or_decl_item\'/9"));
      MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_27, 3) = ((MR_Box) (Context_14));
      MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_26));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
    }
  }
  else
  {
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 1))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, 0))));

    if ((Var_116 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadTerm_20;
      MR_Word BodyTerm_21;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      succeeded = (AllowModeDefn_16 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_117)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(0, Var_117, 0))));
          Var_31 = ((MR_Word) ((MR_hl_field(0, Var_117, 1))));
          succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, 0))));
            succeeded = (strcmp(Var_30, (MR_String) "==") == 0);
            if (succeeded)
            {
              succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_31, 0))));
                Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
                succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BodyTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
                  succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_inst_mode_defn__parse_mode_defn_7_p_0(ModuleName_10, VarSet_11, HeadTerm_20, BodyTerm_21, Context_14, SeqNum_15, MaybeIOM_18);
      else
        parse_tree__parse_item__parse_mode_decl_8_p_0(ModuleName_10, VarSet_11, Var_117, IsInClass_13, Context_14, SeqNum_15, QuantConstrAttrs_17, MaybeIOM_18);
    }
    else
    {
      MR_Word Pieces_72;
      MR_Word Spec_73;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_91;

      Var_79 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[121])));
      Var_82 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[122])));
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[128])));
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_81);
      Pieces_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])), Var_78);
      {
        Spec_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_defn_or_decl_item\'/9"));
        MR_hl_field(0, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_73, 3) = ((MR_Box) (Context_14));
        MR_hl_field(0, Spec_73, 4) = ((MR_Box) (Pieces_72));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Spec_73));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_91));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word Term_11,
  MR_Word IsInClass_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word QuantConstrAttrs_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;
  MR_Word DeclWords_17;
  MR_Word DetismContextPieces_18;
  MR_Word BeforeDetismTerm_19;
  MR_Word MaybeMaybeDetism_20;
  MR_Word WithInstContextPieces_21;
  MR_Word MaybeWithInst_23;
  MR_Word BaseTerm_24;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word BeforeWithInstTermPrime_66;
  MR_Word InstTerm_67;
  MR_Word Var_72;
  MR_String Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word MaybeDetism_25;
  MR_Word WithInst_26;

  switch (IsInClass_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DeclWords_17 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[204]));
      break;
    case (MR_Integer) 1:
      DeclWords_17 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[205]));
      break;
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (DeclWords_17));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[206])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  DetismContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33);
  parse_tree__parse_item__parse_determinism_suffix_5_p_0(VarSet_10, DetismContextPieces_18, Term_11, &BeforeDetismTerm_19, &MaybeMaybeDetism_20);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[164])));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[166])));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[168])));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  WithInstContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41);
  succeeded = ((MR_tag((MR_Word) BeforeDetismTerm_19)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_72 = ((MR_Word) ((MR_hl_field(0, BeforeDetismTerm_19, 0))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, BeforeDetismTerm_19, 1))));
    succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_73 = ((MR_String) ((MR_hl_field(0, Var_72, 0))));
      succeeded = (strcmp(Var_73, (MR_String) "with_inst") == 0);
      if (succeeded)
      {
        succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeWithInstTermPrime_66 = ((MR_Word) ((MR_hl_field(1, Var_74, 0))));
          Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, 1))));
          succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InstTerm_67 = ((MR_Word) ((MR_hl_field(1, Var_75, 0))));
            Var_76 = ((MR_Word) ((MR_hl_field(1, Var_75, 1))));
            succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeInst_69;

    BaseTerm_24 = BeforeWithInstTermPrime_66;
    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_10, WithInstContextPieces_21, InstTerm_67, &MaybeInst_69);
    if (((MR_tag((MR_Word) MaybeInst_69)) == (MR_Integer) 0))
      MaybeWithInst_23 = (MR_Word) (MaybeInst_69);
    else
    {
      MR_Word Inst_70 = ((MR_Word) ((MR_hl_field(1, MaybeInst_69, 0))));
      MR_Word Var_78;

      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Inst_70));
      }
      {
        MaybeWithInst_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeWithInst_23, 0) = ((MR_Box) (Var_78));
      }
    }
  }
  else
  {
    BaseTerm_24 = BeforeDetismTerm_19;
    MaybeWithInst_23 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[8]));
  }
  succeeded = ((MR_tag((MR_Word) MaybeMaybeDetism_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    MaybeDetism_25 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeDetism_20, 0))));
    succeeded = ((MR_tag((MR_Word) MaybeWithInst_23)) == (MR_Integer) 1);
    if (succeeded)
      WithInst_26 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_23, 0))));
  }
  if (succeeded)
  {
    succeeded = (MaybeDetism_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (WithInst_26 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word Spec_29;
      MR_Word Var_57;

      Spec_29 = parse_tree__parse_item__report_with_inst_and_detism_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[205])), Term_11);
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Spec_29));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
      }
    }
    else
      parse_tree__parse_item__parse_mode_decl_base_10_p_0(ModuleName_9, VarSet_10, BaseTerm_24, IsInClass_12, Context_13, SeqNum_14, WithInst_26, MaybeDetism_25, QuantConstrAttrs_15, MaybeIOM_16);
  }
  else
  {
    MR_Word Specs_30;
    MR_Word Var_59;
    MR_Word Var_60;

    Var_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[2]), MaybeMaybeDetism_20);
    Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[3]), MaybeWithInst_23);
    Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_59, Var_60);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_30));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__report_with_inst_and_detism_2_f_0(
  MR_Word TypeInfo_for_T_61,
  MR_Word DeclKindPiece_4,
  MR_Word Term_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Context_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;

  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (DeclKindPiece_4));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[258])));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[99])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_12));
  }
  Var_21 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[260])));
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[262])));
  Var_38 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[267])));
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[272])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[264])), Var_37);
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_32);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_26);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9, Var_20);
  Context_8 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_61, Term_5);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.report_with_inst_and_detism\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static void MR_CALL 
parse_tree__parse_item__parse_determinism_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeDetismTerm_9,
  MR_Word * MaybeMaybeDetism_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_Word BeforeDetismTermPrime_13;
  MR_Word DetismTerm_14;
  MR_Word Args_11;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_8, 0))));
    Args_11 = ((MR_Word) ((MR_hl_field(0, Term_8, 1))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, 0))));
      succeeded = (strcmp(Var_22, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeDetismTermPrime_13 = ((MR_Word) ((MR_hl_field(1, Args_11, 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, Args_11, 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DetismTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Detism_17;
    MR_String DetismFunctor_15;
    MR_Word Var_25;
    MR_Word Var_26;

    *BeforeDetismTerm_9 = BeforeDetismTermPrime_13;
    succeeded = ((MR_tag((MR_Word) DetismTerm_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(0, DetismTerm_14, 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, DetismTerm_14, 1))));
      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          DetismFunctor_15 = ((MR_String) ((MR_hl_field(0, Var_25, 0))));
          succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetismFunctor_15, &Detism_17);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (Detism_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMaybeDetism_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
      }
    }
    else
    {
      MR_String DetismTermStr_18;
      MR_Word Pieces_19;
      MR_Word Spec_20;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_61;
      MR_Word Var_62;

      DetismTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, DetismTerm_14);
      Var_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
      Var_37 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[240])));
      {
        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_50, 1) = ((MR_Box) (DetismTermStr_18));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[26])));
      }
      Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[242])), Var_47);
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[238])), Var_36);
      Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_29);
      Var_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_14);
      {
        Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_determinism_suffix\'/5"));
        MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Var_61));
        MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeDetism_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      }
    }
  }
  else
  {
    *BeforeDetismTerm_9 = Term_8;
    *MaybeMaybeDetism_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[5]));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word IsInClass_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word WithInst_17,
  MR_Word MaybeDetism_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20)
{
  MR_bool succeeded = (WithInst_17 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word MaybeSugaredFuncTerm_21;
  MR_Word ReturnTypeTerm_22;
  MR_Word Var_31;
  MR_String Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(0, Term_13, 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, Term_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, 0))));
        succeeded = (strcmp(Var_32, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeSugaredFuncTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_33, 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ReturnTypeTerm_22 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
              succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Spec_24;
    MR_Word Var_36;

    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_36, 1) = (MR_Box) ((MR_Unsigned) (IsInClass_14));
    }
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_12, Var_36, MaybeSugaredFuncTerm_21, &Spec_24);
    if (succeeded)
    {
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
    else
    {
      MR_Word FuncTerm_25;
      MR_Word ContextPieces_26;
      MR_Word MaybeFunctorArgs_27;

      FuncTerm_25 = parse_tree__parse_item__desugar_field_access_1_f_0(MaybeSugaredFuncTerm_21);
      ContextPieces_26 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[209])));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_11, VarSet_12, ContextPieces_26, FuncTerm_25, &MaybeFunctorArgs_27);
      if (((MR_tag((MR_Word) MaybeFunctorArgs_27)) == (MR_Integer) 0))
      {
        MR_Word Specs_28 = ((MR_Word) ((MR_hl_field(0, MaybeFunctorArgs_27, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
        }
      }
      else
      {
        MR_Word Functor_29 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_27, 0))));
        MR_Word ArgTerms_30 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_27, 1))));

        parse_tree__parse_item__parse_func_mode_decl_11_p_0(Functor_29, ArgTerms_30, ModuleName_11, ReturnTypeTerm_22, Term_13, VarSet_12, MaybeDetism_18, Context_15, SeqNum_16, QuantConstrAttrs_19, MaybeIOM_20);
      }
    }
  }
  else
  {
    MR_Word Spec_77;
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_51, 1) = (MR_Box) ((MR_Unsigned) (IsInClass_14));
    }
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_12, Var_51, Term_13, &Spec_77);
    if (succeeded)
    {
      MR_Word Var_52;

      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_77));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
      }
    }
    else
    {
      MR_Word ContextPieces_72;
      MR_Word MaybeFunctorArgs_73;

      ContextPieces_72 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[210])));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_11, VarSet_12, ContextPieces_72, Term_13, &MaybeFunctorArgs_73);
      if (((MR_tag((MR_Word) MaybeFunctorArgs_73)) == (MR_Integer) 0))
      {
        MR_Word Specs_66 = ((MR_Word) ((MR_hl_field(0, MaybeFunctorArgs_73, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_66));
        }
      }
      else
      {
        MR_Word Functor_67 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_73, 0))));
        MR_Word ArgTerms_68 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_73, 1))));

        parse_tree__parse_item__parse_pred_mode_decl_11_p_0(Functor_67, ArgTerms_68, ModuleName_11, Term_13, VarSet_12, WithInst_17, MaybeDetism_18, Context_15, SeqNum_16, QuantConstrAttrs_19, MaybeIOM_20);
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__desugar_field_access_1_f_0(
  MR_Word Term_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word DesugaredTerm_4;
  MR_Word A_5;
  MR_Word Context_7;
  MR_Word Bs_9;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word RHS_6;
  MR_Word Var_16;
  MR_String Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    Context_7 = ((MR_Word) ((MR_hl_field(0, Term_3, 2))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(0, Var_16, 0))));
      succeeded = (strcmp(Var_17, (MR_String) "^") == 0);
      if (succeeded)
      {
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          A_5 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHS_6 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
            succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RHS_6)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_21 = ((MR_Word) ((MR_hl_field(0, RHS_6, 0))));
                Bs_9 = ((MR_Word) ((MR_hl_field(0, RHS_6, 1))));
                succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (A_5));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_20));
    }
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), Bs_9, Var_24);
    {
      DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DesugaredTerm_4, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, DesugaredTerm_4, 1) = ((MR_Box) (Var_23));
      MR_hl_field(0, DesugaredTerm_4, 2) = ((MR_Box) (Context_7));
    }
  }
  else
  {
    MR_Word X_12;
    MR_Word A_44;
    MR_Word Context_46;
    MR_String FieldName_47;
    MR_Word Bs_48;
    MR_Word LHS_11;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word RHS_43;

    succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, 0))));
        succeeded = (strcmp(Var_27, (MR_String) ":=") == 0);
        if (succeeded)
        {
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_11 = ((MR_Word) ((MR_hl_field(1, Var_28, 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_12 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) LHS_11)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_31 = ((MR_Word) ((MR_hl_field(0, LHS_11, 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(0, LHS_11, 1))));
                  Context_46 = ((MR_Word) ((MR_hl_field(0, LHS_11, 2))));
                  succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, 0))));
                    succeeded = (strcmp(Var_32, (MR_String) "^") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        A_44 = ((MR_Word) ((MR_hl_field(1, Var_33, 0))));
                        Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
                        succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          RHS_43 = ((MR_Word) ((MR_hl_field(1, Var_34, 0))));
                          Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
                          succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) RHS_43)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_36 = ((MR_Word) ((MR_hl_field(0, RHS_43, 0))));
                              Bs_48 = ((MR_Word) ((MR_hl_field(0, RHS_43, 1))));
                              succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 0);
                              if (succeeded)
                                FieldName_47 = ((MR_String) ((MR_hl_field(0, Var_36, 0))));
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
      MR_String FunctionName_15;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;

      FunctionName_15 = mercury__string__f_43_43_2_f_0(FieldName_47, (MR_String) " :=");
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (FunctionName_15));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (X_12));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (A_44));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
      }
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), Bs_48, Var_40);
      {
        DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DesugaredTerm_4, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, DesugaredTerm_4, 1) = ((MR_Box) (Var_39));
        MR_hl_field(0, DesugaredTerm_4, 2) = ((MR_Box) (Context_46));
      }
    }
    else
      DesugaredTerm_4 = Term_3;
  }
  return DesugaredTerm_4;
}

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0(
  MR_Word Functor_12,
  MR_Word ArgTerms_13,
  MR_Word ModuleName_14,
  MR_Word RetModeTerm_15,
  MR_Word FullTerm_16,
  MR_Word VarSet_17,
  MR_Word MaybeDetism_18,
  MR_Word Context_19,
  MR_Word SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  MR_bool succeeded;
  MR_Word ArgContextPieces_23;
  MR_Word MaybeArgModes0_24;
  MR_Word RetContextPieces_25;
  MR_Word MaybeRetMode0_26;
  MR_Word QuantContextPieces_27;
  MR_Word MaybeConstraints_28;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_57;
  MR_Word Var_60;
  MR_Word Var_63;
  MR_Word ArgModes0_29;
  MR_Word RetMode0_30;
  MR_Word InstConstraints_33;

  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_49, 1) = ((MR_Box) (Functor_12));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[171])));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[214])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  ArgContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45);
  parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_17, ArgContextPieces_23, ArgTerms_13, &MaybeArgModes0_24);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[171])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[216])));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[215])));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
  }
  RetContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57);
  parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_17, RetContextPieces_25, RetModeTerm_15, &MaybeRetMode0_26);
  QuantContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[209])));
  parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_14, VarSet_17, QuantConstrAttrs_21, QuantContextPieces_27, &MaybeConstraints_28);
  succeeded = ((MR_tag((MR_Word) MaybeArgModes0_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    ArgModes0_29 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_24, 0))));
    succeeded = ((MR_tag((MR_Word) MaybeRetMode0_26)) == (MR_Integer) 1);
    if (succeeded)
    {
      RetMode0_30 = ((MR_Word) ((MR_hl_field(1, MaybeRetMode0_26, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeConstraints_28)) == (MR_Integer) 1);
      if (succeeded)
        InstConstraints_33 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_28, 2))));
    }
  }
  if (succeeded)
  {
    MR_Word ArgModes_34;
    MR_Word RetMode_35;
    MR_Word InstVarSet_36;
    MR_Word ArgReturnModes_37;
    MR_Word InconsistentVars_38;
    MR_Word Var_84;
    MR_Word Var_85;

    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_84, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[0]));
      MR_hl_field(0, Var_84, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_mode_decl_11_p_0_1));
      MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_84, 3) = ((MR_Box) (InstConstraints_33));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_84, ArgModes0_29, &ArgModes_34);
    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(InstConstraints_33, RetMode0_30, &RetMode_35);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_17, &InstVarSet_36);
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (RetMode_35));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ArgReturnModes_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_34, Var_85);
    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(ArgReturnModes_37, &InconsistentVars_38);
    if ((InconsistentVars_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ItemModeDecl_39;
      MR_Word Item_40;
      MR_Word Var_90;

      {
        ItemModeDecl_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemModeDecl_39, 0) = ((MR_Box) (Functor_12));
        MR_hl_field(0, ItemModeDecl_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[3])));
        MR_hl_field(0, ItemModeDecl_39, 2) = ((MR_Box) (ArgReturnModes_37));
        MR_hl_field(0, ItemModeDecl_39, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ItemModeDecl_39, 4) = ((MR_Box) (MaybeDetism_18));
        MR_hl_field(0, ItemModeDecl_39, 5) = ((MR_Box) (InstVarSet_36));
        MR_hl_field(0, ItemModeDecl_39, 6) = ((MR_Box) (Context_19));
        MR_hl_field(0, ItemModeDecl_39, 7) = ((MR_Box) (SeqNum_20));
      }
      Item_40 = (MR_Word) (MR_mkword(2, (MR_Word) (ItemModeDecl_39)));
      {
        Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_90, 0) = ((MR_Box) (Item_40));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
      }
    }
    else
    {
      MR_Word HeadInconsistentVar_41 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_38, 0))));
      MR_Word TailInconsistentVars_42 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_38, 1))));
      MR_Word Spec_43;
      MR_Word Var_92;
      MR_Word Var_93;

      Var_92 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FullTerm_16);
      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0((MR_String) "in function mode declaration", Var_92, InstVarSet_36, HeadInconsistentVar_41, TailInconsistentVars_42, &Spec_43);
      {
        Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_93, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_93));
      }
    }
  }
  else
  {
    MR_Word Specs_44;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    Var_95 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[8]), MaybeArgModes0_24);
    Var_97 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode0_26);
    Var_98 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_univ_exist_constraints_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[0]), MaybeConstraints_28);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_97, Var_98);
    Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_95, Var_96);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_44));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_39;

  parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1779__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_39));
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word QuantConstrAttrs_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeExistClassInstContext_10)
{
  MR_Word Specs_11;
  MR_Word ExistQVarsCord_13;
  MR_Word UnivClassConstraints_14;
  MR_Word UnivInstConstraints_15;
  MR_Word ExistClassConstraints_16;
  MR_Word ExistInstConstraints_17;
  MR_Word ExistQVars0_18;
  MR_Word ExistQVars_19;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word _UnivQVarsCord_12;

  Var_25 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_26 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_28 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(ModuleName_6, VarSet_7, QuantConstrAttrs_8, ContextPieces_9, (MR_Word) ((MR_Unsigned) 0U), &Specs_11, Var_25, &_UnivQVarsCord_12, Var_26, &ExistQVarsCord_13, Var_27, &UnivClassConstraints_14, Var_28, &UnivInstConstraints_15, Var_29, &ExistClassConstraints_16, Var_30, &ExistInstConstraints_17);
  ExistQVars0_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), ExistQVarsCord_13);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[4]), ExistQVars0_18, &ExistQVars_19);
  if ((Specs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClassConstraints_20;
    MR_Word InstConstraints_21;
    MR_Word Var_32;
    MR_Word Var_33;

    Var_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivClassConstraints_14);
    Var_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistClassConstraints_16);
    {
      ClassConstraints_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassConstraints_20, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, ClassConstraints_20, 1) = ((MR_Box) (Var_33));
    }
    InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UnivInstConstraints_15, ExistInstConstraints_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *MaybeExistClassInstContext_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ExistQVars_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (ClassConstraints_20));
      MR_hl_field(1, base, 2) = ((MR_Box) (InstConstraints_21));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeExistClassInstContext_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_11));
    }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_39;

  parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1779__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_39));
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0(
  MR_Word Functor_12,
  MR_Word ArgTerms_13,
  MR_Word ModuleName_14,
  MR_Word PredModeTerm_15,
  MR_Word VarSet_16,
  MR_Word WithInst_17,
  MR_Word MaybeDetism_18,
  MR_Word Context_19,
  MR_Word SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  MR_bool succeeded;
  MR_Word ArgContextPieces_23;
  MR_Word MaybeArgModes0_24;
  MR_Word ContextPieces_25;
  MR_Word MaybeConstraints_26;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Specs_86;
  MR_Word ExistQVarsCord_88;
  MR_Word UnivClassConstraints_89;
  MR_Word UnivInstConstraints_90;
  MR_Word ExistClassConstraints_91;
  MR_Word ExistInstConstraints_92;
  MR_Word ExistQVars0_93;
  MR_Word ExistQVars_94;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word _UnivQVarsCord_87;
  MR_Word ArgModes0_27;
  MR_Word InstConstraints_30;

  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Functor_12));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[171])));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[211])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  ArgContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43);
  parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_16, ArgContextPieces_23, ArgTerms_13, &MaybeArgModes0_24);
  ContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[213])));
  Var_98 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_100 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_101 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  Var_102 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_103 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(ModuleName_14, VarSet_16, QuantConstrAttrs_21, ContextPieces_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_86, Var_98, &_UnivQVarsCord_87, Var_99, &ExistQVarsCord_88, Var_100, &UnivClassConstraints_89, Var_101, &UnivInstConstraints_90, Var_102, &ExistClassConstraints_91, Var_103, &ExistInstConstraints_92);
  ExistQVars0_93 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), ExistQVarsCord_88);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[3]), ExistQVars0_93, &ExistQVars_94);
  if ((Specs_86 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClassConstraints_95;
    MR_Word InstConstraints_96;
    MR_Word Var_105;
    MR_Word Var_106;

    Var_105 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivClassConstraints_89);
    Var_106 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistClassConstraints_91);
    {
      ClassConstraints_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassConstraints_95, 0) = ((MR_Box) (Var_105));
      MR_hl_field(0, ClassConstraints_95, 1) = ((MR_Box) (Var_106));
    }
    InstConstraints_96 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UnivInstConstraints_90, ExistInstConstraints_92);
    {
      MaybeConstraints_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeConstraints_26, 0) = ((MR_Box) (ExistQVars_94));
      MR_hl_field(1, MaybeConstraints_26, 1) = ((MR_Box) (ClassConstraints_95));
      MR_hl_field(1, MaybeConstraints_26, 2) = ((MR_Box) (InstConstraints_96));
    }
  }
  else
    {
      MaybeConstraints_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeConstraints_26, 0) = ((MR_Box) (Specs_86));
    }
  succeeded = ((MR_tag((MR_Word) MaybeArgModes0_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    ArgModes0_27 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_24, 0))));
    succeeded = ((MR_tag((MR_Word) MaybeConstraints_26)) == (MR_Integer) 1);
    if (succeeded)
      InstConstraints_30 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_26, 2))));
  }
  if (succeeded)
  {
    MR_Word ArgModes_31;
    MR_Word InstVarSet_32;
    MR_Word InconsistentVars_33;
    MR_Word Var_67;

    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[0]));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_mode_decl_11_p_0_2));
      MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_67, 3) = ((MR_Box) (InstConstraints_30));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_67, ArgModes0_27, &ArgModes_31);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_16, &InstVarSet_32);
    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(ArgModes_31, &InconsistentVars_33);
    if ((InconsistentVars_33 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybePredOrFunc_34;
      MR_Word ItemModeDecl_36;
      MR_Word Item_37;
      MR_Word Var_69;

      if ((WithInst_17 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybePredOrFunc_34 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[2]));
      else
        MaybePredOrFunc_34 = (MR_Word) ((MR_Unsigned) 0U);
      {
        ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemModeDecl_36, 0) = ((MR_Box) (Functor_12));
        MR_hl_field(0, ItemModeDecl_36, 1) = ((MR_Box) (MaybePredOrFunc_34));
        MR_hl_field(0, ItemModeDecl_36, 2) = ((MR_Box) (ArgModes_31));
        MR_hl_field(0, ItemModeDecl_36, 3) = ((MR_Box) (WithInst_17));
        MR_hl_field(0, ItemModeDecl_36, 4) = ((MR_Box) (MaybeDetism_18));
        MR_hl_field(0, ItemModeDecl_36, 5) = ((MR_Box) (InstVarSet_32));
        MR_hl_field(0, ItemModeDecl_36, 6) = ((MR_Box) (Context_19));
        MR_hl_field(0, ItemModeDecl_36, 7) = ((MR_Box) (SeqNum_20));
      }
      Item_37 = (MR_Word) (MR_mkword(2, (MR_Word) (ItemModeDecl_36)));
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Item_37));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_69));
      }
    }
    else
    {
      MR_Word HeadInconsistentVar_38 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_33, 0))));
      MR_Word TailInconsistentVars_39 = ((MR_Word) ((MR_hl_field(1, InconsistentVars_33, 1))));
      MR_Word Spec_41;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredModeTerm_15);
      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_6_p_0((MR_String) "in predicate mode declaration", Var_70, InstVarSet_32, HeadInconsistentVar_38, TailInconsistentVars_39, &Spec_41);
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_41));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
      }
    }
  }
  else
  {
    MR_Word Specs_42;
    MR_Word Var_73;
    MR_Word Var_74;

    Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[8]), MaybeArgModes0_24);
    Var_74 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_univ_exist_constraints_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[0]), MaybeConstraints_26);
    Specs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_73, Var_74);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_42));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_UnivQVars_0_7,
  MR_Word * STATE_VARIABLE_UnivQVars_8,
  MR_Word STATE_VARIABLE_ExistQVars_0_9,
  MR_Word * STATE_VARIABLE_ExistQVars_10,
  MR_Word STATE_VARIABLE_UnivClassConstraints_0_11,
  MR_Word * STATE_VARIABLE_UnivClassConstraints_12,
  MR_Word STATE_VARIABLE_UnivInstConstraints_0_13,
  MR_Word * STATE_VARIABLE_UnivInstConstraints_14,
  MR_Word HeadVar__15_15,
  MR_Word * HeadVar__16_16,
  MR_Word HeadVar__17_17,
  MR_Word * HeadVar__18_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__18_18 = HeadVar__17_17;
      *HeadVar__16_16 = HeadVar__15_15;
      *STATE_VARIABLE_UnivInstConstraints_14 = STATE_VARIABLE_UnivInstConstraints_0_13;
      *STATE_VARIABLE_UnivClassConstraints_12 = STATE_VARIABLE_UnivClassConstraints_0_11;
      *STATE_VARIABLE_ExistQVars_10 = STATE_VARIABLE_ExistQVars_0_9;
      *STATE_VARIABLE_UnivQVars_8 = STATE_VARIABLE_UnivQVars_0_7;
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    }
    else
    {
      MR_Word QuantConstrAttr_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word QuantConstrAttrs_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Specs_1_80;
      MR_Word STATE_VARIABLE_ExistQVars_1_81;
      MR_Word STATE_VARIABLE_UnivQVars_1_82;
      MR_Word STATE_VARIABLE_ExistClassConstraints_1_84;
      MR_Word STATE_VARIABLE_ExistInstConstraints_1_86;
      MR_Word STATE_VARIABLE_UnivClassConstraints_1_87;
      MR_Word STATE_VARIABLE_UnivInstConstraints_1_89;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnivQVars_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExistQVars_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11;
      MR_Word next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13;
      MR_Word next_value_of_HeadVar__15_15;
      MR_Word next_value_of_HeadVar__17_17;

      if (((MR_tag((MR_Word) QuantConstrAttr_45)) == (MR_Integer) 1))
      {
        MR_Word ConstraintsTerm_60 = ((MR_Word) ((MR_hl_field(1, QuantConstrAttr_45, 1))));
        MR_Word MaybeConstraints_61;
        MR_Word QuantType_97 = ((MR_Unsigned) ((MR_hl_field(1, QuantConstrAttr_45, 0))) & (MR_Integer) 1);

        parse_tree__parse_class__parse_class_and_inst_constraints_4_p_0(HeadVar__1_1, HeadVar__2_2, ConstraintsTerm_60, &MaybeConstraints_61);
        if (((MR_tag((MR_Word) MaybeConstraints_61)) == (MR_Integer) 0))
        {
          MR_Word ConstraintSpecs_62 = ((MR_Word) ((MR_hl_field(0, MaybeConstraints_61, 0))));

          STATE_VARIABLE_Specs_1_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConstraintSpecs_62, STATE_VARIABLE_Specs_0_5);
          STATE_VARIABLE_UnivClassConstraints_1_87 = STATE_VARIABLE_UnivClassConstraints_0_11;
          STATE_VARIABLE_UnivInstConstraints_1_89 = STATE_VARIABLE_UnivInstConstraints_0_13;
          STATE_VARIABLE_ExistClassConstraints_1_84 = HeadVar__15_15;
          STATE_VARIABLE_ExistInstConstraints_1_86 = HeadVar__17_17;
        }
        else
        {
          MR_Word ClassConstraints_63 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_61, 0))));
          MR_Word InstConstraint_64 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_61, 1))));

          switch (QuantType_97) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_85;

                Var_85 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ClassConstraints_63);
                STATE_VARIABLE_ExistClassConstraints_1_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), HeadVar__15_15, Var_85);
                STATE_VARIABLE_ExistInstConstraints_1_86 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVar__17_17, InstConstraint_64);
                STATE_VARIABLE_UnivClassConstraints_1_87 = STATE_VARIABLE_UnivClassConstraints_0_11;
                STATE_VARIABLE_UnivInstConstraints_1_89 = STATE_VARIABLE_UnivInstConstraints_0_13;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_88;

                Var_88 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ClassConstraints_63);
                STATE_VARIABLE_UnivClassConstraints_1_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), STATE_VARIABLE_UnivClassConstraints_0_11, Var_88);
                STATE_VARIABLE_UnivInstConstraints_1_89 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_UnivInstConstraints_0_13, InstConstraint_64);
                STATE_VARIABLE_ExistClassConstraints_1_84 = HeadVar__15_15;
                STATE_VARIABLE_ExistInstConstraints_1_86 = HeadVar__17_17;
              }
              break;
          }
          STATE_VARIABLE_Specs_1_80 = STATE_VARIABLE_Specs_0_5;
        }
        STATE_VARIABLE_UnivQVars_1_82 = STATE_VARIABLE_UnivQVars_0_7;
        STATE_VARIABLE_ExistQVars_1_81 = STATE_VARIABLE_ExistQVars_0_9;
      }
      else
      {
        MR_Word QuantType_55 = ((MR_Unsigned) ((MR_hl_field(0, QuantConstrAttr_45, 0))) & (MR_Integer) 1);
        MR_Word VarsTerm_56 = ((MR_Word) ((MR_hl_field(0, QuantConstrAttr_45, 1))));
        MR_Word MaybeVars_57;

        parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0(QuantType_55, (MR_Integer) 1, HeadVar__4_4, HeadVar__2_2, VarsTerm_56, &MaybeVars_57);
        if (((MR_tag((MR_Word) MaybeVars_57)) == (MR_Integer) 0))
        {
          MR_Word VarsSpecs_58 = ((MR_Word) ((MR_hl_field(0, MaybeVars_57, 0))));

          STATE_VARIABLE_Specs_1_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), VarsSpecs_58, STATE_VARIABLE_Specs_0_5);
          STATE_VARIABLE_UnivQVars_1_82 = STATE_VARIABLE_UnivQVars_0_7;
          STATE_VARIABLE_ExistQVars_1_81 = STATE_VARIABLE_ExistQVars_0_9;
        }
        else
        {
          MR_Word Vars_59 = ((MR_Word) ((MR_hl_field(1, MaybeVars_57, 0))));

          switch (QuantType_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), Vars_59, STATE_VARIABLE_ExistQVars_0_9, &STATE_VARIABLE_ExistQVars_1_81);
                STATE_VARIABLE_UnivQVars_1_82 = STATE_VARIABLE_UnivQVars_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), Vars_59, STATE_VARIABLE_UnivQVars_0_7, &STATE_VARIABLE_UnivQVars_1_82);
                STATE_VARIABLE_ExistQVars_1_81 = STATE_VARIABLE_ExistQVars_0_9;
              }
              break;
          }
          STATE_VARIABLE_Specs_1_80 = STATE_VARIABLE_Specs_0_5;
        }
        STATE_VARIABLE_UnivClassConstraints_1_87 = STATE_VARIABLE_UnivClassConstraints_0_11;
        STATE_VARIABLE_UnivInstConstraints_1_89 = STATE_VARIABLE_UnivInstConstraints_0_13;
        STATE_VARIABLE_ExistClassConstraints_1_84 = HeadVar__15_15;
        STATE_VARIABLE_ExistInstConstraints_1_86 = HeadVar__17_17;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = QuantConstrAttrs_46;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_80;
      next_value_of_STATE_VARIABLE_UnivQVars_0_7 = STATE_VARIABLE_UnivQVars_1_82;
      next_value_of_STATE_VARIABLE_ExistQVars_0_9 = STATE_VARIABLE_ExistQVars_1_81;
      next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11 = STATE_VARIABLE_UnivClassConstraints_1_87;
      next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13 = STATE_VARIABLE_UnivInstConstraints_1_89;
      next_value_of_HeadVar__15_15 = STATE_VARIABLE_ExistClassConstraints_1_84;
      next_value_of_HeadVar__17_17 = STATE_VARIABLE_ExistInstConstraints_1_86;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      STATE_VARIABLE_UnivQVars_0_7 = next_value_of_STATE_VARIABLE_UnivQVars_0_7;
      STATE_VARIABLE_ExistQVars_0_9 = next_value_of_STATE_VARIABLE_ExistQVars_0_9;
      STATE_VARIABLE_UnivClassConstraints_0_11 = next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11;
      STATE_VARIABLE_UnivInstConstraints_0_13 = next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13;
      HeadVar__15_15 = next_value_of_HeadVar__15_15;
      HeadVar__17_17 = next_value_of_HeadVar__17_17;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(
  MR_String Functor_4,
  MR_Word Context_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;

  {
    Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_15, 1) = ((MR_Box) (Functor_4));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_13 = parse_tree__error_spec__color_as_subject_1_f_0(Var_14);
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[64])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[60])), Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_17);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_12);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_functor_is_not_valid\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static MR_Word MR_CALL 
parse_tree__parse_item__decl_is_not_an_atom_2_f_0(
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  MR_Word Spec_6;
  MR_String TermStr_7;
  MR_Word Context_8;
  MR_Word Pieces_9;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_25;
  MR_Word Var_26;

  TermStr_7 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, (MR_Integer) 0, Term_5);
  Context_8 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (TermStr_7));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_16 = parse_tree__error_spec__color_as_subject_1_f_0(Var_17);
  Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[62])));
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20])));
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[60])), Var_25);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_20);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[58])), Var_15);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_is_not_an_atom\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_6;
}

MR_bool MR_CALL 
parse_tree__parse_item__is_the_name_a_variable_4_p_0(
  MR_Word VarSet_5,
  MR_Word Kind_6,
  MR_Word Term_7,
  MR_Word * Spec_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_100_100;
  MR_Word ArgTerms_9;
  MR_Word TermContext_10;
  MR_Word VarDotPieces_16;
  MR_Word WhatPieces_18;
  MR_Word Pieces_19;
  MR_Word Var_20;
  MR_String Var_21;
  MR_Word Var_72;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_String Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word ArgTerm1_11;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_7, 0))));
    ArgTerms_9 = ((MR_Word) ((MR_hl_field(0, Term_7, 1))));
    TermContext_10 = ((MR_Word) ((MR_hl_field(0, Term_7, 2))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
      succeeded = (strcmp(Var_21, (MR_String) "") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgTerm1_11 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, 0))));
          succeeded = ((MR_tag((MR_Word) ArgTerm1_11)) == (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_String VarStr_15;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;

          VarStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, ArgTerm1_11);
          {
            Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_28, 1) = ((MR_Box) (VarStr_15));
          }
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[26])));
          }
          Var_26 = parse_tree__error_spec__color_as_subject_1_f_0(Var_27);
          VarDotPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[24])), Var_26);
        }
        else
          VarDotPieces_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[26]));
        switch (MR_tag((MR_Word) Kind_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Kind_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[28]));
                break;
              case (MR_Integer) 1:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[34]));
                break;
              case (MR_Integer) 2:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[32]));
                break;
              case (MR_Integer) 3:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[30]));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsInClass_17 = ((MR_Unsigned) ((MR_hl_field(1, Kind_6, 0))) & (MR_Integer) 1);

              switch (IsInClass_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[48]));
                  break;
                case (MR_Integer) 1:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[50]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word IsInClass_95 = ((MR_Unsigned) ((MR_hl_field(2, Kind_6, 0))) & (MR_Integer) 1);

              switch (IsInClass_95) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[44]));
                  break;
                case (MR_Integer) 1:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[46]));
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Kind_6, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word IsInClass_96 = ((MR_Unsigned) ((MR_hl_field(3, Kind_6, 1))) & (MR_Integer) 1);

                  switch (IsInClass_96) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[40]));
                      break;
                    case (MR_Integer) 1:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[42]));
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IsInClass_97 = ((MR_Unsigned) ((MR_hl_field(3, Kind_6, 1))) & (MR_Integer) 1);

                  switch (IsInClass_97) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[36]));
                      break;
                    case (MR_Integer) 1:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[38]));
                      break;
                  }
                }
                break;
            }
            break;
        }
        TypeCtorInfo_100_100 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
        Var_72 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[52]));
        Var_78 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[54]));
        Var_84 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[56]));
        Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_84);
        Var_89 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[20]));
        Var_88 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_100_100, VarDotPieces_16, Var_89);
        Var_82 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_100_100, Var_83, Var_88);
        Var_77 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_100_100, Var_78, Var_82);
        Var_76 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_100_100, WhatPieces_18, Var_77);
        Pieces_19 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_100_100, Var_72, Var_76);
        Var_92 = (MR_String) "predicate \140parse_tree.parse_item.is_the_name_a_variable\'/4";
        Var_93 = (MR_Word) ((MR_Unsigned) 0U);
        Var_94 = (MR_Word) ((MR_Unsigned) 24U);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Spec_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_93));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_94));
          MR_hl_field(0, base, 3) = ((MR_Box) (TermContext_10));
          MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_19));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____decl_in_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____decl_in_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____incl_imp_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____incl_imp_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____purity_attr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____purity_attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____quant_constr_attr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____quant_constr_attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____var_term_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____var_term_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____var_term_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____var_term_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_item__init(void)
{
}

void mercury__parse_tree__parse_item__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_decl_in_class_0);
  MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_incl_imp_use_0);
  MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_allow_mode_defn_0);
  MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
  MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
  MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_var_term_kind_0);
}

void mercury__parse_tree__parse_item__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_item__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_item.
