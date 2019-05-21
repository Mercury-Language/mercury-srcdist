/*
** Automatically generated from `parse_item.m'
** by the Mercury compiler,
** version rotd-2018-03-31
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_class.mih"
#include "parse_tree.parse_dcg_goal.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_inst_mode_defn.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_mutable.mih"
#include "parse_tree.parse_pragma.mih"
#include "parse_tree.parse_sym_name.mih"
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
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_decl_in_class_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_decl_in_class_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_decl_in_class_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_2;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_incl_imp_use_0[3];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_incl_imp_use_0[3];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_incl_imp_use_0[3];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_maybe_add_the_prefix_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_add_the_prefix_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_add_the_prefix_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_maybe_allow_mode_defn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_allow_mode_defn_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_allow_mode_defn_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_purity_attr_0[1];

static const MR_NotagFunctorDesc parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0[2];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_quant_constr_attr_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_quant_constr_attr_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quant_constr_attr_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_quantifier_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_quantifier_type_0[2];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quantifier_type_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_type_mode_list_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_type_mode_list_kind_0[3];

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_type_mode_list_kind_0[3];

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1563__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1057__1_2_f_0(
  MR_Word ContextPieces_19,
  MR_Integer LambdaHeadVar__1_58);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__958__1_2_f_0(
  MR_Word ContextPieces_25,
  MR_Integer LambdaHeadVar__1_67);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__818__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58);

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Integer SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8);

static void MR_CALL 
parse_tree__parse_item__make_item_avail_import_4_p_0(
  MR_Word Context_5,
  MR_Integer SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8);

static void MR_CALL 
parse_tree__parse_item__make_item_include_4_p_0(
  MR_Word Context_5,
  MR_Integer SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Incl_8);

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word IsInClass_13,
  MR_Integer SeqNum_15,
  MR_Word STATE_VARIABLE_PurityAttrs_0_24,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_25,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(
  MR_Word VarSet_9,
  MR_String Functor_10,
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word PromiseType_14,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_promise_item_5_p_0(
  MR_Word VarSet_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Integer SeqNum_9,
  MR_Word * MaybeIOM_10);

static void MR_CALL 
parse_tree__parse_item__parse_version_numbers_marker_6_p_0(
  MR_Word ModuleName_7,
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_item__dummy_term_with_context_2_p_0(
  MR_Word Context_3,
  MR_Word * Term_4);

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
  MR_Integer SeqNum_14,
  MR_Word IIU_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_section_marker_6_p_0(
  MR_String Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Integer SeqNum_10,
  MR_Word Section_11,
  MR_Word * MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_item__parse_end_module_marker_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Integer SeqNum_7,
  MR_Word * MaybeIOM_8);

static void MR_CALL 
parse_tree__parse_item__parse_module_marker_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Integer SeqNum_7,
  MR_Word * MaybeIOM_8);

static MR_bool MR_CALL 
parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_String Functor_13,
  MR_Word ArgTerms_14,
  MR_Word IsInClass_15,
  MR_Word Context_16,
  MR_Integer SeqNum_17,
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
  MR_Integer SeqNum_18,
  MR_Word Purity_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_27,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_28,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_constraint_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Integer SeqNum_18,
  MR_Word QuantType_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_quant_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Integer SeqNum_18,
  MR_Word QuantType_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Integer SeqNum_18,
  MR_Word PredOrFunc_19,
  MR_Word PurityAttrs_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_with_type_suffix_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_6,
  MR_Word * BeforeWithTypeTerm_7,
  MR_Word * MaybeWithType_8);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word MaybeDet_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word PurityAttrs_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18);

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
  MR_Integer SeqNum_24,
  MR_Word PurityAttrs_25,
  MR_Word * MaybeIOM_26);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0(
  MR_Word PredOrFunc_13,
  MR_Word ModuleName_14,
  MR_Word VarSet_15,
  MR_Word PredTypeTerm_16,
  MR_Word WithType_17,
  MR_Word WithInst_18,
  MR_Word MaybeDet_19,
  MR_Word Context_20,
  MR_Integer SeqNum_21,
  MR_Word PurityAttrs_22,
  MR_Word QuantConstrAttrs_23,
  MR_Word * MaybeIOM_24);

static MR_Word MR_CALL 
parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(
  MR_Word HeadVar__1_1);

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

static MR_Word MR_CALL 
parse_tree__parse_item__wrap_nth_2_f_0(
  MR_Word MaybeAddPredix_4,
  MR_Integer ArgNum_5);

static void MR_CALL 
parse_tree__parse_item__classify_type_and_mode_list_4_p_0(
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
  MR_Integer SeqNum_15,
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
  MR_Integer SeqNum_14,
  MR_Word QuantConstrAttrs_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_with_inst_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeWithInstTerm_9,
  MR_Word * MaybeWithInst_10);

static void MR_CALL 
parse_tree__parse_item__parse_determinism_suffix_5_p_0(
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word Term_8,
  MR_Word * BeforeDetismTerm_9,
  MR_Word * MaybeMaybeDetism_10);

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word WithInst_15,
  MR_Word MaybeDet_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18);

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
  MR_Integer SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22);

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
  MR_Integer SeqNum_20,
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
  MR_Word Term_4,
  MR_String Functor_5);

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


static /* final */ const MR_Box parse_tree__parse_item_scalar_common_1[233][2];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_4[4][6];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_5[30][1];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_6[1][4];

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_8[3][7];


/* sealed */ struct parse_tree__parse_item__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_item__vector_common_type_7_0_s parse_tree__parse_item_vector_common_7[64];



static /* final */ const MR_Box parse_tree__parse_item_scalar_common_1[233][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_item_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are allowed in class interfaces."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: only pred, func and mode declarations"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid declaration."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid declaration type."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not allowed on mode declarations."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: purity annotations"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a list of variables."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only to denote the quantification"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may appear in declarations"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a constraint or a conjunction of constraints."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may appear in declarations only to introduce"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in front of a predicate or function declaration."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may appear only as an annotation"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a module name."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[42])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a list of one or more module names."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a predicate or function."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the declaration of one mode"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be either the definition of a mode,"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "version_numbers"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[72])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "from item ids to timestamps."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a module name, and a tuple containing maps"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a version number,"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have exactly three arguments,"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotation of a"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the return value"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a function whose name is a variable."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a predicate whose name is a variable."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[137])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In predicate"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[137])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not allowed."))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate purity annotations"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[151])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[157])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a goal."))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[161])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotation:"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[10])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[136])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[136])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the mode declaration of the predicate"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the mode declaration of the function"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the return value"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the mode declaration of the function"))
  },
  /* row 186 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 187 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class method mode"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotation of a"))
  },
  /* row 197 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 198 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the return value"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "return value"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 205 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 206 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 207 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 208 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "method declaration:"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 213 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should specify the types and maybe the modes"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the arguments of a"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the keyword"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the symbol"))
  },
  /* row 221 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 222 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 223 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 225 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 226 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 227 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 230 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 231 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[29])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the"))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_item_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_item__parse_item_or_marker_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_maybe_add_the_prefix_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_5[30][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[135])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[142])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[96])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[68])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[149])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[110])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[115])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[131])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[104])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[22])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[46])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[50])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[74])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 29))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[76])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[165])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[14])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[175])))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_6[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_item_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__parse_item_scalar_common_8[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};


static /* final */ const struct parse_tree__parse_item__vector_common_type_7_0_s parse_tree__parse_item_vector_common_7[64] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     (MR_String) "semipure" },
  /* row 3 */   {     NULL },
  /* row 4 */   {     (MR_String) "impure" },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     (MR_String) "func" },
  /* row 9 */   {     (MR_String) "=>" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     (MR_String) "some" },
  /* row 17 */   {     (MR_String) "mode" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     (MR_String) "all" },
  /* row 27 */   {     (MR_String) "<=" },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "pred" },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     (MR_String) "semipure" },
  /* row 35 */   {     NULL },
  /* row 36 */   {     (MR_String) "impure" },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     (MR_String) "func" },
  /* row 41 */   {     (MR_String) "=>" },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "some" },
  /* row 49 */   {     (MR_String) "mode" },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     (MR_String) "all" },
  /* row 59 */   {     (MR_String) "<=" },
  /* row 60 */   {     NULL },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     (MR_String) "pred" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_0 = {
  (MR_String) "decl_is_in_class",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_decl_in_class_0_1 = {
  (MR_String) "decl_is_not_in_class",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_decl_in_class_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____decl_in_class_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____decl_in_class_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "decl_in_class",
  {     parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_decl_in_class_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_decl_in_class_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_decl_in_class_0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_0 = {
  (MR_String) "iiu_include_module",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_1 = {
  (MR_String) "iiu_import_module",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_incl_imp_use_0_2 = {
  (MR_String) "iiu_use_module",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_incl_imp_use_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____incl_imp_use_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____incl_imp_use_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "incl_imp_use",
  {     parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_incl_imp_use_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_incl_imp_use_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_incl_imp_use_0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_0 = {
  (MR_String) "dont_add_the_prefix",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_add_the_prefix_0_1 = {
  (MR_String) "add_the_prefix",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_maybe_add_the_prefix_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "maybe_add_the_prefix",
  {     parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_add_the_prefix_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_maybe_add_the_prefix_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_add_the_prefix_0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_0 = {
  (MR_String) "allow_mode_decl_and_defn",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_maybe_allow_mode_defn_0_1 = {
  (MR_String) "allow_mode_decl_only",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_maybe_allow_mode_defn_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "maybe_allow_mode_defn",
  {     parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_maybe_allow_mode_defn_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_maybe_allow_mode_defn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_maybe_allow_mode_defn_0
};

static const MR_Integer parse_tree__parse_item__parse_tree__parse_item__functor_number_map_purity_attr_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0 = {
  (MR_String) "purity_attr",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__parse_item____Unify____purity_attr_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____purity_attr_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "purity_attr",
  {     &parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0 },
  {     &parse_tree__parse_item__parse_tree__parse_item__notag_functor_desc_purity_attr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_purity_attr_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0 = {
  (MR_String) "qca_quant_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1 = {
  (MR_String) "qca_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0[1] = {
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_1[1] = {
  &parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1
};

static const MR_DuPtagLayout parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_quant_constr_attr_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "quant_constr_attr",
  {     parse_tree__parse_item__parse_tree__parse_item__du_name_ordered_quant_constr_attr_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__du_ptag_ordered_quant_constr_attr_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quant_constr_attr_0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_quantifier_type_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____quantifier_type_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____quantifier_type_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "quantifier_type",
  {     parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_quantifier_type_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_quantifier_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_quantifier_type_0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_0 = {
  (MR_String) "tml_no_arguments",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_1 = {
  (MR_String) "tml_all_types_have_modes",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__parse_item__parse_tree__parse_item__enum_functor_desc_type_mode_list_kind_0_2 = {
  (MR_String) "tml_no_types_have_modes",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_type_mode_list_kind_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001)),
  ((MR_Box) (parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001)),
  (MR_String) "parse_tree.parse_item",
  (MR_String) "type_mode_list_kind",
  {     parse_tree__parse_item__parse_tree__parse_item__enum_name_ordered_type_mode_list_kind_0 },
  {     parse_tree__parse_item__parse_tree__parse_item__enum_value_ordered_type_mode_list_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_item__parse_tree__parse_item__functor_number_map_type_mode_list_kind_0
};

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1563__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, HeadVar__1_38, HeadVar__2_39);
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1057__1_2_f_0(
  MR_Word ContextPieces_19,
  MR_Integer LambdaHeadVar__1_58)
{
  {
    MR_Word LambdaHeadVar__2_59;
    MR_Word TypeCtorInfo_127_127 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;

    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (LambdaHeadVar__1_58));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[106])));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[232])));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
    }
    Var_60 = mercury__cord__from_list_1_f_0(TypeCtorInfo_127_127, Var_61);
    LambdaHeadVar__2_59 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_127_127, ContextPieces_19, Var_60);
    return LambdaHeadVar__2_59;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__958__1_2_f_0(
  MR_Word ContextPieces_25,
  MR_Integer LambdaHeadVar__1_67)
{
  {
    MR_Word LambdaHeadVar__2_68;
    MR_Word TypeCtorInfo_156_156 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;

    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (LambdaHeadVar__1_67));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[106])));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[232])));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
    }
    Var_69 = mercury__cord__from_list_1_f_0(TypeCtorInfo_156_156, Var_70);
    LambdaHeadVar__2_68 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_156_156, ContextPieces_25, Var_69);
    return LambdaHeadVar__2_68;
  }
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__818__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58)
{
  {
    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVar__1_57, HeadVar__2_58);
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_23 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_21;
        MR_Integer Var_32 = (MR_Integer) Var_29;
        MR_Integer Var_33 = (MR_Integer) ArgY1_18;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_21, Var_32, Var_33);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_20)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;
        MR_Integer Var_34 = (MR_Integer) Var_31;
        MR_Integer Var_35 = (MR_Integer) ArgY1_5;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_34, Var_35);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_7)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (ArgX1_7 == ArgY1_8);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &parse_tree__parse_item_scalar_common_1[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        }
      }
    }
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) &parse_tree__parse_item_scalar_common_1[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;
      MR_Integer Var_9 = (MR_Integer) ArgX1_4;
      MR_Integer Var_10 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_9, Var_10);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(
  MR_Word DefaultModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeModule_8)
{
  if (((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0))))
    parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(DefaultModuleName_5, VarSet_6, Term_7, MaybeModule_8);
  else
  {
    MR_Word Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Term_7, (MR_Integer) 1)));
    MR_Word Spec_12;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Term_7, (MR_Integer) 0)));

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[231])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_29));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModule_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_name_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeModuleName_6)
{
  {
    parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarSet_4, Term_5, MaybeModuleName_6);
  }
}

static void MR_CALL 
parse_tree__parse_item__make_item_avail_use_4_p_0(
  MR_Word Context_5,
  MR_Integer SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8)
{
  {
    MR_Word AvailUseInfo_9;

    {
      AvailUseInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AvailUseInfo_9, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), AvailUseInfo_9, 1) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), AvailUseInfo_9, 2) = ((MR_Box) (SeqNum_6));
    }
    *Avail_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) AvailUseInfo_9);
  }
}

static void MR_CALL 
parse_tree__parse_item__make_item_avail_import_4_p_0(
  MR_Word Context_5,
  MR_Integer SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Avail_8)
{
  {
    MR_Word AvailImportInfo_9;

    {
      AvailImportInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AvailImportInfo_9, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), AvailImportInfo_9, 1) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), AvailImportInfo_9, 2) = ((MR_Box) (SeqNum_6));
    }
    *Avail_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) AvailImportInfo_9);
  }
}

static void MR_CALL 
parse_tree__parse_item__make_item_include_4_p_0(
  MR_Word Context_5,
  MR_Integer SeqNum_6,
  MR_Word ModuleName_7,
  MR_Word * Incl_8)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
    *Incl_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_5));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeqNum_6));
  }
}

