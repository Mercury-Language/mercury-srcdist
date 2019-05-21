/*
** Automatically generated from `parse_item.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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


/* :- module parse_tree.parse_item. */
/* :- implementation. */

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

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1536__1_2_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_38,
  MR_Word * parse_tree__parse_item__HeadVar__2_39);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1030__1_2_f_0(
  MR_Word parse_tree__parse_item__ContextPieces_19,
  MR_Integer parse_tree__parse_item__LambdaHeadVar__1_58);

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__931__1_2_f_0(
  MR_Word parse_tree__parse_item__ContextPieces_25,
  MR_Integer parse_tree__parse_item__LambdaHeadVar__1_67);

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__792__1_2_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_57,
  MR_Word * parse_tree__parse_item__HeadVar__2_58);

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(
  MR_Word parse_tree__parse_item__DefaultModuleName_5,
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__Term_7,
  MR_Word * parse_tree__parse_item__MaybeModule_8);

static void MR_CALL 
parse_tree__parse_item__parse_module_name_3_p_0(
  MR_Word parse_tree__parse_item__VarSet_4,
  MR_Word parse_tree__parse_item__Term_5,
  MR_Word * parse_tree__parse_item__MaybeModuleName_6);

static void MR_CALL 
parse_tree__parse_item__make_item_avail_use_4_p_0(
  MR_Word parse_tree__parse_item__Context_5,
  MR_Integer parse_tree__parse_item__SeqNum_6,
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_Word * parse_tree__parse_item__Avail_8);

static void MR_CALL 
parse_tree__parse_item__make_item_avail_import_4_p_0(
  MR_Word parse_tree__parse_item__Context_5,
  MR_Integer parse_tree__parse_item__SeqNum_6,
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_Word * parse_tree__parse_item__Avail_8);

static void MR_CALL 
parse_tree__parse_item__make_item_include_4_p_0(
  MR_Word parse_tree__parse_item__Context_5,
  MR_Integer parse_tree__parse_item__SeqNum_6,
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_Word * parse_tree__parse_item__Incl_8);

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__Term_12,
  MR_Word parse_tree__parse_item__IsInClass_13,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25,
  MR_Word * parse_tree__parse_item__MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_item__parse_clause_7_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_clause_7_p_0(
  MR_Word parse_tree__parse_item__ModuleName_8,
  MR_Word parse_tree__parse_item__VarSet0_9,
  MR_Word parse_tree__parse_item__HeadTerm_10,
  MR_Word parse_tree__parse_item__BodyTerm0_11,
  MR_Word parse_tree__parse_item__Context_12,
  MR_Integer parse_tree__parse_item__SeqNum_13,
  MR_Word * parse_tree__parse_item__MaybeIOM_14);

static MR_bool MR_CALL 
parse_tree__parse_item__parse_decl_item_or_marker_8_p_0(
  MR_Word parse_tree__parse_item__ModuleName_9,
  MR_Word parse_tree__parse_item__VarSet_10,
  MR_String parse_tree__parse_item__Functor_11,
  MR_Word parse_tree__parse_item__ArgTerms_12,
  MR_Word parse_tree__parse_item__IsInClass_13,
  MR_Word parse_tree__parse_item__Context_14,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word * parse_tree__parse_item__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(
  MR_Word parse_tree__parse_item__VarSet_9,
  MR_String parse_tree__parse_item__Functor_10,
  MR_Word parse_tree__parse_item__ArgTerms_11,
  MR_Word parse_tree__parse_item__Context_12,
  MR_Integer parse_tree__parse_item__SeqNum_13,
  MR_Word parse_tree__parse_item__PromiseType_14,
  MR_Word * parse_tree__parse_item__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_promise_item_5_p_0(
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__ArgTerms_7,
  MR_Word parse_tree__parse_item__Context_8,
  MR_Integer parse_tree__parse_item__SeqNum_9,
  MR_Word * parse_tree__parse_item__MaybeIOM_10);

static void MR_CALL 
parse_tree__parse_item__parse_version_numbers_marker_6_p_0(
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_String parse_tree__parse_item__Functor_8,
  MR_Word parse_tree__parse_item__ArgTerms_9,
  MR_Word parse_tree__parse_item__Context_10,
  MR_Integer parse_tree__parse_item__SeqNum_11,
  MR_Word * parse_tree__parse_item__MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_item__dummy_term_with_context_2_p_0(
  MR_Word parse_tree__parse_item__Context_3,
  MR_Word * parse_tree__parse_item__Term_4);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(
  MR_Word parse_tree__parse_item__ModuleName_9,
  MR_Word parse_tree__parse_item__VarSet_10,
  MR_String parse_tree__parse_item__Functor_11,
  MR_Word parse_tree__parse_item__ArgTerms_12,
  MR_Word parse_tree__parse_item__Context_13,
  MR_Integer parse_tree__parse_item__SeqNum_14,
  MR_Word parse_tree__parse_item__IIU_15,
  MR_Word * parse_tree__parse_item__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_section_marker_6_p_0(
  MR_String parse_tree__parse_item__Functor_7,
  MR_Word parse_tree__parse_item__ArgTerms_8,
  MR_Word parse_tree__parse_item__Context_9,
  MR_Integer parse_tree__parse_item__SeqNum_10,
  MR_Word parse_tree__parse_item__Section_11,
  MR_Word * parse_tree__parse_item__MaybeIOM_12);

static void MR_CALL 
parse_tree__parse_item__parse_end_module_marker_4_p_0(
  MR_Word parse_tree__parse_item__ArgTerms_5,
  MR_Word parse_tree__parse_item__Context_6,
  MR_Integer parse_tree__parse_item__SeqNum_7,
  MR_Word * parse_tree__parse_item__MaybeIOM_8);

static void MR_CALL 
parse_tree__parse_item__parse_module_marker_4_p_0(
  MR_Word parse_tree__parse_item__ArgTerms_5,
  MR_Word parse_tree__parse_item__Context_6,
  MR_Integer parse_tree__parse_item__SeqNum_7,
  MR_Word * parse_tree__parse_item__MaybeIOM_8);

static void MR_CALL 
parse_tree__parse_item__parse_purity_attr_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__Purity_19,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_27,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_28,
  MR_Word * parse_tree__parse_item__MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_constraint_attr_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__QuantType_19,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * parse_tree__parse_item__MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_quant_attr_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__QuantType_19,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * parse_tree__parse_item__MaybeIOM_22);

static MR_bool MR_CALL 
parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(
  MR_Word parse_tree__parse_item__ModuleName_11,
  MR_Word parse_tree__parse_item__VarSet_12,
  MR_String parse_tree__parse_item__Functor_13,
  MR_Word parse_tree__parse_item__ArgTerms_14,
  MR_Word parse_tree__parse_item__IsInClass_15,
  MR_Word parse_tree__parse_item__Context_16,
  MR_Integer parse_tree__parse_item__SeqNum_17,
  MR_Word parse_tree__parse_item__PurityAttrs0_18,
  MR_Word parse_tree__parse_item__QuantConstrAttrs0_19,
  MR_Word * parse_tree__parse_item__MaybeIOM_20);

static void MR_CALL 
parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__PredOrFunc_19,
  MR_Word parse_tree__parse_item__PurityAttrs_20,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_21,
  MR_Word * parse_tree__parse_item__MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_with_type_suffix_4_p_0(
  MR_Word parse_tree__parse_item__VarSet_5,
  MR_Word parse_tree__parse_item__Term_6,
  MR_Word * parse_tree__parse_item__BeforeWithTypeTerm_7,
  MR_Word * parse_tree__parse_item__MaybeWithType_8);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__Term_12,
  MR_Word parse_tree__parse_item__MaybeDet_13,
  MR_Word parse_tree__parse_item__Context_14,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word parse_tree__parse_item__PurityAttrs_16,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_17,
  MR_Word * parse_tree__parse_item__MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_2_13_p_0(
  MR_Word parse_tree__parse_item__FuncName_14,
  MR_Word parse_tree__parse_item__Args_15,
  MR_Word parse_tree__parse_item__ReturnArg_16,
  MR_Word parse_tree__parse_item__FuncTerm_17,
  MR_Word parse_tree__parse_item__Term_18,
  MR_Word parse_tree__parse_item__VarSet_19,
  MR_Word parse_tree__parse_item__MaybeDetism_20,
  MR_Word parse_tree__parse_item__ExistQVars_21,
  MR_Word parse_tree__parse_item__Constraints_22,
  MR_Word parse_tree__parse_item__Context_23,
  MR_Integer parse_tree__parse_item__SeqNum_24,
  MR_Word parse_tree__parse_item__PurityAttrs_25,
  MR_Word * parse_tree__parse_item__MaybeIOM_26);

static MR_Box MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0(
  MR_Word parse_tree__parse_item__PredOrFunc_13,
  MR_Word parse_tree__parse_item__ModuleName_14,
  MR_Word parse_tree__parse_item__VarSet_15,
  MR_Word parse_tree__parse_item__PredTypeTerm_16,
  MR_Word parse_tree__parse_item__WithType_17,
  MR_Word parse_tree__parse_item__WithInst_18,
  MR_Word parse_tree__parse_item__MaybeDet_19,
  MR_Word parse_tree__parse_item__Context_20,
  MR_Integer parse_tree__parse_item__SeqNum_21,
  MR_Word parse_tree__parse_item__PurityAttrs_22,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_23,
  MR_Word * parse_tree__parse_item__MaybeIOM_24);

static MR_Word MR_CALL 
parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word * parse_tree__parse_item__HeadVar__3_3);

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(
  MR_Word parse_tree__parse_item__TypesAndModes_5,
  MR_Word parse_tree__parse_item__MaybeRetTypeAndMode_6,
  MR_Word parse_tree__parse_item__Context_7,
  MR_Word * parse_tree__parse_item__MaybeKind_8);

static MR_Word MR_CALL 
parse_tree__parse_item__wrap_nth_2_f_0(
  MR_Word parse_tree__parse_item__MaybeAddPredix_4,
  MR_Integer parse_tree__parse_item__ArgNum_5);

static void MR_CALL 
parse_tree__parse_item__classify_type_and_mode_list_4_p_0(
  MR_Integer parse_tree__parse_item__ArgNum_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word * parse_tree__parse_item__HeadVar__3_3,
  MR_Word * parse_tree__parse_item__HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__ArgTerms_12,
  MR_Word parse_tree__parse_item__IsInClass_13,
  MR_Word parse_tree__parse_item__Context_14,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word parse_tree__parse_item__AllowModeDefn_16,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_17,
  MR_Word * parse_tree__parse_item__MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_8_p_0(
  MR_Word parse_tree__parse_item__ModuleName_9,
  MR_Word parse_tree__parse_item__VarSet_10,
  MR_Word parse_tree__parse_item__Term_11,
  MR_Word parse_tree__parse_item__IsInClass_12,
  MR_Word parse_tree__parse_item__Context_13,
  MR_Integer parse_tree__parse_item__SeqNum_14,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_15,
  MR_Word * parse_tree__parse_item__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_item__parse_with_inst_suffix_5_p_0(
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__ContextPieces_7,
  MR_Word parse_tree__parse_item__Term_8,
  MR_Word * parse_tree__parse_item__BeforeWithInstTerm_9,
  MR_Word * parse_tree__parse_item__MaybeWithInst_10);

static void MR_CALL 
parse_tree__parse_item__parse_determinism_suffix_5_p_0(
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__ContextPieces_7,
  MR_Word parse_tree__parse_item__Term_8,
  MR_Word * parse_tree__parse_item__BeforeDetismTerm_9,
  MR_Word * parse_tree__parse_item__MaybeMaybeDetism_10);

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__Term_12,
  MR_Word parse_tree__parse_item__Context_13,
  MR_Integer parse_tree__parse_item__SeqNum_14,
  MR_Word parse_tree__parse_item__WithInst_15,
  MR_Word parse_tree__parse_item__MaybeDet_16,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_17,
  MR_Word * parse_tree__parse_item__MaybeIOM_18);

static MR_Word MR_CALL 
parse_tree__parse_item__desugar_field_access_1_f_0(
  MR_Word parse_tree__parse_item__Term_3);

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0(
  MR_Word parse_tree__parse_item__Functor_12,
  MR_Word parse_tree__parse_item__ArgTerms_13,
  MR_Word parse_tree__parse_item__ModuleName_14,
  MR_Word parse_tree__parse_item__RetModeTerm_15,
  MR_Word parse_tree__parse_item__FullTerm_16,
  MR_Word parse_tree__parse_item__VarSet_17,
  MR_Word parse_tree__parse_item__MaybeDetism_18,
  MR_Word parse_tree__parse_item__Context_19,
  MR_Integer parse_tree__parse_item__SeqNum_20,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_21,
  MR_Word * parse_tree__parse_item__MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0(
  MR_Word parse_tree__parse_item__Functor_12,
  MR_Word parse_tree__parse_item__ArgTerms_13,
  MR_Word parse_tree__parse_item__ModuleName_14,
  MR_Word parse_tree__parse_item__PredModeTerm_15,
  MR_Word parse_tree__parse_item__VarSet_16,
  MR_Word parse_tree__parse_item__WithInst_17,
  MR_Word parse_tree__parse_item__MaybeDet_18,
  MR_Word parse_tree__parse_item__Context_19,
  MR_Integer parse_tree__parse_item__SeqNum_20,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_21,
  MR_Word * parse_tree__parse_item__MaybeIOM_22);

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
  MR_Word parse_tree__parse_item__ModuleName_6,
  MR_Word parse_tree__parse_item__VarSet_7,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_8,
  MR_Word parse_tree__parse_item__ContextPieces_9,
  MR_Word * parse_tree__parse_item__MaybeExistClassInstContext_10);

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3,
  MR_Word parse_tree__parse_item__HeadVar__4_4,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_Specs_6,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_UnivQVars_8,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_ExistQVars_10,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_12,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_14,
  MR_Word parse_tree__parse_item__HeadVar__15_15,
  MR_Word * parse_tree__parse_item__HeadVar__16_16,
  MR_Word parse_tree__parse_item__HeadVar__17_17,
  MR_Word * parse_tree__parse_item__HeadVar__18_18);

static MR_Word MR_CALL 
parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(
  MR_Word parse_tree__parse_item__Term_4,
  MR_String parse_tree__parse_item__Functor_5);

static MR_Word MR_CALL 
parse_tree__parse_item__decl_is_not_an_atom_2_f_0(
  MR_Word parse_tree__parse_item__VarSet_4,
  MR_Word parse_tree__parse_item__Term_5);


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
    ((MR_Box) (&parse_tree__parse_item_scalar_common_5[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the keyword"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the symbol"))
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
    ((MR_Box) (parse_tree__parse_item__parse_clause_7_p_0_1)),
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__parse_item__term__ti_term_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc parse_tree__parse_item__parse_tree__parse_item__du_functor_desc_quant_constr_attr_0_1 = {
  (MR_String) "qca_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_item__parse_tree__parse_item__field_types_quant_constr_attr_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_item__parse_tree__parse_item__du_stag_ordered_quant_constr_attr_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____decl_in_class_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____decl_in_class_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____incl_imp_use_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____incl_imp_use_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____purity_attr_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____purity_attr_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____quant_constr_attr_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____quant_constr_attr_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____quantifier_type_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____quantifier_type_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0_10001(
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_item__succeeded = parse_tree__parse_item____Unify____type_mode_list_kind_0_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), ((MR_Word) parse_tree__parse_item__wrapper_arg_2));
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0_10001(
  MR_Box * parse_tree__parse_item__wrapper_arg_1,
  MR_Box parse_tree__parse_item__wrapper_arg_2,
  MR_Box parse_tree__parse_item__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_item__conv0_HeadVar__1_1;

    {
      parse_tree__parse_item____Compare____type_mode_list_kind_0_0(&parse_tree__parse_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_item__wrapper_arg_2), ((MR_Word) parse_tree__parse_item__wrapper_arg_3));
    }
    *parse_tree__parse_item__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1536__1_2_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_38,
  MR_Word * parse_tree__parse_item__HeadVar__2_39)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_item__HeadVar__1_38, parse_tree__parse_item__HeadVar__2_39);
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1030__1_2_f_0(
  MR_Word parse_tree__parse_item__ContextPieces_19,
  MR_Integer parse_tree__parse_item__LambdaHeadVar__1_58)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__LambdaHeadVar__2_59;
    MR_Word parse_tree__parse_item__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_item__Var_60;
    MR_Word parse_tree__parse_item__Var_61;
    MR_Word parse_tree__parse_item__Var_64;
    MR_Word parse_tree__parse_item__Var_65;

    {
      parse_tree__parse_item__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_65, 1) = ((MR_Box) (parse_tree__parse_item__LambdaHeadVar__1_58));
    }
    {
      parse_tree__parse_item__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_64, 0) = ((MR_Box) (parse_tree__parse_item__Var_65));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[106])));
    }
    {
      parse_tree__parse_item__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[232])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_61, 1) = ((MR_Box) (parse_tree__parse_item__Var_64));
    }
    {
      parse_tree__parse_item__Var_60 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_127_127, parse_tree__parse_item__Var_61);
    }
    {
      parse_tree__parse_item__LambdaHeadVar__2_59 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_127_127, parse_tree__parse_item__ContextPieces_19, parse_tree__parse_item__Var_60);
    }
    return parse_tree__parse_item__LambdaHeadVar__2_59;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__931__1_2_f_0(
  MR_Word parse_tree__parse_item__ContextPieces_25,
  MR_Integer parse_tree__parse_item__LambdaHeadVar__1_67)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__LambdaHeadVar__2_68;
    MR_Word parse_tree__parse_item__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_item__Var_69;
    MR_Word parse_tree__parse_item__Var_70;
    MR_Word parse_tree__parse_item__Var_73;
    MR_Word parse_tree__parse_item__Var_74;

    {
      parse_tree__parse_item__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_74, 1) = ((MR_Box) (parse_tree__parse_item__LambdaHeadVar__1_67));
    }
    {
      parse_tree__parse_item__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_73, 0) = ((MR_Box) (parse_tree__parse_item__Var_74));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[106])));
    }
    {
      parse_tree__parse_item__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[232])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_70, 1) = ((MR_Box) (parse_tree__parse_item__Var_73));
    }
    {
      parse_tree__parse_item__Var_69 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_156_156, parse_tree__parse_item__Var_70);
    }
    {
      parse_tree__parse_item__LambdaHeadVar__2_68 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_156_156, parse_tree__parse_item__ContextPieces_25, parse_tree__parse_item__Var_69);
    }
    return parse_tree__parse_item__LambdaHeadVar__2_68;
  }
}

static void MR_CALL 
parse_tree__parse_item__IntroducedFrom__pred__parse_clause__792__1_2_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_57,
  MR_Word * parse_tree__parse_item__HeadVar__2_58)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_item__HeadVar__1_57, parse_tree__parse_item__HeadVar__2_58);
    }
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____type_mode_list_kind_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Cast_HeadVar1_4, parse_tree__parse_item__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____type_mode_list_kind_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__HeadVar__2_1 == parse_tree__parse_item__HeadVar__2_2);

    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quantifier_type_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Cast_HeadVar1_4, parse_tree__parse_item__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quantifier_type_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__HeadVar__2_1 == parse_tree__parse_item__HeadVar__2_2);

    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____quant_constr_attr_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__CastX_22 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__CastY_23 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    parse_tree__parse_item__succeeded = (parse_tree__parse_item__CastX_22 == parse_tree__parse_item__CastY_23);
    if (parse_tree__parse_item__succeeded)
      *parse_tree__parse_item__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__parse_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_item__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_item__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__parse_item__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__Var_21;
            MR_Integer parse_tree__parse_item__Var_32 = (MR_Integer) parse_tree__parse_item__Var_29;
            MR_Integer parse_tree__parse_item__Var_33 = (MR_Integer) parse_tree__parse_item__ArgY1_18;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_item__Var_21, parse_tree__parse_item__Var_32, parse_tree__parse_item__Var_33);
            }
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_21 == (MR_Integer) 0);
            parse_tree__parse_item__succeeded = !(parse_tree__parse_item__succeeded);
            if (parse_tree__parse_item__succeeded)
              *parse_tree__parse_item__HeadVar__1_1 = parse_tree__parse_item__Var_21;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], parse_tree__parse_item__HeadVar__1_1, ((MR_Box) (parse_tree__parse_item__Var_28)), ((MR_Box) (parse_tree__parse_item__ArgY2_20)));
                }
              }
          }
        else
          *parse_tree__parse_item__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word parse_tree__parse_item__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_item__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *parse_tree__parse_item__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word parse_tree__parse_item__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__Var_8;
            MR_Integer parse_tree__parse_item__Var_34 = (MR_Integer) parse_tree__parse_item__Var_31;
            MR_Integer parse_tree__parse_item__Var_35 = (MR_Integer) parse_tree__parse_item__ArgY1_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_item__Var_8, parse_tree__parse_item__Var_34, parse_tree__parse_item__Var_35);
            }
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_8 == (MR_Integer) 0);
            parse_tree__parse_item__succeeded = !(parse_tree__parse_item__succeeded);
            if (parse_tree__parse_item__succeeded)
              *parse_tree__parse_item__HeadVar__1_1 = parse_tree__parse_item__Var_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], parse_tree__parse_item__HeadVar__1_1, ((MR_Box) (parse_tree__parse_item__Var_30)), ((MR_Box) (parse_tree__parse_item__ArgY2_7)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____quant_constr_attr_0_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__CastX_11 = (MR_Integer) parse_tree__parse_item__HeadVar__1_1;
    MR_Integer parse_tree__parse_item__CastY_12 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;

    parse_tree__parse_item__succeeded = (parse_tree__parse_item__CastX_11 == parse_tree__parse_item__CastY_12);
    if (parse_tree__parse_item__succeeded)
      parse_tree__parse_item__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__parse_item__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_item__TypeInfo_13_13;
        MR_Word parse_tree__parse_item__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__ArgY1_8;
        MR_Word parse_tree__parse_item__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__ArgY2_10;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__parse_item__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 1)));
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__ArgX1_7 == parse_tree__parse_item__ArgY1_8);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__TypeInfo_13_13 = (MR_Word) &parse_tree__parse_item_scalar_common_1[0];
                {
                  parse_tree__parse_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_item__TypeInfo_13_13, ((MR_Box) (parse_tree__parse_item__ArgX2_9)), ((MR_Box) (parse_tree__parse_item__ArgY2_10)));
                }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__TypeInfo_14_14;
        MR_Word parse_tree__parse_item__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__ArgY1_4;
        MR_Word parse_tree__parse_item__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__ArgY2_6;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__parse_item__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 1)));
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__ArgX1_3 == parse_tree__parse_item__ArgY1_4);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__TypeInfo_14_14 = (MR_Word) &parse_tree__parse_item_scalar_common_1[0];
                {
                  parse_tree__parse_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_item__TypeInfo_14_14, ((MR_Box) (parse_tree__parse_item__ArgX2_5)), ((MR_Box) (parse_tree__parse_item__ArgY2_6)));
                }
              }
          }
      }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____purity_attr_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__CastX_6 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__CastY_7 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    parse_tree__parse_item__succeeded = (parse_tree__parse_item__CastX_6 == parse_tree__parse_item__CastY_7);
    if (parse_tree__parse_item__succeeded)
      *parse_tree__parse_item__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__parse_item__ArgX1_4 = (MR_Word) parse_tree__parse_item__HeadVar__2_2;
        MR_Word parse_tree__parse_item__ArgY1_5 = (MR_Word) parse_tree__parse_item__HeadVar__3_3;
        MR_Integer parse_tree__parse_item__Var_9 = (MR_Integer) parse_tree__parse_item__ArgX1_4;
        MR_Integer parse_tree__parse_item__Var_10 = (MR_Integer) parse_tree__parse_item__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Var_9, parse_tree__parse_item__Var_10);
        }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____purity_attr_0_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__CastX_5 = (MR_Integer) parse_tree__parse_item__HeadVar__1_1;
    MR_Integer parse_tree__parse_item__CastY_6 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;

    parse_tree__parse_item__succeeded = (parse_tree__parse_item__CastX_5 == parse_tree__parse_item__CastY_6);
    if (parse_tree__parse_item__succeeded)
      parse_tree__parse_item__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__parse_item__ArgX1_3 = (MR_Word) parse_tree__parse_item__HeadVar__1_1;
        MR_Word parse_tree__parse_item__ArgY1_4 = (MR_Word) parse_tree__parse_item__HeadVar__2_2;

        parse_tree__parse_item__succeeded = (parse_tree__parse_item__ArgX1_3 == parse_tree__parse_item__ArgY1_4);
      }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_allow_mode_defn_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Cast_HeadVar1_4, parse_tree__parse_item__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_allow_mode_defn_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__HeadVar__2_1 == parse_tree__parse_item__HeadVar__2_2);

    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____maybe_add_the_prefix_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Cast_HeadVar1_4, parse_tree__parse_item__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____maybe_add_the_prefix_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__HeadVar__2_1 == parse_tree__parse_item__HeadVar__2_2);

    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____incl_imp_use_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Cast_HeadVar1_4, parse_tree__parse_item__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____incl_imp_use_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__HeadVar__2_1 == parse_tree__parse_item__HeadVar__2_2);

    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item____Compare____decl_in_class_0_0(
  MR_Word * parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_item__HeadVar__2_2;
    MR_Integer parse_tree__parse_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_item__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__Cast_HeadVar1_4, parse_tree__parse_item__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item____Unify____decl_in_class_0_0(
  MR_Word parse_tree__parse_item__HeadVar__2_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__HeadVar__2_1 == parse_tree__parse_item__HeadVar__2_2);

    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(
  MR_Word parse_tree__parse_item__DefaultModuleName_5,
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__Term_7,
  MR_Word * parse_tree__parse_item__MaybeModule_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
      {
        parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__parse_item__DefaultModuleName_5, parse_tree__parse_item__VarSet_6, parse_tree__parse_item__Term_7, parse_tree__parse_item__MaybeModule_8);
      }
    else
      {
        MR_Word parse_tree__parse_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Term_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__Spec_12;
        MR_Word parse_tree__parse_item__Var_29;
        MR_Word parse_tree__parse_item__Var_30;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Term_7, (MR_Integer) 0)));

        {
          parse_tree__parse_item__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_30, 0) = ((MR_Box) (parse_tree__parse_item__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[231])));
        }
        {
          parse_tree__parse_item__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, 0) = ((MR_Box) (parse_tree__parse_item__Var_30));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_12, 2) = ((MR_Box) (parse_tree__parse_item__Var_29));
        }
        {
          parse_tree__parse_item__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Spec_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeModule_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_35));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_name_3_p_0(
  MR_Word parse_tree__parse_item__VarSet_4,
  MR_Word parse_tree__parse_item__Term_5,
  MR_Word * parse_tree__parse_item__MaybeModuleName_6)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      parse_tree__parse_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__VarSet_4, parse_tree__parse_item__Term_5, parse_tree__parse_item__MaybeModuleName_6);
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__make_item_avail_use_4_p_0(
  MR_Word parse_tree__parse_item__Context_5,
  MR_Integer parse_tree__parse_item__SeqNum_6,
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_Word * parse_tree__parse_item__Avail_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__AvailUseInfo_9;

    {
      parse_tree__parse_item__AvailUseInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailUseInfo_9, 0) = ((MR_Box) (parse_tree__parse_item__ModuleName_7));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailUseInfo_9, 1) = ((MR_Box) (parse_tree__parse_item__Context_5));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailUseInfo_9, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_6));
    }
    *parse_tree__parse_item__Avail_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_item__AvailUseInfo_9);
  }
}

static void MR_CALL 
parse_tree__parse_item__make_item_avail_import_4_p_0(
  MR_Word parse_tree__parse_item__Context_5,
  MR_Integer parse_tree__parse_item__SeqNum_6,
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_Word * parse_tree__parse_item__Avail_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__AvailImportInfo_9;

    {
      parse_tree__parse_item__AvailImportInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailImportInfo_9, 0) = ((MR_Box) (parse_tree__parse_item__ModuleName_7));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailImportInfo_9, 1) = ((MR_Box) (parse_tree__parse_item__Context_5));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailImportInfo_9, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_6));
    }
    *parse_tree__parse_item__Avail_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_item__AvailImportInfo_9);
  }
}

