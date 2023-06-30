/*
** Automatically generated from `parse_item.m'
** by the Mercury compiler,
** version rotd-2023-06-30
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
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.version.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

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

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_maybe_add_the_prefix_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_add_the_prefix_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_add_the_prefix_0[2];

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

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_quantifier_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_quantifier_type_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quantifier_type_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_type_mode_list_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_type_mode_list_kind_0[3];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_type_mode_list_kind_0[3];

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
parse_tree__parse_item__IntroducedFrom__func__parse_promise_ex_item__1946__1_1_f_0(
  MR_Word HeadVar__1_138);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1756__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1244__1_2_f_0(
  MR_Word ContextPieces_21,
  MR_Integer LambdaHeadVar__1_63);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__1134__1_2_f_0(
  MR_Word ContextPieces_27,
  MR_Integer LambdaHeadVar__1_76);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__956__1_2_p_0(
  MR_Word HeadVar__1_118,
  MR_Word * HeadVar__2_119);

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(
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

static MR_Word MR_CALL 
parse_tree__parse_item__wrap_nth_2_f_0(
  MR_Word MaybeAddPredix_4,
  MR_Integer ArgNum_5);

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

static MR_bool MR_CALL 
parse_tree__parse_item__parse_decl_item_or_marker_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word IsInClass_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16);

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
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_31,
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
  MR_Word STATE_VARIABLE_PurityAttrs_0_33,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_34,
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
  MR_Word STATE_VARIABLE_PurityAttrs_0_33,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_34,
  MR_Word * MaybeIOM_22);

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
parse_tree__parse_item__parse_mode_decl_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word Term_11,
  MR_Word IsInClass_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word QuantConstrAttrs_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word IsInClass_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word WithInst_17,
  MR_Word MaybeDet_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20);

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
  MR_Word MaybeDet_18,
  MR_Word Context_19,
  MR_Word SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

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

static void MR_CALL 
parse_tree__parse_item__parse_determinism_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeDetismTerm_9,
  MR_Word * MaybeMaybeDetism_10);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word MaybeDet_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word PurityAttrs_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20);

static MR_Word MR_CALL 
parse_tree__parse_item__desugar_field_access_1_f_0(
  MR_Word Term_3);

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
  MR_Word MaybeDet_20,
  MR_Word IsInClass_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PurityAttrs_24,
  MR_Word QuantConstrAttrs_25,
  MR_Word * MaybeIOM_26);

static MR_Word MR_CALL 
parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(
  MR_Word HeadVar__1_1);

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

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(
  MR_Word TypesAndModes_5,
  MR_Word MaybeRetTypeAndMode_6,
  MR_Word Context_7,
  MR_Word * MaybeKind_8);

static void MR_CALL 
parse_tree__parse_item__classify_type_and_mode_list_4_p_0(
  MR_Integer ArgNum_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001(
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
parse_tree__parse_item____Unify____quantifier_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001(
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


static /* final */ const MR_Box parse_tree__parse_item_scalar_common_1[242][2];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_3[11][1];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_4[4][6];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_5[1][4];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_6[3][5];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_8[3][7];


struct parse_tree__parse_item__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_item__vector_common_type_7_0_s parse_tree__parse_item_vector_common_7[64];



static /* final */ const MR_Box parse_tree__parse_item_scalar_common_1[242][2] = {
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
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are allowed in class interfaces."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: only pred, func and mode declarations"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a type class"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a clause for a function"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a clause for a predicate"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an instance for a type class"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a mode for a type class function method"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a mode for a function"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a mode for a type class predicate method"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a mode for a predicate"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a type class function method"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a function"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a type class predicate method"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a predicate"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "whose name is a variable"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a valid declaration."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a valid declaration type."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are not allowed on mode declarations."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: purity annotations"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the keyword"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a list of variables."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "only to denote the quantification"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may appear in declarations"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[65])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the symbol"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a constraint or a conjunction of constraints."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may appear in declarations only to introduce"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in front of a predicate or function declaration."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may appear only as an annotation"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a module name."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[87])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[89])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a list of one or more module names."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a predicate or function."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or the declaration of one mode"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be either the definition of a mode,"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "from item ids to timestamps."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a module name, and a tuple containing maps"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a version number,"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have exactly three arguments,"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "version_numbers"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "so it must be rebuilt."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was created by an obsolete compiler,"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the interface file"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[126])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should specify the types and maybe the modes"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the arguments of a"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "method declaration:"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "annotation of a"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[157])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[166])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[172])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[177])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[147])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[181])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the return value:"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[186])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[187])))
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
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the return value"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "return value"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type class method mode"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[146]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[147])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[202])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[202])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the mode declaration of the predicate"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In predicate"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[202])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the mode declaration of the function"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the return value"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the mode declaration of the function"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are not allowed."))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate purity annotations"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[213])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a goal."))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[216]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[217])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[218])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[221])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not have a purity attribute."))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[223]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[224])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have the form"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "annotation:"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[229])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[230])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[232]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[234]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[233])))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[235])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[238])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[240]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[238])))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_item_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_item__parse_func_decl_base_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_item__parse_promise_ex_item_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[2])),
    ((MR_Box) (parse_tree__parse_item__parse_item_or_marker_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[2])),
    ((MR_Box) (parse_tree__parse_item__parse_item_or_marker_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[2])),
    ((MR_Box) (parse_tree__parse_item__parse_clause_term_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_6[2])),
    ((MR_Box) (parse_tree__parse_item__parse_clause_term_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_3[11][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "true")) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_4[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_add_the_prefix_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
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
    ((MR_Box) (&parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_5[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_6[3][5] = {
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
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_8[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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


static /* final */ const struct parse_tree__parse_item__vector_common_type_7_0_s parse_tree__parse_item_vector_common_7[64] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_0 = {
  (MR_String) "dont_add_the_prefix",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_1 = {
  (MR_String) "add_the_prefix",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_maybe_add_the_prefix_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_add_the_prefix_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_0
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_add_the_prefix_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_add_the_prefix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "maybe_add_the_prefix",
  { parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_add_the_prefix_0 },
  { parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_maybe_add_the_prefix_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_add_the_prefix_0,

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
  (MR_PseudoTypeInfo) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0),
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
  (MR_PseudoTypeInfo) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0),
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

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_quantifier_type_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_1
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____quantifier_type_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____quantifier_type_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "quantifier_type",
  { parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_quantifier_type_0 },
  { parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_quantifier_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quantifier_type_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_0 = {
  (MR_String) "tml_no_arguments",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_1 = {
  (MR_String) "tml_all_types_have_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_2 = {
  (MR_String) "tml_no_types_have_modes",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_type_mode_list_kind_0[3] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_type_mode_list_kind_0[3] = {
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_1,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_0,
  &parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_2
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_type_mode_list_kind_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "type_mode_list_kind",
  { parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_type_mode_list_kind_0 },
  { parse_tree__parse_item__parse_tree__parse_item__enum_ordinal_ordered_type_mode_list_kind_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_type_mode_list_kind_0,

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
parse_tree__parse_item__IntroducedFrom__func__parse_promise_ex_item__1946__1_1_f_0(
  MR_Word HeadVar__1_138)
{
  MR_Word HeadVar__2_139;

  HeadVar__2_139 = mercury__term__coerce_var_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_138);
  return HeadVar__2_139;
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1756__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_38, HeadVar__2_39);
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1244__1_2_f_0(
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
    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_70, 1) = ((MR_Box) (LambdaHeadVar__1_63));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[170])));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[168])));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
  }
  Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66);
  LambdaHeadVar__2_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_65);
  return LambdaHeadVar__2_64;
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__1134__1_2_f_0(
  MR_Word ContextPieces_27,
  MR_Integer LambdaHeadVar__1_76)
{
  MR_Word LambdaHeadVar__2_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_82;
  MR_Word Var_83;

  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (LambdaHeadVar__1_76));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[170])));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[168])));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
  }
  Var_78 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79);
  LambdaHeadVar__2_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_27, Var_78);
  return LambdaHeadVar__2_77;
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__956__1_2_p_0(
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
  MR_Integer CastX_68 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_69 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_68 == CastY_69);
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
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
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_77 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_84 = (MR_Integer) (Var_77);
                MR_Integer Var_85 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_84 < Var_85);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_84 > Var_85);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_76 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_19 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_82 = (MR_Integer) (Var_76);
                MR_Integer Var_83 = (MR_Integer) (ArgY1_19);

                succeeded = (Var_82 < Var_83);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_82 > Var_83);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_75 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Integer Var_80 = (MR_Integer) (Var_75);
                        MR_Integer Var_81 = (MR_Integer) (ArgY1_33);

                        succeeded = (Var_80 < Var_81);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_80 > Var_81);
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
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_74 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Integer Var_78 = (MR_Integer) (Var_74);
                        MR_Integer Var_79 = (MR_Integer) (ArgY1_47);

                        succeeded = (Var_78 < Var_79);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_78 > Var_79);
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
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
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
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_7 == ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
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
parse_tree__parse_item____Compare____type_mode_list_kind_0_0(
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
parse_tree__parse_item____Unify____type_mode_list_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0(
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
parse_tree__parse_item____Unify____quantifier_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_19;
      MR_Integer Var_32 = (MR_Integer) (Var_29);
      MR_Integer Var_33 = (MR_Integer) (ArgY1_18);

      succeeded = (Var_32 < Var_33);
      if (succeeded)
      {
        SubResult1_19 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_32 > Var_33);
        if (succeeded)
        {
          SubResult1_19 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_19 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_19;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_21)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer Var_34 = (MR_Integer) (Var_31);
      MR_Integer Var_35 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_34 < Var_35);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_34 > Var_35);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_8)));
    }
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
    MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
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
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(
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
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(
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
    parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(DefaultModuleName_5, VarSet_6, Term_7, MaybeModule_8);
  else
  {
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Term_7, (MR_Integer) 1))));
    MR_Word Spec_12;
    MR_Word Var_30;

    {
      Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_implicitly_qualified_module_name\'/4"));
      MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_12, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[237])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModule_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_name_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeModuleName_6)
{
  parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5, MaybeModuleName_6);
}