void MR_CALL 
parse_tree__parse_item__parse_class_method_decl_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeClassMethod_8)
{
  {
    MR_bool succeeded;
    MR_Word TermContext_9;
    MR_Word MaybeIOM_10;
    MR_Word Var_36;
    MR_Word Var_37;

    TermContext_9 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
    Var_36 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
    Var_37 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
    parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(ModuleName_5, VarSet_6, Term_7, (MR_Integer) 0, (MR_Integer) -1, Var_36, Var_37, &MaybeIOM_10);
    if (((MR_tag((MR_Word) MaybeIOM_10)) == (MR_mktag((MR_Integer) 0))))
      *MaybeClassMethod_8 = (MR_Word) MaybeIOM_10;
    else
    {
      MR_Word IOM_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeIOM_10, (MR_Integer) 0)));
      MR_Word ItemPredDecl_13;
      MR_Word Var_38;

      succeeded = ((MR_tag((MR_Word) IOM_12)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), IOM_12, (MR_Integer) 0)));
        succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
          ItemPredDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 1)));
      }
      if (succeeded)
      {
        MR_Word Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 0)));
        MR_Word PorF_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 1)));
        MR_Word ArgDecls_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 2)));
        MR_Word WithType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 3)));
        MR_Word WithInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 4)));
        MR_Word MaybeDetism_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 5)));
        MR_Word TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 7)));
        MR_Word InstVarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 8)));
        MR_Word ExistQVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 9)));
        MR_Word Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 10)));
        MR_Word Constraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 11)));
        MR_Word Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 12)));
        MR_Word ClassMethod_28;
        MR_Word _Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 6)));
        MR_Integer _SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 13)));

        {
          ClassMethod_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassMethod_28, 0) = ((MR_Box) (Name_14));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 1) = ((MR_Box) (PorF_15));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 2) = ((MR_Box) (ArgDecls_16));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 3) = ((MR_Box) (WithType_17));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 4) = ((MR_Box) (WithInst_18));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 5) = ((MR_Box) (MaybeDetism_19));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 6) = ((MR_Box) (TypeVarSet_21));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 7) = ((MR_Box) (InstVarSet_22));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 8) = ((MR_Box) (ExistQVars_23));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 9) = ((MR_Box) (Purity_24));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 10) = ((MR_Box) (Constraints_25));
          MR_hl_field(MR_mktag(0), ClassMethod_28, 11) = ((MR_Box) (Context_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeClassMethod_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClassMethod_28));
        }
      }
      else
      {
        MR_Word ItemModeDecl_29;
        MR_Word Var_39;

        succeeded = ((MR_tag((MR_Word) IOM_12)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), IOM_12, (MR_Integer) 0)));
          succeeded = ((((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_39, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
            ItemModeDecl_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_39, (MR_Integer) 1)));
        }
        if (succeeded)
        {
          MR_Word MaybePorF_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 1)));
          MR_Word ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 2)));
          MR_Word Name_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 0)));
          MR_Word WithInst_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 3)));
          MR_Word MaybeDetism_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 4)));
          MR_Word InstVarSet_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 5)));
          MR_Word Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 6)));
          MR_Word ClassMethod_65;
          MR_Integer _SeqNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDecl_29, (MR_Integer) 7)));

          {
            ClassMethod_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 0) = ((MR_Box) (Name_59));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 1) = ((MR_Box) (MaybePorF_30));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 2) = ((MR_Box) (ArgModes_31));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 3) = ((MR_Box) (WithInst_60));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 4) = ((MR_Box) (MaybeDetism_61));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 5) = ((MR_Box) (InstVarSet_62));
            MR_hl_field(MR_mktag(1), ClassMethod_65, 6) = ((MR_Box) (Context_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeClassMethod_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClassMethod_65));
          }
        }
        else
        {
          MR_Word Spec_33;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_56;

          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[230])));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_50));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_33));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeClassMethod_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
          }
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
  MR_Integer SeqNum_15,
  MR_Word STATE_VARIABLE_PurityAttrs_0_24,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_25,
  MR_Word * MaybeIOM_18)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_mktag((MR_Integer) 0)));
    MR_String Functor_19;
    MR_Word ArgTerms_20;
    MR_Word FunctorContext_21;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 0)));
      ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 1)));
      FunctorContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        Functor_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word MaybeIOMPrime_22;
      MR_Integer slot_0 = ((MR_hash_string6(Functor_19)) & (MR_Integer) 31);
      MR_String str_1 = ((&parse_tree__parse_item_vector_common_7[32 + slot_0]))->parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;

      // hashed string jump switch
      // compute the hash value of the input string
      // no collisions; no hash chain loop
      // lookup the string for this hash slot
      // did we find a match?
      if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_19) == 0))))
      {
        // we found a match; dispatch to the corresponding code
        switch (slot_0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              // case "semipure"
              parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 1, STATE_VARIABLE_PurityAttrs_0_24, STATE_VARIABLE_QuantConstrAttrs_0_25, &MaybeIOMPrime_22);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              // case "impure"
              parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 2, STATE_VARIABLE_PurityAttrs_0_24, STATE_VARIABLE_QuantConstrAttrs_0_25, &MaybeIOMPrime_22);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              // case "func"
              {
                MR_Word Var_50;
                MR_Word Var_51;

                Var_50 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, STATE_VARIABLE_PurityAttrs_0_24);
                Var_51 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, STATE_VARIABLE_QuantConstrAttrs_0_25);
                parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 1, Var_50, Var_51, &MaybeIOMPrime_22);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              // case "=>"
              parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 0, STATE_VARIABLE_PurityAttrs_0_24, STATE_VARIABLE_QuantConstrAttrs_0_25, &MaybeIOMPrime_22);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 16:
            {
              // case "some"
              parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 0, STATE_VARIABLE_PurityAttrs_0_24, STATE_VARIABLE_QuantConstrAttrs_0_25, &MaybeIOMPrime_22);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              // case "mode"
              {
                MR_Word MaybeIOM0_42;
                MR_Word Var_53;

                Var_53 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, STATE_VARIABLE_QuantConstrAttrs_0_25);
                parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(ModuleName_10, VarSet_11, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 1, Var_53, &MaybeIOM0_42);
                succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, STATE_VARIABLE_PurityAttrs_0_24);
                if (succeeded)
                  MaybeIOMPrime_22 = MaybeIOM0_42;
                else
                {
                  MR_Word Spec_44;
                  MR_Word Var_64;
                  MR_Word Var_65;

                  {
                    Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (FunctorContext_21));
                    MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[221])));
                  }
                  {
                    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
                    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), Spec_44, 2) = ((MR_Box) (Var_64));
                  }
                  if (((MR_tag((MR_Word) MaybeIOM0_42)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word Specs0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeIOM0_42, (MR_Integer) 0)));
                    MR_Word Var_70;

                    {
                      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_44));
                      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Specs0_46));
                    }
                    {
                      MaybeIOMPrime_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeIOMPrime_22, 0) = ((MR_Box) (Var_70));
                    }
                  }
                  else
                  {
                    MR_Word Var_71;

                    {
                      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_44));
                      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MaybeIOMPrime_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MaybeIOMPrime_22, 0) = ((MR_Box) (Var_71));
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
              parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 1, STATE_VARIABLE_PurityAttrs_0_24, STATE_VARIABLE_QuantConstrAttrs_0_25, &MaybeIOMPrime_22);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 27:
            {
              // case "<="
              parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 1, STATE_VARIABLE_PurityAttrs_0_24, STATE_VARIABLE_QuantConstrAttrs_0_25, &MaybeIOMPrime_22);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 31:
            {
              // case "pred"
              {
                MR_Word Var_80;
                MR_Word Var_81;

                Var_80 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, STATE_VARIABLE_PurityAttrs_0_24);
                Var_81 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, STATE_VARIABLE_QuantConstrAttrs_0_25);
                parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_10, VarSet_11, Functor_19, ArgTerms_20, IsInClass_13, FunctorContext_21, SeqNum_15, (MR_Integer) 0, Var_80, Var_81, &MaybeIOMPrime_22);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        // jump out of search loop
        goto label_0;
      }
      succeeded = MR_FALSE;
    label_0:;
      if (succeeded)
        *MaybeIOM_18 = MaybeIOMPrime_22;
      else
      {
        MR_Word Spec_23;
        MR_Word Var_27;

        Spec_23 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(Term_12, Functor_19);
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Spec_23));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        }
      }
    }
    else
    {
      MR_Word Var_29;
      MR_Word Spec_31;

      Spec_31 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_11, Term_12);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_58;

    parse_tree__parse_item__IntroducedFrom__pred__parse_clause__818__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_58);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_58));
  }
}