static void MR_CALL 
parse_tree__parse_item__make_item_include_4_p_0(
  MR_Word parse_tree__parse_item__Context_5,
  MR_Integer parse_tree__parse_item__SeqNum_6,
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_Word * parse_tree__parse_item__Incl_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__parse_item__Incl_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_item__Context_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_item__parse_class_method_decl_4_p_0(
  MR_Word parse_tree__parse_item__ModuleName_5,
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__Term_7,
  MR_Word * parse_tree__parse_item__MaybeClassMethod_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TermContext_9;
    MR_Word parse_tree__parse_item__MaybeIOM_10;
    MR_Word parse_tree__parse_item__Var_36;
    MR_Word parse_tree__parse_item__Var_37;

    {
      parse_tree__parse_item__TermContext_9 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__Term_7);
    }
    {
      parse_tree__parse_item__Var_36 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
    }
    {
      parse_tree__parse_item__Var_37 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
    }
    {
      parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(parse_tree__parse_item__ModuleName_5, parse_tree__parse_item__VarSet_6, parse_tree__parse_item__Term_7, (MR_Integer) 0, (MR_Integer) -1, parse_tree__parse_item__Var_36, parse_tree__parse_item__Var_37, &parse_tree__parse_item__MaybeIOM_10);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeIOM_10)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_item__MaybeClassMethod_8 = (MR_Word) parse_tree__parse_item__MaybeIOM_10;
    else
      {
        MR_Word parse_tree__parse_item__IOM_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeIOM_10, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__ItemPredDecl_13;
        MR_Word parse_tree__parse_item__Var_38;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__IOM_12)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__IOM_12, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_item__Var_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_38, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              parse_tree__parse_item__ItemPredDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_38, (MR_Integer) 1)));
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__PorF_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__ArgDecls_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 2)));
            MR_Word parse_tree__parse_item__WithType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 3)));
            MR_Word parse_tree__parse_item__WithInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 4)));
            MR_Word parse_tree__parse_item__MaybeDetism_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 5)));
            MR_Word parse_tree__parse_item__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 7)));
            MR_Word parse_tree__parse_item__InstVarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 8)));
            MR_Word parse_tree__parse_item__ExistQVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 9)));
            MR_Word parse_tree__parse_item__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 10)));
            MR_Word parse_tree__parse_item__Constraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 11)));
            MR_Word parse_tree__parse_item__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 12)));
            MR_Word parse_tree__parse_item__ClassMethod_28;
            MR_Word parse_tree__parse_item___Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 6)));
            MR_Integer parse_tree__parse_item___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_13, (MR_Integer) 13)));

            {
              parse_tree__parse_item__ClassMethod_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 0) = ((MR_Box) (parse_tree__parse_item__Name_14));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 1) = ((MR_Box) (parse_tree__parse_item__PorF_15));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 2) = ((MR_Box) (parse_tree__parse_item__ArgDecls_16));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 3) = ((MR_Box) (parse_tree__parse_item__WithType_17));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 4) = ((MR_Box) (parse_tree__parse_item__WithInst_18));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 5) = ((MR_Box) (parse_tree__parse_item__MaybeDetism_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 6) = ((MR_Box) (parse_tree__parse_item__TypeVarSet_21));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 7) = ((MR_Box) (parse_tree__parse_item__InstVarSet_22));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 8) = ((MR_Box) (parse_tree__parse_item__ExistQVars_23));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 9) = ((MR_Box) (parse_tree__parse_item__Purity_24));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 10) = ((MR_Box) (parse_tree__parse_item__Constraints_25));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassMethod_28, 11) = ((MR_Box) (parse_tree__parse_item__Context_26));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeClassMethod_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__ClassMethod_28));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__ItemModeDecl_29;
            MR_Word parse_tree__parse_item__Var_39;

            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__IOM_12)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__IOM_12, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_item__Var_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_39, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (parse_tree__parse_item__succeeded)
                  parse_tree__parse_item__ItemModeDecl_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_39, (MR_Integer) 1)));
              }
            if (parse_tree__parse_item__succeeded)
              {
                MR_Word parse_tree__parse_item__MaybePorF_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 1)));
                MR_Word parse_tree__parse_item__ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 2)));
                MR_Word parse_tree__parse_item__Name_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 0)));
                MR_Word parse_tree__parse_item__WithInst_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 3)));
                MR_Word parse_tree__parse_item__MaybeDetism_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 4)));
                MR_Word parse_tree__parse_item__InstVarSet_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 5)));
                MR_Word parse_tree__parse_item__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 6)));
                MR_Word parse_tree__parse_item__ClassMethod_65;
                MR_Integer parse_tree__parse_item___SeqNum_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_29, (MR_Integer) 7)));

                {
                  parse_tree__parse_item__ClassMethod_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 0) = ((MR_Box) (parse_tree__parse_item__Name_59));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 1) = ((MR_Box) (parse_tree__parse_item__MaybePorF_30));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 2) = ((MR_Box) (parse_tree__parse_item__ArgModes_31));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 3) = ((MR_Box) (parse_tree__parse_item__WithInst_60));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 4) = ((MR_Box) (parse_tree__parse_item__MaybeDetism_61));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 5) = ((MR_Box) (parse_tree__parse_item__InstVarSet_62));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__ClassMethod_65, 6) = ((MR_Box) (parse_tree__parse_item__Context_63));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_item__MaybeClassMethod_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__ClassMethod_65));
                }
              }
            else
              {
                MR_Word parse_tree__parse_item__Spec_33;
                MR_Word parse_tree__parse_item__Var_50;
                MR_Word parse_tree__parse_item__Var_51;
                MR_Word parse_tree__parse_item__Var_56;

                {
                  parse_tree__parse_item__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__TermContext_9));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[230])));
                }
                {
                  parse_tree__parse_item__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_50, 0) = ((MR_Box) (parse_tree__parse_item__Var_51));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_item__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_33, 2) = ((MR_Box) (parse_tree__parse_item__Var_50));
                }
                {
                  parse_tree__parse_item__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, 0) = ((MR_Box) (parse_tree__parse_item__Spec_33));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeClassMethod_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_56));
                }
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__Term_12,
  MR_Word parse_tree__parse_item__IsInClass_13,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25,
  MR_Word * parse_tree__parse_item__MaybeIOM_18)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_item__Functor_19;
    MR_Word parse_tree__parse_item__ArgTerms_20;
    MR_Word parse_tree__parse_item__FunctorContext_21;
    MR_Word parse_tree__parse_item__Var_26;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 0)));
        parse_tree__parse_item__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 1)));
        parse_tree__parse_item__FunctorContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_26)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          parse_tree__parse_item__Functor_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_26, (MR_Integer) 0)));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__MaybeIOMPrime_22;
        MR_Integer parse_tree__parse_item__slot_0;
        MR_String parse_tree__parse_item__str_1;

        /* hashed string jump switch */
        /* compute the hash value of the input string */
        parse_tree__parse_item__slot_0 = ((MR_hash_string6(parse_tree__parse_item__Functor_19)) & (MR_Integer) 31);
        /* no collisions; no hash chain loop */
        /* lookup the string for this hash slot */
        parse_tree__parse_item__str_1 = ((&parse_tree__parse_item_vector_common_7[32 + parse_tree__parse_item__slot_0]))->parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;
        /* did we find a match? */
        if ((((parse_tree__parse_item__str_1 != NULL)) && ((strcmp(parse_tree__parse_item__str_1, parse_tree__parse_item__Functor_19) == 0))))
          {
            /* we found a match; dispatch to the corresponding code */
            switch (parse_tree__parse_item__slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  /* case "semipure" */
                  {
                    parse_tree__parse_item__parse_purity_attr_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25, &parse_tree__parse_item__MaybeIOMPrime_22);
                  }
                  parse_tree__parse_item__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  /* case "impure" */
                  {
                    parse_tree__parse_item__parse_purity_attr_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 2, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25, &parse_tree__parse_item__MaybeIOMPrime_22);
                  }
                  parse_tree__parse_item__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  /* case "func" */
                  {
                    MR_Word parse_tree__parse_item__Var_50;
                    MR_Word parse_tree__parse_item__Var_51;

                    {
                      parse_tree__parse_item__Var_50 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24);
                    }
                    {
                      parse_tree__parse_item__Var_51 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25);
                    }
                    {
                      parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__Var_50, parse_tree__parse_item__Var_51, &parse_tree__parse_item__MaybeIOMPrime_22);
                    }
                    parse_tree__parse_item__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  /* case "=>" */
                  {
                    parse_tree__parse_item__parse_constraint_attr_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25, &parse_tree__parse_item__MaybeIOMPrime_22);
                  }
                  parse_tree__parse_item__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 16:
                {
                  /* case "some" */
                  {
                    parse_tree__parse_item__parse_quant_attr_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25, &parse_tree__parse_item__MaybeIOMPrime_22);
                  }
                  parse_tree__parse_item__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 17:
                {
                  /* case "mode" */
                  {
                    MR_Word parse_tree__parse_item__MaybeIOM0_42;
                    MR_Word parse_tree__parse_item__Var_53;

                    {
                      parse_tree__parse_item__Var_53 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25);
                    }
                    {
                      parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__Var_53, &parse_tree__parse_item__MaybeIOM0_42);
                    }
                    {
                      parse_tree__parse_item__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24);
                    }
                    if (parse_tree__parse_item__succeeded)
                      parse_tree__parse_item__MaybeIOMPrime_22 = parse_tree__parse_item__MaybeIOM0_42;
                    else
                      {
                        MR_Word parse_tree__parse_item__Spec_44;
                        MR_Word parse_tree__parse_item__Var_64;
                        MR_Word parse_tree__parse_item__Var_65;

                        {
                          parse_tree__parse_item__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_65, 0) = ((MR_Box) (parse_tree__parse_item__FunctorContext_21));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[219])));
                        }
                        {
                          parse_tree__parse_item__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_64, 0) = ((MR_Box) (parse_tree__parse_item__Var_65));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_item__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_44, 2) = ((MR_Box) (parse_tree__parse_item__Var_64));
                        }
                        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeIOM0_42)) == (MR_mktag((MR_Integer) 0))))
                          {
                            MR_Word parse_tree__parse_item__Specs0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeIOM0_42, (MR_Integer) 0)));
                            MR_Word parse_tree__parse_item__Var_70;

                            {
                              parse_tree__parse_item__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_70, 0) = ((MR_Box) (parse_tree__parse_item__Spec_44));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_70, 1) = ((MR_Box) (parse_tree__parse_item__Specs0_46));
                            }
                            {
                              parse_tree__parse_item__MaybeIOMPrime_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeIOMPrime_22, 0) = ((MR_Box) (parse_tree__parse_item__Var_70));
                            }
                          }
                        else
                          {
                            MR_Word parse_tree__parse_item__Var_71;

                            {
                              parse_tree__parse_item__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_71, 0) = ((MR_Box) (parse_tree__parse_item__Spec_44));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              parse_tree__parse_item__MaybeIOMPrime_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeIOMPrime_22, 0) = ((MR_Box) (parse_tree__parse_item__Var_71));
                            }
                          }
                      }
                    parse_tree__parse_item__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 26:
                {
                  /* case "all" */
                  {
                    parse_tree__parse_item__parse_quant_attr_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25, &parse_tree__parse_item__MaybeIOMPrime_22);
                  }
                  parse_tree__parse_item__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 27:
                {
                  /* case "<=" */
                  {
                    parse_tree__parse_item__parse_constraint_attr_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25, &parse_tree__parse_item__MaybeIOMPrime_22);
                  }
                  parse_tree__parse_item__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 31:
                {
                  /* case "pred" */
                  {
                    MR_Word parse_tree__parse_item__Var_80;
                    MR_Word parse_tree__parse_item__Var_81;

                    {
                      parse_tree__parse_item__Var_80 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_24);
                    }
                    {
                      parse_tree__parse_item__Var_81 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_25);
                    }
                    {
                      parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Functor_19, parse_tree__parse_item__ArgTerms_20, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__FunctorContext_21, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__Var_80, parse_tree__parse_item__Var_81, &parse_tree__parse_item__MaybeIOMPrime_22);
                    }
                    parse_tree__parse_item__succeeded = MR_TRUE;
                  }
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
        parse_tree__parse_item__succeeded = MR_FALSE;
      label_0:;
        if (parse_tree__parse_item__succeeded)
          *parse_tree__parse_item__MaybeIOM_18 = parse_tree__parse_item__MaybeIOMPrime_22;
        else
          {
            MR_Word parse_tree__parse_item__Spec_23;
            MR_Word parse_tree__parse_item__Var_27;

            {
              parse_tree__parse_item__Spec_23 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(parse_tree__parse_item__Term_12, parse_tree__parse_item__Functor_19);
            }
            {
              parse_tree__parse_item__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_27, 0) = ((MR_Box) (parse_tree__parse_item__Spec_23));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_27));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Var_29;
        MR_Word parse_tree__parse_item__Spec_31;

        {
          parse_tree__parse_item__Spec_31 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(parse_tree__parse_item__VarSet_11, parse_tree__parse_item__Term_12);
        }
        {
          parse_tree__parse_item__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, 0) = ((MR_Box) (parse_tree__parse_item__Spec_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_29));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_item__parse_item_or_marker_5_p_0(
  MR_Word parse_tree__parse_item__ModuleName_6,
  MR_Word parse_tree__parse_item__VarSet_7,
  MR_Word parse_tree__parse_item__Term_8,
  MR_Integer parse_tree__parse_item__SeqNum_9,
  MR_Word * parse_tree__parse_item__MaybeIOM_10)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_item__DeclTerm_11;
    MR_Word parse_tree__parse_item__Var_27;
    MR_String parse_tree__parse_item__Var_28;
    MR_Word parse_tree__parse_item__Var_29;
    MR_Word parse_tree__parse_item__Var_30;
    MR_Word parse_tree__parse_item___DeclContext_12;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 0)));
        parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 1)));
        parse_tree__parse_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_27)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_27, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_28, (MR_String) ":-") == 0);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_29)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, (MR_Integer) 0)));
                    parse_tree__parse_item__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, (MR_Integer) 1)));
                    parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_String parse_tree__parse_item__Functor_13;
        MR_Word parse_tree__parse_item__ArgTerms_14;
        MR_Word parse_tree__parse_item__Context_15;
        MR_Word parse_tree__parse_item__Var_31;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__DeclTerm_11)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__DeclTerm_11, (MR_Integer) 0)));
            parse_tree__parse_item__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__DeclTerm_11, (MR_Integer) 1)));
            parse_tree__parse_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__DeclTerm_11, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_31)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              parse_tree__parse_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_31, (MR_Integer) 0)));
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__MaybeIOMPrime_16;

            {
              parse_tree__parse_item__succeeded = parse_tree__parse_item__parse_decl_item_or_marker_8_p_0(parse_tree__parse_item__ModuleName_6, parse_tree__parse_item__VarSet_7, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, (MR_Integer) 1, parse_tree__parse_item__Context_15, parse_tree__parse_item__SeqNum_9, &parse_tree__parse_item__MaybeIOMPrime_16);
            }
            if (parse_tree__parse_item__succeeded)
              *parse_tree__parse_item__MaybeIOM_10 = parse_tree__parse_item__MaybeIOMPrime_16;
            else
              {
                MR_Word parse_tree__parse_item__Spec_17;
                MR_Word parse_tree__parse_item__Var_33;
                MR_Word parse_tree__parse_item__Context_55;
                MR_Word parse_tree__parse_item__Pieces_56;
                MR_Word parse_tree__parse_item__Var_59;
                MR_Word parse_tree__parse_item__Var_60;
                MR_Word parse_tree__parse_item__Var_69;
                MR_Word parse_tree__parse_item__Var_70;
                MR_Word parse_tree__parse_item__Var_71;
                MR_Word parse_tree__parse_item__Var_72;

                {
                  parse_tree__parse_item__Context_55 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__Term_8);
                }
                {
                  parse_tree__parse_item__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_60, 1) = ((MR_Box) (parse_tree__parse_item__Functor_13));
                }
                {
                  parse_tree__parse_item__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_59, 0) = ((MR_Box) (parse_tree__parse_item__Var_60));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[18])));
                }
                {
                  parse_tree__parse_item__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_56, 1) = ((MR_Box) (parse_tree__parse_item__Var_59));
                }
                {
                  parse_tree__parse_item__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_72, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_56));
                }
                {
                  parse_tree__parse_item__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_71, 0) = ((MR_Box) (parse_tree__parse_item__Var_72));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_item__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_70, 0) = ((MR_Box) (parse_tree__parse_item__Context_55));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_70, 1) = ((MR_Box) (parse_tree__parse_item__Var_71));
                }
                {
                  parse_tree__parse_item__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_69, 0) = ((MR_Box) (parse_tree__parse_item__Var_70));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_item__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_17, 2) = ((MR_Box) (parse_tree__parse_item__Var_69));
                }
                {
                  parse_tree__parse_item__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 0) = ((MR_Box) (parse_tree__parse_item__Spec_17));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_33));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_item__Var_35;
            MR_Word parse_tree__parse_item__Spec_50;

            {
              parse_tree__parse_item__Spec_50 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(parse_tree__parse_item__VarSet_7, parse_tree__parse_item__Term_8);
            }
            {
              parse_tree__parse_item__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Spec_50));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_35));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__DCGHeadTerm_18;
        MR_Word parse_tree__parse_item__DCGBodyTerm_19;
        MR_Word parse_tree__parse_item__DCGContext_20;
        MR_Word parse_tree__parse_item__Var_37;
        MR_String parse_tree__parse_item__Var_38;
        MR_Word parse_tree__parse_item__Var_39;
        MR_Word parse_tree__parse_item__Var_40;
        MR_Word parse_tree__parse_item__Var_41;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 0)));
            parse_tree__parse_item__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 1)));
            parse_tree__parse_item__DCGContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_37)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_38, (MR_String) "-->") == 0);
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_39)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__DCGHeadTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_39, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_39, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_40)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__DCGBodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, (MR_Integer) 0)));
                            parse_tree__parse_item__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, (MR_Integer) 1)));
                            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(parse_tree__parse_item__ModuleName_6, parse_tree__parse_item__VarSet_7, parse_tree__parse_item__DCGHeadTerm_18, parse_tree__parse_item__DCGBodyTerm_19, parse_tree__parse_item__DCGContext_20, parse_tree__parse_item__SeqNum_9, parse_tree__parse_item__MaybeIOM_10);
          }
        else
          {
            MR_Word parse_tree__parse_item__HeadTerm_24;
            MR_Word parse_tree__parse_item__BodyTerm_25;
            MR_Word parse_tree__parse_item__ClauseContext_26;
            MR_Word parse_tree__parse_item__HeadTermPrime_21;
            MR_Word parse_tree__parse_item__BodyTermPrime_22;
            MR_Word parse_tree__parse_item__TermContext_23;
            MR_Word parse_tree__parse_item__Var_42;
            MR_String parse_tree__parse_item__Var_43;
            MR_Word parse_tree__parse_item__Var_44;
            MR_Word parse_tree__parse_item__Var_45;
            MR_Word parse_tree__parse_item__Var_46;

            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 0)));
                parse_tree__parse_item__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 1)));
                parse_tree__parse_item__TermContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 2)));
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_42)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_42, (MR_Integer) 0)));
                    parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_43, (MR_String) ":-") == 0);
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_44)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__HeadTermPrime_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, (MR_Integer) 0)));
                            parse_tree__parse_item__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, (MR_Integer) 1)));
                            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_45)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_item__succeeded)
                              {
                                parse_tree__parse_item__BodyTermPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_45, (MR_Integer) 0)));
                                parse_tree__parse_item__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_45, (MR_Integer) 1)));
                                parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__HeadTerm_24 = parse_tree__parse_item__HeadTermPrime_21;
                parse_tree__parse_item__BodyTerm_25 = parse_tree__parse_item__BodyTermPrime_22;
                parse_tree__parse_item__ClauseContext_26 = parse_tree__parse_item__TermContext_23;
              }
            else
              {
                parse_tree__parse_item__HeadTerm_24 = parse_tree__parse_item__Term_8;
                {
                  parse_tree__parse_item__ClauseContext_26 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__HeadTerm_24);
                }
                {
                  parse_tree__parse_item__BodyTerm_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__BodyTerm_25, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[27]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__BodyTerm_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__BodyTerm_25, 2) = ((MR_Box) (parse_tree__parse_item__ClauseContext_26));
                }
              }
            {
              parse_tree__parse_item__parse_clause_7_p_0(parse_tree__parse_item__ModuleName_6, parse_tree__parse_item__VarSet_7, parse_tree__parse_item__HeadTerm_24, parse_tree__parse_item__BodyTerm_25, parse_tree__parse_item__ClauseContext_26, parse_tree__parse_item__SeqNum_9, parse_tree__parse_item__MaybeIOM_10);
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_clause_7_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_HeadVar__2_58;

    {
      parse_tree__parse_item__IntroducedFrom__pred__parse_clause__792__1_2_p_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv0_HeadVar__2_58);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__2_58));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_clause_7_p_0(
  MR_Word parse_tree__parse_item__ModuleName_8,
  MR_Word parse_tree__parse_item__VarSet0_9,
  MR_Word parse_tree__parse_item__HeadTerm_10,
  MR_Word parse_tree__parse_item__BodyTerm0_11,
  MR_Word parse_tree__parse_item__Context_12,
  MR_Integer parse_tree__parse_item__SeqNum_13,
  MR_Word * parse_tree__parse_item__MaybeIOM_14)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_item__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word parse_tree__parse_item__TypeCtorInfo_55_55;
    MR_Word parse_tree__parse_item__ProgVarSet0_15;
    MR_Word parse_tree__parse_item__GoalContextPieces_16;
    MR_Word parse_tree__parse_item__MaybeBodyGoal_17;
    MR_Word parse_tree__parse_item__ProgVarSet_18;
    MR_Word parse_tree__parse_item__VarSet_19;
    MR_Word parse_tree__parse_item__MaybeFuncResultTerm_24;
    MR_Word parse_tree__parse_item__MaybeFunctor_26;
    MR_Word parse_tree__parse_item__FuncResultTerm0_21;
    MR_Word parse_tree__parse_item__FuncHeadTerm_23;
    MR_Word parse_tree__parse_item__FuncHeadTerm0_20;
    MR_Word parse_tree__parse_item__Var_37;
    MR_String parse_tree__parse_item__Var_38;
    MR_Word parse_tree__parse_item__Var_39;
    MR_Word parse_tree__parse_item__Var_40;
    MR_Word parse_tree__parse_item__Var_41;
    MR_Word parse_tree__parse_item__Var_22;

    {
      mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_53_53, parse_tree__parse_item__TypeCtorInfo_54_54, parse_tree__parse_item__VarSet0_9, &parse_tree__parse_item__ProgVarSet0_15);
    }
    parse_tree__parse_item__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_item__GoalContextPieces_16 = mercury__cord__init_0_f_0(parse_tree__parse_item__TypeCtorInfo_55_55);
    }
    {
      parse_tree__parse_goal__parse_goal_5_p_0(parse_tree__parse_item__BodyTerm0_11, parse_tree__parse_item__GoalContextPieces_16, &parse_tree__parse_item__MaybeBodyGoal_17, parse_tree__parse_item__ProgVarSet0_15, &parse_tree__parse_item__ProgVarSet_18);
    }
    {
      mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_54_54, parse_tree__parse_item__TypeCtorInfo_53_53, parse_tree__parse_item__ProgVarSet_18, &parse_tree__parse_item__VarSet_19);
    }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__HeadTerm_10)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadTerm_10, (MR_Integer) 0)));
        parse_tree__parse_item__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadTerm_10, (MR_Integer) 1)));
        parse_tree__parse_item__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadTerm_10, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_37)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_38, (MR_String) "=") == 0);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_39)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_39, (MR_Integer) 0)));
                    parse_tree__parse_item__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_39, (MR_Integer) 1)));
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_40)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__FuncResultTerm0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_item__succeeded)
                          {
                            {
                              parse_tree__parse_item__FuncHeadTerm_23 = parse_tree__parse_item__desugar_field_access_1_f_0(parse_tree__parse_item__FuncHeadTerm0_20);
                            }
                            parse_tree__parse_item__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__HeadContextPieces_25;

        {
          parse_tree__parse_item__MaybeFuncResultTerm_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFuncResultTerm_24, 0) = ((MR_Box) (parse_tree__parse_item__FuncResultTerm0_21));
        }
        {
          parse_tree__parse_item__HeadContextPieces_25 = mercury__cord__singleton_1_f_0(parse_tree__parse_item__TypeCtorInfo_55_55, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[228]))));
        }
        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_item__TypeCtorInfo_53_53, parse_tree__parse_item__ModuleName_8, parse_tree__parse_item__FuncHeadTerm_23, parse_tree__parse_item__VarSet_19, parse_tree__parse_item__HeadContextPieces_25, &parse_tree__parse_item__MaybeFunctor_26);
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__HeadContextPieces_52;

        parse_tree__parse_item__MaybeFuncResultTerm_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          parse_tree__parse_item__HeadContextPieces_52 = mercury__cord__singleton_1_f_0(parse_tree__parse_item__TypeCtorInfo_55_55, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[229]))));
        }
        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_item__TypeCtorInfo_53_53, parse_tree__parse_item__ModuleName_8, parse_tree__parse_item__HeadTerm_10, parse_tree__parse_item__VarSet_19, parse_tree__parse_item__HeadContextPieces_52, &parse_tree__parse_item__MaybeFunctor_26);
        }
      }
    if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeFunctor_26)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_item__FunctorSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeFunctor_26, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__Specs_36;
        MR_Word parse_tree__parse_item__Var_46;

        {
          parse_tree__parse_item__Var_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__parse_item__MaybeBodyGoal_17);
        }
        {
          parse_tree__parse_item__Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__FunctorSpecs_35, parse_tree__parse_item__Var_46);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_36));
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFunctor_26, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__ArgTerms0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFunctor_26, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__PredOrFunc_30;
        MR_Word parse_tree__parse_item__ArgTerms_31;
        MR_Word parse_tree__parse_item__ProgArgTerms_32;
        MR_Word parse_tree__parse_item__ItemClause_33;
        MR_Word parse_tree__parse_item__Item_34;
        MR_Word parse_tree__parse_item__Var_51;

        if ((parse_tree__parse_item__MaybeFuncResultTerm_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__parse_item__PredOrFunc_30 = (MR_Integer) 0;
            parse_tree__parse_item__ArgTerms_31 = parse_tree__parse_item__ArgTerms0_28;
          }
        else
          {
            MR_Word parse_tree__parse_item__FuncResultTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFuncResultTerm_24, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__Var_47;

            parse_tree__parse_item__PredOrFunc_30 = (MR_Integer) 1;
            {
              parse_tree__parse_item__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 0) = ((MR_Box) (parse_tree__parse_item__FuncResultTerm_29));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__ArgTerms_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], parse_tree__parse_item__ArgTerms0_28, parse_tree__parse_item__Var_47);
            }
          }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], (MR_Word) &parse_tree__parse_item_scalar_common_1[1], (MR_Word) &parse_tree__parse_item_scalar_common_2[2], parse_tree__parse_item__ArgTerms_31, &parse_tree__parse_item__ProgArgTerms_32);
        }
        {
          parse_tree__parse_item__ItemClause_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 0) = ((MR_Box) (parse_tree__parse_item__Name_27));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 1) = ((MR_Box) (parse_tree__parse_item__PredOrFunc_30));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 2) = ((MR_Box) (parse_tree__parse_item__ProgArgTerms_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 4) = ((MR_Box) (parse_tree__parse_item__ProgVarSet_18));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 5) = ((MR_Box) (parse_tree__parse_item__MaybeBodyGoal_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 6) = ((MR_Box) (parse_tree__parse_item__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemClause_33, 7) = ((MR_Box) (parse_tree__parse_item__SeqNum_13));
        }
        parse_tree__parse_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_item__ItemClause_33);
        {
          parse_tree__parse_item__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Item_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_item__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_51));
        }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item__parse_decl_item_or_marker_8_p_0(
  MR_Word parse_tree__parse_item__ModuleName_9,
  MR_Word parse_tree__parse_item__VarSet_10,
  MR_String parse_tree__parse_item__Functor_11,
  MR_Word parse_tree__parse_item__ArgTerms_12,
  MR_Word parse_tree__parse_item__IsInClass_13,
  MR_Word parse_tree__parse_item__Context_14,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word * parse_tree__parse_item__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      MR_Integer parse_tree__parse_item__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 0)) {
        case (MR_Integer) 60:
          if (MR_offset_streq(1, parse_tree__parse_item__Functor_11, (MR_String) "<="))
            parse_tree__parse_item__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 61:
          if (MR_offset_streq(1, parse_tree__parse_item__Functor_11, (MR_String) "=>"))
            parse_tree__parse_item__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__parse_item__Functor_11, (MR_String) "all"))
            parse_tree__parse_item__case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(1, parse_tree__parse_item__Functor_11, (MR_String) "end_module"))
            parse_tree__parse_item__case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 1)) {
            case (MR_Integer) 105:
              if (((((((((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 5)) == (MR_Integer) 105))))
                switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 6)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(7, parse_tree__parse_item__Functor_11, (MR_String) "finalise"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 122:
                    if (MR_offset_streq(7, parse_tree__parse_item__Functor_11, (MR_String) "finalize"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 4;
                    break;
                }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__parse_item__Functor_11, (MR_String) "func"))
                parse_tree__parse_item__case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 1)) {
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) == (MR_Integer) 112))
                switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(4, parse_tree__parse_item__Functor_11, (MR_String) "implementation"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, parse_tree__parse_item__Functor_11, (MR_String) "import_module"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(4, parse_tree__parse_item__Functor_11, (MR_String) "impure"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 8;
                    break;
                }
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, parse_tree__parse_item__Functor_11, (MR_String) "include_module"))
                    parse_tree__parse_item__case_num_0 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 105:
                  if (((((((((((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 7)) == (MR_Integer) 105))))
                    switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 8)) {
                      case (MR_Integer) 115:
                        if (MR_offset_streq(9, parse_tree__parse_item__Functor_11, (MR_String) "initialise"))
                          parse_tree__parse_item__case_num_0 = (MR_Integer) 10;
                        break;
                      case (MR_Integer) 122:
                        if (MR_offset_streq(9, parse_tree__parse_item__Functor_11, (MR_String) "initialize"))
                          parse_tree__parse_item__case_num_0 = (MR_Integer) 10;
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  if (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) == (MR_Integer) 116))
                    switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 4)) {
                      case (MR_Integer) 0:
                        parse_tree__parse_item__case_num_0 = (MR_Integer) 11;
                        break;
                      case (MR_Integer) 97:
                        if (MR_offset_streq(5, parse_tree__parse_item__Functor_11, (MR_String) "instance"))
                          parse_tree__parse_item__case_num_0 = (MR_Integer) 12;
                        break;
                    }
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__parse_item__Functor_11, (MR_String) "interface"))
                    parse_tree__parse_item__case_num_0 = (MR_Integer) 13;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 1)) {
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) == (MR_Integer) 100))
                switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, parse_tree__parse_item__Functor_11, (MR_String) "mode"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 14;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(4, parse_tree__parse_item__Functor_11, (MR_String) "module"))
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 15;
                    break;
                }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__parse_item__Functor_11, (MR_String) "mutable"))
                parse_tree__parse_item__case_num_0 = (MR_Integer) 16;
              break;
          }
          break;
        case (MR_Integer) 112:
          if (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 1)) == (MR_Integer) 114))
            switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, parse_tree__parse_item__Functor_11, (MR_String) "pragma"))
                  parse_tree__parse_item__case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(3, parse_tree__parse_item__Functor_11, (MR_String) "pred"))
                  parse_tree__parse_item__case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 111:
                if (((((((((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 6)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 7)) {
                    case (MR_Integer) 0:
                      parse_tree__parse_item__case_num_0 = (MR_Integer) 19;
                      break;
                    case (MR_Integer) 95:
                      if (((((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 9)) == (MR_Integer) 120))))
                        switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 10)) {
                          case (MR_Integer) 99:
                            if (((((((((((((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 16)) == (MR_Integer) 101))))
                              switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 17)) {
                                case (MR_Integer) 0:
                                  parse_tree__parse_item__case_num_0 = (MR_Integer) 20;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(18, parse_tree__parse_item__Functor_11, (MR_String) "promise_exclusive_exhaustive"))
                                    parse_tree__parse_item__case_num_0 = (MR_Integer) 21;
                                  break;
                              }
                            break;
                          case (MR_Integer) 104:
                            if (MR_offset_streq(11, parse_tree__parse_item__Functor_11, (MR_String) "promise_exhaustive"))
                              parse_tree__parse_item__case_num_0 = (MR_Integer) 22;
                            break;
                        }
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__parse_item__Functor_11, (MR_String) "semipure"))
                parse_tree__parse_item__case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, parse_tree__parse_item__Functor_11, (MR_String) "solver"))
                    parse_tree__parse_item__case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, parse_tree__parse_item__Functor_11, (MR_String) "some"))
                    parse_tree__parse_item__case_num_0 = (MR_Integer) 25;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 116:
          if (((((((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(parse_tree__parse_item__Functor_11, 3)) == (MR_Integer) 101))))
            switch (MR_nth_code_unit(parse_tree__parse_item__Functor_11, 4)) {
              case (MR_Integer) 0:
                parse_tree__parse_item__case_num_0 = (MR_Integer) 26;
                break;
              case (MR_Integer) 99:
                if (MR_offset_streq(5, parse_tree__parse_item__Functor_11, (MR_String) "typeclass"))
                  parse_tree__parse_item__case_num_0 = (MR_Integer) 27;
                break;
            }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, parse_tree__parse_item__Functor_11, (MR_String) "use_module"))
            parse_tree__parse_item__case_num_0 = (MR_Integer) 28;
          break;
        case (MR_Integer) 118:
          if (MR_offset_streq(1, parse_tree__parse_item__Functor_11, (MR_String) "version_numbers"))
            parse_tree__parse_item__case_num_0 = (MR_Integer) 29;
          break;
      }
      switch (parse_tree__parse_item__case_num_0) {
        default:
          parse_tree__parse_item__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "<=" */
            {
              MR_Word parse_tree__parse_item__Var_26;
              MR_Word parse_tree__parse_item__Var_27;

              {
                parse_tree__parse_item__Var_26 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
              }
              {
                parse_tree__parse_item__Var_27 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
              }
              {
                parse_tree__parse_item__parse_constraint_attr_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__Var_26, parse_tree__parse_item__Var_27, parse_tree__parse_item__MaybeIOM_16);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            /* case "=>" */
            {
              MR_Word parse_tree__parse_item__Var_42;
              MR_Word parse_tree__parse_item__Var_43;

              {
                parse_tree__parse_item__Var_42 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
              }
              {
                parse_tree__parse_item__Var_43 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
              }
              {
                parse_tree__parse_item__parse_constraint_attr_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__Var_42, parse_tree__parse_item__Var_43, parse_tree__parse_item__MaybeIOM_16);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            /* case "all" */
            {
              MR_Word parse_tree__parse_item__Var_28;
              MR_Word parse_tree__parse_item__Var_29;

              {
                parse_tree__parse_item__Var_28 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
              }
              {
                parse_tree__parse_item__Var_29 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
              }
              {
                parse_tree__parse_item__parse_quant_attr_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__Var_28, parse_tree__parse_item__Var_29, parse_tree__parse_item__MaybeIOM_16);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            /* case "end_module" */
            {
              parse_tree__parse_item__parse_end_module_marker_4_p_0(parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "finalise", "finalize" */
            {
              parse_tree__parse_mutable__parse_finalise_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            /* case "func" */
            {
              parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            /* case "implementation" */
            {
              parse_tree__parse_item__parse_section_marker_6_p_0(parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "import_module" */
            {
              parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            /* case "impure" */
            {
              MR_Word parse_tree__parse_item__Var_24;
              MR_Word parse_tree__parse_item__Var_25;

              {
                parse_tree__parse_item__Var_24 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
              }
              {
                parse_tree__parse_item__Var_25 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
              }
              {
                parse_tree__parse_item__parse_purity_attr_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 2, parse_tree__parse_item__Var_24, parse_tree__parse_item__Var_25, parse_tree__parse_item__MaybeIOM_16);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "include_module" */
            {
              parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "initialise", "initialize" */
            {
              parse_tree__parse_mutable__parse_initialise_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "inst" */
            {
              parse_tree__parse_inst_mode_defn__parse_inst_defn_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "instance" */
            {
              parse_tree__parse_class__parse_instance_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "interface" */
            {
              parse_tree__parse_item__parse_section_marker_6_p_0(parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "mode" */
            {
              parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "module" */
            {
              parse_tree__parse_item__parse_module_marker_4_p_0(parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            /* case "mutable" */
            {
              parse_tree__parse_mutable__parse_mutable_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 17:
          {
            /* case "pragma" */
            {
              parse_tree__parse_pragma__parse_pragma_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 18:
          {
            /* case "pred" */
            {
              parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 19:
          {
            /* case "promise" */
            {
              parse_tree__parse_item__parse_promise_item_5_p_0(parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 20:
          {
            /* case "promise_exclusive" */
            {
              parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 21:
          {
            /* case "promise_exclusive_exhaustive" */
            {
              parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 2, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 22:
          {
            /* case "promise_exhaustive" */
            {
              parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 23:
          {
            /* case "semipure" */
            {
              MR_Word parse_tree__parse_item__Var_57;
              MR_Word parse_tree__parse_item__Var_58;

              {
                parse_tree__parse_item__Var_57 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
              }
              {
                parse_tree__parse_item__Var_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
              }
              {
                parse_tree__parse_item__parse_purity_attr_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 1, parse_tree__parse_item__Var_57, parse_tree__parse_item__Var_58, parse_tree__parse_item__MaybeIOM_16);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 24:
          {
            /* case "solver" */
            {
              parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 25:
          {
            /* case "some" */
            {
              MR_Word parse_tree__parse_item__Var_62;
              MR_Word parse_tree__parse_item__Var_63;

              {
                parse_tree__parse_item__Var_62 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0);
              }
              {
                parse_tree__parse_item__Var_63 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0);
              }
              {
                parse_tree__parse_item__parse_quant_attr_11_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__Var_62, parse_tree__parse_item__Var_63, parse_tree__parse_item__MaybeIOM_16);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 26:
          {
            /* case "type" */
            {
              parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 0, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 27:
          {
            /* case "typeclass" */
            {
              parse_tree__parse_class__parse_typeclass_item_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 28:
          {
            /* case "use_module" */
            {
              parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, (MR_Integer) 2, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 29:
          {
            /* case "version_numbers" */
            {
              parse_tree__parse_item__parse_version_numbers_marker_6_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__Functor_11, parse_tree__parse_item__ArgTerms_12, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_16);
            }
            parse_tree__parse_item__succeeded = MR_TRUE;
          }
          break;
      }
    }
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(
  MR_Word parse_tree__parse_item__VarSet_9,
  MR_String parse_tree__parse_item__Functor_10,
  MR_Word parse_tree__parse_item__ArgTerms_11,
  MR_Word parse_tree__parse_item__Context_12,
  MR_Integer parse_tree__parse_item__SeqNum_13,
  MR_Word parse_tree__parse_item__PromiseType_14,
  MR_Word * parse_tree__parse_item__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__Term_17;
    MR_Word parse_tree__parse_item__Var_29;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Term_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_11, (MR_Integer) 0)));
        parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_11, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__ProgVarSet0_18;
        MR_Word parse_tree__parse_item__ContextPieces_19;
        MR_Word parse_tree__parse_item__MaybeGoal0_20;
        MR_Word parse_tree__parse_item__ProgVarSet_21;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_item__VarSet_9, &parse_tree__parse_item__ProgVarSet0_18);
        }
        {
          parse_tree__parse_item__ContextPieces_19 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        }
        {
          parse_tree__parse_goal__parse_goal_5_p_0(parse_tree__parse_item__Term_17, parse_tree__parse_item__ContextPieces_19, &parse_tree__parse_item__MaybeGoal0_20, parse_tree__parse_item__ProgVarSet0_18, &parse_tree__parse_item__ProgVarSet_21);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeGoal0_20)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_item__MaybeIOM_16 = (MR_Word) parse_tree__parse_item__MaybeGoal0_20;
        else
          {
            MR_Word parse_tree__parse_item__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeGoal0_20, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__ItemPromise_24;
            MR_Word parse_tree__parse_item__Item_25;
            MR_Word parse_tree__parse_item__Var_30;

            {
              parse_tree__parse_item__ItemPromise_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_24, 0) = ((MR_Box) (parse_tree__parse_item__PromiseType_14));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_24, 1) = ((MR_Box) (parse_tree__parse_item__Goal_22));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_24, 2) = ((MR_Box) (parse_tree__parse_item__ProgVarSet_21));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_24, 4) = ((MR_Box) (parse_tree__parse_item__Context_12));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_24, 5) = ((MR_Box) (parse_tree__parse_item__SeqNum_13));
            }
            {
              parse_tree__parse_item__Item_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_25, 1) = ((MR_Box) (parse_tree__parse_item__ItemPromise_24));
            }
            {
              parse_tree__parse_item__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_30, 0) = ((MR_Box) (parse_tree__parse_item__Item_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_30));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Pieces_27;
        MR_Word parse_tree__parse_item__Spec_28;
        MR_Word parse_tree__parse_item__Var_33;
        MR_Word parse_tree__parse_item__Var_34;
        MR_Word parse_tree__parse_item__Var_49;
        MR_Word parse_tree__parse_item__Var_50;
        MR_Word parse_tree__parse_item__Var_51;
        MR_Word parse_tree__parse_item__Var_52;
        MR_Word parse_tree__parse_item__Var_55;

        {
          parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (parse_tree__parse_item__Functor_10));
        }
        {
          parse_tree__parse_item__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 0) = ((MR_Box) (parse_tree__parse_item__Var_34));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[162])));
        }
        {
          parse_tree__parse_item__Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[214])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_27, 1) = ((MR_Box) (parse_tree__parse_item__Var_33));
        }
        {
          parse_tree__parse_item__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_27));
        }
        {
          parse_tree__parse_item__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_50, 0) = ((MR_Box) (parse_tree__parse_item__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_50, 1) = ((MR_Box) (parse_tree__parse_item__Var_51));
        }
        {
          parse_tree__parse_item__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_49, 0) = ((MR_Box) (parse_tree__parse_item__Var_50));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_28, 2) = ((MR_Box) (parse_tree__parse_item__Var_49));
        }
        {
          parse_tree__parse_item__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_55, 0) = ((MR_Box) (parse_tree__parse_item__Spec_28));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_55));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_promise_item_5_p_0(
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__ArgTerms_7,
  MR_Word parse_tree__parse_item__Context_8,
  MR_Integer parse_tree__parse_item__SeqNum_9,
  MR_Word * parse_tree__parse_item__MaybeIOM_10)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_7)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__Term_11;
    MR_Word parse_tree__parse_item__Var_28;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Term_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_7, (MR_Integer) 0)));
        parse_tree__parse_item__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_7, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__ProgVarSet0_12;
        MR_Word parse_tree__parse_item__ContextPieces_13;
        MR_Word parse_tree__parse_item__MaybeGoal0_14;
        MR_Word parse_tree__parse_item__ProgVarSet_15;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_item__VarSet_6, &parse_tree__parse_item__ProgVarSet0_12);
        }
        {
          parse_tree__parse_item__ContextPieces_13 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        }
        {
          parse_tree__parse_goal__parse_goal_5_p_0(parse_tree__parse_item__Term_11, parse_tree__parse_item__ContextPieces_13, &parse_tree__parse_item__MaybeGoal0_14, parse_tree__parse_item__ProgVarSet0_12, &parse_tree__parse_item__ProgVarSet_15);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeGoal0_14)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_item__MaybeIOM_10 = (MR_Word) parse_tree__parse_item__MaybeGoal0_14;
        else
          {
            MR_Word parse_tree__parse_item__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeGoal0_14, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__UnivVars_21;
            MR_Word parse_tree__parse_item__Goal_22;
            MR_Word parse_tree__parse_item__ItemPromise_23;
            MR_Word parse_tree__parse_item__Item_24;
            MR_Word parse_tree__parse_item__Var_31;
            MR_Word parse_tree__parse_item__UnivVars0_19;
            MR_Word parse_tree__parse_item__AllGoal_20;
            MR_Word parse_tree__parse_item__Var_29;
            MR_Word parse_tree__parse_item__Var_30;
            MR_Word parse_tree__parse_item__Var_18;

            parse_tree__parse_item__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_item__Goal0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Goal0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Goal0_16, (MR_Integer) 1)))) & (MR_Integer) 1);
                parse_tree__parse_item__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Goal0_16, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                parse_tree__parse_item__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Goal0_16, (MR_Integer) 2)));
                parse_tree__parse_item__UnivVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Goal0_16, (MR_Integer) 3)));
                parse_tree__parse_item__AllGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_item__Goal0_16, (MR_Integer) 4)));
                parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_29 == (MR_Integer) 1);
                if (parse_tree__parse_item__succeeded)
                  parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_30 == (MR_Integer) 0);
              }
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__UnivVars_21 = parse_tree__parse_item__UnivVars0_19;
                parse_tree__parse_item__Goal_22 = parse_tree__parse_item__AllGoal_20;
              }
            else
              {
                parse_tree__parse_item__UnivVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                parse_tree__parse_item__Goal_22 = parse_tree__parse_item__Goal0_16;
              }
            {
              parse_tree__parse_item__ItemPromise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_23, 0) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_23, 1) = ((MR_Box) (parse_tree__parse_item__Goal_22));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_23, 2) = ((MR_Box) (parse_tree__parse_item__ProgVarSet_15));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_23, 3) = ((MR_Box) (parse_tree__parse_item__UnivVars_21));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_23, 4) = ((MR_Box) (parse_tree__parse_item__Context_8));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPromise_23, 5) = ((MR_Box) (parse_tree__parse_item__SeqNum_9));
            }
            {
              parse_tree__parse_item__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_24, 1) = ((MR_Box) (parse_tree__parse_item__ItemPromise_23));
            }
            {
              parse_tree__parse_item__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_31, 0) = ((MR_Box) (parse_tree__parse_item__Item_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_31));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Spec_27;
        MR_Word parse_tree__parse_item__Var_51;
        MR_Word parse_tree__parse_item__Var_52;
        MR_Word parse_tree__parse_item__Var_57;

        {
          parse_tree__parse_item__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Context_8));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[227])));
        }
        {
          parse_tree__parse_item__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 2) = ((MR_Box) (parse_tree__parse_item__Var_51));
        }
        {
          parse_tree__parse_item__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_57, 0) = ((MR_Box) (parse_tree__parse_item__Spec_27));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_57));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_version_numbers_marker_6_p_0(
  MR_Word parse_tree__parse_item__ModuleName_7,
  MR_String parse_tree__parse_item__Functor_8,
  MR_Word parse_tree__parse_item__ArgTerms_9,
  MR_Word parse_tree__parse_item__Context_10,
  MR_Integer parse_tree__parse_item__SeqNum_11,
  MR_Word * parse_tree__parse_item__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__VersionNumberTerm_13;
    MR_Word parse_tree__parse_item__ModuleNameTerm_14;
    MR_Word parse_tree__parse_item__VersionNumbersTerm_15;
    MR_Word parse_tree__parse_item__Var_33;
    MR_Word parse_tree__parse_item__Var_34;
    MR_Word parse_tree__parse_item__Var_35;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__VersionNumberTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__parse_item__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_33)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__ModuleNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, (MR_Integer) 0)));
            parse_tree__parse_item__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, (MR_Integer) 1)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_34)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__VersionNumbersTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, (MR_Integer) 0)));
                parse_tree__parse_item__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, (MR_Integer) 1)));
                parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Integer parse_tree__parse_item__VersionNumber_16;
        MR_Integer parse_tree__parse_item__Var_127;

        {
          parse_tree__parse_item__succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__VersionNumberTerm_13, &parse_tree__parse_item__VersionNumber_16);
        }
        if (parse_tree__parse_item__succeeded)
          {
            {
              parse_tree__parse_item__Var_127 = recompilation__version__version_numbers_version_number_0_f_0();
            }
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__VersionNumber_16 == parse_tree__parse_item__Var_127);
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Var_128;

            {
              parse_tree__parse_item__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__ModuleNameTerm_14, &parse_tree__parse_item__Var_128);
            }
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_item__ModuleName_7, parse_tree__parse_item__Var_128);
              }
            if (parse_tree__parse_item__succeeded)
              {
                MR_Word parse_tree__parse_item__MaybeVersionNumbers_17;

                {
                  recompilation__version__parse_version_numbers_2_p_0(parse_tree__parse_item__VersionNumbersTerm_15, &parse_tree__parse_item__MaybeVersionNumbers_17);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeVersionNumbers_17)) == (MR_mktag((MR_Integer) 0))))
                  *parse_tree__parse_item__MaybeIOM_12 = (MR_Word) parse_tree__parse_item__MaybeVersionNumbers_17;
                else
                  {
                    MR_Word parse_tree__parse_item__VersionNumbers_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeVersionNumbers_17, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_item__IOM_19;

                    {
                      parse_tree__parse_item__IOM_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_item__IOM_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_item__IOM_19, 1) = ((MR_Box) (parse_tree__parse_item__VersionNumbers_18));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_item__MaybeIOM_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__IOM_19));
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_item__Spec_22;
                MR_Word parse_tree__parse_item__Var_49;
                MR_Word parse_tree__parse_item__Var_50;
                MR_Word parse_tree__parse_item__Var_51;
                MR_Word parse_tree__parse_item__Var_56;

                {
                  parse_tree__parse_item__Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__ModuleNameTerm_14);
                }
                {
                  parse_tree__parse_item__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_50, 0) = ((MR_Box) (parse_tree__parse_item__Var_51));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[225])));
                }
                {
                  parse_tree__parse_item__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_49, 0) = ((MR_Box) (parse_tree__parse_item__Var_50));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_item__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_22, 2) = ((MR_Box) (parse_tree__parse_item__Var_49));
                }
                {
                  parse_tree__parse_item__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, 0) = ((MR_Box) (parse_tree__parse_item__Spec_22));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_56));
                }
              }
          }
        else
        if (((MR_tag((MR_Word) parse_tree__parse_item__VersionNumberTerm_13)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_item__DummyTerm_27;
            MR_Word parse_tree__parse_item__Warning_28;
            MR_Word parse_tree__parse_item__ItemNothing_29;
            MR_Word parse_tree__parse_item__Item_30;
            MR_Word parse_tree__parse_item__Var_83;
            MR_Word parse_tree__parse_item__IOM_116;

            {
              parse_tree__parse_item__dummy_term_with_context_2_p_0(parse_tree__parse_item__Context_10, &parse_tree__parse_item__DummyTerm_27);
            }
            {
              parse_tree__parse_item__Warning_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Warning_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[24])));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Warning_28, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Warning_28, 2) = ((MR_Box) (parse_tree__parse_item__DummyTerm_27));
            }
            {
              parse_tree__parse_item__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_83, 0) = ((MR_Box) (parse_tree__parse_item__Warning_28));
            }
            {
              parse_tree__parse_item__ItemNothing_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemNothing_29, 0) = ((MR_Box) (parse_tree__parse_item__Var_83));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemNothing_29, 1) = ((MR_Box) (parse_tree__parse_item__Context_10));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemNothing_29, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_11));
            }
            {
              parse_tree__parse_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_30, 1) = ((MR_Box) (parse_tree__parse_item__ItemNothing_29));
            }
            {
              parse_tree__parse_item__IOM_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__IOM_116, 0) = ((MR_Box) (parse_tree__parse_item__Item_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__IOM_116));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__VersionNumberContext_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__VersionNumberTerm_13, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__Var_71;
            MR_Word parse_tree__parse_item__Var_72;
            MR_Word parse_tree__parse_item__Var_77;
            MR_Word parse_tree__parse_item__Spec_118;
            MR_Word parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__VersionNumberTerm_13, (MR_Integer) 0)));

            {
              parse_tree__parse_item__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_72, 0) = ((MR_Box) (parse_tree__parse_item__VersionNumberContext_32));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[226])));
            }
            {
              parse_tree__parse_item__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_71, 0) = ((MR_Box) (parse_tree__parse_item__Var_72));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_118, 2) = ((MR_Box) (parse_tree__parse_item__Var_71));
            }
            {
              parse_tree__parse_item__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_77, 0) = ((MR_Box) (parse_tree__parse_item__Spec_118));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_77));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Var_86;
        MR_Word parse_tree__parse_item__Var_87;
        MR_Word parse_tree__parse_item__Var_108;
        MR_Word parse_tree__parse_item__Var_109;
        MR_Word parse_tree__parse_item__Var_110;
        MR_Word parse_tree__parse_item__Var_111;
        MR_Word parse_tree__parse_item__Var_114;
        MR_Word parse_tree__parse_item__Pieces_122;
        MR_Word parse_tree__parse_item__Spec_123;

        {
          parse_tree__parse_item__Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_87, 1) = ((MR_Box) (parse_tree__parse_item__Functor_8));
        }
        {
          parse_tree__parse_item__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_86, 0) = ((MR_Box) (parse_tree__parse_item__Var_87));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[85])));
        }
        {
          parse_tree__parse_item__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[214])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_122, 1) = ((MR_Box) (parse_tree__parse_item__Var_86));
        }
        {
          parse_tree__parse_item__Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_111, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_122));
        }
        {
          parse_tree__parse_item__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_110, 0) = ((MR_Box) (parse_tree__parse_item__Var_111));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_109, 0) = ((MR_Box) (parse_tree__parse_item__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_109, 1) = ((MR_Box) (parse_tree__parse_item__Var_110));
        }
        {
          parse_tree__parse_item__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_108, 0) = ((MR_Box) (parse_tree__parse_item__Var_109));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_123, 2) = ((MR_Box) (parse_tree__parse_item__Var_108));
        }
        {
          parse_tree__parse_item__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_114, 0) = ((MR_Box) (parse_tree__parse_item__Spec_123));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_114));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__dummy_term_with_context_2_p_0(
  MR_Word parse_tree__parse_item__Context_3,
  MR_Word * parse_tree__parse_item__Term_4)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__parse_item__Term_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_5[22]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_item__Context_3));
    }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv4_Avail_8;

    {
      parse_tree__parse_item__make_item_avail_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv4_Avail_8);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv4_Avail_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv3_Incl_8;

    {
      parse_tree__parse_item__make_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv3_Incl_8);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv3_Incl_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv2_Avail_8;

    {
      parse_tree__parse_item__make_item_avail_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv2_Avail_8);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv2_Avail_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv1_MaybeModule_8;

    {
      parse_tree__parse_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv1_MaybeModule_8);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv1_MaybeModule_8));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_MaybeModuleName_6;

    {
      parse_tree__parse_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv0_MaybeModuleName_6);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_MaybeModuleName_6));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_incl_imp_use_items_8_p_0(
  MR_Word parse_tree__parse_item__ModuleName_9,
  MR_Word parse_tree__parse_item__VarSet_10,
  MR_String parse_tree__parse_item__Functor_11,
  MR_Word parse_tree__parse_item__ArgTerms_12,
  MR_Word parse_tree__parse_item__Context_13,
  MR_Integer parse_tree__parse_item__SeqNum_14,
  MR_Word parse_tree__parse_item__IIU_15,
  MR_Word * parse_tree__parse_item__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__Parser_17;
    MR_Word parse_tree__parse_item__ModuleNamesTerm_18;
    MR_Word parse_tree__parse_item__Var_34;

    switch (parse_tree__parse_item__IIU_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          parse_tree__parse_item__Parser_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 3) = ((MR_Box) (parse_tree__parse_item__VarSet_10));
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__parse_item__Parser_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 3) = ((MR_Box) (parse_tree__parse_item__ModuleName_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Parser_17, 4) = ((MR_Box) (parse_tree__parse_item__VarSet_10));
        }
        break;
    }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__ModuleNamesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_12, (MR_Integer) 0)));
        parse_tree__parse_item__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_12, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word parse_tree__parse_item__MaybeModuleNames_19;

        {
          parse_tree__parse_util__parse_one_or_more_3_p_0(parse_tree__parse_item__TypeCtorInfo_73_73, parse_tree__parse_item__Parser_17, parse_tree__parse_item__ModuleNamesTerm_18, &parse_tree__parse_item__MaybeModuleNames_19);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeModuleNames_19)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_item__MaybeIOM_16 = (MR_Word) parse_tree__parse_item__MaybeModuleNames_19;
        else
          {
            MR_Word parse_tree__parse_item__ModuleNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeModuleNames_19, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__HeadModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ModuleNames_20, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__TailModuleNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__ModuleNames_20, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__IOM_25;

            switch (parse_tree__parse_item__IIU_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_item__HeadImport_26;
                  MR_Word parse_tree__parse_item__TailImports_27;
                  MR_Word parse_tree__parse_item__Var_37;
                  MR_Word parse_tree__parse_item__Var_38;
                  MR_Word parse_tree__parse_item__AvailImportInfo_87;

                  {
                    parse_tree__parse_item__AvailImportInfo_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailImportInfo_87, 0) = ((MR_Box) (parse_tree__parse_item__HeadModuleName_21));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailImportInfo_87, 1) = ((MR_Box) (parse_tree__parse_item__Context_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailImportInfo_87, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_14));
                  }
                  parse_tree__parse_item__HeadImport_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_item__AvailImportInfo_87);
                  {
                    parse_tree__parse_item__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[1]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_3));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, 3) = ((MR_Box) (parse_tree__parse_item__Context_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_37, 4) = ((MR_Box) (parse_tree__parse_item__SeqNum_14));
                  }
                  {
                    mercury__list__map_3_p_0(parse_tree__parse_item__TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_item__Var_37, parse_tree__parse_item__TailModuleNames_22, &parse_tree__parse_item__TailImports_27);
                  }
                  {
                    parse_tree__parse_item__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_38, 0) = ((MR_Box) (parse_tree__parse_item__HeadImport_26));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_38, 1) = ((MR_Box) (parse_tree__parse_item__TailImports_27));
                  }
                  {
                    parse_tree__parse_item__IOM_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_item__IOM_25, 0) = ((MR_Box) (parse_tree__parse_item__Var_38));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_item__HeadIncl_23;
                  MR_Word parse_tree__parse_item__TailIncls_24;
                  MR_Word parse_tree__parse_item__Var_39;
                  MR_Word parse_tree__parse_item__Var_40;

                  {
                    parse_tree__parse_item__HeadIncl_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadIncl_23, 0) = ((MR_Box) (parse_tree__parse_item__HeadModuleName_21));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadIncl_23, 1) = ((MR_Box) (parse_tree__parse_item__Context_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__HeadIncl_23, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_14));
                  }
                  {
                    parse_tree__parse_item__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_39, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[2]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_39, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_4));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_39, 3) = ((MR_Box) (parse_tree__parse_item__Context_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_39, 4) = ((MR_Box) (parse_tree__parse_item__SeqNum_14));
                  }
                  {
                    mercury__list__map_3_p_0(parse_tree__parse_item__TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__parse_item__Var_39, parse_tree__parse_item__TailModuleNames_22, &parse_tree__parse_item__TailIncls_24);
                  }
                  {
                    parse_tree__parse_item__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_40, 0) = ((MR_Box) (parse_tree__parse_item__HeadIncl_23));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_40, 1) = ((MR_Box) (parse_tree__parse_item__TailIncls_24));
                  }
                  {
                    parse_tree__parse_item__IOM_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_item__IOM_25, 0) = ((MR_Box) (parse_tree__parse_item__Var_40));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_item__HeadUse_28;
                  MR_Word parse_tree__parse_item__TailUses_29;
                  MR_Word parse_tree__parse_item__Var_35;
                  MR_Word parse_tree__parse_item__Var_36;
                  MR_Word parse_tree__parse_item__AvailUseInfo_96;

                  {
                    parse_tree__parse_item__AvailUseInfo_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailUseInfo_96, 0) = ((MR_Box) (parse_tree__parse_item__HeadModuleName_21));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailUseInfo_96, 1) = ((MR_Box) (parse_tree__parse_item__Context_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__AvailUseInfo_96, 2) = ((MR_Box) (parse_tree__parse_item__SeqNum_14));
                  }
                  parse_tree__parse_item__HeadUse_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_item__AvailUseInfo_96);
                  {
                    parse_tree__parse_item__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_8[1]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (parse_tree__parse_item__parse_incl_imp_use_items_8_p_0_5));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 3) = ((MR_Box) (parse_tree__parse_item__Context_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 4) = ((MR_Box) (parse_tree__parse_item__SeqNum_14));
                  }
                  {
                    mercury__list__map_3_p_0(parse_tree__parse_item__TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__parse_item__Var_35, parse_tree__parse_item__TailModuleNames_22, &parse_tree__parse_item__TailUses_29);
                  }
                  {
                    parse_tree__parse_item__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_36, 0) = ((MR_Box) (parse_tree__parse_item__HeadUse_28));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_36, 1) = ((MR_Box) (parse_tree__parse_item__TailUses_29));
                  }
                  {
                    parse_tree__parse_item__IOM_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__parse_item__IOM_25, 0) = ((MR_Box) (parse_tree__parse_item__Var_36));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__IOM_25));
            }
          }
      }
    else
      {
        MR_String parse_tree__parse_item__Article_31;
        MR_Word parse_tree__parse_item__Pieces_32;
        MR_Word parse_tree__parse_item__Spec_33;
        MR_Word parse_tree__parse_item__Var_43;
        MR_Word parse_tree__parse_item__Var_44;
        MR_Word parse_tree__parse_item__Var_45;
        MR_Word parse_tree__parse_item__Var_46;
        MR_Word parse_tree__parse_item__Var_61;
        MR_Word parse_tree__parse_item__Var_62;
        MR_Word parse_tree__parse_item__Var_63;
        MR_Word parse_tree__parse_item__Var_64;
        MR_Word parse_tree__parse_item__Var_67;

        switch (parse_tree__parse_item__IIU_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 0:
            parse_tree__parse_item__Article_31 = (MR_String) "an";
            break;
          case (MR_Integer) 2:
            parse_tree__parse_item__Article_31 = (MR_String) "a";
            break;
        }
        {
          parse_tree__parse_item__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_44, 1) = ((MR_Box) (parse_tree__parse_item__Article_31));
        }
        {
          parse_tree__parse_item__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_46, 1) = ((MR_Box) (parse_tree__parse_item__Functor_11));
        }
        {
          parse_tree__parse_item__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_45, 0) = ((MR_Box) (parse_tree__parse_item__Var_46));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[57])));
        }
        {
          parse_tree__parse_item__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_43, 0) = ((MR_Box) (parse_tree__parse_item__Var_44));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_43, 1) = ((MR_Box) (parse_tree__parse_item__Var_45));
        }
        {
          parse_tree__parse_item__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_32, 1) = ((MR_Box) (parse_tree__parse_item__Var_43));
        }
        {
          parse_tree__parse_item__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_64, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_32));
        }
        {
          parse_tree__parse_item__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_63, 0) = ((MR_Box) (parse_tree__parse_item__Var_64));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_62, 0) = ((MR_Box) (parse_tree__parse_item__Context_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_62, 1) = ((MR_Box) (parse_tree__parse_item__Var_63));
        }
        {
          parse_tree__parse_item__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_61, 0) = ((MR_Box) (parse_tree__parse_item__Var_62));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_33, 2) = ((MR_Box) (parse_tree__parse_item__Var_61));
        }
        {
          parse_tree__parse_item__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_67, 0) = ((MR_Box) (parse_tree__parse_item__Spec_33));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_67));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_section_marker_6_p_0(
  MR_String parse_tree__parse_item__Functor_7,
  MR_Word parse_tree__parse_item__ArgTerms_8,
  MR_Word parse_tree__parse_item__Context_9,
  MR_Integer parse_tree__parse_item__SeqNum_10,
  MR_Word parse_tree__parse_item__Section_11,
  MR_Word * parse_tree__parse_item__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    if ((parse_tree__parse_item__ArgTerms_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_item__Marker_13;

        {
          parse_tree__parse_item__Marker_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_13, 1) = ((MR_Box) (parse_tree__parse_item__Section_11));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_13, 2) = ((MR_Box) (parse_tree__parse_item__Context_9));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_13, 3) = ((MR_Box) (parse_tree__parse_item__SeqNum_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_item__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Marker_13));
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__Pieces_16;
        MR_Word parse_tree__parse_item__Spec_17;
        MR_Word parse_tree__parse_item__Var_20;
        MR_Word parse_tree__parse_item__Var_21;
        MR_Word parse_tree__parse_item__Var_33;
        MR_Word parse_tree__parse_item__Var_34;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_36;
        MR_Word parse_tree__parse_item__Var_39;

        {
          parse_tree__parse_item__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_21, 1) = ((MR_Box) (parse_tree__parse_item__Functor_7));
        }
        {
          parse_tree__parse_item__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_20, 0) = ((MR_Box) (parse_tree__parse_item__Var_21));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[53])));
        }
        {
          parse_tree__parse_item__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[224])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_16, 1) = ((MR_Box) (parse_tree__parse_item__Var_20));
        }
        {
          parse_tree__parse_item__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_36, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_16));
        }
        {
          parse_tree__parse_item__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Var_36));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (parse_tree__parse_item__Context_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (parse_tree__parse_item__Var_35));
        }
        {
          parse_tree__parse_item__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 0) = ((MR_Box) (parse_tree__parse_item__Var_34));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_17, 2) = ((MR_Box) (parse_tree__parse_item__Var_33));
        }
        {
          parse_tree__parse_item__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_39, 0) = ((MR_Box) (parse_tree__parse_item__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_39));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_end_module_marker_4_p_0(
  MR_Word parse_tree__parse_item__ArgTerms_5,
  MR_Word parse_tree__parse_item__Context_6,
  MR_Integer parse_tree__parse_item__SeqNum_7,
  MR_Word * parse_tree__parse_item__MaybeIOM_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__ModuleName_10;
    MR_Word parse_tree__parse_item__TypeCtorInfo_42_42;
    MR_Word parse_tree__parse_item__ModuleNameTerm_9;
    MR_Word parse_tree__parse_item__Var_14;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__ModuleNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_5, (MR_Integer) 0)));
        parse_tree__parse_item__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_5, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            {
              parse_tree__parse_item__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(parse_tree__parse_item__TypeCtorInfo_42_42, parse_tree__parse_item__ModuleNameTerm_9, &parse_tree__parse_item__ModuleName_10);
            }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__Marker_11;

        {
          parse_tree__parse_item__Marker_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 1) = ((MR_Box) (parse_tree__parse_item__ModuleName_10));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 2) = ((MR_Box) (parse_tree__parse_item__Context_6));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 3) = ((MR_Box) (parse_tree__parse_item__SeqNum_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_item__MaybeIOM_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Marker_11));
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__Spec_13;
        MR_Word parse_tree__parse_item__Var_34;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_40;

        {
          parse_tree__parse_item__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Context_6));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[223])));
        }
        {
          parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (parse_tree__parse_item__Var_35));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_13, 2) = ((MR_Box) (parse_tree__parse_item__Var_34));
        }
        {
          parse_tree__parse_item__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, 0) = ((MR_Box) (parse_tree__parse_item__Spec_13));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_40));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_module_marker_4_p_0(
  MR_Word parse_tree__parse_item__ArgTerms_5,
  MR_Word parse_tree__parse_item__Context_6,
  MR_Integer parse_tree__parse_item__SeqNum_7,
  MR_Word * parse_tree__parse_item__MaybeIOM_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__ModuleName_10;
    MR_Word parse_tree__parse_item__TypeCtorInfo_42_42;
    MR_Word parse_tree__parse_item__ModuleNameTerm_9;
    MR_Word parse_tree__parse_item__Var_14;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__ModuleNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_5, (MR_Integer) 0)));
        parse_tree__parse_item__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_5, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            {
              parse_tree__parse_item__succeeded = parse_tree__parse_sym_name__try_parse_symbol_name_2_p_0(parse_tree__parse_item__TypeCtorInfo_42_42, parse_tree__parse_item__ModuleNameTerm_9, &parse_tree__parse_item__ModuleName_10);
            }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__Marker_11;

        {
          parse_tree__parse_item__Marker_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 1) = ((MR_Box) (parse_tree__parse_item__ModuleName_10));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 2) = ((MR_Box) (parse_tree__parse_item__Context_6));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Marker_11, 3) = ((MR_Box) (parse_tree__parse_item__SeqNum_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_item__MaybeIOM_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Marker_11));
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__Spec_13;
        MR_Word parse_tree__parse_item__Var_34;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_40;

        {
          parse_tree__parse_item__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Context_6));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[222])));
        }
        {
          parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (parse_tree__parse_item__Var_35));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_13, 2) = ((MR_Box) (parse_tree__parse_item__Var_34));
        }
        {
          parse_tree__parse_item__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, 0) = ((MR_Box) (parse_tree__parse_item__Spec_13));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_40));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_purity_attr_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__Purity_19,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_27,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_28,
  MR_Word * parse_tree__parse_item__MaybeIOM_22)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__SubTerm_23;
    MR_Word parse_tree__parse_item__Var_29;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__SubTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 0)));
        parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__PurityAttr_24 = (MR_Word) parse_tree__parse_item__Purity_19;
        MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_30_30;
        MR_String parse_tree__parse_item__Functor_68;
        MR_Word parse_tree__parse_item__ArgTerms_69;
        MR_Word parse_tree__parse_item__FunctorContext_70;
        MR_Word parse_tree__parse_item__Var_73;

        {
          parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_30_30 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_27, ((MR_Box) (parse_tree__parse_item__PurityAttr_24)));
        }
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__SubTerm_23)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_23, (MR_Integer) 0)));
            parse_tree__parse_item__ArgTerms_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_23, (MR_Integer) 1)));
            parse_tree__parse_item__FunctorContext_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_23, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_73)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              parse_tree__parse_item__Functor_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_73, (MR_Integer) 0)));
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__MaybeIOMPrime_71;

            {
              parse_tree__parse_item__succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(parse_tree__parse_item__ModuleName_12, parse_tree__parse_item__VarSet_13, parse_tree__parse_item__Functor_68, parse_tree__parse_item__ArgTerms_69, parse_tree__parse_item__IsInClass_16, parse_tree__parse_item__FunctorContext_70, parse_tree__parse_item__SeqNum_18, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_30_30, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_28, &parse_tree__parse_item__MaybeIOMPrime_71);
            }
            if (parse_tree__parse_item__succeeded)
              *parse_tree__parse_item__MaybeIOM_22 = parse_tree__parse_item__MaybeIOMPrime_71;
            else
              {
                MR_Word parse_tree__parse_item__Spec_72;
                MR_Word parse_tree__parse_item__Var_74;

                {
                  parse_tree__parse_item__Spec_72 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(parse_tree__parse_item__SubTerm_23, parse_tree__parse_item__Functor_68);
                }
                {
                  parse_tree__parse_item__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_74, 0) = ((MR_Box) (parse_tree__parse_item__Spec_72));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_22 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_74));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_item__Var_76;
            MR_Word parse_tree__parse_item__Spec_78;

            {
              parse_tree__parse_item__Spec_78 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(parse_tree__parse_item__VarSet_13, parse_tree__parse_item__SubTerm_23);
            }
            {
              parse_tree__parse_item__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_76, 0) = ((MR_Box) (parse_tree__parse_item__Spec_78));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_76));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Pieces_25;
        MR_Word parse_tree__parse_item__Spec_26;
        MR_Word parse_tree__parse_item__Var_33;
        MR_Word parse_tree__parse_item__Var_34;
        MR_Word parse_tree__parse_item__Var_46;
        MR_Word parse_tree__parse_item__Var_47;
        MR_Word parse_tree__parse_item__Var_48;
        MR_Word parse_tree__parse_item__Var_49;
        MR_Word parse_tree__parse_item__Var_52;

        {
          parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (parse_tree__parse_item__Functor_14));
        }
        {
          parse_tree__parse_item__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 0) = ((MR_Box) (parse_tree__parse_item__Var_34));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[36])));
        }
        {
          parse_tree__parse_item__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[221])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_25, 1) = ((MR_Box) (parse_tree__parse_item__Var_33));
        }
        {
          parse_tree__parse_item__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_49, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_25));
        }
        {
          parse_tree__parse_item__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_48, 0) = ((MR_Box) (parse_tree__parse_item__Var_49));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_47, 0) = ((MR_Box) (parse_tree__parse_item__Context_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_47, 1) = ((MR_Box) (parse_tree__parse_item__Var_48));
        }
        {
          parse_tree__parse_item__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_46, 0) = ((MR_Box) (parse_tree__parse_item__Var_47));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_26, 2) = ((MR_Box) (parse_tree__parse_item__Var_46));
        }
        {
          parse_tree__parse_item__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Spec_26));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_constraint_attr_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__QuantType_19,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * parse_tree__parse_item__MaybeIOM_22)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__SubTerm_23;
    MR_Word parse_tree__parse_item__ConstraintsTerm_24;
    MR_Word parse_tree__parse_item__Var_30;
    MR_Word parse_tree__parse_item__Var_31;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__SubTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 0)));
        parse_tree__parse_item__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_30)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__ConstraintsTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_30, (MR_Integer) 0)));
            parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_30, (MR_Integer) 1)));
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__ConstrAttr_25;
        MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_32_32;
        MR_String parse_tree__parse_item__Functor_70;
        MR_Word parse_tree__parse_item__ArgTerms_71;
        MR_Word parse_tree__parse_item__FunctorContext_72;
        MR_Word parse_tree__parse_item__Var_75;

        {
          parse_tree__parse_item__ConstrAttr_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__ConstrAttr_25, 0) = ((MR_Box) (parse_tree__parse_item__QuantType_19));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__ConstrAttr_25, 1) = ((MR_Box) (parse_tree__parse_item__ConstraintsTerm_24));
        }
        {
          parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_32_32 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_29, ((MR_Box) (parse_tree__parse_item__ConstrAttr_25)));
        }
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__SubTerm_23)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_23, (MR_Integer) 0)));
            parse_tree__parse_item__ArgTerms_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_23, (MR_Integer) 1)));
            parse_tree__parse_item__FunctorContext_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_23, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_75)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              parse_tree__parse_item__Functor_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_75, (MR_Integer) 0)));
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__MaybeIOMPrime_73;

            {
              parse_tree__parse_item__succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(parse_tree__parse_item__ModuleName_12, parse_tree__parse_item__VarSet_13, parse_tree__parse_item__Functor_70, parse_tree__parse_item__ArgTerms_71, parse_tree__parse_item__IsInClass_16, parse_tree__parse_item__FunctorContext_72, parse_tree__parse_item__SeqNum_18, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_28, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_32_32, &parse_tree__parse_item__MaybeIOMPrime_73);
            }
            if (parse_tree__parse_item__succeeded)
              *parse_tree__parse_item__MaybeIOM_22 = parse_tree__parse_item__MaybeIOMPrime_73;
            else
              {
                MR_Word parse_tree__parse_item__Spec_74;
                MR_Word parse_tree__parse_item__Var_76;

                {
                  parse_tree__parse_item__Spec_74 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(parse_tree__parse_item__SubTerm_23, parse_tree__parse_item__Functor_70);
                }
                {
                  parse_tree__parse_item__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_76, 0) = ((MR_Box) (parse_tree__parse_item__Spec_74));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_22 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_76));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_item__Var_78;
            MR_Word parse_tree__parse_item__Spec_80;

            {
              parse_tree__parse_item__Spec_80 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(parse_tree__parse_item__VarSet_13, parse_tree__parse_item__SubTerm_23);
            }
            {
              parse_tree__parse_item__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_78, 0) = ((MR_Box) (parse_tree__parse_item__Spec_80));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_78));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Pieces_26;
        MR_Word parse_tree__parse_item__Spec_27;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_36;
        MR_Word parse_tree__parse_item__Var_48;
        MR_Word parse_tree__parse_item__Var_49;
        MR_Word parse_tree__parse_item__Var_50;
        MR_Word parse_tree__parse_item__Var_51;
        MR_Word parse_tree__parse_item__Var_54;

        {
          parse_tree__parse_item__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_36, 1) = ((MR_Box) (parse_tree__parse_item__Functor_14));
        }
        {
          parse_tree__parse_item__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Var_36));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[32])));
        }
        {
          parse_tree__parse_item__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[221])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_26, 1) = ((MR_Box) (parse_tree__parse_item__Var_35));
        }
        {
          parse_tree__parse_item__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_26));
        }
        {
          parse_tree__parse_item__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_50, 0) = ((MR_Box) (parse_tree__parse_item__Var_51));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_49, 0) = ((MR_Box) (parse_tree__parse_item__Context_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_49, 1) = ((MR_Box) (parse_tree__parse_item__Var_50));
        }
        {
          parse_tree__parse_item__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_48, 0) = ((MR_Box) (parse_tree__parse_item__Var_49));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 2) = ((MR_Box) (parse_tree__parse_item__Var_48));
        }
        {
          parse_tree__parse_item__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_54, 0) = ((MR_Box) (parse_tree__parse_item__Spec_27));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_54));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_quant_attr_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__QuantType_19,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_28,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_29,
  MR_Word * parse_tree__parse_item__MaybeIOM_22)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__VarsTerm_23;
    MR_Word parse_tree__parse_item__SubTerm_24;
    MR_Word parse_tree__parse_item__Var_30;
    MR_Word parse_tree__parse_item__Var_31;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__VarsTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 0)));
        parse_tree__parse_item__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_30)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__SubTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_30, (MR_Integer) 0)));
            parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_30, (MR_Integer) 1)));
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__QuantAttr_25;
        MR_Word parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_32_32;
        MR_String parse_tree__parse_item__Functor_73;
        MR_Word parse_tree__parse_item__ArgTerms_74;
        MR_Word parse_tree__parse_item__FunctorContext_75;
        MR_Word parse_tree__parse_item__Var_78;

        {
          parse_tree__parse_item__QuantAttr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__QuantAttr_25, 0) = ((MR_Box) (parse_tree__parse_item__QuantType_19));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__QuantAttr_25, 1) = ((MR_Box) (parse_tree__parse_item__VarsTerm_23));
        }
        {
          parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_32_32 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_0_29, ((MR_Box) (parse_tree__parse_item__QuantAttr_25)));
        }
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__SubTerm_24)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_24, (MR_Integer) 0)));
            parse_tree__parse_item__ArgTerms_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_24, (MR_Integer) 1)));
            parse_tree__parse_item__FunctorContext_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_24, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_78)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              parse_tree__parse_item__Functor_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_78, (MR_Integer) 0)));
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__MaybeIOMPrime_76;

            {
              parse_tree__parse_item__succeeded = parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(parse_tree__parse_item__ModuleName_12, parse_tree__parse_item__VarSet_13, parse_tree__parse_item__Functor_73, parse_tree__parse_item__ArgTerms_74, parse_tree__parse_item__IsInClass_16, parse_tree__parse_item__FunctorContext_75, parse_tree__parse_item__SeqNum_18, parse_tree__parse_item__STATE_VARIABLE_PurityAttrs_0_28, parse_tree__parse_item__STATE_VARIABLE_QuantConstrAttrs_32_32, &parse_tree__parse_item__MaybeIOMPrime_76);
            }
            if (parse_tree__parse_item__succeeded)
              *parse_tree__parse_item__MaybeIOM_22 = parse_tree__parse_item__MaybeIOMPrime_76;
            else
              {
                MR_Word parse_tree__parse_item__Spec_77;
                MR_Word parse_tree__parse_item__Var_79;

                {
                  parse_tree__parse_item__Spec_77 = parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(parse_tree__parse_item__SubTerm_24, parse_tree__parse_item__Functor_73);
                }
                {
                  parse_tree__parse_item__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_79, 0) = ((MR_Box) (parse_tree__parse_item__Spec_77));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_22 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_79));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_item__Var_81;
            MR_Word parse_tree__parse_item__Spec_83;

            {
              parse_tree__parse_item__Spec_83 = parse_tree__parse_item__decl_is_not_an_atom_2_f_0(parse_tree__parse_item__VarSet_13, parse_tree__parse_item__SubTerm_24);
            }
            {
              parse_tree__parse_item__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_81, 0) = ((MR_Box) (parse_tree__parse_item__Spec_83));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_81));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Pieces_26;
        MR_Word parse_tree__parse_item__Spec_27;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_36;
        MR_Word parse_tree__parse_item__Var_51;
        MR_Word parse_tree__parse_item__Var_52;
        MR_Word parse_tree__parse_item__Var_53;
        MR_Word parse_tree__parse_item__Var_54;
        MR_Word parse_tree__parse_item__Var_57;

        {
          parse_tree__parse_item__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_36, 1) = ((MR_Box) (parse_tree__parse_item__Functor_14));
        }
        {
          parse_tree__parse_item__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (parse_tree__parse_item__Var_36));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[28])));
        }
        {
          parse_tree__parse_item__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[220])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_26, 1) = ((MR_Box) (parse_tree__parse_item__Var_35));
        }
        {
          parse_tree__parse_item__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_54, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_26));
        }
        {
          parse_tree__parse_item__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_53, 0) = ((MR_Box) (parse_tree__parse_item__Var_54));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Context_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 1) = ((MR_Box) (parse_tree__parse_item__Var_53));
        }
        {
          parse_tree__parse_item__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_27, 2) = ((MR_Box) (parse_tree__parse_item__Var_51));
        }
        {
          parse_tree__parse_item__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_57, 0) = ((MR_Box) (parse_tree__parse_item__Spec_27));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_57));
        }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_item__parse_attr_decl_item_or_marker_10_p_0(
  MR_Word parse_tree__parse_item__ModuleName_11,
  MR_Word parse_tree__parse_item__VarSet_12,
  MR_String parse_tree__parse_item__Functor_13,
  MR_Word parse_tree__parse_item__ArgTerms_14,
  MR_Word parse_tree__parse_item__IsInClass_15,
  MR_Word parse_tree__parse_item__Context_16,
  MR_Integer parse_tree__parse_item__SeqNum_17,
  MR_Word parse_tree__parse_item__PurityAttrs0_18,
  MR_Word parse_tree__parse_item__QuantConstrAttrs0_19,
  MR_Word * parse_tree__parse_item__MaybeIOM_20)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Integer parse_tree__parse_item__slot_0;
    MR_String parse_tree__parse_item__str_1;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    parse_tree__parse_item__slot_0 = ((MR_hash_string6(parse_tree__parse_item__Functor_13)) & (MR_Integer) 31);
    /* no collisions; no hash chain loop */
    /* lookup the string for this hash slot */
    parse_tree__parse_item__str_1 = ((&parse_tree__parse_item_vector_common_7[0 + parse_tree__parse_item__slot_0]))->parse_tree__parse_item__vector_common_type_7_0__vct_7_f_0;
    /* did we find a match? */
    if ((((parse_tree__parse_item__str_1 != NULL)) && ((strcmp(parse_tree__parse_item__str_1, parse_tree__parse_item__Functor_13) == 0))))
      {
        /* we found a match; dispatch to the corresponding code */
        switch (parse_tree__parse_item__slot_0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              /* case "semipure" */
              {
                parse_tree__parse_item__parse_purity_attr_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 1, parse_tree__parse_item__PurityAttrs0_18, parse_tree__parse_item__QuantConstrAttrs0_19, parse_tree__parse_item__MaybeIOM_20);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              /* case "impure" */
              {
                parse_tree__parse_item__parse_purity_attr_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 2, parse_tree__parse_item__PurityAttrs0_18, parse_tree__parse_item__QuantConstrAttrs0_19, parse_tree__parse_item__MaybeIOM_20);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              /* case "func" */
              {
                MR_Word parse_tree__parse_item__Var_29;
                MR_Word parse_tree__parse_item__Var_30;

                {
                  parse_tree__parse_item__Var_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__PurityAttrs0_18);
                }
                {
                  parse_tree__parse_item__Var_30 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__QuantConstrAttrs0_19);
                }
                {
                  parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 1, parse_tree__parse_item__Var_29, parse_tree__parse_item__Var_30, parse_tree__parse_item__MaybeIOM_20);
                }
                parse_tree__parse_item__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              /* case "=>" */
              {
                parse_tree__parse_item__parse_constraint_attr_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 0, parse_tree__parse_item__PurityAttrs0_18, parse_tree__parse_item__QuantConstrAttrs0_19, parse_tree__parse_item__MaybeIOM_20);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 16:
            {
              /* case "some" */
              {
                parse_tree__parse_item__parse_quant_attr_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 0, parse_tree__parse_item__PurityAttrs0_18, parse_tree__parse_item__QuantConstrAttrs0_19, parse_tree__parse_item__MaybeIOM_20);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              /* case "mode" */
              {
                MR_Word parse_tree__parse_item__MaybeIOM0_21;
                MR_Word parse_tree__parse_item__Var_32;

                {
                  parse_tree__parse_item__Var_32 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__QuantConstrAttrs0_19);
                }
                {
                  parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 1, parse_tree__parse_item__Var_32, &parse_tree__parse_item__MaybeIOM0_21);
                }
                {
                  parse_tree__parse_item__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__PurityAttrs0_18);
                }
                if (parse_tree__parse_item__succeeded)
                  *parse_tree__parse_item__MaybeIOM_20 = parse_tree__parse_item__MaybeIOM0_21;
                else
                  {
                    MR_Word parse_tree__parse_item__Spec_23;
                    MR_Word parse_tree__parse_item__Var_43;
                    MR_Word parse_tree__parse_item__Var_44;

                    {
                      parse_tree__parse_item__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_44, 0) = ((MR_Box) (parse_tree__parse_item__Context_16));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[219])));
                    }
                    {
                      parse_tree__parse_item__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_43, 0) = ((MR_Box) (parse_tree__parse_item__Var_44));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_23, 2) = ((MR_Box) (parse_tree__parse_item__Var_43));
                    }
                    if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeIOM0_21)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_Word parse_tree__parse_item__Specs0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeIOM0_21, (MR_Integer) 0)));
                        MR_Word parse_tree__parse_item__Var_49;

                        {
                          parse_tree__parse_item__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_49, 0) = ((MR_Box) (parse_tree__parse_item__Spec_23));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_49, 1) = ((MR_Box) (parse_tree__parse_item__Specs0_25));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_item__MaybeIOM_20 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_49));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_item__Var_50;

                        {
                          parse_tree__parse_item__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_50, 0) = ((MR_Box) (parse_tree__parse_item__Spec_23));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_item__MaybeIOM_20 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_50));
                        }
                      }
                  }
                parse_tree__parse_item__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 26:
            {
              /* case "all" */
              {
                parse_tree__parse_item__parse_quant_attr_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 1, parse_tree__parse_item__PurityAttrs0_18, parse_tree__parse_item__QuantConstrAttrs0_19, parse_tree__parse_item__MaybeIOM_20);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 27:
            {
              /* case "<=" */
              {
                parse_tree__parse_item__parse_constraint_attr_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 1, parse_tree__parse_item__PurityAttrs0_18, parse_tree__parse_item__QuantConstrAttrs0_19, parse_tree__parse_item__MaybeIOM_20);
              }
              parse_tree__parse_item__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 31:
            {
              /* case "pred" */
              {
                MR_Word parse_tree__parse_item__Var_59;
                MR_Word parse_tree__parse_item__Var_60;

                {
                  parse_tree__parse_item__Var_59 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_purity_attr_0, parse_tree__parse_item__PurityAttrs0_18);
                }
                {
                  parse_tree__parse_item__Var_60 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_quant_constr_attr_0, parse_tree__parse_item__QuantConstrAttrs0_19);
                }
                {
                  parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(parse_tree__parse_item__ModuleName_11, parse_tree__parse_item__VarSet_12, parse_tree__parse_item__Functor_13, parse_tree__parse_item__ArgTerms_14, parse_tree__parse_item__IsInClass_15, parse_tree__parse_item__Context_16, parse_tree__parse_item__SeqNum_17, (MR_Integer) 0, parse_tree__parse_item__Var_59, parse_tree__parse_item__Var_60, parse_tree__parse_item__MaybeIOM_20);
                }
                parse_tree__parse_item__succeeded = MR_TRUE;
              }
            }
            break;
        }
        /* jump out of search loop */
        goto label_0;
      }
    parse_tree__parse_item__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__parse_item__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_or_func_decl_item_11_p_0(
  MR_Word parse_tree__parse_item__ModuleName_12,
  MR_Word parse_tree__parse_item__VarSet_13,
  MR_String parse_tree__parse_item__Functor_14,
  MR_Word parse_tree__parse_item__ArgTerms_15,
  MR_Word parse_tree__parse_item__IsInClass_16,
  MR_Word parse_tree__parse_item__Context_17,
  MR_Integer parse_tree__parse_item__SeqNum_18,
  MR_Word parse_tree__parse_item__PredOrFunc_19,
  MR_Word parse_tree__parse_item__PurityAttrs_20,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_21,
  MR_Word * parse_tree__parse_item__MaybeIOM_22)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__Term_23;
    MR_Word parse_tree__parse_item__Var_43;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Term_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 0)));
        parse_tree__parse_item__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_15, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__TypeCtorInfo_170_170;
        MR_Word parse_tree__parse_item__PredOrFuncDeclPieces_24;
        MR_Word parse_tree__parse_item__DetismContextPieces_25;
        MR_Word parse_tree__parse_item__BeforeDetismTerm_26;
        MR_Word parse_tree__parse_item__MaybeMaybeDetism_27;
        MR_Word parse_tree__parse_item__WithInstContextPieces_28;
        MR_Word parse_tree__parse_item__BeforeWithInstTerm_29;
        MR_Word parse_tree__parse_item__MaybeWithInst_30;
        MR_Word parse_tree__parse_item__MaybeWithType_32;
        MR_Word parse_tree__parse_item__BaseTerm_33;
        MR_Word parse_tree__parse_item__Var_57;
        MR_Word parse_tree__parse_item__Var_62;
        MR_Word parse_tree__parse_item__MaybeDetism_34;
        MR_Word parse_tree__parse_item__WithInst_35;
        MR_Word parse_tree__parse_item__WithType_36;

        switch (parse_tree__parse_item__IsInClass_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_item__Var_51;
              MR_Word parse_tree__parse_item__Var_52;

              {
                parse_tree__parse_item__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_52, 1) = ((MR_Box) (parse_tree__parse_item__PredOrFunc_19));
              }
              {
                parse_tree__parse_item__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
                MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[211])));
              }
              {
                parse_tree__parse_item__PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_item__PredOrFuncDeclPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[209])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_item__PredOrFuncDeclPieces_24, 1) = ((MR_Box) (parse_tree__parse_item__Var_51));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_item__Var_44;

              {
                parse_tree__parse_item__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_44, 1) = ((MR_Box) (parse_tree__parse_item__PredOrFunc_19));
              }
              {
                parse_tree__parse_item__PredOrFuncDeclPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_item__PredOrFuncDeclPieces_24, 0) = ((MR_Box) (parse_tree__parse_item__Var_44));
                MR_hl_field(MR_mktag(1), parse_tree__parse_item__PredOrFuncDeclPieces_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[193])));
              }
            }
            break;
        }
        parse_tree__parse_item__TypeCtorInfo_170_170 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_item__Var_57 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_170_170, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[212]), parse_tree__parse_item__PredOrFuncDeclPieces_24);
        }
        {
          parse_tree__parse_item__DetismContextPieces_25 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_170_170, parse_tree__parse_item__Var_57);
        }
        {
          parse_tree__parse_item__parse_determinism_suffix_5_p_0(parse_tree__parse_item__VarSet_13, parse_tree__parse_item__DetismContextPieces_25, parse_tree__parse_item__Term_23, &parse_tree__parse_item__BeforeDetismTerm_26, &parse_tree__parse_item__MaybeMaybeDetism_27);
        }
        {
          parse_tree__parse_item__Var_62 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_170_170, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[91]), parse_tree__parse_item__PredOrFuncDeclPieces_24);
        }
        {
          parse_tree__parse_item__WithInstContextPieces_28 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_170_170, parse_tree__parse_item__Var_62);
        }
        {
          parse_tree__parse_item__parse_with_inst_suffix_5_p_0(parse_tree__parse_item__VarSet_13, parse_tree__parse_item__WithInstContextPieces_28, parse_tree__parse_item__BeforeDetismTerm_26, &parse_tree__parse_item__BeforeWithInstTerm_29, &parse_tree__parse_item__MaybeWithInst_30);
        }
        {
          parse_tree__parse_item__parse_with_type_suffix_4_p_0(parse_tree__parse_item__VarSet_13, parse_tree__parse_item__BeforeWithInstTerm_29, &parse_tree__parse_item__BaseTerm_33, &parse_tree__parse_item__MaybeWithType_32);
        }
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeMaybeDetism_27)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__MaybeDetism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeMaybeDetism_27, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeWithInst_30)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__WithInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeWithInst_30, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeWithType_32)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  parse_tree__parse_item__WithType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeWithType_32, (MR_Integer) 0)));
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Var_37;
            MR_Word parse_tree__parse_item__Var_38;

            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__WithInst_35)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithInst_35, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeDetism_34)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  parse_tree__parse_item__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeDetism_34, (MR_Integer) 0)));
              }
            if (parse_tree__parse_item__succeeded)
              {
                MR_Word parse_tree__parse_item__Spec_40;
                MR_Word parse_tree__parse_item__Var_86;
                MR_Word parse_tree__parse_item__Var_87;
                MR_Word parse_tree__parse_item__Var_88;
                MR_Word parse_tree__parse_item__Var_93;

                {
                  parse_tree__parse_item__Var_88 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__BaseTerm_33);
                }
                {
                  parse_tree__parse_item__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_87, 0) = ((MR_Box) (parse_tree__parse_item__Var_88));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[197])));
                }
                {
                  parse_tree__parse_item__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_86, 0) = ((MR_Box) (parse_tree__parse_item__Var_87));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_40, 2) = ((MR_Box) (parse_tree__parse_item__Var_86));
                }
                {
                  parse_tree__parse_item__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_93, 0) = ((MR_Box) (parse_tree__parse_item__Spec_40));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_22 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_93));
                }
              }
            else
              {
                MR_Word parse_tree__parse_item__Var_41;

                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__WithInst_35)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithInst_35, (MR_Integer) 0)));
                    parse_tree__parse_item__succeeded = (parse_tree__parse_item__WithType_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (parse_tree__parse_item__succeeded)
                  {
                    MR_Word parse_tree__parse_item__Var_117;
                    MR_Word parse_tree__parse_item__Var_118;
                    MR_Word parse_tree__parse_item__Var_119;
                    MR_Word parse_tree__parse_item__Var_124;
                    MR_Word parse_tree__parse_item__Spec_165;

                    {
                      parse_tree__parse_item__Var_119 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__BaseTerm_33);
                    }
                    {
                      parse_tree__parse_item__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_118, 0) = ((MR_Box) (parse_tree__parse_item__Var_119));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[213])));
                    }
                    {
                      parse_tree__parse_item__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_117, 0) = ((MR_Box) (parse_tree__parse_item__Var_118));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_item__Spec_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_165, 2) = ((MR_Box) (parse_tree__parse_item__Var_117));
                    }
                    {
                      parse_tree__parse_item__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_124, 0) = ((MR_Box) (parse_tree__parse_item__Spec_165));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_item__MaybeIOM_22 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_124));
                    }
                  }
                else
                  {
                    parse_tree__parse_item__succeeded = (parse_tree__parse_item__PredOrFunc_19 == (MR_Integer) 1);
                    if (parse_tree__parse_item__succeeded)
                      parse_tree__parse_item__succeeded = (parse_tree__parse_item__WithType_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__parse_func_decl_base_9_p_0(parse_tree__parse_item__ModuleName_12, parse_tree__parse_item__VarSet_13, parse_tree__parse_item__BaseTerm_33, parse_tree__parse_item__MaybeDetism_34, parse_tree__parse_item__Context_17, parse_tree__parse_item__SeqNum_18, parse_tree__parse_item__PurityAttrs_20, parse_tree__parse_item__QuantConstrAttrs_21, parse_tree__parse_item__MaybeIOM_22);
                      }
                    else
                      {
                        parse_tree__parse_item__parse_pred_decl_base_12_p_0(parse_tree__parse_item__PredOrFunc_19, parse_tree__parse_item__ModuleName_12, parse_tree__parse_item__VarSet_13, parse_tree__parse_item__BaseTerm_33, parse_tree__parse_item__WithType_36, parse_tree__parse_item__WithInst_35, parse_tree__parse_item__MaybeDetism_34, parse_tree__parse_item__Context_17, parse_tree__parse_item__SeqNum_18, parse_tree__parse_item__PurityAttrs_20, parse_tree__parse_item__QuantConstrAttrs_21, parse_tree__parse_item__MaybeIOM_22);
                      }
                  }
              }
          }
        else
          {
            MR_Word parse_tree__parse_item__TypeCtorInfo_173_173 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
            MR_Word parse_tree__parse_item__Specs_42;
            MR_Word parse_tree__parse_item__Var_126;
            MR_Word parse_tree__parse_item__Var_127;
            MR_Word parse_tree__parse_item__Var_128;
            MR_Word parse_tree__parse_item__Var_129;

            {
              parse_tree__parse_item__Var_126 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[2], parse_tree__parse_item__MaybeMaybeDetism_27);
            }
            {
              parse_tree__parse_item__Var_128 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[3], parse_tree__parse_item__MaybeWithInst_30);
            }
            {
              parse_tree__parse_item__Var_129 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[4], parse_tree__parse_item__MaybeWithType_32);
            }
            {
              parse_tree__parse_item__Var_127 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_173_173, parse_tree__parse_item__Var_128, parse_tree__parse_item__Var_129);
            }
            {
              parse_tree__parse_item__Specs_42 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_173_173, parse_tree__parse_item__Var_126, parse_tree__parse_item__Var_127);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_42));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Var_132;
        MR_Word parse_tree__parse_item__Var_133;
        MR_Word parse_tree__parse_item__Var_134;
        MR_Word parse_tree__parse_item__Var_137;
        MR_Word parse_tree__parse_item__Var_140;
        MR_Word parse_tree__parse_item__Var_143;
        MR_Word parse_tree__parse_item__Var_146;
        MR_Word parse_tree__parse_item__Var_147;
        MR_Word parse_tree__parse_item__Var_156;
        MR_Word parse_tree__parse_item__Var_157;
        MR_Word parse_tree__parse_item__Var_158;
        MR_Word parse_tree__parse_item__Var_159;
        MR_Word parse_tree__parse_item__Var_162;
        MR_Word parse_tree__parse_item__Pieces_168;
        MR_Word parse_tree__parse_item__Spec_169;

        {
          parse_tree__parse_item__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_133, 1) = ((MR_Box) (parse_tree__parse_item__Functor_14));
        }
        {
          parse_tree__parse_item__Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_147, 1) = ((MR_Box) (parse_tree__parse_item__Functor_14));
        }
        {
          parse_tree__parse_item__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_146, 0) = ((MR_Box) (parse_tree__parse_item__Var_147));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])));
        }
        {
          parse_tree__parse_item__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_143, 1) = ((MR_Box) (parse_tree__parse_item__Var_146));
        }
        {
          parse_tree__parse_item__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_140, 1) = ((MR_Box) (parse_tree__parse_item__Var_143));
        }
        {
          parse_tree__parse_item__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[216])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_137, 1) = ((MR_Box) (parse_tree__parse_item__Var_140));
        }
        {
          parse_tree__parse_item__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[215])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_134, 1) = ((MR_Box) (parse_tree__parse_item__Var_137));
        }
        {
          parse_tree__parse_item__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_132, 0) = ((MR_Box) (parse_tree__parse_item__Var_133));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_132, 1) = ((MR_Box) (parse_tree__parse_item__Var_134));
        }
        {
          parse_tree__parse_item__Pieces_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[214])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_168, 1) = ((MR_Box) (parse_tree__parse_item__Var_132));
        }
        {
          parse_tree__parse_item__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_159, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_168));
        }
        {
          parse_tree__parse_item__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_158, 0) = ((MR_Box) (parse_tree__parse_item__Var_159));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_157, 0) = ((MR_Box) (parse_tree__parse_item__Context_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_157, 1) = ((MR_Box) (parse_tree__parse_item__Var_158));
        }
        {
          parse_tree__parse_item__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_156, 0) = ((MR_Box) (parse_tree__parse_item__Var_157));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_169, 2) = ((MR_Box) (parse_tree__parse_item__Var_156));
        }
        {
          parse_tree__parse_item__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_162, 0) = ((MR_Box) (parse_tree__parse_item__Spec_169));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_162));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_with_type_suffix_4_p_0(
  MR_Word parse_tree__parse_item__VarSet_5,
  MR_Word parse_tree__parse_item__Term_6,
  MR_Word * parse_tree__parse_item__BeforeWithTypeTerm_7,
  MR_Word * parse_tree__parse_item__MaybeWithType_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_item__BeforeWithTypeTermPrime_10;
    MR_Word parse_tree__parse_item__TypeTerm_11;
    MR_Word parse_tree__parse_item__TypeQualifier_9;
    MR_Word parse_tree__parse_item__Var_17;
    MR_Word parse_tree__parse_item__Var_18;
    MR_Word parse_tree__parse_item__Var_19;
    MR_String parse_tree__parse_item__Var_37;
    MR_Word parse_tree__parse_item__Var_12;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_6, (MR_Integer) 0)));
        parse_tree__parse_item__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_6, (MR_Integer) 1)));
        parse_tree__parse_item__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_6, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_17, (MR_Integer) 0)));
            parse_tree__parse_item__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_17, (MR_Integer) 1)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_18, (MR_Integer) 0)));
                parse_tree__parse_item__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_18, (MR_Integer) 1)));
                parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__TypeQualifier_9, (MR_Integer) 0)));
                        if ((strcmp(parse_tree__parse_item__Var_37, (MR_String) ":") == 0))
                          parse_tree__parse_item__succeeded = MR_TRUE;
                        else
                        if ((strcmp(parse_tree__parse_item__Var_37, (MR_String) "with_type") == 0))
                          parse_tree__parse_item__succeeded = MR_TRUE;
                        else
                          parse_tree__parse_item__succeeded = MR_FALSE;
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__ContextPieces_13;
        MR_Word parse_tree__parse_item__MaybeType_14;

        *parse_tree__parse_item__BeforeWithTypeTerm_7 = parse_tree__parse_item__BeforeWithTypeTermPrime_10;
        {
          parse_tree__parse_item__ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[169]));
        }
        {
          parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[16]), parse_tree__parse_item__VarSet_5, parse_tree__parse_item__ContextPieces_13, parse_tree__parse_item__TypeTerm_11, &parse_tree__parse_item__MaybeType_14);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_item__MaybeWithType_8 = (MR_Word) parse_tree__parse_item__MaybeType_14;
        else
          {
            MR_Word parse_tree__parse_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeType_14, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__Var_34;

            {
              parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (parse_tree__parse_item__Type_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeWithType_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_34));
            }
          }
      }
    else
      {
        *parse_tree__parse_item__BeforeWithTypeTerm_7 = parse_tree__parse_item__Term_6;
        *parse_tree__parse_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[17]);
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_item__wrapper_arg_2;
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_LambdaHeadVar__2_59;

    {
      parse_tree__parse_item__conv0_LambdaHeadVar__2_59 = parse_tree__parse_item__IntroducedFrom__func__parse_func_decl_base__1030__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__parse_item__wrapper_arg_1));
    }
    parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_LambdaHeadVar__2_59));
    return parse_tree__parse_item__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__Term_12,
  MR_Word parse_tree__parse_item__MaybeDet_13,
  MR_Word parse_tree__parse_item__Context_14,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word parse_tree__parse_item__PurityAttrs_16,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_17,
  MR_Word * parse_tree__parse_item__MaybeIOM_18)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_item__ContextPieces_19;
    MR_Word parse_tree__parse_item__MaybeContext_20;

    {
      parse_tree__parse_item__ContextPieces_19 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_125_125, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[121]));
    }
    {
      parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__QuantConstrAttrs_17, parse_tree__parse_item__ContextPieces_19, &parse_tree__parse_item__MaybeContext_20);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeContext_20)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_item__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeContext_20, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_21));
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeContext_20, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeContext_20, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__InstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeContext_20, (MR_Integer) 2)));
        MR_Word parse_tree__parse_item__MaybeSugaredFuncTerm_25;
        MR_Word parse_tree__parse_item__ReturnTerm_26;
        MR_Word parse_tree__parse_item__Var_53;
        MR_String parse_tree__parse_item__Var_54;
        MR_Word parse_tree__parse_item__Var_55;
        MR_Word parse_tree__parse_item__Var_56;
        MR_Word parse_tree__parse_item__Var_57;
        MR_Word parse_tree__parse_item__Var_27;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 0)));
            parse_tree__parse_item__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 1)));
            parse_tree__parse_item__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_53)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_53, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_54, (MR_String) "=") == 0);
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_55)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__MaybeSugaredFuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_55, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_55, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_56)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__ReturnTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, (MR_Integer) 0)));
                            parse_tree__parse_item__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, (MR_Integer) 1)));
                            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__FuncTerm_28;
            MR_Word parse_tree__parse_item__MaybeFuncNameAndArgs_29;

            {
              parse_tree__parse_item__FuncTerm_28 = parse_tree__parse_item__desugar_field_access_1_f_0(parse_tree__parse_item__MaybeSugaredFuncTerm_25);
            }
            {
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__FuncTerm_28, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__ContextPieces_19, &parse_tree__parse_item__MaybeFuncNameAndArgs_29);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeFuncNameAndArgs_29)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_item__Specs_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeFuncNameAndArgs_29, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_116));
                }
              }
            else
              {
                MR_Word parse_tree__parse_item__FuncName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFuncNameAndArgs_29, (MR_Integer) 0)));
                MR_Word parse_tree__parse_item__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFuncNameAndArgs_29, (MR_Integer) 1)));
                MR_Word parse_tree__parse_item__ArgContextFunc_32;
                MR_Word parse_tree__parse_item__ArgTypesAndModes_34;
                MR_Word parse_tree__parse_item__ArgTMSpecs_35;
                MR_Word parse_tree__parse_item__RetContextPieces_36;
                MR_Word parse_tree__parse_item__MaybeRetTypeAndMode_37;
                MR_Word parse_tree__parse_item__Var_72;
                MR_Word parse_tree__parse_item__Var_77;
                MR_Word parse_tree__parse_item__RetTypeAndMode_38;

                {
                  parse_tree__parse_item__ArgContextFunc_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_32, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_32, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_decl_base_9_p_0_1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_32, 3) = ((MR_Box) (parse_tree__parse_item__ContextPieces_19));
                }
                {
                  parse_tree__parse_item__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_72, 0) = ((MR_Box) (parse_tree__parse_item__InstConstraints_24));
                }
                {
                  parse_tree__parse_type_name__parse_type_and_modes_10_p_0(parse_tree__parse_item__Var_72, (MR_Integer) 0, (MR_Integer) 3, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__ArgContextFunc_32, parse_tree__parse_item__ArgTerms_31, (MR_Integer) 1, &parse_tree__parse_item__ArgTypesAndModes_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_item__ArgTMSpecs_35);
                }
                {
                  parse_tree__parse_item__Var_77 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_125_125, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[123]));
                }
                {
                  parse_tree__parse_item__RetContextPieces_36 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_125_125, parse_tree__parse_item__ContextPieces_19, parse_tree__parse_item__Var_77);
                }
                {
                  parse_tree__parse_type_name__parse_type_and_mode_7_p_0(parse_tree__parse_item__Var_72, (MR_Integer) 0, (MR_Integer) 4, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__RetContextPieces_36, parse_tree__parse_item__ReturnTerm_26, &parse_tree__parse_item__MaybeRetTypeAndMode_37);
                }
                parse_tree__parse_item__succeeded = (parse_tree__parse_item__ArgTMSpecs_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeRetTypeAndMode_37)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      parse_tree__parse_item__RetTypeAndMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeRetTypeAndMode_37, (MR_Integer) 0)));
                  }
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__parse_func_decl_base_2_13_p_0(parse_tree__parse_item__FuncName_30, parse_tree__parse_item__ArgTypesAndModes_34, parse_tree__parse_item__RetTypeAndMode_38, parse_tree__parse_item__FuncTerm_28, parse_tree__parse_item__Term_12, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__MaybeDet_13, parse_tree__parse_item__ExistQVars_22, parse_tree__parse_item__Constraints_23, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__PurityAttrs_16, parse_tree__parse_item__MaybeIOM_18);
                  }
                else
                  {
                    MR_Word parse_tree__parse_item__Var_87;
                    MR_Word parse_tree__parse_item__Specs_118;

                    {
                      parse_tree__parse_item__Var_87 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_item__MaybeRetTypeAndMode_37);
                    }
                    {
                      parse_tree__parse_item__Specs_118 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__ArgTMSpecs_35, parse_tree__parse_item__Var_87);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_item__MaybeIOM_18 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_118));
                    }
                  }
              }
          }
        else
          {
            MR_Word parse_tree__parse_item__Spec_40;
            MR_Word parse_tree__parse_item__Var_107;
            MR_Word parse_tree__parse_item__Var_108;
            MR_Word parse_tree__parse_item__Var_109;
            MR_Word parse_tree__parse_item__Var_114;

            {
              parse_tree__parse_item__Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__Term_12);
            }
            {
              parse_tree__parse_item__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_108, 0) = ((MR_Box) (parse_tree__parse_item__Var_109));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[208])));
            }
            {
              parse_tree__parse_item__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_107, 0) = ((MR_Box) (parse_tree__parse_item__Var_108));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_40, 2) = ((MR_Box) (parse_tree__parse_item__Var_107));
            }
            {
              parse_tree__parse_item__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_114, 0) = ((MR_Box) (parse_tree__parse_item__Spec_40));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_114));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_decl_base_2_13_p_0(
  MR_Word parse_tree__parse_item__FuncName_14,
  MR_Word parse_tree__parse_item__Args_15,
  MR_Word parse_tree__parse_item__ReturnArg_16,
  MR_Word parse_tree__parse_item__FuncTerm_17,
  MR_Word parse_tree__parse_item__Term_18,
  MR_Word parse_tree__parse_item__VarSet_19,
  MR_Word parse_tree__parse_item__MaybeDetism_20,
  MR_Word parse_tree__parse_item__ExistQVars_21,
  MR_Word parse_tree__parse_item__Constraints_22,
  MR_Word parse_tree__parse_item__Context_23,
  MR_Integer parse_tree__parse_item__SeqNum_24,
  MR_Word parse_tree__parse_item__PurityAttrs_25,
  MR_Word * parse_tree__parse_item__MaybeIOM_26)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_55_55;
    MR_Word parse_tree__parse_item__MaybeTypeModeListKind_27;
    MR_Word parse_tree__parse_item__MaybePurity_28;
    MR_Word parse_tree__parse_item__Var_41;
    MR_Word parse_tree__parse_item__Var_42;
    MR_Word parse_tree__parse_item__Purity_30;
    MR_Word parse_tree__parse_item__Var_29;

    {
      parse_tree__parse_item__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 0) = ((MR_Box) (parse_tree__parse_item__ReturnArg_16));
    }
    parse_tree__parse_item__TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      parse_tree__parse_item__Var_42 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_55_55, parse_tree__parse_item__FuncTerm_17);
    }
    {
      parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(parse_tree__parse_item__Args_15, parse_tree__parse_item__Var_41, parse_tree__parse_item__Var_42, &parse_tree__parse_item__MaybeTypeModeListKind_27);
    }
    if ((parse_tree__parse_item__PurityAttrs_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__parse_item__MaybePurity_28 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[11]);
      }
    else
      {
        MR_Word parse_tree__parse_item__PurityAttr_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__PurityAttrs_25, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__PurityAttrs_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__PurityAttrs_25, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__Purity_68 = (MR_Word) parse_tree__parse_item__PurityAttr_65;

        if ((parse_tree__parse_item__PurityAttrs_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__parse_item__MaybePurity_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybePurity_28, 0) = ((MR_Box) (parse_tree__parse_item__Purity_68));
          }
        else
          {
            MR_Word parse_tree__parse_item__Spec_72;
            MR_Word parse_tree__parse_item__Var_83;
            MR_Word parse_tree__parse_item__Var_84;
            MR_Word parse_tree__parse_item__Var_89;

            {
              parse_tree__parse_item__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_84, 0) = ((MR_Box) (parse_tree__parse_item__Context_23));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[205])));
            }
            {
              parse_tree__parse_item__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_83, 0) = ((MR_Box) (parse_tree__parse_item__Var_84));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_72, 2) = ((MR_Box) (parse_tree__parse_item__Var_83));
            }
            {
              parse_tree__parse_item__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_89, 0) = ((MR_Box) (parse_tree__parse_item__Spec_72));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__MaybePurity_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybePurity_28, 0) = ((MR_Box) (parse_tree__parse_item__Var_89));
            }
          }
      }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeTypeModeListKind_27)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeTypeModeListKind_27, (MR_Integer) 0)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybePurity_28)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          parse_tree__parse_item__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybePurity_28, (MR_Integer) 0)));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__TVarSet_31;
        MR_Word parse_tree__parse_item__IVarSet_32;
        MR_Word parse_tree__parse_item__AllArgs_33;
        MR_Word parse_tree__parse_item__InconsistentVars_34;
        MR_Word parse_tree__parse_item__MaybeInconsistentSpec_35;
        MR_Word parse_tree__parse_item__Var_43;
        MR_Word parse_tree__parse_item__Var_46;

        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_55_55, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_item__VarSet_19, &parse_tree__parse_item__TVarSet_31);
        }
        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_55_55, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_item__VarSet_19, &parse_tree__parse_item__IVarSet_32);
        }
        {
          parse_tree__parse_item__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_43, 0) = ((MR_Box) (parse_tree__parse_item__ReturnArg_16));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__AllArgs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_item__Args_15, parse_tree__parse_item__Var_43);
        }
        {
          parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(parse_tree__parse_item__AllArgs_33, &parse_tree__parse_item__InconsistentVars_34);
        }
        {
          parse_tree__parse_item__Var_46 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_55_55, parse_tree__parse_item__Term_18);
        }
        {
          parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in function declaration", parse_tree__parse_item__Var_46, parse_tree__parse_item__IVarSet_32, parse_tree__parse_item__InconsistentVars_34, &parse_tree__parse_item__MaybeInconsistentSpec_35);
        }
        if ((parse_tree__parse_item__MaybeInconsistentSpec_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_item__ItemPredDecl_37;
            MR_Word parse_tree__parse_item__Item_38;
            MR_Word parse_tree__parse_item__Var_52;

            {
              parse_tree__parse_item__ItemPredDecl_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 0) = ((MR_Box) (parse_tree__parse_item__FuncName_14));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 2) = ((MR_Box) (parse_tree__parse_item__AllArgs_33));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 5) = ((MR_Box) (parse_tree__parse_item__MaybeDetism_20));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 7) = ((MR_Box) (parse_tree__parse_item__TVarSet_31));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 8) = ((MR_Box) (parse_tree__parse_item__IVarSet_32));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 9) = ((MR_Box) (parse_tree__parse_item__ExistQVars_21));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 10) = ((MR_Box) (parse_tree__parse_item__Purity_30));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 11) = ((MR_Box) (parse_tree__parse_item__Constraints_22));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 12) = ((MR_Box) (parse_tree__parse_item__Context_23));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_37, 13) = ((MR_Box) (parse_tree__parse_item__SeqNum_24));
            }
            {
              parse_tree__parse_item__Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_38, 1) = ((MR_Box) (parse_tree__parse_item__ItemPredDecl_37));
            }
            {
              parse_tree__parse_item__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Item_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__Spec_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeInconsistentSpec_35, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__Var_47;

            {
              parse_tree__parse_item__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 0) = ((MR_Box) (parse_tree__parse_item__Spec_39));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_26 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_47));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Specs_40;
        MR_Word parse_tree__parse_item__Var_53;
        MR_Word parse_tree__parse_item__Var_54;

        {
          parse_tree__parse_item__Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0, parse_tree__parse_item__MaybeTypeModeListKind_27);
        }
        {
          parse_tree__parse_item__Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0, parse_tree__parse_item__MaybePurity_28);
        }
        {
          parse_tree__parse_item__Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__Var_53, parse_tree__parse_item__Var_54);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_40));
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_item__wrapper_arg_2;
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_LambdaHeadVar__2_68;

    {
      parse_tree__parse_item__conv0_LambdaHeadVar__2_68 = parse_tree__parse_item__IntroducedFrom__func__parse_pred_decl_base__931__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__parse_item__wrapper_arg_1));
    }
    parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_LambdaHeadVar__2_68));
    return parse_tree__parse_item__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_decl_base_12_p_0(
  MR_Word parse_tree__parse_item__PredOrFunc_13,
  MR_Word parse_tree__parse_item__ModuleName_14,
  MR_Word parse_tree__parse_item__VarSet_15,
  MR_Word parse_tree__parse_item__PredTypeTerm_16,
  MR_Word parse_tree__parse_item__WithType_17,
  MR_Word parse_tree__parse_item__WithInst_18,
  MR_Word parse_tree__parse_item__MaybeDet_19,
  MR_Word parse_tree__parse_item__Context_20,
  MR_Integer parse_tree__parse_item__SeqNum_21,
  MR_Word parse_tree__parse_item__PurityAttrs_22,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_23,
  MR_Word * parse_tree__parse_item__MaybeIOM_24)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_item__ContextPieces_25;
    MR_Word parse_tree__parse_item__MaybeExistClassInstContext_26;
    MR_Word parse_tree__parse_item__MaybePurity_27;
    MR_Word parse_tree__parse_item__Var_58;
    MR_Word parse_tree__parse_item__Var_61;
    MR_Word parse_tree__parse_item__Var_62;
    MR_Word parse_tree__parse_item__Var_63;
    MR_Word parse_tree__parse_item__Var_64;
    MR_Word parse_tree__parse_item__ExistQVars_28;
    MR_Word parse_tree__parse_item__Constraints_29;
    MR_Word parse_tree__parse_item__InstConstraints_30;
    MR_Word parse_tree__parse_item__Purity_31;

    {
      parse_tree__parse_item__Var_58 = mercury__cord__singleton_1_f_0(parse_tree__parse_item__TypeCtorInfo_154_154, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[191]))));
    }
    {
      parse_tree__parse_item__Var_63 = parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(parse_tree__parse_item__PredOrFunc_13);
    }
    {
      parse_tree__parse_item__Var_62 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_154_154, parse_tree__parse_item__Var_63);
    }
    {
      parse_tree__parse_item__Var_64 = mercury__cord__singleton_1_f_0(parse_tree__parse_item__TypeCtorInfo_154_154, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[181]))));
    }
    {
      parse_tree__parse_item__Var_61 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_154_154, parse_tree__parse_item__Var_62, parse_tree__parse_item__Var_64);
    }
    {
      parse_tree__parse_item__ContextPieces_25 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_154_154, parse_tree__parse_item__Var_58, parse_tree__parse_item__Var_61);
    }
    {
      parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__parse_item__ModuleName_14, parse_tree__parse_item__VarSet_15, parse_tree__parse_item__QuantConstrAttrs_23, parse_tree__parse_item__ContextPieces_25, &parse_tree__parse_item__MaybeExistClassInstContext_26);
    }
    {
      parse_tree__parse_item__get_purity_from_attrs_3_p_0(parse_tree__parse_item__Context_20, parse_tree__parse_item__PurityAttrs_22, &parse_tree__parse_item__MaybePurity_27);
    }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeExistClassInstContext_26)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeExistClassInstContext_26, (MR_Integer) 0)));
        parse_tree__parse_item__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeExistClassInstContext_26, (MR_Integer) 1)));
        parse_tree__parse_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeExistClassInstContext_26, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybePurity_27)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          parse_tree__parse_item__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybePurity_27, (MR_Integer) 0)));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__TypeCtorInfo_155_155 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word parse_tree__parse_item__MaybePredNameAndArgs_32;

        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_item__TypeCtorInfo_155_155, parse_tree__parse_item__ModuleName_14, parse_tree__parse_item__PredTypeTerm_16, parse_tree__parse_item__VarSet_15, parse_tree__parse_item__ContextPieces_25, &parse_tree__parse_item__MaybePredNameAndArgs_32);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybePredNameAndArgs_32)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_item__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybePredNameAndArgs_32, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_24 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_33));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__Functor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybePredNameAndArgs_32, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__ArgTerms_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybePredNameAndArgs_32, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__ArgContextFunc_36;
            MR_Word parse_tree__parse_item__TypesAndModes_38;
            MR_Word parse_tree__parse_item__TMSpecs_39;
            MR_Word parse_tree__parse_item__MaybeTypeModeListKind_40;
            MR_Word parse_tree__parse_item__Var_81;
            MR_Word parse_tree__parse_item__Var_87;
            MR_Word parse_tree__parse_item__Var_41;

            {
              parse_tree__parse_item__ArgContextFunc_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_36, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_36, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_decl_base_12_p_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ArgContextFunc_36, 3) = ((MR_Box) (parse_tree__parse_item__ContextPieces_25));
            }
            {
              parse_tree__parse_item__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_81, 0) = ((MR_Box) (parse_tree__parse_item__InstConstraints_30));
            }
            {
              parse_tree__parse_type_name__parse_type_and_modes_10_p_0(parse_tree__parse_item__Var_81, (MR_Integer) 0, (MR_Integer) 2, parse_tree__parse_item__VarSet_15, parse_tree__parse_item__ArgContextFunc_36, parse_tree__parse_item__ArgTerms_35, (MR_Integer) 1, &parse_tree__parse_item__TypesAndModes_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_item__TMSpecs_39);
            }
            {
              parse_tree__parse_item__Var_87 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_155_155, parse_tree__parse_item__PredTypeTerm_16);
            }
            {
              parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(parse_tree__parse_item__TypesAndModes_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__Var_87, &parse_tree__parse_item__MaybeTypeModeListKind_40);
            }
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__TMSpecs_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeTypeModeListKind_40)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  parse_tree__parse_item__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeTypeModeListKind_40, (MR_Integer) 0)));
              }
            if (parse_tree__parse_item__succeeded)
              {
                MR_Word parse_tree__parse_item__Var_88;
                MR_Word parse_tree__parse_item__Var_42;
                MR_Word parse_tree__parse_item__Var_44;
                MR_Word parse_tree__parse_item__Var_43;

                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__WithInst_18)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithInst_18, (MR_Integer) 0)));
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__TypesAndModes_38)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__TypesAndModes_38, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__TypesAndModes_38, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_88)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__parse_item__succeeded)
                          parse_tree__parse_item__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_88, (MR_Integer) 0)));
                      }
                  }
                if (parse_tree__parse_item__succeeded)
                  {
                    MR_Word parse_tree__parse_item__Spec_46;
                    MR_Word parse_tree__parse_item__Var_102;
                    MR_Word parse_tree__parse_item__Var_103;
                    MR_Word parse_tree__parse_item__Var_104;
                    MR_Word parse_tree__parse_item__Var_109;

                    {
                      parse_tree__parse_item__Var_104 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_155_155, parse_tree__parse_item__PredTypeTerm_16);
                    }
                    {
                      parse_tree__parse_item__Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_103, 0) = ((MR_Box) (parse_tree__parse_item__Var_104));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[206])));
                    }
                    {
                      parse_tree__parse_item__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_102, 0) = ((MR_Box) (parse_tree__parse_item__Var_103));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_item__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_46, 2) = ((MR_Box) (parse_tree__parse_item__Var_102));
                    }
                    {
                      parse_tree__parse_item__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_109, 0) = ((MR_Box) (parse_tree__parse_item__Spec_46));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_item__MaybeIOM_24 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_109));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_item__Var_111;
                    MR_Word parse_tree__parse_item__Var_47;
                    MR_Word parse_tree__parse_item__Var_50;
                    MR_Word parse_tree__parse_item__Var_48;
                    MR_Word parse_tree__parse_item__Var_49;

                    parse_tree__parse_item__succeeded = (parse_tree__parse_item__WithInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__WithType_17)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithType_17, (MR_Integer) 0)));
                            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__TypesAndModes_38)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_item__succeeded)
                              {
                                parse_tree__parse_item__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__TypesAndModes_38, (MR_Integer) 0)));
                                parse_tree__parse_item__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__TypesAndModes_38, (MR_Integer) 1)));
                                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_111)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_item__succeeded)
                                  {
                                    parse_tree__parse_item__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_111, (MR_Integer) 0)));
                                    parse_tree__parse_item__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_111, (MR_Integer) 1)));
                                  }
                              }
                          }
                      }
                    if (parse_tree__parse_item__succeeded)
                      {
                        MR_Word parse_tree__parse_item__Var_125;
                        MR_Word parse_tree__parse_item__Var_126;
                        MR_Word parse_tree__parse_item__Var_127;
                        MR_Word parse_tree__parse_item__Var_132;
                        MR_Word parse_tree__parse_item__Spec_144;

                        {
                          parse_tree__parse_item__Var_127 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_155_155, parse_tree__parse_item__PredTypeTerm_16);
                        }
                        {
                          parse_tree__parse_item__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_126, 0) = ((MR_Box) (parse_tree__parse_item__Var_127));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[207])));
                        }
                        {
                          parse_tree__parse_item__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_125, 0) = ((MR_Box) (parse_tree__parse_item__Var_126));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_item__Spec_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_144, 2) = ((MR_Box) (parse_tree__parse_item__Var_125));
                        }
                        {
                          parse_tree__parse_item__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_132, 0) = ((MR_Box) (parse_tree__parse_item__Spec_144));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_item__MaybeIOM_24 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_132));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_item__TypeVarSet_51;
                        MR_Word parse_tree__parse_item__InstVarSet_52;
                        MR_Word parse_tree__parse_item__InconsistentVars_53;
                        MR_Word parse_tree__parse_item__MaybeInconsistentSpec_54;
                        MR_String parse_tree__parse_item__Var_134;
                        MR_Word parse_tree__parse_item__Var_135;

                        {
                          mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_155_155, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_item__VarSet_15, &parse_tree__parse_item__TypeVarSet_51);
                        }
                        {
                          mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_155_155, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_item__VarSet_15, &parse_tree__parse_item__InstVarSet_52);
                        }
                        {
                          parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_type_and_modes_2_p_0(parse_tree__parse_item__TypesAndModes_38, &parse_tree__parse_item__InconsistentVars_53);
                        }
                        {
                          parse_tree__parse_item__Var_134 = parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(parse_tree__parse_item__PredOrFunc_13);
                        }
                        {
                          parse_tree__parse_item__Var_135 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_155_155, parse_tree__parse_item__PredTypeTerm_16);
                        }
                        {
                          parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0(parse_tree__parse_item__Var_134, parse_tree__parse_item__Var_135, parse_tree__parse_item__InstVarSet_52, parse_tree__parse_item__InconsistentVars_53, &parse_tree__parse_item__MaybeInconsistentSpec_54);
                        }
                        if ((parse_tree__parse_item__MaybeInconsistentSpec_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            MR_Word parse_tree__parse_item__ItemPredDecl_56;
                            MR_Word parse_tree__parse_item__Item_57;
                            MR_Word parse_tree__parse_item__Var_138;

                            {
                              parse_tree__parse_item__ItemPredDecl_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 0) = ((MR_Box) (parse_tree__parse_item__Functor_34));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 1) = ((MR_Box) (parse_tree__parse_item__PredOrFunc_13));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 2) = ((MR_Box) (parse_tree__parse_item__TypesAndModes_38));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 3) = ((MR_Box) (parse_tree__parse_item__WithType_17));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 4) = ((MR_Box) (parse_tree__parse_item__WithInst_18));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 5) = ((MR_Box) (parse_tree__parse_item__MaybeDet_19));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 7) = ((MR_Box) (parse_tree__parse_item__TypeVarSet_51));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 8) = ((MR_Box) (parse_tree__parse_item__InstVarSet_52));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 9) = ((MR_Box) (parse_tree__parse_item__ExistQVars_28));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 10) = ((MR_Box) (parse_tree__parse_item__Purity_31));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 11) = ((MR_Box) (parse_tree__parse_item__Constraints_29));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 12) = ((MR_Box) (parse_tree__parse_item__Context_20));
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemPredDecl_56, 13) = ((MR_Box) (parse_tree__parse_item__SeqNum_21));
                            }
                            {
                              parse_tree__parse_item__Item_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_57, 1) = ((MR_Box) (parse_tree__parse_item__ItemPredDecl_56));
                            }
                            {
                              parse_tree__parse_item__Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_138, 0) = ((MR_Box) (parse_tree__parse_item__Item_57));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *parse_tree__parse_item__MaybeIOM_24 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_138));
                            }
                          }
                        else
                          {
                            MR_Word parse_tree__parse_item__Var_136;
                            MR_Word parse_tree__parse_item__Spec_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeInconsistentSpec_54, (MR_Integer) 0)));

                            {
                              parse_tree__parse_item__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_136, 0) = ((MR_Box) (parse_tree__parse_item__Spec_145));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              *parse_tree__parse_item__MaybeIOM_24 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_136));
                            }
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_item__Var_139;
                MR_Word parse_tree__parse_item__Specs_150;

                {
                  parse_tree__parse_item__Var_139 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item__parse_tree__parse_item__type_ctor_info_type_mode_list_kind_0, parse_tree__parse_item__MaybeTypeModeListKind_40);
                }
                {
                  parse_tree__parse_item__Specs_150 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__TMSpecs_39, parse_tree__parse_item__Var_139);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_24 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_150));
                }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Var_140;
        MR_Word parse_tree__parse_item__Var_141;
        MR_Word parse_tree__parse_item__Specs_153;

        {
          parse_tree__parse_item__Var_140 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0, parse_tree__parse_item__MaybePurity_27);
        }
        {
          parse_tree__parse_item__Var_141 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__parse_item_scalar_common_2[0], parse_tree__parse_item__MaybeExistClassInstContext_26);
        }
        {
          parse_tree__parse_item__Specs_153 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__Var_140, parse_tree__parse_item__Var_141);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_153));
        }
      }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__pred_or_func_decl_pieces_1_f_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__HeadVar__2_2;

    switch (parse_tree__parse_item__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__parse_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[176]);
        break;
      case (MR_Integer) 0:
        parse_tree__parse_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[178]);
        break;
    }
    return parse_tree__parse_item__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__parse_item__in_pred_or_func_decl_desc_1_f_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_String parse_tree__parse_item__HeadVar__2_2;

    switch (parse_tree__parse_item__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        parse_tree__parse_item__HeadVar__2_2 = (MR_String) "in function declaration";
        break;
      case (MR_Integer) 0:
        parse_tree__parse_item__HeadVar__2_2 = (MR_String) "in predicate declaration";
        break;
    }
    return parse_tree__parse_item__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__get_purity_from_attrs_3_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word * parse_tree__parse_item__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    if ((parse_tree__parse_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[11]);
      }
    else
      {
        MR_Word parse_tree__parse_item__PurityAttr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__PurityAttrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__Purity_10 = (MR_Word) parse_tree__parse_item__PurityAttr_7;

        if ((parse_tree__parse_item__PurityAttrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_item__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Purity_10));
          }
        else
          {
            MR_Word parse_tree__parse_item__Spec_14;
            MR_Word parse_tree__parse_item__Var_25;
            MR_Word parse_tree__parse_item__Var_26;
            MR_Word parse_tree__parse_item__Var_31;

            {
              parse_tree__parse_item__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_26, 0) = ((MR_Box) (parse_tree__parse_item__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[205])));
            }
            {
              parse_tree__parse_item__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_25, 0) = ((MR_Box) (parse_tree__parse_item__Var_26));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_14, 2) = ((MR_Box) (parse_tree__parse_item__Var_25));
            }
            {
              parse_tree__parse_item__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_31, 0) = ((MR_Box) (parse_tree__parse_item__Spec_14));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_31));
            }
          }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_item__wrapper_arg_2;
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_Component_6;

    {
      parse_tree__parse_item__conv0_Component_6 = parse_tree__parse_item__wrap_nth_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Integer) parse_tree__parse_item__wrapper_arg_1));
    }
    parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_Component_6));
    return parse_tree__parse_item__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_item__check_type_and_mode_list_is_consistent_4_p_0(
  MR_Word parse_tree__parse_item__TypesAndModes_5,
  MR_Word parse_tree__parse_item__MaybeRetTypeAndMode_6,
  MR_Word parse_tree__parse_item__Context_7,
  MR_Word * parse_tree__parse_item__MaybeKind_8)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__WithModeArgNums0_9;
    MR_Word parse_tree__parse_item__WithoutModeArgNums0_10;
    MR_Word parse_tree__parse_item__WithModeArgNums_11;
    MR_Word parse_tree__parse_item__WithoutModeArgNums_12;

    {
      parse_tree__parse_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, parse_tree__parse_item__TypesAndModes_5, &parse_tree__parse_item__WithModeArgNums0_9, &parse_tree__parse_item__WithoutModeArgNums0_10);
    }
    if ((parse_tree__parse_item__MaybeRetTypeAndMode_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__parse_item__WithModeArgNums_11 = parse_tree__parse_item__WithModeArgNums0_9;
        parse_tree__parse_item__WithoutModeArgNums_12 = parse_tree__parse_item__WithoutModeArgNums0_10;
      }
    else
      {
        MR_Word parse_tree__parse_item__RetTypeAndMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeRetTypeAndMode_6, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__parse_item__RetTypeAndMode_13)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              parse_tree__parse_item__WithModeArgNums_11 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__parse_item__WithModeArgNums0_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[201]));
            }
            parse_tree__parse_item__WithoutModeArgNums_12 = parse_tree__parse_item__WithoutModeArgNums0_10;
          }
        else
          {
            parse_tree__parse_item__WithModeArgNums_11 = parse_tree__parse_item__WithModeArgNums0_9;
            {
              parse_tree__parse_item__WithoutModeArgNums_12 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__parse_item__WithoutModeArgNums0_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[201]));
            }
          }
      }
    if ((parse_tree__parse_item__WithModeArgNums_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__parse_item__WithoutModeArgNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *parse_tree__parse_item__MaybeKind_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[8]);
        }
      else
        {
          *parse_tree__parse_item__MaybeKind_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[9]);
        }
    else
    if ((parse_tree__parse_item__WithoutModeArgNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_item__MaybeKind_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[10]);
      }
    else
      {
        MR_Integer parse_tree__parse_item__FirstWithout_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithoutModeArgNums_12, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__RestWithout_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithoutModeArgNums_12, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__IdPieces_25;
        MR_Word parse_tree__parse_item__Pieces_30;
        MR_Word parse_tree__parse_item__Spec_31;
        MR_Word parse_tree__parse_item__Var_63;
        MR_Word parse_tree__parse_item__Var_67;
        MR_Word parse_tree__parse_item__Var_68;
        MR_Word parse_tree__parse_item__Var_69;
        MR_Word parse_tree__parse_item__Var_70;
        MR_Word parse_tree__parse_item__Var_73;

        if ((parse_tree__parse_item__RestWithout_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_item__Var_52;
            MR_Word parse_tree__parse_item__Var_53;

            {
              parse_tree__parse_item__Var_53 = parse_tree__parse_item__wrap_nth_2_f_0((MR_Integer) 0, parse_tree__parse_item__FirstWithout_23);
            }
            {
              parse_tree__parse_item__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Var_53));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])));
            }
            {
              parse_tree__parse_item__IdPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__IdPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[202])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__IdPieces_25, 1) = ((MR_Box) (parse_tree__parse_item__Var_52));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_item__WithoutArgNumPieces_28;
            MR_Word parse_tree__parse_item__WithoutArgNumsPieces_29;
            MR_Word parse_tree__parse_item__Var_41;

            {
              parse_tree__parse_item__WithoutArgNumPieces_28 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__parse_item__TypeCtorInfo_81_81, (MR_Word) &parse_tree__parse_item_scalar_common_6[0], parse_tree__parse_item__WithoutModeArgNums_12);
            }
            {
              parse_tree__parse_item__WithoutArgNumsPieces_29 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__parse_item__WithoutArgNumPieces_28);
            }
            {
              parse_tree__parse_item__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[203])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 1) = ((MR_Box) (parse_tree__parse_item__WithoutArgNumsPieces_29));
            }
            {
              parse_tree__parse_item__IdPieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_81_81, parse_tree__parse_item__Var_41, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70]));
            }
          }
        {
          parse_tree__parse_item__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_63, 1) = ((MR_Box) (parse_tree__parse_item__IdPieces_25));
        }
        {
          parse_tree__parse_item__Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[204])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_30, 1) = ((MR_Box) (parse_tree__parse_item__Var_63));
        }
        {
          parse_tree__parse_item__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_70, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_30));
        }
        {
          parse_tree__parse_item__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_69, 0) = ((MR_Box) (parse_tree__parse_item__Var_70));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_68, 0) = ((MR_Box) (parse_tree__parse_item__Context_7));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_68, 1) = ((MR_Box) (parse_tree__parse_item__Var_69));
        }
        {
          parse_tree__parse_item__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_67, 0) = ((MR_Box) (parse_tree__parse_item__Var_68));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_31, 2) = ((MR_Box) (parse_tree__parse_item__Var_67));
        }
        {
          parse_tree__parse_item__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_73, 0) = ((MR_Box) (parse_tree__parse_item__Spec_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeKind_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_73));
        }
      }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__wrap_nth_2_f_0(
  MR_Word parse_tree__parse_item__MaybeAddPredix_4,
  MR_Integer parse_tree__parse_item__ArgNum_5)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__ArgNum_5 < (MR_Integer) 0);
    MR_Word parse_tree__parse_item__Component_6;

    if (parse_tree__parse_item__succeeded)
      switch (parse_tree__parse_item__MaybeAddPredix_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__parse_item__Component_6 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[199]);
          }
          break;
        case (MR_Integer) 0:
          {
            parse_tree__parse_item__Component_6 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[200]);
          }
          break;
      }
    else
      {
        parse_tree__parse_item__Component_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__parse_item__Component_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), parse_tree__parse_item__Component_6, 1) = ((MR_Box) (parse_tree__parse_item__ArgNum_5));
      }
    return parse_tree__parse_item__Component_6;
  }
}