static MR_Word MR_CALL 
parse_tree__parse_item__wrap_nth_2_f_0(
  MR_Word MaybeAddPredix_4,
  MR_Integer ArgNum_5)
{
  MR_bool succeeded = (ArgNum_5 < (MR_Integer) 0);
  MR_Word Component_6;

  if (succeeded)
    switch (MaybeAddPredix_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Component_6 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[197]));
        break;
      case (MR_Integer) 0:
        Component_6 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[198]));
        break;
    }
  else
    {
      Component_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Component_6, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Component_6, 1) = ((MR_Box) (ArgNum_5));
    }
  return Component_6;
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
  MR_Word Var_38;
  MR_Word Var_39;
  MR_String Functor_66;
  MR_Word ArgTerms_67;
  MR_Word FunctorContext_68;
  MR_Word Var_71;

  TermContext_9 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
  Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
  succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_71 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    ArgTerms_67 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    FunctorContext_68 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
    if (succeeded)
      Functor_66 = ((MR_String) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word MaybeIOMPrime_69;

    succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_5, VarSet_6, Functor_66, ArgTerms_67, (MR_Integer) 0, FunctorContext_68, (MR_Word) ((MR_Unsigned) 0U), Var_38, Var_39, &MaybeIOMPrime_69);
    if (succeeded)
      if (((MR_tag((MR_Word) MaybeIOMPrime_69)) == (MR_Integer) 0))
        *MaybeClassMethod_8 = (MR_Word) (MaybeIOMPrime_69);
      else
      {
        MR_Word IOM_12 = ((MR_Word) ((MR_hl_field(1, MaybeIOMPrime_69, (MR_Integer) 0))));
        MR_Word ItemPredDecl_13;
        MR_Word Var_40;

        succeeded = ((MR_tag((MR_Word) IOM_12)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(1, IOM_12, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1);
          if (succeeded)
            ItemPredDecl_13 = (MR_Word) (MR_body((MR_Word) (Var_40), (MR_Integer) 1));
        }
        if (succeeded)
        {
          MR_Word Name_14 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 0))));
          MR_Word PorF_15 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgDecls_16 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 2))));
          MR_Word WithType_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 3))));
          MR_Word WithInst_18 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 4))));
          MR_Word MaybeDetism_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 5))));
          MR_Word TypeVarSet_21 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 7))));
          MR_Word InstVarSet_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 8))));
          MR_Word ExistQVars_23 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 9))));
          MR_Word Purity_24 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 10))) & (MR_Integer) 3);
          MR_Word Constraints_25 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 11))));
          MR_Word Context_26 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_13, (MR_Integer) 12))));
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
            Var_41 = ((MR_Word) ((MR_hl_field(1, IOM_12, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2);
            if (succeeded)
              ItemModeDecl_30 = (MR_Word) (MR_body((MR_Word) (Var_41), (MR_Integer) 2));
          }
          if (succeeded)
          {
            MR_Word MaybePorF_31 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 1))));
            MR_Word ArgModes_32 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 2))));
            MR_Word ModeInfo_33;
            MR_Word Name_56 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 0))));
            MR_Word WithInst_57 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 3))));
            MR_Word MaybeDetism_58 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 4))));
            MR_Word InstVarSet_59 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 5))));
            MR_Word Context_60 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl_30, (MR_Integer) 6))));
            MR_Word ClassDecl_62;

            {
              ModeInfo_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ModeInfo_33, 0) = ((MR_Box) (Name_56));
              MR_hl_field(0, ModeInfo_33, 1) = ((MR_Box) (MaybePorF_31));
              MR_hl_field(0, ModeInfo_33, 2) = ((MR_Box) (ArgModes_32));
              MR_hl_field(0, ModeInfo_33, 3) = ((MR_Box) (WithInst_57));
              MR_hl_field(0, ModeInfo_33, 4) = ((MR_Box) (MaybeDetism_58));
              MR_hl_field(0, ModeInfo_33, 5) = ((MR_Box) (InstVarSet_59));
              MR_hl_field(0, ModeInfo_33, 6) = ((MR_Box) (Context_60));
            }
            ClassDecl_62 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_33)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeClassMethod_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ClassDecl_62));
            }
          }
          else
          {
            MR_Word Spec_35;
            MR_Word Var_53;

            {
              Spec_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_class_decl\'/4"));
              MR_hl_field(1, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_35, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(1, Spec_35, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[16])));
            }
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (Spec_35));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeClassMethod_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
            }
          }
        }
      }
    else
    {
      MR_Word Spec_70;
      MR_Word Var_72;
      MR_Word Pieces_77;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word MaybeIOM_100;

      {
        Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_81, 1) = ((MR_Box) (Functor_66));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[52])));
      }
      {
        Pieces_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_77, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
        MR_hl_field(1, Pieces_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Spec_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_70, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_functor_is_not_valid\'/2"));
        MR_hl_field(1, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_70, 3) = ((MR_Box) (FunctorContext_68));
        MR_hl_field(1, Spec_70, 4) = ((MR_Box) (Pieces_77));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_70));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeIOM_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeIOM_100, 0) = ((MR_Box) (Var_72));
      }
      *MaybeClassMethod_8 = (MR_Word) (MaybeIOM_100);
    }
  }
  else
  {
    MR_Word Var_74;
    MR_Word Spec_76;
    MR_String TermStr_86;
    MR_Word Context_87;
    MR_Word Pieces_88;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word MaybeIOM_99;

    TermStr_86 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, (MR_Integer) 0, Term_7);
    Context_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_93, 1) = ((MR_Box) (TermStr_86));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[50])));
    }
    {
      Pieces_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_88, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
      MR_hl_field(1, Pieces_88, 1) = ((MR_Box) (Var_92));
    }
    {
      Spec_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_76, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_is_not_an_atom\'/2"));
      MR_hl_field(1, Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_76, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_76, 3) = ((MR_Box) (Context_87));
      MR_hl_field(1, Spec_76, 4) = ((MR_Box) (Pieces_88));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_76));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeIOM_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeIOM_99, 0) = ((MR_Box) (Var_74));
    }
    *MaybeClassMethod_8 = (MR_Word) (MaybeIOM_99);
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

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__956__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_119);
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

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__956__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_119);
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
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
    DCGContext_13 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      succeeded = (strcmp(Var_21, (MR_String) "-->") == 0);
      if (succeeded)
      {
        succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DCGHeadTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DCGBodyTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 1))));
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
      Var_25 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
      TermContext_16 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) ":-") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTermPrime_14 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              BodyTermPrime_15 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
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
      Var_57 = ((MR_Word) ((MR_hl_field(0, HeadTerm_17, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, HeadTerm_17, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_String) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
        succeeded = (strcmp(Var_58, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncHeadTerm0_39 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_61 = ((MR_Word) ((MR_hl_field(1, Var_60, (MR_Integer) 1))));
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

        HeadContextPieces_46 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[138])));
        if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_38, HeadContextPieces_46, FuncHeadTerm_42, &MaybeFunctor_45);
        else
        {
          MR_Word ModuleName_47 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_6, (MR_Integer) 0))));

          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_47, VarSet_38, HeadContextPieces_46, FuncHeadTerm_42, &MaybeFunctor_45);
        }
      }
      if (((MR_tag((MR_Word) MaybeFunctor_45)) == (MR_Integer) 0))
      {
        MR_Word FunctorSpecs_55 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_45, (MR_Integer) 0))));
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
        MR_Word SymName_48 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_45, (MR_Integer) 0))));
        MR_Word ArgTerms0_49 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_45, (MR_Integer) 1))));
        MR_Word ArgTerms_52;
        MR_Word ProgArgTerms_53;
        MR_Word ItemClause_54;

        ArgTerms_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), ArgTerms0_49, Var_60);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[7]), ArgTerms_52, &ProgArgTerms_53);
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

        HeadContextPieces_75 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[140])));
        if ((MaybeModuleName_6 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_38, HeadContextPieces_75, HeadTerm_17, &MaybeFunctor_115);
        else
        {
          MR_Word ModuleName_74 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_6, (MR_Integer) 0))));

          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_74, VarSet_38, HeadContextPieces_75, HeadTerm_17, &MaybeFunctor_115);
        }
      }
      if (((MR_tag((MR_Word) MaybeFunctor_115)) == (MR_Integer) 0))
      {
        MR_Word FunctorSpecs_86 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_115, (MR_Integer) 0))));
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
        MR_Word SymName_91 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_115, (MR_Integer) 0))));
        MR_Word ArgTerms_94 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_115, (MR_Integer) 1))));
        MR_Word ProgArgTerms_95;
        MR_Word ItemClause_96;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[8]), ArgTerms_94, &ProgArgTerms_95);
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

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__956__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_119);
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

  parse_tree__parse_item__IntroducedFrom__pred__parse_clause__956__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_119);
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
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      succeeded = (strcmp(Var_17, (MR_String) ":-") == 0);
      if (succeeded)
      {
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DeclTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
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
      Var_28 = ((MR_Word) ((MR_hl_field(0, DeclTerm_11, (MR_Integer) 0))));
      ArgTerms_24 = ((MR_Word) ((MR_hl_field(0, DeclTerm_11, (MR_Integer) 1))));
      Context_25 = ((MR_Word) ((MR_hl_field(0, DeclTerm_11, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
        Functor_23 = ((MR_String) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word MaybeIOMPrime_26;

      succeeded = parse_tree__parse_item__parse_decl_item_or_marker_8_p_0(ModuleName_6, VarSet_7, Functor_23, ArgTerms_24, (MR_Integer) 1, Context_25, SeqNum_9, &MaybeIOMPrime_26);
      if (succeeded)
        *MaybeIOM_10 = MaybeIOMPrime_26;
      else
      {
        MR_Word Spec_27;
        MR_Word Var_30;
        MR_Word Pieces_35;
        MR_Word Var_38;
        MR_Word Var_39;

        {
          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_39, 1) = ((MR_Box) (Functor_23));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[52])));
        }
        {
          Pieces_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
          MR_hl_field(1, Pieces_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Spec_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_27, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_functor_is_not_valid\'/2"));
          MR_hl_field(1, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_27, 3) = ((MR_Box) (Context_25));
          MR_hl_field(1, Spec_27, 4) = ((MR_Box) (Pieces_35));
        }
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
      MR_String TermStr_44;
      MR_Word Context_45;
      MR_Word Pieces_46;
      MR_Word Var_50;
      MR_Word Var_51;

      TermStr_44 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, (MR_Integer) 0, DeclTerm_11);
      Context_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DeclTerm_11);
      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (TermStr_44));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[50])));
      }
      {
        Pieces_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
        MR_hl_field(1, Pieces_46, 1) = ((MR_Box) (Var_50));
      }
      {
        Spec_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_34, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_is_not_an_atom\'/2"));
        MR_hl_field(1, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_34, 3) = ((MR_Box) (Context_45));
        MR_hl_field(1, Spec_34, 4) = ((MR_Box) (Pieces_46));
      }
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
    MR_Word DCGHeadTerm_57;
    MR_Word DCGBodyTerm_58;
    MR_Word DCGContext_59;
    MR_Word Var_66;
    MR_String Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (ModuleName_6));
    }
    succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_66 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
      DCGContext_59 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_67 = ((MR_String) ((MR_hl_field(0, Var_66, (MR_Integer) 0))));
        succeeded = (strcmp(Var_67, (MR_String) "-->") == 0);
        if (succeeded)
        {
          succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DCGHeadTerm_57 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 0))));
            Var_69 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 1))));
            succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DCGBodyTerm_58 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 0))));
              Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 1))));
              succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(Var_20, VarSet_7, DCGHeadTerm_57, DCGBodyTerm_58, DCGContext_59, SeqNum_9, &MaybeClause_13);
    else
    {
      MR_Word HeadTerm_63;
      MR_Word BodyTerm_64;
      MR_Word ClauseContext_65;
      MR_Word ProgVarSet0_80;
      MR_Word GoalContextPieces_81;
      MR_Word MaybeBodyGoal_82;
      MR_Word ProgVarSet_83;
      MR_Word VarSet_84;
      MR_Word HeadTermPrime_60;
      MR_Word BodyTermPrime_61;
      MR_Word TermContext_62;
      MR_Word Var_71;
      MR_String Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word FuncHeadTerm_88;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word FuncHeadTerm0_85;
      MR_Word Var_103;
      MR_String Var_104;
      MR_Word Var_105;

      succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
        TermContext_62 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_72 = ((MR_String) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
          succeeded = (strcmp(Var_72, (MR_String) ":-") == 0);
          if (succeeded)
          {
            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTermPrime_60 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
              Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
              succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyTermPrime_61 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        HeadTerm_63 = HeadTermPrime_60;
        BodyTerm_64 = BodyTermPrime_61;
        ClauseContext_65 = TermContext_62;
      }
      else
      {
        HeadTerm_63 = Term_8;
        ClauseContext_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_63);
        {
          BodyTerm_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BodyTerm_64, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_3[0]));
          MR_hl_field(0, BodyTerm_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, BodyTerm_64, 2) = ((MR_Box) (ClauseContext_65));
        }
      }
      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, &ProgVarSet0_80);
      GoalContextPieces_81 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
      parse_tree__parse_goal__parse_goal_5_p_0(BodyTerm_64, GoalContextPieces_81, &MaybeBodyGoal_82, ProgVarSet0_80, &ProgVarSet_83);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ProgVarSet_83, &VarSet_84);
      succeeded = ((MR_tag((MR_Word) HeadTerm_63)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_103 = ((MR_Word) ((MR_hl_field(0, HeadTerm_63, (MR_Integer) 0))));
        Var_105 = ((MR_Word) ((MR_hl_field(0, HeadTerm_63, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_103)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_104 = ((MR_String) ((MR_hl_field(0, Var_103, (MR_Integer) 0))));
          succeeded = (strcmp(Var_104, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncHeadTerm0_85 = ((MR_Word) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
              Var_106 = ((MR_Word) ((MR_hl_field(1, Var_105, (MR_Integer) 1))));
              succeeded = (Var_106 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_107 = ((MR_Word) ((MR_hl_field(1, Var_106, (MR_Integer) 1))));
                succeeded = (Var_107 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FuncHeadTerm_88 = parse_tree__parse_item__desugar_field_access_1_f_0(FuncHeadTerm0_85);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Spec_90;

        succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_7, (MR_Word) ((MR_Unsigned) 12U), FuncHeadTerm_88, &Spec_90);
        if (succeeded)
        {
          MR_Word FunctorSpecs_101;
          MR_Word Specs_102;
          MR_Word Var_119;

          {
            FunctorSpecs_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FunctorSpecs_101, 0) = ((MR_Box) (Spec_90));
            MR_hl_field(1, FunctorSpecs_101, 1) = ((MR_Box) (Var_107));
          }
          Var_119 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_82);
          Specs_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_101, Var_119);
          {
            MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_102));
          }
        }
        else
        {
          MR_Word HeadContextPieces_92;
          MR_Word ModuleName_93;
          MR_Word MaybeFunctor_186;

          HeadContextPieces_92 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[138])));
          ModuleName_93 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_93, VarSet_84, HeadContextPieces_92, FuncHeadTerm_88, &MaybeFunctor_186);
          if (((MR_tag((MR_Word) MaybeFunctor_186)) == (MR_Integer) 0))
          {
            MR_Word FunctorSpecs_176 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_186, (MR_Integer) 0))));
            MR_Word Specs_177;
            MR_Word Var_178;

            Var_178 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_82);
            Specs_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_176, Var_178);
            {
              MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_177));
            }
          }
          else
          {
            MR_Word SymName_94 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_186, (MR_Integer) 0))));
            MR_Word ArgTerms0_95 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_186, (MR_Integer) 1))));
            MR_Word ArgTerms_98;
            MR_Word ProgArgTerms_99;
            MR_Word ItemClause_100;

            ArgTerms_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), ArgTerms0_95, Var_106);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[5]), ArgTerms_98, &ProgArgTerms_99);
            {
              ItemClause_100 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ItemClause_100, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, ItemClause_100, 1) = ((MR_Box) (SymName_94));
              MR_hl_field(0, ItemClause_100, 2) = ((MR_Box) (ProgArgTerms_99));
              MR_hl_field(0, ItemClause_100, 3) = ((MR_Box) (ProgVarSet_83));
              MR_hl_field(0, ItemClause_100, 4) = ((MR_Box) (MaybeBodyGoal_82));
              MR_hl_field(0, ItemClause_100, 5) = ((MR_Box) (ClauseContext_65));
              MR_hl_field(0, ItemClause_100, 6) = ((MR_Box) (SeqNum_9));
            }
            {
              MaybeClause_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeClause_13, 0) = ((MR_Box) (ItemClause_100));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_122;

        succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_7, (MR_Word) ((MR_Unsigned) 8U), HeadTerm_63, &Spec_122);
        if (succeeded)
        {
          MR_Word FunctorSpecs_132;
          MR_Word Specs_133;
          MR_Word Var_134;

          {
            FunctorSpecs_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FunctorSpecs_132, 0) = ((MR_Box) (Spec_122));
            MR_hl_field(1, FunctorSpecs_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_134 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_82);
          Specs_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_132, Var_134);
          {
            MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_133));
          }
        }
        else
        {
          MR_Word ModuleName_120;
          MR_Word HeadContextPieces_121;
          MR_Word MaybeFunctor_207;

          HeadContextPieces_121 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[140])));
          ModuleName_120 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_120, VarSet_84, HeadContextPieces_121, HeadTerm_63, &MaybeFunctor_207);
          if (((MR_tag((MR_Word) MaybeFunctor_207)) == (MR_Integer) 0))
          {
            MR_Word FunctorSpecs_192 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_207, (MR_Integer) 0))));
            MR_Word Specs_193;
            MR_Word Var_194;

            Var_194 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_82);
            Specs_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_192, Var_194);
            {
              MaybeClause_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeClause_13, 0) = ((MR_Box) (Specs_193));
            }
          }
          else
          {
            MR_Word SymName_137 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_207, (MR_Integer) 0))));
            MR_Word ArgTerms_140 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_207, (MR_Integer) 1))));
            MR_Word ProgArgTerms_141;
            MR_Word ItemClause_142;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[6]), ArgTerms_140, &ProgArgTerms_141);
            {
              ItemClause_142 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ItemClause_142, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ItemClause_142, 1) = ((MR_Box) (SymName_137));
              MR_hl_field(0, ItemClause_142, 2) = ((MR_Box) (ProgArgTerms_141));
              MR_hl_field(0, ItemClause_142, 3) = ((MR_Box) (ProgVarSet_83));
              MR_hl_field(0, ItemClause_142, 4) = ((MR_Box) (MaybeBodyGoal_82));
              MR_hl_field(0, ItemClause_142, 5) = ((MR_Box) (ClauseContext_65));
              MR_hl_field(0, ItemClause_142, 6) = ((MR_Box) (SeqNum_9));
            }
            {
              MaybeClause_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeClause_13, 0) = ((MR_Box) (ItemClause_142));
            }
          }
        }
      }
    }
    if (((MR_tag((MR_Word) MaybeClause_13)) == (MR_Integer) 0))
      *MaybeIOM_10 = (MR_Word) (MaybeClause_13);
    else
    {
      MR_Word ItemClause_14 = ((MR_Word) ((MR_hl_field(1, MaybeClause_13, (MR_Integer) 0))));
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

static MR_bool MR_CALL 
parse_tree__parse_item__parse_decl_item_or_marker_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word IsInClass_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(Functor_11, 0)) {
      case (MR_Integer) 60:
        if (MR_offset_streq(1, Functor_11, (MR_String) "<="))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 61:
        if (MR_offset_streq(1, Functor_11, (MR_String) "=>"))
          case_num_0 = (MR_Integer) 1;
        break;
      case (MR_Integer) 97:
        switch (MR_nth_code_unit(Functor_11, 1)) {
          case (MR_Integer) 98:
            if (((((((((((((((MR_nth_code_unit(Functor_11, 2)) == (MR_Integer) 115)) && (((MR_nth_code_unit(Functor_11, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Functor_11, 4)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_11, 6)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Functor_11, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Functor_11, 8)) == (MR_Integer) 95))))
              switch (MR_nth_code_unit(Functor_11, 9)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(10, Functor_11, (MR_String) "abstract_inst"))
                    case_num_0 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(10, Functor_11, (MR_String) "abstract_mode"))
                    case_num_0 = (MR_Integer) 3;
                  break;
              }
            break;
          case (MR_Integer) 108:
            if (MR_offset_streq(2, Functor_11, (MR_String) "all"))
              case_num_0 = (MR_Integer) 4;
            break;
        }
        break;
      case (MR_Integer) 101:
        if (MR_offset_streq(1, Functor_11, (MR_String) "end_module"))
          case_num_0 = (MR_Integer) 5;
        break;
      case (MR_Integer) 102:
        switch (MR_nth_code_unit(Functor_11, 1)) {
          case (MR_Integer) 105:
            if (((((((((MR_nth_code_unit(Functor_11, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Functor_11, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_11, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_11, 5)) == (MR_Integer) 105))))
              switch (MR_nth_code_unit(Functor_11, 6)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(7, Functor_11, (MR_String) "finalise"))
                    case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 122:
                  if (MR_offset_streq(7, Functor_11, (MR_String) "finalize"))
                    case_num_0 = (MR_Integer) 6;
                  break;
              }
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, Functor_11, (MR_String) "func"))
              case_num_0 = (MR_Integer) 7;
            break;
        }
        break;
      case (MR_Integer) 105:
        switch (MR_nth_code_unit(Functor_11, 1)) {
          case (MR_Integer) 109:
            if (((MR_nth_code_unit(Functor_11, 2)) == (MR_Integer) 112))
              switch (MR_nth_code_unit(Functor_11, 3)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(4, Functor_11, (MR_String) "implementation"))
                    case_num_0 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(4, Functor_11, (MR_String) "import_module"))
                    case_num_0 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(4, Functor_11, (MR_String) "impure"))
                    case_num_0 = (MR_Integer) 10;
                  break;
              }
            break;
          case (MR_Integer) 110:
            switch (MR_nth_code_unit(Functor_11, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, Functor_11, (MR_String) "include_module"))
                  case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 105:
                if (((((((((((MR_nth_code_unit(Functor_11, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_11, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_11, 7)) == (MR_Integer) 105))))
                  switch (MR_nth_code_unit(Functor_11, 8)) {
                    case (MR_Integer) 115:
                      if (MR_offset_streq(9, Functor_11, (MR_String) "initialise"))
                        case_num_0 = (MR_Integer) 12;
                      break;
                    case (MR_Integer) 122:
                      if (MR_offset_streq(9, Functor_11, (MR_String) "initialize"))
                        case_num_0 = (MR_Integer) 12;
                      break;
                  }
                break;
              case (MR_Integer) 115:
                if (((MR_nth_code_unit(Functor_11, 3)) == (MR_Integer) 116))
                  switch (MR_nth_code_unit(Functor_11, 4)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 13;
                      break;
                    case (MR_Integer) 97:
                      if (MR_offset_streq(5, Functor_11, (MR_String) "instance"))
                        case_num_0 = (MR_Integer) 14;
                      break;
                  }
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, Functor_11, (MR_String) "interface"))
                  case_num_0 = (MR_Integer) 15;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 109:
        switch (MR_nth_code_unit(Functor_11, 1)) {
          case (MR_Integer) 111:
            if (((MR_nth_code_unit(Functor_11, 2)) == (MR_Integer) 100))
              switch (MR_nth_code_unit(Functor_11, 3)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(4, Functor_11, (MR_String) "mode"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(4, Functor_11, (MR_String) "module"))
                    case_num_0 = (MR_Integer) 17;
                  break;
              }
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, Functor_11, (MR_String) "mutable"))
              case_num_0 = (MR_Integer) 18;
            break;
        }
        break;
      case (MR_Integer) 112:
        if (((MR_nth_code_unit(Functor_11, 1)) == (MR_Integer) 114))
          switch (MR_nth_code_unit(Functor_11, 2)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(3, Functor_11, (MR_String) "pragma"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(3, Functor_11, (MR_String) "pred"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(3, Functor_11, (MR_String) "promise"))
                case_num_0 = (MR_Integer) 21;
              break;
          }
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(Functor_11, 1)) {
          case (MR_Integer) 101:
            if (MR_offset_streq(2, Functor_11, (MR_String) "semipure"))
              case_num_0 = (MR_Integer) 22;
            break;
          case (MR_Integer) 111:
            switch (MR_nth_code_unit(Functor_11, 2)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(3, Functor_11, (MR_String) "solver"))
                  case_num_0 = (MR_Integer) 23;
                break;
              case (MR_Integer) 109:
                if (MR_offset_streq(3, Functor_11, (MR_String) "some"))
                  case_num_0 = (MR_Integer) 24;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 116:
        if (((((((MR_nth_code_unit(Functor_11, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(Functor_11, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(Functor_11, 3)) == (MR_Integer) 101))))
          switch (MR_nth_code_unit(Functor_11, 4)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 25;
              break;
            case (MR_Integer) 95:
              if (MR_offset_streq(5, Functor_11, (MR_String) "type_representation"))
                case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 99:
              if (MR_offset_streq(5, Functor_11, (MR_String) "typeclass"))
                case_num_0 = (MR_Integer) 27;
              break;
          }
        break;
      case (MR_Integer) 117:
        if (MR_offset_streq(1, Functor_11, (MR_String) "use_module"))
          case_num_0 = (MR_Integer) 28;
        break;
      case (MR_Integer) 118:
        if (MR_offset_streq(1, Functor_11, (MR_String) "version_numbers"))
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
            MR_Word Var_29;
            MR_Word Var_30;

            Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
            Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
            parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 1, Var_29, Var_30, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "=>"
          ;
          {
            MR_Word Var_40;
            MR_Word Var_41;

            Var_40 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
            Var_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
            parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 0, Var_40, Var_41, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          // case "abstract_inst"
          ;
          parse_tree__parse_inst_mode_defn__parse_abstract_inst_defn_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          // case "abstract_mode"
          ;
          parse_tree__parse_inst_mode_defn__parse_abstract_mode_defn_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
        {
          // case "all"
          ;
          {
            MR_Word Var_27;
            MR_Word Var_28;

            Var_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
            Var_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
            parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 1, Var_27, Var_28, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "end_module"
          ;
          {
            MR_Word ModuleName_62;
            MR_Word TypeCtorInfo_37_72;
            MR_Word ModuleNameTerm_61;
            MR_Word Var_66;

            succeeded = (ArgTerms_12 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleNameTerm_61 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
              Var_66 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
              succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_37_72 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_37_72, ModuleNameTerm_61, &ModuleName_62);
              }
            }
            if (succeeded)
            {
              MR_Word Marker_63;

              {
                Marker_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Marker_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Marker_63, 1) = ((MR_Box) (ModuleName_62));
                MR_hl_field(3, Marker_63, 2) = ((MR_Box) (Context_14));
                MR_hl_field(3, Marker_63, 3) = ((MR_Box) (SeqNum_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Marker_63));
              }
            }
            else
            {
              MR_Word Spec_65;
              MR_Word Var_70;

              {
                Spec_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_end_module_marker\'/4"));
                MR_hl_field(1, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_65, 3) = ((MR_Box) (Context_14));
                MR_hl_field(1, Spec_65, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[97])));
              }
              {
                Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_65));
                MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
              }
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 6:
        {
          // case "finalise", "finalize"
          ;
          parse_tree__parse_mutable__parse_finalise_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case "func"
          ;
          parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case "implementation"
          ;
          if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Marker_73;

            {
              Marker_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Marker_73, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Marker_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(3, Marker_73, 2) = ((MR_Box) (Context_14));
              MR_hl_field(3, Marker_73, 3) = ((MR_Box) (SeqNum_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Marker_73));
            }
          }
          else
          {
            MR_Word Pieces_76;
            MR_Word Spec_77;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_86;

            {
              Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_81, 1) = ((MR_Box) (Functor_11));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])));
            }
            {
              Pieces_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[96])));
              MR_hl_field(1, Pieces_76, 1) = ((MR_Box) (Var_80));
            }
            {
              Spec_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_section_marker\'/6"));
              MR_hl_field(1, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_77, 3) = ((MR_Box) (Context_14));
              MR_hl_field(1, Spec_77, 4) = ((MR_Box) (Pieces_76));
            }
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = ((MR_Box) (Spec_77));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
            }
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          // case "import_module"
          ;
          parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, Context_14, SeqNum_15, (MR_Integer) 1, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 10:
        {
          // case "impure"
          ;
          {
            MR_Word Var_31;
            MR_Word Var_32;

            Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
            Var_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
            parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 2, Var_31, Var_32, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 11:
        {
          // case "include_module"
          ;
          parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, Context_14, SeqNum_15, (MR_Integer) 0, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 12:
        {
          // case "initialise", "initialize"
          ;
          parse_tree__parse_mutable__parse_initialise_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 13:
        {
          // case "inst"
          ;
          parse_tree__parse_inst_mode_defn__parse_inst_defn_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 14:
        {
          // case "instance"
          ;
          parse_tree__parse_class__parse_instance_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 15:
        {
          // case "interface"
          ;
          if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Marker_88;

            {
              Marker_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Marker_88, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Marker_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Marker_88, 2) = ((MR_Box) (Context_14));
              MR_hl_field(3, Marker_88, 3) = ((MR_Box) (SeqNum_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Marker_88));
            }
          }
          else
          {
            MR_Word Pieces_91;
            MR_Word Spec_92;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_101;

            {
              Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_96, 1) = ((MR_Box) (Functor_11));
            }
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[100])));
            }
            {
              Pieces_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_91, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[96])));
              MR_hl_field(1, Pieces_91, 1) = ((MR_Box) (Var_95));
            }
            {
              Spec_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_92, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_section_marker\'/6"));
              MR_hl_field(1, Spec_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_92, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_92, 3) = ((MR_Box) (Context_14));
              MR_hl_field(1, Spec_92, 4) = ((MR_Box) (Pieces_91));
            }
            {
              Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_101, 0) = ((MR_Box) (Spec_92));
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
        break;
      case (MR_Integer) 16:
        {
          // case "mode"
          ;
          parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(ModuleName_9, VarSet_10, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 17:
        {
          // case "module"
          ;
          parse_tree__parse_item__parse_module_marker_4_p_0(ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 18:
        {
          // case "mutable"
          ;
          parse_tree__parse_mutable__parse_mutable_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 19:
        {
          // case "pragma"
          ;
          parse_tree__parse_pragma__parse_pragma_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 20:
        {
          // case "pred"
          ;
          parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 21:
        {
          // case "promise"
          ;
          parse_tree__parse_item__parse_promise_item_5_p_0(VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 22:
        {
          // case "semipure"
          ;
          {
            MR_Word Var_51;
            MR_Word Var_52;

            Var_51 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
            Var_52 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
            parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 1, Var_51, Var_52, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 23:
        {
          // case "solver"
          ;
          parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 24:
        {
          // case "some"
          ;
          {
            MR_Word Var_56;
            MR_Word Var_57;

            Var_56 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0));
            Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0));
            parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, IsInClass_13, Context_14, SeqNum_15, (MR_Integer) 0, Var_56, Var_57, MaybeIOM_16);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 25:
        {
          // case "type"
          ;
          parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, (MR_Integer) 0, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 26:
        {
          // case "type_representation"
          ;
          parse_tree__parse_type_repn__parse_type_repn_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 27:
        {
          // case "typeclass"
          ;
          parse_tree__parse_class__parse_typeclass_item_6_p_0(ModuleName_9, VarSet_10, ArgTerms_12, Context_14, SeqNum_15, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 28:
        {
          // case "use_module"
          ;
          parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_9, VarSet_10, Functor_11, ArgTerms_12, Context_14, SeqNum_15, (MR_Integer) 2, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 29:
        {
          // case "version_numbers"
          ;
          parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_53_93_95_48_6_p_0(ModuleName_9, Functor_11, ArgTerms_12, Context_14, MaybeIOM_16);
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  return succeeded;
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
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (Functor_8));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[124])));
    }
    {
      Pieces_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_127, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
      MR_hl_field(1, Pieces_127, 1) = ((MR_Box) (Var_98));
    }
    {
      Spec_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_128, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
      MR_hl_field(1, Spec_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_128, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_128, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_128, 4) = ((MR_Box) (Pieces_127));
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
    MR_Word Var_183 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    MR_Word Var_184 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));

    if ((Var_183 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_143;
      MR_Word Pieces_145;
      MR_Word Spec_146;

      {
        Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_138, 1) = ((MR_Box) (Functor_8));
      }
      {
        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
        MR_hl_field(1, Var_137, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[124])));
      }
      {
        Pieces_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_145, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
        MR_hl_field(1, Pieces_145, 1) = ((MR_Box) (Var_137));
      }
      {
        Spec_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_146, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
        MR_hl_field(1, Spec_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_146, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_146, 3) = ((MR_Box) (Context_10));
        MR_hl_field(1, Spec_146, 4) = ((MR_Box) (Pieces_145));
      }
      {
        Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_143, 0) = ((MR_Box) (Spec_146));
        MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
      }
    }
    else
    {
      MR_Word Var_185 = ((MR_Word) ((MR_hl_field(1, Var_183, (MR_Integer) 1))));
      MR_Word Var_186 = ((MR_Word) ((MR_hl_field(1, Var_183, (MR_Integer) 0))));

      if ((Var_185 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_155;
        MR_Word Pieces_157;
        MR_Word Spec_158;

        {
          Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_150, 1) = ((MR_Box) (Functor_8));
        }
        {
          Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[124])));
        }
        {
          Pieces_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_157, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
          MR_hl_field(1, Pieces_157, 1) = ((MR_Box) (Var_149));
        }
        {
          Spec_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_158, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
          MR_hl_field(1, Spec_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_158, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_158, 3) = ((MR_Box) (Context_10));
          MR_hl_field(1, Spec_158, 4) = ((MR_Box) (Pieces_157));
        }
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (Spec_158));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_155));
        }
      }
      else
      {
        MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, Var_185, (MR_Integer) 1))));
        MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, Var_185, (MR_Integer) 0))));

        if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer VN_16;

          succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_184, &VN_16);
          if (succeeded)
          {
            MR_Integer Var_133;

            Var_133 = recompilation__version__module_item_version_numbers_version_number_0_f_0();
            succeeded = (VN_16 == Var_133);
            if (succeeded)
            {
              MR_Word Var_134;

              succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_186, &Var_134);
              if (succeeded)
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_134);
              if (succeeded)
              {
                MR_Word MaybeVersionNumbers_17;

                recompilation__version__parse_module_item_version_numbers_2_p_0(Var_188, &MaybeVersionNumbers_17);
                if (((MR_tag((MR_Word) MaybeVersionNumbers_17)) == (MR_Integer) 0))
                  *MaybeIOM_12 = (MR_Word) (MaybeVersionNumbers_17);
                else
                {
                  MR_Word VersionNumbers_18 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_17, (MR_Integer) 0))));
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

                Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_186);
                {
                  Spec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
                  MR_hl_field(1, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(1, Spec_22, 3) = ((MR_Box) (Var_49));
                  MR_hl_field(1, Spec_22, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[128])));
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
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Spec_124;

              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_69, 0) = ((MR_Box) (Context_10));
                MR_hl_field(0, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[134])));
              }
              {
                Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
                MR_hl_field(3, Spec_124, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 32) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(3, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Spec_124, 3) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(3, Spec_124, 4) = ((MR_Box) (Var_68));
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

            VersionNumberContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_188);
            {
              Spec_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_126, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
              MR_hl_field(1, Spec_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_126, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_126, 3) = ((MR_Box) (VersionNumberContext_23));
              MR_hl_field(1, Spec_126, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[136])));
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
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_167;
          MR_Word Pieces_169;
          MR_Word Spec_170;

          {
            Var_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_162, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_162, 1) = ((MR_Box) (Functor_8));
          }
          {
            Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
            MR_hl_field(1, Var_161, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[124])));
          }
          {
            Pieces_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_169, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
            MR_hl_field(1, Pieces_169, 1) = ((MR_Box) (Var_161));
          }
          {
            Spec_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_170, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_version_numbers_marker\'/6"));
            MR_hl_field(1, Spec_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_170, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_170, 3) = ((MR_Box) (Context_10));
            MR_hl_field(1, Spec_170, 4) = ((MR_Box) (Pieces_169));
          }
          {
            Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_167, 0) = ((MR_Box) (Spec_170));
            MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_167));
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
    Term_11 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
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
      MR_Word Specs_27 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_14, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
      }
    }
    else
    {
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_14, (MR_Integer) 0))));
      MR_Word GoalWarningSpecs_17 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_14, (MR_Integer) 1))));

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

        succeeded = ((((MR_tag((MR_Word) Goal0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_31 = ((((MR_Unsigned) ((MR_hl_field(3, Goal0_16, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          Var_32 = ((MR_Unsigned) ((MR_hl_field(3, Goal0_16, (MR_Integer) 1))) & (MR_Integer) 1);
          UnivVars0_19 = ((MR_Word) ((MR_hl_field(3, Goal0_16, (MR_Integer) 3))));
          AllGoal_20 = ((MR_Word) ((MR_hl_field(3, Goal0_16, (MR_Integer) 4))));
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
          MR_hl_field(3, Item_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
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
    MR_Word Spec_29;
    MR_Word Var_55;

    {
      Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_item\'/5"));
      MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Context_8));
      MR_hl_field(1, Spec_29, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[222])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
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
    MR_Word Spec_27;
    MR_Word Var_61;

    {
      Spec_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_defn_or_decl_item\'/9"));
      MR_hl_field(1, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_27, 3) = ((MR_Box) (Context_14));
      MR_hl_field(1, Spec_27, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[115])));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
    }
  }
  else
  {
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));

    if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
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
        succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 0))));
          Var_31 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
            succeeded = (strcmp(Var_30, (MR_String) "==") == 0);
            if (succeeded)
            {
              succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
                Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
                succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BodyTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
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
        parse_tree__parse_item__parse_mode_decl_8_p_0(ModuleName_10, VarSet_11, Var_78, IsInClass_13, Context_14, SeqNum_15, QuantConstrAttrs_17, MaybeIOM_18);
    }
    else
    {
      MR_Word Spec_64;
      MR_Word Var_68;

      {
        Spec_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_defn_or_decl_item\'/9"));
        MR_hl_field(1, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_64, 3) = ((MR_Box) (Context_14));
        MR_hl_field(1, Spec_64, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[115])));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
      }
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

  parse_tree__parse_item__make_item_avail_use_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_Avail_8);
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

  parse_tree__parse_item__make_item_include_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Incl_8);
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

  parse_tree__parse_item__make_item_avail_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Avail_8);
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

  parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybeModule_8);
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

  parse_tree__parse_item__parse_module_name_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeModuleName_6);
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
        MR_hl_field(0, Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3]));
        MR_hl_field(0, Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1));
        MR_hl_field(0, Parser_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Parser_17, 3) = ((MR_Box) (VarSet_10));
      }
      break;
    case (MR_Integer) 0:
      {
        Parser_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[0]));
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
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_66;

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
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (Article_34));
    }
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (Functor_11));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[104])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Pieces_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
      MR_hl_field(1, Pieces_35, 1) = ((MR_Box) (Var_47));
    }
    {
      Spec_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_incl_imp_use_items\'/8"));
      MR_hl_field(1, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_36, 3) = ((MR_Box) (Context_13));
      MR_hl_field(1, Spec_36, 4) = ((MR_Box) (Pieces_35));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
    }
  }
  else
  {
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));

    if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeModuleNames_19;

      parse_tree__parse_util__parse_comma_separated_one_or_more_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parser_17, Var_113, &MaybeModuleNames_19);
      if (((MR_tag((MR_Word) MaybeModuleNames_19)) == (MR_Integer) 0))
        *MaybeIOM_16 = (MR_Word) (MaybeModuleNames_19);
      else
      {
        MR_Word ModuleNames_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleNames_19, (MR_Integer) 0))));
        MR_Word HeadModuleName_21 = ((MR_Word) ((MR_hl_field(0, ModuleNames_20, (MR_Integer) 0))));
        MR_Word TailModuleNames_22 = ((MR_Word) ((MR_hl_field(0, ModuleNames_20, (MR_Integer) 1))));
        MR_Word IOM_25;

        switch (IIU_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word HeadImport_26;
              MR_Word TailImports_27;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word AvailImportInfo_114;

              {
                AvailImportInfo_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, AvailImportInfo_114, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(0, AvailImportInfo_114, 1) = ((MR_Box) (Context_13));
                MR_hl_field(0, AvailImportInfo_114, 2) = ((MR_Box) (SeqNum_14));
              }
              HeadImport_26 = (MR_Word) ((MR_Word) (AvailImportInfo_114));
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[1]));
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
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[2]));
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
              MR_Word AvailUseInfo_115;

              {
                AvailUseInfo_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, AvailUseInfo_115, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(0, AvailUseInfo_115, 1) = ((MR_Box) (Context_13));
                MR_hl_field(0, AvailUseInfo_115, 2) = ((MR_Box) (SeqNum_14));
              }
              HeadUse_28 = (MR_Word) (MR_mkword(1, (MR_Word) (AvailUseInfo_115)));
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[1]));
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
      MR_String Article_82;
      MR_Word Pieces_83;
      MR_Word Spec_84;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_95;

      switch (IIU_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          Article_82 = (MR_String) "an";
          break;
        case (MR_Integer) 2:
          Article_82 = (MR_String) "a";
          break;
      }
      {
        Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_88, 1) = ((MR_Box) (Article_82));
      }
      {
        Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_90, 1) = ((MR_Box) (Functor_11));
      }
      {
        Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[104])));
      }
      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
      }
      {
        Pieces_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_83, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
        MR_hl_field(1, Pieces_83, 1) = ((MR_Box) (Var_87));
      }
      {
        Spec_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_84, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_incl_imp_use_items\'/8"));
        MR_hl_field(1, Spec_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_84, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_84, 3) = ((MR_Box) (Context_13));
        MR_hl_field(1, Spec_84, 4) = ((MR_Box) (Pieces_83));
      }
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (Spec_84));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
      }
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
  MR_Word TypeCtorInfo_37_37;
  MR_Word ModuleNameTerm_9;
  MR_Word Var_14;

  if (succeeded)
  {
    ModuleNameTerm_9 = ((MR_Word) ((MR_hl_field(1, ArgTerms_5, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_5, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_37_37 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
      succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_37_37, ModuleNameTerm_9, &ModuleName_10);
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
    MR_Word Spec_13;
    MR_Word Var_35;

    {
      Spec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_module_marker\'/4"));
      MR_hl_field(1, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_13, 3) = ((MR_Box) (Context_6));
      MR_hl_field(1, Spec_13, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[93])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
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
  MR_String str_1 = ((&parse_tree__parse_item_vector_common_7[0 + slot_0]))->parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;

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
            MR_Word Var_46;
            MR_Word Var_47;

            Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrs0_18);
            Var_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrs0_19);
            parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, Var_46, Var_47, MaybeIOM_20);
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
            if ((ArgTerms_14 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Spec_71;
              MR_Word Var_82;

              {
                Spec_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_defn_or_decl_item\'/9"));
                MR_hl_field(1, Spec_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_71, 3) = ((MR_Box) (Context_16));
                MR_hl_field(1, Spec_71, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[115])));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (Spec_71));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeIOM0_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeIOM0_21, 0) = ((MR_Box) (Var_82));
              }
            }
            else
            {
              MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, ArgTerms_14, (MR_Integer) 1))));
              MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, ArgTerms_14, (MR_Integer) 0))));

              if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_item__parse_mode_decl_8_p_0(ModuleName_11, VarSet_12, Var_99, IsInClass_15, Context_16, SeqNum_17, Var_31, &MaybeIOM0_21);
              else
              {
                MR_Word Spec_85;
                MR_Word Var_89;

                {
                  Spec_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_defn_or_decl_item\'/9"));
                  MR_hl_field(1, Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(1, Spec_85, 3) = ((MR_Box) (Context_16));
                  MR_hl_field(1, Spec_85, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[115])));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_89, 0) = ((MR_Box) (Spec_85));
                  MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeIOM0_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeIOM0_21, 0) = ((MR_Box) (Var_89));
                }
              }
            }
            succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrs0_18);
            if (succeeded)
              *MaybeIOM_20 = MaybeIOM0_21;
            else
            {
              MR_Word Spec_23;

              {
                Spec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_attr_decl_item_or_marker\'/10"));
                MR_hl_field(1, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_23, 3) = ((MR_Box) (Context_16));
                MR_hl_field(1, Spec_23, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[56])));
              }
              if (((MR_tag((MR_Word) MaybeIOM0_21)) == (MR_Integer) 0))
              {
                MR_Word Specs0_25 = ((MR_Word) ((MR_hl_field(0, MaybeIOM0_21, (MR_Integer) 0))));
                MR_Word Var_45;

                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) (Specs0_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_20 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
                }
              }
              else
              {
                MR_Word Var_43;

                {
                  Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_20 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
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
            MR_Word Var_55;
            MR_Word Var_56;

            Var_55 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrs0_18);
            Var_56 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrs0_19);
            parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, Var_55, Var_56, MaybeIOM_20);
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
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_31,
  MR_Word * MaybeIOM_22)
{
  MR_bool succeeded;

  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_28;
    MR_Word Spec_29;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_51;

    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[83])));
    }
    {
      Pieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[75])));
      MR_hl_field(1, Pieces_28, 1) = ((MR_Box) (Var_37));
    }
    {
      Spec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_purity_attr\'/11"));
      MR_hl_field(1, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_29, 3) = ((MR_Box) (Context_17));
      MR_hl_field(1, Spec_29, 4) = ((MR_Box) (Pieces_28));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

    if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PurityAttr_24 = (MR_Word) (Purity_19);
      MR_Word STATE_VARIABLE_PurityAttrs_33_33;
      MR_String Functor_80;
      MR_Word ArgTerms_81;
      MR_Word FunctorContext_82;
      MR_Word Var_85;

      STATE_VARIABLE_PurityAttrs_33_33 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), STATE_VARIABLE_PurityAttrs_0_30, ((MR_Box) (PurityAttr_24)));
      succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_85 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 0))));
        ArgTerms_81 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 1))));
        FunctorContext_82 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 0);
        if (succeeded)
          Functor_80 = ((MR_String) ((MR_hl_field(0, Var_85, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word MaybeIOMPrime_83;

        succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_12, VarSet_13, Functor_80, ArgTerms_81, IsInClass_16, FunctorContext_82, SeqNum_18, STATE_VARIABLE_PurityAttrs_33_33, STATE_VARIABLE_QuantConstrAttrs_0_31, &MaybeIOMPrime_83);
        if (succeeded)
          *MaybeIOM_22 = MaybeIOMPrime_83;
        else
        {
          MR_Word Spec_84;
          MR_Word Var_86;

          Spec_84 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(Functor_80, FunctorContext_82);
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Spec_84));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
          }
        }
      }
      else
      {
        MR_Word Var_88;
        MR_Word Spec_90;

        Spec_90 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_13, Var_79);
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (Spec_90));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
        }
      }
    }
    else
    {
      MR_Word Pieces_54;
      MR_Word Spec_55;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_64;

      {
        Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_59, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[83])));
      }
      {
        Pieces_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[75])));
        MR_hl_field(1, Pieces_54, 1) = ((MR_Box) (Var_58));
      }
      {
        Spec_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_purity_attr\'/11"));
        MR_hl_field(1, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_55, 3) = ((MR_Box) (Context_17));
        MR_hl_field(1, Spec_55, 4) = ((MR_Box) (Pieces_54));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_55));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
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
  MR_Word STATE_VARIABLE_PurityAttrs_0_33,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_34,
  MR_Word * MaybeIOM_22)
{
  MR_bool succeeded;

  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_57;

    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[79])));
    }
    {
      Pieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[75])));
      MR_hl_field(1, Pieces_31, 1) = ((MR_Box) (Var_43));
    }
    {
      Spec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_constraint_attr\'/11"));
      MR_hl_field(1, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_32, 3) = ((MR_Box) (Context_17));
      MR_hl_field(1, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
    }
  }
  else
  {
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Word Var_97 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

    if ((Var_96 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_60;
      MR_Word Spec_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_70;

      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[79])));
      }
      {
        Pieces_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_60, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[75])));
        MR_hl_field(1, Pieces_60, 1) = ((MR_Box) (Var_64));
      }
      {
        Spec_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_constraint_attr\'/11"));
        MR_hl_field(1, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_61, 3) = ((MR_Box) (Context_17));
        MR_hl_field(1, Spec_61, 4) = ((MR_Box) (Pieces_60));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_61));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
      }
    }
    else
    {
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, Var_96, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, Var_96, (MR_Integer) 0))));

      if ((Var_98 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ConstrAttr_25;
        MR_Word STATE_VARIABLE_QuantConstrAttrs_37_37;
        MR_String Functor_100;
        MR_Word ArgTerms_101;
        MR_Word FunctorContext_102;
        MR_Word Var_105;

        {
          ConstrAttr_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConstrAttr_25, 0) = (MR_Box) ((MR_Unsigned) (QuantType_19));
          MR_hl_field(1, ConstrAttr_25, 1) = ((MR_Box) (Var_99));
        }
        STATE_VARIABLE_QuantConstrAttrs_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), STATE_VARIABLE_QuantConstrAttrs_0_34, ((MR_Box) (ConstrAttr_25)));
        succeeded = ((MR_tag((MR_Word) Var_97)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_105 = ((MR_Word) ((MR_hl_field(0, Var_97, (MR_Integer) 0))));
          ArgTerms_101 = ((MR_Word) ((MR_hl_field(0, Var_97, (MR_Integer) 1))));
          FunctorContext_102 = ((MR_Word) ((MR_hl_field(0, Var_97, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_Integer) 0);
          if (succeeded)
            Functor_100 = ((MR_String) ((MR_hl_field(0, Var_105, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word MaybeIOMPrime_103;

          succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_12, VarSet_13, Functor_100, ArgTerms_101, IsInClass_16, FunctorContext_102, SeqNum_18, STATE_VARIABLE_PurityAttrs_0_33, STATE_VARIABLE_QuantConstrAttrs_37_37, &MaybeIOMPrime_103);
          if (succeeded)
            *MaybeIOM_22 = MaybeIOMPrime_103;
          else
          {
            MR_Word Spec_104;
            MR_Word Var_106;

            Spec_104 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(Functor_100, FunctorContext_102);
            {
              Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_106, 0) = ((MR_Box) (Spec_104));
              MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_106));
            }
          }
        }
        else
        {
          MR_Word Var_108;
          MR_Word Spec_110;

          Spec_110 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_13, Var_97);
          {
            Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_108, 0) = ((MR_Box) (Spec_110));
            MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_108));
          }
        }
      }
      else
      {
        MR_Word Pieces_72;
        MR_Word Spec_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_82;

        {
          Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_77, 1) = ((MR_Box) (Functor_14));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[79])));
        }
        {
          Pieces_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_72, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[75])));
          MR_hl_field(1, Pieces_72, 1) = ((MR_Box) (Var_76));
        }
        {
          Spec_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_constraint_attr\'/11"));
          MR_hl_field(1, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_73, 3) = ((MR_Box) (Context_17));
          MR_hl_field(1, Spec_73, 4) = ((MR_Box) (Pieces_72));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Spec_73));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_82));
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
  MR_Word STATE_VARIABLE_PurityAttrs_0_33,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_34,
  MR_Word * MaybeIOM_22)
{
  MR_bool succeeded;

  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_60;

    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[63])));
    }
    {
      Pieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[57])));
      MR_hl_field(1, Pieces_31, 1) = ((MR_Box) (Var_43));
    }
    {
      Spec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_quant_attr\'/11"));
      MR_hl_field(1, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_32, 3) = ((MR_Box) (Context_17));
      MR_hl_field(1, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
    }
  }
  else
  {
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

    if ((Var_99 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_63;
      MR_Word Spec_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_73;

      {
        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_68, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[63])));
      }
      {
        Pieces_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[57])));
        MR_hl_field(1, Pieces_63, 1) = ((MR_Box) (Var_67));
      }
      {
        Spec_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_quant_attr\'/11"));
        MR_hl_field(1, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_64, 3) = ((MR_Box) (Context_17));
        MR_hl_field(1, Spec_64, 4) = ((MR_Box) (Pieces_63));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
      }
    }
    else
    {
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, Var_99, (MR_Integer) 1))));
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(1, Var_99, (MR_Integer) 0))));

      if ((Var_101 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word QuantAttr_25;
        MR_Word STATE_VARIABLE_QuantConstrAttrs_37_37;
        MR_String Functor_103;
        MR_Word ArgTerms_104;
        MR_Word FunctorContext_105;
        MR_Word Var_108;

        {
          QuantAttr_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QuantAttr_25, 0) = (MR_Box) ((MR_Unsigned) (QuantType_19));
          MR_hl_field(0, QuantAttr_25, 1) = ((MR_Box) (Var_100));
        }
        STATE_VARIABLE_QuantConstrAttrs_37_37 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), STATE_VARIABLE_QuantConstrAttrs_0_34, ((MR_Box) (QuantAttr_25)));
        succeeded = ((MR_tag((MR_Word) Var_102)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_108 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 0))));
          ArgTerms_104 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 1))));
          FunctorContext_105 = ((MR_Word) ((MR_hl_field(0, Var_102, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 0);
          if (succeeded)
            Functor_103 = ((MR_String) ((MR_hl_field(0, Var_108, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word MaybeIOMPrime_106;

          succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_12, VarSet_13, Functor_103, ArgTerms_104, IsInClass_16, FunctorContext_105, SeqNum_18, STATE_VARIABLE_PurityAttrs_0_33, STATE_VARIABLE_QuantConstrAttrs_37_37, &MaybeIOMPrime_106);
          if (succeeded)
            *MaybeIOM_22 = MaybeIOMPrime_106;
          else
          {
            MR_Word Spec_107;
            MR_Word Var_109;

            Spec_107 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(Functor_103, FunctorContext_105);
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (Spec_107));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
            }
          }
        }
        else
        {
          MR_Word Var_111;
          MR_Word Spec_113;

          Spec_113 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_13, Var_102);
          {
            Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_111, 0) = ((MR_Box) (Spec_113));
            MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_111));
          }
        }
      }
      else
      {
        MR_Word Pieces_75;
        MR_Word Spec_76;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_85;

        {
          Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_80, 1) = ((MR_Box) (Functor_14));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[63])));
        }
        {
          Pieces_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_75, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[57])));
          MR_hl_field(1, Pieces_75, 1) = ((MR_Box) (Var_79));
        }
        {
          Spec_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_76, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_quant_attr\'/11"));
          MR_hl_field(1, Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_76, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_76, 3) = ((MR_Box) (Context_17));
          MR_hl_field(1, Spec_76, 4) = ((MR_Box) (Pieces_75));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_76));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
        }
      }
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
  MR_Word conv0_HeadVar__2_139;

  conv0_HeadVar__2_139 = parse_tree__parse_item__IntroducedFrom__func__parse_promise_ex_item__1946__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_139));
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
  MR_Word Var_47;

  if (succeeded)
  {
    Term_19 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
    succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word PurityAttrs_20;
    MR_Word PuritySpecs_21;
    MR_Word QuantConstrAttrs_26;
    MR_Word ContextPieces_27;
    MR_Word MaybeUnivVars_30;
    MR_Word ProgVarSet0_33;
    MR_Word MaybeGoal0_34;
    MR_Word ProgVarSet_35;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word VarsTerm_29;
    MR_Word QuantConstrAttr_28;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word UnivVars_36;
    MR_Word Goal_37;
    MR_Word GoalWarningSpecs_38;

    PurityAttrs_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0), PurityAttrCord_16);
    if ((PurityAttrs_20 == (MR_Word) ((MR_Unsigned) 0U)))
      PuritySpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PurityPieces_24;
      MR_Word PuritySpec_25;
      MR_Word Var_50;
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (Functor_11));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[225])));
      }
      {
        PurityPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PurityPieces_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
        MR_hl_field(1, PurityPieces_24, 1) = ((MR_Box) (Var_50));
      }
      {
        PuritySpec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PuritySpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_ex_item\'/9"));
        MR_hl_field(1, PuritySpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, PuritySpec_25, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, PuritySpec_25, 3) = ((MR_Box) (Context_13));
        MR_hl_field(1, PuritySpec_25, 4) = ((MR_Box) (PurityPieces_24));
      }
      {
        PuritySpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PuritySpecs_21, 0) = ((MR_Box) (PuritySpec_25));
        MR_hl_field(1, PuritySpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    QuantConstrAttrs_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0), QuantConstrAttrCord_17);
    {
      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_69, 1) = ((MR_Box) (Functor_11));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[147])));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148])));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
    }
    ContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65);
    succeeded = (QuantConstrAttrs_26 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      QuantConstrAttr_28 = ((MR_Word) ((MR_hl_field(1, QuantConstrAttrs_26, (MR_Integer) 0))));
      Var_76 = ((MR_Word) ((MR_hl_field(1, QuantConstrAttrs_26, (MR_Integer) 1))));
      succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) QuantConstrAttr_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_77 = ((MR_Unsigned) ((MR_hl_field(0, QuantConstrAttr_28, (MR_Integer) 0))) & (MR_Integer) 1);
          VarsTerm_29 = ((MR_Word) ((MR_hl_field(0, QuantConstrAttr_28, (MR_Integer) 1))));
          succeeded = (Var_77 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
    {
      MR_Word ContextPieces_145;
      MR_Word Var_146;

      Var_146 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74])));
      ContextPieces_145 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_27, Var_146);
      parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_29, VarSet_10, ContextPieces_145, &MaybeUnivVars_30);
    }
    else
    {
      MR_Word UnivVarsPieces_31;
      MR_Word UnivVarsSpec_32;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_86;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_String Var_91;
      MR_String Var_93;
      MR_Word Var_104;

      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (Functor_11));
      }
      Var_93 = mercury__string__f_43_43_2_f_0(Functor_11, (MR_String) " ( <disjunction> )");
      Var_91 = mercury__string__f_43_43_2_f_0((MR_String) ":- all [<vars>] ", Var_93);
      {
        Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_90, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
      }
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[226])));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_89));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88])));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
      }
      {
        UnivVarsPieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UnivVarsPieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
        MR_hl_field(1, UnivVarsPieces_31, 1) = ((MR_Box) (Var_81));
      }
      {
        UnivVarsSpec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UnivVarsSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_ex_item\'/9"));
        MR_hl_field(1, UnivVarsSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, UnivVarsSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, UnivVarsSpec_32, 3) = ((MR_Box) (Context_13));
        MR_hl_field(1, UnivVarsSpec_32, 4) = ((MR_Box) (UnivVarsPieces_31));
      }
      {
        Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_104, 0) = ((MR_Box) (UnivVarsSpec_32));
        MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeUnivVars_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeUnivVars_30, 0) = ((MR_Box) (Var_104));
      }
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, &ProgVarSet0_33);
    parse_tree__parse_goal__parse_goal_5_p_0(Term_19, ContextPieces_27, &MaybeGoal0_34, ProgVarSet0_33, &ProgVarSet_35);
    succeeded = (PuritySpecs_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeUnivVars_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        UnivVars_36 = ((MR_Word) ((MR_hl_field(1, MaybeUnivVars_30, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeGoal0_34)) == (MR_Integer) 1);
        if (succeeded)
        {
          Goal_37 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_34, (MR_Integer) 0))));
          GoalWarningSpecs_38 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_34, (MR_Integer) 1))));
          succeeded = (GoalWarningSpecs_38 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word UnivProgVars_39;
      MR_Word ItemPromise_40;
      MR_Word Item_41;
      MR_Word Var_107;

      UnivProgVars_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[10]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[4]), UnivVars_36);
      {
        ItemPromise_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemPromise_40, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_15));
        MR_hl_field(0, ItemPromise_40, 1) = ((MR_Box) (Goal_37));
        MR_hl_field(0, ItemPromise_40, 2) = ((MR_Box) (ProgVarSet_35));
        MR_hl_field(0, ItemPromise_40, 3) = ((MR_Box) (UnivProgVars_39));
        MR_hl_field(0, ItemPromise_40, 4) = ((MR_Box) (Context_13));
        MR_hl_field(0, ItemPromise_40, 5) = ((MR_Box) (SeqNum_14));
      }
      {
        Item_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Item_41, 1) = ((MR_Box) (ItemPromise_40));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Item_41));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_107));
      }
    }
    else
    {
      MR_Word GoalSpecs_43;
      MR_Word Specs_44;
      MR_Word Var_108;
      MR_Word Var_109;

      if (((MR_tag((MR_Word) MaybeGoal0_34)) == (MR_Integer) 0))
        GoalSpecs_43 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_34, (MR_Integer) 0))));
      else
        GoalSpecs_43 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_34, (MR_Integer) 1))));
      Var_109 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[11]), MaybeUnivVars_30);
      Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_109, GoalSpecs_43);
      Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PuritySpecs_21, Var_108);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_44));
      }
    }
  }
  else
  {
    MR_Word Pieces_45;
    MR_Word Spec_46;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_129;

    {
      Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_113, 1) = ((MR_Box) (Functor_11));
    }
    {
      Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[219])));
    }
    {
      Pieces_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
      MR_hl_field(1, Pieces_45, 1) = ((MR_Box) (Var_112));
    }
    {
      Spec_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_promise_ex_item\'/9"));
      MR_hl_field(1, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_46, 3) = ((MR_Box) (Context_13));
      MR_hl_field(1, Spec_46, 4) = ((MR_Box) (Pieces_45));
    }
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Spec_46));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_129));
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
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word BeforeDetismTermPrime_82;
  MR_Word DetismTerm_83;
  MR_Word Args_80;
  MR_Word Var_90;
  MR_String Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word MaybeDetism_25;
  MR_Word WithInst_26;

  switch (IsInClass_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DeclWords_17 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[199]));
      break;
    case (MR_Integer) 1:
      DeclWords_17 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[200]));
      break;
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (DeclWords_17));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[201])));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  DetismContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34);
  succeeded = ((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_90 = ((MR_Word) ((MR_hl_field(0, Term_11, (MR_Integer) 0))));
    Args_80 = ((MR_Word) ((MR_hl_field(0, Term_11, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_91 = ((MR_String) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
      succeeded = (strcmp(Var_91, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Args_80 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeDetismTermPrime_82 = ((MR_Word) ((MR_hl_field(1, Args_80, (MR_Integer) 0))));
          Var_92 = ((MR_Word) ((MR_hl_field(1, Args_80, (MR_Integer) 1))));
          succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DetismTerm_83 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 0))));
            Var_93 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 1))));
            succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Detism_86;
    MR_String DetismFunctor_84;
    MR_Word Var_94;
    MR_Word Var_95;

    BeforeDetismTerm_19 = BeforeDetismTermPrime_82;
    succeeded = ((MR_tag((MR_Word) DetismTerm_83)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_94 = ((MR_Word) ((MR_hl_field(0, DetismTerm_83, (MR_Integer) 0))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, DetismTerm_83, (MR_Integer) 1))));
      succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_94)) == (MR_Integer) 0);
        if (succeeded)
        {
          DetismFunctor_84 = ((MR_String) ((MR_hl_field(0, Var_94, (MR_Integer) 0))));
          succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetismFunctor_84, &Detism_86);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_96;

      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Detism_86));
      }
      {
        MaybeMaybeDetism_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeDetism_20, 0) = ((MR_Box) (Var_96));
      }
    }
    else
    {
      MR_String DetismTermStr_87;
      MR_Word Pieces_88;
      MR_Word Spec_89;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_100;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_109;
      MR_Word Var_110;

      DetismTermStr_87 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_10, DetismTerm_83);
      Var_97 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DetismContextPieces_18);
      {
        Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_104, 1) = ((MR_Box) (DetismTermStr_87));
      }
      {
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[227])));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
      }
      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_100));
      }
      Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_98);
      Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_83);
      {
        Spec_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_determinism_suffix\'/5"));
        MR_hl_field(1, Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_89, 3) = ((MR_Box) (Var_109));
        MR_hl_field(1, Spec_89, 4) = ((MR_Box) (Pieces_88));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (Spec_89));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeDetism_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeDetism_20, 0) = ((MR_Box) (Var_110));
      }
    }
  }
  else
  {
    BeforeDetismTerm_19 = Term_11;
    MaybeMaybeDetism_20 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[7]));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[150])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[152])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[154])));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
  }
  WithInstContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42);
  parse_tree__parse_item__parse_with_inst_suffix_5_p_0(VarSet_10, WithInstContextPieces_21, BeforeDetismTerm_19, &BaseTerm_24, &MaybeWithInst_23);
  succeeded = ((MR_tag((MR_Word) MaybeMaybeDetism_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    MaybeDetism_25 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeDetism_20, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) MaybeWithInst_23)) == (MR_Integer) 1);
    if (succeeded)
      WithInst_26 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_23, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    succeeded = (MaybeDetism_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (WithInst_26 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word Spec_30;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
      {
        Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_mode_decl\'/8"));
        MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Var_70));
        MR_hl_field(1, Spec_30, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[159])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
      }
    }
    else
      parse_tree__parse_item__parse_mode_decl_base_10_p_0(ModuleName_9, VarSet_10, BaseTerm_24, IsInClass_12, Context_13, SeqNum_14, WithInst_26, MaybeDetism_25, QuantConstrAttrs_15, MaybeIOM_16);
  }
  else
  {
    MR_Word Specs_31;
    MR_Word Var_73;
    MR_Word Var_74;

    Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[2]), MaybeMaybeDetism_20);
    Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[3]), MaybeWithInst_23);
    Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_73, Var_74);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_31));
    }
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
  MR_Word MaybeDet_18,
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
      Var_31 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_32, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeSugaredFuncTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ReturnTypeTerm_22 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
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
      ContextPieces_26 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[204])));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_11, VarSet_12, ContextPieces_26, FuncTerm_25, &MaybeFunctorArgs_27);
      if (((MR_tag((MR_Word) MaybeFunctorArgs_27)) == (MR_Integer) 0))
      {
        MR_Word Specs_28 = ((MR_Word) ((MR_hl_field(0, MaybeFunctorArgs_27, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
        }
      }
      else
      {
        MR_Word Functor_29 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_27, (MR_Integer) 0))));
        MR_Word ArgTerms_30 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_27, (MR_Integer) 1))));

        parse_tree__parse_item__parse_func_mode_decl_11_p_0(Functor_29, ArgTerms_30, ModuleName_11, ReturnTypeTerm_22, Term_13, VarSet_12, MaybeDet_18, Context_15, SeqNum_16, QuantConstrAttrs_19, MaybeIOM_20);
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

      ContextPieces_72 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[205])));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_11, VarSet_12, ContextPieces_72, Term_13, &MaybeFunctorArgs_73);
      if (((MR_tag((MR_Word) MaybeFunctorArgs_73)) == (MR_Integer) 0))
      {
        MR_Word Specs_66 = ((MR_Word) ((MR_hl_field(0, MaybeFunctorArgs_73, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_66));
        }
      }
      else
      {
        MR_Word Functor_67 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_73, (MR_Integer) 0))));
        MR_Word ArgTerms_68 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorArgs_73, (MR_Integer) 1))));

        parse_tree__parse_item__parse_pred_mode_decl_11_p_0(Functor_67, ArgTerms_68, ModuleName_11, Term_13, VarSet_12, WithInst_17, MaybeDet_18, Context_15, SeqNum_16, QuantConstrAttrs_19, MaybeIOM_20);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
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
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_62;
  MR_Word ArgModes0_29;
  MR_Word RetMode0_30;
  MR_Word InstConstraints_33;

  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Functor_12));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[65])));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[209])));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
  }
  ArgContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44);
  parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_17, ArgContextPieces_23, ArgTerms_13, &MaybeArgModes0_24);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[65])));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[211])));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[210])));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
  }
  RetContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56);
  parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_17, RetContextPieces_25, RetModeTerm_15, &MaybeRetMode0_26);
  QuantContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[204])));
  parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_14, VarSet_17, QuantConstrAttrs_21, QuantContextPieces_27, &MaybeConstraints_28);
  succeeded = ((MR_tag((MR_Word) MaybeArgModes0_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    ArgModes0_29 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_24, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) MaybeRetMode0_26)) == (MR_Integer) 1);
    if (succeeded)
    {
      RetMode0_30 = ((MR_Word) ((MR_hl_field(1, MaybeRetMode0_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeConstraints_28)) == (MR_Integer) 1);
      if (succeeded)
        InstConstraints_33 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_28, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Word ArgModes_34;
    MR_Word RetMode_35;
    MR_Word InstVarSet_36;
    MR_Word ArgReturnModes_37;
    MR_Word InconsistentVars_38;
    MR_Word MaybeInconsistentSpec_39;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_87;

    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_83, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2]));
      MR_hl_field(0, Var_83, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_mode_decl_11_p_0_1));
      MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_83, 3) = ((MR_Box) (InstConstraints_33));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_83, ArgModes0_29, &ArgModes_34);
    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(InstConstraints_33, RetMode0_30, &RetMode_35);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_17, &InstVarSet_36);
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (RetMode_35));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ArgReturnModes_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_34, Var_84);
    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(ArgReturnModes_37, &InconsistentVars_38);
    Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FullTerm_16);
    parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in function mode declaration", Var_87, InstVarSet_36, InconsistentVars_38, &MaybeInconsistentSpec_39);
    if ((MaybeInconsistentSpec_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ItemModeDecl_40;
      MR_Word Item_41;
      MR_Word Var_91;

      {
        ItemModeDecl_40 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemModeDecl_40, 0) = ((MR_Box) (Functor_12));
        MR_hl_field(0, ItemModeDecl_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[5])));
        MR_hl_field(0, ItemModeDecl_40, 2) = ((MR_Box) (ArgReturnModes_37));
        MR_hl_field(0, ItemModeDecl_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ItemModeDecl_40, 4) = ((MR_Box) (MaybeDetism_18));
        MR_hl_field(0, ItemModeDecl_40, 5) = ((MR_Box) (InstVarSet_36));
        MR_hl_field(0, ItemModeDecl_40, 6) = ((MR_Box) (Context_19));
        MR_hl_field(0, ItemModeDecl_40, 7) = ((MR_Box) (SeqNum_20));
      }
      Item_41 = (MR_Word) (MR_mkword(2, (MR_Word) (ItemModeDecl_40)));
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Item_41));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_91));
      }
    }
    else
    {
      MR_Word Spec_42 = ((MR_Word) ((MR_hl_field(1, MaybeInconsistentSpec_39, (MR_Integer) 0))));
      MR_Word Var_92;

      {
        Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_92, 0) = ((MR_Box) (Spec_42));
        MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
      }
    }
  }
  else
  {
    MR_Word Specs_43;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;

    Var_94 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[8]), MaybeArgModes0_24);
    Var_96 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeRetMode0_26);
    Var_97 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[0]), MaybeConstraints_28);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_96, Var_97);
    Specs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_94, Var_95);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_43));
    }
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

  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
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

  parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1756__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
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
  MR_Word MaybeDet_18,
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
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Specs_85;
  MR_Word ExistQVarsCord_87;
  MR_Word UnivClassConstraints_88;
  MR_Word UnivInstConstraints_89;
  MR_Word ExistClassConstraints_90;
  MR_Word ExistInstConstraints_91;
  MR_Word ExistQVars0_92;
  MR_Word ExistQVars_93;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word _UnivQVarsCord_86;
  MR_Word ArgModes0_27;
  MR_Word InstConstraints_30;

  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (Functor_12));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[65])));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[206])));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  ArgContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41);
  parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_16, ArgContextPieces_23, ArgTerms_13, &MaybeArgModes0_24);
  ContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[208])));
  Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_98 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_100 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  Var_101 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_102 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(ModuleName_14, VarSet_16, QuantConstrAttrs_21, ContextPieces_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_85, Var_97, &_UnivQVarsCord_86, Var_98, &ExistQVarsCord_87, Var_99, &UnivClassConstraints_88, Var_100, &UnivInstConstraints_89, Var_101, &ExistClassConstraints_90, Var_102, &ExistInstConstraints_91);
  ExistQVars0_92 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), ExistQVarsCord_87);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[3]), ExistQVars0_92, &ExistQVars_93);
  if ((Specs_85 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClassConstraints_94;
    MR_Word InstConstraints_95;
    MR_Word Var_104;
    MR_Word Var_105;

    Var_104 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivClassConstraints_88);
    Var_105 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistClassConstraints_90);
    {
      ClassConstraints_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassConstraints_94, 0) = ((MR_Box) (Var_104));
      MR_hl_field(0, ClassConstraints_94, 1) = ((MR_Box) (Var_105));
    }
    InstConstraints_95 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UnivInstConstraints_89, ExistInstConstraints_91);
    {
      MaybeConstraints_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeConstraints_26, 0) = ((MR_Box) (ExistQVars_93));
      MR_hl_field(1, MaybeConstraints_26, 1) = ((MR_Box) (ClassConstraints_94));
      MR_hl_field(1, MaybeConstraints_26, 2) = ((MR_Box) (InstConstraints_95));
    }
  }
  else
    {
      MaybeConstraints_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeConstraints_26, 0) = ((MR_Box) (Specs_85));
    }
  succeeded = ((MR_tag((MR_Word) MaybeArgModes0_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    ArgModes0_27 = ((MR_Word) ((MR_hl_field(1, MaybeArgModes0_24, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) MaybeConstraints_26)) == (MR_Integer) 1);
    if (succeeded)
      InstConstraints_30 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_26, (MR_Integer) 2))));
  }
  if (succeeded)
  {
    MR_Word ArgModes_31;
    MR_Word InstVarSet_32;
    MR_Word InconsistentVars_33;
    MR_Word MaybeInconsistentSpec_34;
    MR_Word Var_65;
    MR_Word Var_67;

    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_mode_decl_11_p_0_2));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (InstConstraints_30));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_65, ArgModes0_27, &ArgModes_31);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_16, &InstVarSet_32);
    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(ArgModes_31, &InconsistentVars_33);
    Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredModeTerm_15);
    parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in predicate mode declaration", Var_67, InstVarSet_32, InconsistentVars_33, &MaybeInconsistentSpec_34);
    if ((MaybeInconsistentSpec_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybePredOrFunc_35;
      MR_Word ItemModeDecl_37;
      MR_Word Item_38;
      MR_Word Var_69;

      if ((WithInst_17 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybePredOrFunc_35 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[4]));
      else
        MaybePredOrFunc_35 = (MR_Word) ((MR_Unsigned) 0U);
      {
        ItemModeDecl_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemModeDecl_37, 0) = ((MR_Box) (Functor_12));
        MR_hl_field(0, ItemModeDecl_37, 1) = ((MR_Box) (MaybePredOrFunc_35));
        MR_hl_field(0, ItemModeDecl_37, 2) = ((MR_Box) (ArgModes_31));
        MR_hl_field(0, ItemModeDecl_37, 3) = ((MR_Box) (WithInst_17));
        MR_hl_field(0, ItemModeDecl_37, 4) = ((MR_Box) (MaybeDet_18));
        MR_hl_field(0, ItemModeDecl_37, 5) = ((MR_Box) (InstVarSet_32));
        MR_hl_field(0, ItemModeDecl_37, 6) = ((MR_Box) (Context_19));
        MR_hl_field(0, ItemModeDecl_37, 7) = ((MR_Box) (SeqNum_20));
      }
      Item_38 = (MR_Word) (MR_mkword(2, (MR_Word) (ItemModeDecl_37)));
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Item_38));
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
      MR_Word Spec_39 = ((MR_Word) ((MR_hl_field(1, MaybeInconsistentSpec_34, (MR_Integer) 0))));
      MR_Word Var_70;

      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_39));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
      }
    }
  }
  else
  {
    MR_Word Specs_40;
    MR_Word Var_72;
    MR_Word Var_73;

    Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[8]), MaybeArgModes0_24);
    Var_73 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[0]), MaybeConstraints_26);
    Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_72, Var_73);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
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
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_135;
    MR_Word Var_138;
    MR_Word Var_141;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_155;
    MR_Word Pieces_161;
    MR_Word Spec_162;

    {
      Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_131, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_145, 1) = ((MR_Box) (Functor_14));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
    }
    {
      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[142])));
      MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[141])));
      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
    }
    {
      Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[86])));
      MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_132, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88])));
      MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_135));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_132));
    }
    {
      Pieces_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_161, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
      MR_hl_field(1, Pieces_161, 1) = ((MR_Box) (Var_130));
    }
    {
      Spec_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_162, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_or_func_decl_item\'/11"));
      MR_hl_field(1, Spec_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_162, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_162, 3) = ((MR_Box) (Context_17));
      MR_hl_field(1, Spec_162, 4) = ((MR_Box) (Pieces_161));
    }
    {
      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_155, 0) = ((MR_Box) (Spec_162));
      MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_155));
    }
  }
  else
  {
    MR_Word Var_222 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Word Var_223 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

    if ((Var_222 == (MR_Word) ((MR_Unsigned) 0U)))
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
              MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(3, Var_50, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[145])));
            }
            {
              PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[143])));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 1) = ((MR_Box) (Var_49));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_57;

            {
              Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(3, Var_57, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
            }
            {
              PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 0) = ((MR_Box) (Var_57));
              MR_hl_field(1, PredOrFuncDeclPieces_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[147])));
            }
          }
          break;
      }
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[149])), PredOrFuncDeclPieces_24);
      DetismContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64);
      parse_tree__parse_item__parse_determinism_suffix_5_p_0(VarSet_13, DetismContextPieces_25, Var_223, &BeforeDetismTerm_26, &MaybeMaybeDetism_27);
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[155])), PredOrFuncDeclPieces_24);
      WithInstContextPieces_28 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69);
      parse_tree__parse_item__parse_with_inst_suffix_5_p_0(VarSet_13, WithInstContextPieces_28, BeforeDetismTerm_26, &BeforeWithInstTerm_29, &MaybeWithInst_30);
      parse_tree__parse_item__parse_with_type_suffix_4_p_0(VarSet_13, BeforeWithInstTerm_29, &BaseTerm_33, &MaybeWithType_32);
      succeeded = ((MR_tag((MR_Word) MaybeMaybeDetism_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        MaybeDetism_34 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeDetism_27, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeWithInst_30)) == (MR_Integer) 1);
        if (succeeded)
        {
          WithInst_35 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_30, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeWithType_32)) == (MR_Integer) 1);
          if (succeeded)
            WithType_36 = ((MR_Word) ((MR_hl_field(1, MaybeWithType_32, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        succeeded = (WithInst_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeDetism_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Spec_40;
          MR_Word Var_94;
          MR_Word Var_95;

          Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BaseTerm_33);
          {
            Spec_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_or_func_decl_item\'/11"));
            MR_hl_field(1, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_40, 3) = ((MR_Box) (Var_94));
            MR_hl_field(1, Spec_40, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[159])));
          }
          {
            Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_95, 0) = ((MR_Box) (Spec_40));
            MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
          }
        }
        else
        {
          succeeded = (WithInst_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (WithType_36 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Spec_158;

            Var_120 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BaseTerm_33);
            {
              Spec_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_158, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_or_func_decl_item\'/11"));
              MR_hl_field(1, Spec_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_158, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_158, 3) = ((MR_Box) (Var_120));
              MR_hl_field(1, Spec_158, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[167])));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Spec_158));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_121));
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
        MR_Word Specs_42;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;

        Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[2]), MaybeMaybeDetism_27);
        Var_125 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[3]), MaybeWithInst_30);
        Var_126 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[4]), MaybeWithType_32);
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_125, Var_126);
        Specs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_123, Var_124);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_42));
        }
      }
    }
    else
    {
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_177;
      MR_Word Var_180;
      MR_Word Var_183;
      MR_Word Var_186;
      MR_Word Var_187;
      MR_Word Var_192;
      MR_Word Pieces_194;
      MR_Word Spec_195;

      {
        Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_173, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_187, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
        MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
      }
      {
        Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_183, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[142])));
        MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_186));
      }
      {
        Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_180, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[141])));
        MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_183));
      }
      {
        Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_177, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[86])));
        MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_180));
      }
      {
        Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_174, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[88])));
        MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_177));
      }
      {
        Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
        MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_174));
      }
      {
        Pieces_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_194, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[92])));
        MR_hl_field(1, Pieces_194, 1) = ((MR_Box) (Var_172));
      }
      {
        Spec_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_195, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_or_func_decl_item\'/11"));
        MR_hl_field(1, Spec_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_195, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_195, 3) = ((MR_Box) (Context_17));
        MR_hl_field(1, Spec_195, 4) = ((MR_Box) (Pieces_194));
      }
      {
        Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_192, 0) = ((MR_Box) (Spec_195));
        MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_192));
      }
    }
  }
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
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      succeeded = (strcmp(Var_18, (MR_String) "with_inst") == 0);
      if (succeeded)
      {
        succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeWithInstTermPrime_11 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InstTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
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
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, MaybeInst_14, (MR_Integer) 0))));
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
    *MaybeWithInst_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[10]));
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
    TypeQualifier_9 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BeforeWithTypeTermPrime_10 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
      succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
        Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) TypeQualifier_9)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_39 = ((MR_String) ((MR_hl_field(0, TypeQualifier_9, (MR_Integer) 0))));
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
    ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[231])));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[8])), VarSet_5, ContextPieces_13, TypeTerm_11, &MaybeType_14);
    if (((MR_tag((MR_Word) MaybeType_14)) == (MR_Integer) 0))
      *MaybeWithType_8 = (MR_Word) (MaybeType_14);
    else
    {
      MR_Word Type_15 = ((MR_Word) ((MR_hl_field(1, MaybeType_14, (MR_Integer) 0))));
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
    *MaybeWithType_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[9]));
  }
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
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
    Args_11 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      succeeded = (strcmp(Var_22, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BeforeDetismTermPrime_13 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DetismTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 1))));
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
      Var_25 = ((MR_Word) ((MR_hl_field(0, DetismTerm_14, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, DetismTerm_14, (MR_Integer) 1))));
      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          DetismFunctor_15 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
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
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_45;
      MR_Word Var_46;

      DetismTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, DetismTerm_14);
      Var_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7);
      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (DetismTermStr_18));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[227])));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
      }
      Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_29);
      Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DetismTerm_14);
      {
        Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_determinism_suffix\'/5"));
        MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_45));
        MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeDetism_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
      }
    }
  }
  else
  {
    *BeforeDetismTerm_9 = Term_8;
    *MaybeMaybeDetism_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[7]));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_64;

  conv1_LambdaHeadVar__2_64 = parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1244__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_39;

  parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1756__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_39));
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word Term_13,
  MR_Word MaybeDet_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word PurityAttrs_18,
  MR_Word QuantConstrAttrs_19,
  MR_Word * MaybeIOM_20)
{
  MR_bool succeeded;
  MR_Word ContextPieces_21;
  MR_Word Specs_131;
  MR_Word ExistQVarsCord_133;
  MR_Word UnivClassConstraints_134;
  MR_Word UnivInstConstraints_135;
  MR_Word ExistClassConstraints_136;
  MR_Word ExistInstConstraints_137;
  MR_Word ExistQVars0_138;
  MR_Word ExistQVars_139;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word _UnivQVarsCord_132;

  ContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[182])));
  Var_143 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_144 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]));
  Var_145 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_146 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  Var_147 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0));
  Var_148 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(ModuleName_11, VarSet_12, QuantConstrAttrs_19, ContextPieces_21, (MR_Word) ((MR_Unsigned) 0U), &Specs_131, Var_143, &_UnivQVarsCord_132, Var_144, &ExistQVarsCord_133, Var_145, &UnivClassConstraints_134, Var_146, &UnivInstConstraints_135, Var_147, &ExistClassConstraints_136, Var_148, &ExistInstConstraints_137);
  ExistQVars0_138 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), ExistQVarsCord_133);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[2]), ExistQVars0_138, &ExistQVars_139);
  if ((Specs_131 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Constraints_25;
    MR_Word InstConstraints_26;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word MaybeSugaredFuncTerm_27;
    MR_Word ReturnTerm_28;
    MR_Word Var_59;
    MR_Word Var_55;
    MR_String Var_56;
    MR_Word Var_57;
    MR_Word Var_58;

    Var_150 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivClassConstraints_134);
    Var_151 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistClassConstraints_136);
    {
      Constraints_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Constraints_25, 0) = ((MR_Box) (Var_150));
      MR_hl_field(0, Constraints_25, 1) = ((MR_Box) (Var_151));
    }
    InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UnivInstConstraints_135, ExistInstConstraints_137);
    succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_55 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_56 = ((MR_String) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
        succeeded = (strcmp(Var_56, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeSugaredFuncTerm_27 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 0))));
            Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 1))));
            succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ReturnTerm_28 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 0))));
              Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 1))));
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
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_59));
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
          MR_Word Specs_116 = ((MR_Word) ((MR_hl_field(0, MaybeFuncNameAndArgs_32, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_20 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_116));
          }
        }
        else
        {
          MR_Word FuncName_33 = ((MR_Word) ((MR_hl_field(1, MaybeFuncNameAndArgs_32, (MR_Integer) 0))));
          MR_Word ArgTerms_34 = ((MR_Word) ((MR_hl_field(1, MaybeFuncNameAndArgs_32, (MR_Integer) 1))));
          MR_Word ArgContextFunc_35;
          MR_Word ArgTypesAndModes_37;
          MR_Word ArgTMSpecs_38;
          MR_Word RetContextPieces_39;
          MR_Word MaybeRetTypeAndMode_40;
          MR_Word Var_77;
          MR_Word Var_82;
          MR_Word RetTypeAndMode_41;

          {
            ArgContextFunc_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgContextFunc_35, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[1]));
            MR_hl_field(0, ArgContextFunc_35, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_decl_base_10_p_0_2));
            MR_hl_field(0, ArgContextFunc_35, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, ArgContextFunc_35, 3) = ((MR_Box) (ContextPieces_21));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (InstConstraints_26));
          }
          parse_tree__parse_type_name__parse_type_and_modes_10_p_0(Var_77, (MR_Integer) 0, (MR_Integer) 3, VarSet_12, ArgContextFunc_35, ArgTerms_34, (MR_Integer) 1, &ArgTypesAndModes_37, (MR_Word) ((MR_Unsigned) 0U), &ArgTMSpecs_38);
          Var_82 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[184])));
          RetContextPieces_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_82);
          parse_tree__parse_type_name__parse_type_and_mode_7_p_0(Var_77, (MR_Integer) 0, (MR_Integer) 4, VarSet_12, RetContextPieces_39, ReturnTerm_28, &MaybeRetTypeAndMode_40);
          succeeded = (ArgTMSpecs_38 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeRetTypeAndMode_40)) == (MR_Integer) 1);
            if (succeeded)
              RetTypeAndMode_41 = ((MR_Word) ((MR_hl_field(1, MaybeRetTypeAndMode_40, (MR_Integer) 0))));
          }
          if (succeeded)
            parse_tree__parse_item__parse_func_decl_base_2_13_p_0(FuncName_33, ArgTypesAndModes_37, RetTypeAndMode_41, FuncTerm_31, Term_13, VarSet_12, MaybeDet_14, ExistQVars_139, Constraints_25, Context_16, SeqNum_17, PurityAttrs_18, MaybeIOM_20);
          else
          {
            MR_Word Var_92;
            MR_Word Specs_118;

            Var_92 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), MaybeRetTypeAndMode_40);
            Specs_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgTMSpecs_38, Var_92);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_20 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_118));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Spec_124;

      Var_113 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
      {
        Spec_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_func_decl_base\'/10"));
        MR_hl_field(1, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_124, 3) = ((MR_Box) (Var_113));
        MR_hl_field(1, Spec_124, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[192])));
      }
      {
        Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_114, 0) = ((MR_Box) (Spec_124));
        MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
      }
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_131));
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
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    Context_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      succeeded = (strcmp(Var_17, (MR_String) "^") == 0);
      if (succeeded)
      {
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          A_5 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHS_6 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RHS_6)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_21 = ((MR_Word) ((MR_hl_field(0, RHS_6, (MR_Integer) 0))));
                Bs_9 = ((MR_Word) ((MR_hl_field(0, RHS_6, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
                if (succeeded)
                {
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
      Var_26 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
        succeeded = (strcmp(Var_27, (MR_String) ":=") == 0);
        if (succeeded)
        {
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_11 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_12 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) LHS_11)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_31 = ((MR_Word) ((MR_hl_field(0, LHS_11, (MR_Integer) 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(0, LHS_11, (MR_Integer) 1))));
                  Context_46 = ((MR_Word) ((MR_hl_field(0, LHS_11, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_32, (MR_String) "^") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        A_44 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
                        Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
                        succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          RHS_43 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
                          Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
                          succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) RHS_43)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_36 = ((MR_Word) ((MR_hl_field(0, RHS_43, (MR_Integer) 0))));
                              Bs_48 = ((MR_Word) ((MR_hl_field(0, RHS_43, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 0);
                              if (succeeded)
                                FieldName_47 = ((MR_String) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
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
  MR_Word MaybeTypeModeListKind_27;
  MR_Word MaybePurity_28;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Purity_30;

  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (ReturnArg_16));
  }
  Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FuncTerm_17);
  parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(Args_15, Var_41, Var_42, &MaybeTypeModeListKind_27);
  if ((PurityAttrs_25 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybePurity_28 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[6]));
  else
  {
    MR_Word PurityAttr_65 = ((MR_Word) ((MR_hl_field(1, PurityAttrs_25, (MR_Integer) 0))));
    MR_Word PurityAttrs_66 = ((MR_Word) ((MR_hl_field(1, PurityAttrs_25, (MR_Integer) 1))));
    MR_Word Purity_68 = (MR_Word) (PurityAttr_65);

    if ((PurityAttrs_66 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybePurity_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePurity_28, 0) = ((MR_Box) (Purity_68));
      }
    else
    {
      MR_Word Spec_72;
      MR_Word Var_76;

      {
        Spec_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.get_purity_from_attrs\'/3"));
        MR_hl_field(1, Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_72, 3) = ((MR_Box) (Context_23));
        MR_hl_field(1, Spec_72, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[215])));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Spec_72));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybePurity_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybePurity_28, 0) = ((MR_Box) (Var_76));
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeTypeModeListKind_27)) == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) MaybePurity_28)) == (MR_Integer) 1);
    if (succeeded)
      Purity_30 = ((MR_Word) ((MR_hl_field(1, MaybePurity_28, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_31;
    MR_Word IVarSet_32;
    MR_Word AllArgs_33;
    MR_Word InconsistentVars_34;
    MR_Word MaybeInconsistentSpec_35;
    MR_Word Var_43;
    MR_Word Var_46;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_19, &TVarSet_31);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_19, &IVarSet_32);
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (ReturnArg_16));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    AllArgs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Args_15, Var_43);
    parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(AllArgs_33, &InconsistentVars_34);
    Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_18);
    parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in function declaration", Var_46, IVarSet_32, InconsistentVars_34, &MaybeInconsistentSpec_35);
    if ((MaybeInconsistentSpec_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ItemPredDecl_37;
      MR_Word Item_38;
      MR_Word Var_50;

      {
        ItemPredDecl_37 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemPredDecl_37, 0) = ((MR_Box) (FuncName_14));
        MR_hl_field(0, ItemPredDecl_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, ItemPredDecl_37, 2) = ((MR_Box) (AllArgs_33));
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
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Item_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_26 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_50));
      }
    }
    else
    {
      MR_Word Spec_39 = ((MR_Word) ((MR_hl_field(1, MaybeInconsistentSpec_35, (MR_Integer) 0))));
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_39));
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
    MR_Word Specs_40;
    MR_Word Var_53;
    MR_Word Var_54;

    Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0), MaybeTypeModeListKind_27);
    Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0), MaybePurity_28);
    Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_53, Var_54);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
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
  MR_Word conv0_LambdaHeadVar__2_77;

  conv0_LambdaHeadVar__2_77 = parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__1134__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_77));
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
  MR_Word MaybeDet_20,
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
  MR_Word Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word ExistQVars_30;
  MR_Word Constraints_31;
  MR_Word InstConstraints_32;
  MR_Word Purity_33;

  Var_60 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[148]))));
  Var_65 = parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(PredOrFunc_14);
  Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65);
  Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[65])));
  Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_66);
  ContextPieces_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_63);
  parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_15, VarSet_16, QuantConstrAttrs_25, ContextPieces_27, &MaybeExistClassInstContext_28);
  parse_tree__parse_item__get_purity_from_attrs_3_p_0(Context_22, PurityAttrs_24, &MaybePurity_29);
  succeeded = ((MR_tag((MR_Word) MaybeExistClassInstContext_28)) == (MR_Integer) 1);
  if (succeeded)
  {
    ExistQVars_30 = ((MR_Word) ((MR_hl_field(1, MaybeExistClassInstContext_28, (MR_Integer) 0))));
    Constraints_31 = ((MR_Word) ((MR_hl_field(1, MaybeExistClassInstContext_28, (MR_Integer) 1))));
    InstConstraints_32 = ((MR_Word) ((MR_hl_field(1, MaybeExistClassInstContext_28, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) MaybePurity_29)) == (MR_Integer) 1);
    if (succeeded)
      Purity_33 = ((MR_Word) ((MR_hl_field(1, MaybePurity_29, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Spec_34;
    MR_Word Var_73;

    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = (MR_Box) ((MR_Unsigned) (IsInClass_21));
    }
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_16, Var_73, PredTypeTerm_17, &Spec_34);
    if (succeeded)
    {
      MR_Word Var_74;

      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_34));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_26 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
      }
    }
    else
    {
      MR_Word MaybePredNameAndArgs_35;

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_15, VarSet_16, ContextPieces_27, PredTypeTerm_17, &MaybePredNameAndArgs_35);
      if (((MR_tag((MR_Word) MaybePredNameAndArgs_35)) == (MR_Integer) 0))
      {
        MR_Word Specs_36 = ((MR_Word) ((MR_hl_field(0, MaybePredNameAndArgs_35, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_26 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_36));
        }
      }
      else
      {
        MR_Word Functor_37 = ((MR_Word) ((MR_hl_field(1, MaybePredNameAndArgs_35, (MR_Integer) 0))));
        MR_Word ArgTerms_38 = ((MR_Word) ((MR_hl_field(1, MaybePredNameAndArgs_35, (MR_Integer) 1))));
        MR_Word ArgContextFunc_39;
        MR_Word TypesAndModes_41;
        MR_Word TMSpecs_42;
        MR_Word MaybeTypeModeListKind_43;
        MR_Word Var_90;
        MR_Word Var_96;

        {
          ArgContextFunc_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgContextFunc_39, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[1]));
          MR_hl_field(0, ArgContextFunc_39, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_decl_base_13_p_0_1));
          MR_hl_field(0, ArgContextFunc_39, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ArgContextFunc_39, 3) = ((MR_Box) (ContextPieces_27));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (InstConstraints_32));
        }
        parse_tree__parse_type_name__parse_type_and_modes_10_p_0(Var_90, (MR_Integer) 0, (MR_Integer) 2, VarSet_16, ArgContextFunc_39, ArgTerms_38, (MR_Integer) 1, &TypesAndModes_41, (MR_Word) ((MR_Unsigned) 0U), &TMSpecs_42);
        Var_96 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTypeTerm_17);
        parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(TypesAndModes_41, (MR_Word) ((MR_Unsigned) 0U), Var_96, &MaybeTypeModeListKind_43);
        succeeded = (TMSpecs_42 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeTypeModeListKind_43)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Var_97;

          succeeded = (WithInst_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (TypesAndModes_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_97 = ((MR_Word) ((MR_hl_field(1, TypesAndModes_41, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_97)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Spec_142;

            Var_112 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTypeTerm_17);
            {
              Spec_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_142, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_decl_base\'/13"));
              MR_hl_field(1, Spec_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_142, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_142, 3) = ((MR_Box) (Var_112));
              MR_hl_field(1, Spec_142, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[174])));
            }
            {
              Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_113, 0) = ((MR_Box) (Spec_142));
              MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_26 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
            }
          }
          else
          {
            MR_Word Var_115;

            succeeded = (WithInst_19 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (WithType_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (TypesAndModes_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_115 = ((MR_Word) ((MR_hl_field(1, TypesAndModes_41, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_115)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word Spec_143;

              Var_130 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTypeTerm_17);
              {
                Spec_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_143, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.parse_pred_decl_base\'/13"));
                MR_hl_field(1, Spec_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_143, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_143, 3) = ((MR_Box) (Var_130));
                MR_hl_field(1, Spec_143, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[179])));
              }
              {
                Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_131, 0) = ((MR_Box) (Spec_143));
                MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_26 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_131));
              }
            }
            else
            {
              MR_Word TypeVarSet_53;
              MR_Word InstVarSet_54;
              MR_Word InconsistentVars_55;
              MR_Word MaybeInconsistentSpec_56;
              MR_String Var_133;
              MR_Word Var_134;

              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_16, &TypeVarSet_53);
              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_16, &InstVarSet_54);
              parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(TypesAndModes_41, &InconsistentVars_55);
              Var_133 = parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(PredOrFunc_14);
              Var_134 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredTypeTerm_17);
              parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0(Var_133, Var_134, InstVarSet_54, InconsistentVars_55, &MaybeInconsistentSpec_56);
              if ((MaybeInconsistentSpec_56 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ItemPredDecl_58;
                MR_Word Item_59;
                MR_Word Var_135;

                {
                  ItemPredDecl_58 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ItemPredDecl_58, 0) = ((MR_Box) (Functor_37));
                  MR_hl_field(0, ItemPredDecl_58, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
                  MR_hl_field(0, ItemPredDecl_58, 2) = ((MR_Box) (TypesAndModes_41));
                  MR_hl_field(0, ItemPredDecl_58, 3) = ((MR_Box) (WithType_18));
                  MR_hl_field(0, ItemPredDecl_58, 4) = ((MR_Box) (WithInst_19));
                  MR_hl_field(0, ItemPredDecl_58, 5) = ((MR_Box) (MaybeDet_20));
                  MR_hl_field(0, ItemPredDecl_58, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, ItemPredDecl_58, 7) = ((MR_Box) (TypeVarSet_53));
                  MR_hl_field(0, ItemPredDecl_58, 8) = ((MR_Box) (InstVarSet_54));
                  MR_hl_field(0, ItemPredDecl_58, 9) = ((MR_Box) (ExistQVars_30));
                  MR_hl_field(0, ItemPredDecl_58, 10) = (MR_Box) ((MR_Unsigned) (Purity_33));
                  MR_hl_field(0, ItemPredDecl_58, 11) = ((MR_Box) (Constraints_31));
                  MR_hl_field(0, ItemPredDecl_58, 12) = ((MR_Box) (Context_22));
                  MR_hl_field(0, ItemPredDecl_58, 13) = ((MR_Box) (SeqNum_23));
                }
                Item_59 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemPredDecl_58)));
                {
                  Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_135, 0) = ((MR_Box) (Item_59));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_26 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_135));
                }
              }
              else
              {
                MR_Word Var_136;
                MR_Word Spec_145 = ((MR_Word) ((MR_hl_field(1, MaybeInconsistentSpec_56, (MR_Integer) 0))));

                {
                  Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_136, 0) = ((MR_Box) (Spec_145));
                  MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_26 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_136));
                }
              }
            }
          }
        }
        else
        {
          MR_Word Var_138;
          MR_Word Specs_151;

          Var_138 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0), MaybeTypeModeListKind_43);
          Specs_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TMSpecs_42, Var_138);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_151));
          }
        }
      }
    }
  }
  else
  {
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Specs_158;

    Var_139 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0), MaybePurity_29);
    Var_140 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0), (MR_Word) (&parse_tree__parse_item_scalar_common_2[0]), MaybeExistClassInstContext_28);
    Specs_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_139, Var_140);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_158));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[239]));
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[241]));
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "in function declaration";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "in predicate declaration";
      break;
  }
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_39;

  parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1756__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
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
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_item_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_item_scalar_common_2[1]), ExistQVars0_18, &ExistQVars_19);
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
      MR_Word QuantConstrAttr_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word QuantConstrAttrs_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_79_79;
      MR_Word STATE_VARIABLE_ExistQVars_80_80;
      MR_Word STATE_VARIABLE_UnivQVars_82_82;
      MR_Word STATE_VARIABLE_ExistClassConstraints_85_85;
      MR_Word STATE_VARIABLE_ExistInstConstraints_87_87;
      MR_Word STATE_VARIABLE_UnivClassConstraints_88_88;
      MR_Word STATE_VARIABLE_UnivInstConstraints_90_90;
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
        MR_Word ConstraintsTerm_60 = ((MR_Word) ((MR_hl_field(1, QuantConstrAttr_45, (MR_Integer) 1))));
        MR_Word MaybeConstraints_61;
        MR_Word QuantType_98 = ((MR_Unsigned) ((MR_hl_field(1, QuantConstrAttr_45, (MR_Integer) 0))) & (MR_Integer) 1);

        parse_tree__parse_class__parse_class_and_inst_constraints_4_p_0(HeadVar__1_1, HeadVar__2_2, ConstraintsTerm_60, &MaybeConstraints_61);
        if (((MR_tag((MR_Word) MaybeConstraints_61)) == (MR_Integer) 0))
        {
          MR_Word ConstraintSpecs_62 = ((MR_Word) ((MR_hl_field(0, MaybeConstraints_61, (MR_Integer) 0))));

          STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConstraintSpecs_62, STATE_VARIABLE_Specs_0_5);
          STATE_VARIABLE_UnivClassConstraints_88_88 = STATE_VARIABLE_UnivClassConstraints_0_11;
          STATE_VARIABLE_UnivInstConstraints_90_90 = STATE_VARIABLE_UnivInstConstraints_0_13;
          STATE_VARIABLE_ExistClassConstraints_85_85 = HeadVar__15_15;
          STATE_VARIABLE_ExistInstConstraints_87_87 = HeadVar__17_17;
        }
        else
        {
          MR_Word ClassConstraints_63 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_61, (MR_Integer) 0))));
          MR_Word InstConstraint_64 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_61, (MR_Integer) 1))));

          switch (QuantType_98) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_86;

                Var_86 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ClassConstraints_63);
                STATE_VARIABLE_ExistClassConstraints_85_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), HeadVar__15_15, Var_86);
                STATE_VARIABLE_ExistInstConstraints_87_87 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVar__17_17, InstConstraint_64);
                STATE_VARIABLE_UnivClassConstraints_88_88 = STATE_VARIABLE_UnivClassConstraints_0_11;
                STATE_VARIABLE_UnivInstConstraints_90_90 = STATE_VARIABLE_UnivInstConstraints_0_13;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_89;

                Var_89 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ClassConstraints_63);
                STATE_VARIABLE_UnivClassConstraints_88_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), STATE_VARIABLE_UnivClassConstraints_0_11, Var_89);
                STATE_VARIABLE_UnivInstConstraints_90_90 = mercury__map__old_merge_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_UnivInstConstraints_0_13, InstConstraint_64);
                STATE_VARIABLE_ExistClassConstraints_85_85 = HeadVar__15_15;
                STATE_VARIABLE_ExistInstConstraints_87_87 = HeadVar__17_17;
              }
              break;
          }
          STATE_VARIABLE_Specs_79_79 = STATE_VARIABLE_Specs_0_5;
        }
        STATE_VARIABLE_UnivQVars_82_82 = STATE_VARIABLE_UnivQVars_0_7;
        STATE_VARIABLE_ExistQVars_80_80 = STATE_VARIABLE_ExistQVars_0_9;
      }
      else
      {
        MR_Word QuantType_55 = ((MR_Unsigned) ((MR_hl_field(0, QuantConstrAttr_45, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word VarsTerm_56 = ((MR_Word) ((MR_hl_field(0, QuantConstrAttr_45, (MR_Integer) 1))));
        MR_Word MaybeVars_57;
        MR_Word VarsContextPieces_109;
        MR_Word ContextPieces_110;
        MR_Word Var_111;

        switch (QuantType_55) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            VarsContextPieces_109 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[70]));
            break;
          case (MR_Integer) 1:
            VarsContextPieces_109 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[74]));
            break;
        }
        Var_111 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsContextPieces_109);
        ContextPieces_110 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadVar__4_4, Var_111);
        parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_56, HeadVar__2_2, ContextPieces_110, &MaybeVars_57);
        if (((MR_tag((MR_Word) MaybeVars_57)) == (MR_Integer) 0))
        {
          MR_Word VarsSpecs_58 = ((MR_Word) ((MR_hl_field(0, MaybeVars_57, (MR_Integer) 0))));

          STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), VarsSpecs_58, STATE_VARIABLE_Specs_0_5);
          STATE_VARIABLE_UnivQVars_82_82 = STATE_VARIABLE_UnivQVars_0_7;
          STATE_VARIABLE_ExistQVars_80_80 = STATE_VARIABLE_ExistQVars_0_9;
        }
        else
        {
          MR_Word Vars_59 = ((MR_Word) ((MR_hl_field(1, MaybeVars_57, (MR_Integer) 0))));

          switch (QuantType_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_81;

                Var_81 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), Vars_59);
                STATE_VARIABLE_ExistQVars_80_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), STATE_VARIABLE_ExistQVars_0_9, Var_81);
                STATE_VARIABLE_UnivQVars_82_82 = STATE_VARIABLE_UnivQVars_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_83;

                Var_83 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), Vars_59);
                STATE_VARIABLE_UnivQVars_82_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_item_scalar_common_1[9]), STATE_VARIABLE_UnivQVars_0_7, Var_83);
                STATE_VARIABLE_ExistQVars_80_80 = STATE_VARIABLE_ExistQVars_0_9;
              }
              break;
          }
          STATE_VARIABLE_Specs_79_79 = STATE_VARIABLE_Specs_0_5;
        }
        STATE_VARIABLE_UnivClassConstraints_88_88 = STATE_VARIABLE_UnivClassConstraints_0_11;
        STATE_VARIABLE_UnivInstConstraints_90_90 = STATE_VARIABLE_UnivInstConstraints_0_13;
        STATE_VARIABLE_ExistClassConstraints_85_85 = HeadVar__15_15;
        STATE_VARIABLE_ExistInstConstraints_87_87 = HeadVar__17_17;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = QuantConstrAttrs_46;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_79_79;
      next_value_of_STATE_VARIABLE_UnivQVars_0_7 = STATE_VARIABLE_UnivQVars_82_82;
      next_value_of_STATE_VARIABLE_ExistQVars_0_9 = STATE_VARIABLE_ExistQVars_80_80;
      next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11 = STATE_VARIABLE_UnivClassConstraints_88_88;
      next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13 = STATE_VARIABLE_UnivInstConstraints_90_90;
      next_value_of_HeadVar__15_15 = STATE_VARIABLE_ExistClassConstraints_85_85;
      next_value_of_HeadVar__17_17 = STATE_VARIABLE_ExistInstConstraints_87_87;
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

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[6]));
  else
  {
    MR_Word PurityAttr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PurityAttrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
      MR_Word Spec_14;
      MR_Word Var_26;

      {
        Spec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.get_purity_from_attrs\'/3"));
        MR_hl_field(1, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_14, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(1, Spec_14, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[215])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Component_6;

  conv0_Component_6 = parse_tree__parse_item__wrap_nth_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Component_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(
  MR_Word TypesAndModes_5,
  MR_Word MaybeRetTypeAndMode_6,
  MR_Word Context_7,
  MR_Word * MaybeKind_8)
{
  MR_bool succeeded;
  MR_Word WithModeArgNums0_9;
  MR_Word WithoutModeArgNums0_10;
  MR_Word WithModeArgNums_11;
  MR_Word WithoutModeArgNums_12;

  parse_tree__parse_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, TypesAndModes_5, &WithModeArgNums0_9, &WithoutModeArgNums0_10);
  if ((MaybeRetTypeAndMode_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    WithModeArgNums_11 = WithModeArgNums0_9;
    WithoutModeArgNums_12 = WithoutModeArgNums0_10;
  }
  else
  {
    MR_Word RetTypeAndMode_13 = ((MR_Word) ((MR_hl_field(1, MaybeRetTypeAndMode_6, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) RetTypeAndMode_13)) == (MR_Integer) 1))
    {
      WithModeArgNums_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), WithModeArgNums0_9, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[193])));
      WithoutModeArgNums_12 = WithoutModeArgNums0_10;
    }
    else
    {
      WithModeArgNums_11 = WithModeArgNums0_9;
      WithoutModeArgNums_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), WithoutModeArgNums0_10, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[193])));
    }
  }
  if ((WithModeArgNums_11 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((WithoutModeArgNums_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeKind_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[1]));
    else
      *MaybeKind_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[2]));
  else
  if ((WithoutModeArgNums_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeKind_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_3[3]));
  else
  {
    MR_Integer FirstWithout_23 = ((MR_Integer) ((MR_hl_field(1, WithoutModeArgNums_12, (MR_Integer) 0))));
    MR_Word RestWithout_24 = ((MR_Word) ((MR_hl_field(1, WithoutModeArgNums_12, (MR_Integer) 1))));
    MR_Word IdPieces_25;
    MR_Word Pieces_30;
    MR_Word Spec_31;
    MR_Word Var_67;
    MR_Word Var_72;

    if ((RestWithout_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_44;
      MR_Word Var_45;

      succeeded = (FirstWithout_23 < (MR_Integer) 0);
      if (succeeded)
        Var_45 = (MR_Word) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[198]));
      else
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (FirstWithout_23));
        }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
      }
      {
        IdPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IdPieces_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[194])));
        MR_hl_field(1, IdPieces_25, 1) = ((MR_Box) (Var_44));
      }
    }
    else
    {
      MR_Word WithoutArgNumPieces_28;
      MR_Word WithoutArgNumsPieces_29;
      MR_Word Var_56;

      WithoutArgNumPieces_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__parse_item_scalar_common_5[0]), WithoutModeArgNums_12);
      WithoutArgNumsPieces_29 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", WithoutArgNumPieces_28);
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[195])));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (WithoutArgNumsPieces_29));
      }
      IdPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (IdPieces_25));
    }
    {
      Pieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[196])));
      MR_hl_field(1, Pieces_30, 1) = ((MR_Box) (Var_67));
    }
    {
      Spec_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_item.check_type_and_mode_list_is_consistent\'/4"));
      MR_hl_field(1, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_31, 3) = ((MR_Box) (Context_7));
      MR_hl_field(1, Spec_31, 4) = ((MR_Box) (Pieces_30));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeKind_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__classify_type_and_mode_list_4_p_0(
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
    MR_Word Head_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word WithModeArgNums0_11;
    MR_Word WithoutModeArgNums0_12;
    MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) ArgNum_1 + (MR_Unsigned) 1);

    parse_tree__parse_item__classify_type_and_mode_list_4_p_0(Var_16, Tail_8, &WithModeArgNums0_11, &WithoutModeArgNums0_12);
    if (((MR_tag((MR_Word) Head_7)) == (MR_Integer) 1))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_1));
        MR_hl_field(1, base, 1) = ((MR_Box) (WithModeArgNums0_11));
      }
      *HeadVar__4_4 = WithoutModeArgNums0_12;
    }
    else
    {
      *HeadVar__3_3 = WithModeArgNums0_11;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_1));
        MR_hl_field(1, base, 1) = ((MR_Box) (WithoutModeArgNums0_12));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(
  MR_String Functor_4,
  MR_Word Context_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_10;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (Functor_4));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[52])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_10));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_functor_is_not_valid\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(1, Spec_6, 4) = ((MR_Box) (Pieces_7));
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
  MR_Word Var_13;
  MR_Word Var_14;

  TermStr_7 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, (MR_Integer) 0, Term_5);
  Context_8 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (TermStr_7));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[50])));
  }
  {
    Pieces_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_9, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[48])));
    MR_hl_field(1, Pieces_9, 1) = ((MR_Box) (Var_13));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_item.decl_is_not_an_atom\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Context_8));
    MR_hl_field(1, Spec_6, 4) = ((MR_Box) (Pieces_9));
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
  MR_Word TypeCtorInfo_87_87;
  MR_Word ArgTerms_9;
  MR_Word TermContext_10;
  MR_Word VarPieces_16;
  MR_Word WhatPieces_18;
  MR_Word Pieces_19;
  MR_Word Var_20;
  MR_String Var_21;
  MR_Word Var_63;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_String Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word ArgTerm1_11;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    ArgTerms_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    TermContext_10 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      succeeded = (strcmp(Var_21, (MR_String) "") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgTerm1_11 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) ArgTerm1_11)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_String VarStr_15;
          MR_Word Var_24;
          MR_Word Var_25;

          VarStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, ArgTerm1_11);
          {
            Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_25, 1) = ((MR_Box) (VarStr_15));
          }
          {
            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
            MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            VarPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, VarPieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_item_scalar_common_1[17])));
            MR_hl_field(1, VarPieces_16, 1) = ((MR_Box) (Var_24));
          }
        }
        else
          VarPieces_16 = (MR_Word) ((MR_Unsigned) 0U);
        switch (MR_tag((MR_Word) Kind_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Kind_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[19]));
                break;
              case (MR_Integer) 1:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[25]));
                break;
              case (MR_Integer) 2:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[23]));
                break;
              case (MR_Integer) 3:
                WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[21]));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsInClass_17 = ((MR_Unsigned) ((MR_hl_field(1, Kind_6, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (IsInClass_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[39]));
                  break;
                case (MR_Integer) 1:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[41]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word IsInClass_83 = ((MR_Unsigned) ((MR_hl_field(2, Kind_6, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (IsInClass_83) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[35]));
                  break;
                case (MR_Integer) 1:
                  WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[37]));
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Kind_6, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word IsInClass_84 = ((MR_Unsigned) ((MR_hl_field(3, Kind_6, (MR_Integer) 1))) & (MR_Integer) 1);

                  switch (IsInClass_84) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[31]));
                      break;
                    case (MR_Integer) 1:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[33]));
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IsInClass_85 = ((MR_Unsigned) ((MR_hl_field(3, Kind_6, (MR_Integer) 1))) & (MR_Integer) 1);

                  switch (IsInClass_85) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[27]));
                      break;
                    case (MR_Integer) 1:
                      WhatPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[29]));
                      break;
                  }
                }
                break;
            }
            break;
        }
        TypeCtorInfo_87_87 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
        Var_63 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[43]));
        Var_69 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[45]));
        Var_74 = (MR_Word) (MR_mkword(1, &parse_tree__parse_item_scalar_common_1[47]));
        Var_73 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, VarPieces_16, Var_74);
        Var_68 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, Var_69, Var_73);
        Var_67 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, WhatPieces_18, Var_68);
        Pieces_19 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, Var_63, Var_67);
        Var_80 = (MR_String) "predicate \140parse_tree.parse_item.is_the_name_a_variable\'/4";
        Var_81 = (MR_Word) ((MR_Unsigned) 0U);
        Var_82 = (MR_Word) ((MR_Unsigned) 20U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_80));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_81));
          MR_hl_field(1, base, 2) = ((MR_Box) (Var_82));
          MR_hl_field(1, base, 3) = ((MR_Box) (TermContext_10));
          MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_19));
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
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
parse_tree__parse_item____Unify____quantifier_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____quantifier_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____quantifier_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_item____Unify____type_mode_list_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_item____Compare____type_mode_list_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_add_the_prefix_0);
	MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_allow_mode_defn_0);
	MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
	MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
	MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0);
	MR_register_type_ctor_info(&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0);
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