void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Integer SeqNum_9,
  MR_Word * MaybeIOM_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_mktag((MR_Integer) 0)));
    MR_Word DeclTerm_11;
    MR_Word Var_13;
    MR_String Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word _DeclContext_12;

    if (succeeded)
    {
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1)));
      _DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
        succeeded = (strcmp(Var_14, (MR_String) ":-") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)));
            Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1)));
            succeeded = (Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String Functor_22;
      MR_Word ArgTerms_23;
      MR_Word Context_24;
      MR_Word Var_27;

      succeeded = ((MR_tag((MR_Word) DeclTerm_11)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclTerm_11, (MR_Integer) 0)));
        ArgTerms_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclTerm_11, (MR_Integer) 1)));
        Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclTerm_11, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          Functor_22 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word MaybeIOMPrime_25;

        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Functor_22, 0)) {
            case (MR_Integer) 60:
              if (MR_offset_streq(1, Functor_22, (MR_String) "<="))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(1, Functor_22, (MR_String) "=>"))
                case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 97:
              if (MR_offset_streq(1, Functor_22, (MR_String) "all"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(1, Functor_22, (MR_String) "end_module"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 102:
              switch (MR_nth_code_unit(Functor_22, 1)) {
                case (MR_Integer) 105:
                  if (((((((((MR_nth_code_unit(Functor_22, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Functor_22, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_22, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_22, 5)) == (MR_Integer) 105))))
                    switch (MR_nth_code_unit(Functor_22, 6)) {
                      case (MR_Integer) 115:
                        if (MR_offset_streq(7, Functor_22, (MR_String) "finalise"))
                          case_num_0 = (MR_Integer) 4;
                        break;
                      case (MR_Integer) 122:
                        if (MR_offset_streq(7, Functor_22, (MR_String) "finalize"))
                          case_num_0 = (MR_Integer) 4;
                        break;
                    }
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, Functor_22, (MR_String) "func"))
                    case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(Functor_22, 1)) {
                case (MR_Integer) 109:
                  if (((MR_nth_code_unit(Functor_22, 2)) == (MR_Integer) 112))
                    switch (MR_nth_code_unit(Functor_22, 3)) {
                      case (MR_Integer) 108:
                        if (MR_offset_streq(4, Functor_22, (MR_String) "implementation"))
                          case_num_0 = (MR_Integer) 6;
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(4, Functor_22, (MR_String) "import_module"))
                          case_num_0 = (MR_Integer) 7;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(4, Functor_22, (MR_String) "impure"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                    }
                  break;
                case (MR_Integer) 110:
                  switch (MR_nth_code_unit(Functor_22, 2)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(3, Functor_22, (MR_String) "include_module"))
                        case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 105:
                      if (((((((((((MR_nth_code_unit(Functor_22, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(Functor_22, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_22, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_22, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_22, 7)) == (MR_Integer) 105))))
                        switch (MR_nth_code_unit(Functor_22, 8)) {
                          case (MR_Integer) 115:
                            if (MR_offset_streq(9, Functor_22, (MR_String) "initialise"))
                              case_num_0 = (MR_Integer) 10;
                            break;
                          case (MR_Integer) 122:
                            if (MR_offset_streq(9, Functor_22, (MR_String) "initialize"))
                              case_num_0 = (MR_Integer) 10;
                            break;
                        }
                      break;
                    case (MR_Integer) 115:
                      if (((MR_nth_code_unit(Functor_22, 3)) == (MR_Integer) 116))
                        switch (MR_nth_code_unit(Functor_22, 4)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 11;
                            break;
                          case (MR_Integer) 97:
                            if (MR_offset_streq(5, Functor_22, (MR_String) "instance"))
                              case_num_0 = (MR_Integer) 12;
                            break;
                        }
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(3, Functor_22, (MR_String) "interface"))
                        case_num_0 = (MR_Integer) 13;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(Functor_22, 1)) {
                case (MR_Integer) 111:
                  if (((MR_nth_code_unit(Functor_22, 2)) == (MR_Integer) 100))
                    switch (MR_nth_code_unit(Functor_22, 3)) {
                      case (MR_Integer) 101:
                        if (MR_offset_streq(4, Functor_22, (MR_String) "mode"))
                          case_num_0 = (MR_Integer) 14;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(4, Functor_22, (MR_String) "module"))
                          case_num_0 = (MR_Integer) 15;
                        break;
                    }
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, Functor_22, (MR_String) "mutable"))
                    case_num_0 = (MR_Integer) 16;
                  break;
              }
              break;
            case (MR_Integer) 112:
              if (((MR_nth_code_unit(Functor_22, 1)) == (MR_Integer) 114))
                switch (MR_nth_code_unit(Functor_22, 2)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(3, Functor_22, (MR_String) "pragma"))
                      case_num_0 = (MR_Integer) 17;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(3, Functor_22, (MR_String) "pred"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 111:
                    if (((((((((MR_nth_code_unit(Functor_22, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(Functor_22, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_22, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_22, 6)) == (MR_Integer) 101))))
                      switch (MR_nth_code_unit(Functor_22, 7)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 19;
                          break;
                        case (MR_Integer) 95:
                          if (((((MR_nth_code_unit(Functor_22, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(Functor_22, 9)) == (MR_Integer) 120))))
                            switch (MR_nth_code_unit(Functor_22, 10)) {
                              case (MR_Integer) 99:
                                if (((((((((((((MR_nth_code_unit(Functor_22, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(Functor_22, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Functor_22, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_22, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_22, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(Functor_22, 16)) == (MR_Integer) 101))))
                                  switch (MR_nth_code_unit(Functor_22, 17)) {
                                    case (MR_Integer) 0:
                                      case_num_0 = (MR_Integer) 20;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(18, Functor_22, (MR_String) "promise_exclusive_exhaustive"))
                                        case_num_0 = (MR_Integer) 21;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 104:
                                if (MR_offset_streq(11, Functor_22, (MR_String) "promise_exhaustive"))
                                  case_num_0 = (MR_Integer) 22;
                                break;
                            }
                          break;
                      }
                    break;
                }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(Functor_22, 1)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, Functor_22, (MR_String) "semipure"))
                    case_num_0 = (MR_Integer) 23;
                  break;
                case (MR_Integer) 111:
                  switch (MR_nth_code_unit(Functor_22, 2)) {
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, Functor_22, (MR_String) "solver"))
                        case_num_0 = (MR_Integer) 24;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(3, Functor_22, (MR_String) "some"))
                        case_num_0 = (MR_Integer) 25;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 116:
              if (((((((MR_nth_code_unit(Functor_22, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(Functor_22, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(Functor_22, 3)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(Functor_22, 4)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 26;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(5, Functor_22, (MR_String) "type_representation"))
                      case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(5, Functor_22, (MR_String) "typeclass"))
                      case_num_0 = (MR_Integer) 28;
                    break;
                }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(1, Functor_22, (MR_String) "use_module"))
                case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(1, Functor_22, (MR_String) "version_numbers"))
                case_num_0 = (MR_Integer) 30;
              break;
          }
          switch (case_num_0) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                // case "<="
                {
                  MR_Word Var_51;
                  MR_Word Var_52;

                  Var_51 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
                  Var_52 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
                  parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 1, Var_51, Var_52, &MaybeIOMPrime_25);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "=>"
                {
                  MR_Word Var_67;
                  MR_Word Var_68;

                  Var_67 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
                  Var_68 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
                  parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 0, Var_67, Var_68, &MaybeIOMPrime_25);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "all"
                {
                  MR_Word Var_53;
                  MR_Word Var_54;

                  Var_53 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
                  Var_54 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
                  parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 1, Var_53, Var_54, &MaybeIOMPrime_25);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                // case "end_module"
                parse_tree__parse_item__parse_end_module_marker_4_p_0(ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 4:
              {
                // case "finalise", "finalize"
                parse_tree__parse_mutable__parse_finalise_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 5:
              {
                // case "func"
                parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                // case "implementation"
                parse_tree__parse_item__parse_section_marker_6_p_0(Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 1, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 7:
              {
                // case "import_module"
                parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 1, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 8:
              {
                // case "impure"
                {
                  MR_Word Var_49;
                  MR_Word Var_50;

                  Var_49 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
                  Var_50 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
                  parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 2, Var_49, Var_50, &MaybeIOMPrime_25);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                // case "include_module"
                parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 10:
              {
                // case "initialise", "initialize"
                parse_tree__parse_mutable__parse_initialise_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 11:
              {
                // case "inst"
                parse_tree__parse_inst_mode_defn__parse_inst_defn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 12:
              {
                // case "instance"
                parse_tree__parse_class__parse_instance_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 13:
              {
                // case "interface"
                parse_tree__parse_item__parse_section_marker_6_p_0(Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 14:
              {
                // case "mode"
                parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(ModuleName_6, VarSet_7, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 15:
              {
                // case "module"
                parse_tree__parse_item__parse_module_marker_4_p_0(ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 16:
              {
                // case "mutable"
                parse_tree__parse_mutable__parse_mutable_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 17:
              {
                // case "pragma"
                parse_tree__parse_pragma__parse_pragma_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 18:
              {
                // case "pred"
                parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 19:
              {
                // case "promise"
                parse_tree__parse_item__parse_promise_item_5_p_0(VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 20:
              {
                // case "promise_exclusive"
                parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(VarSet_7, Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 21:
              {
                // case "promise_exclusive_exhaustive"
                parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(VarSet_7, Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 2, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 22:
              {
                // case "promise_exhaustive"
                parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(VarSet_7, Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 1, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 23:
              {
                // case "semipure"
                {
                  MR_Word Var_82;
                  MR_Word Var_83;

                  Var_82 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
                  Var_83 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
                  parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 1, Var_82, Var_83, &MaybeIOMPrime_25);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 24:
              {
                // case "solver"
                parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 25:
              {
                // case "some"
                {
                  MR_Word Var_87;
                  MR_Word Var_88;

                  Var_87 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
                  Var_88 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
                  parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, (MR_Integer) 1, Context_24, SeqNum_9, (MR_Integer) 0, Var_87, Var_88, &MaybeIOMPrime_25);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 26:
              {
                // case "type"
                parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 0, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 27:
              {
                // case "type_representation"
                parse_tree__parse_type_repn__parse_type_repn_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 28:
              {
                // case "typeclass"
                parse_tree__parse_class__parse_typeclass_item_6_p_0(ModuleName_6, VarSet_7, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 29:
              {
                // case "use_module"
                parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(ModuleName_6, VarSet_7, Functor_22, ArgTerms_23, Context_24, SeqNum_9, (MR_Integer) 2, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 30:
              {
                // case "version_numbers"
                parse_tree__parse_item__parse_version_numbers_marker_6_p_0(ModuleName_6, Functor_22, ArgTerms_23, Context_24, SeqNum_9, &MaybeIOMPrime_25);
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        if (succeeded)
          *MaybeIOM_10 = MaybeIOMPrime_25;
        else
        {
          MR_Word Spec_26;
          MR_Word Var_29;

          Spec_26 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(DeclTerm_11, Functor_22);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
          }
        }
      }
      else
      {
        MR_Word Var_31;
        MR_Word Spec_33;

        Spec_33 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_7, DeclTerm_11);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Spec_33));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
        }
      }
    }
    else
    {
      MR_Word DCGHeadTerm_97;
      MR_Word DCGBodyTerm_98;
      MR_Word DCGContext_99;
      MR_Word Var_106;
      MR_String Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;

      succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0)));
        Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1)));
        DCGContext_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_107 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0)));
          succeeded = (strcmp(Var_107, (MR_String) "-->") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              DCGHeadTerm_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_108, (MR_Integer) 0)));
              Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_108, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_109)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                DCGBodyTerm_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_109, (MR_Integer) 0)));
                Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_109, (MR_Integer) 1)));
                succeeded = (Var_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(ModuleName_6, VarSet_7, DCGHeadTerm_97, DCGBodyTerm_98, DCGContext_99, SeqNum_9, MaybeIOM_10);
      else
      {
        MR_Word TypeCtorInfo_53_165;
        MR_Word TypeCtorInfo_54_166;
        MR_Word TypeCtorInfo_55_167;
        MR_Word HeadTerm_103;
        MR_Word BodyTerm_104;
        MR_Word ClauseContext_105;
        MR_Word ProgVarSet0_127;
        MR_Word GoalContextPieces_128;
        MR_Word MaybeBodyGoal_129;
        MR_Word ProgVarSet_130;
        MR_Word VarSet_131;
        MR_Word MaybeFuncResultTerm_136;
        MR_Word MaybeFunctor_138;
        MR_Word HeadTermPrime_100;
        MR_Word BodyTermPrime_101;
        MR_Word TermContext_102;
        MR_Word Var_111;
        MR_String Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word FuncResultTerm0_133;
        MR_Word FuncHeadTerm_135;
        MR_Word FuncHeadTerm0_132;
        MR_Word Var_149;
        MR_String Var_150;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_134;

        succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0)));
          Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1)));
          TermContext_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0)));
            succeeded = (strcmp(Var_112, (MR_String) ":-") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_113)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                HeadTermPrime_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 0)));
                Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_114)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  BodyTermPrime_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_114, (MR_Integer) 0)));
                  Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_114, (MR_Integer) 1)));
                  succeeded = (Var_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          HeadTerm_103 = HeadTermPrime_100;
          BodyTerm_104 = BodyTermPrime_101;
          ClauseContext_105 = TermContext_102;
        }
        else
        {
          HeadTerm_103 = Term_8;
          ClauseContext_105 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadTerm_103);
          {
            BodyTerm_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BodyTerm_104, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[27]));
            MR_hl_field(MR_mktag(0), BodyTerm_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), BodyTerm_104, 2) = ((MR_Box) (ClauseContext_105));
          }
        }
        TypeCtorInfo_53_165 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        TypeCtorInfo_54_166 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        mercury__varset__coerce_2_p_0(TypeCtorInfo_53_165, TypeCtorInfo_54_166, VarSet_7, &ProgVarSet0_127);
        TypeCtorInfo_55_167 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        GoalContextPieces_128 = mercury__cord__init_0_f_0(TypeCtorInfo_55_167);
        parse_tree__parse_goal__parse_goal_5_p_0(BodyTerm_104, GoalContextPieces_128, &MaybeBodyGoal_129, ProgVarSet0_127, &ProgVarSet_130);
        mercury__varset__coerce_2_p_0(TypeCtorInfo_54_166, TypeCtorInfo_53_165, ProgVarSet_130, &VarSet_131);
        succeeded = ((MR_tag((MR_Word) HeadTerm_103)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_103, (MR_Integer) 0)));
          Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_103, (MR_Integer) 1)));
          Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_103, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_149)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_150 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_149, (MR_Integer) 0)));
            succeeded = (strcmp(Var_150, (MR_String) "=") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_151)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                FuncHeadTerm0_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0)));
                Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_152)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  FuncResultTerm0_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 0)));
                  Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 1)));
                  succeeded = (Var_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                  {
                    FuncHeadTerm_135 = parse_tree__parse_item__desugar_field_access_1_f_0(FuncHeadTerm0_132);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word HeadContextPieces_137;

          {
            MaybeFuncResultTerm_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFuncResultTerm_136, 0) = ((MR_Box) (FuncResultTerm0_133));
          }
          HeadContextPieces_137 = mercury__cord__singleton_1_f_0(TypeCtorInfo_55_167, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[228]))));
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_53_165, ModuleName_6, FuncHeadTerm_135, VarSet_131, HeadContextPieces_137, &MaybeFunctor_138);
        }
        else
        {
          MR_Word HeadContextPieces_164;

          MaybeFuncResultTerm_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          HeadContextPieces_164 = mercury__cord__singleton_1_f_0(TypeCtorInfo_55_167, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[229]))));
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_53_165, ModuleName_6, HeadTerm_103, VarSet_131, HeadContextPieces_164, &MaybeFunctor_138);
        }
        if (((MR_tag((MR_Word) MaybeFunctor_138)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word FunctorSpecs_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFunctor_138, (MR_Integer) 0)));
          MR_Word Specs_148;
          MR_Word Var_158;

          Var_158 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, MaybeBodyGoal_129);
          Specs_148 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, FunctorSpecs_147, Var_158);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_148));
          }
        }
        else
        {
          MR_Word Name_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctor_138, (MR_Integer) 0)));
          MR_Word ArgTerms0_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctor_138, (MR_Integer) 1)));
          MR_Word PredOrFunc_142;
          MR_Word ArgTerms_143;
          MR_Word ProgArgTerms_144;
          MR_Word ItemClause_145;
          MR_Word Item_146;
          MR_Word Var_163;

          if ((MaybeFuncResultTerm_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            PredOrFunc_142 = (MR_Integer) 0;
            ArgTerms_143 = ArgTerms0_140;
          }
          else
          {
            MR_Word FuncResultTerm_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFuncResultTerm_136, (MR_Integer) 0)));
            MR_Word Var_159;

            PredOrFunc_142 = (MR_Integer) 1;
            {
              Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (FuncResultTerm_141));
              MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ArgTerms_143 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], ArgTerms0_140, Var_159);
          }
          mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], (MR_Word) &parse_tree__parse_item_scalar_common_1[1], (MR_Word) &parse_tree__parse_item_scalar_common_2[2], ArgTerms_143, &ProgArgTerms_144);
          {
            ItemClause_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemClause_145, 0) = ((MR_Box) (Name_139));
            MR_hl_field(MR_mktag(0), ItemClause_145, 1) = ((MR_Box) (PredOrFunc_142));
            MR_hl_field(MR_mktag(0), ItemClause_145, 2) = ((MR_Box) (ProgArgTerms_144));
            MR_hl_field(MR_mktag(0), ItemClause_145, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ItemClause_145, 4) = ((MR_Box) (ProgVarSet_130));
            MR_hl_field(MR_mktag(0), ItemClause_145, 5) = ((MR_Box) (MaybeBodyGoal_129));
            MR_hl_field(MR_mktag(0), ItemClause_145, 6) = ((MR_Box) (ClauseContext_105));
            MR_hl_field(MR_mktag(0), ItemClause_145, 7) = ((MR_Box) (SeqNum_9));
          }
          Item_146 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ItemClause_145);
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Item_146));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_163));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(
  MR_Word VarSet_9,
  MR_String Functor_10,
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word PromiseType_14,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Term_17;
    MR_Word Var_29;

    if (succeeded)
    {
      Term_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 0)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 1)));
      succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ProgVarSet0_18;
      MR_Word ContextPieces_19;
      MR_Word MaybeGoal0_20;
      MR_Word ProgVarSet_21;

      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_9, &ProgVarSet0_18);
      ContextPieces_19 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
      parse_tree__parse_goal__parse_goal_5_p_0(Term_17, ContextPieces_19, &MaybeGoal0_20, ProgVarSet0_18, &ProgVarSet_21);
      if (((MR_tag((MR_Word) MaybeGoal0_20)) == (MR_mktag((MR_Integer) 0))))
        *MaybeIOM_16 = (MR_Word) MaybeGoal0_20;
      else
      {
        MR_Word Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeGoal0_20, (MR_Integer) 0)));
        MR_Word ItemPromise_24;
        MR_Word Item_25;
        MR_Word Var_30;

        {
          ItemPromise_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemPromise_24, 0) = ((MR_Box) (PromiseType_14));
          MR_hl_field(MR_mktag(0), ItemPromise_24, 1) = ((MR_Box) (Goal_22));
          MR_hl_field(MR_mktag(0), ItemPromise_24, 2) = ((MR_Box) (ProgVarSet_21));
          MR_hl_field(MR_mktag(0), ItemPromise_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemPromise_24, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), ItemPromise_24, 5) = ((MR_Box) (SeqNum_13));
        }
        {
          Item_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), Item_25, 1) = ((MR_Box) (ItemPromise_24));
        }
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Item_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
        }
      }
    }
    else
    {
      MR_Word Pieces_27;
      MR_Word Spec_28;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;

      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Functor_10));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[162])));
      }
      {
        Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), Pieces_27, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Pieces_27));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_49));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_promise_item_5_p_0(
  MR_Word VarSet_6,
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Integer SeqNum_9,
  MR_Word * MaybeIOM_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_7)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Term_11;
    MR_Word Var_28;

    if (succeeded)
    {
      Term_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1)));
      succeeded = (Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ProgVarSet0_12;
      MR_Word ContextPieces_13;
      MR_Word MaybeGoal0_14;
      MR_Word ProgVarSet_15;

      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_6, &ProgVarSet0_12);
      ContextPieces_13 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
      parse_tree__parse_goal__parse_goal_5_p_0(Term_11, ContextPieces_13, &MaybeGoal0_14, ProgVarSet0_12, &ProgVarSet_15);
      if (((MR_tag((MR_Word) MaybeGoal0_14)) == (MR_mktag((MR_Integer) 0))))
        *MaybeIOM_10 = (MR_Word) MaybeGoal0_14;
      else
      {
        MR_Word Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeGoal0_14, (MR_Integer) 0)));
        MR_Word UnivVars_21;
        MR_Word Goal_22;
        MR_Word ItemPromise_23;
        MR_Word Item_24;
        MR_Word Var_31;
        MR_Word UnivVars0_19;
        MR_Word AllGoal_20;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_18;

        succeeded = ((((MR_tag((MR_Word) Goal0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(3), Goal0_16, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), Goal0_16, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal0_16, (MR_Integer) 2)));
          UnivVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal0_16, (MR_Integer) 3)));
          AllGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal0_16, (MR_Integer) 4)));
          succeeded = (Var_29 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (Var_30 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          UnivVars_21 = UnivVars0_19;
          Goal_22 = AllGoal_20;
        }
        else
        {
          UnivVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Goal_22 = Goal0_16;
        }
        {
          ItemPromise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemPromise_23, 0) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ItemPromise_23, 1) = ((MR_Box) (Goal_22));
          MR_hl_field(MR_mktag(0), ItemPromise_23, 2) = ((MR_Box) (ProgVarSet_15));
          MR_hl_field(MR_mktag(0), ItemPromise_23, 3) = ((MR_Box) (UnivVars_21));
          MR_hl_field(MR_mktag(0), ItemPromise_23, 4) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), ItemPromise_23, 5) = ((MR_Box) (SeqNum_9));
        }
        {
          Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), Item_24, 1) = ((MR_Box) (ItemPromise_23));
        }
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Item_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
        }
      }
    }
    else
    {
      MR_Word Spec_27;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_57;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[227])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) (Var_51));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_version_numbers_marker_6_p_0(
  MR_Word ModuleName_7,
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word VersionNumberTerm_13;
    MR_Word ModuleNameTerm_14;
    MR_Word VersionNumbersTerm_15;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    if (succeeded)
    {
      VersionNumberTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ModuleNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0)));
        Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          VersionNumbersTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0)));
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1)));
          succeeded = (Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer VersionNumber_16;
      MR_Integer Var_127;

      succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VersionNumberTerm_13, &VersionNumber_16);
      if (succeeded)
      {
        Var_127 = recompilation__version__version_numbers_version_number_0_f_0();
        succeeded = (VersionNumber_16 == Var_127);
      }
      if (succeeded)
      {
        MR_Word Var_128;

        succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ModuleNameTerm_14, &Var_128);
        if (succeeded)
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_128);
        if (succeeded)
        {
          MR_Word MaybeVersionNumbers_17;

          recompilation__version__parse_version_numbers_2_p_0(VersionNumbersTerm_15, &MaybeVersionNumbers_17);
          if (((MR_tag((MR_Word) MaybeVersionNumbers_17)) == (MR_mktag((MR_Integer) 0))))
            *MaybeIOM_12 = (MR_Word) MaybeVersionNumbers_17;
          else
          {
            MR_Word VersionNumbers_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVersionNumbers_17, (MR_Integer) 0)));
            MR_Word IOM_19;

            {
              IOM_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), IOM_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), IOM_19, 1) = ((MR_Box) (VersionNumbers_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOM_19));
            }
          }
        }
        else
        {
          MR_Word Spec_22;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_56;

          Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ModuleNameTerm_14);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[225])));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_49));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_22));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
          }
        }
      }
      else
      if (((MR_tag((MR_Word) VersionNumberTerm_13)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word DummyTerm_27;
        MR_Word Warning_28;
        MR_Word ItemNothing_29;
        MR_Word Item_30;
        MR_Word Var_83;
        MR_Word IOM_116;

        parse_tree__parse_item__dummy_term_with_context_2_p_0(Context_10, &DummyTerm_27);
        {
          Warning_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Warning_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[24])));
          MR_hl_field(MR_mktag(0), Warning_28, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
          MR_hl_field(MR_mktag(0), Warning_28, 2) = ((MR_Box) (DummyTerm_27));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Warning_28));
        }
        {
          ItemNothing_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemNothing_29, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), ItemNothing_29, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), ItemNothing_29, 2) = ((MR_Box) (SeqNum_11));
        }
        {
          Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Item_30, 1) = ((MR_Box) (ItemNothing_29));
        }
        {
          IOM_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IOM_116, 0) = ((MR_Box) (Item_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOM_116));
        }
      }
      else
      {
        MR_Word VersionNumberContext_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), VersionNumberTerm_13, (MR_Integer) 1)));
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_77;
        MR_Word Spec_118;
        MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), VersionNumberTerm_13, (MR_Integer) 0)));

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (VersionNumberContext_32));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[226])));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_118, 2) = ((MR_Box) (Var_71));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_118));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
        }
      }
    }
    else
    {
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_114;
      MR_Word Pieces_122;
      MR_Word Spec_123;

      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Functor_8));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[85])));
      }
      {
        Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), Pieces_122, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (Pieces_122));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_123, 2) = ((MR_Box) (Var_108));
      }
      {
        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Spec_123));
        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__dummy_term_with_context_2_p_0(
  MR_Word Context_3,
  MR_Word * Term_4)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Term_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[22]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_3));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Avail_8;

    parse_tree__parse_item__make_item_avail_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv4_Avail_8);
    *wrapper_arg_2 = ((MR_Box) (conv4_Avail_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Incl_8;

    parse_tree__parse_item__make_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv3_Incl_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_Incl_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Avail_8;

    parse_tree__parse_item__make_item_avail_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_Avail_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_Avail_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeModule_8;

    parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_MaybeModule_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_MaybeModule_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeModuleName_6;

    parse_tree__parse_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_MaybeModuleName_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeModuleName_6));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_String Functor_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word IIU_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;
    MR_Word Parser_17;
    MR_Word ModuleNamesTerm_18;
    MR_Word Var_34;

    switch (IIU_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          Parser_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1));
          MR_hl_field(MR_mktag(0), Parser_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Parser_17, 3) = ((MR_Box) (VarSet_10));
        }
        break;
      case (MR_Integer) 0:
        {
          Parser_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2));
          MR_hl_field(MR_mktag(0), Parser_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Parser_17, 3) = ((MR_Box) (ModuleName_9));
          MR_hl_field(MR_mktag(0), Parser_17, 4) = ((MR_Box) (VarSet_10));
        }
        break;
    }
    succeeded = ((MR_tag((MR_Word) ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ModuleNamesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1)));
      succeeded = (Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      MR_Word MaybeModuleNames_19;

      parse_tree__parse_util__parse_one_or_more_3_p_0(TypeCtorInfo_73_73, Parser_17, ModuleNamesTerm_18, &MaybeModuleNames_19);
      if (((MR_tag((MR_Word) MaybeModuleNames_19)) == (MR_mktag((MR_Integer) 0))))
        *MaybeIOM_16 = (MR_Word) MaybeModuleNames_19;
      else
      {
        MR_Word ModuleNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeModuleNames_19, (MR_Integer) 0)));
        MR_Word HeadModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleNames_20, (MR_Integer) 0)));
        MR_Word TailModuleNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleNames_20, (MR_Integer) 1)));
        MR_Word IOM_25;

        switch (IIU_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word HeadImport_26;
              MR_Word TailImports_27;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word AvailImportInfo_87;

              {
                AvailImportInfo_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AvailImportInfo_87, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(MR_mktag(0), AvailImportInfo_87, 1) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), AvailImportInfo_87, 2) = ((MR_Box) (SeqNum_14));
              }
              HeadImport_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) AvailImportInfo_87);
              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (SeqNum_14));
              }
              mercury__list__map_3_p_0(TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, Var_37, TailModuleNames_22, &TailImports_27);
              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (HeadImport_26));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (TailImports_27));
              }
              {
                IOM_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), IOM_25, 0) = ((MR_Box) (Var_38));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word HeadIncl_23;
              MR_Word TailIncls_24;
              MR_Word Var_39;
              MR_Word Var_40;

              {
                HeadIncl_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadIncl_23, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(MR_mktag(0), HeadIncl_23, 1) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), HeadIncl_23, 2) = ((MR_Box) (SeqNum_14));
              }
              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[2]));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4));
                MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (SeqNum_14));
              }
              mercury__list__map_3_p_0(TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, Var_39, TailModuleNames_22, &TailIncls_24);
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (HeadIncl_23));
                MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (TailIncls_24));
              }
              {
                IOM_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), IOM_25, 0) = ((MR_Box) (Var_40));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadUse_28;
              MR_Word TailUses_29;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word AvailUseInfo_96;

              {
                AvailUseInfo_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AvailUseInfo_96, 0) = ((MR_Box) (HeadModuleName_21));
                MR_hl_field(MR_mktag(0), AvailUseInfo_96, 1) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), AvailUseInfo_96, 2) = ((MR_Box) (SeqNum_14));
              }
              HeadUse_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) AvailUseInfo_96);
              {
                Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5));
                MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (SeqNum_14));
              }
              mercury__list__map_3_p_0(TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, Var_35, TailModuleNames_22, &TailUses_29);
              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (HeadUse_28));
                MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (TailUses_29));
              }
              {
                IOM_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), IOM_25, 0) = ((MR_Box) (Var_36));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOM_25));
        }
      }
    }
    else
    {
      MR_String Article_31;
      MR_Word Pieces_32;
      MR_Word Spec_33;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_67;

      switch (IIU_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          Article_31 = (MR_String) "an";
          break;
        case (MR_Integer) 2:
          Article_31 = (MR_String) "a";
          break;
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Article_31));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Functor_11));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[57])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
        MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Pieces_32));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_61));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_section_marker_6_p_0(
  MR_String Functor_7,
  MR_Word ArgTerms_8,
  MR_Word Context_9,
  MR_Integer SeqNum_10,
  MR_Word Section_11,
  MR_Word * MaybeIOM_12)
{
  if ((ArgTerms_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word Marker_13;

    {
      Marker_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Marker_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Marker_13, 1) = ((MR_Box) (Section_11));
      MR_hl_field(MR_mktag(3), Marker_13, 2) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(3), Marker_13, 3) = ((MR_Box) (SeqNum_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Marker_13));
    }
  }
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[53])));
    }
    {
      Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[224])));
      MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Pieces_16));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_33));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_end_module_marker_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Integer SeqNum_7,
  MR_Word * MaybeIOM_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ModuleName_10;
    MR_Word TypeCtorInfo_42_42;
    MR_Word ModuleNameTerm_9;
    MR_Word Var_14;

    if (succeeded)
    {
      ModuleNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_5, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_5, (MR_Integer) 1)));
      succeeded = (Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_42_42, ModuleNameTerm_9, &ModuleName_10);
      }
    }
    if (succeeded)
    {
      MR_Word Marker_11;

      {
        Marker_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Marker_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Marker_11, 1) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(3), Marker_11, 2) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(3), Marker_11, 3) = ((MR_Box) (SeqNum_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Marker_11));
      }
    }
    else
    {
      MR_Word Spec_13;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_40;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[223])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_34));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_marker_4_p_0(
  MR_Word ArgTerms_5,
  MR_Word Context_6,
  MR_Integer SeqNum_7,
  MR_Word * MaybeIOM_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ModuleName_10;
    MR_Word TypeCtorInfo_42_42;
    MR_Word ModuleNameTerm_9;
    MR_Word Var_14;

    if (succeeded)
    {
      ModuleNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_5, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_5, (MR_Integer) 1)));
      succeeded = (Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(TypeCtorInfo_42_42, ModuleNameTerm_9, &ModuleName_10);
      }
    }
    if (succeeded)
    {
      MR_Word Marker_11;

      {
        Marker_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Marker_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Marker_11, 1) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(3), Marker_11, 2) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(3), Marker_11, 3) = ((MR_Box) (SeqNum_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Marker_11));
      }
    }
    else
    {
      MR_Word Spec_13;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_40;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[222])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_34));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      }
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
  MR_Integer SeqNum_17,
  MR_Word PurityAttrs0_18,
  MR_Word QuantConstrAttrs0_19,
  MR_Word * MaybeIOM_20)
{
  {
    MR_bool succeeded;
    MR_Integer slot_0 = ((MR_hash_string6(Functor_13)) & (MR_Integer) 31);
    MR_String str_1 = ((&parse_tree__parse_item_vector_common_7[0 + slot_0]))->parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;

    // hashed string jump switch
    // compute the hash value of the input string
    // no collisions; no hash chain loop
    // lookup the string for this hash slot
    // did we find a match?
    if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_13) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            // case "semipure"
            parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            // case "impure"
            parse_tree__parse_item__parse_purity_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 2, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            // case "func"
            {
              MR_Word Var_29;
              MR_Word Var_30;

              Var_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, PurityAttrs0_18);
              Var_30 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, QuantConstrAttrs0_19);
              parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, Var_29, Var_30, MaybeIOM_20);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            // case "=>"
            parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            // case "some"
            parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 17:
          {
            // case "mode"
            {
              MR_Word MaybeIOM0_21;
              MR_Word Var_32;

              Var_32 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, QuantConstrAttrs0_19);
              parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(ModuleName_11, VarSet_12, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, Var_32, &MaybeIOM0_21);
              succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, PurityAttrs0_18);
              if (succeeded)
                *MaybeIOM_20 = MaybeIOM0_21;
              else
              {
                MR_Word Spec_23;
                MR_Word Var_43;
                MR_Word Var_44;

                {
                  Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Context_16));
                  MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[221])));
                }
                {
                  Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
                  MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_43));
                }
                if (((MR_tag((MR_Word) MaybeIOM0_21)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word Specs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeIOM0_21, (MR_Integer) 0)));
                  MR_Word Var_49;

                  {
                    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_23));
                    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Specs0_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeIOM_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
                  }
                }
                else
                {
                  MR_Word Var_50;

                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_23));
                    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeIOM_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
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
            parse_tree__parse_item__parse_quant_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 27:
          {
            // case "<="
            parse_tree__parse_item__parse_constraint_attr_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 1, PurityAttrs0_18, QuantConstrAttrs0_19, MaybeIOM_20);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 31:
          {
            // case "pred"
            {
              MR_Word Var_59;
              MR_Word Var_60;

              Var_59 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, PurityAttrs0_18);
              Var_60 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, QuantConstrAttrs0_19);
              parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(ModuleName_11, VarSet_12, Functor_13, ArgTerms_14, IsInClass_15, Context_16, SeqNum_17, (MR_Integer) 0, Var_59, Var_60, MaybeIOM_20);
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      // jump out of search loop
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_purity_attr_11_p_0(
  MR_Word ModuleName_12,
  MR_Word VarSet_13,
  MR_String Functor_14,
  MR_Word ArgTerms_15,
  MR_Word IsInClass_16,
  MR_Word Context_17,
  MR_Integer SeqNum_18,
  MR_Word Purity_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_27,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_28,
  MR_Word * MaybeIOM_22)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word SubTerm_23;
    MR_Word Var_29;

    if (succeeded)
    {
      SubTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 0)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 1)));
      succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word PurityAttr_24 = (MR_Word) Purity_19;
      MR_Word STATE_VARIABLE_PurityAttrs_30_30;
      MR_String Functor_66;
      MR_Word ArgTerms_67;
      MR_Word FunctorContext_68;
      MR_Word Var_71;

      STATE_VARIABLE_PurityAttrs_30_30 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, STATE_VARIABLE_PurityAttrs_0_27, ((MR_Box) (PurityAttr_24)));
      succeeded = ((MR_tag((MR_Word) SubTerm_23)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_23, (MR_Integer) 0)));
        ArgTerms_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_23, (MR_Integer) 1)));
        FunctorContext_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_23, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          Functor_66 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word MaybeIOMPrime_69;

        succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_12, VarSet_13, Functor_66, ArgTerms_67, IsInClass_16, FunctorContext_68, SeqNum_18, STATE_VARIABLE_PurityAttrs_30_30, STATE_VARIABLE_QuantConstrAttrs_0_28, &MaybeIOMPrime_69);
        if (succeeded)
          *MaybeIOM_22 = MaybeIOMPrime_69;
        else
        {
          MR_Word Spec_70;
          MR_Word Var_72;

          Spec_70 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(SubTerm_23, Functor_66);
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_70));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
          }
        }
      }
      else
      {
        MR_Word Var_74;
        MR_Word Spec_76;

        Spec_76 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_13, SubTerm_23);
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Spec_76));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
        }
      }
    }
    else
    {
      MR_Word Pieces_25;
      MR_Word Spec_26;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_52;

      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[36])));
      }
      {
        Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[220])));
        MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_25));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_46));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
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
  MR_Integer SeqNum_18,
  MR_Word QuantType_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * MaybeIOM_22)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word SubTerm_23;
    MR_Word ConstraintsTerm_24;
    MR_Word Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      SubTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 0)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ConstraintsTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
        succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word ConstrAttr_25;
      MR_Word STATE_VARIABLE_QuantConstrAttrs_32_32;
      MR_String Functor_68;
      MR_Word ArgTerms_69;
      MR_Word FunctorContext_70;
      MR_Word Var_73;

      {
        ConstrAttr_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConstrAttr_25, 0) = ((MR_Box) (QuantType_19));
        MR_hl_field(MR_mktag(1), ConstrAttr_25, 1) = ((MR_Box) (ConstraintsTerm_24));
      }
      STATE_VARIABLE_QuantConstrAttrs_32_32 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, STATE_VARIABLE_QuantConstrAttrs_0_29, ((MR_Box) (ConstrAttr_25)));
      succeeded = ((MR_tag((MR_Word) SubTerm_23)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_23, (MR_Integer) 0)));
        ArgTerms_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_23, (MR_Integer) 1)));
        FunctorContext_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_23, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_73)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          Functor_68 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word MaybeIOMPrime_71;

        succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_12, VarSet_13, Functor_68, ArgTerms_69, IsInClass_16, FunctorContext_70, SeqNum_18, STATE_VARIABLE_PurityAttrs_0_28, STATE_VARIABLE_QuantConstrAttrs_32_32, &MaybeIOMPrime_71);
        if (succeeded)
          *MaybeIOM_22 = MaybeIOMPrime_71;
        else
        {
          MR_Word Spec_72;
          MR_Word Var_74;

          Spec_72 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(SubTerm_23, Functor_68);
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Spec_72));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
          }
        }
      }
      else
      {
        MR_Word Var_76;
        MR_Word Spec_78;

        Spec_78 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_13, SubTerm_23);
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Spec_78));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
        }
      }
    }
    else
    {
      MR_Word Pieces_26;
      MR_Word Spec_27;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_54;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[32])));
      }
      {
        Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[220])));
        MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Pieces_26));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) (Var_48));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
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
  MR_Integer SeqNum_18,
  MR_Word QuantType_19,
  MR_Word STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * MaybeIOM_22)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word VarsTerm_23;
    MR_Word SubTerm_24;
    MR_Word Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      VarsTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 0)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        SubTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
        succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word QuantAttr_25;
      MR_Word STATE_VARIABLE_QuantConstrAttrs_32_32;
      MR_String Functor_71;
      MR_Word ArgTerms_72;
      MR_Word FunctorContext_73;
      MR_Word Var_76;

      {
        QuantAttr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QuantAttr_25, 0) = ((MR_Box) (QuantType_19));
        MR_hl_field(MR_mktag(0), QuantAttr_25, 1) = ((MR_Box) (VarsTerm_23));
      }
      STATE_VARIABLE_QuantConstrAttrs_32_32 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, STATE_VARIABLE_QuantConstrAttrs_0_29, ((MR_Box) (QuantAttr_25)));
      succeeded = ((MR_tag((MR_Word) SubTerm_24)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_24, (MR_Integer) 0)));
        ArgTerms_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_24, (MR_Integer) 1)));
        FunctorContext_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_24, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          Functor_71 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word MaybeIOMPrime_74;

        succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(ModuleName_12, VarSet_13, Functor_71, ArgTerms_72, IsInClass_16, FunctorContext_73, SeqNum_18, STATE_VARIABLE_PurityAttrs_0_28, STATE_VARIABLE_QuantConstrAttrs_32_32, &MaybeIOMPrime_74);
        if (succeeded)
          *MaybeIOM_22 = MaybeIOMPrime_74;
        else
        {
          MR_Word Spec_75;
          MR_Word Var_77;

          Spec_75 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(SubTerm_24, Functor_71);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_75));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
          }
        }
      }
      else
      {
        MR_Word Var_79;
        MR_Word Spec_81;

        Spec_81 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(VarSet_13, SubTerm_24);
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Spec_81));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
        }
      }
    }
    else
    {
      MR_Word Pieces_26;
      MR_Word Spec_27;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[28])));
      }
      {
        Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[219])));
        MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Pieces_26));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) (Var_51));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
      }
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
  MR_Integer SeqNum_18,
  MR_Word PredOrFunc_19,
  MR_Word PurityAttrs_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Term_23;
    MR_Word Var_43;

    if (succeeded)
    {
      Term_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 0)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_15, (MR_Integer) 1)));
      succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_170_170;
      MR_Word PredOrFuncDeclPieces_24;
      MR_Word DetismContextPieces_25;
      MR_Word BeforeDetismTerm_26;
      MR_Word MaybeMaybeDetism_27;
      MR_Word WithInstContextPieces_28;
      MR_Word BeforeWithInstTerm_29;
      MR_Word MaybeWithInst_30;
      MR_Word MaybeWithType_32;
      MR_Word BaseTerm_33;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word MaybeDetism_34;
      MR_Word WithInst_35;
      MR_Word WithType_36;

      switch (IsInClass_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51;
            MR_Word Var_52;

            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (PredOrFunc_19));
            }
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[211])));
            }
            {
              PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredOrFuncDeclPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[209])));
              MR_hl_field(MR_mktag(1), PredOrFuncDeclPieces_24, 1) = ((MR_Box) (Var_51));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_44;

            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PredOrFunc_19));
            }
            {
              PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredOrFuncDeclPieces_24, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), PredOrFuncDeclPieces_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[193])));
            }
          }
          break;
      }
      TypeCtorInfo_170_170 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      Var_57 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_170_170, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[212]), PredOrFuncDeclPieces_24);
      DetismContextPieces_25 = mercury__cord__from_list_1_f_0(TypeCtorInfo_170_170, Var_57);
      parse_tree__parse_item__parse_determinism_suffix_5_p_0(VarSet_13, DetismContextPieces_25, Term_23, &BeforeDetismTerm_26, &MaybeMaybeDetism_27);
      Var_62 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_170_170, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[91]), PredOrFuncDeclPieces_24);
      WithInstContextPieces_28 = mercury__cord__from_list_1_f_0(TypeCtorInfo_170_170, Var_62);
      parse_tree__parse_item__parse_with_inst_suffix_5_p_0(VarSet_13, WithInstContextPieces_28, BeforeDetismTerm_26, &BeforeWithInstTerm_29, &MaybeWithInst_30);
      parse_tree__parse_item__parse_with_type_suffix_4_p_0(VarSet_13, BeforeWithInstTerm_29, &BaseTerm_33, &MaybeWithType_32);
      succeeded = ((MR_tag((MR_Word) MaybeMaybeDetism_27)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        MaybeDetism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMaybeDetism_27, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) MaybeWithInst_30)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          WithInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithInst_30, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeWithType_32)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            WithType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithType_32, (MR_Integer) 0)));
        }
      }
      if (succeeded)
      {
        MR_Word Var_37;
        MR_Word Var_38;

        succeeded = ((MR_tag((MR_Word) WithInst_35)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_35, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeDetism_34)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDetism_34, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word Spec_40;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_93;

          Var_88 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, BaseTerm_33);
          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[197])));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_86));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Spec_40));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
          }
        }
        else
        {
          MR_Word Var_41;

          succeeded = ((MR_tag((MR_Word) WithInst_35)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_35, (MR_Integer) 0)));
            succeeded = (WithType_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_124;
            MR_Word Spec_165;

            Var_119 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, BaseTerm_33);
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[213])));
            }
            {
              Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_165, 2) = ((MR_Box) (Var_117));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Spec_165));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_124));
            }
          }
          else
          {
            succeeded = (PredOrFunc_19 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (WithType_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
              parse_tree__parse_item__parse_func_decl_base_9_p_0(ModuleName_12, VarSet_13, BaseTerm_33, MaybeDetism_34, Context_17, SeqNum_18, PurityAttrs_20, QuantConstrAttrs_21, MaybeIOM_22);
            else
              parse_tree__parse_item__parse_pred_decl_base_12_p_0(PredOrFunc_19, ModuleName_12, VarSet_13, BaseTerm_33, WithType_36, WithInst_35, MaybeDetism_34, Context_17, SeqNum_18, PurityAttrs_20, QuantConstrAttrs_21, MaybeIOM_22);
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_173_173 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word Specs_42;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;

        Var_126 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[2], MaybeMaybeDetism_27);
        Var_128 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[3], MaybeWithInst_30);
        Var_129 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[4], MaybeWithType_32);
        Var_127 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_173_173, Var_128, Var_129);
        Specs_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_173_173, Var_126, Var_127);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_42));
        }
      }
    }
    else
    {
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_137;
      MR_Word Var_140;
      MR_Word Var_143;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_162;
      MR_Word Pieces_168;
      MR_Word Spec_169;

      {
        Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (Functor_14));
      }
      {
        Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])));
      }
      {
        Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[218])));
        MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_146));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
      }
      {
        Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_140));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[215])));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
      }
      {
        Pieces_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), Pieces_168, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (Pieces_168));
      }
      {
        Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
        MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (Var_158));
      }
      {
        Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_169, 2) = ((MR_Box) (Var_156));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Spec_169));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_162));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_with_type_suffix_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_6,
  MR_Word * BeforeWithTypeTerm_7,
  MR_Word * MaybeWithType_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word BeforeWithTypeTermPrime_10;
    MR_Word TypeTerm_11;
    MR_Word TypeQualifier_9;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_String Var_37;
    MR_Word Var_12;

    if (succeeded)
    {
      TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeQualifier_9, (MR_Integer) 0)));
              if ((strcmp(Var_37, (MR_String) ":") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(Var_37, (MR_String) "with_type") == 0))
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
      ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[169]));
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[16]), VarSet_5, ContextPieces_13, TypeTerm_11, &MaybeType_14);
      if (((MR_tag((MR_Word) MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
        *MaybeWithType_8 = (MR_Word) MaybeType_14;
      else
      {
        MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_14, (MR_Integer) 0)));
        MR_Word Var_34;

        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Type_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWithType_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
        }
      }
    }
    else
    {
      *BeforeWithTypeTerm_7 = Term_6;
      *MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[17]);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_59;

    conv0_LambdaHeadVar__2_59 = parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1057__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_59));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word MaybeDet_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word PurityAttrs_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word ContextPieces_19;
    MR_Word MaybeContext_20;

    ContextPieces_19 = mercury__cord__from_list_1_f_0(TypeCtorInfo_125_125, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[121]));
    parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_10, VarSet_11, QuantConstrAttrs_17, ContextPieces_19, &MaybeContext_20);
    if (((MR_tag((MR_Word) MaybeContext_20)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeContext_20, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
      }
    }
    else
    {
      MR_Word ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeContext_20, (MR_Integer) 0)));
      MR_Word Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeContext_20, (MR_Integer) 1)));
      MR_Word InstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeContext_20, (MR_Integer) 2)));
      MR_Word MaybeSugaredFuncTerm_25;
      MR_Word ReturnTerm_26;
      MR_Word Var_53;
      MR_String Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_27;

      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 0)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 1)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0)));
          succeeded = (strcmp(Var_54, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              MaybeSugaredFuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0)));
              Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ReturnTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0)));
                Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1)));
                succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word FuncTerm_28;
        MR_Word MaybeFuncNameAndArgs_29;

        FuncTerm_28 = parse_tree__parse_item__desugar_field_access_1_f_0(MaybeSugaredFuncTerm_25);
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ModuleName_10, FuncTerm_28, VarSet_11, ContextPieces_19, &MaybeFuncNameAndArgs_29);
        if (((MR_tag((MR_Word) MaybeFuncNameAndArgs_29)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word Specs_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFuncNameAndArgs_29, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_116));
          }
        }
        else
        {
          MR_Word FuncName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFuncNameAndArgs_29, (MR_Integer) 0)));
          MR_Word ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFuncNameAndArgs_29, (MR_Integer) 1)));
          MR_Word ArgContextFunc_32;
          MR_Word ArgTypesAndModes_34;
          MR_Word ArgTMSpecs_35;
          MR_Word RetContextPieces_36;
          MR_Word MaybeRetTypeAndMode_37;
          MR_Word Var_72;
          MR_Word Var_77;
          MR_Word RetTypeAndMode_38;

          {
            ArgContextFunc_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgContextFunc_32, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), ArgContextFunc_32, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_decl_base_9_p_0_1));
            MR_hl_field(MR_mktag(0), ArgContextFunc_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ArgContextFunc_32, 3) = ((MR_Box) (ContextPieces_19));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (InstConstraints_24));
          }
          parse_tree__parse_type_name__parse_type_and_modes_10_p_0(Var_72, (MR_Integer) 0, (MR_Integer) 3, VarSet_11, ArgContextFunc_32, ArgTerms_31, (MR_Integer) 1, &ArgTypesAndModes_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ArgTMSpecs_35);
          Var_77 = mercury__cord__from_list_1_f_0(TypeCtorInfo_125_125, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[123]));
          RetContextPieces_36 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_125_125, ContextPieces_19, Var_77);
          parse_tree__parse_type_name__parse_type_and_mode_7_p_0(Var_72, (MR_Integer) 0, (MR_Integer) 4, VarSet_11, RetContextPieces_36, ReturnTerm_26, &MaybeRetTypeAndMode_37);
          succeeded = (ArgTMSpecs_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeRetTypeAndMode_37)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              RetTypeAndMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRetTypeAndMode_37, (MR_Integer) 0)));
          }
          if (succeeded)
            parse_tree__parse_item__parse_func_decl_base_2_13_p_0(FuncName_30, ArgTypesAndModes_34, RetTypeAndMode_38, FuncTerm_28, Term_12, VarSet_11, MaybeDet_13, ExistQVars_22, Constraints_23, Context_14, SeqNum_15, PurityAttrs_16, MaybeIOM_18);
          else
          {
            MR_Word Var_87;
            MR_Word Specs_118;

            Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, MaybeRetTypeAndMode_37);
            Specs_118 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ArgTMSpecs_35, Var_87);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_118));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_40;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_114;

        Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_12);
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[208])));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_107));
        }
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Spec_40));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
        }
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
  MR_Integer SeqNum_24,
  MR_Word PurityAttrs_25,
  MR_Word * MaybeIOM_26)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_55_55;
    MR_Word MaybeTypeModeListKind_27;
    MR_Word MaybePurity_28;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Purity_30;
    MR_Word Var_29;

    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ReturnArg_16));
    }
    TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    Var_42 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_55_55, FuncTerm_17);
    parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(Args_15, Var_41, Var_42, &MaybeTypeModeListKind_27);
    if ((PurityAttrs_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybePurity_28 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[11]);
    }
    else
    {
      MR_Word PurityAttr_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), PurityAttrs_25, (MR_Integer) 0)));
      MR_Word PurityAttrs_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), PurityAttrs_25, (MR_Integer) 1)));
      MR_Word Purity_68 = (MR_Word) PurityAttr_65;

      if ((PurityAttrs_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybePurity_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePurity_28, 0) = ((MR_Box) (Purity_68));
        }
      else
      {
        MR_Word Spec_72;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_89;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Context_23));
          MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[205])));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_72, 2) = ((MR_Box) (Var_83));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Spec_72));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MaybePurity_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybePurity_28, 0) = ((MR_Box) (Var_89));
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeTypeModeListKind_27)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeModeListKind_27, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) MaybePurity_28)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePurity_28, (MR_Integer) 0)));
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

      mercury__varset__coerce_2_p_0(TypeCtorInfo_55_55, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_19, &TVarSet_31);
      mercury__varset__coerce_2_p_0(TypeCtorInfo_55_55, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_19, &IVarSet_32);
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ReturnArg_16));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      AllArgs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, Args_15, Var_43);
      parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(AllArgs_33, &InconsistentVars_34);
      Var_46 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_55_55, Term_18);
      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in function declaration", Var_46, IVarSet_32, InconsistentVars_34, &MaybeInconsistentSpec_35);
      if ((MaybeInconsistentSpec_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ItemPredDecl_37;
        MR_Word Item_38;
        MR_Word Var_52;

        {
          ItemPredDecl_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 0) = ((MR_Box) (FuncName_14));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 2) = ((MR_Box) (AllArgs_33));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 5) = ((MR_Box) (MaybeDetism_20));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 7) = ((MR_Box) (TVarSet_31));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 8) = ((MR_Box) (IVarSet_32));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 9) = ((MR_Box) (ExistQVars_21));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 10) = ((MR_Box) (Purity_30));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 11) = ((MR_Box) (Constraints_22));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 12) = ((MR_Box) (Context_23));
          MR_hl_field(MR_mktag(0), ItemPredDecl_37, 13) = ((MR_Box) (SeqNum_24));
        }
        {
          Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemPredDecl_37));
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Item_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_26 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
        }
      }
      else
      {
        MR_Word Spec_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInconsistentSpec_35, (MR_Integer) 0)));
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
        }
      }
    }
    else
    {
      MR_Word Specs_40;
      MR_Word Var_53;
      MR_Word Var_54;

      Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0, MaybeTypeModeListKind_27);
      Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0, MaybePurity_28);
      Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Var_53, Var_54);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_26 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_40));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_68;

    conv0_LambdaHeadVar__2_68 = parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__958__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_68));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0(
  MR_Word PredOrFunc_13,
  MR_Word ModuleName_14,
  MR_Word VarSet_15,
  MR_Word PredTypeTerm_16,
  MR_Word WithType_17,
  MR_Word WithInst_18,
  MR_Word MaybeDet_19,
  MR_Word Context_20,
  MR_Integer SeqNum_21,
  MR_Word PurityAttrs_22,
  MR_Word QuantConstrAttrs_23,
  MR_Word * MaybeIOM_24)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_154_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word ContextPieces_25;
    MR_Word MaybeExistClassInstContext_26;
    MR_Word MaybePurity_27;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word ExistQVars_28;
    MR_Word Constraints_29;
    MR_Word InstConstraints_30;
    MR_Word Purity_31;

    Var_58 = mercury__cord__singleton_1_f_0(TypeCtorInfo_154_154, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[191]))));
    Var_63 = parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(PredOrFunc_13);
    Var_62 = mercury__cord__from_list_1_f_0(TypeCtorInfo_154_154, Var_63);
    Var_64 = mercury__cord__singleton_1_f_0(TypeCtorInfo_154_154, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[181]))));
    Var_61 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_154_154, Var_62, Var_64);
    ContextPieces_25 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_154_154, Var_58, Var_61);
    parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_14, VarSet_15, QuantConstrAttrs_23, ContextPieces_25, &MaybeExistClassInstContext_26);
    parse_tree__parse_item__get_purity_from_attrs_3_p_0(Context_20, PurityAttrs_22, &MaybePurity_27);
    succeeded = ((MR_tag((MR_Word) MaybeExistClassInstContext_26)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeExistClassInstContext_26, (MR_Integer) 0)));
      Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeExistClassInstContext_26, (MR_Integer) 1)));
      InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeExistClassInstContext_26, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) MaybePurity_27)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePurity_27, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_155_155 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_Word MaybePredNameAndArgs_32;

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_155_155, ModuleName_14, PredTypeTerm_16, VarSet_15, ContextPieces_25, &MaybePredNameAndArgs_32);
      if (((MR_tag((MR_Word) MaybePredNameAndArgs_32)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePredNameAndArgs_32, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
        }
      }
      else
      {
        MR_Word Functor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredNameAndArgs_32, (MR_Integer) 0)));
        MR_Word ArgTerms_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredNameAndArgs_32, (MR_Integer) 1)));
        MR_Word ArgContextFunc_36;
        MR_Word TypesAndModes_38;
        MR_Word TMSpecs_39;
        MR_Word MaybeTypeModeListKind_40;
        MR_Word Var_81;
        MR_Word Var_87;
        MR_Word Var_41;

        {
          ArgContextFunc_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgContextFunc_36, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), ArgContextFunc_36, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_decl_base_12_p_0_1));
          MR_hl_field(MR_mktag(0), ArgContextFunc_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ArgContextFunc_36, 3) = ((MR_Box) (ContextPieces_25));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (InstConstraints_30));
        }
        parse_tree__parse_type_name__parse_type_and_modes_10_p_0(Var_81, (MR_Integer) 0, (MR_Integer) 2, VarSet_15, ArgContextFunc_36, ArgTerms_35, (MR_Integer) 1, &TypesAndModes_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &TMSpecs_39);
        Var_87 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_155_155, PredTypeTerm_16);
        parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(TypesAndModes_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_87, &MaybeTypeModeListKind_40);
        succeeded = (TMSpecs_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeTypeModeListKind_40)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeModeListKind_40, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word Var_88;
          MR_Word Var_42;
          MR_Word Var_44;
          MR_Word Var_43;

          succeeded = ((MR_tag((MR_Word) WithInst_18)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_18, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) TypesAndModes_38)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypesAndModes_38, (MR_Integer) 0)));
              Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypesAndModes_38, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
                Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0)));
            }
          }
          if (succeeded)
          {
            MR_Word Spec_46;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_109;

            Var_104 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_155_155, PredTypeTerm_16);
            {
              Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[206])));
            }
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
              MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_46, 2) = ((MR_Box) (Var_102));
            }
            {
              Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Spec_46));
              MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_24 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_109));
            }
          }
          else
          {
            MR_Word Var_111;
            MR_Word Var_47;
            MR_Word Var_50;
            MR_Word Var_48;
            MR_Word Var_49;

            succeeded = (WithInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) WithType_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithType_17, (MR_Integer) 0)));
                succeeded = ((MR_tag((MR_Word) TypesAndModes_38)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypesAndModes_38, (MR_Integer) 0)));
                  Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypesAndModes_38, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 0)));
                    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 1)));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_132;
              MR_Word Spec_144;

              Var_127 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_155_155, PredTypeTerm_16);
              {
                Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Var_127));
                MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[207])));
              }
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), Spec_144, 2) = ((MR_Box) (Var_125));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Spec_144));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_24 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_132));
              }
            }
            else
            {
              MR_Word TypeVarSet_51;
              MR_Word InstVarSet_52;
              MR_Word InconsistentVars_53;
              MR_Word MaybeInconsistentSpec_54;
              MR_String Var_134;
              MR_Word Var_135;

              mercury__varset__coerce_2_p_0(TypeCtorInfo_155_155, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_15, &TypeVarSet_51);
              mercury__varset__coerce_2_p_0(TypeCtorInfo_155_155, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_15, &InstVarSet_52);
              parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(TypesAndModes_38, &InconsistentVars_53);
              Var_134 = parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(PredOrFunc_13);
              Var_135 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_155_155, PredTypeTerm_16);
              parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0(Var_134, Var_135, InstVarSet_52, InconsistentVars_53, &MaybeInconsistentSpec_54);
              if ((MaybeInconsistentSpec_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ItemPredDecl_56;
                MR_Word Item_57;
                MR_Word Var_138;

                {
                  ItemPredDecl_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 0) = ((MR_Box) (Functor_34));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 1) = ((MR_Box) (PredOrFunc_13));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 2) = ((MR_Box) (TypesAndModes_38));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 3) = ((MR_Box) (WithType_17));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 4) = ((MR_Box) (WithInst_18));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 5) = ((MR_Box) (MaybeDet_19));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 7) = ((MR_Box) (TypeVarSet_51));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 8) = ((MR_Box) (InstVarSet_52));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 9) = ((MR_Box) (ExistQVars_28));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 10) = ((MR_Box) (Purity_31));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 11) = ((MR_Box) (Constraints_29));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 12) = ((MR_Box) (Context_20));
                  MR_hl_field(MR_mktag(0), ItemPredDecl_56, 13) = ((MR_Box) (SeqNum_21));
                }
                {
                  Item_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Item_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Item_57, 1) = ((MR_Box) (ItemPredDecl_56));
                }
                {
                  Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (Item_57));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeIOM_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_138));
                }
              }
              else
              {
                MR_Word Var_136;
                MR_Word Spec_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInconsistentSpec_54, (MR_Integer) 0)));

                {
                  Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Spec_145));
                  MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeIOM_24 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_136));
                }
              }
            }
          }
        }
        else
        {
          MR_Word Var_139;
          MR_Word Specs_150;

          Var_139 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0, MaybeTypeModeListKind_40);
          Specs_150 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, TMSpecs_39, Var_139);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_24 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_150));
          }
        }
      }
    }
    else
    {
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Specs_153;

      Var_140 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0, MaybePurity_27);
      Var_141 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__parse_item_scalar_common_2[0], MaybeExistClassInstContext_26);
      Specs_153 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Var_140, Var_141);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_153));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[176]);
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[178]);
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[11]);
  }
  else
  {
    MR_Word PurityAttr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word PurityAttrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Purity_10 = (MR_Word) PurityAttr_7;

    if ((PurityAttrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Purity_10));
      }
    else
    {
      MR_Word Spec_14;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_31;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[205])));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_25));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Component_6;

    conv0_Component_6 = parse_tree__parse_item__wrap_nth_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Component_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(
  MR_Word TypesAndModes_5,
  MR_Word MaybeRetTypeAndMode_6,
  MR_Word Context_7,
  MR_Word * MaybeKind_8)
{
  {
    MR_Word WithModeArgNums0_9;
    MR_Word WithoutModeArgNums0_10;
    MR_Word WithModeArgNums_11;
    MR_Word WithoutModeArgNums_12;

    parse_tree__parse_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, TypesAndModes_5, &WithModeArgNums0_9, &WithoutModeArgNums0_10);
    if ((MaybeRetTypeAndMode_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      WithModeArgNums_11 = WithModeArgNums0_9;
      WithoutModeArgNums_12 = WithoutModeArgNums0_10;
    }
    else
    {
      MR_Word RetTypeAndMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRetTypeAndMode_6, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) RetTypeAndMode_13)) == (MR_mktag((MR_Integer) 1))))
      {
        WithModeArgNums_11 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, WithModeArgNums0_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[201]));
        WithoutModeArgNums_12 = WithoutModeArgNums0_10;
      }
      else
      {
        WithModeArgNums_11 = WithModeArgNums0_9;
        WithoutModeArgNums_12 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, WithoutModeArgNums0_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[201]));
      }
    }
    if ((WithModeArgNums_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((WithoutModeArgNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *MaybeKind_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[8]);
      }
      else
      {
        *MaybeKind_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[9]);
      }
    else
    if ((WithoutModeArgNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeKind_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[10]);
    }
    else
    {
      MR_Integer FirstWithout_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), WithoutModeArgNums_12, (MR_Integer) 0)));
      MR_Word RestWithout_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithoutModeArgNums_12, (MR_Integer) 1)));
      MR_Word IdPieces_25;
      MR_Word Pieces_30;
      MR_Word Spec_31;
      MR_Word Var_64;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_74;

      if ((RestWithout_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_53;
        MR_Word Var_54;

        Var_54 = parse_tree__parse_item__wrap_nth_2_f_0((MR_Integer) 0, FirstWithout_23);
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])));
        }
        {
          IdPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IdPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[202])));
          MR_hl_field(MR_mktag(1), IdPieces_25, 1) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_82_82 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word WithoutArgNumPieces_28;
        MR_Word WithoutArgNumsPieces_29;
        MR_Word Var_42;

        WithoutArgNumPieces_28 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_82_82, (MR_Word) &parse_tree__parse_item_scalar_common_6[0], WithoutModeArgNums_12);
        WithoutArgNumsPieces_29 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", WithoutArgNumPieces_28);
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[203])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (WithoutArgNumsPieces_29));
        }
        IdPieces_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_82_82, Var_42, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70]));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (IdPieces_25));
      }
      {
        Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[204])));
        MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Pieces_30));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_68));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeKind_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__wrap_nth_2_f_0(
  MR_Word MaybeAddPredix_4,
  MR_Integer ArgNum_5)
{
  {
    MR_bool succeeded = (ArgNum_5 < (MR_Integer) 0);
    MR_Word Component_6;

    if (succeeded)
      switch (MaybeAddPredix_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Component_6 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[199]);
          }
          break;
        case (MR_Integer) 0:
          {
            Component_6 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[200]);
          }
          break;
      }
    else
      {
        Component_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Component_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Component_6, 1) = ((MR_Box) (ArgNum_5));
      }
    return Component_6;
  }
}