static void MR_CALL 
parse_tree__parse_item__classify_type_and_mode_list_4_p_0(
  MR_Integer parse_tree__parse_item__ArgNum_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word * parse_tree__parse_item__HeadVar__3_3,
  MR_Word * parse_tree__parse_item__HeadVar__4_4)
{
  {
    MR_bool parse_tree__parse_item__succeeded;

    if ((parse_tree__parse_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_item__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word parse_tree__parse_item__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_item__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_item__WithModeArgNums0_11;
        MR_Word parse_tree__parse_item__WithoutModeArgNums0_12;
        MR_Integer parse_tree__parse_item__Var_16 = (parse_tree__parse_item__ArgNum_1 + (MR_Integer) 1);

        {
          parse_tree__parse_item__classify_type_and_mode_list_4_p_0(parse_tree__parse_item__Var_16, parse_tree__parse_item__Tail_8, &parse_tree__parse_item__WithModeArgNums0_11, &parse_tree__parse_item__WithoutModeArgNums0_12);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__Head_7)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__ArgNum_1));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_item__WithModeArgNums0_11));
            }
            *parse_tree__parse_item__HeadVar__4_4 = parse_tree__parse_item__WithoutModeArgNums0_12;
          }
        else
          {
            *parse_tree__parse_item__HeadVar__3_3 = parse_tree__parse_item__WithModeArgNums0_11;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__ArgNum_1));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_item__WithoutModeArgNums0_12));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_defn_or_decl_item_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__ArgTerms_12,
  MR_Word parse_tree__parse_item__IsInClass_13,
  MR_Word parse_tree__parse_item__Context_14,
  MR_Integer parse_tree__parse_item__SeqNum_15,
  MR_Word parse_tree__parse_item__AllowModeDefn_16,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_17,
  MR_Word * parse_tree__parse_item__MaybeIOM_18)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_item__SubTerm_19;
    MR_Word parse_tree__parse_item__Var_25;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__SubTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_12, (MR_Integer) 0)));
        parse_tree__parse_item__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__ArgTerms_12, (MR_Integer) 1)));
        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__HeadTerm_20;
        MR_Word parse_tree__parse_item__BodyTerm_21;
        MR_Word parse_tree__parse_item__Var_26;
        MR_String parse_tree__parse_item__Var_27;
        MR_Word parse_tree__parse_item__Var_28;
        MR_Word parse_tree__parse_item__Var_29;
        MR_Word parse_tree__parse_item__Var_30;
        MR_Word parse_tree__parse_item__Var_22;

        parse_tree__parse_item__succeeded = (parse_tree__parse_item__AllowModeDefn_16 == (MR_Integer) 0);
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__SubTerm_19)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_19, (MR_Integer) 0)));
                parse_tree__parse_item__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_19, (MR_Integer) 1)));
                parse_tree__parse_item__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__SubTerm_19, (MR_Integer) 2)));
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_26)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_26, (MR_Integer) 0)));
                    parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_27, (MR_String) "==") == 0);
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_28)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__HeadTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_28, (MR_Integer) 0)));
                            parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_28, (MR_Integer) 1)));
                            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_29)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_item__succeeded)
                              {
                                parse_tree__parse_item__BodyTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, (MR_Integer) 0)));
                                parse_tree__parse_item__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, (MR_Integer) 1)));
                                parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_inst_mode_defn__parse_mode_defn_7_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__HeadTerm_20, parse_tree__parse_item__BodyTerm_21, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__MaybeIOM_18);
          }
        else
          {
            parse_tree__parse_item__parse_mode_decl_8_p_0(parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__SubTerm_19, parse_tree__parse_item__IsInClass_13, parse_tree__parse_item__Context_14, parse_tree__parse_item__SeqNum_15, parse_tree__parse_item__QuantConstrAttrs_17, parse_tree__parse_item__MaybeIOM_18);
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Spec_24;
        MR_Word parse_tree__parse_item__Var_56;
        MR_Word parse_tree__parse_item__Var_57;
        MR_Word parse_tree__parse_item__Var_62;

        {
          parse_tree__parse_item__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_57, 0) = ((MR_Box) (parse_tree__parse_item__Context_14));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[198])));
        }
        {
          parse_tree__parse_item__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, 0) = ((MR_Box) (parse_tree__parse_item__Var_57));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_24, 2) = ((MR_Box) (parse_tree__parse_item__Var_56));
        }
        {
          parse_tree__parse_item__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_62, 0) = ((MR_Box) (parse_tree__parse_item__Spec_24));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_62));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_8_p_0(
  MR_Word parse_tree__parse_item__ModuleName_9,
  MR_Word parse_tree__parse_item__VarSet_10,
  MR_Word parse_tree__parse_item__Term_11,
  MR_Word parse_tree__parse_item__IsInClass_12,
  MR_Word parse_tree__parse_item__Context_13,
  MR_Integer parse_tree__parse_item__SeqNum_14,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_15,
  MR_Word * parse_tree__parse_item__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_80_80;
    MR_Word parse_tree__parse_item__DeclWords_17;
    MR_Word parse_tree__parse_item__DetismContextPieces_18;
    MR_Word parse_tree__parse_item__BeforeDetismTerm_19;
    MR_Word parse_tree__parse_item__MaybeMaybeDetism_20;
    MR_Word parse_tree__parse_item__WithInstContextPieces_21;
    MR_Word parse_tree__parse_item__MaybeWithInst_23;
    MR_Word parse_tree__parse_item__BaseTerm_24;
    MR_Word parse_tree__parse_item__Var_34;
    MR_Word parse_tree__parse_item__Var_37;
    MR_Word parse_tree__parse_item__Var_42;
    MR_Word parse_tree__parse_item__Var_45;
    MR_Word parse_tree__parse_item__Var_48;
    MR_Word parse_tree__parse_item__MaybeDetism_25;
    MR_Word parse_tree__parse_item__WithInst_26;

    switch (parse_tree__parse_item__IsInClass_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_item__DeclWords_17 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[189]);
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_item__DeclWords_17 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[190]);
        }
        break;
    }
    parse_tree__parse_item__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_item__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_37, 0) = ((MR_Box) (parse_tree__parse_item__DeclWords_17));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[193])));
    }
    {
      parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[191])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (parse_tree__parse_item__Var_37));
    }
    {
      parse_tree__parse_item__DetismContextPieces_18 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_80_80, parse_tree__parse_item__Var_34);
    }
    {
      parse_tree__parse_item__parse_determinism_suffix_5_p_0(parse_tree__parse_item__VarSet_10, parse_tree__parse_item__DetismContextPieces_18, parse_tree__parse_item__Term_11, &parse_tree__parse_item__BeforeDetismTerm_19, &parse_tree__parse_item__MaybeMaybeDetism_20);
    }
    {
      parse_tree__parse_item__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[196])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_48, 1) = ((MR_Box) (parse_tree__parse_item__Var_37));
    }
    {
      parse_tree__parse_item__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[195])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_45, 1) = ((MR_Box) (parse_tree__parse_item__Var_48));
    }
    {
      parse_tree__parse_item__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[194])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_42, 1) = ((MR_Box) (parse_tree__parse_item__Var_45));
    }
    {
      parse_tree__parse_item__WithInstContextPieces_21 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_80_80, parse_tree__parse_item__Var_42);
    }
    {
      parse_tree__parse_item__parse_with_inst_suffix_5_p_0(parse_tree__parse_item__VarSet_10, parse_tree__parse_item__WithInstContextPieces_21, parse_tree__parse_item__BeforeDetismTerm_19, &parse_tree__parse_item__BaseTerm_24, &parse_tree__parse_item__MaybeWithInst_23);
    }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeMaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__MaybeDetism_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeMaybeDetism_20, (MR_Integer) 0)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeWithInst_23)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          parse_tree__parse_item__WithInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeWithInst_23, (MR_Integer) 0)));
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__Var_27;
        MR_Word parse_tree__parse_item__Var_28;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeDetism_25)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeDetism_25, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__WithInst_26)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              parse_tree__parse_item__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__WithInst_26, (MR_Integer) 0)));
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Spec_30;
            MR_Word parse_tree__parse_item__Var_69;
            MR_Word parse_tree__parse_item__Var_70;
            MR_Word parse_tree__parse_item__Var_71;
            MR_Word parse_tree__parse_item__Var_76;

            {
              parse_tree__parse_item__Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__Term_11);
            }
            {
              parse_tree__parse_item__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_70, 0) = ((MR_Box) (parse_tree__parse_item__Var_71));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[197])));
            }
            {
              parse_tree__parse_item__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_69, 0) = ((MR_Box) (parse_tree__parse_item__Var_70));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_30, 2) = ((MR_Box) (parse_tree__parse_item__Var_69));
            }
            {
              parse_tree__parse_item__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_76, 0) = ((MR_Box) (parse_tree__parse_item__Spec_30));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_76));
            }
          }
        else
          {
            parse_tree__parse_item__parse_mode_decl_base_9_p_0(parse_tree__parse_item__ModuleName_9, parse_tree__parse_item__VarSet_10, parse_tree__parse_item__BaseTerm_24, parse_tree__parse_item__Context_13, parse_tree__parse_item__SeqNum_14, parse_tree__parse_item__WithInst_26, parse_tree__parse_item__MaybeDetism_25, parse_tree__parse_item__QuantConstrAttrs_15, parse_tree__parse_item__MaybeIOM_16);
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Specs_31;
        MR_Word parse_tree__parse_item__Var_78;
        MR_Word parse_tree__parse_item__Var_79;

        {
          parse_tree__parse_item__Var_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[2], parse_tree__parse_item__MaybeMaybeDetism_20);
        }
        {
          parse_tree__parse_item__Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[3], parse_tree__parse_item__MaybeWithInst_23);
        }
        {
          parse_tree__parse_item__Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__Var_78, parse_tree__parse_item__Var_79);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_31));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_with_inst_suffix_5_p_0(
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__ContextPieces_7,
  MR_Word parse_tree__parse_item__Term_8,
  MR_Word * parse_tree__parse_item__BeforeWithInstTerm_9,
  MR_Word * parse_tree__parse_item__MaybeWithInst_10)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_item__BeforeWithInstTermPrime_11;
    MR_Word parse_tree__parse_item__InstTerm_12;
    MR_Word parse_tree__parse_item__Var_17;
    MR_String parse_tree__parse_item__Var_18;
    MR_Word parse_tree__parse_item__Var_19;
    MR_Word parse_tree__parse_item__Var_20;
    MR_Word parse_tree__parse_item__Var_21;
    MR_Word parse_tree__parse_item__Var_13;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 0)));
        parse_tree__parse_item__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 1)));
        parse_tree__parse_item__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_17)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_17, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_18, (MR_String) "with_inst") == 0);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_19)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__BeforeWithInstTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_19, (MR_Integer) 0)));
                    parse_tree__parse_item__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_19, (MR_Integer) 1)));
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_20)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__InstTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_20, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_20, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__MaybeInst_14;

        *parse_tree__parse_item__BeforeWithInstTerm_9 = parse_tree__parse_item__BeforeWithInstTermPrime_11;
        {
          parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__VarSet_6, parse_tree__parse_item__ContextPieces_7, parse_tree__parse_item__InstTerm_12, &parse_tree__parse_item__MaybeInst_14);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeInst_14)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_item__MaybeWithInst_10 = (MR_Word) parse_tree__parse_item__MaybeInst_14;
        else
          {
            MR_Word parse_tree__parse_item__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeInst_14, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__Var_23;

            {
              parse_tree__parse_item__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, 0) = ((MR_Box) (parse_tree__parse_item__Inst_15));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeWithInst_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_23));
            }
          }
      }
    else
      {
        *parse_tree__parse_item__BeforeWithInstTerm_9 = parse_tree__parse_item__Term_8;
        *parse_tree__parse_item__MaybeWithInst_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[5]);
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_determinism_suffix_5_p_0(
  MR_Word parse_tree__parse_item__VarSet_6,
  MR_Word parse_tree__parse_item__ContextPieces_7,
  MR_Word parse_tree__parse_item__Term_8,
  MR_Word * parse_tree__parse_item__BeforeDetismTerm_9,
  MR_Word * parse_tree__parse_item__MaybeMaybeDetism_10)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_item__BeforeDetismTermPrime_13;
    MR_Word parse_tree__parse_item__DetismTerm_14;
    MR_Word parse_tree__parse_item__Args_11;
    MR_Word parse_tree__parse_item__Var_21;
    MR_String parse_tree__parse_item__Var_22;
    MR_Word parse_tree__parse_item__Var_23;
    MR_Word parse_tree__parse_item__Var_24;
    MR_Word parse_tree__parse_item__Var_12;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 0)));
        parse_tree__parse_item__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 1)));
        parse_tree__parse_item__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_8, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_21)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_21, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_22, (MR_String) "is") == 0);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Args_11)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__BeforeDetismTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Args_11, (MR_Integer) 0)));
                    parse_tree__parse_item__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Args_11, (MR_Integer) 1)));
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_23)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__DetismTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__Detism_17;
        MR_String parse_tree__parse_item__DetismFunctor_15;
        MR_Word parse_tree__parse_item__Var_25;
        MR_Word parse_tree__parse_item__Var_26;
        MR_Word parse_tree__parse_item__Var_16;

        *parse_tree__parse_item__BeforeDetismTerm_9 = parse_tree__parse_item__BeforeDetismTermPrime_13;
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__DetismTerm_14)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__DetismTerm_14, (MR_Integer) 0)));
            parse_tree__parse_item__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__DetismTerm_14, (MR_Integer) 1)));
            parse_tree__parse_item__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__DetismTerm_14, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_25)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__DetismFunctor_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_25, (MR_Integer) 0)));
                    {
                      parse_tree__parse_item__succeeded = parse_tree__parse_inst_mode_name__standard_det_2_p_0(parse_tree__parse_item__DetismFunctor_15, &parse_tree__parse_item__Detism_17);
                    }
                  }
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Var_27;

            {
              parse_tree__parse_item__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_27, 0) = ((MR_Box) (parse_tree__parse_item__Detism_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeMaybeDetism_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_27));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_Word parse_tree__parse_item__TypeCtorInfo_55_55;
            MR_String parse_tree__parse_item__DetismTermStr_18;
            MR_Word parse_tree__parse_item__Pieces_19;
            MR_Word parse_tree__parse_item__Spec_20;
            MR_Word parse_tree__parse_item__Var_28;
            MR_Word parse_tree__parse_item__Var_29;
            MR_Word parse_tree__parse_item__Var_31;
            MR_Word parse_tree__parse_item__Var_34;
            MR_Word parse_tree__parse_item__Var_35;
            MR_Word parse_tree__parse_item__Var_44;
            MR_Word parse_tree__parse_item__Var_45;
            MR_Word parse_tree__parse_item__Var_46;
            MR_Word parse_tree__parse_item__Var_47;
            MR_Word parse_tree__parse_item__Var_48;
            MR_Word parse_tree__parse_item__Var_51;

            {
              parse_tree__parse_item__DetismTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_item__TypeCtorInfo_54_54, parse_tree__parse_item__VarSet_6, parse_tree__parse_item__DetismTerm_14);
            }
            parse_tree__parse_item__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              parse_tree__parse_item__Var_28 = mercury__cord__list_1_f_0(parse_tree__parse_item__TypeCtorInfo_55_55, parse_tree__parse_item__ContextPieces_7);
            }
            {
              parse_tree__parse_item__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_35, 1) = ((MR_Box) (parse_tree__parse_item__DetismTermStr_18));
            }
            {
              parse_tree__parse_item__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 0) = ((MR_Box) (parse_tree__parse_item__Var_35));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[70])));
            }
            {
              parse_tree__parse_item__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[188])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_31, 1) = ((MR_Box) (parse_tree__parse_item__Var_34));
            }
            {
              parse_tree__parse_item__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, 1) = ((MR_Box) (parse_tree__parse_item__Var_31));
            }
            {
              parse_tree__parse_item__Pieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_55_55, parse_tree__parse_item__Var_28, parse_tree__parse_item__Var_29);
            }
            {
              parse_tree__parse_item__Var_46 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_54_54, parse_tree__parse_item__DetismTerm_14);
            }
            {
              parse_tree__parse_item__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_48, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_19));
            }
            {
              parse_tree__parse_item__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 0) = ((MR_Box) (parse_tree__parse_item__Var_48));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_45, 0) = ((MR_Box) (parse_tree__parse_item__Var_46));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_45, 1) = ((MR_Box) (parse_tree__parse_item__Var_47));
            }
            {
              parse_tree__parse_item__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, 0) = ((MR_Box) (parse_tree__parse_item__Var_45));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_20, 2) = ((MR_Box) (parse_tree__parse_item__Var_44));
            }
            {
              parse_tree__parse_item__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Spec_20));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeMaybeDetism_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_51));
            }
          }
      }
    else
      {
        *parse_tree__parse_item__BeforeDetismTerm_9 = parse_tree__parse_item__Term_8;
        *parse_tree__parse_item__MaybeMaybeDetism_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[4]);
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_mode_decl_base_9_p_0(
  MR_Word parse_tree__parse_item__ModuleName_10,
  MR_Word parse_tree__parse_item__VarSet_11,
  MR_Word parse_tree__parse_item__Term_12,
  MR_Word parse_tree__parse_item__Context_13,
  MR_Integer parse_tree__parse_item__SeqNum_14,
  MR_Word parse_tree__parse_item__WithInst_15,
  MR_Word parse_tree__parse_item__MaybeDet_16,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_17,
  MR_Word * parse_tree__parse_item__MaybeIOM_18)
{
  {
    MR_bool parse_tree__parse_item__succeeded = (parse_tree__parse_item__WithInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word parse_tree__parse_item__MaybeSugaredFuncTerm_19;
    MR_Word parse_tree__parse_item__ReturnTypeTerm_20;
    MR_Word parse_tree__parse_item__Var_34;
    MR_String parse_tree__parse_item__Var_35;
    MR_Word parse_tree__parse_item__Var_36;
    MR_Word parse_tree__parse_item__Var_37;
    MR_Word parse_tree__parse_item__Var_38;
    MR_Word parse_tree__parse_item__Var_21;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 0)));
            parse_tree__parse_item__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 1)));
            parse_tree__parse_item__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_34)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_34, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_35, (MR_String) "=") == 0);
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_36)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_36, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_36, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_37)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_37, (MR_Integer) 0)));
                            parse_tree__parse_item__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_37, (MR_Integer) 1)));
                            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__Var_39;
        MR_String parse_tree__parse_item__Var_40;
        MR_Word parse_tree__parse_item__Var_22;
        MR_Word parse_tree__parse_item__Var_23;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeSugaredFuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeSugaredFuncTerm_19, (MR_Integer) 0)));
            parse_tree__parse_item__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeSugaredFuncTerm_19, (MR_Integer) 1)));
            parse_tree__parse_item__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeSugaredFuncTerm_19, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_39)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_39, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_40, (MR_String) "") == 0);
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Spec_25;
            MR_Word parse_tree__parse_item__Var_51;
            MR_Word parse_tree__parse_item__Var_52;
            MR_Word parse_tree__parse_item__Var_53;
            MR_Word parse_tree__parse_item__Var_58;

            {
              parse_tree__parse_item__Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__MaybeSugaredFuncTerm_19);
            }
            {
              parse_tree__parse_item__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 0) = ((MR_Box) (parse_tree__parse_item__Var_53));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[186])));
            }
            {
              parse_tree__parse_item__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 0) = ((MR_Box) (parse_tree__parse_item__Var_52));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_25, 2) = ((MR_Box) (parse_tree__parse_item__Var_51));
            }
            {
              parse_tree__parse_item__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_58, 0) = ((MR_Box) (parse_tree__parse_item__Spec_25));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_58));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__FuncTerm_26;
            MR_Word parse_tree__parse_item__ContextPieces_27;
            MR_Word parse_tree__parse_item__MaybeFunctorArgs_28;

            {
              parse_tree__parse_item__FuncTerm_26 = parse_tree__parse_item__desugar_field_access_1_f_0(parse_tree__parse_item__MaybeSugaredFuncTerm_19);
            }
            {
              parse_tree__parse_item__ContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[139]));
            }
            {
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__FuncTerm_26, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__ContextPieces_27, &parse_tree__parse_item__MaybeFunctorArgs_28);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeFunctorArgs_28)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_item__Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeFunctorArgs_28, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_29));
                }
              }
            else
              {
                MR_Word parse_tree__parse_item__Functor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFunctorArgs_28, (MR_Integer) 0)));
                MR_Word parse_tree__parse_item__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFunctorArgs_28, (MR_Integer) 1)));

                {
                  parse_tree__parse_item__parse_func_mode_decl_11_p_0(parse_tree__parse_item__Functor_30, parse_tree__parse_item__ArgTerms_31, parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__ReturnTypeTerm_20, parse_tree__parse_item__Term_12, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__MaybeDet_16, parse_tree__parse_item__Context_13, parse_tree__parse_item__SeqNum_14, parse_tree__parse_item__QuantConstrAttrs_17, parse_tree__parse_item__MaybeIOM_18);
                }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Var_70;
        MR_String parse_tree__parse_item__Var_71;
        MR_Word parse_tree__parse_item__Var_32;
        MR_Word parse_tree__parse_item__Var_33;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 0)));
            parse_tree__parse_item__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 1)));
            parse_tree__parse_item__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_12, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_70)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_71 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_70, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_71, (MR_String) "") == 0);
              }
          }
        if (parse_tree__parse_item__succeeded)
          {
            MR_Word parse_tree__parse_item__Var_82;
            MR_Word parse_tree__parse_item__Var_83;
            MR_Word parse_tree__parse_item__Var_84;
            MR_Word parse_tree__parse_item__Var_89;
            MR_Word parse_tree__parse_item__Spec_102;

            {
              parse_tree__parse_item__Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__Term_12);
            }
            {
              parse_tree__parse_item__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_83, 0) = ((MR_Box) (parse_tree__parse_item__Var_84));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[187])));
            }
            {
              parse_tree__parse_item__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_82, 0) = ((MR_Box) (parse_tree__parse_item__Var_83));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Spec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_102, 2) = ((MR_Box) (parse_tree__parse_item__Var_82));
            }
            {
              parse_tree__parse_item__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_89, 0) = ((MR_Box) (parse_tree__parse_item__Spec_102));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_89));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__ContextPieces_109;
            MR_Word parse_tree__parse_item__MaybeFunctorArgs_110;

            {
              parse_tree__parse_item__ContextPieces_109 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[143]));
            }
            {
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__Term_12, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__ContextPieces_109, &parse_tree__parse_item__MaybeFunctorArgs_110);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeFunctorArgs_110)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_item__Specs_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeFunctorArgs_110, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_item__MaybeIOM_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_103));
                }
              }
            else
              {
                MR_Word parse_tree__parse_item__Functor_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFunctorArgs_110, (MR_Integer) 0)));
                MR_Word parse_tree__parse_item__ArgTerms_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeFunctorArgs_110, (MR_Integer) 1)));

                {
                  parse_tree__parse_item__parse_pred_mode_decl_11_p_0(parse_tree__parse_item__Functor_104, parse_tree__parse_item__ArgTerms_105, parse_tree__parse_item__ModuleName_10, parse_tree__parse_item__Term_12, parse_tree__parse_item__VarSet_11, parse_tree__parse_item__WithInst_15, parse_tree__parse_item__MaybeDet_16, parse_tree__parse_item__Context_13, parse_tree__parse_item__SeqNum_14, parse_tree__parse_item__QuantConstrAttrs_17, parse_tree__parse_item__MaybeIOM_18);
                }
              }
          }
      }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__desugar_field_access_1_f_0(
  MR_Word parse_tree__parse_item__Term_3)
{
  {
    MR_bool parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_item__DesugaredTerm_4;
    MR_Word parse_tree__parse_item__A_5;
    MR_Word parse_tree__parse_item__Context_7;
    MR_Word parse_tree__parse_item__Bs_9;
    MR_Word parse_tree__parse_item__Var_21;
    MR_Word parse_tree__parse_item__RHS_6;
    MR_Word parse_tree__parse_item__Var_16;
    MR_String parse_tree__parse_item__Var_17;
    MR_Word parse_tree__parse_item__Var_18;
    MR_Word parse_tree__parse_item__Var_19;
    MR_Word parse_tree__parse_item__Var_20;
    MR_Word parse_tree__parse_item__Var_10;
    MR_String parse_tree__parse_item__FieldName_8;

    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_3, (MR_Integer) 0)));
        parse_tree__parse_item__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_3, (MR_Integer) 1)));
        parse_tree__parse_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_3, (MR_Integer) 2)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_16, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_17, (MR_String) "^") == 0);
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_18)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_18, (MR_Integer) 0)));
                    parse_tree__parse_item__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_18, (MR_Integer) 1)));
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_19)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_19, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_19, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__parse_item__succeeded)
                              {
                                parse_tree__parse_item__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__RHS_6, (MR_Integer) 0)));
                                parse_tree__parse_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__RHS_6, (MR_Integer) 1)));
                                parse_tree__parse_item__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__RHS_6, (MR_Integer) 2)));
                                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_21)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_item__succeeded)
                                  parse_tree__parse_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_21, (MR_Integer) 0)));
                              }
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__Var_23;
        MR_Word parse_tree__parse_item__Var_24;

        {
          parse_tree__parse_item__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_24, 0) = ((MR_Box) (parse_tree__parse_item__A_5));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], parse_tree__parse_item__Bs_9, parse_tree__parse_item__Var_24);
        }
        {
          parse_tree__parse_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__parse_item__Var_21));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__parse_item__Var_23));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__parse_item__Context_7));
        }
      }
    else
      {
        MR_Word parse_tree__parse_item__X_12;
        MR_Word parse_tree__parse_item__A_44;
        MR_Word parse_tree__parse_item__Context_46;
        MR_String parse_tree__parse_item__FieldName_47;
        MR_Word parse_tree__parse_item__Bs_48;
        MR_Word parse_tree__parse_item__LHS_11;
        MR_Word parse_tree__parse_item__Var_26;
        MR_String parse_tree__parse_item__Var_27;
        MR_Word parse_tree__parse_item__Var_28;
        MR_Word parse_tree__parse_item__Var_29;
        MR_Word parse_tree__parse_item__Var_30;
        MR_Word parse_tree__parse_item__Var_31;
        MR_String parse_tree__parse_item__Var_32;
        MR_Word parse_tree__parse_item__Var_33;
        MR_Word parse_tree__parse_item__Var_34;
        MR_Word parse_tree__parse_item__Var_35;
        MR_Word parse_tree__parse_item__Var_36;
        MR_Word parse_tree__parse_item__RHS_43;
        MR_Word parse_tree__parse_item__Var_13;
        MR_Word parse_tree__parse_item__Var_14;

        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_3, (MR_Integer) 0)));
            parse_tree__parse_item__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_3, (MR_Integer) 1)));
            parse_tree__parse_item__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Term_3, (MR_Integer) 2)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_26)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_26, (MR_Integer) 0)));
                parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_27, (MR_String) ":=") == 0);
                if (parse_tree__parse_item__succeeded)
                  {
                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_28)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_item__succeeded)
                      {
                        parse_tree__parse_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_28, (MR_Integer) 0)));
                        parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_28, (MR_Integer) 1)));
                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_29)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_item__succeeded)
                          {
                            parse_tree__parse_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, (MR_Integer) 0)));
                            parse_tree__parse_item__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_29, (MR_Integer) 1)));
                            parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_item__succeeded)
                              {
                                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_item__succeeded)
                                  {
                                    parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__LHS_11, (MR_Integer) 0)));
                                    parse_tree__parse_item__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__LHS_11, (MR_Integer) 1)));
                                    parse_tree__parse_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__LHS_11, (MR_Integer) 2)));
                                    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_31)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_item__succeeded)
                                      {
                                        parse_tree__parse_item__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_31, (MR_Integer) 0)));
                                        parse_tree__parse_item__succeeded = (strcmp(parse_tree__parse_item__Var_32, (MR_String) "^") == 0);
                                        if (parse_tree__parse_item__succeeded)
                                          {
                                            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_33)) == (MR_mktag((MR_Integer) 1)));
                                            if (parse_tree__parse_item__succeeded)
                                              {
                                                parse_tree__parse_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, (MR_Integer) 0)));
                                                parse_tree__parse_item__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_33, (MR_Integer) 1)));
                                                parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_34)) == (MR_mktag((MR_Integer) 1)));
                                                if (parse_tree__parse_item__succeeded)
                                                  {
                                                    parse_tree__parse_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, (MR_Integer) 0)));
                                                    parse_tree__parse_item__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_34, (MR_Integer) 1)));
                                                    parse_tree__parse_item__succeeded = (parse_tree__parse_item__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (parse_tree__parse_item__succeeded)
                                                      {
                                                        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
                                                        if (parse_tree__parse_item__succeeded)
                                                          {
                                                            parse_tree__parse_item__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__RHS_43, (MR_Integer) 0)));
                                                            parse_tree__parse_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__RHS_43, (MR_Integer) 1)));
                                                            parse_tree__parse_item__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__RHS_43, (MR_Integer) 2)));
                                                            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__Var_36)) == (MR_mktag((MR_Integer) 0)));
                                                            if (parse_tree__parse_item__succeeded)
                                                              parse_tree__parse_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_36, (MR_Integer) 0)));
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
        if (parse_tree__parse_item__succeeded)
          {
            MR_String parse_tree__parse_item__FunctionName_15;
            MR_Word parse_tree__parse_item__Var_38;
            MR_Word parse_tree__parse_item__Var_39;
            MR_Word parse_tree__parse_item__Var_40;
            MR_Word parse_tree__parse_item__Var_41;

            {
              parse_tree__parse_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__parse_item__FieldName_47, (MR_String) " :=");
            }
            {
              parse_tree__parse_item__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_38, 0) = ((MR_Box) (parse_tree__parse_item__FunctionName_15));
            }
            {
              parse_tree__parse_item__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 0) = ((MR_Box) (parse_tree__parse_item__X_12));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_item__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, 0) = ((MR_Box) (parse_tree__parse_item__A_44));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_40, 1) = ((MR_Box) (parse_tree__parse_item__Var_41));
            }
            {
              parse_tree__parse_item__Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[0], parse_tree__parse_item__Bs_48, parse_tree__parse_item__Var_40);
            }
            {
              parse_tree__parse_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__parse_item__Var_38));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__parse_item__Var_39));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__parse_item__Context_46));
            }
          }
        else
          parse_tree__parse_item__DesugaredTerm_4 = parse_tree__parse_item__Term_3;
      }
    return parse_tree__parse_item__DesugaredTerm_4;
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_HeadVar__3_3;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv0_HeadVar__3_3);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_func_mode_decl_11_p_0(
  MR_Word parse_tree__parse_item__Functor_12,
  MR_Word parse_tree__parse_item__ArgTerms_13,
  MR_Word parse_tree__parse_item__ModuleName_14,
  MR_Word parse_tree__parse_item__RetModeTerm_15,
  MR_Word parse_tree__parse_item__FullTerm_16,
  MR_Word parse_tree__parse_item__VarSet_17,
  MR_Word parse_tree__parse_item__MaybeDetism_18,
  MR_Word parse_tree__parse_item__Context_19,
  MR_Integer parse_tree__parse_item__SeqNum_20,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_21,
  MR_Word * parse_tree__parse_item__MaybeIOM_22)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_item__ArgContextPieces_23;
    MR_Word parse_tree__parse_item__MaybeArgModes0_24;
    MR_Word parse_tree__parse_item__RetContextPieces_25;
    MR_Word parse_tree__parse_item__MaybeRetMode0_26;
    MR_Word parse_tree__parse_item__QuantContextPieces_27;
    MR_Word parse_tree__parse_item__MaybeConstraints_28;
    MR_Word parse_tree__parse_item__Var_44;
    MR_Word parse_tree__parse_item__Var_47;
    MR_Word parse_tree__parse_item__Var_48;
    MR_Word parse_tree__parse_item__Var_54;
    MR_Word parse_tree__parse_item__Var_57;
    MR_Word parse_tree__parse_item__ArgModes0_29;
    MR_Word parse_tree__parse_item__RetMode0_30;
    MR_Word parse_tree__parse_item__InstConstraints_33;
    MR_Word parse_tree__parse_item__Var_31;
    MR_Word parse_tree__parse_item__Var_32;

    {
      parse_tree__parse_item__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_48, 1) = ((MR_Box) (parse_tree__parse_item__Functor_12));
    }
    {
      parse_tree__parse_item__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 0) = ((MR_Box) (parse_tree__parse_item__Var_48));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[182])));
    }
    {
      parse_tree__parse_item__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[183])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, 1) = ((MR_Box) (parse_tree__parse_item__Var_47));
    }
    {
      parse_tree__parse_item__ArgContextPieces_23 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_92_92, parse_tree__parse_item__Var_44);
    }
    {
      parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__VarSet_17, parse_tree__parse_item__ArgContextPieces_23, parse_tree__parse_item__ArgTerms_13, &parse_tree__parse_item__MaybeArgModes0_24);
    }
    {
      parse_tree__parse_item__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[185])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_57, 1) = ((MR_Box) (parse_tree__parse_item__Var_47));
    }
    {
      parse_tree__parse_item__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[184])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_54, 1) = ((MR_Box) (parse_tree__parse_item__Var_57));
    }
    {
      parse_tree__parse_item__RetContextPieces_25 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_92_92, parse_tree__parse_item__Var_54);
    }
    {
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__VarSet_17, parse_tree__parse_item__RetContextPieces_25, parse_tree__parse_item__RetModeTerm_15, &parse_tree__parse_item__MaybeRetMode0_26);
    }
    {
      parse_tree__parse_item__QuantContextPieces_27 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_92_92, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[139]));
    }
    {
      parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__parse_item__ModuleName_14, parse_tree__parse_item__VarSet_17, parse_tree__parse_item__QuantConstrAttrs_21, parse_tree__parse_item__QuantContextPieces_27, &parse_tree__parse_item__MaybeConstraints_28);
    }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeArgModes0_24)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__ArgModes0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeArgModes0_24, (MR_Integer) 0)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeRetMode0_26)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__RetMode0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeRetMode0_26, (MR_Integer) 0)));
            parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeConstraints_28)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_item__succeeded)
              {
                parse_tree__parse_item__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_28, (MR_Integer) 0)));
                parse_tree__parse_item__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_28, (MR_Integer) 1)));
                parse_tree__parse_item__InstConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_28, (MR_Integer) 2)));
              }
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__TypeCtorInfo_95_95;
        MR_Word parse_tree__parse_item__TypeCtorInfo_96_96;
        MR_Word parse_tree__parse_item__ArgModes_34;
        MR_Word parse_tree__parse_item__RetMode_35;
        MR_Word parse_tree__parse_item__InstVarSet_36;
        MR_Word parse_tree__parse_item__ArgReturnModes_37;
        MR_Word parse_tree__parse_item__InconsistentVars_38;
        MR_Word parse_tree__parse_item__MaybeInconsistentSpec_39;
        MR_Word parse_tree__parse_item__Var_77;
        MR_Word parse_tree__parse_item__Var_78;
        MR_Word parse_tree__parse_item__Var_81;

        {
          parse_tree__parse_item__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_77, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_77, 1) = ((MR_Box) (parse_tree__parse_item__parse_func_mode_decl_11_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_77, 3) = ((MR_Box) (parse_tree__parse_item__InstConstraints_33));
        }
        parse_tree__parse_item__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        {
          mercury__list__map_3_p_0(parse_tree__parse_item__TypeCtorInfo_95_95, parse_tree__parse_item__TypeCtorInfo_95_95, parse_tree__parse_item__Var_77, parse_tree__parse_item__ArgModes0_29, &parse_tree__parse_item__ArgModes_34);
        }
        {
          parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__parse_item__InstConstraints_33, parse_tree__parse_item__RetMode0_30, &parse_tree__parse_item__RetMode_35);
        }
        parse_tree__parse_item__TypeCtorInfo_96_96 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_96_96, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_item__VarSet_17, &parse_tree__parse_item__InstVarSet_36);
        }
        {
          parse_tree__parse_item__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_78, 0) = ((MR_Box) (parse_tree__parse_item__RetMode_35));
          MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_item__ArgReturnModes_37 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_95_95, parse_tree__parse_item__ArgModes_34, parse_tree__parse_item__Var_78);
        }
        {
          parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(parse_tree__parse_item__ArgReturnModes_37, &parse_tree__parse_item__InconsistentVars_38);
        }
        {
          parse_tree__parse_item__Var_81 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_96_96, parse_tree__parse_item__FullTerm_16);
        }
        {
          parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in function mode declaration", parse_tree__parse_item__Var_81, parse_tree__parse_item__InstVarSet_36, parse_tree__parse_item__InconsistentVars_38, &parse_tree__parse_item__MaybeInconsistentSpec_39);
        }
        if ((parse_tree__parse_item__MaybeInconsistentSpec_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_item__ItemModeDecl_40;
            MR_Word parse_tree__parse_item__Item_41;
            MR_Word parse_tree__parse_item__Var_87;

            {
              parse_tree__parse_item__ItemModeDecl_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 0) = ((MR_Box) (parse_tree__parse_item__Functor_12));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[1])));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 2) = ((MR_Box) (parse_tree__parse_item__ArgReturnModes_37));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 4) = ((MR_Box) (parse_tree__parse_item__MaybeDetism_18));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 5) = ((MR_Box) (parse_tree__parse_item__InstVarSet_36));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 6) = ((MR_Box) (parse_tree__parse_item__Context_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_40, 7) = ((MR_Box) (parse_tree__parse_item__SeqNum_20));
            }
            {
              parse_tree__parse_item__Item_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_41, 1) = ((MR_Box) (parse_tree__parse_item__ItemModeDecl_40));
            }
            {
              parse_tree__parse_item__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_87, 0) = ((MR_Box) (parse_tree__parse_item__Item_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_87));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__Spec_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeInconsistentSpec_39, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__Var_82;

            {
              parse_tree__parse_item__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_82, 0) = ((MR_Box) (parse_tree__parse_item__Spec_42));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_82));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__TypeCtorInfo_98_98 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_item__Specs_43;
        MR_Word parse_tree__parse_item__Var_88;
        MR_Word parse_tree__parse_item__Var_89;
        MR_Word parse_tree__parse_item__Var_90;
        MR_Word parse_tree__parse_item__Var_91;

        {
          parse_tree__parse_item__Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[8], parse_tree__parse_item__MaybeArgModes0_24);
        }
        {
          parse_tree__parse_item__Var_90 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_item__MaybeRetMode0_26);
        }
        {
          parse_tree__parse_item__Var_91 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__parse_item_scalar_common_2[0], parse_tree__parse_item__MaybeConstraints_28);
        }
        {
          parse_tree__parse_item__Var_89 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_98_98, parse_tree__parse_item__Var_90, parse_tree__parse_item__Var_91);
        }
        {
          parse_tree__parse_item__Specs_43 = mercury__list__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_98_98, parse_tree__parse_item__Var_88, parse_tree__parse_item__Var_89);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_43));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_HeadVar__3_3;

    {
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv0_HeadVar__3_3);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__parse_item__parse_pred_mode_decl_11_p_0(
  MR_Word parse_tree__parse_item__Functor_12,
  MR_Word parse_tree__parse_item__ArgTerms_13,
  MR_Word parse_tree__parse_item__ModuleName_14,
  MR_Word parse_tree__parse_item__PredModeTerm_15,
  MR_Word parse_tree__parse_item__VarSet_16,
  MR_Word parse_tree__parse_item__WithInst_17,
  MR_Word parse_tree__parse_item__MaybeDet_18,
  MR_Word parse_tree__parse_item__Context_19,
  MR_Integer parse_tree__parse_item__SeqNum_20,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_21,
  MR_Word * parse_tree__parse_item__MaybeIOM_22)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_item__ArgContextPieces_23;
    MR_Word parse_tree__parse_item__MaybeArgModes0_24;
    MR_Word parse_tree__parse_item__ContextPieces_25;
    MR_Word parse_tree__parse_item__MaybeConstraints_26;
    MR_Word parse_tree__parse_item__Var_41;
    MR_Word parse_tree__parse_item__Var_44;
    MR_Word parse_tree__parse_item__Var_45;
    MR_Word parse_tree__parse_item__ArgModes0_27;
    MR_Word parse_tree__parse_item__InstConstraints_30;
    MR_Word parse_tree__parse_item__Var_28;
    MR_Word parse_tree__parse_item__Var_29;

    {
      parse_tree__parse_item__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_45, 1) = ((MR_Box) (parse_tree__parse_item__Functor_12));
    }
    {
      parse_tree__parse_item__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, 0) = ((MR_Box) (parse_tree__parse_item__Var_45));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[182])));
    }
    {
      parse_tree__parse_item__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[180])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_41, 1) = ((MR_Box) (parse_tree__parse_item__Var_44));
    }
    {
      parse_tree__parse_item__ArgContextPieces_23 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_70_70, parse_tree__parse_item__Var_41);
    }
    {
      parse_tree__parse_inst_mode_name__parse_modes_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_item__VarSet_16, parse_tree__parse_item__ArgContextPieces_23, parse_tree__parse_item__ArgTerms_13, &parse_tree__parse_item__MaybeArgModes0_24);
    }
    {
      parse_tree__parse_item__ContextPieces_25 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_70_70, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[145]));
    }
    {
      parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__parse_item__ModuleName_14, parse_tree__parse_item__VarSet_16, parse_tree__parse_item__QuantConstrAttrs_21, parse_tree__parse_item__ContextPieces_25, &parse_tree__parse_item__MaybeConstraints_26);
    }
    parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeArgModes0_24)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_item__succeeded)
      {
        parse_tree__parse_item__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeArgModes0_24, (MR_Integer) 0)));
        parse_tree__parse_item__succeeded = ((MR_tag((MR_Word) parse_tree__parse_item__MaybeConstraints_26)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_item__succeeded)
          {
            parse_tree__parse_item__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_26, (MR_Integer) 0)));
            parse_tree__parse_item__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_26, (MR_Integer) 1)));
            parse_tree__parse_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_26, (MR_Integer) 2)));
          }
      }
    if (parse_tree__parse_item__succeeded)
      {
        MR_Word parse_tree__parse_item__TypeCtorInfo_73_73;
        MR_Word parse_tree__parse_item__TypeCtorInfo_74_74;
        MR_Word parse_tree__parse_item__ArgModes_31;
        MR_Word parse_tree__parse_item__InstVarSet_32;
        MR_Word parse_tree__parse_item__InconsistentVars_33;
        MR_Word parse_tree__parse_item__MaybeInconsistentSpec_34;
        MR_Word parse_tree__parse_item__Var_61;
        MR_Word parse_tree__parse_item__Var_63;

        {
          parse_tree__parse_item__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_61, 0) = ((MR_Box) (&parse_tree__parse_item_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_61, 1) = ((MR_Box) (parse_tree__parse_item__parse_pred_mode_decl_11_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_61, 3) = ((MR_Box) (parse_tree__parse_item__InstConstraints_30));
        }
        parse_tree__parse_item__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        {
          mercury__list__map_3_p_0(parse_tree__parse_item__TypeCtorInfo_73_73, parse_tree__parse_item__TypeCtorInfo_73_73, parse_tree__parse_item__Var_61, parse_tree__parse_item__ArgModes0_27, &parse_tree__parse_item__ArgModes_31);
        }
        parse_tree__parse_item__TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_item__TypeCtorInfo_74_74, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_item__VarSet_16, &parse_tree__parse_item__InstVarSet_32);
        }
        {
          parse_tree__prog_mode__inconsistent_constrained_inst_vars_in_modes_2_p_0(parse_tree__parse_item__ArgModes_31, &parse_tree__parse_item__InconsistentVars_33);
        }
        {
          parse_tree__parse_item__Var_63 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_74_74, parse_tree__parse_item__PredModeTerm_15);
        }
        {
          parse_tree__prog_mode__report_inconsistent_constrained_inst_vars_5_p_0((MR_String) "in predicate mode declaration", parse_tree__parse_item__Var_63, parse_tree__parse_item__InstVarSet_32, parse_tree__parse_item__InconsistentVars_33, &parse_tree__parse_item__MaybeInconsistentSpec_34);
        }
        if ((parse_tree__parse_item__MaybeInconsistentSpec_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_item__MaybePredOrFunc_35;
            MR_Word parse_tree__parse_item__ItemModeDecl_37;
            MR_Word parse_tree__parse_item__Item_38;
            MR_Word parse_tree__parse_item__Var_67;

            if ((parse_tree__parse_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                parse_tree__parse_item__MaybePredOrFunc_35 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_5[0]);
              }
            else
              parse_tree__parse_item__MaybePredOrFunc_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              parse_tree__parse_item__ItemModeDecl_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 0) = ((MR_Box) (parse_tree__parse_item__Functor_12));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 1) = ((MR_Box) (parse_tree__parse_item__MaybePredOrFunc_35));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 2) = ((MR_Box) (parse_tree__parse_item__ArgModes_31));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 3) = ((MR_Box) (parse_tree__parse_item__WithInst_17));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 4) = ((MR_Box) (parse_tree__parse_item__MaybeDet_18));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 5) = ((MR_Box) (parse_tree__parse_item__InstVarSet_32));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 6) = ((MR_Box) (parse_tree__parse_item__Context_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__ItemModeDecl_37, 7) = ((MR_Box) (parse_tree__parse_item__SeqNum_20));
            }
            {
              parse_tree__parse_item__Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), parse_tree__parse_item__Item_38, 1) = ((MR_Box) (parse_tree__parse_item__ItemModeDecl_37));
            }
            {
              parse_tree__parse_item__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_67, 0) = ((MR_Box) (parse_tree__parse_item__Item_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_67));
            }
          }
        else
          {
            MR_Word parse_tree__parse_item__Spec_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeInconsistentSpec_34, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__Var_64;

            {
              parse_tree__parse_item__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_64, 0) = ((MR_Box) (parse_tree__parse_item__Spec_39));
              MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_item__MaybeIOM_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Var_64));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_item__Specs_40;
        MR_Word parse_tree__parse_item__Var_68;
        MR_Word parse_tree__parse_item__Var_69;

        {
          parse_tree__parse_item__Var_68 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[8], parse_tree__parse_item__MaybeArgModes0_24);
        }
        {
          parse_tree__parse_item__Var_69 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__parse_item_scalar_common_2[0], parse_tree__parse_item__MaybeConstraints_26);
        }
        {
          parse_tree__parse_item__Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__Var_68, parse_tree__parse_item__Var_69);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_item__MaybeIOM_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_40));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
  MR_Box parse_tree__parse_item__closure_arg,
  MR_Box parse_tree__parse_item__wrapper_arg_1,
  MR_Box * parse_tree__parse_item__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_item__closure = parse_tree__parse_item__closure_arg;
    MR_Word parse_tree__parse_item__conv0_HeadVar__2_39;

    {
      parse_tree__parse_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1536__1_2_p_0(((MR_Word) parse_tree__parse_item__wrapper_arg_1), &parse_tree__parse_item__conv0_HeadVar__2_39);
    }
    *parse_tree__parse_item__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_item__conv0_HeadVar__2_39));
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
  MR_Word parse_tree__parse_item__ModuleName_6,
  MR_Word parse_tree__parse_item__VarSet_7,
  MR_Word parse_tree__parse_item__QuantConstrAttrs_8,
  MR_Word parse_tree__parse_item__ContextPieces_9,
  MR_Word * parse_tree__parse_item__MaybeExistClassInstContext_10)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__TypeInfo_34_34 = (MR_Word) &parse_tree__parse_item_scalar_common_1[9];
    MR_Word parse_tree__parse_item__TypeCtorInfo_35_35;
    MR_Word parse_tree__parse_item__TypeInfo_36_36;
    MR_Word parse_tree__parse_item__TypeCtorInfo_37_37;
    MR_Word parse_tree__parse_item__Specs_11;
    MR_Word parse_tree__parse_item__ExistQVarsCord_13;
    MR_Word parse_tree__parse_item__UnivClassConstraints_14;
    MR_Word parse_tree__parse_item__UnivInstConstraints_15;
    MR_Word parse_tree__parse_item__ExistClassConstraints_16;
    MR_Word parse_tree__parse_item__ExistInstConstraints_17;
    MR_Word parse_tree__parse_item__ExistQVars0_18;
    MR_Word parse_tree__parse_item__ExistQVars_19;
    MR_Word parse_tree__parse_item__Var_25;
    MR_Word parse_tree__parse_item__Var_26;
    MR_Word parse_tree__parse_item__Var_27;
    MR_Word parse_tree__parse_item__Var_28;
    MR_Word parse_tree__parse_item__Var_29;
    MR_Word parse_tree__parse_item__Var_30;
    MR_Word parse_tree__parse_item___UnivQVarsCord_12;

    {
      parse_tree__parse_item__Var_25 = mercury__cord__init_0_f_0(parse_tree__parse_item__TypeInfo_34_34);
    }
    {
      parse_tree__parse_item__Var_26 = mercury__cord__init_0_f_0(parse_tree__parse_item__TypeInfo_34_34);
    }
    parse_tree__parse_item__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      parse_tree__parse_item__Var_27 = mercury__cord__init_0_f_0(parse_tree__parse_item__TypeCtorInfo_35_35);
    }
    parse_tree__parse_item__TypeInfo_36_36 = (MR_Word) &parse_tree__parse_item_scalar_common_1[7];
    parse_tree__parse_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      parse_tree__parse_item__Var_28 = mercury__map__init_0_f_0(parse_tree__parse_item__TypeInfo_36_36, parse_tree__parse_item__TypeCtorInfo_37_37);
    }
    {
      parse_tree__parse_item__Var_29 = mercury__cord__init_0_f_0(parse_tree__parse_item__TypeCtorInfo_35_35);
    }
    {
      parse_tree__parse_item__Var_30 = mercury__map__init_0_f_0(parse_tree__parse_item__TypeInfo_36_36, parse_tree__parse_item__TypeCtorInfo_37_37);
    }
    {
      parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(parse_tree__parse_item__ModuleName_6, parse_tree__parse_item__VarSet_7, parse_tree__parse_item__QuantConstrAttrs_8, parse_tree__parse_item__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_item__Specs_11, parse_tree__parse_item__Var_25, &parse_tree__parse_item___UnivQVarsCord_12, parse_tree__parse_item__Var_26, &parse_tree__parse_item__ExistQVarsCord_13, parse_tree__parse_item__Var_27, &parse_tree__parse_item__UnivClassConstraints_14, parse_tree__parse_item__Var_28, &parse_tree__parse_item__UnivInstConstraints_15, parse_tree__parse_item__Var_29, &parse_tree__parse_item__ExistClassConstraints_16, parse_tree__parse_item__Var_30, &parse_tree__parse_item__ExistInstConstraints_17);
    }
    {
      parse_tree__parse_item__ExistQVars0_18 = mercury__cord__list_1_f_0(parse_tree__parse_item__TypeInfo_34_34, parse_tree__parse_item__ExistQVarsCord_13);
    }
    {
      mercury__list__map_3_p_0(parse_tree__parse_item__TypeInfo_34_34, (MR_Word) &parse_tree__parse_item_scalar_common_1[5], (MR_Word) &parse_tree__parse_item_scalar_common_2[1], parse_tree__parse_item__ExistQVars0_18, &parse_tree__parse_item__ExistQVars_19);
    }
    if ((parse_tree__parse_item__Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_item__ClassConstraints_20;
        MR_Word parse_tree__parse_item__InstConstraints_21;
        MR_Word parse_tree__parse_item__Var_32;
        MR_Word parse_tree__parse_item__Var_33;

        {
          parse_tree__parse_item__Var_32 = mercury__cord__list_1_f_0(parse_tree__parse_item__TypeCtorInfo_35_35, parse_tree__parse_item__UnivClassConstraints_14);
        }
        {
          parse_tree__parse_item__Var_33 = mercury__cord__list_1_f_0(parse_tree__parse_item__TypeCtorInfo_35_35, parse_tree__parse_item__ExistClassConstraints_16);
        }
        {
          parse_tree__parse_item__ClassConstraints_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassConstraints_20, 0) = ((MR_Box) (parse_tree__parse_item__Var_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_item__ClassConstraints_20, 1) = ((MR_Box) (parse_tree__parse_item__Var_33));
        }
        {
          parse_tree__parse_item__InstConstraints_21 = mercury__map__old_merge_2_f_0(parse_tree__parse_item__TypeInfo_36_36, parse_tree__parse_item__TypeCtorInfo_37_37, parse_tree__parse_item__UnivInstConstraints_15, parse_tree__parse_item__ExistInstConstraints_17);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_item__MaybeExistClassInstContext_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_item__ExistQVars_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_item__ClassConstraints_20));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__parse_item__InstConstraints_21));
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_item__MaybeExistClassInstContext_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_item__Specs_11));
      }
  }
}

static void MR_CALL 
parse_tree__parse_item__get_class_context_and_inst_constraints_loop_18_p_0(
  MR_Word parse_tree__parse_item__HeadVar__1_1,
  MR_Word parse_tree__parse_item__HeadVar__2_2,
  MR_Word parse_tree__parse_item__HeadVar__3_3,
  MR_Word parse_tree__parse_item__HeadVar__4_4,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_Specs_6,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_UnivQVars_8,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_ExistQVars_10,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_12,
  MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13,
  MR_Word * parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_14,
  MR_Word parse_tree__parse_item__HeadVar__15_15,
  MR_Word * parse_tree__parse_item__HeadVar__16_16,
  MR_Word parse_tree__parse_item__HeadVar__17_17,
  MR_Word * parse_tree__parse_item__HeadVar__18_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_item__succeeded;

        if ((parse_tree__parse_item__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__parse_item__HeadVar__18_18 = parse_tree__parse_item__HeadVar__17_17;
            *parse_tree__parse_item__HeadVar__16_16 = parse_tree__parse_item__HeadVar__15_15;
            *parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_14 = parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13;
            *parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_12 = parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11;
            *parse_tree__parse_item__STATE_VARIABLE_ExistQVars_10 = parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9;
            *parse_tree__parse_item__STATE_VARIABLE_UnivQVars_8 = parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7;
            *parse_tree__parse_item__STATE_VARIABLE_Specs_6 = parse_tree__parse_item__STATE_VARIABLE_Specs_0_5;
          }
        else
          {
            MR_Word parse_tree__parse_item__QuantConstrAttr_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_item__QuantConstrAttrs_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_81_81;
            MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_83_83;
            MR_Word parse_tree__parse_item__STATE_VARIABLE_ExistClassConstraints_84_84;
            MR_Word parse_tree__parse_item__STATE_VARIABLE_ExistInstConstraints_86_86;
            MR_Word parse_tree__parse_item__STATE_VARIABLE_UnivQVars_107_107;
            MR_Word parse_tree__parse_item__STATE_VARIABLE_ExistQVars_109_109;
            MR_Word parse_tree__parse_item__STATE_VARIABLE_Specs_111_111;

            if (((MR_tag((MR_Word) parse_tree__parse_item__QuantConstrAttr_45)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word parse_tree__parse_item__ConstraintsTerm_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__QuantConstrAttr_45, (MR_Integer) 1)));
                MR_Word parse_tree__parse_item__MaybeConstraints_63;
                MR_Word parse_tree__parse_item__QuantType_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__QuantConstrAttr_45, (MR_Integer) 0)));

                {
                  parse_tree__parse_class__parse_class_and_inst_constraints_4_p_0(parse_tree__parse_item__HeadVar__1_1, parse_tree__parse_item__HeadVar__2_2, parse_tree__parse_item__ConstraintsTerm_62, &parse_tree__parse_item__MaybeConstraints_63);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeConstraints_63)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word parse_tree__parse_item__ConstraintSpecs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeConstraints_63, (MR_Integer) 0)));

                    {
                      parse_tree__parse_item__STATE_VARIABLE_Specs_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__ConstraintSpecs_64, parse_tree__parse_item__STATE_VARIABLE_Specs_0_5);
                    }
                    parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_81_81 = parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11;
                    parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_83_83 = parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13;
                    parse_tree__parse_item__STATE_VARIABLE_ExistClassConstraints_84_84 = parse_tree__parse_item__HeadVar__15_15;
                    parse_tree__parse_item__STATE_VARIABLE_ExistInstConstraints_86_86 = parse_tree__parse_item__HeadVar__17_17;
                  }
                else
                  {
                    MR_Word parse_tree__parse_item__ClassConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_63, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_item__InstConstraint_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeConstraints_63, (MR_Integer) 1)));

                    switch (parse_tree__parse_item__QuantType_119) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__parse_item__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                          MR_Word parse_tree__parse_item__Var_85;

                          {
                            parse_tree__parse_item__Var_85 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_126_126, parse_tree__parse_item__ClassConstraints_65);
                          }
                          {
                            parse_tree__parse_item__STATE_VARIABLE_ExistClassConstraints_84_84 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_126_126, parse_tree__parse_item__HeadVar__15_15, parse_tree__parse_item__Var_85);
                          }
                          {
                            parse_tree__parse_item__STATE_VARIABLE_ExistInstConstraints_86_86 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__parse_item__HeadVar__17_17, parse_tree__parse_item__InstConstraint_66);
                          }
                          parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_81_81 = parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11;
                          parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_83_83 = parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__parse_item__TypeCtorInfo_129_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                          MR_Word parse_tree__parse_item__Var_82;

                          {
                            parse_tree__parse_item__Var_82 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_129_129, parse_tree__parse_item__ClassConstraints_65);
                          }
                          {
                            parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_81_81 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_129_129, parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11, parse_tree__parse_item__Var_82);
                          }
                          {
                            parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_83_83 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__parse_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13, parse_tree__parse_item__InstConstraint_66);
                          }
                          parse_tree__parse_item__STATE_VARIABLE_ExistClassConstraints_84_84 = parse_tree__parse_item__HeadVar__15_15;
                          parse_tree__parse_item__STATE_VARIABLE_ExistInstConstraints_86_86 = parse_tree__parse_item__HeadVar__17_17;
                        }
                        break;
                    }
                    parse_tree__parse_item__STATE_VARIABLE_Specs_111_111 = parse_tree__parse_item__STATE_VARIABLE_Specs_0_5;
                  }
                parse_tree__parse_item__STATE_VARIABLE_UnivQVars_107_107 = parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7;
                parse_tree__parse_item__STATE_VARIABLE_ExistQVars_109_109 = parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9;
              }
            else
              {
                MR_Word parse_tree__parse_item__TypeCtorInfo_120_120;
                MR_Word parse_tree__parse_item__QuantType_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__QuantConstrAttr_45, (MR_Integer) 0)));
                MR_Word parse_tree__parse_item__VarsTerm_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__QuantConstrAttr_45, (MR_Integer) 1)));
                MR_Word parse_tree__parse_item__TailContextPieces_57;
                MR_Word parse_tree__parse_item__VarsContextPieces_58;
                MR_Word parse_tree__parse_item__MaybeVars_59;
                MR_Word parse_tree__parse_item__Var_106;

                switch (parse_tree__parse_item__QuantType_55) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_item__TailContextPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[155]);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_item__TailContextPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[158]);
                    break;
                }
                parse_tree__parse_item__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  parse_tree__parse_item__Var_106 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeCtorInfo_120_120, parse_tree__parse_item__TailContextPieces_57);
                }
                {
                  parse_tree__parse_item__VarsContextPieces_58 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeCtorInfo_120_120, parse_tree__parse_item__HeadVar__4_4, parse_tree__parse_item__Var_106);
                }
                {
                  parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__VarsTerm_56, parse_tree__parse_item__HeadVar__2_2, parse_tree__parse_item__VarsContextPieces_58, &parse_tree__parse_item__MaybeVars_59);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_item__MaybeVars_59)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word parse_tree__parse_item__VarsSpecs_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_item__MaybeVars_59, (MR_Integer) 0)));

                    {
                      parse_tree__parse_item__STATE_VARIABLE_Specs_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_item__VarsSpecs_60, parse_tree__parse_item__STATE_VARIABLE_Specs_0_5);
                    }
                    parse_tree__parse_item__STATE_VARIABLE_UnivQVars_107_107 = parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7;
                    parse_tree__parse_item__STATE_VARIABLE_ExistQVars_109_109 = parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9;
                  }
                else
                  {
                    MR_Word parse_tree__parse_item__Vars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_item__MaybeVars_59, (MR_Integer) 0)));

                    switch (parse_tree__parse_item__QuantType_55) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__parse_item__TypeInfo_123_123 = (MR_Word) &parse_tree__parse_item_scalar_common_1[9];
                          MR_Word parse_tree__parse_item__Var_110;

                          {
                            parse_tree__parse_item__Var_110 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeInfo_123_123, parse_tree__parse_item__Vars_61);
                          }
                          {
                            parse_tree__parse_item__STATE_VARIABLE_ExistQVars_109_109 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeInfo_123_123, parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9, parse_tree__parse_item__Var_110);
                          }
                          parse_tree__parse_item__STATE_VARIABLE_UnivQVars_107_107 = parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__parse_item__TypeInfo_124_124 = (MR_Word) &parse_tree__parse_item_scalar_common_1[9];
                          MR_Word parse_tree__parse_item__Var_108;

                          {
                            parse_tree__parse_item__Var_108 = mercury__cord__from_list_1_f_0(parse_tree__parse_item__TypeInfo_124_124, parse_tree__parse_item__Vars_61);
                          }
                          {
                            parse_tree__parse_item__STATE_VARIABLE_UnivQVars_107_107 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_item__TypeInfo_124_124, parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7, parse_tree__parse_item__Var_108);
                          }
                          parse_tree__parse_item__STATE_VARIABLE_ExistQVars_109_109 = parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9;
                        }
                        break;
                    }
                    parse_tree__parse_item__STATE_VARIABLE_Specs_111_111 = parse_tree__parse_item__STATE_VARIABLE_Specs_0_5;
                  }
                parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_81_81 = parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11;
                parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_83_83 = parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13;
                parse_tree__parse_item__STATE_VARIABLE_ExistClassConstraints_84_84 = parse_tree__parse_item__HeadVar__15_15;
                parse_tree__parse_item__STATE_VARIABLE_ExistInstConstraints_86_86 = parse_tree__parse_item__HeadVar__17_17;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_item__next_value_of_HeadVar__3_3 = parse_tree__parse_item__QuantConstrAttrs_46;
              MR_Word parse_tree__parse_item__next_value_of_STATE_VARIABLE_Specs_0_5 = parse_tree__parse_item__STATE_VARIABLE_Specs_111_111;
              MR_Word parse_tree__parse_item__next_value_of_STATE_VARIABLE_UnivQVars_0_7 = parse_tree__parse_item__STATE_VARIABLE_UnivQVars_107_107;
              MR_Word parse_tree__parse_item__next_value_of_STATE_VARIABLE_ExistQVars_0_9 = parse_tree__parse_item__STATE_VARIABLE_ExistQVars_109_109;
              MR_Word parse_tree__parse_item__next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11 = parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_81_81;
              MR_Word parse_tree__parse_item__next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13 = parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_83_83;
              MR_Word parse_tree__parse_item__next_value_of_HeadVar__15_15 = parse_tree__parse_item__STATE_VARIABLE_ExistClassConstraints_84_84;
              MR_Word parse_tree__parse_item__next_value_of_HeadVar__17_17 = parse_tree__parse_item__STATE_VARIABLE_ExistInstConstraints_86_86;

              parse_tree__parse_item__HeadVar__17_17 = parse_tree__parse_item__next_value_of_HeadVar__17_17;
              parse_tree__parse_item__HeadVar__15_15 = parse_tree__parse_item__next_value_of_HeadVar__15_15;
              parse_tree__parse_item__STATE_VARIABLE_UnivInstConstraints_0_13 = parse_tree__parse_item__next_value_of_STATE_VARIABLE_UnivInstConstraints_0_13;
              parse_tree__parse_item__STATE_VARIABLE_UnivClassConstraints_0_11 = parse_tree__parse_item__next_value_of_STATE_VARIABLE_UnivClassConstraints_0_11;
              parse_tree__parse_item__STATE_VARIABLE_ExistQVars_0_9 = parse_tree__parse_item__next_value_of_STATE_VARIABLE_ExistQVars_0_9;
              parse_tree__parse_item__STATE_VARIABLE_UnivQVars_0_7 = parse_tree__parse_item__next_value_of_STATE_VARIABLE_UnivQVars_0_7;
              parse_tree__parse_item__STATE_VARIABLE_Specs_0_5 = parse_tree__parse_item__next_value_of_STATE_VARIABLE_Specs_0_5;
              parse_tree__parse_item__HeadVar__3_3 = parse_tree__parse_item__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__parse_item__decl_functor_is_not_valid_2_f_0(
  MR_Word parse_tree__parse_item__Term_4,
  MR_String parse_tree__parse_item__Functor_5)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__Spec_6;
    MR_Word parse_tree__parse_item__Context_7;
    MR_Word parse_tree__parse_item__Pieces_8;
    MR_Word parse_tree__parse_item__Var_11;
    MR_Word parse_tree__parse_item__Var_12;
    MR_Word parse_tree__parse_item__Var_21;
    MR_Word parse_tree__parse_item__Var_22;
    MR_Word parse_tree__parse_item__Var_23;
    MR_Word parse_tree__parse_item__Var_24;

    {
      parse_tree__parse_item__Context_7 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_item__Term_4);
    }
    {
      parse_tree__parse_item__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_12, 1) = ((MR_Box) (parse_tree__parse_item__Functor_5));
    }
    {
      parse_tree__parse_item__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_11, 0) = ((MR_Box) (parse_tree__parse_item__Var_12));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[18])));
    }
    {
      parse_tree__parse_item__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_8, 1) = ((MR_Box) (parse_tree__parse_item__Var_11));
    }
    {
      parse_tree__parse_item__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_24, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_8));
    }
    {
      parse_tree__parse_item__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, 0) = ((MR_Box) (parse_tree__parse_item__Var_24));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_item__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_22, 0) = ((MR_Box) (parse_tree__parse_item__Context_7));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_22, 1) = ((MR_Box) (parse_tree__parse_item__Var_23));
    }
    {
      parse_tree__parse_item__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_21, 0) = ((MR_Box) (parse_tree__parse_item__Var_22));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_item__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_6, 2) = ((MR_Box) (parse_tree__parse_item__Var_21));
    }
    return parse_tree__parse_item__Spec_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_item__decl_is_not_an_atom_2_f_0(
  MR_Word parse_tree__parse_item__VarSet_4,
  MR_Word parse_tree__parse_item__Term_5)
{
  {
    MR_bool parse_tree__parse_item__succeeded;
    MR_Word parse_tree__parse_item__Spec_6;
    MR_Word parse_tree__parse_item__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_String parse_tree__parse_item__TermStr_7;
    MR_Word parse_tree__parse_item__Context_8;
    MR_Word parse_tree__parse_item__Pieces_9;
    MR_Word parse_tree__parse_item__Var_13;
    MR_Word parse_tree__parse_item__Var_14;
    MR_Word parse_tree__parse_item__Var_23;
    MR_Word parse_tree__parse_item__Var_24;
    MR_Word parse_tree__parse_item__Var_25;
    MR_Word parse_tree__parse_item__Var_26;

    {
      parse_tree__parse_item__TermStr_7 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__parse_item__TypeCtorInfo_29_29, parse_tree__parse_item__VarSet_4, (MR_Integer) 0, parse_tree__parse_item__Term_5);
    }
    {
      parse_tree__parse_item__Context_8 = mercury__term__get_term_context_1_f_0(parse_tree__parse_item__TypeCtorInfo_29_29, parse_tree__parse_item__Term_5);
    }
    {
      parse_tree__parse_item__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_item__Var_14, 1) = ((MR_Box) (parse_tree__parse_item__TermStr_7));
    }
    {
      parse_tree__parse_item__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_13, 0) = ((MR_Box) (parse_tree__parse_item__Var_14));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_item_scalar_common_1[16])));
    }
    {
      parse_tree__parse_item__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_item_scalar_common_1[179])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Pieces_9, 1) = ((MR_Box) (parse_tree__parse_item__Var_13));
    }
    {
      parse_tree__parse_item__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_26, 0) = ((MR_Box) (parse_tree__parse_item__Pieces_9));
    }
    {
      parse_tree__parse_item__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_25, 0) = ((MR_Box) (parse_tree__parse_item__Var_26));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_item__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_24, 0) = ((MR_Box) (parse_tree__parse_item__Context_8));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Var_24, 1) = ((MR_Box) (parse_tree__parse_item__Var_25));
    }
    {
      parse_tree__parse_item__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, 0) = ((MR_Box) (parse_tree__parse_item__Var_24));
      MR_hl_field(MR_mktag(1), parse_tree__parse_item__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_item__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_item__Spec_6, 2) = ((MR_Box) (parse_tree__parse_item__Var_23));
    }
    return parse_tree__parse_item__Spec_6;
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

/* :- end_module parse_tree.parse_item. */