static void MR_CALL 
parse_tree__parse_item__classify_type_and_mode_list_4_p_0(
  MR_Integer ArgNum_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word WithModeArgNums0_11;
    MR_Word WithoutModeArgNums0_12;
    MR_Integer Var_16 = (ArgNum_1 + (MR_Integer) 1);

    parse_tree__parse_item__classify_type_and_mode_list_4_p_0(Var_16, Tail_8, &WithModeArgNums0_11, &WithoutModeArgNums0_12);
    if (((MR_tag((MR_Word) Head_7)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNum_1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WithModeArgNums0_11));
      }
      *HeadVar__4_4 = WithoutModeArgNums0_12;
    }
    else
    {
      *HeadVar__3_3 = WithModeArgNums0_11;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNum_1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WithoutModeArgNums0_12));
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
  MR_Integer SeqNum_15,
  MR_Word AllowModeDefn_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
    MR_Word SubTerm_19;
    MR_Word Var_25;

    if (succeeded)
    {
      SubTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1)));
      succeeded = (Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word HeadTerm_20;
      MR_Word BodyTerm_21;
      MR_Word Var_26;
      MR_String Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_22;

      succeeded = (AllowModeDefn_16 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) SubTerm_19)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_19, (MR_Integer) 0)));
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_19, (MR_Integer) 1)));
          Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_19, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
            succeeded = (strcmp(Var_27, (MR_String) "==") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                HeadTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0)));
                Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  BodyTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));
                  Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1)));
                  succeeded = (Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_inst_mode_defn__parse_mode_defn_7_p_0(ModuleName_10, VarSet_11, HeadTerm_20, BodyTerm_21, Context_14, SeqNum_15, MaybeIOM_18);
      else
        parse_tree__parse_item__parse_mode_decl_8_p_0(ModuleName_10, VarSet_11, SubTerm_19, IsInClass_13, Context_14, SeqNum_15, QuantConstrAttrs_17, MaybeIOM_18);
    }
    else
    {
      MR_Word Spec_24;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;

      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[198])));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_56));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
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
  MR_Integer SeqNum_14,
  MR_Word QuantConstrAttrs_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_80_80;
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
    MR_Word MaybeDetism_25;
    MR_Word WithInst_26;

    switch (IsInClass_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          DeclWords_17 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[189]);
        }
        break;
      case (MR_Integer) 1:
        {
          DeclWords_17 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[190]);
        }
        break;
    }
    TypeCtorInfo_80_80 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (DeclWords_17));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[193])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[191])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    DetismContextPieces_18 = mercury__cord__from_list_1_f_0(TypeCtorInfo_80_80, Var_34);
    parse_tree__parse_item__parse_determinism_suffix_5_p_0(VarSet_10, DetismContextPieces_18, Term_11, &BeforeDetismTerm_19, &MaybeMaybeDetism_20);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[196])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[195])));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[194])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    WithInstContextPieces_21 = mercury__cord__from_list_1_f_0(TypeCtorInfo_80_80, Var_42);
    parse_tree__parse_item__parse_with_inst_suffix_5_p_0(VarSet_10, WithInstContextPieces_21, BeforeDetismTerm_19, &BaseTerm_24, &MaybeWithInst_23);
    succeeded = ((MR_tag((MR_Word) MaybeMaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      MaybeDetism_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMaybeDetism_20, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) MaybeWithInst_23)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        WithInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWithInst_23, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word Var_27;
      MR_Word Var_28;

      succeeded = ((MR_tag((MR_Word) MaybeDetism_25)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDetism_25, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) WithInst_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), WithInst_26, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word Spec_30;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_76;

        Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_11);
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[197])));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_69));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Spec_30));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
        }
      }
      else
        parse_tree__parse_item__parse_mode_decl_base_9_p_0(ModuleName_9, VarSet_10, BaseTerm_24, Context_13, SeqNum_14, WithInst_26, MaybeDetism_25, QuantConstrAttrs_15, MaybeIOM_16);
    }
    else
    {
      MR_Word Specs_31;
      MR_Word Var_78;
      MR_Word Var_79;

      Var_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[2], MaybeMaybeDetism_20);
      Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[3], MaybeWithInst_23);
      Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Var_78, Var_79);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_31));
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_mktag((MR_Integer) 0)));
    MR_Word BeforeWithInstTermPrime_11;
    MR_Word InstTerm_12;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_13;

    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
        succeeded = (strcmp(Var_18, (MR_String) "with_inst") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BeforeWithInstTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              InstTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
              Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
              succeeded = (Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeInst_14;

      *BeforeWithInstTerm_9 = BeforeWithInstTermPrime_11;
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarSet_6, ContextPieces_7, InstTerm_12, &MaybeInst_14);
      if (((MR_tag((MR_Word) MaybeInst_14)) == (MR_mktag((MR_Integer) 0))))
        *MaybeWithInst_10 = (MR_Word) MaybeInst_14;
      else
      {
        MR_Word Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_14, (MR_Integer) 0)));
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Inst_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWithInst_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        }
      }
    }
    else
    {
      *BeforeWithInstTerm_9 = Term_8;
      *MaybeWithInst_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[5]);
    }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_mktag((MR_Integer) 0)));
    MR_Word BeforeDetismTermPrime_13;
    MR_Word DetismTerm_14;
    MR_Word Args_11;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0)));
      Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
        succeeded = (strcmp(Var_22, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BeforeDetismTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 0)));
            Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              DetismTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
              succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_16;

      *BeforeDetismTerm_9 = BeforeDetismTermPrime_13;
      succeeded = ((MR_tag((MR_Word) DetismTerm_14)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetismTerm_14, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetismTerm_14, (MR_Integer) 1)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetismTerm_14, (MR_Integer) 2)));
        succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            DetismFunctor_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
            succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(DetismFunctor_15, &Detism_17);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Detism_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeDetism_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word TypeCtorInfo_55_55;
        MR_String DetismTermStr_18;
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_51;

        DetismTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_54_54, VarSet_6, DetismTerm_14);
        TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_28 = mercury__cord__list_1_f_0(TypeCtorInfo_55_55, ContextPieces_7);
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (DetismTermStr_18));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[188])));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
        }
        Pieces_19 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_55_55, Var_28, Var_29);
        Var_46 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_54_54, DetismTerm_14);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Pieces_19));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_44));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeDetism_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
        }
      }
    }
    else
    {
      *BeforeDetismTerm_9 = Term_8;
      *MaybeMaybeDetism_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[4]);
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word Term_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word WithInst_15,
  MR_Word MaybeDet_16,
  MR_Word QuantConstrAttrs_17,
  MR_Word * MaybeIOM_18)
{
  {
    MR_bool succeeded = (WithInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word MaybeSugaredFuncTerm_19;
    MR_Word ReturnTypeTerm_20;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_21;

    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 0)));
        Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 1)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0)));
          succeeded = (strcmp(Var_35, (MR_String) "=") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0)));
              Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0)));
                Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1)));
                succeeded = (Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_22;
      MR_Word Var_23;

      succeeded = ((MR_tag((MR_Word) MaybeSugaredFuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeSugaredFuncTerm_19, (MR_Integer) 0)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeSugaredFuncTerm_19, (MR_Integer) 1)));
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeSugaredFuncTerm_19, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));
          succeeded = (strcmp(Var_40, (MR_String) "") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Spec_25;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_58;

        Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, MaybeSugaredFuncTerm_19);
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[186])));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_51));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
        }
      }
      else
      {
        MR_Word FuncTerm_26;
        MR_Word ContextPieces_27;
        MR_Word MaybeFunctorArgs_28;

        FuncTerm_26 = parse_tree__parse_item__desugar_field_access_1_f_0(MaybeSugaredFuncTerm_19);
        ContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[139]));
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ModuleName_10, FuncTerm_26, VarSet_11, ContextPieces_27, &MaybeFunctorArgs_28);
        if (((MR_tag((MR_Word) MaybeFunctorArgs_28)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFunctorArgs_28, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_29));
          }
        }
        else
        {
          MR_Word Functor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorArgs_28, (MR_Integer) 0)));
          MR_Word ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorArgs_28, (MR_Integer) 1)));

          parse_tree__parse_item__parse_func_mode_decl_11_p_0(Functor_30, ArgTerms_31, ModuleName_10, ReturnTypeTerm_20, Term_12, VarSet_11, MaybeDet_16, Context_13, SeqNum_14, QuantConstrAttrs_17, MaybeIOM_18);
        }
      }
    }
    else
    {
      MR_Word Var_70;
      MR_String Var_71;
      MR_Word Var_32;
      MR_Word Var_33;

      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 0)));
        Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 1)));
        Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_71 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 0)));
          succeeded = (strcmp(Var_71, (MR_String) "") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_89;
        MR_Word Spec_102;

        Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_12);
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[187])));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_102, 2) = ((MR_Box) (Var_82));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Spec_102));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
        }
      }
      else
      {
        MR_Word ContextPieces_109;
        MR_Word MaybeFunctorArgs_110;

        ContextPieces_109 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[143]));
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ModuleName_10, Term_12, VarSet_11, ContextPieces_109, &MaybeFunctorArgs_110);
        if (((MR_tag((MR_Word) MaybeFunctorArgs_110)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word Specs_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFunctorArgs_110, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_103));
          }
        }
        else
        {
          MR_Word Functor_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorArgs_110, (MR_Integer) 0)));
          MR_Word ArgTerms_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorArgs_110, (MR_Integer) 1)));

          parse_tree__parse_item__parse_pred_mode_decl_11_p_0(Functor_104, ArgTerms_105, ModuleName_10, Term_12, VarSet_11, WithInst_15, MaybeDet_16, Context_13, SeqNum_14, QuantConstrAttrs_17, MaybeIOM_18);
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__desugar_field_access_1_f_0(
  MR_Word Term_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word DesugaredTerm_4;
    MR_Word A_5;
    MR_Word Context_7;
    MR_Word Bs_9;
    MR_Word Var_21;
    MR_Word RHS_6;
    MR_Word Var_16;
    MR_String Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_10;
    MR_String FieldName_8;

    if (succeeded)
    {
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
        succeeded = (strcmp(Var_17, (MR_String) "^") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
            Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
              Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
              succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) RHS_6)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_6, (MR_Integer) 0)));
                  Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_6, (MR_Integer) 1)));
                  Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_6, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                    FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
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
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (A_5));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], Bs_9, Var_24);
      {
        DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DesugaredTerm_4, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), DesugaredTerm_4, 1) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), DesugaredTerm_4, 2) = ((MR_Box) (Context_7));
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
      MR_Word Var_13;
      MR_Word Var_14;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
          succeeded = (strcmp(Var_27, (MR_String) ":=") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0)));
              Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));
                Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1)));
                succeeded = (Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) LHS_11)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_11, (MR_Integer) 0)));
                    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_11, (MR_Integer) 1)));
                    Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_11, (MR_Integer) 2)));
                    succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
                      succeeded = (strcmp(Var_32, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0)));
                          Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1)));
                          succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0)));
                            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1)));
                            succeeded = (Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) RHS_43)) == (MR_mktag((MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_43, (MR_Integer) 0)));
                                Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_43, (MR_Integer) 1)));
                                Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_43, (MR_Integer) 2)));
                                succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 0)));
                                if (succeeded)
                                  FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
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
          Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (FunctionName_15));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (X_12));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (A_44));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
        }
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], Bs_48, Var_40);
        {
          DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DesugaredTerm_4, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), DesugaredTerm_4, 1) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), DesugaredTerm_4, 2) = ((MR_Box) (Context_46));
        }
      }
      else
        DesugaredTerm_4 = Term_3;
    }
    return DesugaredTerm_4;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
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
  MR_Integer SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_92_92 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word ArgContextPieces_23;
    MR_Word MaybeArgModes0_24;
    MR_Word RetContextPieces_25;
    MR_Word MaybeRetMode0_26;
    MR_Word QuantContextPieces_27;
    MR_Word MaybeConstraints_28;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word ArgModes0_29;
    MR_Word RetMode0_30;
    MR_Word InstConstraints_33;
    MR_Word Var_31;
    MR_Word Var_32;

    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Functor_12));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[182])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[183])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    ArgContextPieces_23 = mercury__cord__from_list_1_f_0(TypeCtorInfo_92_92, Var_44);
    parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarSet_17, ArgContextPieces_23, ArgTerms_13, &MaybeArgModes0_24);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[185])));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[184])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    RetContextPieces_25 = mercury__cord__from_list_1_f_0(TypeCtorInfo_92_92, Var_54);
    parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarSet_17, RetContextPieces_25, RetModeTerm_15, &MaybeRetMode0_26);
    QuantContextPieces_27 = mercury__cord__from_list_1_f_0(TypeCtorInfo_92_92, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[139]));
    parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_14, VarSet_17, QuantConstrAttrs_21, QuantContextPieces_27, &MaybeConstraints_28);
    succeeded = ((MR_tag((MR_Word) MaybeArgModes0_24)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ArgModes0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgModes0_24, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) MaybeRetMode0_26)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        RetMode0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRetMode0_26, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) MaybeConstraints_28)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_28, (MR_Integer) 0)));
          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_28, (MR_Integer) 1)));
          InstConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_28, (MR_Integer) 2)));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_95_95;
      MR_Word TypeCtorInfo_96_96;
      MR_Word ArgModes_34;
      MR_Word RetMode_35;
      MR_Word InstVarSet_36;
      MR_Word ArgReturnModes_37;
      MR_Word InconsistentVars_38;
      MR_Word MaybeInconsistentSpec_39;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_81;

      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_mode_decl_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (InstConstraints_33));
      }
      TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      mercury__list__map_3_p_0(TypeCtorInfo_95_95, TypeCtorInfo_95_95, Var_77, ArgModes0_29, &ArgModes_34);
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(InstConstraints_33, RetMode0_30, &RetMode_35);
      TypeCtorInfo_96_96 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      mercury__varset__coerce_2_p_0(TypeCtorInfo_96_96, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_17, &InstVarSet_36);
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (RetMode_35));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ArgReturnModes_37 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, ArgModes_34, Var_78);
      parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(ArgReturnModes_37, &InconsistentVars_38);
      Var_81 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_96_96, FullTerm_16);
      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in function mode declaration", Var_81, InstVarSet_36, InconsistentVars_38, &MaybeInconsistentSpec_39);
      if ((MaybeInconsistentSpec_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ItemModeDecl_40;
        MR_Word Item_41;
        MR_Word Var_87;

        {
          ItemModeDecl_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 0) = ((MR_Box) (Functor_12));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[1])));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 2) = ((MR_Box) (ArgReturnModes_37));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 4) = ((MR_Box) (MaybeDetism_18));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 5) = ((MR_Box) (InstVarSet_36));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 6) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(0), ItemModeDecl_40, 7) = ((MR_Box) (SeqNum_20));
        }
        {
          Item_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Item_41, 1) = ((MR_Box) (ItemModeDecl_40));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Item_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_87));
        }
      }
      else
      {
        MR_Word Spec_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInconsistentSpec_39, (MR_Integer) 0)));
        MR_Word Var_82;

        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Spec_42));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_82));
        }
      }
    }
    else
    {
      MR_Word TypeCtorInfo_98_98 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word Specs_43;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;

      Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[8], MaybeArgModes0_24);
      Var_90 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, MaybeRetMode0_26);
      Var_91 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__parse_item_scalar_common_2[0], MaybeConstraints_28);
      Var_89 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_98_98, Var_90, Var_91);
      Specs_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_98_98, Var_88, Var_89);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_43));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
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
  MR_Integer SeqNum_20,
  MR_Word QuantConstrAttrs_21,
  MR_Word * MaybeIOM_22)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_70_70 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word ArgContextPieces_23;
    MR_Word MaybeArgModes0_24;
    MR_Word ContextPieces_25;
    MR_Word MaybeConstraints_26;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word ArgModes0_27;
    MR_Word InstConstraints_30;
    MR_Word Var_28;
    MR_Word Var_29;

    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Functor_12));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[182])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[180])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    ArgContextPieces_23 = mercury__cord__from_list_1_f_0(TypeCtorInfo_70_70, Var_41);
    parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarSet_16, ArgContextPieces_23, ArgTerms_13, &MaybeArgModes0_24);
    ContextPieces_25 = mercury__cord__from_list_1_f_0(TypeCtorInfo_70_70, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[145]));
    parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(ModuleName_14, VarSet_16, QuantConstrAttrs_21, ContextPieces_25, &MaybeConstraints_26);
    succeeded = ((MR_tag((MR_Word) MaybeArgModes0_24)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgModes0_24, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) MaybeConstraints_26)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_26, (MR_Integer) 0)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_26, (MR_Integer) 1)));
        InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_26, (MR_Integer) 2)));
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_73_73;
      MR_Word TypeCtorInfo_74_74;
      MR_Word ArgModes_31;
      MR_Word InstVarSet_32;
      MR_Word InconsistentVars_33;
      MR_Word MaybeInconsistentSpec_34;
      MR_Word Var_61;
      MR_Word Var_63;

      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (InstConstraints_30));
      }
      TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      mercury__list__map_3_p_0(TypeCtorInfo_73_73, TypeCtorInfo_73_73, Var_61, ArgModes0_27, &ArgModes_31);
      TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      mercury__varset__coerce_2_p_0(TypeCtorInfo_74_74, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_16, &InstVarSet_32);
      parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(ArgModes_31, &InconsistentVars_33);
      Var_63 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_74_74, PredModeTerm_15);
      parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in predicate mode declaration", Var_63, InstVarSet_32, InconsistentVars_33, &MaybeInconsistentSpec_34);
      if ((MaybeInconsistentSpec_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word MaybePredOrFunc_35;
        MR_Word ItemModeDecl_37;
        MR_Word Item_38;
        MR_Word Var_67;

        if ((WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybePredOrFunc_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[0]);
        }
        else
          MaybePredOrFunc_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          ItemModeDecl_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 0) = ((MR_Box) (Functor_12));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 1) = ((MR_Box) (MaybePredOrFunc_35));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 2) = ((MR_Box) (ArgModes_31));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 3) = ((MR_Box) (WithInst_17));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 4) = ((MR_Box) (MaybeDet_18));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 5) = ((MR_Box) (InstVarSet_32));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 6) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(0), ItemModeDecl_37, 7) = ((MR_Box) (SeqNum_20));
        }
        {
          Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemModeDecl_37));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Item_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_67));
        }
      }
      else
      {
        MR_Word Spec_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInconsistentSpec_34, (MR_Integer) 0)));
        MR_Word Var_64;

        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
        }
      }
    }
    else
    {
      MR_Word Specs_40;
      MR_Word Var_68;
      MR_Word Var_69;

      Var_68 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[8], MaybeArgModes0_24);
      Var_69 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__parse_item_scalar_common_2[0], MaybeConstraints_26);
      Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Var_68, Var_69);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_40));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_39;

    parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1563__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_39);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_39));
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word QuantConstrAttrs_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeExistClassInstContext_10)
{
  {
    MR_Word TypeInfo_34_34 = (MR_Word) &parse_tree__parse_item_scalar_common_1[9];
    MR_Word TypeCtorInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeCtorInfo_37_37;
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

    Var_25 = mercury__cord__init_0_f_0(TypeInfo_34_34);
    Var_26 = mercury__cord__init_0_f_0(TypeInfo_34_34);
    TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    Var_27 = mercury__cord__init_0_f_0(TypeCtorInfo_35_35);
    TypeInfo_36_36 = (MR_Word) &parse_tree__parse_item_scalar_common_1[7];
    TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    Var_28 = mercury__map__init_0_f_0(TypeInfo_36_36, TypeCtorInfo_37_37);
    Var_29 = mercury__cord__init_0_f_0(TypeCtorInfo_35_35);
    Var_30 = mercury__map__init_0_f_0(TypeInfo_36_36, TypeCtorInfo_37_37);
    parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(ModuleName_6, VarSet_7, QuantConstrAttrs_8, ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Specs_11, Var_25, &_UnivQVarsCord_12, Var_26, &ExistQVarsCord_13, Var_27, &UnivClassConstraints_14, Var_28, &UnivInstConstraints_15, Var_29, &ExistClassConstraints_16, Var_30, &ExistInstConstraints_17);
    ExistQVars0_18 = mercury__cord__list_1_f_0(TypeInfo_34_34, ExistQVarsCord_13);
    mercury__list__map_3_p_0(TypeInfo_34_34, (MR_Word) &parse_tree__parse_item_scalar_common_1[5], (MR_Word) &parse_tree__parse_item_scalar_common_2[1], ExistQVars0_18, &ExistQVars_19);
    if ((Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ClassConstraints_20;
      MR_Word InstConstraints_21;
      MR_Word Var_32;
      MR_Word Var_33;

      Var_32 = mercury__cord__list_1_f_0(TypeCtorInfo_35_35, UnivClassConstraints_14);
      Var_33 = mercury__cord__list_1_f_0(TypeCtorInfo_35_35, ExistClassConstraints_16);
      {
        ClassConstraints_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassConstraints_20, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), ClassConstraints_20, 1) = ((MR_Box) (Var_33));
      }
      InstConstraints_21 = mercury__map__old_merge_2_f_0(TypeInfo_36_36, TypeCtorInfo_37_37, UnivInstConstraints_15, ExistInstConstraints_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *MaybeExistClassInstContext_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExistQVars_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ClassConstraints_20));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (InstConstraints_21));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeExistClassInstContext_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_11));
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
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_Word QuantConstrAttr_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word QuantConstrAttrs_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_UnivClassConstraints_81_81;
      MR_Word STATE_VARIABLE_UnivInstConstraints_83_83;
      MR_Word STATE_VARIABLE_ExistClassConstraints_84_84;
      MR_Word STATE_VARIABLE_ExistInstConstraints_86_86;
      MR_Word STATE_VARIABLE_UnivQVars_107_107;
      MR_Word STATE_VARIABLE_ExistQVars_109_109;
      MR_Word STATE_VARIABLE_Specs_111_111;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_UnivQVars_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExistQVars_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11;
      MR_Word next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13;
      MR_Word next_value_of_HeadVar__15_15;
      MR_Word next_value_of_HeadVar__17_17;

      if (((MR_tag((MR_Word) QuantConstrAttr_45)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ConstraintsTerm_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), QuantConstrAttr_45, (MR_Integer) 1)));
        MR_Word MaybeConstraints_63;
        MR_Word QuantType_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), QuantConstrAttr_45, (MR_Integer) 0)));

        parse_tree__parse_class__parse_class_and_inst_constraints_4_p_0(HeadVar__1_1, HeadVar__2_2, ConstraintsTerm_62, &MaybeConstraints_63);
        if (((MR_tag((MR_Word) MaybeConstraints_63)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word ConstraintSpecs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeConstraints_63, (MR_Integer) 0)));

          STATE_VARIABLE_Specs_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ConstraintSpecs_64, STATE_VARIABLE_Specs_0_5);
          STATE_VARIABLE_UnivClassConstraints_81_81 = STATE_VARIABLE_UnivClassConstraints_0_11;
          STATE_VARIABLE_UnivInstConstraints_83_83 = STATE_VARIABLE_UnivInstConstraints_0_13;
          STATE_VARIABLE_ExistClassConstraints_84_84 = HeadVar__15_15;
          STATE_VARIABLE_ExistInstConstraints_86_86 = HeadVar__17_17;
        }
        else
        {
          MR_Word ClassConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_63, (MR_Integer) 0)));
          MR_Word InstConstraint_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_63, (MR_Integer) 1)));

          switch (QuantType_119) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                MR_Word Var_85;

                Var_85 = mercury__cord__from_list_1_f_0(TypeCtorInfo_126_126, ClassConstraints_65);
                STATE_VARIABLE_ExistClassConstraints_84_84 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_126_126, HeadVar__15_15, Var_85);
                STATE_VARIABLE_ExistInstConstraints_86_86 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, HeadVar__17_17, InstConstraint_66);
                STATE_VARIABLE_UnivClassConstraints_81_81 = STATE_VARIABLE_UnivClassConstraints_0_11;
                STATE_VARIABLE_UnivInstConstraints_83_83 = STATE_VARIABLE_UnivInstConstraints_0_13;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorInfo_129_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                MR_Word Var_82;

                Var_82 = mercury__cord__from_list_1_f_0(TypeCtorInfo_129_129, ClassConstraints_65);
                STATE_VARIABLE_UnivClassConstraints_81_81 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_129_129, STATE_VARIABLE_UnivClassConstraints_0_11, Var_82);
                STATE_VARIABLE_UnivInstConstraints_83_83 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, STATE_VARIABLE_UnivInstConstraints_0_13, InstConstraint_66);
                STATE_VARIABLE_ExistClassConstraints_84_84 = HeadVar__15_15;
                STATE_VARIABLE_ExistInstConstraints_86_86 = HeadVar__17_17;
              }
              break;
          }
          STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_5;
        }
        STATE_VARIABLE_UnivQVars_107_107 = STATE_VARIABLE_UnivQVars_0_7;
        STATE_VARIABLE_ExistQVars_109_109 = STATE_VARIABLE_ExistQVars_0_9;
      }
      else
      {
        MR_Word TypeCtorInfo_120_120;
        MR_Word QuantType_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), QuantConstrAttr_45, (MR_Integer) 0)));
        MR_Word VarsTerm_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), QuantConstrAttr_45, (MR_Integer) 1)));
        MR_Word TailContextPieces_57;
        MR_Word VarsContextPieces_58;
        MR_Word MaybeVars_59;
        MR_Word Var_106;

        switch (QuantType_55) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TailContextPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[155]);
            break;
          case (MR_Integer) 1:
            TailContextPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[158]);
            break;
        }
        TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_106 = mercury__cord__from_list_1_f_0(TypeCtorInfo_120_120, TailContextPieces_57);
        VarsContextPieces_58 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_120_120, HeadVar__4_4, Var_106);
        parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarsTerm_56, HeadVar__2_2, VarsContextPieces_58, &MaybeVars_59);
        if (((MR_tag((MR_Word) MaybeVars_59)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word VarsSpecs_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeVars_59, (MR_Integer) 0)));

          STATE_VARIABLE_Specs_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, VarsSpecs_60, STATE_VARIABLE_Specs_0_5);
          STATE_VARIABLE_UnivQVars_107_107 = STATE_VARIABLE_UnivQVars_0_7;
          STATE_VARIABLE_ExistQVars_109_109 = STATE_VARIABLE_ExistQVars_0_9;
        }
        else
        {
          MR_Word Vars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeVars_59, (MR_Integer) 0)));

          switch (QuantType_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_123_123 = (MR_Word) &parse_tree__parse_item_scalar_common_1[9];
                MR_Word Var_110;

                Var_110 = mercury__cord__from_list_1_f_0(TypeInfo_123_123, Vars_61);
                STATE_VARIABLE_ExistQVars_109_109 = mercury__cord__f_43_43_2_f_0(TypeInfo_123_123, STATE_VARIABLE_ExistQVars_0_9, Var_110);
                STATE_VARIABLE_UnivQVars_107_107 = STATE_VARIABLE_UnivQVars_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_124_124 = (MR_Word) &parse_tree__parse_item_scalar_common_1[9];
                MR_Word Var_108;

                Var_108 = mercury__cord__from_list_1_f_0(TypeInfo_124_124, Vars_61);
                STATE_VARIABLE_UnivQVars_107_107 = mercury__cord__f_43_43_2_f_0(TypeInfo_124_124, STATE_VARIABLE_UnivQVars_0_7, Var_108);
                STATE_VARIABLE_ExistQVars_109_109 = STATE_VARIABLE_ExistQVars_0_9;
              }
              break;
          }
          STATE_VARIABLE_Specs_111_111 = STATE_VARIABLE_Specs_0_5;
        }
        STATE_VARIABLE_UnivClassConstraints_81_81 = STATE_VARIABLE_UnivClassConstraints_0_11;
        STATE_VARIABLE_UnivInstConstraints_83_83 = STATE_VARIABLE_UnivInstConstraints_0_13;
        STATE_VARIABLE_ExistClassConstraints_84_84 = HeadVar__15_15;
        STATE_VARIABLE_ExistInstConstraints_86_86 = HeadVar__17_17;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = QuantConstrAttrs_46;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_111_111;
      next_value_of_STATE_VARIABLE_UnivQVars_0_7 = STATE_VARIABLE_UnivQVars_107_107;
      next_value_of_STATE_VARIABLE_ExistQVars_0_9 = STATE_VARIABLE_ExistQVars_109_109;
      next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11 = STATE_VARIABLE_UnivClassConstraints_81_81;
      next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13 = STATE_VARIABLE_UnivInstConstraints_83_83;
      next_value_of_HeadVar__15_15 = STATE_VARIABLE_ExistClassConstraints_84_84;
      next_value_of_HeadVar__17_17 = STATE_VARIABLE_ExistInstConstraints_86_86;
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
  MR_Word Term_4,
  MR_String Functor_5)
{
  {
    MR_Word Spec_6;
    MR_Word Context_7;
    MR_Word Pieces_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    Context_7 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_4);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (Functor_5));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[18])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Pieces_8));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_21));
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__decl_is_not_an_atom_2_f_0(
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  {
    MR_Word Spec_6;
    MR_Word TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_String TermStr_7;
    MR_Word Context_8;
    MR_Word Pieces_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    TermStr_7 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(TypeCtorInfo_29_29, VarSet_4, (MR_Integer) 0, Term_5);
    Context_8 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_29_29, Term_5);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (TermStr_7));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[16])));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_23));
    }
    return Spec_6;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____decl_in_class_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____decl_in_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____incl_imp_use_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____incl_imp_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____purity_attr_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____purity_attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____quant_constr_attr_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____quant_constr_attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____quantifier_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____quantifier_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_item____Unify____type_mode_list_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_item____Compare____type_mode_list_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
