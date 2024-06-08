/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2024-06-08
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


// :- module parse_tree.module_qual.qualify_items.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__qualify_items__init
ENDINIT
*/

#include "parse_tree.module_qual.qualify_items.mih"


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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__qualify_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__468__1_8_p_0(
  MR_Word HeadVar__1_83,
  MR_Word HeadVar__2_84,
  MR_Word HeadVar__3_188,
  MR_Word * HeadVar__4_189,
  MR_Word HeadVar__5_190,
  MR_Word * HeadVar__6_191,
  MR_Word HeadVar__7_192,
  MR_Word * HeadVar__8_193);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__464__1_8_p_0(
  MR_Word HeadVar__1_78,
  MR_Word HeadVar__2_79,
  MR_Word HeadVar__3_169,
  MR_Word * HeadVar__4_170,
  MR_Word HeadVar__5_171,
  MR_Word * HeadVar__6_172,
  MR_Word HeadVar__7_173,
  MR_Word * HeadVar__8_174);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
  MR_Word InInt_11,
  MR_String EventName_12,
  MR_String FileName_13,
  MR_Integer LineNumber_14,
  MR_Word Attr0_15,
  MR_Word * Attr_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word Pragma0_9,
  MR_Word * Pragma_10,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word Pragma0_9,
  MR_Word * Pragma_10,
  MR_Word STATE_VARIABLE_Info_0_79,
  MR_Word * STATE_VARIABLE_Info_80,
  MR_Word STATE_VARIABLE_Specs_0_81,
  MR_Word * STATE_VARIABLE_Specs_82);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_subst_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Subst0_11,
  MR_Word * Subst_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_tvar_substs_10_p_0(
  MR_Word InInt_11,
  MR_Word ErrorContext_12,
  MR_Word HeadSubst0_13,
  MR_Word * HeadSubst_14,
  MR_Word TailSubsts0_15,
  MR_Word * TailSubsts_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_tvar_substs__1_10_p_0(
  MR_Word InInt_11,
  MR_Word ErrorContext_12,
  MR_Word HeadSubst0_13,
  MR_Word * AddrOfHeadSubst_34,
  MR_Word TailSubsts0_15,
  MR_Word * AddrOfTailSubsts_35,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_8_p_0(
  MR_Word InInt_9,
  MR_Word ContainingErrorContext_10,
  MR_Word Constraint0_11,
  MR_Word * Constraint_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_constraint_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_46,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_8_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_type_list__1_8_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_40,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word TypeCtor0_11,
  MR_Word * TypeCtor_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word InInt_10,
  MR_Word ItemTypeRepnInfo0_11,
  MR_Word * ItemTypeRepnInfo_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemFEE0_9,
  MR_Word * ItemFEE_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemForeignEnum0_9,
  MR_Word * ItemForeignEnum_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_proc_7_p_0(
  MR_Word InInt_8,
  MR_Word FPInfo0_9,
  MR_Word * FPInfo_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_54,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemModeDecl0_9,
  MR_Word * ItemModeDecl_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemPredDecl0_9,
  MR_Word * ItemPredDecl_10,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_instance_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemInstance0_9,
  MR_Word * ItemInstance_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemInstance0_9,
  MR_Word * ItemInstance_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_typeclass_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeClass0_9,
  MR_Word * ItemTypeClass_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeClass0_9,
  MR_Word * ItemTypeClass_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_87,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_55,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_6_p_0(
  MR_Word CheckedDefn0_7,
  MR_Word * CheckedDefn_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__518__1__ho12_8_p_0(
  MR_Word HeadVar__2_46,
  MR_Word HeadVar__3_47,
  MR_Word * HeadVar__4_48,
  MR_Word HeadVar__5_49,
  MR_Word * HeadVar__6_50,
  MR_Word HeadVar__7_51,
  MR_Word * HeadVar__8_52);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word ModeCtor_12,
  MR_Word MaybeAbstractModeDefn0_13,
  MR_Word * MaybeAbstractModeDefn_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_6_p_0(
  MR_Word CheckedDefn0_7,
  MR_Word * CheckedDefn_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__494__1__ho11_8_p_0(
  MR_Word HeadVar__2_46,
  MR_Word HeadVar__3_47,
  MR_Word * HeadVar__4_48,
  MR_Word HeadVar__5_49,
  MR_Word * HeadVar__6_50,
  MR_Word HeadVar__7_51,
  MR_Word * HeadVar__8_52);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word InstCtor_12,
  MR_Word MaybeAbstractInstDefn0_13,
  MR_Word * MaybeAbstractInstDefn_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0(
  MR_Word CheckedDefn0_7,
  MR_Word * CheckedDefn_8,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static void MR_CALL 
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_8_p_0(
  MR_Word InInt_10,
  MR_Word MaybeDefn0_11,
  MR_Word * MaybeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__416__1__ho10_8_p_0(
  MR_Word HeadVar__2_111,
  MR_Word HeadVar__3_112,
  MR_Word * HeadVar__4_113,
  MR_Word HeadVar__5_114,
  MR_Word * HeadVar__6_115,
  MR_Word HeadVar__7_116,
  MR_Word * HeadVar__8_117);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word TypeDefn0_13,
  MR_Word * TypeDefn_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho8_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_solver_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word DetailsSolver0_13,
  MR_Word * DetailsSolver_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemMutable0_9,
  MR_Word * ItemMutable_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_sub_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word DetailsSub0_13,
  MR_Word * DetailsSub_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_9_p_0(
  MR_Word InInt_10,
  MR_Word TypeCtor_12,
  MR_Word DetailsDu0_13,
  MR_Word * DetailsDu_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_52,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_45,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_45,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * AddrOfType_83,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_109,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_49,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_42,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_45,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0(
  MR_Word ParseTreeModuleSrc0_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74);


static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[12][3];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[3][9];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[12][10];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[18][4];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_7[1][13];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[4][6];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_10[3][11];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[1][8];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_13[1][12];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_14[2][5];


struct parse_tree__module_qual__qualify_items__vector_common_type_12_0_s {
  const MR_Word parse_tree__module_qual__qualify_items__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_12_0_s parse_tree__module_qual__qualify_items_vector_common_12[8];



static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_13[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_13[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "float")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "string")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "")) },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[12][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[18][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[5])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[6])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_14)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[7])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[8])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[9])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[10])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[11])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_7[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int0_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_10[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_used_item_type_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_13[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_14[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_10[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_2[10])),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_10[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_2[11])),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_12_0_s parse_tree__module_qual__qualify_items_vector_common_12[8] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 0 },
  /* row   7 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__qualify_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 9,
  {
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__468__1_8_p_0(
  MR_Word HeadVar__1_83,
  MR_Word HeadVar__2_84,
  MR_Word HeadVar__3_188,
  MR_Word * HeadVar__4_189,
  MR_Word HeadVar__5_190,
  MR_Word * HeadVar__6_191,
  MR_Word HeadVar__7_192,
  MR_Word * HeadVar__8_193)
{
  MR_Word SymName_195 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_188, (MR_Integer) 0))));
  MR_Word Params_196 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_188, (MR_Integer) 1))));
  MR_Word TypeDefn0_197 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_188, (MR_Integer) 2))));
  MR_Word TVarSet_198 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_188, (MR_Integer) 3))));
  MR_Word Context_199 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_188, (MR_Integer) 4))));
  MR_Word SeqNum_200 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_188, (MR_Integer) 5))));
  MR_Integer Arity_201;
  MR_Word TypeCtor_202;
  MR_Word TypeDefn_203;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv3_TypeDefn_203;
  MR_Box conv2_HeadVar__6_191;
  MR_Box conv1_HeadVar__8_193;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_196, &Arity_201);
  {
    TypeCtor_202 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_202, 0) = ((MR_Box) (SymName_195));
    MR_hl_field(0, TypeCtor_202, 1) = ((MR_Box) (Arity_201));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__1_83, (MR_Integer) 1))));
  func_0(((MR_Box) (HeadVar__1_83)), ((MR_Box) (HeadVar__2_84)), ((MR_Box) (Context_199)), ((MR_Box) (TypeCtor_202)), ((MR_Box) (TypeDefn0_197)), &conv3_TypeDefn_203, ((MR_Box) (HeadVar__5_190)), &conv2_HeadVar__6_191, ((MR_Box) (HeadVar__7_192)), &conv1_HeadVar__8_193);
  TypeDefn_203 = ((MR_Word) (conv3_TypeDefn_203));
  *HeadVar__6_191 = ((MR_Word) (conv2_HeadVar__6_191));
  *HeadVar__8_193 = ((MR_Word) (conv1_HeadVar__8_193));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_189 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_195));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_196));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_203));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_198));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_199));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_200));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__464__1_8_p_0(
  MR_Word HeadVar__1_78,
  MR_Word HeadVar__2_79,
  MR_Word HeadVar__3_169,
  MR_Word * HeadVar__4_170,
  MR_Word HeadVar__5_171,
  MR_Word * HeadVar__6_172,
  MR_Word HeadVar__7_173,
  MR_Word * HeadVar__8_174)
{
  MR_Word SymName_176 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_169, (MR_Integer) 0))));
  MR_Word Params_177 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_169, (MR_Integer) 1))));
  MR_Word TypeDefn0_178 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_169, (MR_Integer) 2))));
  MR_Word TVarSet_179 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_169, (MR_Integer) 3))));
  MR_Word Context_180 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_169, (MR_Integer) 4))));
  MR_Word SeqNum_181 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_169, (MR_Integer) 5))));
  MR_Integer Arity_182;
  MR_Word TypeCtor_183;
  MR_Word TypeDefn_184;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv3_TypeDefn_184;
  MR_Box conv2_HeadVar__6_172;
  MR_Box conv1_HeadVar__8_174;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_177, &Arity_182);
  {
    TypeCtor_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_183, 0) = ((MR_Box) (SymName_176));
    MR_hl_field(0, TypeCtor_183, 1) = ((MR_Box) (Arity_182));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__1_78, (MR_Integer) 1))));
  func_0(((MR_Box) (HeadVar__1_78)), ((MR_Box) (HeadVar__2_79)), ((MR_Box) (Context_180)), ((MR_Box) (TypeCtor_183)), ((MR_Box) (TypeDefn0_178)), &conv3_TypeDefn_184, ((MR_Box) (HeadVar__5_171)), &conv2_HeadVar__6_172, ((MR_Box) (HeadVar__7_173)), &conv1_HeadVar__8_174);
  TypeDefn_184 = ((MR_Word) (conv3_TypeDefn_184));
  *HeadVar__6_172 = ((MR_Word) (conv2_HeadVar__6_172));
  *HeadVar__8_174 = ((MR_Word) (conv1_HeadVar__8_174));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_170 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_176));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_177));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_184));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_179));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_180));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_181));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
  MR_Word InInt_11,
  MR_String EventName_12,
  MR_String FileName_13,
  MR_Integer LineNumber_14,
  MR_Word Attr0_15,
  MR_Word * Attr_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_Integer AttrNum_19 = ((MR_Integer) ((MR_hl_field(0, Attr0_15, (MR_Integer) 0))));
  MR_String AttrName_20 = ((MR_String) ((MR_hl_field(0, Attr0_15, (MR_Integer) 1))));
  MR_Word AttrType0_21 = ((MR_Word) ((MR_hl_field(0, Attr0_15, (MR_Integer) 2))));
  MR_Word AttrMode0_22 = ((MR_Word) ((MR_hl_field(0, Attr0_15, (MR_Integer) 3))));
  MR_Word MaybeSynthCall_23 = ((MR_Word) ((MR_hl_field(0, Attr0_15, (MR_Integer) 4))));
  MR_Word Context_24;
  MR_Word ErrorContext_25;
  MR_Word AttrType_26;
  MR_Word AttrMode_27;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;

  {
    Context_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Context_24, 0) = ((MR_Box) (FileName_13));
    MR_hl_field(0, Context_24, 1) = ((MR_Box) (LineNumber_14));
  }
  {
    ErrorContext_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_25, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, ErrorContext_25, 1) = ((MR_Box) (Context_24));
    MR_hl_field(3, ErrorContext_25, 2) = ((MR_Box) (EventName_12));
    MR_hl_field(3, ErrorContext_25, 3) = ((MR_Box) (AttrName_20));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_11, ErrorContext_25, AttrType0_21, &AttrType_26, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_33_33);
  if (((MR_tag((MR_Word) AttrMode0_22)) == (MR_Integer) 0))
  {
    MR_Word InstA0_34 = ((MR_Word) ((MR_hl_field(0, AttrMode0_22, (MR_Integer) 0))));
    MR_Word InstB0_35 = ((MR_Word) ((MR_hl_field(0, AttrMode0_22, (MR_Integer) 1))));
    MR_Word InstA_36;
    MR_Word InstB_37;
    MR_Word STATE_VARIABLE_Info_29_44;
    MR_Word STATE_VARIABLE_Specs_30_45;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_11, ErrorContext_25, InstA0_34, &InstA_36, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_29_44, STATE_VARIABLE_Specs_33_33, &STATE_VARIABLE_Specs_30_45);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_11, ErrorContext_25, InstB0_35, &InstB_37, STATE_VARIABLE_Info_29_44, STATE_VARIABLE_Info_29, STATE_VARIABLE_Specs_30_45, STATE_VARIABLE_Specs_31);
    {
      AttrMode_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AttrMode_27, 0) = ((MR_Box) (InstA_36));
      MR_hl_field(0, AttrMode_27, 1) = ((MR_Box) (InstB_37));
    }
  }
  else
  {
    MR_Word SymName0_38 = ((MR_Word) ((MR_hl_field(1, AttrMode0_22, (MR_Integer) 0))));
    MR_Word Insts0_39 = ((MR_Word) ((MR_hl_field(1, AttrMode0_22, (MR_Integer) 1))));
    MR_Word Insts_40;
    MR_Integer Arity_41;
    MR_Word Modes_42;
    MR_Word SymName_43;
    MR_Word STATE_VARIABLE_Info_33_46;
    MR_Word STATE_VARIABLE_Specs_34_47;
    MR_Word Var_49;

    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_11, ErrorContext_25, Insts0_39, &Insts_40, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_33_46, STATE_VARIABLE_Specs_33_33, &STATE_VARIABLE_Specs_34_47);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_40, &Arity_41);
    parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_46, &Modes_42);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (SymName0_38));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (Arity_41));
    }
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_11, ErrorContext_25, Modes_42, (MR_Integer) 2, Var_49, &SymName_43, STATE_VARIABLE_Info_33_46, STATE_VARIABLE_Info_29, STATE_VARIABLE_Specs_34_47, STATE_VARIABLE_Specs_31);
    {
      AttrMode_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, AttrMode_27, 0) = ((MR_Box) (SymName_43));
      MR_hl_field(1, AttrMode_27, 1) = ((MR_Box) (Insts_40));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Attr_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AttrNum_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (AttrName_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (AttrType_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (AttrMode_27));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeSynthCall_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word Pragma0_9,
  MR_Word * Pragma_10,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  switch (MR_tag((MR_Word) Pragma0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_10 = Pragma0_9;
        *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
        *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo0_36 = (MR_Word) (MR_body((MR_Word) (Pragma0_9), (MR_Integer) 2));
        MR_Word Origin_37 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 0))));
        MR_Word Lang_38 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word PredNameModesPF0_39 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 2))));
        MR_String CFunc_40 = ((MR_String) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 3))));
        MR_Word VarSet_41 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 4))));
        MR_Word PredOrFunc_42 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_39, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Name_43 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_39, (MR_Integer) 1))));
        MR_Word PredNameModesPF_44;
        MR_Word FPEInfo_45;
        MR_Word Context_75 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 5))));
        MR_Word SeqNum_76 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_36, (MR_Integer) 6))));
        MR_Word Modes0_77 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_39, (MR_Integer) 2))));
        MR_Word ErrorContext_78;
        MR_Word Modes_79;

        {
          ErrorContext_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, ErrorContext_78, 1) = ((MR_Box) (Context_75));
          MR_hl_field(3, ErrorContext_78, 2) = ((MR_Box) (Pragma0_9));
        }
        parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_78, Modes0_77, &Modes_79, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
        {
          PredNameModesPF_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredNameModesPF_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_42));
          MR_hl_field(0, PredNameModesPF_44, 1) = ((MR_Box) (Name_43));
          MR_hl_field(0, PredNameModesPF_44, 2) = ((MR_Box) (Modes_79));
        }
        {
          FPEInfo_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FPEInfo_45, 0) = ((MR_Box) (Origin_37));
          MR_hl_field(0, FPEInfo_45, 1) = (MR_Box) ((MR_Unsigned) (Lang_38));
          MR_hl_field(0, FPEInfo_45, 2) = ((MR_Box) (PredNameModesPF_44));
          MR_hl_field(0, FPEInfo_45, 3) = ((MR_Box) (CFunc_40));
          MR_hl_field(0, FPEInfo_45, 4) = ((MR_Box) (VarSet_41));
          MR_hl_field(0, FPEInfo_45, 5) = ((MR_Box) (Context_75));
          MR_hl_field(0, FPEInfo_45, 6) = ((MR_Box) (SeqNum_76));
        }
        *Pragma_10 = (MR_Word) (MR_mkword(2, (MR_Word) (FPEInfo_45)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            *Pragma_10 = Pragma0_9;
            *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
            *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TabledInfo0_19 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word EvalMethod_20 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_19, (MR_Integer) 0))));
            MR_Word PredOrProcSpec0_21 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_19, (MR_Integer) 1))));
            MR_Word Attrs_22 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_19, (MR_Integer) 2))));
            MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_19, (MR_Integer) 3))));
            MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_19, (MR_Integer) 4))));
            MR_Word PFUMM0_25 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec0_21, (MR_Integer) 0))));
            MR_Word PredSymName_26 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec0_21, (MR_Integer) 1))));
            MR_Word PFUMM_32;
            MR_Word PredOrProcSpec_34;
            MR_Word TabledInfo_35;

            switch (MR_tag((MR_Word) PFUMM0_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_27 = ((MR_Word) ((MR_hl_field(0, PFUMM0_25, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_27)) == (MR_Integer) 1))
                  {
                    PFUMM_32 = PFUMM0_25;
                    *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
                    *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
                  }
                  else
                  {
                    MR_Word Modes0_28 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_27, (MR_Integer) 0))));
                    MR_Word ErrorContext_29;
                    MR_Word Modes_30;
                    MR_Word ModesOrArity_31;

                    {
                      ErrorContext_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ErrorContext_29, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, ErrorContext_29, 1) = ((MR_Box) (Context_23));
                      MR_hl_field(3, ErrorContext_29, 2) = ((MR_Box) (Pragma0_9));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_29, Modes0_28, &Modes_30, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
                    {
                      ModesOrArity_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_31, 0) = ((MR_Box) (Modes_30));
                    }
                    {
                      PFUMM_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFUMM_32, 0) = ((MR_Box) (ModesOrArity_31));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_67 = ((MR_Word) ((MR_hl_field(1, PFUMM0_25, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_67)) == (MR_Integer) 1))
                  {
                    PFUMM_32 = PFUMM0_25;
                    *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
                    *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
                  }
                  else
                  {
                    MR_Word Modes0_56 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_67, (MR_Integer) 0))));
                    MR_Word ErrorContext_57;
                    MR_Word Modes_58;
                    MR_Word ModesOrArity_59;

                    {
                      ErrorContext_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ErrorContext_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, ErrorContext_57, 1) = ((MR_Box) (Context_23));
                      MR_hl_field(3, ErrorContext_57, 2) = ((MR_Box) (Pragma0_9));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_57, Modes0_56, &Modes_58, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
                    {
                      ModesOrArity_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_59, 0) = ((MR_Box) (Modes_58));
                    }
                    {
                      PFUMM_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PFUMM_32, 0) = ((MR_Box) (ModesOrArity_59));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_32 = PFUMM0_25;
                  *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
                  *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
                }
                break;
            }
            {
              PredOrProcSpec_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredOrProcSpec_34, 0) = ((MR_Box) (PFUMM_32));
              MR_hl_field(0, PredOrProcSpec_34, 1) = ((MR_Box) (PredSymName_26));
            }
            {
              TabledInfo_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TabledInfo_35, 0) = ((MR_Box) (EvalMethod_20));
              MR_hl_field(0, TabledInfo_35, 1) = ((MR_Box) (PredOrProcSpec_34));
              MR_hl_field(0, TabledInfo_35, 2) = ((MR_Box) (Attrs_22));
              MR_hl_field(0, TabledInfo_35, 3) = ((MR_Box) (Context_23));
              MR_hl_field(0, TabledInfo_35, 4) = ((MR_Box) (SeqNum_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TabledInfo_35));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Subst_12;
  MR_Word conv1_STATE_VARIABLE_Info_20;
  MR_Word conv0_STATE_VARIABLE_Specs_22;

  parse_tree__module_qual__qualify_items__qualify_type_subst_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Subst_12, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_22);
  *wrapper_arg_2 = ((MR_Box) (conv2_Subst_12));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_20));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word Pragma0_9,
  MR_Word * Pragma_10,
  MR_Word STATE_VARIABLE_Info_0_79,
  MR_Word * STATE_VARIABLE_Info_80,
  MR_Word STATE_VARIABLE_Specs_0_81,
  MR_Word * STATE_VARIABLE_Specs_82)
{
  switch (MR_tag((MR_Word) Pragma0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Pragma_10 = Pragma0_9;
        *STATE_VARIABLE_Info_80 = STATE_VARIABLE_Info_0_79;
        *STATE_VARIABLE_Specs_82 = STATE_VARIABLE_Specs_0_81;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecConstrInfo0_13 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 0))));
            MR_Word OoMConstraints0_15 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 1))));
            MR_Word ApplyToSupers_16 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word OoMSubsts0_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 3))));
            MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 4))));
            MR_Word Items_19 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 5))));
            MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 6))));
            MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_13, (MR_Integer) 7))));
            MR_Word ConstraintErrorContext_22;
            MR_Word HeadConstraint0_23;
            MR_Word TailConstraints0_24;
            MR_Word HeadConstraint_25;
            MR_Word TailConstraints_26;
            MR_Word OoMConstraints_27;
            MR_Word ErrorContext_28;
            MR_Word HeadSubst0_29;
            MR_Word TailSubsts0_30;
            MR_Word HeadSubst_31;
            MR_Word TailSubsts_32;
            MR_Word OoMSubsts_33;
            MR_Word TypeSpecConstrInfo_34;
            MR_Word STATE_VARIABLE_Info_83_83;
            MR_Word STATE_VARIABLE_Specs_84_84;
            MR_Word STATE_VARIABLE_Info_85_85;
            MR_Word STATE_VARIABLE_Specs_86_86;
            MR_Word STATE_VARIABLE_Info_87_87;
            MR_Word STATE_VARIABLE_Specs_88_88;
            MR_Word Var_89;
            MR_Box conv4_STATE_VARIABLE_Info_80;
            MR_Box conv3_STATE_VARIABLE_Specs_82;

            {
              ConstraintErrorContext_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstraintErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, ConstraintErrorContext_22, 1) = ((MR_Box) (Context_20));
              MR_hl_field(3, ConstraintErrorContext_22, 2) = ((MR_Box) (ModuleName_14));
            }
            HeadConstraint0_23 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_15, (MR_Integer) 0))));
            TailConstraints0_24 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_15, (MR_Integer) 1))));
            parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_8_p_0(InInt_8, ConstraintErrorContext_22, HeadConstraint0_23, &HeadConstraint_25, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_83_83, STATE_VARIABLE_Specs_0_81, &STATE_VARIABLE_Specs_84_84);
            parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_22, TailConstraints0_24, &TailConstraints_26, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_86_86);
            {
              OoMConstraints_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMConstraints_27, 0) = ((MR_Box) (HeadConstraint_25));
              MR_hl_field(0, OoMConstraints_27, 1) = ((MR_Box) (TailConstraints_26));
            }
            {
              ErrorContext_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_28, 1) = ((MR_Box) (Context_20));
              MR_hl_field(3, ErrorContext_28, 2) = ((MR_Box) (Pragma0_9));
            }
            HeadSubst0_29 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_17, (MR_Integer) 0))));
            TailSubsts0_30 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_17, (MR_Integer) 1))));
            parse_tree__module_qual__qualify_items__qualify_type_subst_8_p_0(InInt_8, ErrorContext_28, HeadSubst0_29, &HeadSubst_31, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_87_87, STATE_VARIABLE_Specs_86_86, &STATE_VARIABLE_Specs_88_88);
            {
              Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_89, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_10[2]));
              MR_hl_field(0, Var_89, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0_1));
              MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_89, 3) = ((MR_Box) (InInt_8));
              MR_hl_field(0, Var_89, 4) = ((MR_Box) (ErrorContext_28));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Var_89, TailSubsts0_30, &TailSubsts_32, ((MR_Box) (STATE_VARIABLE_Info_87_87)), &conv4_STATE_VARIABLE_Info_80, ((MR_Box) (STATE_VARIABLE_Specs_88_88)), &conv3_STATE_VARIABLE_Specs_82);
            *STATE_VARIABLE_Info_80 = ((MR_Word) (conv4_STATE_VARIABLE_Info_80));
            *STATE_VARIABLE_Specs_82 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_82));
            {
              OoMSubsts_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMSubsts_33, 0) = ((MR_Box) (HeadSubst_31));
              MR_hl_field(0, OoMSubsts_33, 1) = ((MR_Box) (TailSubsts_32));
            }
            {
              TypeSpecConstrInfo_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecConstrInfo_34, 0) = ((MR_Box) (ModuleName_14));
              MR_hl_field(0, TypeSpecConstrInfo_34, 1) = ((MR_Box) (OoMConstraints_27));
              MR_hl_field(0, TypeSpecConstrInfo_34, 2) = (MR_Box) ((MR_Unsigned) (ApplyToSupers_16));
              MR_hl_field(0, TypeSpecConstrInfo_34, 3) = ((MR_Box) (OoMSubsts_33));
              MR_hl_field(0, TypeSpecConstrInfo_34, 4) = ((MR_Box) (TVarSet_18));
              MR_hl_field(0, TypeSpecConstrInfo_34, 5) = ((MR_Box) (Items_19));
              MR_hl_field(0, TypeSpecConstrInfo_34, 6) = ((MR_Box) (Context_20));
              MR_hl_field(0, TypeSpecConstrInfo_34, 7) = ((MR_Box) (SeqNum_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecConstrInfo_34));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpecInfo0_35 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word PFUMM0_36 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 0))));
            MR_Word PredName_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 1))));
            MR_Word SpecPredName_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 2))));
            MR_Word Subst0_39 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 3))));
            MR_Word PFUMM_44;
            MR_Word Subst_46;
            MR_Word TypeSpecInfo_47;
            MR_Word STATE_VARIABLE_Info_92_92;
            MR_Word STATE_VARIABLE_Specs_93_93;
            MR_Word TVarSet_124 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 4))));
            MR_Word Items_125 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 5))));
            MR_Word Context_126 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 6))));
            MR_Word SeqNum_127 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_35, (MR_Integer) 7))));
            MR_Word ErrorContext_128;

            {
              ErrorContext_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_128, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_128, 1) = ((MR_Box) (Context_126));
              MR_hl_field(3, ErrorContext_128, 2) = ((MR_Box) (Pragma0_9));
            }
            switch (MR_tag((MR_Word) PFUMM0_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_40 = ((MR_Word) ((MR_hl_field(0, PFUMM0_36, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_40)) == (MR_Integer) 1))
                  {
                    PFUMM_44 = PFUMM0_36;
                    STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_0_79;
                    STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_81;
                  }
                  else
                  {
                    MR_Word Modes0_41 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_40, (MR_Integer) 0))));
                    MR_Word Modes_42;
                    MR_Word ModesOrArity_43;

                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_128, Modes0_41, &Modes_42, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Specs_0_81, &STATE_VARIABLE_Specs_93_93);
                    {
                      ModesOrArity_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_43, 0) = ((MR_Box) (Modes_42));
                    }
                    {
                      PFUMM_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFUMM_44, 0) = ((MR_Box) (ModesOrArity_43));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_117 = ((MR_Word) ((MR_hl_field(1, PFUMM0_36, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_117)) == (MR_Integer) 1))
                  {
                    PFUMM_44 = PFUMM0_36;
                    STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_0_79;
                    STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_81;
                  }
                  else
                  {
                    MR_Word Modes0_108 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_117, (MR_Integer) 0))));
                    MR_Word Modes_109;
                    MR_Word ModesOrArity_110;

                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_128, Modes0_108, &Modes_109, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Specs_0_81, &STATE_VARIABLE_Specs_93_93);
                    {
                      ModesOrArity_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_110, 0) = ((MR_Box) (Modes_109));
                    }
                    {
                      PFUMM_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PFUMM_44, 0) = ((MR_Box) (ModesOrArity_110));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_44 = PFUMM0_36;
                  STATE_VARIABLE_Info_92_92 = STATE_VARIABLE_Info_0_79;
                  STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_0_81;
                }
                break;
            }
            parse_tree__module_qual__qualify_items__qualify_type_subst_8_p_0(InInt_8, ErrorContext_128, Subst0_39, &Subst_46, STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Info_80, STATE_VARIABLE_Specs_93_93, STATE_VARIABLE_Specs_82);
            {
              TypeSpecInfo_47 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecInfo_47, 0) = ((MR_Box) (PFUMM_44));
              MR_hl_field(0, TypeSpecInfo_47, 1) = ((MR_Box) (PredName_37));
              MR_hl_field(0, TypeSpecInfo_47, 2) = ((MR_Box) (SpecPredName_38));
              MR_hl_field(0, TypeSpecInfo_47, 3) = ((MR_Box) (Subst_46));
              MR_hl_field(0, TypeSpecInfo_47, 4) = ((MR_Box) (TVarSet_124));
              MR_hl_field(0, TypeSpecInfo_47, 5) = ((MR_Box) (Items_125));
              MR_hl_field(0, TypeSpecInfo_47, 6) = ((MR_Box) (Context_126));
              MR_hl_field(0, TypeSpecInfo_47, 7) = ((MR_Box) (SeqNum_127));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecInfo_47));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OISUInfo0_48 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word TypeCtor0_49 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_48, (MR_Integer) 0))));
            MR_Word CreatorPreds_50 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_48, (MR_Integer) 1))));
            MR_Word MutatorPreds_51 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_48, (MR_Integer) 2))));
            MR_Word DestructorPreds_52 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_48, (MR_Integer) 3))));
            MR_Word TypeCtor_53;
            MR_Word OISUInfo_54;
            MR_Word Context_129 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_48, (MR_Integer) 4))));
            MR_Word SeqNum_130 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_48, (MR_Integer) 5))));
            MR_Word ErrorContext_131;

            {
              ErrorContext_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_131, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_131, 1) = ((MR_Box) (Context_129));
              MR_hl_field(3, ErrorContext_131, 2) = ((MR_Box) (Pragma0_9));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_8, ErrorContext_131, TypeCtor0_49, &TypeCtor_53, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
            {
              OISUInfo_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OISUInfo_54, 0) = ((MR_Box) (TypeCtor_53));
              MR_hl_field(0, OISUInfo_54, 1) = ((MR_Box) (CreatorPreds_50));
              MR_hl_field(0, OISUInfo_54, 2) = ((MR_Box) (MutatorPreds_51));
              MR_hl_field(0, OISUInfo_54, 3) = ((MR_Box) (DestructorPreds_52));
              MR_hl_field(0, OISUInfo_54, 4) = ((MR_Box) (Context_129));
              MR_hl_field(0, OISUInfo_54, 5) = ((MR_Box) (SeqNum_130));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (OISUInfo_54));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermInfo0_55 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_56 = ((MR_Word) ((MR_hl_field(0, TermInfo0_55, (MR_Integer) 0))));
            MR_Word Args_57 = ((MR_Word) ((MR_hl_field(0, TermInfo0_55, (MR_Integer) 1))));
            MR_Word Term_58 = ((MR_Word) ((MR_hl_field(0, TermInfo0_55, (MR_Integer) 2))));
            MR_Word PredOrFunc_59 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_56, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_60 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_56, (MR_Integer) 1))));
            MR_Word PredNameModesPF_61;
            MR_Word TermInfo_62;
            MR_Word Context_132 = ((MR_Word) ((MR_hl_field(0, TermInfo0_55, (MR_Integer) 3))));
            MR_Word SeqNum_133 = ((MR_Word) ((MR_hl_field(0, TermInfo0_55, (MR_Integer) 4))));
            MR_Word ErrorContext_134;
            MR_Word Modes0_135 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_56, (MR_Integer) 2))));
            MR_Word Modes_136;

            {
              ErrorContext_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_134, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_134, 1) = ((MR_Box) (Context_132));
              MR_hl_field(3, ErrorContext_134, 2) = ((MR_Box) (Pragma0_9));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_134, Modes0_135, &Modes_136, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
            {
              PredNameModesPF_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_61, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_59));
              MR_hl_field(0, PredNameModesPF_61, 1) = ((MR_Box) (SymName_60));
              MR_hl_field(0, PredNameModesPF_61, 2) = ((MR_Box) (Modes_136));
            }
            {
              TermInfo_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TermInfo_62, 0) = ((MR_Box) (PredNameModesPF_61));
              MR_hl_field(0, TermInfo_62, 1) = ((MR_Box) (Args_57));
              MR_hl_field(0, TermInfo_62, 2) = ((MR_Box) (Term_58));
              MR_hl_field(0, TermInfo_62, 3) = ((MR_Box) (Context_132));
              MR_hl_field(0, TermInfo_62, 4) = ((MR_Box) (SeqNum_133));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TermInfo_62));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Term2Info0_63 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word SuccessArgs_64 = ((MR_Word) ((MR_hl_field(0, Term2Info0_63, (MR_Integer) 1))));
            MR_Word FailureArgs_65 = ((MR_Word) ((MR_hl_field(0, Term2Info0_63, (MR_Integer) 2))));
            MR_Word Term2Info_66;
            MR_Word Context_137 = ((MR_Word) ((MR_hl_field(0, Term2Info0_63, (MR_Integer) 4))));
            MR_Word SeqNum_138 = ((MR_Word) ((MR_hl_field(0, Term2Info0_63, (MR_Integer) 5))));
            MR_Word ErrorContext_139;
            MR_Word Modes0_140;
            MR_Word Modes_141;
            MR_Word PredNameModesPF0_142 = ((MR_Word) ((MR_hl_field(0, Term2Info0_63, (MR_Integer) 0))));
            MR_Word Term_143 = ((MR_Word) ((MR_hl_field(0, Term2Info0_63, (MR_Integer) 3))));
            MR_Word PredOrFunc_144 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_142, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_145 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_142, (MR_Integer) 1))));
            MR_Word PredNameModesPF_146;

            Modes0_140 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_142, (MR_Integer) 2))));
            {
              ErrorContext_139 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_139, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_139, 1) = ((MR_Box) (Context_137));
              MR_hl_field(3, ErrorContext_139, 2) = ((MR_Box) (Pragma0_9));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_139, Modes0_140, &Modes_141, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
            {
              PredNameModesPF_146 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_146, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_144));
              MR_hl_field(0, PredNameModesPF_146, 1) = ((MR_Box) (SymName_145));
              MR_hl_field(0, PredNameModesPF_146, 2) = ((MR_Box) (Modes_141));
            }
            {
              Term2Info_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Term2Info_66, 0) = ((MR_Box) (PredNameModesPF_146));
              MR_hl_field(0, Term2Info_66, 1) = ((MR_Box) (SuccessArgs_64));
              MR_hl_field(0, Term2Info_66, 2) = ((MR_Box) (FailureArgs_65));
              MR_hl_field(0, Term2Info_66, 3) = ((MR_Box) (Term_143));
              MR_hl_field(0, Term2Info_66, 4) = ((MR_Box) (Context_137));
              MR_hl_field(0, Term2Info_66, 5) = ((MR_Box) (SeqNum_138));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Term2Info_66));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SharingInfo0_67 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word HeadVars_68 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 1))));
            MR_Word HeadVarTypes_69 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 2))));
            MR_Word VarSet_70 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 3))));
            MR_Word MaybeSharing_71 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 5))));
            MR_Word SharingInfo_72;
            MR_Word TVarSet_147 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 4))));
            MR_Word Context_148 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 6))));
            MR_Word SeqNum_149 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 7))));
            MR_Word ErrorContext_150;
            MR_Word Modes0_151;
            MR_Word Modes_152;
            MR_Word PredNameModesPF0_153 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_67, (MR_Integer) 0))));
            MR_Word PredOrFunc_154 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_153, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_155 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_153, (MR_Integer) 1))));
            MR_Word PredNameModesPF_156;

            Modes0_151 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_153, (MR_Integer) 2))));
            {
              ErrorContext_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_150, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_150, 1) = ((MR_Box) (Context_148));
              MR_hl_field(3, ErrorContext_150, 2) = ((MR_Box) (Pragma0_9));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_150, Modes0_151, &Modes_152, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
            {
              PredNameModesPF_156 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_156, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_154));
              MR_hl_field(0, PredNameModesPF_156, 1) = ((MR_Box) (SymName_155));
              MR_hl_field(0, PredNameModesPF_156, 2) = ((MR_Box) (Modes_152));
            }
            {
              SharingInfo_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SharingInfo_72, 0) = ((MR_Box) (PredNameModesPF_156));
              MR_hl_field(0, SharingInfo_72, 1) = ((MR_Box) (HeadVars_68));
              MR_hl_field(0, SharingInfo_72, 2) = ((MR_Box) (HeadVarTypes_69));
              MR_hl_field(0, SharingInfo_72, 3) = ((MR_Box) (VarSet_70));
              MR_hl_field(0, SharingInfo_72, 4) = ((MR_Box) (TVarSet_147));
              MR_hl_field(0, SharingInfo_72, 5) = ((MR_Box) (MaybeSharing_71));
              MR_hl_field(0, SharingInfo_72, 6) = ((MR_Box) (Context_148));
              MR_hl_field(0, SharingInfo_72, 7) = ((MR_Box) (SeqNum_149));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SharingInfo_72));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ReuseInfo0_73 = ((MR_Word) ((MR_hl_field(3, Pragma0_9, (MR_Integer) 1))));
            MR_Word MaybeReuse_74 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 5))));
            MR_Word ReuseInfo_75;
            MR_Word TVarSet_157 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 4))));
            MR_Word Context_158 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 6))));
            MR_Word SeqNum_159 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 7))));
            MR_Word ErrorContext_160;
            MR_Word Modes0_161;
            MR_Word Modes_162;
            MR_Word PredNameModesPF0_163 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 0))));
            MR_Word PredOrFunc_164 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_163, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_165 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_163, (MR_Integer) 1))));
            MR_Word PredNameModesPF_166;
            MR_Word HeadVars_167 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 1))));
            MR_Word HeadVarTypes_168 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 2))));
            MR_Word VarSet_169 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_73, (MR_Integer) 3))));

            Modes0_161 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_163, (MR_Integer) 2))));
            {
              ErrorContext_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_160, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_160, 1) = ((MR_Box) (Context_158));
              MR_hl_field(3, ErrorContext_160, 2) = ((MR_Box) (Pragma0_9));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_160, Modes0_161, &Modes_162, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
            {
              PredNameModesPF_166 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_166, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_164));
              MR_hl_field(0, PredNameModesPF_166, 1) = ((MR_Box) (SymName_165));
              MR_hl_field(0, PredNameModesPF_166, 2) = ((MR_Box) (Modes_162));
            }
            {
              ReuseInfo_75 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReuseInfo_75, 0) = ((MR_Box) (PredNameModesPF_166));
              MR_hl_field(0, ReuseInfo_75, 1) = ((MR_Box) (HeadVars_167));
              MR_hl_field(0, ReuseInfo_75, 2) = ((MR_Box) (HeadVarTypes_168));
              MR_hl_field(0, ReuseInfo_75, 3) = ((MR_Box) (VarSet_169));
              MR_hl_field(0, ReuseInfo_75, 4) = ((MR_Box) (TVarSet_157));
              MR_hl_field(0, ReuseInfo_75, 5) = ((MR_Box) (MaybeReuse_74));
              MR_hl_field(0, ReuseInfo_75, 6) = ((MR_Box) (Context_158));
              MR_hl_field(0, ReuseInfo_75, 7) = ((MR_Box) (SeqNum_159));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ReuseInfo_75));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_subst_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Subst0_11,
  MR_Word * Subst_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word HeadSubst0_15 = ((MR_Word) ((MR_hl_field(0, Subst0_11, (MR_Integer) 0))));
  MR_Word TailSubsts0_16 = ((MR_Word) ((MR_hl_field(0, Subst0_11, (MR_Integer) 1))));
  MR_Word HeadSubst_17;
  MR_Word TailSubsts_18;

  parse_tree__module_qual__qualify_items__qualify_tvar_substs_10_p_0(InInt_9, ErrorContext_10, HeadSubst0_15, &HeadSubst_17, TailSubsts0_16, &TailSubsts_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Subst_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadSubst_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailSubsts_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_tvar_substs_10_p_0(
  MR_Word InInt_11,
  MR_Word ErrorContext_12,
  MR_Word HeadSubst0_13,
  MR_Word * HeadSubst_14,
  MR_Word TailSubsts0_15,
  MR_Word * TailSubsts_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_13, (MR_Integer) 0))));
  MR_Word Type0_20 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_13, (MR_Integer) 1))));
  MR_Word Type_21;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Specs_31_31;

  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_11, ErrorContext_12, Type0_20, &Type_21, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadSubst_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_21));
  }
  if ((TailSubsts0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailSubsts_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_30_30;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_31_31;
  }
  else
  {
    MR_Word HeadTailSubst0_22 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_15, (MR_Integer) 0))));
    MR_Word TailTailSubsts0_23 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_15, (MR_Integer) 1))));
    MR_Word * AddrTailTailSubsts_32;
    MR_Word * AddrHeadTailSubst_33;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailSubsts_16 = base;
      MR_hl_field(1, base, 0) = NULL;
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrHeadTailSubst_33 = (MR_Word *) (&(MR_hl_field(1, *TailSubsts_16, (MR_Integer) 0)));
    AddrTailTailSubsts_32 = (MR_Word *) (&(MR_hl_field(1, *TailSubsts_16, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_tvar_substs__1_10_p_0(InInt_11, ErrorContext_12, HeadTailSubst0_22, AddrHeadTailSubst_33, TailTailSubsts0_23, AddrTailTailSubsts_32, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_tvar_substs__1_10_p_0(
  MR_Word InInt_11,
  MR_Word ErrorContext_12,
  MR_Word HeadSubst0_13,
  MR_Word * AddrOfHeadSubst_34,
  MR_Word TailSubsts0_15,
  MR_Word * AddrOfTailSubsts_35,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  while (MR_TRUE)
  {
    MR_Word HeadSubst_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_13, (MR_Integer) 0))));
    MR_Word Type0_20 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_13, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Specs_31_31;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_11, ErrorContext_12, Type0_20, &Type_21, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_31);
    {
      HeadSubst_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadSubst_14, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, HeadSubst_14, 1) = ((MR_Box) (Type_21));
    }
    *AddrOfHeadSubst_34 = HeadSubst_14;
    if ((TailSubsts0_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfTailSubsts_35 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_30_30;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_31_31;
    }
    else
    {
      MR_Word HeadTailSubst0_22 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_15, (MR_Integer) 0))));
      MR_Word TailTailSubsts0_23 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_15, (MR_Integer) 1))));
      MR_Word * AddrTailTailSubsts_32;
      MR_Word * AddrHeadTailSubst_33;
      MR_Word TailSubsts_36;
      MR_Word next_value_of_HeadSubst0_13;
      MR_Word * next_value_of_AddrOfHeadSubst_34;
      MR_Word next_value_of_TailSubsts0_15;
      MR_Word * next_value_of_AddrOfTailSubsts_35;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_26;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_28;

      {
        TailSubsts_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TailSubsts_36, 0) = NULL;
        MR_hl_field(1, TailSubsts_36, 1) = NULL;
      }
      AddrHeadTailSubst_33 = (MR_Word *) (&(MR_hl_field(1, TailSubsts_36, (MR_Integer) 0)));
      AddrTailTailSubsts_32 = (MR_Word *) (&(MR_hl_field(1, TailSubsts_36, (MR_Integer) 1)));
      *AddrOfTailSubsts_35 = TailSubsts_36;
      // direct tailcall eliminated
      ;
      next_value_of_HeadSubst0_13 = HeadTailSubst0_22;
      next_value_of_AddrOfHeadSubst_34 = AddrHeadTailSubst_33;
      next_value_of_TailSubsts0_15 = TailTailSubsts0_23;
      next_value_of_AddrOfTailSubsts_35 = AddrTailTailSubsts_32;
      next_value_of_STATE_VARIABLE_Info_0_26 = STATE_VARIABLE_Info_30_30;
      next_value_of_STATE_VARIABLE_Specs_0_28 = STATE_VARIABLE_Specs_31_31;
      HeadSubst0_13 = next_value_of_HeadSubst0_13;
      AddrOfHeadSubst_34 = next_value_of_AddrOfHeadSubst_34;
      TailSubsts0_15 = next_value_of_TailSubsts0_15;
      AddrOfTailSubsts_35 = next_value_of_AddrOfTailSubsts_35;
      STATE_VARIABLE_Info_0_26 = next_value_of_STATE_VARIABLE_Info_0_26;
      STATE_VARIABLE_Specs_0_28 = next_value_of_STATE_VARIABLE_Specs_0_28;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6)
{
  MR_bool succeeded;
  MR_Word MethodName0_7 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_5, (MR_Integer) 0))));
  MR_Word InstanceProcDef_8 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_5, (MR_Integer) 1))));
  MR_Word DeclContext_9 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_5, (MR_Integer) 2))));
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, MethodName0_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word MethodSymName0_11 = ((MR_Word) ((MR_hl_field(0, MethodName0_7, (MR_Integer) 1))));
  MR_Word UserArity_12 = ((MR_Word) ((MR_hl_field(0, MethodName0_7, (MR_Integer) 2))));
  MR_Word MethodSymName_14;
  MR_Word MethodName_17;

  if (((MR_tag((MR_Word) MethodSymName0_11)) == (MR_Integer) 1))
  {
    MR_Word MethodModuleName_15 = ((MR_Word) ((MR_hl_field(1, MethodSymName0_11, (MR_Integer) 0))));
    MR_String MethodBaseName_16 = ((MR_String) ((MR_hl_field(1, MethodSymName0_11, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(MethodModuleName_15, DefaultModuleName_4);
    if (succeeded)
      {
        MethodSymName_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MethodSymName_14, 0) = ((MR_Box) (DefaultModuleName_4));
        MR_hl_field(1, MethodSymName_14, 1) = ((MR_Box) (MethodBaseName_16));
      }
    else
      MethodSymName_14 = MethodSymName0_11;
  }
  else
  {
    MR_String Name_13 = ((MR_String) ((MR_hl_field(0, MethodSymName0_11, (MR_Integer) 0))));

    {
      MethodSymName_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MethodSymName_14, 0) = ((MR_Box) (DefaultModuleName_4));
      MR_hl_field(1, MethodSymName_14, 1) = ((MR_Box) (Name_13));
    }
  }
  {
    MethodName_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MethodName_17, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
    MR_hl_field(0, MethodName_17, 1) = ((MR_Box) (MethodSymName_14));
    MR_hl_field(0, MethodName_17, 2) = ((MR_Box) (UserArity_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *InstanceMethod_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MethodName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (InstanceProcDef_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (DeclContext_9));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_8_p_0(
  MR_Word InInt_9,
  MR_Word ContainingErrorContext_10,
  MR_Word Constraint0_11,
  MR_Word * Constraint_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word ClassName0_15 = ((MR_Word) ((MR_hl_field(0, Constraint0_11, (MR_Integer) 0))));
  MR_Word Types0_16 = ((MR_Word) ((MR_hl_field(0, Constraint0_11, (MR_Integer) 1))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, Constraint0_11, (MR_Integer) 2))));
  MR_Integer Arity_18;
  MR_Word OutsideContext_19;
  MR_Word ClassName_20;
  MR_Word ErrorContext_21;
  MR_Word Types_22;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word STATE_VARIABLE_Specs_29_29;
  MR_Word ClassIdSet_31;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Types0_16, &Arity_18);
  {
    OutsideContext_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OutsideContext_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, OutsideContext_19, 1) = ((MR_Box) (ContainingErrorContext_10));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (ClassName0_15));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (Arity_18));
  }
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_23, &ClassIdSet_31);
  parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, OutsideContext_19, ClassIdSet_31, (MR_Integer) 3, Var_27, &ClassName_20, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_29_29);
  {
    ErrorContext_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ErrorContext_21, 1) = ((MR_Box) (ClassName0_15));
    MR_hl_field(3, ErrorContext_21, 2) = ((MR_Box) (Arity_18));
    MR_hl_field(3, ErrorContext_21, 3) = ((MR_Box) (ContainingErrorContext_10));
  }
  parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_8_p_0(InInt_9, ErrorContext_21, Types0_16, &Types_22, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_24, STATE_VARIABLE_Specs_29_29, STATE_VARIABLE_Specs_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Constraint_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word ClassName0_31 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 0))));
    MR_Word Types0_32 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 1))));
    MR_Word Context_33 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 2))));
    MR_Integer Arity_34;
    MR_Word OutsideContext_35;
    MR_Word ClassName_36;
    MR_Word ErrorContext_37;
    MR_Word Types_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_Info_28_40;
    MR_Word STATE_VARIABLE_Specs_29_41;
    MR_Word ClassIdSet_43;
    MR_Word * AddrConstraints_45;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Types0_32, &Arity_34);
    {
      OutsideContext_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, OutsideContext_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, OutsideContext_35, 1) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (ClassName0_31));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (Arity_34));
    }
    parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_43);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_35, ClassIdSet_43, (MR_Integer) 3, Var_39, &ClassName_36, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_28_40, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_29_41);
    {
      ErrorContext_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ErrorContext_37, 1) = ((MR_Box) (ClassName0_31));
      MR_hl_field(3, ErrorContext_37, 2) = ((MR_Box) (Arity_34));
      MR_hl_field(3, ErrorContext_37, 3) = ((MR_Box) (HeadVar__2_2));
    }
    parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_8_p_0(HeadVar__1_1, ErrorContext_37, Types0_32, &Types_38, STATE_VARIABLE_Info_28_40, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_29_41, &STATE_VARIABLE_Specs_30_30);
    {
      Constraint_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Constraint_21, 0) = ((MR_Box) (ClassName_36));
      MR_hl_field(0, Constraint_21, 1) = ((MR_Box) (Types_38));
      MR_hl_field(0, Constraint_21, 2) = ((MR_Box) (Context_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Constraint_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrConstraints_45 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_constraint_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Constraints0_20, AddrConstraints_45, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_constraint_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_46,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_46 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Constraint_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ClassName0_31 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 0))));
      MR_Word Types0_32 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 1))));
      MR_Word Context_33 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 2))));
      MR_Integer Arity_34;
      MR_Word OutsideContext_35;
      MR_Word ClassName_36;
      MR_Word ErrorContext_37;
      MR_Word Types_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_Info_28_40;
      MR_Word STATE_VARIABLE_Specs_29_41;
      MR_Word ClassIdSet_43;
      MR_Word * AddrConstraints_45;
      MR_Word HeadVar__4_47;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_46;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Types0_32, &Arity_34);
      {
        OutsideContext_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OutsideContext_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, OutsideContext_35, 1) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (ClassName0_31));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (Arity_34));
      }
      parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_43);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_35, ClassIdSet_43, (MR_Integer) 3, Var_39, &ClassName_36, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_28_40, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_29_41);
      {
        ErrorContext_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ErrorContext_37, 1) = ((MR_Box) (ClassName0_31));
        MR_hl_field(3, ErrorContext_37, 2) = ((MR_Box) (Arity_34));
        MR_hl_field(3, ErrorContext_37, 3) = ((MR_Box) (HeadVar__2_2));
      }
      parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_8_p_0(HeadVar__1_1, ErrorContext_37, Types0_32, &Types_38, STATE_VARIABLE_Info_28_40, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_29_41, &STATE_VARIABLE_Specs_30_30);
      {
        Constraint_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraint_21, 0) = ((MR_Box) (ClassName_36));
        MR_hl_field(0, Constraint_21, 1) = ((MR_Box) (Types_38));
        MR_hl_field(0, Constraint_21, 2) = ((MR_Box) (Context_33));
      }
      {
        HeadVar__4_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_47, 0) = ((MR_Box) (Constraint_21));
        MR_hl_field(1, HeadVar__4_47, 1) = NULL;
      }
      AddrConstraints_45 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_47, (MR_Integer) 1)));
      *AddrOfHeadVar__4_46 = HeadVar__4_47;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints0_20;
      next_value_of_AddrOfHeadVar__4_46 = AddrConstraints_45;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_46 = next_value_of_AddrOfHeadVar__4_46;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_8_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Arg0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Args0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Arg_21;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word * AddrArgs_39;

    if (((MR_tag((MR_Word) Arg0_19)) == (MR_Integer) 1))
    {
      MR_Word GroundType0_27 = ((MR_Word) ((MR_hl_field(1, Arg0_19, (MR_Integer) 0))));
      MR_Word Type0_28 = (MR_Word) (GroundType0_27);
      MR_Word Type_29;
      MR_Word GroundType_30;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_1, ErrorContext_2, Type0_28, &Type_29, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_36_36);
      succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_29, &GroundType_30);
      if (succeeded)
        {
          Arg_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Arg_21, 0) = ((MR_Box) (GroundType_30));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_var_or_ground_type_list\'/8", (MR_String) "qualified ground type is not ground");
          return;
        }
    }
    else
    {
      Arg_21 = Arg0_19;
      STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_7;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrArgs_39 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_type_list__1_8_p_0(InInt_1, ErrorContext_2, Args0_20, AddrArgs_39, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_type_list__1_8_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_40,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_40 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Arg0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Arg_21;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Word * AddrArgs_39;
      MR_Word HeadVar__4_41;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_40;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) Arg0_19)) == (MR_Integer) 1))
      {
        MR_Word GroundType0_27 = ((MR_Word) ((MR_hl_field(1, Arg0_19, (MR_Integer) 0))));
        MR_Word Type0_28 = (MR_Word) (GroundType0_27);
        MR_Word Type_29;
        MR_Word GroundType_30;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_1, ErrorContext_2, Type0_28, &Type_29, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_36_36);
        succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_29, &GroundType_30);
        if (succeeded)
          {
            Arg_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Arg_21, 0) = ((MR_Box) (GroundType_30));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_var_or_ground_type_list\'/8", (MR_String) "qualified ground type is not ground");
            return;
          }
      }
      else
      {
        Arg_21 = Arg0_19;
        STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_5;
        STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_7;
      }
      {
        HeadVar__4_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_41, 0) = ((MR_Box) (Arg_21));
        MR_hl_field(1, HeadVar__4_41, 1) = NULL;
      }
      AddrArgs_39 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_41, (MR_Integer) 1)));
      *AddrOfHeadVar__4_40 = HeadVar__4_41;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Args0_20;
      next_value_of_AddrOfHeadVar__4_40 = AddrArgs_39;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_35_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_36_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_40 = next_value_of_AddrOfHeadVar__4_40;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word TypeCtor0_11,
  MR_Word * TypeCtor_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word SymName0_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, (MR_Integer) 0))));
  MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_11, (MR_Integer) 1))));
  MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, (MR_Integer) 0))));
  MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_11, (MR_Integer) 1))));

  succeeded = (Var_26 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_25);
  if (succeeded)
  {
    *TypeCtor_12 = TypeCtor0_11;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word TypeCtorId0_17;
    MR_Word Types_18;
    MR_Word SymName_19;

    {
      TypeCtorId0_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtorId0_17, 0) = ((MR_Box) (SymName0_15));
      MR_hl_field(0, TypeCtorId0_17, 1) = ((MR_Box) (Arity_16));
    }
    parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_18);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_18, (MR_Integer) 0, TypeCtorId0_17, &SymName_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtor_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SymName_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (Arity_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word InInt_10,
  MR_Word ItemTypeRepnInfo0_11,
  MR_Word * ItemTypeRepnInfo_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_bool succeeded;
  MR_Word TypeCtorSymName0_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_11, (MR_Integer) 0))));
  MR_Word ArgTVars_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_11, (MR_Integer) 1))));
  MR_Word RepInfo0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_11, (MR_Integer) 5))));
  MR_String TypeCtorName_22;
  MR_Word TypeCtorSymName_23;
  MR_Word RepInfo_26;

  if (((MR_tag((MR_Word) TypeCtorSymName0_15)) == (MR_Integer) 1))
    TypeCtorName_22 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName0_15, (MR_Integer) 1))));
  else
    TypeCtorName_22 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName0_15, (MR_Integer) 0))));
  {
    TypeCtorSymName_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeCtorSymName_23, 0) = ((MR_Box) (ModuleName_9));
    MR_hl_field(1, TypeCtorSymName_23, 1) = ((MR_Box) (TypeCtorName_22));
  }
  switch (MR_tag((MR_Word) RepInfo0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        RepInfo_26 = RepInfo0_17;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word EqvType0_27 = ((MR_Word) ((MR_hl_field(1, RepInfo0_17, (MR_Integer) 0))));
        MR_Integer TypeCtorArity_28;
        MR_Word TypeCtor_29;
        MR_Word ErrorContext_30;
        MR_Word EqvType_31;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), ArgTVars_16, &TypeCtorArity_28);
        {
          TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_29, 0) = ((MR_Box) (TypeCtorSymName_23));
          MR_hl_field(0, TypeCtor_29, 1) = ((MR_Box) (TypeCtorArity_28));
        }
        {
          ErrorContext_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_30, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, ErrorContext_30, 1) = ((MR_Box) (Context_19));
          MR_hl_field(3, ErrorContext_30, 2) = ((MR_Box) (TypeCtor_29));
        }
        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_30, EqvType0_27, &EqvType_31, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
        {
          RepInfo_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RepInfo_26, 0) = ((MR_Box) (EqvType_31));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor0_32 = ((MR_Word) ((MR_hl_field(2, RepInfo0_17, (MR_Integer) 0))));
        MR_Word SuperTypeCtor_33;
        MR_Integer TypeCtorArity_42;
        MR_Word TypeCtor_43;
        MR_Word ErrorContext_44;
        MR_Word SymName0_47;
        MR_Integer Arity_48;
        MR_Word SymName_53;
        MR_Integer Var_54;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), ArgTVars_16, &TypeCtorArity_42);
        {
          TypeCtor_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_43, 0) = ((MR_Box) (TypeCtorSymName_23));
          MR_hl_field(0, TypeCtor_43, 1) = ((MR_Box) (TypeCtorArity_42));
        }
        {
          ErrorContext_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_44, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, ErrorContext_44, 1) = ((MR_Box) (Context_19));
          MR_hl_field(3, ErrorContext_44, 2) = ((MR_Box) (TypeCtor_43));
        }
        SymName0_47 = ((MR_Word) ((MR_hl_field(0, SuperTypeCtor0_32, (MR_Integer) 0))));
        Arity_48 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor0_32, (MR_Integer) 1))));
        SymName_53 = ((MR_Word) ((MR_hl_field(0, SuperTypeCtor0_32, (MR_Integer) 0))));
        Var_54 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor0_32, (MR_Integer) 1))));
        succeeded = (Var_54 == (MR_Integer) 0);
        if (succeeded)
          succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_53);
        if (succeeded)
        {
          SuperTypeCtor_33 = SuperTypeCtor0_32;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        }
        else
        {
          MR_Word TypeCtorId0_49;
          MR_Word Types_50;
          MR_Word SymName_51;

          {
            TypeCtorId0_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorId0_49, 0) = ((MR_Box) (SymName0_47));
            MR_hl_field(0, TypeCtorId0_49, 1) = ((MR_Box) (Arity_48));
          }
          parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_50);
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_10, ErrorContext_44, Types_50, (MR_Integer) 0, TypeCtorId0_49, &SymName_51, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          {
            SuperTypeCtor_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SuperTypeCtor_33, 0) = ((MR_Box) (SymName_51));
            MR_hl_field(0, SuperTypeCtor_33, 1) = ((MR_Box) (Arity_48));
          }
        }
        {
          RepInfo_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RepInfo_26, 0) = ((MR_Box) (SuperTypeCtor_33));
        }
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeRepnInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeCtorSymName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTVars_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (RepInfo_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemFEE0_9,
  MR_Word * ItemFEE_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(0, ItemFEE0_9, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor0_14 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_9, (MR_Integer) 1))));
  MR_Word Attributes_15 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_9, (MR_Integer) 2))));
  MR_Word Overrides_16 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_9, (MR_Integer) 3))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_9, (MR_Integer) 4))));
  MR_Word SeqNum_18 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_9, (MR_Integer) 5))));
  MR_Word ErrorContext_19;
  MR_Word OldSuppressUndef_20;
  MR_Word TypeCtor_21;
  MR_Word STATE_VARIABLE_Info_27_27;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word SymName0_29;
  MR_Integer Arity_30;
  MR_Word SymName_35;
  MR_Integer Var_36;

  {
    ErrorContext_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, ErrorContext_19, 1) = ((MR_Box) (Context_17));
  }
  parse_tree__module_qual__mq_info__mq_info_get_suppress_found_undef_2_p_0(STATE_VARIABLE_Info_0_22, &OldSuppressUndef_20);
  parse_tree__module_qual__mq_info__mq_info_set_suppress_found_undef_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
  SymName0_29 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 0))));
  Arity_30 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 1))));
  SymName_35 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 0))));
  Var_36 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 1))));
  succeeded = (Var_36 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_35);
  if (succeeded)
  {
    TypeCtor_21 = TypeCtor0_14;
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
  }
  else
  {
    MR_Word TypeCtorId0_31;
    MR_Word Types_32;
    MR_Word SymName_33;

    {
      TypeCtorId0_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtorId0_31, 0) = ((MR_Box) (SymName0_29));
      MR_hl_field(0, TypeCtorId0_31, 1) = ((MR_Box) (Arity_30));
    }
    parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_27_27, &Types_32);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_19, Types_32, (MR_Integer) 0, TypeCtorId0_31, &SymName_33, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    {
      TypeCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_21, 0) = ((MR_Box) (SymName_33));
      MR_hl_field(0, TypeCtor_21, 1) = ((MR_Box) (Arity_30));
    }
  }
  parse_tree__module_qual__mq_info__mq_info_set_suppress_found_undef_3_p_0(OldSuppressUndef_20, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemFEE_10 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeCtor_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Attributes_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Overrides_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemForeignEnum0_9,
  MR_Word * ItemForeignEnum_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum0_9, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor0_14 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_9, (MR_Integer) 1))));
  MR_Word Values_15 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_9, (MR_Integer) 2))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_9, (MR_Integer) 3))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_9, (MR_Integer) 4))));
  MR_Word ErrorContext_18;
  MR_Word TypeCtor_19;
  MR_Word SymName0_24;
  MR_Integer Arity_25;
  MR_Word SymName_30;
  MR_Integer Var_31;

  {
    ErrorContext_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ErrorContext_18, 1) = ((MR_Box) (Context_16));
  }
  SymName0_24 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 0))));
  Arity_25 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 1))));
  SymName_30 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 0))));
  Var_31 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_14, (MR_Integer) 1))));
  succeeded = (Var_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_30);
  if (succeeded)
  {
    TypeCtor_19 = TypeCtor0_14;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word TypeCtorId0_26;
    MR_Word Types_27;
    MR_Word SymName_28;

    {
      TypeCtorId0_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtorId0_26, 0) = ((MR_Box) (SymName0_24));
      MR_hl_field(0, TypeCtorId0_26, 1) = ((MR_Box) (Arity_25));
    }
    parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_27);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_18, Types_27, (MR_Integer) 0, TypeCtorId0_26, &SymName_28, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_19, 0) = ((MR_Box) (SymName_28));
      MR_hl_field(0, TypeCtor_19, 1) = ((MR_Box) (Arity_25));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *ItemForeignEnum_10 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeCtor_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_proc_7_p_0(
  MR_Word InInt_8,
  MR_Word FPInfo0_9,
  MR_Word * FPInfo_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word Attrs0_13 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 0))));
  MR_Word Name_14 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 1))));
  MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Vars0_16 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 3))));
  MR_Word Varset_17 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 4))));
  MR_Word InstVarset_18 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 5))));
  MR_Word Impl_19 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 6))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 7))));
  MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(0, FPInfo0_9, (MR_Integer) 8))));
  MR_Word ErrorContext_22;
  MR_Word Vars_23;
  MR_Word UserSharing0_24;
  MR_Word UserSharing_25;
  MR_Word Attrs_26;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_Specs_32_32;

  {
    ErrorContext_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ErrorContext_22, 1) = ((MR_Box) (Context_20));
  }
  parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(InInt_8, ErrorContext_22, Vars0_16, &Vars_23, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_32_32);
  UserSharing0_24 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_13);
  if ((UserSharing0_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    UserSharing_25 = UserSharing0_24;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_32_32;
  }
  else
  {
    MR_Word Sharing_33 = ((MR_Word) ((MR_hl_field(1, UserSharing0_24, (MR_Integer) 0))));
    MR_Word MaybeTypes0_34 = ((MR_Word) ((MR_hl_field(1, UserSharing0_24, (MR_Integer) 1))));

    if ((MaybeTypes0_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      UserSharing_25 = UserSharing0_24;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_32_32;
    }
    else
    {
      MR_Word Types0_35;
      MR_Word TVarset_36;
      MR_Word Types_37;
      MR_Word MaybeTypes_38;
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, MaybeTypes0_34, (MR_Integer) 0))));
      MR_Word Var_40;

      Types0_35 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
      TVarset_36 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_22, Types0_35, &Types_37, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Specs_30);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (Types_37));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (TVarset_36));
      }
      {
        MaybeTypes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTypes_38, 0) = ((MR_Box) (Var_40));
      }
      {
        UserSharing_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UserSharing_25, 0) = ((MR_Box) (Sharing_33));
        MR_hl_field(1, UserSharing_25, 1) = ((MR_Box) (MaybeTypes_38));
      }
    }
  }
  parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_25, Attrs0_13, &Attrs_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *FPInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Attrs_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Name_14));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Vars_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (Varset_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstVarset_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Impl_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_21));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word PragmaVar0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word PragmaVars0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word PragmaVar_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 0))));
    MR_String Name_32 = ((MR_String) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 1))));
    MR_Word Mode0_33 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 2))));
    MR_Word Box_34 = ((MR_Unsigned) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Mode_35;
    MR_Word * AddrPragmaVars_53;

    if (((MR_tag((MR_Word) Mode0_33)) == (MR_Integer) 0))
    {
      MR_Word InstA0_36 = ((MR_Word) ((MR_hl_field(0, Mode0_33, (MR_Integer) 0))));
      MR_Word InstB0_37 = ((MR_Word) ((MR_hl_field(0, Mode0_33, (MR_Integer) 1))));
      MR_Word InstA_38;
      MR_Word InstB_39;
      MR_Word STATE_VARIABLE_Info_29_46;
      MR_Word STATE_VARIABLE_Specs_30_47;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_36, &InstA_38, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_46, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_47);
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_37, &InstB_39, STATE_VARIABLE_Info_29_46, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_30_47, &STATE_VARIABLE_Specs_30_30);
      {
        Mode_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_35, 0) = ((MR_Box) (InstA_38));
        MR_hl_field(0, Mode_35, 1) = ((MR_Box) (InstB_39));
      }
    }
    else
    {
      MR_Word SymName0_40 = ((MR_Word) ((MR_hl_field(1, Mode0_33, (MR_Integer) 0))));
      MR_Word Insts0_41 = ((MR_Word) ((MR_hl_field(1, Mode0_33, (MR_Integer) 1))));
      MR_Word Insts_42;
      MR_Integer Arity_43;
      MR_Word Modes_44;
      MR_Word SymName_45;
      MR_Word STATE_VARIABLE_Info_33_48;
      MR_Word STATE_VARIABLE_Specs_34_49;
      MR_Word Var_51;

      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_41, &Insts_42, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_48, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_34_49);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_42, &Arity_43);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_48, &Modes_44);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (SymName0_40));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (Arity_43));
      }
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, HeadVar__2_2, Modes_44, (MR_Integer) 2, Var_51, &SymName_45, STATE_VARIABLE_Info_33_48, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_49, &STATE_VARIABLE_Specs_30_30);
      {
        Mode_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_35, 0) = ((MR_Box) (SymName_45));
        MR_hl_field(1, Mode_35, 1) = ((MR_Box) (Insts_42));
      }
    }
    {
      PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PragmaVar_21, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, PragmaVar_21, 1) = ((MR_Box) (Name_32));
      MR_hl_field(0, PragmaVar_21, 2) = ((MR_Box) (Mode_35));
      MR_hl_field(0, PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PragmaVar_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrPragmaVars_53 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(HeadVar__1_1, HeadVar__2_2, PragmaVars0_20, AddrPragmaVars_53, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_54,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_54 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word PragmaVar0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PragmaVars0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PragmaVar_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 0))));
      MR_String Name_32 = ((MR_String) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 1))));
      MR_Word Mode0_33 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 2))));
      MR_Word Box_34 = ((MR_Unsigned) ((MR_hl_field(0, PragmaVar0_19, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word Mode_35;
      MR_Word * AddrPragmaVars_53;
      MR_Word HeadVar__4_55;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_54;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) Mode0_33)) == (MR_Integer) 0))
      {
        MR_Word InstA0_36 = ((MR_Word) ((MR_hl_field(0, Mode0_33, (MR_Integer) 0))));
        MR_Word InstB0_37 = ((MR_Word) ((MR_hl_field(0, Mode0_33, (MR_Integer) 1))));
        MR_Word InstA_38;
        MR_Word InstB_39;
        MR_Word STATE_VARIABLE_Info_29_46;
        MR_Word STATE_VARIABLE_Specs_30_47;

        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_36, &InstA_38, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_46, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_47);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_37, &InstB_39, STATE_VARIABLE_Info_29_46, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_30_47, &STATE_VARIABLE_Specs_30_30);
        {
          Mode_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_35, 0) = ((MR_Box) (InstA_38));
          MR_hl_field(0, Mode_35, 1) = ((MR_Box) (InstB_39));
        }
      }
      else
      {
        MR_Word SymName0_40 = ((MR_Word) ((MR_hl_field(1, Mode0_33, (MR_Integer) 0))));
        MR_Word Insts0_41 = ((MR_Word) ((MR_hl_field(1, Mode0_33, (MR_Integer) 1))));
        MR_Word Insts_42;
        MR_Integer Arity_43;
        MR_Word Modes_44;
        MR_Word SymName_45;
        MR_Word STATE_VARIABLE_Info_33_48;
        MR_Word STATE_VARIABLE_Specs_34_49;
        MR_Word Var_51;

        parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_41, &Insts_42, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_48, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_34_49);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_42, &Arity_43);
        parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_48, &Modes_44);
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (SymName0_40));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (Arity_43));
        }
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, HeadVar__2_2, Modes_44, (MR_Integer) 2, Var_51, &SymName_45, STATE_VARIABLE_Info_33_48, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_49, &STATE_VARIABLE_Specs_30_30);
        {
          Mode_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mode_35, 0) = ((MR_Box) (SymName_45));
          MR_hl_field(1, Mode_35, 1) = ((MR_Box) (Insts_42));
        }
      }
      {
        PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PragmaVar_21, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, PragmaVar_21, 1) = ((MR_Box) (Name_32));
        MR_hl_field(0, PragmaVar_21, 2) = ((MR_Box) (Mode_35));
        MR_hl_field(0, PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_34));
      }
      {
        HeadVar__4_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_55, 0) = ((MR_Box) (PragmaVar_21));
        MR_hl_field(1, HeadVar__4_55, 1) = NULL;
      }
      AddrPragmaVars_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_55, (MR_Integer) 1)));
      *AddrOfHeadVar__4_54 = HeadVar__4_55;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PragmaVars0_20;
      next_value_of_AddrOfHeadVar__4_54 = AddrPragmaVars_53;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_54 = next_value_of_AddrOfHeadVar__4_54;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemModeDecl0_9,
  MR_Word * ItemModeDecl_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 0))));
  MR_Word PredOrFunc_14 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 1))));
  MR_Word Modes0_15 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 2))));
  MR_Word MaybeWithInst0_16 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 3))));
  MR_Word MaybeDetism_17 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 4))));
  MR_Word InstVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 5))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 6))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_9, (MR_Integer) 7))));
  MR_Integer Arity_21;
  MR_Word ErrorContext_22;
  MR_Word Modes_23;
  MR_Word MaybeWithInst_26;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_15, &Arity_21);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (Arity_21));
  }
  {
    ErrorContext_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, ErrorContext_22, 1) = ((MR_Box) (Context_19));
    MR_hl_field(3, ErrorContext_22, 2) = ((MR_Box) (PredOrFunc_14));
    MR_hl_field(3, ErrorContext_22, 3) = ((MR_Box) (Var_31));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_22, Modes0_15, &Modes_23, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_33_33);
  if ((MaybeWithInst0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithInst_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_32_32;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_33_33;
  }
  else
  {
    MR_Word WithInst0_24 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_16, (MR_Integer) 0))));
    MR_Word WithInst_25;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_22, WithInst0_24, &WithInst_25, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_30);
    {
      MaybeWithInst_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeWithInst_26, 0) = ((MR_Box) (WithInst_25));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemModeDecl_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredOrFunc_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Modes_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeWithInst_26));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeDetism_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemPredDecl0_9,
  MR_Word * ItemPredDecl_10,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 0))));
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes0_15 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 2))));
  MR_Word MaybeWithType0_16 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 3))));
  MR_Word MaybeWithInst0_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 4))));
  MR_Word MaybeDetism_18 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 5))));
  MR_Word Origin_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 6))));
  MR_Word TypeVarSet_20 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 7))));
  MR_Word InstVarSet_21 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 8))));
  MR_Word ExistQVars_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 9))));
  MR_Word Purity_23 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 10))) & (MR_Integer) 3);
  MR_Word Constraints0_24 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 11))));
  MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 12))));
  MR_Word SeqNum_26 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 13))));
  MR_Word PredFormArity_27;
  MR_Word PFSymNameArity_28;
  MR_Integer PredFormArityInt_29;
  MR_Word ErrorContext_30;
  MR_Word TypesAndMaybeModes_31;
  MR_Word ConstraintErrorContext_32;
  MR_Word Constraints_33;
  MR_Word MaybeWithType_36;
  MR_Word MaybeWithInst_39;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word STATE_VARIABLE_Specs_46_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Word STATE_VARIABLE_Info_49_49;
  MR_Word STATE_VARIABLE_Specs_50_50;
  MR_Word UnivCs0_55;
  MR_Word ExistCs0_56;
  MR_Word UnivCs_57;
  MR_Word ExistCs_58;
  MR_Word STATE_VARIABLE_Info_23_59;
  MR_Word STATE_VARIABLE_Specs_24_60;

  PredFormArity_27 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes0_15);
  {
    PFSymNameArity_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(0, PFSymNameArity_28, 1) = ((MR_Box) (SymName_13));
    MR_hl_field(0, PFSymNameArity_28, 2) = ((MR_Box) (PredFormArity_27));
  }
  PredFormArityInt_29 = (MR_Integer) (PredFormArity_27);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (PredFormArityInt_29));
  }
  {
    ErrorContext_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_30, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, ErrorContext_30, 1) = ((MR_Box) (Context_25));
    MR_hl_field(3, ErrorContext_30, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(3, ErrorContext_30, 3) = ((MR_Box) (Var_44));
  }
  switch (MR_tag((MR_Word) TypesAndMaybeModes0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TypesAndMaybeModes_31 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_40;
        STATE_VARIABLE_Specs_46_46 = STATE_VARIABLE_Specs_0_42;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types0_51 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_15, (MR_Integer) 0))));
        MR_Word Types_52;

        parse_tree__module_qual__qualify_items__qualify_types_8_p_0(InInt_8, ErrorContext_30, Types0_51, &Types_52, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_46_46);
        {
          TypesAndMaybeModes_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypesAndMaybeModes_31, 0) = ((MR_Box) (Types_52));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes0_53 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_15, (MR_Integer) 0))));
        MR_Word TypesAndModes_54;

        parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_8, ErrorContext_30, TypesAndModes0_53, &TypesAndModes_54, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_46_46);
        {
          TypesAndMaybeModes_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TypesAndMaybeModes_31, 0) = ((MR_Box) (TypesAndModes_54));
        }
      }
      break;
  }
  {
    ConstraintErrorContext_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConstraintErrorContext_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ConstraintErrorContext_32, 1) = ((MR_Box) (Context_25));
    MR_hl_field(3, ConstraintErrorContext_32, 2) = ((MR_Box) (PFSymNameArity_28));
  }
  UnivCs0_55 = ((MR_Word) ((MR_hl_field(0, Constraints0_24, (MR_Integer) 0))));
  ExistCs0_56 = ((MR_Word) ((MR_hl_field(0, Constraints0_24, (MR_Integer) 1))));
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_32, UnivCs0_55, &UnivCs_57, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_23_59, STATE_VARIABLE_Specs_46_46, &STATE_VARIABLE_Specs_24_60);
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_32, ExistCs0_56, &ExistCs_58, STATE_VARIABLE_Info_23_59, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_24_60, &STATE_VARIABLE_Specs_48_48);
  {
    Constraints_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraints_33, 0) = ((MR_Box) (UnivCs_57));
    MR_hl_field(0, Constraints_33, 1) = ((MR_Box) (ExistCs_58));
  }
  if ((MaybeWithType0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithType_36 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_47_47;
    STATE_VARIABLE_Specs_50_50 = STATE_VARIABLE_Specs_48_48;
  }
  else
  {
    MR_Word WithType0_34 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_16, (MR_Integer) 0))));
    MR_Word WithType_35;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_30, WithType0_34, &WithType_35, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_50_50);
    {
      MaybeWithType_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeWithType_36, 0) = ((MR_Box) (WithType_35));
    }
  }
  if ((MaybeWithInst0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithInst_39 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_49_49;
    *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_50_50;
  }
  else
  {
    MR_Word WithInst0_37 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_17, (MR_Integer) 0))));
    MR_Word WithInst_38;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_30, WithInst0_37, &WithInst_38, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_41, STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Specs_43);
    {
      MaybeWithInst_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeWithInst_39, 0) = ((MR_Box) (WithInst_38));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    *ItemPredDecl_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypesAndMaybeModes_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeWithType_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeWithInst_39));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeDetism_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Origin_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeVarSet_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstVarSet_21));
    MR_hl_field(0, base, 9) = ((MR_Box) (ExistQVars_22));
    MR_hl_field(0, base, 10) = (MR_Box) ((MR_Unsigned) (Purity_23));
    MR_hl_field(0, base, 11) = ((MR_Box) (Constraints_33));
    MR_hl_field(0, base, 12) = ((MR_Box) (Context_25));
    MR_hl_field(0, base, 13) = ((MR_Box) (SeqNum_26));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_instance_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemInstance0_9,
  MR_Word * ItemInstance_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_Word Name0_13 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 0))));
  MR_Word Types0_14 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 1))));
  MR_Word OriginalTypes0_15 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 2))));
  MR_Word Constraints0_16 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 3))));
  MR_Word Body_17 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 4))));
  MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 5))));
  MR_Word ModName_19 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 6))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 7))));
  MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 8))));
  MR_Integer Arity_22;
  MR_Word ErrorContext_23;
  MR_Word ConstraintErrorContext_24;
  MR_Word Constraints_25;
  MR_Word Id0_26;
  MR_Word Name_27;
  MR_Word Types_28;
  MR_Word OriginalTypes_29;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word STATE_VARIABLE_Specs_39_39;
  MR_Word STATE_VARIABLE_Info_40_40;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word STATE_VARIABLE_Info_42_42;
  MR_Word ClassIdSet_44;
  MR_Word Var_30;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_14, &Arity_22);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (Name0_13));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (Arity_22));
  }
  {
    ErrorContext_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, ErrorContext_23, 1) = ((MR_Box) (Context_20));
    MR_hl_field(3, ErrorContext_23, 2) = ((MR_Box) (Var_35));
  }
  switch (InInt_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_0_31;
      break;
    case (MR_Integer) 1:
      parse_tree__module_qual__mq_info__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_37_37);
      break;
  }
  {
    ConstraintErrorContext_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ConstraintErrorContext_24, 0) = ((MR_Box) (Context_20));
    MR_hl_field(2, ConstraintErrorContext_24, 1) = ((MR_Box) (Name0_13));
    MR_hl_field(2, ConstraintErrorContext_24, 2) = ((MR_Box) (OriginalTypes0_15));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_24, Constraints0_16, &Constraints_25, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Specs_0_33, &STATE_VARIABLE_Specs_39_39);
  {
    Id0_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id0_26, 0) = ((MR_Box) (Name0_13));
    MR_hl_field(0, Id0_26, 1) = ((MR_Box) (Arity_22));
  }
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_38_38, &ClassIdSet_44);
  parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_23, ClassIdSet_44, (MR_Integer) 3, Id0_26, &Name_27, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Specs_39_39, &STATE_VARIABLE_Specs_41_41);
  parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_23, Types0_14, &Types_28, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_34);
  parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_23, OriginalTypes0_15, &OriginalTypes_29, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_32, *STATE_VARIABLE_Specs_34, &Var_30);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ItemInstance_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (OriginalTypes_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (Body_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (ModName_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_21));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstanceMethod_6;

  parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstanceMethod_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_InstanceMethod_6));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemInstance0_9,
  MR_Word * ItemInstance_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  MR_Word Name0_13 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 0))));
  MR_Word Types0_14 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 1))));
  MR_Word OriginalTypes0_15 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 2))));
  MR_Word Constraints0_16 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 3))));
  MR_Word Body0_17 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 4))));
  MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 5))));
  MR_Word ModName_19 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 6))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 7))));
  MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_9, (MR_Integer) 8))));
  MR_Integer Arity_22;
  MR_Word ErrorContext_23;
  MR_Word ConstraintErrorContext_24;
  MR_Word Constraints_25;
  MR_Word Id0_26;
  MR_Word Name_27;
  MR_Word Types_28;
  MR_Word OriginalTypes_29;
  MR_Word Body_31;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Word STATE_VARIABLE_Specs_40_40;
  MR_Word STATE_VARIABLE_Info_41_41;
  MR_Word STATE_VARIABLE_Specs_42_42;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word ClassIdSet_45;
  MR_Word Var_30;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_14, &Arity_22);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (Name0_13));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (Arity_22));
  }
  {
    ErrorContext_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, ErrorContext_23, 1) = ((MR_Box) (Context_20));
    MR_hl_field(3, ErrorContext_23, 2) = ((MR_Box) (Var_36));
  }
  switch (InInt_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_0_32;
      break;
    case (MR_Integer) 1:
      parse_tree__module_qual__mq_info__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_38_38);
      break;
  }
  {
    ConstraintErrorContext_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ConstraintErrorContext_24, 0) = ((MR_Box) (Context_20));
    MR_hl_field(2, ConstraintErrorContext_24, 1) = ((MR_Box) (Name0_13));
    MR_hl_field(2, ConstraintErrorContext_24, 2) = ((MR_Box) (OriginalTypes0_15));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_24, Constraints0_16, &Constraints_25, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_40_40);
  {
    Id0_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id0_26, 0) = ((MR_Box) (Name0_13));
    MR_hl_field(0, Id0_26, 1) = ((MR_Box) (Arity_22));
  }
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_39_39, &ClassIdSet_45);
  parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_23, ClassIdSet_45, (MR_Integer) 3, Id0_26, &Name_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_40_40, &STATE_VARIABLE_Specs_42_42);
  parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_23, Types0_14, &Types_28, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_35);
  parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_23, OriginalTypes0_15, &OriginalTypes_29, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_33, *STATE_VARIABLE_Specs_35, &Var_30);
  if ((Body0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    Body_31 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Methods0_47 = ((MR_Word) ((MR_hl_field(1, Body0_17, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Name_27)) == (MR_Integer) 1))
    {
      MR_Word DefaultModuleName_48;
      MR_Word Methods_49;
      MR_Word Var_51;

      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Name_27, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[2]), &DefaultModuleName_48);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[3]));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0_1));
        MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_51, 3) = ((MR_Box) (DefaultModuleName_48));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Var_51, Methods0_47, &Methods_49);
      {
        Body_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Body_31, 0) = ((MR_Box) (Methods_49));
      }
    }
    else
      Body_31 = Body0_17;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ItemInstance_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (OriginalTypes_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (Body_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (ModName_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_21));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_typeclass_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeClass0_9,
  MR_Word * ItemTypeClass_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word Name_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 0))));
  MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 1))));
  MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 2))));
  MR_Word FunDeps_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 3))));
  MR_Word Interface0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 4))));
  MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 5))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 6))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 7))));
  MR_Integer Arity_21;
  MR_Word ClassId_22;
  MR_Word ConstraintErrorContext_23;
  MR_Word Constraints_24;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Vars_14, &Arity_21);
  {
    ClassId_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_22, 0) = ((MR_Box) (Name_13));
    MR_hl_field(0, ClassId_22, 1) = ((MR_Box) (Arity_21));
  }
  {
    ConstraintErrorContext_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConstraintErrorContext_23, 0) = ((MR_Box) (Context_19));
    MR_hl_field(0, ConstraintErrorContext_23, 1) = ((MR_Box) (ClassId_22));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_23, Constraints0_15, &Constraints_24, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeClass_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Interface0_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeClass0_9,
  MR_Word * ItemTypeClass_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word Name_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 0))));
  MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 1))));
  MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 2))));
  MR_Word FunDeps_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 3))));
  MR_Word Interface0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 4))));
  MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 5))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 6))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_9, (MR_Integer) 7))));
  MR_Integer Arity_21;
  MR_Word ClassId_22;
  MR_Word ConstraintErrorContext_23;
  MR_Word Constraints_24;
  MR_Word Interface_25;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Vars_14, &Arity_21);
  {
    ClassId_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_22, 0) = ((MR_Box) (Name_13));
    MR_hl_field(0, ClassId_22, 1) = ((MR_Box) (Arity_21));
  }
  {
    ConstraintErrorContext_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConstraintErrorContext_23, 0) = ((MR_Box) (Context_19));
    MR_hl_field(0, ConstraintErrorContext_23, 1) = ((MR_Box) (ClassId_22));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_23, Constraints0_15, &Constraints_24, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_34_34);
  if ((Interface0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Interface_25 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_33_33;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_34_34;
  }
  else
  {
    MR_Word Methods0_26 = ((MR_Word) ((MR_hl_field(1, Interface0_17, (MR_Integer) 0))));
    MR_Word ErrorContext_27;
    MR_Word Methods_28;

    {
      ErrorContext_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_27, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, ErrorContext_27, 1) = ((MR_Box) (Context_19));
      MR_hl_field(3, ErrorContext_27, 2) = ((MR_Box) (ClassId_22));
    }
    parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(InInt_8, ErrorContext_27, Methods0_26, &Methods_28, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_32);
    {
      Interface_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Interface_25, 0) = ((MR_Box) (Methods_28));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeClass_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Interface_25));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Decl0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Decls0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Decl_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrDecls_86;

    if (((MR_tag((MR_Word) Decl0_19)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo0_54 = (MR_Word) (MR_body((MR_Word) (Decl0_19), (MR_Integer) 1));
      MR_Word Modes0_55 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 2))));
      MR_Word Varset_56 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 5))));
      MR_Word Modes_57;
      MR_Word ModeInfo_58;
      MR_Word STATE_VARIABLE_Info_56_66;
      MR_Word STATE_VARIABLE_Specs_57_67;
      MR_Word Name_70 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 1))));
      MR_Word PredOrFunc_71 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 0))));
      MR_Word MaybeWithInst0_72 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 3))));
      MR_Word MaybeDetism_73 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 4))));
      MR_Word Context_74 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 6))));
      MR_Word MaybeWithInst_75;

      parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_55, &Modes_57, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_56_66, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_57_67);
      if ((MaybeWithInst0_72 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeWithInst_75 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_56_66;
        STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_57_67;
      }
      else
      {
        MR_Word WithInst0_68 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_72, (MR_Integer) 0))));
        MR_Word WithInst_69;

        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, WithInst0_68, &WithInst_69, STATE_VARIABLE_Info_56_66, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_57_67, &STATE_VARIABLE_Specs_30_30);
        {
          MaybeWithInst_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeWithInst_75, 0) = ((MR_Box) (WithInst_69));
        }
      }
      {
        ModeInfo_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeInfo_58, 0) = ((MR_Box) (PredOrFunc_71));
        MR_hl_field(0, ModeInfo_58, 1) = ((MR_Box) (Name_70));
        MR_hl_field(0, ModeInfo_58, 2) = ((MR_Box) (Modes_57));
        MR_hl_field(0, ModeInfo_58, 3) = ((MR_Box) (MaybeWithInst_75));
        MR_hl_field(0, ModeInfo_58, 4) = ((MR_Box) (MaybeDetism_73));
        MR_hl_field(0, ModeInfo_58, 5) = ((MR_Box) (Varset_56));
        MR_hl_field(0, ModeInfo_58, 6) = ((MR_Box) (Context_74));
      }
      Decl_21 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_58)));
    }
    else
    {
      MR_Word PredOrFuncInfo0_31 = (MR_Word) ((MR_Word) (Decl0_19));
      MR_Word Name_32 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 0))));
      MR_Word PredOrFunc_33 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word TypesAndMaybeModes0_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 2))));
      MR_Word MaybeWithType0_35 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 3))));
      MR_Word MaybeWithInst0_36 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 4))));
      MR_Word MaybeDetism_37 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 5))));
      MR_Word TypeVarset_38 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 6))));
      MR_Word InstVarset_39 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 7))));
      MR_Word ExistQVars_40 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 8))));
      MR_Word Purity_41 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints0_42 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 10))));
      MR_Word Context_43 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 11))));
      MR_Word TypesAndMaybeModes_44;
      MR_Word ConstraintErrorContext_45;
      MR_Word Constraints_46;
      MR_Word MaybeWithType_49;
      MR_Word MaybeWithInst_52;
      MR_Word PredOrFuncInfo_53;
      MR_Word STATE_VARIABLE_Info_47_59;
      MR_Word STATE_VARIABLE_Specs_48_60;
      MR_String Var_61;
      MR_Word STATE_VARIABLE_Info_50_62;
      MR_Word STATE_VARIABLE_Specs_51_63;
      MR_Word STATE_VARIABLE_Info_52_64;
      MR_Word STATE_VARIABLE_Specs_53_65;
      MR_Word UnivCs0_80;
      MR_Word ExistCs0_81;
      MR_Word UnivCs_82;
      MR_Word ExistCs_83;
      MR_Word STATE_VARIABLE_Info_23_84;
      MR_Word STATE_VARIABLE_Specs_24_85;

      switch (MR_tag((MR_Word) TypesAndMaybeModes0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TypesAndMaybeModes_44 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_47_59 = STATE_VARIABLE_Info_0_5;
            STATE_VARIABLE_Specs_48_60 = STATE_VARIABLE_Specs_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Types0_76 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_34, (MR_Integer) 0))));
            MR_Word Types_77;

            parse_tree__module_qual__qualify_items__qualify_types_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_76, &Types_77, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_47_59, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_48_60);
            {
              TypesAndMaybeModes_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TypesAndMaybeModes_44, 0) = ((MR_Box) (Types_77));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypesAndModes0_78 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_34, (MR_Integer) 0))));
            MR_Word TypesAndModes_79;

            parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_78, &TypesAndModes_79, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_47_59, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_48_60);
            {
              TypesAndMaybeModes_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, TypesAndMaybeModes_44, 0) = ((MR_Box) (TypesAndModes_79));
            }
          }
          break;
      }
      Var_61 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_32);
      {
        ConstraintErrorContext_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ConstraintErrorContext_45, 0) = ((MR_Box) (Context_43));
        MR_hl_field(1, ConstraintErrorContext_45, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
        MR_hl_field(1, ConstraintErrorContext_45, 2) = ((MR_Box) (Var_61));
      }
      UnivCs0_80 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 0))));
      ExistCs0_81 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, UnivCs0_80, &UnivCs_82, STATE_VARIABLE_Info_47_59, &STATE_VARIABLE_Info_23_84, STATE_VARIABLE_Specs_48_60, &STATE_VARIABLE_Specs_24_85);
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, ExistCs0_81, &ExistCs_83, STATE_VARIABLE_Info_23_84, &STATE_VARIABLE_Info_50_62, STATE_VARIABLE_Specs_24_85, &STATE_VARIABLE_Specs_51_63);
      {
        Constraints_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraints_46, 0) = ((MR_Box) (UnivCs_82));
        MR_hl_field(0, Constraints_46, 1) = ((MR_Box) (ExistCs_83));
      }
      if ((MaybeWithType0_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeWithType_49 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_52_64 = STATE_VARIABLE_Info_50_62;
        STATE_VARIABLE_Specs_53_65 = STATE_VARIABLE_Specs_51_63;
      }
      else
      {
        MR_Word WithType0_47 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_35, (MR_Integer) 0))));
        MR_Word WithType_48;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, WithType0_47, &WithType_48, STATE_VARIABLE_Info_50_62, &STATE_VARIABLE_Info_52_64, STATE_VARIABLE_Specs_51_63, &STATE_VARIABLE_Specs_53_65);
        {
          MaybeWithType_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeWithType_49, 0) = ((MR_Box) (WithType_48));
        }
      }
      if ((MaybeWithInst0_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeWithInst_52 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_52_64;
        STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_53_65;
      }
      else
      {
        MR_Word WithInst0_50 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_36, (MR_Integer) 0))));
        MR_Word WithInst_51;

        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, WithInst0_50, &WithInst_51, STATE_VARIABLE_Info_52_64, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_53_65, &STATE_VARIABLE_Specs_30_30);
        {
          MaybeWithInst_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeWithInst_52, 0) = ((MR_Box) (WithInst_51));
        }
      }
      {
        PredOrFuncInfo_53 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredOrFuncInfo_53, 0) = ((MR_Box) (Name_32));
        MR_hl_field(0, PredOrFuncInfo_53, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
        MR_hl_field(0, PredOrFuncInfo_53, 2) = ((MR_Box) (TypesAndMaybeModes_44));
        MR_hl_field(0, PredOrFuncInfo_53, 3) = ((MR_Box) (MaybeWithType_49));
        MR_hl_field(0, PredOrFuncInfo_53, 4) = ((MR_Box) (MaybeWithInst_52));
        MR_hl_field(0, PredOrFuncInfo_53, 5) = ((MR_Box) (MaybeDetism_37));
        MR_hl_field(0, PredOrFuncInfo_53, 6) = ((MR_Box) (TypeVarset_38));
        MR_hl_field(0, PredOrFuncInfo_53, 7) = ((MR_Box) (InstVarset_39));
        MR_hl_field(0, PredOrFuncInfo_53, 8) = ((MR_Box) (ExistQVars_40));
        MR_hl_field(0, PredOrFuncInfo_53, 9) = (MR_Box) ((MR_Unsigned) (Purity_41));
        MR_hl_field(0, PredOrFuncInfo_53, 10) = ((MR_Box) (Constraints_46));
        MR_hl_field(0, PredOrFuncInfo_53, 11) = ((MR_Box) (Context_43));
      }
      Decl_21 = (MR_Word) ((MR_Word) (PredOrFuncInfo_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Decl_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrDecls_86 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Decls0_20, AddrDecls_86, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_87,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_87 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Decl0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Decls0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Decl_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrDecls_86;
      MR_Word HeadVar__4_88;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_87;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) Decl0_19)) == (MR_Integer) 1))
      {
        MR_Word ModeInfo0_54 = (MR_Word) (MR_body((MR_Word) (Decl0_19), (MR_Integer) 1));
        MR_Word Modes0_55 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 2))));
        MR_Word Varset_56 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 5))));
        MR_Word Modes_57;
        MR_Word ModeInfo_58;
        MR_Word STATE_VARIABLE_Info_56_66;
        MR_Word STATE_VARIABLE_Specs_57_67;
        MR_Word Name_70 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 1))));
        MR_Word PredOrFunc_71 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 0))));
        MR_Word MaybeWithInst0_72 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 3))));
        MR_Word MaybeDetism_73 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 4))));
        MR_Word Context_74 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_54, (MR_Integer) 6))));
        MR_Word MaybeWithInst_75;

        parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_55, &Modes_57, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_56_66, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_57_67);
        if ((MaybeWithInst0_72 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeWithInst_75 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_56_66;
          STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_57_67;
        }
        else
        {
          MR_Word WithInst0_68 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_72, (MR_Integer) 0))));
          MR_Word WithInst_69;

          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, WithInst0_68, &WithInst_69, STATE_VARIABLE_Info_56_66, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_57_67, &STATE_VARIABLE_Specs_30_30);
          {
            MaybeWithInst_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithInst_75, 0) = ((MR_Box) (WithInst_69));
          }
        }
        {
          ModeInfo_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModeInfo_58, 0) = ((MR_Box) (PredOrFunc_71));
          MR_hl_field(0, ModeInfo_58, 1) = ((MR_Box) (Name_70));
          MR_hl_field(0, ModeInfo_58, 2) = ((MR_Box) (Modes_57));
          MR_hl_field(0, ModeInfo_58, 3) = ((MR_Box) (MaybeWithInst_75));
          MR_hl_field(0, ModeInfo_58, 4) = ((MR_Box) (MaybeDetism_73));
          MR_hl_field(0, ModeInfo_58, 5) = ((MR_Box) (Varset_56));
          MR_hl_field(0, ModeInfo_58, 6) = ((MR_Box) (Context_74));
        }
        Decl_21 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_58)));
      }
      else
      {
        MR_Word PredOrFuncInfo0_31 = (MR_Word) ((MR_Word) (Decl0_19));
        MR_Word Name_32 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 0))));
        MR_Word PredOrFunc_33 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word TypesAndMaybeModes0_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 2))));
        MR_Word MaybeWithType0_35 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 3))));
        MR_Word MaybeWithInst0_36 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 4))));
        MR_Word MaybeDetism_37 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 5))));
        MR_Word TypeVarset_38 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 6))));
        MR_Word InstVarset_39 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 7))));
        MR_Word ExistQVars_40 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 8))));
        MR_Word Purity_41 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 9))) & (MR_Integer) 3);
        MR_Word Constraints0_42 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 10))));
        MR_Word Context_43 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 11))));
        MR_Word TypesAndMaybeModes_44;
        MR_Word ConstraintErrorContext_45;
        MR_Word Constraints_46;
        MR_Word MaybeWithType_49;
        MR_Word MaybeWithInst_52;
        MR_Word PredOrFuncInfo_53;
        MR_Word STATE_VARIABLE_Info_47_59;
        MR_Word STATE_VARIABLE_Specs_48_60;
        MR_String Var_61;
        MR_Word STATE_VARIABLE_Info_50_62;
        MR_Word STATE_VARIABLE_Specs_51_63;
        MR_Word STATE_VARIABLE_Info_52_64;
        MR_Word STATE_VARIABLE_Specs_53_65;
        MR_Word UnivCs0_80;
        MR_Word ExistCs0_81;
        MR_Word UnivCs_82;
        MR_Word ExistCs_83;
        MR_Word STATE_VARIABLE_Info_23_84;
        MR_Word STATE_VARIABLE_Specs_24_85;

        switch (MR_tag((MR_Word) TypesAndMaybeModes0_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TypesAndMaybeModes_44 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_47_59 = STATE_VARIABLE_Info_0_5;
              STATE_VARIABLE_Specs_48_60 = STATE_VARIABLE_Specs_0_7;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Types0_76 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_34, (MR_Integer) 0))));
              MR_Word Types_77;

              parse_tree__module_qual__qualify_items__qualify_types_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_76, &Types_77, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_47_59, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_48_60);
              {
                TypesAndMaybeModes_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypesAndMaybeModes_44, 0) = ((MR_Box) (Types_77));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypesAndModes0_78 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_34, (MR_Integer) 0))));
              MR_Word TypesAndModes_79;

              parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_78, &TypesAndModes_79, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_47_59, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_48_60);
              {
                TypesAndMaybeModes_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TypesAndMaybeModes_44, 0) = ((MR_Box) (TypesAndModes_79));
              }
            }
            break;
        }
        Var_61 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_32);
        {
          ConstraintErrorContext_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConstraintErrorContext_45, 0) = ((MR_Box) (Context_43));
          MR_hl_field(1, ConstraintErrorContext_45, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
          MR_hl_field(1, ConstraintErrorContext_45, 2) = ((MR_Box) (Var_61));
        }
        UnivCs0_80 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 0))));
        ExistCs0_81 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 1))));
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, UnivCs0_80, &UnivCs_82, STATE_VARIABLE_Info_47_59, &STATE_VARIABLE_Info_23_84, STATE_VARIABLE_Specs_48_60, &STATE_VARIABLE_Specs_24_85);
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, ExistCs0_81, &ExistCs_83, STATE_VARIABLE_Info_23_84, &STATE_VARIABLE_Info_50_62, STATE_VARIABLE_Specs_24_85, &STATE_VARIABLE_Specs_51_63);
        {
          Constraints_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Constraints_46, 0) = ((MR_Box) (UnivCs_82));
          MR_hl_field(0, Constraints_46, 1) = ((MR_Box) (ExistCs_83));
        }
        if ((MaybeWithType0_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeWithType_49 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_52_64 = STATE_VARIABLE_Info_50_62;
          STATE_VARIABLE_Specs_53_65 = STATE_VARIABLE_Specs_51_63;
        }
        else
        {
          MR_Word WithType0_47 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_35, (MR_Integer) 0))));
          MR_Word WithType_48;

          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, WithType0_47, &WithType_48, STATE_VARIABLE_Info_50_62, &STATE_VARIABLE_Info_52_64, STATE_VARIABLE_Specs_51_63, &STATE_VARIABLE_Specs_53_65);
          {
            MaybeWithType_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithType_49, 0) = ((MR_Box) (WithType_48));
          }
        }
        if ((MaybeWithInst0_36 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeWithInst_52 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_52_64;
          STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_53_65;
        }
        else
        {
          MR_Word WithInst0_50 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_36, (MR_Integer) 0))));
          MR_Word WithInst_51;

          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, WithInst0_50, &WithInst_51, STATE_VARIABLE_Info_52_64, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_53_65, &STATE_VARIABLE_Specs_30_30);
          {
            MaybeWithInst_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithInst_52, 0) = ((MR_Box) (WithInst_51));
          }
        }
        {
          PredOrFuncInfo_53 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredOrFuncInfo_53, 0) = ((MR_Box) (Name_32));
          MR_hl_field(0, PredOrFuncInfo_53, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
          MR_hl_field(0, PredOrFuncInfo_53, 2) = ((MR_Box) (TypesAndMaybeModes_44));
          MR_hl_field(0, PredOrFuncInfo_53, 3) = ((MR_Box) (MaybeWithType_49));
          MR_hl_field(0, PredOrFuncInfo_53, 4) = ((MR_Box) (MaybeWithInst_52));
          MR_hl_field(0, PredOrFuncInfo_53, 5) = ((MR_Box) (MaybeDetism_37));
          MR_hl_field(0, PredOrFuncInfo_53, 6) = ((MR_Box) (TypeVarset_38));
          MR_hl_field(0, PredOrFuncInfo_53, 7) = ((MR_Box) (InstVarset_39));
          MR_hl_field(0, PredOrFuncInfo_53, 8) = ((MR_Box) (ExistQVars_40));
          MR_hl_field(0, PredOrFuncInfo_53, 9) = (MR_Box) ((MR_Unsigned) (Purity_41));
          MR_hl_field(0, PredOrFuncInfo_53, 10) = ((MR_Box) (Constraints_46));
          MR_hl_field(0, PredOrFuncInfo_53, 11) = ((MR_Box) (Context_43));
        }
        Decl_21 = (MR_Word) ((MR_Word) (PredOrFuncInfo_53));
      }
      {
        HeadVar__4_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_88, 0) = ((MR_Box) (Decl_21));
        MR_hl_field(1, HeadVar__4_88, 1) = NULL;
      }
      AddrDecls_86 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_88, (MR_Integer) 1)));
      *AddrOfHeadVar__4_87 = HeadVar__4_88;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Decls0_20;
      next_value_of_AddrOfHeadVar__4_87 = AddrDecls_86;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_87 = next_value_of_AddrOfHeadVar__4_87;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word TypeAndMode0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypeAndMode_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Type0_31 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_19, (MR_Integer) 0))));
    MR_Word Mode0_32 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_19, (MR_Integer) 1))));
    MR_Word Type_33;
    MR_Word Mode_34;
    MR_Word STATE_VARIABLE_Info_23_35;
    MR_Word STATE_VARIABLE_Specs_24_36;
    MR_Word * AddrTypesAndModes_54;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_31, &Type_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_24_36);
    if (((MR_tag((MR_Word) Mode0_32)) == (MR_Integer) 0))
    {
      MR_Word InstA0_37 = ((MR_Word) ((MR_hl_field(0, Mode0_32, (MR_Integer) 0))));
      MR_Word InstB0_38 = ((MR_Word) ((MR_hl_field(0, Mode0_32, (MR_Integer) 1))));
      MR_Word InstA_39;
      MR_Word InstB_40;
      MR_Word STATE_VARIABLE_Info_29_47;
      MR_Word STATE_VARIABLE_Specs_30_48;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_37, &InstA_39, STATE_VARIABLE_Info_23_35, &STATE_VARIABLE_Info_29_47, STATE_VARIABLE_Specs_24_36, &STATE_VARIABLE_Specs_30_48);
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_38, &InstB_40, STATE_VARIABLE_Info_29_47, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_30_48, &STATE_VARIABLE_Specs_30_30);
      {
        Mode_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_34, 0) = ((MR_Box) (InstA_39));
        MR_hl_field(0, Mode_34, 1) = ((MR_Box) (InstB_40));
      }
    }
    else
    {
      MR_Word SymName0_41 = ((MR_Word) ((MR_hl_field(1, Mode0_32, (MR_Integer) 0))));
      MR_Word Insts0_42 = ((MR_Word) ((MR_hl_field(1, Mode0_32, (MR_Integer) 1))));
      MR_Word Insts_43;
      MR_Integer Arity_44;
      MR_Word Modes_45;
      MR_Word SymName_46;
      MR_Word STATE_VARIABLE_Info_33_49;
      MR_Word STATE_VARIABLE_Specs_34_50;
      MR_Word Var_52;

      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_42, &Insts_43, STATE_VARIABLE_Info_23_35, &STATE_VARIABLE_Info_33_49, STATE_VARIABLE_Specs_24_36, &STATE_VARIABLE_Specs_34_50);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_43, &Arity_44);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_49, &Modes_45);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (SymName0_41));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (Arity_44));
      }
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, HeadVar__2_2, Modes_45, (MR_Integer) 2, Var_52, &SymName_46, STATE_VARIABLE_Info_33_49, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_50, &STATE_VARIABLE_Specs_30_30);
      {
        Mode_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_34, 0) = ((MR_Box) (SymName_46));
        MR_hl_field(1, Mode_34, 1) = ((MR_Box) (Insts_43));
      }
    }
    {
      TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeAndMode_21, 0) = ((MR_Box) (Type_33));
      MR_hl_field(0, TypeAndMode_21, 1) = ((MR_Box) (Mode_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAndMode_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypesAndModes_54 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_20, AddrTypesAndModes_54, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_55,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_55 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word TypeAndMode0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeAndMode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word Type0_31 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Mode0_32 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_19, (MR_Integer) 1))));
      MR_Word Type_33;
      MR_Word Mode_34;
      MR_Word STATE_VARIABLE_Info_23_35;
      MR_Word STATE_VARIABLE_Specs_24_36;
      MR_Word * AddrTypesAndModes_54;
      MR_Word HeadVar__4_56;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_55;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_31, &Type_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_24_36);
      if (((MR_tag((MR_Word) Mode0_32)) == (MR_Integer) 0))
      {
        MR_Word InstA0_37 = ((MR_Word) ((MR_hl_field(0, Mode0_32, (MR_Integer) 0))));
        MR_Word InstB0_38 = ((MR_Word) ((MR_hl_field(0, Mode0_32, (MR_Integer) 1))));
        MR_Word InstA_39;
        MR_Word InstB_40;
        MR_Word STATE_VARIABLE_Info_29_47;
        MR_Word STATE_VARIABLE_Specs_30_48;

        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_37, &InstA_39, STATE_VARIABLE_Info_23_35, &STATE_VARIABLE_Info_29_47, STATE_VARIABLE_Specs_24_36, &STATE_VARIABLE_Specs_30_48);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_38, &InstB_40, STATE_VARIABLE_Info_29_47, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_30_48, &STATE_VARIABLE_Specs_30_30);
        {
          Mode_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_34, 0) = ((MR_Box) (InstA_39));
          MR_hl_field(0, Mode_34, 1) = ((MR_Box) (InstB_40));
        }
      }
      else
      {
        MR_Word SymName0_41 = ((MR_Word) ((MR_hl_field(1, Mode0_32, (MR_Integer) 0))));
        MR_Word Insts0_42 = ((MR_Word) ((MR_hl_field(1, Mode0_32, (MR_Integer) 1))));
        MR_Word Insts_43;
        MR_Integer Arity_44;
        MR_Word Modes_45;
        MR_Word SymName_46;
        MR_Word STATE_VARIABLE_Info_33_49;
        MR_Word STATE_VARIABLE_Specs_34_50;
        MR_Word Var_52;

        parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_42, &Insts_43, STATE_VARIABLE_Info_23_35, &STATE_VARIABLE_Info_33_49, STATE_VARIABLE_Specs_24_36, &STATE_VARIABLE_Specs_34_50);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_43, &Arity_44);
        parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_49, &Modes_45);
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (SymName0_41));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) (Arity_44));
        }
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, HeadVar__2_2, Modes_45, (MR_Integer) 2, Var_52, &SymName_46, STATE_VARIABLE_Info_33_49, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_50, &STATE_VARIABLE_Specs_30_30);
        {
          Mode_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mode_34, 0) = ((MR_Box) (SymName_46));
          MR_hl_field(1, Mode_34, 1) = ((MR_Box) (Insts_43));
        }
      }
      {
        TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeAndMode_21, 0) = ((MR_Box) (Type_33));
        MR_hl_field(0, TypeAndMode_21, 1) = ((MR_Box) (Mode_34));
      }
      {
        HeadVar__4_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_56, 0) = ((MR_Box) (TypeAndMode_21));
        MR_hl_field(1, HeadVar__4_56, 1) = NULL;
      }
      AddrTypesAndModes_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_56, (MR_Integer) 1)));
      *AddrOfHeadVar__4_55 = HeadVar__4_56;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TypesAndModes0_20;
      next_value_of_AddrOfHeadVar__4_55 = AddrTypesAndModes_54;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_55 = next_value_of_AddrOfHeadVar__4_55;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrTypes_31;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypes_31 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_20, AddrTypes_31, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Type_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrTypes_31;
      MR_Word HeadVar__4_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_32;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_33, 0) = ((MR_Box) (Type_21));
        MR_hl_field(1, HeadVar__4_33, 1) = NULL;
      }
      AddrTypes_31 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_33, (MR_Integer) 1)));
      *AddrOfHeadVar__4_32 = HeadVar__4_33;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types0_20;
      next_value_of_AddrOfHeadVar__4_32 = AddrTypes_31;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_32 = next_value_of_AddrOfHeadVar__4_32;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_6_p_0(
  MR_Word CheckedDefn0_7,
  MR_Word * CheckedDefn_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word StdModeDefn0_11 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_7, (MR_Integer) 0))));
  MR_Word SrcDefns0_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_7, (MR_Integer) 1))));
  MR_Word Status_13 = ((MR_Unsigned) ((MR_hl_field(0, StdModeDefn0_11, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn0_14 = ((MR_Word) ((MR_hl_field(0, StdModeDefn0_11, (MR_Integer) 1))));
  MR_Word InInt_15;
  MR_Word MaybeAbstractDefn_16;
  MR_Word StdModeDefn_17;
  MR_Word MaybeIntDefn0_18;
  MR_Word MaybeImpDefn0_19;
  MR_Word MaybeIntDefn_21;
  MR_Word MaybeImpDefn_22;
  MR_Word SrcDefns_23;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Specs_30_30;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;
  MR_Word SymName_65;
  MR_Word Params_66;
  MR_Word MaybeAbstractModeDefn0_67;
  MR_Word InstVarSet_68;
  MR_Word Context_69;
  MR_Word SeqNum_70;
  MR_Integer Arity_71;
  MR_Word ModeCtor_72;
  MR_Word MaybeAbstractModeDefn_73;

  switch (Status_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InInt_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      InInt_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      InInt_15 = (MR_Integer) 1;
      break;
  }
  SymName_65 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 0))));
  Params_66 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 1))));
  MaybeAbstractModeDefn0_67 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 2))));
  InstVarSet_68 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 3))));
  Context_69 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 4))));
  SeqNum_70 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 5))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_66, &Arity_71);
  {
    ModeCtor_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtor_72, 0) = ((MR_Box) (SymName_65));
    MR_hl_field(0, ModeCtor_72, 1) = ((MR_Box) (Arity_71));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_defn_9_p_0(InInt_15, Context_69, ModeCtor_72, MaybeAbstractModeDefn0_67, &MaybeAbstractModeDefn_73, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_30_30);
  {
    MaybeAbstractDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeAbstractDefn_16, 0) = ((MR_Box) (SymName_65));
    MR_hl_field(0, MaybeAbstractDefn_16, 1) = ((MR_Box) (Params_66));
    MR_hl_field(0, MaybeAbstractDefn_16, 2) = ((MR_Box) (MaybeAbstractModeDefn_73));
    MR_hl_field(0, MaybeAbstractDefn_16, 3) = ((MR_Box) (InstVarSet_68));
    MR_hl_field(0, MaybeAbstractDefn_16, 4) = ((MR_Box) (Context_69));
    MR_hl_field(0, MaybeAbstractDefn_16, 5) = ((MR_Box) (SeqNum_70));
  }
  {
    StdModeDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdModeDefn_17, 0) = (MR_Box) ((MR_Unsigned) (Status_13));
    MR_hl_field(0, StdModeDefn_17, 1) = ((MR_Box) (MaybeAbstractDefn_16));
  }
  MaybeIntDefn0_18 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_12, (MR_Integer) 0))));
  MaybeImpDefn0_19 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_12, (MR_Integer) 1))));
  if ((MaybeIntDefn0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeIntDefn_21 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_29_29;
    STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_30_30;
  }
  else
  {
    MR_Word Defn0_77 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn0_18, (MR_Integer) 0))));
    MR_Word Defn_78;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__518__1__ho12_8_p_0((MR_Integer) 1, Defn0_77, &Defn_78, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_34_34);
    {
      MaybeIntDefn_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIntDefn_21, 0) = ((MR_Box) (Defn_78));
    }
  }
  if ((MaybeImpDefn0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeImpDefn_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_33_33;
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_34_34;
  }
  else
  {
    MR_Word Defn0_82 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn0_19, (MR_Integer) 0))));
    MR_Word Defn_83;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__518__1__ho12_8_p_0((MR_Integer) 0, Defn0_82, &Defn_83, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_27);
    {
      MaybeImpDefn_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeImpDefn_22, 0) = ((MR_Box) (Defn_83));
    }
  }
  {
    SrcDefns_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SrcDefns_23, 0) = ((MR_Box) (MaybeIntDefn_21));
    MR_hl_field(0, SrcDefns_23, 1) = ((MR_Box) (MaybeImpDefn_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CheckedDefn_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (StdModeDefn_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__518__1__ho12_8_p_0(
  MR_Word HeadVar__2_46,
  MR_Word HeadVar__3_47,
  MR_Word * HeadVar__4_48,
  MR_Word HeadVar__5_49,
  MR_Word * HeadVar__6_50,
  MR_Word HeadVar__7_51,
  MR_Word * HeadVar__8_52)
{
  MR_Word SymName_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 0))));
  MR_Word Params_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn0_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 2))));
  MR_Word InstVarSet_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 3))));
  MR_Word Context_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 4))));
  MR_Word SeqNum_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 5))));
  MR_Integer Arity_61;
  MR_Word ModeCtor_62;
  MR_Word MaybeAbstractModeDefn_63;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_56, &Arity_61);
  {
    ModeCtor_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtor_62, 0) = ((MR_Box) (SymName_55));
    MR_hl_field(0, ModeCtor_62, 1) = ((MR_Box) (Arity_61));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_defn_9_p_0(HeadVar__2_46, Context_59, ModeCtor_62, MaybeAbstractModeDefn0_57, &MaybeAbstractModeDefn_63, HeadVar__5_49, HeadVar__6_50, HeadVar__7_51, HeadVar__8_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_48 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_55));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_56));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeAbstractModeDefn_63));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstVarSet_58));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_59));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_60));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word ModeCtor_12,
  MR_Word MaybeAbstractModeDefn0_13,
  MR_Word * MaybeAbstractModeDefn_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  if ((MaybeAbstractModeDefn0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeAbstractModeDefn_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  }
  else
  {
    MR_Word ModeDefn0_17 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn0_13, (MR_Integer) 0))));
    MR_Word ErrorContext_18;
    MR_Word Mode0_19;
    MR_Word Mode_20;
    MR_Word ModeDefn_21;

    {
      ErrorContext_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ErrorContext_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(2, ErrorContext_18, 1) = ((MR_Box) (ModeCtor_12));
    }
    Mode0_19 = (MR_Word) (ModeDefn0_17);
    if (((MR_tag((MR_Word) Mode0_19)) == (MR_Integer) 0))
    {
      MR_Word InstA0_26 = ((MR_Word) ((MR_hl_field(0, Mode0_19, (MR_Integer) 0))));
      MR_Word InstB0_27 = ((MR_Word) ((MR_hl_field(0, Mode0_19, (MR_Integer) 1))));
      MR_Word InstA_28;
      MR_Word InstB_29;
      MR_Word STATE_VARIABLE_Info_29_36;
      MR_Word STATE_VARIABLE_Specs_30_37;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_18, InstA0_26, &InstA_28, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_29_36, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_30_37);
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_18, InstB0_27, &InstB_29, STATE_VARIABLE_Info_29_36, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_30_37, STATE_VARIABLE_Specs_25);
      {
        Mode_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_20, 0) = ((MR_Box) (InstA_28));
        MR_hl_field(0, Mode_20, 1) = ((MR_Box) (InstB_29));
      }
    }
    else
    {
      MR_Word SymName0_30 = ((MR_Word) ((MR_hl_field(1, Mode0_19, (MR_Integer) 0))));
      MR_Word Insts0_31 = ((MR_Word) ((MR_hl_field(1, Mode0_19, (MR_Integer) 1))));
      MR_Word Insts_32;
      MR_Integer Arity_33;
      MR_Word Modes_34;
      MR_Word SymName_35;
      MR_Word STATE_VARIABLE_Info_33_38;
      MR_Word STATE_VARIABLE_Specs_34_39;
      MR_Word Var_41;

      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_10, ErrorContext_18, Insts0_31, &Insts_32, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_33_38, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_34_39);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_32, &Arity_33);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_38, &Modes_34);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (SymName0_30));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (Arity_33));
      }
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_10, ErrorContext_18, Modes_34, (MR_Integer) 2, Var_41, &SymName_35, STATE_VARIABLE_Info_33_38, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_34_39, STATE_VARIABLE_Specs_25);
      {
        Mode_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_20, 0) = ((MR_Box) (SymName_35));
        MR_hl_field(1, Mode_20, 1) = ((MR_Box) (Insts_32));
      }
    }
    ModeDefn_21 = (MR_Word) (Mode_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractModeDefn_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModeDefn_21));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_6_p_0(
  MR_Word CheckedDefn0_7,
  MR_Word * CheckedDefn_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word StdInstDefn0_11 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_7, (MR_Integer) 0))));
  MR_Word SrcDefns0_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_7, (MR_Integer) 1))));
  MR_Word Status_13 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn0_11, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn0_14 = ((MR_Word) ((MR_hl_field(0, StdInstDefn0_11, (MR_Integer) 1))));
  MR_Word InInt_15;
  MR_Word MaybeAbstractDefn_16;
  MR_Word StdInstDefn_17;
  MR_Word MaybeIntDefn0_18;
  MR_Word MaybeImpDefn0_19;
  MR_Word MaybeIntDefn_21;
  MR_Word MaybeImpDefn_22;
  MR_Word SrcDefns_23;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Specs_30_30;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;
  MR_Word SymName_65;
  MR_Word Params_66;
  MR_Word MaybeForTypeCtor0_67;
  MR_Word MaybeAbstractInstDefn0_68;
  MR_Word InstVarSet_69;
  MR_Word Context_70;
  MR_Word SeqNum_71;
  MR_Integer Arity_72;
  MR_Word InstCtor_73;
  MR_Word ErrorContext_74;
  MR_Word MaybeAbstractInstDefn_75;
  MR_Word MaybeForTypeCtor_78;
  MR_Word STATE_VARIABLE_Info_33_79;
  MR_Word STATE_VARIABLE_Specs_34_80;

  switch (Status_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InInt_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      InInt_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      InInt_15 = (MR_Integer) 1;
      break;
  }
  SymName_65 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 0))));
  Params_66 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 1))));
  MaybeForTypeCtor0_67 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 2))));
  MaybeAbstractInstDefn0_68 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 3))));
  InstVarSet_69 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 4))));
  Context_70 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 5))));
  SeqNum_71 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_14, (MR_Integer) 6))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_66, &Arity_72);
  {
    InstCtor_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtor_73, 0) = ((MR_Box) (SymName_65));
    MR_hl_field(0, InstCtor_73, 1) = ((MR_Box) (Arity_72));
  }
  {
    ErrorContext_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ErrorContext_74, 0) = ((MR_Box) (Context_70));
    MR_hl_field(1, ErrorContext_74, 1) = ((MR_Box) (InstCtor_73));
  }
  parse_tree__module_qual__qualify_items__qualify_inst_defn_9_p_0(InInt_15, Context_70, InstCtor_73, MaybeAbstractInstDefn0_68, &MaybeAbstractInstDefn_75, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_33_79, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_34_80);
  if ((MaybeForTypeCtor0_67 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeForTypeCtor_78 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_33_79;
    STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_34_80;
  }
  else
  {
    MR_Word ForTypeCtor0_76 = ((MR_Word) ((MR_hl_field(1, MaybeForTypeCtor0_67, (MR_Integer) 0))));
    MR_Word ForTypeCtor_77;
    MR_Word SymName0_83 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_76, (MR_Integer) 0))));
    MR_Integer Arity_84 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_76, (MR_Integer) 1))));
    MR_Word SymName_89 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_76, (MR_Integer) 0))));
    MR_Integer Var_90 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_76, (MR_Integer) 1))));

    succeeded = (Var_90 == (MR_Integer) 0);
    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_89);
    if (succeeded)
    {
      ForTypeCtor_77 = ForTypeCtor0_76;
      STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_34_80;
      STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_33_79;
    }
    else
    {
      MR_Word TypeCtorId0_85;
      MR_Word Types_86;
      MR_Word SymName_87;

      {
        TypeCtorId0_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtorId0_85, 0) = ((MR_Box) (SymName0_83));
        MR_hl_field(0, TypeCtorId0_85, 1) = ((MR_Box) (Arity_84));
      }
      parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_33_79, &Types_86);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_15, ErrorContext_74, Types_86, (MR_Integer) 0, TypeCtorId0_85, &SymName_87, STATE_VARIABLE_Info_33_79, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_80, &STATE_VARIABLE_Specs_30_30);
      {
        ForTypeCtor_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForTypeCtor_77, 0) = ((MR_Box) (SymName_87));
        MR_hl_field(0, ForTypeCtor_77, 1) = ((MR_Box) (Arity_84));
      }
    }
    {
      MaybeForTypeCtor_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeForTypeCtor_78, 0) = ((MR_Box) (ForTypeCtor_77));
    }
  }
  {
    MaybeAbstractDefn_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeAbstractDefn_16, 0) = ((MR_Box) (SymName_65));
    MR_hl_field(0, MaybeAbstractDefn_16, 1) = ((MR_Box) (Params_66));
    MR_hl_field(0, MaybeAbstractDefn_16, 2) = ((MR_Box) (MaybeForTypeCtor_78));
    MR_hl_field(0, MaybeAbstractDefn_16, 3) = ((MR_Box) (MaybeAbstractInstDefn_75));
    MR_hl_field(0, MaybeAbstractDefn_16, 4) = ((MR_Box) (InstVarSet_69));
    MR_hl_field(0, MaybeAbstractDefn_16, 5) = ((MR_Box) (Context_70));
    MR_hl_field(0, MaybeAbstractDefn_16, 6) = ((MR_Box) (SeqNum_71));
  }
  {
    StdInstDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdInstDefn_17, 0) = (MR_Box) ((MR_Unsigned) (Status_13));
    MR_hl_field(0, StdInstDefn_17, 1) = ((MR_Box) (MaybeAbstractDefn_16));
  }
  MaybeIntDefn0_18 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_12, (MR_Integer) 0))));
  MaybeImpDefn0_19 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_12, (MR_Integer) 1))));
  if ((MaybeIntDefn0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeIntDefn_21 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_29_29;
    STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_30_30;
  }
  else
  {
    MR_Word Defn0_92 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn0_18, (MR_Integer) 0))));
    MR_Word Defn_93;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__494__1__ho11_8_p_0((MR_Integer) 1, Defn0_92, &Defn_93, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_34_34);
    {
      MaybeIntDefn_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIntDefn_21, 0) = ((MR_Box) (Defn_93));
    }
  }
  if ((MaybeImpDefn0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeImpDefn_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_33_33;
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_34_34;
  }
  else
  {
    MR_Word Defn0_97 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn0_19, (MR_Integer) 0))));
    MR_Word Defn_98;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__494__1__ho11_8_p_0((MR_Integer) 0, Defn0_97, &Defn_98, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_27);
    {
      MaybeImpDefn_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeImpDefn_22, 0) = ((MR_Box) (Defn_98));
    }
  }
  {
    SrcDefns_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SrcDefns_23, 0) = ((MR_Box) (MaybeIntDefn_21));
    MR_hl_field(0, SrcDefns_23, 1) = ((MR_Box) (MaybeImpDefn_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CheckedDefn_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (StdInstDefn_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__494__1__ho11_8_p_0(
  MR_Word HeadVar__2_46,
  MR_Word HeadVar__3_47,
  MR_Word * HeadVar__4_48,
  MR_Word HeadVar__5_49,
  MR_Word * HeadVar__6_50,
  MR_Word HeadVar__7_51,
  MR_Word * HeadVar__8_52)
{
  MR_bool succeeded;
  MR_Word SymName_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 0))));
  MR_Word Params_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 1))));
  MR_Word MaybeForTypeCtor0_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 2))));
  MR_Word MaybeAbstractInstDefn0_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 3))));
  MR_Word InstVarSet_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 4))));
  MR_Word Context_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 5))));
  MR_Word SeqNum_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_47, (MR_Integer) 6))));
  MR_Integer Arity_62;
  MR_Word InstCtor_63;
  MR_Word ErrorContext_64;
  MR_Word MaybeAbstractInstDefn_65;
  MR_Word MaybeForTypeCtor_68;
  MR_Word STATE_VARIABLE_Info_33_69;
  MR_Word STATE_VARIABLE_Specs_34_70;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_56, &Arity_62);
  {
    InstCtor_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtor_63, 0) = ((MR_Box) (SymName_55));
    MR_hl_field(0, InstCtor_63, 1) = ((MR_Box) (Arity_62));
  }
  {
    ErrorContext_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ErrorContext_64, 0) = ((MR_Box) (Context_60));
    MR_hl_field(1, ErrorContext_64, 1) = ((MR_Box) (InstCtor_63));
  }
  parse_tree__module_qual__qualify_items__qualify_inst_defn_9_p_0(HeadVar__2_46, Context_60, InstCtor_63, MaybeAbstractInstDefn0_58, &MaybeAbstractInstDefn_65, HeadVar__5_49, &STATE_VARIABLE_Info_33_69, HeadVar__7_51, &STATE_VARIABLE_Specs_34_70);
  if ((MaybeForTypeCtor0_57 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeForTypeCtor_68 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_50 = STATE_VARIABLE_Info_33_69;
    *HeadVar__8_52 = STATE_VARIABLE_Specs_34_70;
  }
  else
  {
    MR_Word ForTypeCtor0_66 = ((MR_Word) ((MR_hl_field(1, MaybeForTypeCtor0_57, (MR_Integer) 0))));
    MR_Word ForTypeCtor_67;
    MR_Word SymName0_73 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_66, (MR_Integer) 0))));
    MR_Integer Arity_74 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_66, (MR_Integer) 1))));
    MR_Word SymName_79 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_66, (MR_Integer) 0))));
    MR_Integer Var_80 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_66, (MR_Integer) 1))));

    succeeded = (Var_80 == (MR_Integer) 0);
    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_79);
    if (succeeded)
    {
      ForTypeCtor_67 = ForTypeCtor0_66;
      *HeadVar__8_52 = STATE_VARIABLE_Specs_34_70;
      *HeadVar__6_50 = STATE_VARIABLE_Info_33_69;
    }
    else
    {
      MR_Word TypeCtorId0_75;
      MR_Word Types_76;
      MR_Word SymName_77;

      {
        TypeCtorId0_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtorId0_75, 0) = ((MR_Box) (SymName0_73));
        MR_hl_field(0, TypeCtorId0_75, 1) = ((MR_Box) (Arity_74));
      }
      parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_33_69, &Types_76);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__2_46, ErrorContext_64, Types_76, (MR_Integer) 0, TypeCtorId0_75, &SymName_77, STATE_VARIABLE_Info_33_69, HeadVar__6_50, STATE_VARIABLE_Specs_34_70, HeadVar__8_52);
      {
        ForTypeCtor_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForTypeCtor_67, 0) = ((MR_Box) (SymName_77));
        MR_hl_field(0, ForTypeCtor_67, 1) = ((MR_Box) (Arity_74));
      }
    }
    {
      MaybeForTypeCtor_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeForTypeCtor_68, 0) = ((MR_Box) (ForTypeCtor_67));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_48 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_55));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_56));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeForTypeCtor_68));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeAbstractInstDefn_65));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstVarSet_59));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_60));
    MR_hl_field(0, base, 6) = ((MR_Box) (SeqNum_61));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word InstCtor_12,
  MR_Word MaybeAbstractInstDefn0_13,
  MR_Word * MaybeAbstractInstDefn_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  if ((MaybeAbstractInstDefn0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeAbstractInstDefn_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  }
  else
  {
    MR_Word InstDefn0_17 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn0_13, (MR_Integer) 0))));
    MR_Word ErrorContext_18;
    MR_Word Inst0_19;
    MR_Word Inst_20;
    MR_Word InstDefn_21;

    {
      ErrorContext_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ErrorContext_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(1, ErrorContext_18, 1) = ((MR_Box) (InstCtor_12));
    }
    Inst0_19 = (MR_Word) (InstDefn0_17);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_18, Inst0_19, &Inst_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    InstDefn_21 = (MR_Word) (Inst_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractInstDefn_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstDefn_21));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_ItemForeignEnum_10;
  MR_Word conv17_STATE_VARIABLE_Info_21;
  MR_Word conv16_STATE_VARIABLE_Specs_23;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv18_ItemForeignEnum_10, ((MR_Word) (wrapper_arg_3)), &conv17_STATE_VARIABLE_Info_21, ((MR_Word) (wrapper_arg_5)), &conv16_STATE_VARIABLE_Specs_23);
  *wrapper_arg_2 = ((MR_Box) (conv18_ItemForeignEnum_10));
  *wrapper_arg_4 = ((MR_Box) (conv17_STATE_VARIABLE_Info_21));
  *wrapper_arg_6 = ((MR_Box) (conv16_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_HeadVar__4_189;
  MR_Word conv12_HeadVar__6_191;
  MR_Word conv11_HeadVar__8_193;

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__468__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv13_HeadVar__4_189, ((MR_Word) (wrapper_arg_3)), &conv12_HeadVar__6_191, ((MR_Word) (wrapper_arg_5)), &conv11_HeadVar__8_193);
  *wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__4_189));
  *wrapper_arg_4 = ((MR_Box) (conv12_HeadVar__6_191));
  *wrapper_arg_6 = ((MR_Box) (conv11_HeadVar__8_193));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TypeDefn_14;
  MR_Word conv9_STATE_VARIABLE_Info_28;
  MR_Word conv8_STATE_VARIABLE_Specs_30;

  parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv10_TypeDefn_14, ((MR_Word) (wrapper_arg_6)), &conv9_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_8)), &conv8_STATE_VARIABLE_Specs_30);
  *wrapper_arg_5 = ((MR_Box) (conv10_TypeDefn_14));
  *wrapper_arg_7 = ((MR_Box) (conv9_STATE_VARIABLE_Info_28));
  *wrapper_arg_9 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__4_170;
  MR_Word conv4_HeadVar__6_172;
  MR_Word conv3_HeadVar__8_174;

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__464__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__4_170, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__6_172, ((MR_Word) (wrapper_arg_5)), &conv3_HeadVar__8_174);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__4_170));
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__6_172));
  *wrapper_arg_6 = ((MR_Box) (conv3_HeadVar__8_174));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_TypeDefn_14;
  MR_Word conv1_STATE_VARIABLE_Info_28;
  MR_Word conv0_STATE_VARIABLE_Specs_30;

  parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv2_TypeDefn_14, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Specs_30);
  *wrapper_arg_5 = ((MR_Box) (conv2_TypeDefn_14));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Info_28));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0(
  MR_Word CheckedDefn0_7,
  MR_Word * CheckedDefn_8,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  if (((MR_tag((MR_Word) CheckedDefn0_7)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_11 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_7, (MR_Integer) 0))));
    MR_Word SrcDefns0_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_7, (MR_Integer) 1))));
    MR_Word SolverDefn_15;
    MR_Word MaybeIntDefn0_20;
    MR_Word MaybeImpDefn0_21;
    MR_Word MaybeIntDefn_23;
    MR_Word MaybeImpDefn_24;
    MR_Word SrcDefns_25;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word STATE_VARIABLE_Specs_55_55;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word STATE_VARIABLE_Specs_59_59;

    if (((MR_tag((MR_Word) SolverDefn0_11)) == (MR_Integer) 0))
    {
      SolverDefn_15 = SolverDefn0_11;
      STATE_VARIABLE_Info_54_54 = STATE_VARIABLE_Info_0_49;
      STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_51;
    }
    else
    {
      MR_Word MaybeAbsDefn0_16 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_11, (MR_Integer) 0))));
      MR_Word FullDefn0_17 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_11, (MR_Integer) 1))));
      MR_Word FullDefn_19;

      parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho8_8_p_0((MR_Integer) 0, FullDefn0_17, &FullDefn_19, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_55_55);
      {
        SolverDefn_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SolverDefn_15, 0) = ((MR_Box) (MaybeAbsDefn0_16));
        MR_hl_field(1, SolverDefn_15, 1) = ((MR_Box) (FullDefn_19));
      }
    }
    MaybeIntDefn0_20 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_12, (MR_Integer) 0))));
    MaybeImpDefn0_21 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_12, (MR_Integer) 1))));
    if ((MaybeIntDefn0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeIntDefn_23 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_58_58 = STATE_VARIABLE_Info_54_54;
      STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_55_55;
    }
    else
    {
      MR_Word Defn0_212 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn0_20, (MR_Integer) 0))));
      MR_Word Defn_213;

      parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__416__1__ho10_8_p_0((MR_Integer) 1, Defn0_212, &Defn_213, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_59_59);
      {
        MaybeIntDefn_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeIntDefn_23, 0) = ((MR_Box) (Defn_213));
      }
    }
    parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_8_p_0((MR_Integer) 0, MaybeImpDefn0_21, &MaybeImpDefn_24, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_50, STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Specs_52);
    {
      SrcDefns_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_25, 0) = ((MR_Box) (MaybeIntDefn_23));
      MR_hl_field(0, SrcDefns_25, 1) = ((MR_Box) (MaybeImpDefn_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CheckedDefn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SolverDefn_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_25));
    }
  }
  else
  {
    MR_Word StdDefn0_26 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_7, (MR_Integer) 0))));
    MR_Word StdDefn_30;
    MR_Word IntDefns0_43;
    MR_Word ImpDefns0_44;
    MR_Word ImpForeignEnums0_45;
    MR_Word IntDefns_46;
    MR_Word ImpDefns_47;
    MR_Word ImpForeignEnums_48;
    MR_Word STATE_VARIABLE_Info_64_64;
    MR_Word STATE_VARIABLE_Specs_65_65;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Word STATE_VARIABLE_Specs_77_77;
    MR_Word STATE_VARIABLE_Info_81_81;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_Word SrcDefns0_98 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_7, (MR_Integer) 1))));
    MR_Word SrcDefns_100;
    MR_Box conv7_STATE_VARIABLE_Info_76_76;
    MR_Box conv6_STATE_VARIABLE_Specs_77_77;
    MR_Box conv15_STATE_VARIABLE_Info_81_81;
    MR_Box conv14_STATE_VARIABLE_Specs_82_82;
    MR_Box conv20_STATE_VARIABLE_Info_50;
    MR_Box conv19_STATE_VARIABLE_Specs_52;

    switch (MR_tag((MR_Word) StdDefn0_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_27 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_26, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word EqvDefn0_28 = ((MR_Word) ((MR_hl_field(0, StdDefn0_26, (MR_Integer) 1))));
          MR_Word EqvDefn_29;
          MR_Word InInt_89;

          switch (EqvStatus_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              InInt_89 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              InInt_89 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              InInt_89 = (MR_Integer) 1;
              break;
          }
          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_8_p_0(InInt_89, EqvDefn0_28, &EqvDefn_29, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_65_65);
          {
            StdDefn_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StdDefn_30, 0) = (MR_Box) ((MR_Unsigned) (EqvStatus_27));
            MR_hl_field(0, StdDefn_30, 1) = ((MR_Box) (EqvDefn_29));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStatus_31 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn0_26, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word SubDefn0_32 = ((MR_Word) ((MR_hl_field(1, StdDefn0_26, (MR_Integer) 1))));
          MR_Word SubDefn_33;
          MR_Word InInt_90;

          switch (SubStatus_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              InInt_90 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              InInt_90 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              InInt_90 = (MR_Integer) 1;
              break;
          }
          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_8_p_0(InInt_90, SubDefn0_32, &SubDefn_33, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_65_65);
          {
            StdDefn_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StdDefn_30, 0) = (MR_Box) ((MR_Unsigned) (SubStatus_31));
            MR_hl_field(1, StdDefn_30, 1) = ((MR_Box) (SubDefn_33));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuStatus_34 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn0_26, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word DuDefn0_35 = ((MR_Word) ((MR_hl_field(2, StdDefn0_26, (MR_Integer) 1))));
          MR_String HeadCtor_36 = ((MR_String) ((MR_hl_field(2, StdDefn0_26, (MR_Integer) 2))));
          MR_Word TailCtors_37 = ((MR_Word) ((MR_hl_field(2, StdDefn0_26, (MR_Integer) 3))));
          MR_Word CJCsDefnOrEnum_38 = ((MR_Word) ((MR_hl_field(2, StdDefn0_26, (MR_Integer) 4))));
          MR_Word DuDefn_39;
          MR_Word InInt_91 = ((&parse_tree__module_qual__qualify_items_vector_common_12[0 + DuStatus_34]))->parse_tree__module_qual__qualify_items__vector_common_type_12_0__vct_12_f_0;

          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_8_p_0(InInt_91, DuDefn0_35, &DuDefn_39, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_65_65);
          {
            StdDefn_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, StdDefn_30, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_34));
            MR_hl_field(2, StdDefn_30, 1) = ((MR_Box) (DuDefn_39));
            MR_hl_field(2, StdDefn_30, 2) = ((MR_Box) (HeadCtor_36));
            MR_hl_field(2, StdDefn_30, 3) = ((MR_Box) (TailCtors_37));
            MR_hl_field(2, StdDefn_30, 4) = ((MR_Box) (CJCsDefnOrEnum_38));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn0_26, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InInt_92;
              MR_Word DuStatus_93 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_26, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word DuDefn0_94 = ((MR_Word) ((MR_hl_field(3, StdDefn0_26, (MR_Integer) 2))));
              MR_Word CJCsDefnOrEnum_95 = ((MR_Word) ((MR_hl_field(3, StdDefn0_26, (MR_Integer) 3))));
              MR_Word DuDefn_96;

              InInt_92 = ((&parse_tree__module_qual__qualify_items_vector_common_12[4 + DuStatus_93]))->parse_tree__module_qual__qualify_items__vector_common_type_12_0__vct_12_f_0;
              parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_8_p_0(InInt_92, DuDefn0_94, &DuDefn_96, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_65_65);
              {
                StdDefn_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, StdDefn_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, StdDefn_30, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_93));
                MR_hl_field(3, StdDefn_30, 2) = ((MR_Box) (DuDefn_96));
                MR_hl_field(3, StdDefn_30, 3) = ((MR_Box) (CJCsDefnOrEnum_95));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              StdDefn_30 = StdDefn0_26;
              STATE_VARIABLE_Info_64_64 = STATE_VARIABLE_Info_0_49;
              STATE_VARIABLE_Specs_65_65 = STATE_VARIABLE_Specs_0_51;
            }
            break;
        }
        break;
    }
    IntDefns0_43 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_98, (MR_Integer) 0))));
    ImpDefns0_44 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_98, (MR_Integer) 1))));
    ImpForeignEnums0_45 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_98, (MR_Integer) 2))));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_14[0]), IntDefns0_43, &IntDefns_46, ((MR_Box) (STATE_VARIABLE_Info_64_64)), &conv7_STATE_VARIABLE_Info_76_76, ((MR_Box) (STATE_VARIABLE_Specs_65_65)), &conv6_STATE_VARIABLE_Specs_77_77);
    STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv7_STATE_VARIABLE_Info_76_76));
    STATE_VARIABLE_Specs_77_77 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_77_77));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_14[1]), ImpDefns0_44, &ImpDefns_47, ((MR_Box) (STATE_VARIABLE_Info_76_76)), &conv15_STATE_VARIABLE_Info_81_81, ((MR_Box) (STATE_VARIABLE_Specs_77_77)), &conv14_STATE_VARIABLE_Specs_82_82);
    STATE_VARIABLE_Info_81_81 = ((MR_Word) (conv15_STATE_VARIABLE_Info_81_81));
    STATE_VARIABLE_Specs_82_82 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_82_82));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[17]), ImpForeignEnums0_45, &ImpForeignEnums_48, ((MR_Box) (STATE_VARIABLE_Info_81_81)), &conv20_STATE_VARIABLE_Info_50, ((MR_Box) (STATE_VARIABLE_Specs_82_82)), &conv19_STATE_VARIABLE_Specs_52);
    *STATE_VARIABLE_Info_50 = ((MR_Word) (conv20_STATE_VARIABLE_Info_50));
    *STATE_VARIABLE_Specs_52 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_52));
    {
      SrcDefns_100 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_100, 0) = ((MR_Box) (IntDefns_46));
      MR_hl_field(0, SrcDefns_100, 1) = ((MR_Box) (ImpDefns_47));
      MR_hl_field(0, SrcDefns_100, 2) = ((MR_Box) (ImpForeignEnums_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CheckedDefn_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_100));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_8_p_0(
  MR_Word InInt_10,
  MR_Word MaybeDefn0_11,
  MR_Word * MaybeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  if ((MaybeDefn0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeDefn_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
  else
  {
    MR_Word Defn0_15 = ((MR_Word) ((MR_hl_field(1, MaybeDefn0_11, (MR_Integer) 0))));
    MR_Word Defn_16;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__416__1__ho10_8_p_0(InInt_10, Defn0_15, &Defn_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Defn_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__416__1__ho10_8_p_0(
  MR_Word HeadVar__2_111,
  MR_Word HeadVar__3_112,
  MR_Word * HeadVar__4_113,
  MR_Word HeadVar__5_114,
  MR_Word * HeadVar__6_115,
  MR_Word HeadVar__7_116,
  MR_Word * HeadVar__8_117)
{
  MR_Word SymName_120 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_112, (MR_Integer) 0))));
  MR_Word Params_121 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_112, (MR_Integer) 1))));
  MR_Word TypeDefn0_122 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_112, (MR_Integer) 2))));
  MR_Word TVarSet_123 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_112, (MR_Integer) 3))));
  MR_Word Context_124 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_112, (MR_Integer) 4))));
  MR_Word SeqNum_125 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_112, (MR_Integer) 5))));
  MR_Integer Arity_126;
  MR_Word TypeCtor_127;
  MR_Word TypeDefn_128;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_121, &Arity_126);
  {
    TypeCtor_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_127, 0) = ((MR_Box) (SymName_120));
    MR_hl_field(0, TypeCtor_127, 1) = ((MR_Box) (Arity_126));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(HeadVar__2_111, Context_124, TypeCtor_127, TypeDefn0_122, &TypeDefn_128, HeadVar__5_114, HeadVar__6_115, HeadVar__7_116, HeadVar__8_117);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_113 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_120));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_121));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_128));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_123));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_124));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_125));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word TypeDefn0_13,
  MR_Word * TypeDefn_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  switch (MR_tag((MR_Word) TypeDefn0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_21 = (MR_Word) ((MR_Word) (TypeDefn0_13));
        MR_Word DetailsDu_22;

        parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_9_p_0(InInt_10, TypeCtor_12, DetailsDu0_21, &DetailsDu_22, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        *TypeDefn_14 = (MR_Word) ((MR_Word) (DetailsDu_22));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub0_23 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_13), (MR_Integer) 1));
        MR_Word DetailsSub_24;

        parse_tree__module_qual__qualify_items__qualify_type_defn_sub_9_p_0(InInt_10, Context_11, TypeCtor_12, DetailsSub0_23, &DetailsSub_24, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        *TypeDefn_14 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_24)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_17 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_13), (MR_Integer) 2));
        MR_Word DetailsSolver_18;

        parse_tree__module_qual__qualify_items__qualify_type_defn_solver_9_p_0(InInt_10, Context_11, TypeCtor_12, DetailsSolver0_17, &DetailsSolver_18, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        *TypeDefn_14 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_18)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_19 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_13, (MR_Integer) 1))));
            MR_Word DetailsEqv_20;
            MR_Word Type0_31 = (MR_Word) (DetailsEqv0_19);
            MR_Word ErrorContext_32;
            MR_Word Type_33;

            {
              ErrorContext_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ErrorContext_32, 0) = ((MR_Box) (Context_11));
              MR_hl_field(0, ErrorContext_32, 1) = ((MR_Box) (TypeCtor_12));
            }
            parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_32, Type0_31, &Type_33, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            DetailsEqv_20 = (MR_Word) (Type_33);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_14 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (DetailsEqv_20));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *TypeDefn_14 = TypeDefn0_13;
            *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho8_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_solver_9_p_0(InInt_10, Context_19, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_solver_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word DetailsSolver0_13,
  MR_Word * DetailsSolver_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word SolverTypeDetails0_17 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_13, (MR_Integer) 0))));
  MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_13, (MR_Integer) 1))));
  MR_Word RepnType0_19 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_17, (MR_Integer) 0))));
  MR_Word GroundInst0_20 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_17, (MR_Integer) 1))));
  MR_Word AnyInst0_21 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_17, (MR_Integer) 2))));
  MR_Word Mutables0_22 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_17, (MR_Integer) 3))));
  MR_Word ErrorContext_23;
  MR_Word RepnType_24;
  MR_Word GroundInst_25;
  MR_Word AnyInst_26;
  MR_Word Mutables_27;
  MR_Word SolverTypeDetails_28;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_Specs_38_38;

  {
    ErrorContext_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ErrorContext_23, 0) = ((MR_Box) (Context_11));
    MR_hl_field(0, ErrorContext_23, 1) = ((MR_Box) (TypeCtor_12));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_23, RepnType0_19, &RepnType_24, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_34_34);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_23, GroundInst0_20, &GroundInst_25, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_34_34, &STATE_VARIABLE_Specs_36_36);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_23, AnyInst0_21, &AnyInst_26, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_38_38);
  parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(InInt_10, Mutables0_22, &Mutables_27, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_32);
  {
    SolverTypeDetails_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SolverTypeDetails_28, 0) = ((MR_Box) (RepnType_24));
    MR_hl_field(0, SolverTypeDetails_28, 1) = ((MR_Box) (GroundInst_25));
    MR_hl_field(0, SolverTypeDetails_28, 2) = ((MR_Box) (AnyInst_26));
    MR_hl_field(0, SolverTypeDetails_28, 3) = ((MR_Box) (Mutables_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSolver_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SolverTypeDetails_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeUserEqComp_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Mutable0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mutables0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mutable_18;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_Word * AddrMutables_28;

    parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(HeadVar__1_1, Mutable0_16, &Mutable_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_27_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mutable_18));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrMutables_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_7_p_0(HeadVar__1_1, Mutables0_17, AddrMutables_28, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_5, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_7);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_29 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word Mutable0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Mutables0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mutable_18;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Specs_27_27;
      MR_Word * AddrMutables_28;
      MR_Word HeadVar__3_30;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(HeadVar__1_1, Mutable0_16, &Mutable_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_27_27);
      {
        HeadVar__3_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_30, 0) = ((MR_Box) (Mutable_18));
        MR_hl_field(1, HeadVar__3_30, 1) = NULL;
      }
      AddrMutables_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_30, (MR_Integer) 1)));
      *AddrOfHeadVar__3_29 = HeadVar__3_30;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Mutables0_17;
      next_value_of_AddrOfHeadVar__3_29 = AddrMutables_28;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemMutable0_9,
  MR_Word * ItemMutable_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_String Name_13 = ((MR_String) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 0))));
  MR_Word OrigType0_14 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 1))));
  MR_Word Type0_15 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 2))));
  MR_Word OrigInst0_16 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 3))));
  MR_Word Inst0_17 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 4))));
  MR_Word InitTerm_18 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 5))));
  MR_Word Attrs_19 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 6))));
  MR_Word Varset_20 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 7))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 8))));
  MR_Word SeqNum_22 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_9, (MR_Integer) 9))));
  MR_Word ErrorContext_23;
  MR_Word OrigType_24;
  MR_Word Type_26;
  MR_Word OrigInst_27;
  MR_Word Inst_29;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Word STATE_VARIABLE_Specs_37_37;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word Var_25;
  MR_Word Var_28;

  {
    ErrorContext_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, ErrorContext_23, 1) = ((MR_Box) (Context_21));
    MR_hl_field(3, ErrorContext_23, 2) = ((MR_Box) (Name_13));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_23, OrigType0_14, &OrigType_24, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_34_34, (MR_Word) ((MR_Unsigned) 0U), &Var_25);
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_23, Type0_15, &Type_26, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_37_37);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_23, OrigInst0_16, &OrigInst_27, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38, (MR_Word) ((MR_Unsigned) 0U), &Var_28);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_23, Inst0_17, &Inst_29, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_31, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ItemMutable_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigType_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigInst_27));
    MR_hl_field(0, base, 4) = ((MR_Box) (Inst_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (InitTerm_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Attrs_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Varset_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (Context_21));
    MR_hl_field(0, base, 9) = ((MR_Box) (SeqNum_22));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;
  MR_Word Type0_30;
  MR_Word ErrorContext_31;
  MR_Word Type_32;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  Type0_30 = (MR_Word) (TypeDefn0_17);
  {
    ErrorContext_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ErrorContext_31, 0) = ((MR_Box) (Context_19));
    MR_hl_field(0, ErrorContext_31, 1) = ((MR_Box) (TypeCtor_22));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_31, Type0_30, &Type_32, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  TypeDefn_23 = (MR_Word) (Type_32);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_sub_9_p_0(InInt_10, Context_19, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_sub_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word DetailsSub0_13,
  MR_Word * DetailsSub_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word SuperType0_17 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_13, (MR_Integer) 0))));
  MR_Word OoMCtors0_18 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_13, (MR_Integer) 1))));
  MR_Word ErrorContext_19;
  MR_Word SuperType_20;
  MR_Word HeadCtor0_21;
  MR_Word TailCtors0_22;
  MR_Word HeadCtor_23;
  MR_Word TailCtors_24;
  MR_Word OoMCtors_25;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Specs_31_31;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;
  uint32_t Ordinal_34;
  MR_Word MaybeExistConstraints0_35;
  MR_Word FunctionSymbolSymName_36;
  MR_Word Args0_37;
  MR_Integer Arity_38;
  MR_Word Context_39;
  MR_String FunctionSymbolName_40;
  MR_Word MaybeExistConstraints_41;
  MR_Word Args_50;
  MR_Word STATE_VARIABLE_Info_36_51;
  MR_Word STATE_VARIABLE_Specs_37_52;

  {
    ErrorContext_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ErrorContext_19, 0) = ((MR_Box) (Context_11));
    MR_hl_field(0, ErrorContext_19, 1) = ((MR_Box) (TypeCtor_12));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_19, SuperType0_17, &SuperType_20, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_31);
  HeadCtor0_21 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_18, (MR_Integer) 0))));
  TailCtors0_22 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_18, (MR_Integer) 1))));
  Ordinal_34 = ((uint32_t) (MR_Word) (MR_hl_field(0, HeadCtor0_21, (MR_Integer) 0)));
  MaybeExistConstraints0_35 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_21, (MR_Integer) 1))));
  FunctionSymbolSymName_36 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_21, (MR_Integer) 2))));
  Args0_37 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_21, (MR_Integer) 3))));
  Arity_38 = ((MR_Integer) ((MR_hl_field(0, HeadCtor0_21, (MR_Integer) 4))));
  Context_39 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_21, (MR_Integer) 5))));
  FunctionSymbolName_40 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_36);
  if ((MaybeExistConstraints0_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_41 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_36_51 = STATE_VARIABLE_Info_30_30;
    STATE_VARIABLE_Specs_37_52 = STATE_VARIABLE_Specs_31_31;
  }
  else
  {
    MR_Word ExistConstraints0_42 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_35), (MR_Integer) 1));
    MR_Word ExistQVars_43 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_42, (MR_Integer) 0))));
    MR_Word Constraints0_44 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_42, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQVars_45 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_42, (MR_Integer) 2))));
    MR_Word ConstrainedExistQVars_46 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_42, (MR_Integer) 3))));
    MR_Word ConstraintErrorContext_47;
    MR_Word Constraints_48;
    MR_Word ExistConstraints_49;

    {
      ConstraintErrorContext_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConstraintErrorContext_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ConstraintErrorContext_47, 1) = ((MR_Box) (Context_39));
      MR_hl_field(3, ConstraintErrorContext_47, 2) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(3, ConstraintErrorContext_47, 3) = ((MR_Box) (FunctionSymbolName_40));
    }
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_10, ConstraintErrorContext_47, Constraints0_44, &Constraints_48, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_36_51, STATE_VARIABLE_Specs_31_31, &STATE_VARIABLE_Specs_37_52);
    {
      ExistConstraints_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_49, 0) = ((MR_Box) (ExistQVars_43));
      MR_hl_field(0, ExistConstraints_49, 1) = ((MR_Box) (Constraints_48));
      MR_hl_field(0, ExistConstraints_49, 2) = ((MR_Box) (UnconstrainedExistQVars_45));
      MR_hl_field(0, ExistConstraints_49, 3) = ((MR_Box) (ConstrainedExistQVars_46));
    }
    MaybeExistConstraints_41 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_49)));
  }
  parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(InInt_10, TypeCtor_12, FunctionSymbolName_40, (MR_Integer) 0, Args0_37, &Args_50, STATE_VARIABLE_Info_36_51, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_37_52, &STATE_VARIABLE_Specs_33_33);
  {
    HeadCtor_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadCtor_23, 0) = ((MR_Box) (MR_Word) (Ordinal_34));
    MR_hl_field(0, HeadCtor_23, 1) = ((MR_Box) (MaybeExistConstraints_41));
    MR_hl_field(0, HeadCtor_23, 2) = ((MR_Box) (FunctionSymbolSymName_36));
    MR_hl_field(0, HeadCtor_23, 3) = ((MR_Box) (Args_50));
    MR_hl_field(0, HeadCtor_23, 4) = ((MR_Box) (Arity_38));
    MR_hl_field(0, HeadCtor_23, 5) = ((MR_Box) (Context_39));
  }
  parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(InInt_10, TypeCtor_12, TailCtors0_22, &TailCtors_24, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_29);
  {
    OoMCtors_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OoMCtors_25, 0) = ((MR_Box) (HeadCtor_23));
    MR_hl_field(0, OoMCtors_25, 1) = ((MR_Box) (TailCtors_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSub_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SuperType_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (OoMCtors_25));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_9_p_0(InInt_10, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_9_p_0(
  MR_Word InInt_10,
  MR_Word TypeCtor_12,
  MR_Word DetailsDu0_13,
  MR_Word * DetailsDu_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word OoMCtors0_17 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_13, (MR_Integer) 0))));
  MR_Word HeadCtor0_20 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_17, (MR_Integer) 0))));
  MR_Word TailCtors0_21 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_17, (MR_Integer) 1))));
  MR_Word HeadCtor_22;
  MR_Word TailCtors_23;
  MR_Word OoMCtors_24;
  MR_Word MaybeUserEqComp_25 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_13, (MR_Integer) 1))));
  MR_Word MaybeDirectArgCtors_26 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_13, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_Specs_32_32;
  uint32_t Ordinal_33 = ((uint32_t) (MR_Word) (MR_hl_field(0, HeadCtor0_20, (MR_Integer) 0)));
  MR_Word MaybeExistConstraints0_34 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_20, (MR_Integer) 1))));
  MR_Word FunctionSymbolSymName_35 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_20, (MR_Integer) 2))));
  MR_Word Args0_36 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_20, (MR_Integer) 3))));
  MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(0, HeadCtor0_20, (MR_Integer) 4))));
  MR_Word Context_38 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_20, (MR_Integer) 5))));
  MR_String FunctionSymbolName_39;
  MR_Word MaybeExistConstraints_40;
  MR_Word Args_49;
  MR_Word STATE_VARIABLE_Info_36_50;
  MR_Word STATE_VARIABLE_Specs_37_51;

  FunctionSymbolName_39 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_35);
  if ((MaybeExistConstraints0_34 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_40 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_36_50 = STATE_VARIABLE_Info_0_27;
    STATE_VARIABLE_Specs_37_51 = STATE_VARIABLE_Specs_0_29;
  }
  else
  {
    MR_Word ExistConstraints0_41 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_34), (MR_Integer) 1));
    MR_Word ExistQVars_42 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_41, (MR_Integer) 0))));
    MR_Word Constraints0_43 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_41, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQVars_44 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_41, (MR_Integer) 2))));
    MR_Word ConstrainedExistQVars_45 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_41, (MR_Integer) 3))));
    MR_Word ConstraintErrorContext_46;
    MR_Word Constraints_47;
    MR_Word ExistConstraints_48;

    {
      ConstraintErrorContext_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConstraintErrorContext_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ConstraintErrorContext_46, 1) = ((MR_Box) (Context_38));
      MR_hl_field(3, ConstraintErrorContext_46, 2) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(3, ConstraintErrorContext_46, 3) = ((MR_Box) (FunctionSymbolName_39));
    }
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_10, ConstraintErrorContext_46, Constraints0_43, &Constraints_47, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_36_50, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_37_51);
    {
      ExistConstraints_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_48, 0) = ((MR_Box) (ExistQVars_42));
      MR_hl_field(0, ExistConstraints_48, 1) = ((MR_Box) (Constraints_47));
      MR_hl_field(0, ExistConstraints_48, 2) = ((MR_Box) (UnconstrainedExistQVars_44));
      MR_hl_field(0, ExistConstraints_48, 3) = ((MR_Box) (ConstrainedExistQVars_45));
    }
    MaybeExistConstraints_40 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_48)));
  }
  parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(InInt_10, TypeCtor_12, FunctionSymbolName_39, (MR_Integer) 0, Args0_36, &Args_49, STATE_VARIABLE_Info_36_50, &STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Specs_37_51, &STATE_VARIABLE_Specs_32_32);
  {
    HeadCtor_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadCtor_22, 0) = ((MR_Box) (MR_Word) (Ordinal_33));
    MR_hl_field(0, HeadCtor_22, 1) = ((MR_Box) (MaybeExistConstraints_40));
    MR_hl_field(0, HeadCtor_22, 2) = ((MR_Box) (FunctionSymbolSymName_35));
    MR_hl_field(0, HeadCtor_22, 3) = ((MR_Box) (Args_49));
    MR_hl_field(0, HeadCtor_22, 4) = ((MR_Box) (Arity_37));
    MR_hl_field(0, HeadCtor_22, 5) = ((MR_Box) (Context_38));
  }
  parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(InInt_10, TypeCtor_12, TailCtors0_21, &TailCtors_23, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Specs_30);
  {
    OoMCtors_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OoMCtors_24, 0) = ((MR_Box) (HeadCtor_22));
    MR_hl_field(0, OoMCtors_24, 1) = ((MR_Box) (TailCtors_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DetailsDu_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OoMCtors_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeUserEqComp_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDirectArgCtors_26));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Ctor0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Ctor_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    uint32_t Ordinal_31 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_19, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints0_32 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 1))));
    MR_Word FunctionSymbolSymName_33 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 2))));
    MR_Word Args0_34 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 3))));
    MR_Integer Arity_35 = ((MR_Integer) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 4))));
    MR_Word Context_36 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 5))));
    MR_String FunctionSymbolName_37;
    MR_Word MaybeExistConstraints_38;
    MR_Word Args_47;
    MR_Word STATE_VARIABLE_Info_36_48;
    MR_Word STATE_VARIABLE_Specs_37_49;
    MR_Word * AddrCtors_51;

    FunctionSymbolName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_33);
    if ((MaybeExistConstraints0_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeExistConstraints_38 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_36_48 = STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_37_49 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word ExistConstraints0_39 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_32), (MR_Integer) 1));
      MR_Word ExistQVars_40 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 0))));
      MR_Word Constraints0_41 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQVars_42 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 2))));
      MR_Word ConstrainedExistQVars_43 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 3))));
      MR_Word ConstraintErrorContext_44;
      MR_Word Constraints_45;
      MR_Word ExistConstraints_46;

      {
        ConstraintErrorContext_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConstraintErrorContext_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ConstraintErrorContext_44, 1) = ((MR_Box) (Context_36));
        MR_hl_field(3, ConstraintErrorContext_44, 2) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, ConstraintErrorContext_44, 3) = ((MR_Box) (FunctionSymbolName_37));
      }
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_44, Constraints0_41, &Constraints_45, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_48, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_49);
      {
        ExistConstraints_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExistConstraints_46, 0) = ((MR_Box) (ExistQVars_40));
        MR_hl_field(0, ExistConstraints_46, 1) = ((MR_Box) (Constraints_45));
        MR_hl_field(0, ExistConstraints_46, 2) = ((MR_Box) (UnconstrainedExistQVars_42));
        MR_hl_field(0, ExistConstraints_46, 3) = ((MR_Box) (ConstrainedExistQVars_43));
      }
      MaybeExistConstraints_38 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_46)));
    }
    parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_37, (MR_Integer) 0, Args0_34, &Args_47, STATE_VARIABLE_Info_36_48, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_37_49, &STATE_VARIABLE_Specs_30_30);
    {
      Ctor_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Ctor_21, 0) = ((MR_Box) (MR_Word) (Ordinal_31));
      MR_hl_field(0, Ctor_21, 1) = ((MR_Box) (MaybeExistConstraints_38));
      MR_hl_field(0, Ctor_21, 2) = ((MR_Box) (FunctionSymbolSymName_33));
      MR_hl_field(0, Ctor_21, 3) = ((MR_Box) (Args_47));
      MR_hl_field(0, Ctor_21, 4) = ((MR_Box) (Arity_35));
      MR_hl_field(0, Ctor_21, 5) = ((MR_Box) (Context_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Ctor_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrCtors_51 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Ctors0_20, AddrCtors_51, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_52,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_52 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Ctor0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Ctor_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      uint32_t Ordinal_31 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_19, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints0_32 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 1))));
      MR_Word FunctionSymbolSymName_33 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 2))));
      MR_Word Args0_34 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 3))));
      MR_Integer Arity_35 = ((MR_Integer) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 4))));
      MR_Word Context_36 = ((MR_Word) ((MR_hl_field(0, Ctor0_19, (MR_Integer) 5))));
      MR_String FunctionSymbolName_37;
      MR_Word MaybeExistConstraints_38;
      MR_Word Args_47;
      MR_Word STATE_VARIABLE_Info_36_48;
      MR_Word STATE_VARIABLE_Specs_37_49;
      MR_Word * AddrCtors_51;
      MR_Word HeadVar__4_53;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_52;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      FunctionSymbolName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_33);
      if ((MaybeExistConstraints0_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeExistConstraints_38 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_36_48 = STATE_VARIABLE_Info_0_5;
        STATE_VARIABLE_Specs_37_49 = STATE_VARIABLE_Specs_0_7;
      }
      else
      {
        MR_Word ExistConstraints0_39 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_32), (MR_Integer) 1));
        MR_Word ExistQVars_40 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 0))));
        MR_Word Constraints0_41 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 1))));
        MR_Word UnconstrainedExistQVars_42 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 2))));
        MR_Word ConstrainedExistQVars_43 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_39, (MR_Integer) 3))));
        MR_Word ConstraintErrorContext_44;
        MR_Word Constraints_45;
        MR_Word ExistConstraints_46;

        {
          ConstraintErrorContext_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstraintErrorContext_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ConstraintErrorContext_44, 1) = ((MR_Box) (Context_36));
          MR_hl_field(3, ConstraintErrorContext_44, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(3, ConstraintErrorContext_44, 3) = ((MR_Box) (FunctionSymbolName_37));
        }
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_44, Constraints0_41, &Constraints_45, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_48, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_49);
        {
          ExistConstraints_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ExistConstraints_46, 0) = ((MR_Box) (ExistQVars_40));
          MR_hl_field(0, ExistConstraints_46, 1) = ((MR_Box) (Constraints_45));
          MR_hl_field(0, ExistConstraints_46, 2) = ((MR_Box) (UnconstrainedExistQVars_42));
          MR_hl_field(0, ExistConstraints_46, 3) = ((MR_Box) (ConstrainedExistQVars_43));
        }
        MaybeExistConstraints_38 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_46)));
      }
      parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_37, (MR_Integer) 0, Args0_34, &Args_47, STATE_VARIABLE_Info_36_48, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_37_49, &STATE_VARIABLE_Specs_30_30);
      {
        Ctor_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Ctor_21, 0) = ((MR_Box) (MR_Word) (Ordinal_31));
        MR_hl_field(0, Ctor_21, 1) = ((MR_Box) (MaybeExistConstraints_38));
        MR_hl_field(0, Ctor_21, 2) = ((MR_Box) (FunctionSymbolSymName_33));
        MR_hl_field(0, Ctor_21, 3) = ((MR_Box) (Args_47));
        MR_hl_field(0, Ctor_21, 4) = ((MR_Box) (Arity_35));
        MR_hl_field(0, Ctor_21, 5) = ((MR_Box) (Context_36));
      }
      {
        HeadVar__4_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_53, 0) = ((MR_Box) (Ctor_21));
        MR_hl_field(1, HeadVar__4_53, 1) = NULL;
      }
      AddrCtors_51 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_53, (MR_Integer) 1)));
      *AddrOfHeadVar__4_52 = HeadVar__4_53;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Ctors0_20;
      next_value_of_AddrOfHeadVar__4_52 = AddrCtors_51;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_52 = next_value_of_AddrOfHeadVar__4_52;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Constraint_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word ClassName0_31 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 0))));
    MR_Word Types0_32 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 1))));
    MR_Integer Arity_33;
    MR_Word OutsideContext_34;
    MR_Word ClassName_35;
    MR_Word ErrorContext_36;
    MR_Word Types_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Info_27_39;
    MR_Word STATE_VARIABLE_Specs_28_40;
    MR_Word ClassIdSet_42;
    MR_Word * AddrConstraints_44;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_32, &Arity_33);
    {
      OutsideContext_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, OutsideContext_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, OutsideContext_34, 1) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (ClassName0_31));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (Arity_33));
    }
    parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_42);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_34, ClassIdSet_42, (MR_Integer) 3, Var_38, &ClassName_35, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_39, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_28_40);
    {
      ErrorContext_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ErrorContext_36, 1) = ((MR_Box) (ClassName0_31));
      MR_hl_field(3, ErrorContext_36, 2) = ((MR_Box) (Arity_33));
      MR_hl_field(3, ErrorContext_36, 3) = ((MR_Box) (HeadVar__2_2));
    }
    parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(HeadVar__1_1, ErrorContext_36, Types0_32, &Types_37, STATE_VARIABLE_Info_27_39, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_28_40, &STATE_VARIABLE_Specs_30_30);
    {
      Constraint_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Constraint_21, 0) = ((MR_Box) (ClassName_35));
      MR_hl_field(0, Constraint_21, 1) = ((MR_Box) (Types_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Constraint_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrConstraints_44 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Constraints0_20, AddrConstraints_44, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_45,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_45 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Constraint_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ClassName0_31 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 0))));
      MR_Word Types0_32 = ((MR_Word) ((MR_hl_field(0, Constraint0_19, (MR_Integer) 1))));
      MR_Integer Arity_33;
      MR_Word OutsideContext_34;
      MR_Word ClassName_35;
      MR_Word ErrorContext_36;
      MR_Word Types_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_Info_27_39;
      MR_Word STATE_VARIABLE_Specs_28_40;
      MR_Word ClassIdSet_42;
      MR_Word * AddrConstraints_44;
      MR_Word HeadVar__4_46;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_45;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_32, &Arity_33);
      {
        OutsideContext_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OutsideContext_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, OutsideContext_34, 1) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (ClassName0_31));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (Arity_33));
      }
      parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_42);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_34, ClassIdSet_42, (MR_Integer) 3, Var_38, &ClassName_35, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_39, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_28_40);
      {
        ErrorContext_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ErrorContext_36, 1) = ((MR_Box) (ClassName0_31));
        MR_hl_field(3, ErrorContext_36, 2) = ((MR_Box) (Arity_33));
        MR_hl_field(3, ErrorContext_36, 3) = ((MR_Box) (HeadVar__2_2));
      }
      parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(HeadVar__1_1, ErrorContext_36, Types0_32, &Types_37, STATE_VARIABLE_Info_27_39, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_28_40, &STATE_VARIABLE_Specs_30_30);
      {
        Constraint_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraint_21, 0) = ((MR_Box) (ClassName_35));
        MR_hl_field(0, Constraint_21, 1) = ((MR_Box) (Types_37));
      }
      {
        HeadVar__4_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_46, 0) = ((MR_Box) (Constraint_21));
        MR_hl_field(1, HeadVar__4_46, 1) = NULL;
      }
      AddrConstraints_44 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_46, (MR_Integer) 1)));
      *AddrOfHeadVar__4_45 = HeadVar__4_46;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints0_20;
      next_value_of_AddrOfHeadVar__4_45 = AddrConstraints_44;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_45 = next_value_of_AddrOfHeadVar__4_45;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word Arg0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Arg_27;
    MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word MaybeFieldName_39 = ((MR_Word) ((MR_hl_field(0, Arg0_25, (MR_Integer) 0))));
    MR_Word Type0_40 = ((MR_Word) ((MR_hl_field(0, Arg0_25, (MR_Integer) 1))));
    MR_Word Context_41 = ((MR_Word) ((MR_hl_field(0, Arg0_25, (MR_Integer) 2))));
    MR_Word ErrorContext_42;
    MR_Word Type_43;
    MR_Word * AddrArgs_44;

    {
      ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_41));
      MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (ContainingTypeCtor_2));
      MR_hl_field(3, ErrorContext_42, 3) = ((MR_Box) (FunctionSymbol_3));
      MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (CurArgNum_31));
      MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (MaybeFieldName_39));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_42, Type0_40, &Type_43, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_38_38);
    {
      Arg_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_27, 0) = ((MR_Box) (MaybeFieldName_39));
      MR_hl_field(0, Arg_27, 1) = ((MR_Box) (Type_43));
      MR_hl_field(0, Arg_27, 2) = ((MR_Box) (Context_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_27));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrArgs_44 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__6_6, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_10_p_0(HeadVar__1_1, ContainingTypeCtor_2, FunctionSymbol_3, CurArgNum_31, Args0_26, AddrArgs_44, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_8, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_10);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_45,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__6_45 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Arg0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Arg_27;
      MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Specs_38_38;
      MR_Word MaybeFieldName_39 = ((MR_Word) ((MR_hl_field(0, Arg0_25, (MR_Integer) 0))));
      MR_Word Type0_40 = ((MR_Word) ((MR_hl_field(0, Arg0_25, (MR_Integer) 1))));
      MR_Word Context_41 = ((MR_Word) ((MR_hl_field(0, Arg0_25, (MR_Integer) 2))));
      MR_Word ErrorContext_42;
      MR_Word Type_43;
      MR_Word * AddrArgs_44;
      MR_Word HeadVar__6_46;
      MR_Integer next_value_of_LastArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word * next_value_of_AddrOfHeadVar__6_45;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      {
        ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_41));
        MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (ContainingTypeCtor_2));
        MR_hl_field(3, ErrorContext_42, 3) = ((MR_Box) (FunctionSymbol_3));
        MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (CurArgNum_31));
        MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (MaybeFieldName_39));
      }
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_42, Type0_40, &Type_43, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_38_38);
      {
        Arg_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arg_27, 0) = ((MR_Box) (MaybeFieldName_39));
        MR_hl_field(0, Arg_27, 1) = ((MR_Box) (Type_43));
        MR_hl_field(0, Arg_27, 2) = ((MR_Box) (Context_41));
      }
      {
        HeadVar__6_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__6_46, 0) = ((MR_Box) (Arg_27));
        MR_hl_field(1, HeadVar__6_46, 1) = NULL;
      }
      AddrArgs_44 = (MR_Word *) (&(MR_hl_field(1, HeadVar__6_46, (MR_Integer) 1)));
      *AddrOfHeadVar__6_45 = HeadVar__6_46;
      // direct tailcall eliminated
      ;
      next_value_of_LastArgNum_4 = CurArgNum_31;
      next_value_of_HeadVar__5_5 = Args0_26;
      next_value_of_AddrOfHeadVar__6_45 = AddrArgs_44;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_37_37;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_38_38;
      LastArgNum_4 = next_value_of_LastArgNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      AddrOfHeadVar__6_45 = next_value_of_AddrOfHeadVar__6_45;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_lambda_mode_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Mode0_11,
  MR_Word * Mode_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word ErrorContext_15;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_10));
  }
  if (((MR_tag((MR_Word) Mode0_11)) == (MR_Integer) 0))
  {
    MR_Word InstA0_20 = ((MR_Word) ((MR_hl_field(0, Mode0_11, (MR_Integer) 0))));
    MR_Word InstB0_21 = ((MR_Word) ((MR_hl_field(0, Mode0_11, (MR_Integer) 1))));
    MR_Word InstA_22;
    MR_Word InstB_23;
    MR_Word STATE_VARIABLE_Info_29_30;
    MR_Word STATE_VARIABLE_Specs_30_31;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_15, InstA0_20, &InstA_22, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_29_30, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_30_31);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_15, InstB0_21, &InstB_23, STATE_VARIABLE_Info_29_30, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_30_31, STATE_VARIABLE_Specs_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstA_22));
      MR_hl_field(0, base, 1) = ((MR_Box) (InstB_23));
    }
  }
  else
  {
    MR_Word SymName0_24 = ((MR_Word) ((MR_hl_field(1, Mode0_11, (MR_Integer) 0))));
    MR_Word Insts0_25 = ((MR_Word) ((MR_hl_field(1, Mode0_11, (MR_Integer) 1))));
    MR_Word Insts_26;
    MR_Integer Arity_27;
    MR_Word Modes_28;
    MR_Word SymName_29;
    MR_Word STATE_VARIABLE_Info_33_32;
    MR_Word STATE_VARIABLE_Specs_34_33;
    MR_Word Var_35;

    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_15, Insts0_25, &Insts_26, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_33_32, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_34_33);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_26, &Arity_27);
    parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_32, &Modes_28);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (SymName0_24));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (Arity_27));
    }
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_15, Modes_28, (MR_Integer) 2, Var_35, &SymName_29, STATE_VARIABLE_Info_33_32, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_34_33, STATE_VARIABLE_Specs_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_26));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_clause_mode_list_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Modes0_11,
  MR_Word * Modes_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word ErrorContext_15;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_10));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_15, Modes0_11, Modes_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_qualification_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Type0_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word ErrorContext_15;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_10));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_9, ErrorContext_15, Type0_11, Type_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * AddrOfType_83,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfType_83 = Type0_11;
          *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(1, Type0_11, (MR_Integer) 0))));
          MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(1, Type0_11, (MR_Integer) 1))));
          MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, Type0_11, (MR_Integer) 2))));
          MR_Integer Arity_20;
          MR_Word TypeCtorId0_21;
          MR_Word Types_22;
          MR_Word SymName_23;
          MR_Word STATE_VARIABLE_Info_40_40;
          MR_Word STATE_VARIABLE_Specs_41_41;
          MR_Word * AddrArgs_80;
          MR_Word Type_85;

          Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
          {
            TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
            MR_hl_field(0, TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
          }
          parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_35, &Types_22);
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_41_41);
          {
            Type_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_85, 0) = ((MR_Box) (SymName_23));
            MR_hl_field(1, Type_85, 1) = NULL;
            MR_hl_field(1, Type_85, 2) = ((MR_Box) (Kind_19));
          }
          AddrArgs_80 = (MR_Word *) (&(MR_hl_field(1, Type_85, (MR_Integer) 1)));
          *AddrOfType_83 = Type_85;
          parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_80, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_38);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(2, Type0_11, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[0]), STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[1]), STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_26 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);
                MR_String IntModule_27;
                MR_Word Var_44;

                parse_tree__prog_data__int_type_module_name_2_p_0(IntType_26, &IntModule_27);
                {
                  Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_44, 0) = ((MR_Box) (IntModule_27));
                }
                parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, Var_44, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              }
              break;
          }
          *AddrOfType_83 = Type0_11;
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_64 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
              MR_Word Kind_65 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word * AddrArgs_82;
              MR_Word Type_92;

              {
                Type_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Type_92, 1) = NULL;
                MR_hl_field(3, Type_92, 2) = ((MR_Box) (Kind_65));
              }
              AddrArgs_82 = (MR_Word *) (&(MR_hl_field(3, Type_92, (MR_Integer) 1)));
              *AddrOfType_83 = Type_92;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_64, AddrArgs_82, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_28 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo0_29 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
              MR_Word Purity_30 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word HOInstInfo_31;
              MR_Word STATE_VARIABLE_Info_52_52;
              MR_Word STATE_VARIABLE_Specs_53_53;
              MR_Word Args0_62 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word Args_63;
              MR_Word Type_88;

              parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_62, &Args_63, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_53_53);
              if ((HOInstInfo0_29 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                HOInstInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_52_52;
                *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_53_53;
              }
              else
              {
                MR_Word PredOrFunc_72;
                MR_Word Modes0_73;
                MR_Word MaybeArgRegs_74;
                MR_Word Detism_75;
                MR_Word Modes_76;
                MR_Word Var_77 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_29), (MR_Integer) 1));
                MR_Word Var_78;

                PredOrFunc_72 = ((MR_Unsigned) ((MR_hl_field(0, Var_77, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes0_73 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
                MaybeArgRegs_74 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 2))));
                Detism_75 = ((MR_Unsigned) ((MR_hl_field(0, Var_77, (MR_Integer) 3))) & (MR_Integer) 7);
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_73, &Modes_76, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_38);
                {
                  Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_78, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_72));
                  MR_hl_field(0, Var_78, 1) = ((MR_Box) (Modes_76));
                  MR_hl_field(0, Var_78, 2) = ((MR_Box) (MaybeArgRegs_74));
                  MR_hl_field(0, Var_78, 3) = (MR_Box) ((MR_Unsigned) (Detism_75));
                }
                HOInstInfo_31 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_78)));
              }
              {
                Type_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Type_88, 1) = (MR_Box) ((MR_Unsigned) (PorF_28));
                MR_hl_field(3, Type_88, 2) = ((MR_Box) (Args_63));
                MR_hl_field(3, Type_88, 3) = ((MR_Box) (HOInstInfo_31));
                MR_hl_field(3, Type_88, 4) = (MR_Box) ((MR_Unsigned) (Purity_30));
              }
              *AddrOfType_83 = Type_88;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
              MR_Word Args0_67 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word Kind_68 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
              MR_Word Type_12;
              MR_Word * AddrArgs_79;

              {
                Type_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Type_12, 1) = ((MR_Box) (Var_32));
                MR_hl_field(3, Type_12, 2) = NULL;
                MR_hl_field(3, Type_12, 3) = ((MR_Box) (Kind_68));
              }
              AddrArgs_79 = (MR_Word *) (&(MR_hl_field(3, Type_12, (MR_Integer) 2)));
              *AddrOfType_83 = Type_12;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_67, AddrArgs_79, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType0_33 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
              MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word * AddrSubType_81;
              MR_Word Type_89;
              MR_Word next_value_of_Type0_11;
              MR_Word * next_value_of_AddrOfType_83;

              {
                Type_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_89, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Type_89, 1) = NULL;
                MR_hl_field(3, Type_89, 2) = ((MR_Box) (Kind_70));
              }
              AddrSubType_81 = (MR_Word *) (&(MR_hl_field(3, Type_89, (MR_Integer) 1)));
              *AddrOfType_83 = Type_89;
              // direct tailcall eliminated
              ;
              next_value_of_Type0_11 = SubType0_33;
              next_value_of_AddrOfType_83 = AddrSubType_81;
              Type0_11 = next_value_of_Type0_11;
              AddrOfType_83 = next_value_of_AddrOfType_83;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Type_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrTypes_31;
      MR_Word HeadVar__4_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_32;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_33, 0) = ((MR_Box) (Type_21));
        MR_hl_field(1, HeadVar__4_33, 1) = NULL;
      }
      AddrTypes_31 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_33, (MR_Integer) 1)));
      *AddrOfHeadVar__4_32 = HeadVar__4_33;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types0_20;
      next_value_of_AddrOfHeadVar__4_32 = AddrTypes_31;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_32 = next_value_of_AddrOfHeadVar__4_32;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  switch (MR_tag((MR_Word) Type0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_12 = Type0_11;
        *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(1, Type0_11, (MR_Integer) 0))));
        MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(1, Type0_11, (MR_Integer) 1))));
        MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(1, Type0_11, (MR_Integer) 2))));
        MR_Integer Arity_20;
        MR_Word TypeCtorId0_21;
        MR_Word Types_22;
        MR_Word SymName_23;
        MR_Word STATE_VARIABLE_Info_40_40;
        MR_Word STATE_VARIABLE_Specs_41_41;
        MR_Word * AddrArgs_80;

        Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
        {
          TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
          MR_hl_field(0, TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
        }
        parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_35, &Types_22);
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_41_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(1, base, 1) = NULL;
          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_19));
        }
        AddrArgs_80 = (MR_Word *) (&(MR_hl_field(1, *Type_12, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_80, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_38);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(2, Type0_11, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[0]), STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
                break;
              case (MR_Integer) 1:
                parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[1]), STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_26 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_String IntModule_27;
              MR_Word Var_44;

              parse_tree__prog_data__int_type_module_name_2_p_0(IntType_26, &IntModule_27);
              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_44, 0) = ((MR_Box) (IntModule_27));
              }
              parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, Var_44, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
            }
            break;
        }
        *Type_12 = Type0_11;
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args0_64 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
            MR_Word Kind_65 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_82;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = NULL;
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_65));
            }
            AddrArgs_82 = (MR_Word *) (&(MR_hl_field(3, *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_64, AddrArgs_82, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_28 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo0_29 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
            MR_Word Purity_30 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word HOInstInfo_31;
            MR_Word STATE_VARIABLE_Info_52_52;
            MR_Word STATE_VARIABLE_Specs_53_53;
            MR_Word Args0_62 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word Args_63;

            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_62, &Args_63, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_53_53);
            if ((HOInstInfo0_29 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HOInstInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_52_52;
              *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_53_53;
            }
            else
            {
              MR_Word PredOrFunc_72;
              MR_Word Modes0_73;
              MR_Word MaybeArgRegs_74;
              MR_Word Detism_75;
              MR_Word Modes_76;
              MR_Word Var_77 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_29), (MR_Integer) 1));
              MR_Word Var_78;

              PredOrFunc_72 = ((MR_Unsigned) ((MR_hl_field(0, Var_77, (MR_Integer) 0))) & (MR_Integer) 1);
              Modes0_73 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
              MaybeArgRegs_74 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 2))));
              Detism_75 = ((MR_Unsigned) ((MR_hl_field(0, Var_77, (MR_Integer) 3))) & (MR_Integer) 7);
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_73, &Modes_76, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_38);
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_72));
                MR_hl_field(0, Var_78, 1) = ((MR_Box) (Modes_76));
                MR_hl_field(0, Var_78, 2) = ((MR_Box) (MaybeArgRegs_74));
                MR_hl_field(0, Var_78, 3) = (MR_Box) ((MR_Unsigned) (Detism_75));
              }
              HOInstInfo_31 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_78)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_28));
              MR_hl_field(3, base, 2) = ((MR_Box) (Args_63));
              MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_31));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_30));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_32 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
            MR_Word Args0_67 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word Kind_68 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
            MR_Word * AddrArgs_79;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_32));
              MR_hl_field(3, base, 2) = NULL;
              MR_hl_field(3, base, 3) = ((MR_Box) (Kind_68));
            }
            AddrArgs_79 = (MR_Word *) (&(MR_hl_field(3, *Type_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_67, AddrArgs_79, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType0_33 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
            MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word * AddrSubType_81;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = NULL;
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_70));
            }
            AddrSubType_81 = (MR_Word *) (&(MR_hl_field(3, *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_8_p_0(InInt_9, ErrorContext_10, SubType0_33, AddrSubType_81, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrTypes_31;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypes_31 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_20, AddrTypes_31, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_109,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfInst_109 = Inst0_11;
          *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_51 = ((MR_Word) ((MR_hl_field(1, Inst0_11, (MR_Integer) 1))));
          MR_Word HOInstInfo_52;
          MR_Word Inst_118;

          if ((HOInstInfo0_51 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HOInstInfo_52 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
          }
          else
          {
            MR_Word PredOrFunc_100;
            MR_Word Modes0_101;
            MR_Word MaybeArgRegs_102;
            MR_Word Detism_103;
            MR_Word Modes_104;
            MR_Word Var_105 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_51), (MR_Integer) 1));
            MR_Word Var_106;

            PredOrFunc_100 = ((MR_Unsigned) ((MR_hl_field(0, Var_105, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes0_101 = ((MR_Word) ((MR_hl_field(0, Var_105, (MR_Integer) 1))));
            MaybeArgRegs_102 = ((MR_Word) ((MR_hl_field(0, Var_105, (MR_Integer) 2))));
            Detism_103 = ((MR_Unsigned) ((MR_hl_field(0, Var_105, (MR_Integer) 3))) & (MR_Integer) 7);
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_101, &Modes_104, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
            {
              Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_106, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_100));
              MR_hl_field(0, Var_106, 1) = ((MR_Box) (Modes_104));
              MR_hl_field(0, Var_106, 2) = ((MR_Box) (MaybeArgRegs_102));
              MR_hl_field(0, Var_106, 3) = (MR_Box) ((MR_Unsigned) (Detism_103));
            }
            HOInstInfo_52 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_106)));
          }
          {
            Inst_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Inst_118, 0) = (MR_Box) ((MR_Unsigned) (Uniq_50));
            MR_hl_field(1, Inst_118, 1) = ((MR_Box) (HOInstInfo_52));
          }
          *AddrOfInst_109 = Inst_118;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults0_19 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 1))));
          MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 2))));
          MR_Word Uniq_49 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word * AddrBoundInsts_107;
          MR_Word Inst_110;

          switch (MR_tag((MR_Word) InstResults0_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults0_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
                return;
              }
              break;
          }
          {
            Inst_110 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Inst_110, 0) = (MR_Box) ((MR_Unsigned) (Uniq_49));
            MR_hl_field(2, Inst_110, 1) = ((MR_Box) (InstResults0_19));
            MR_hl_field(2, Inst_110, 2) = NULL;
          }
          AddrBoundInsts_107 = (MR_Word *) (&(MR_hl_field(2, Inst_110, (MR_Integer) 2)));
          *AddrOfInst_109 = Inst_110;
          parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_20, AddrBoundInsts_107, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName0_31 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
              MR_Word InstName_32;
              MR_Word Inst_116;

              switch (MR_tag((MR_Word) InstName0_31)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SymName0_60 = ((MR_Word) ((MR_hl_field(0, InstName0_31, (MR_Integer) 0))));
                    MR_Word Insts0_61 = ((MR_Word) ((MR_hl_field(0, InstName0_31, (MR_Integer) 1))));
                    MR_Word Insts_62;
                    MR_Word SymName_66;
                    MR_Word STATE_VARIABLE_Info_48_89;
                    MR_Word STATE_VARIABLE_Specs_49_90;
                    MR_String Var_91;

                    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_61, &Insts_62, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_48_89, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_49_90);
                    succeeded = ((MR_tag((MR_Word) SymName0_60)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_91 = ((MR_String) ((MR_hl_field(0, SymName0_60, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_91, (MR_String) "") == 0);
                    }
                    if (succeeded)
                    {
                      MR_Word InstCtor_63;
                      MR_Word UndefInsts0_64;
                      MR_Word UndefInsts_65;
                      MR_Integer Var_92;

                      parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_60, Insts_62, ErrorContext_10, STATE_VARIABLE_Specs_49_90, STATE_VARIABLE_Specs_36);
                      Var_92 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_61);
                      {
                        InstCtor_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, InstCtor_63, 0) = ((MR_Box) (SymName0_60));
                        MR_hl_field(0, InstCtor_63, 1) = ((MR_Box) (Var_92));
                      }
                      parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_48_89, &UndefInsts0_64);
                      mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_63)), UndefInsts0_64, &UndefInsts_65);
                      parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(UndefInsts_65, STATE_VARIABLE_Info_48_89, STATE_VARIABLE_Info_34);
                      SymName_66 = SymName0_60;
                    }
                    else
                    {
                      MR_Integer Arity_67;
                      MR_Word InstIdSet_68;
                      MR_Word Var_94;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_61, &Arity_67);
                      parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_48_89, &InstIdSet_68);
                      {
                        Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_94, 0) = ((MR_Box) (SymName0_60));
                        MR_hl_field(0, Var_94, 1) = ((MR_Box) (Arity_67));
                      }
                      parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_68, (MR_Integer) 1, Var_94, &SymName_66, STATE_VARIABLE_Info_48_89, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_49_90, STATE_VARIABLE_Specs_36);
                    }
                    {
                      InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InstName_32, 0) = ((MR_Box) (SymName_66));
                      MR_hl_field(0, InstName_32, 1) = ((MR_Box) (Insts_62));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
                    return;
                  }
                  break;
              }
              {
                Inst_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Inst_116, 1) = ((MR_Box) (InstName_32));
              }
              *AddrOfInst_109 = Inst_116;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
              MR_Word SubInst0_29 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrSubInst_108;
              MR_Word Inst_113;
              MR_Word next_value_of_Inst0_11;
              MR_Word * next_value_of_AddrOfInst_109;

              {
                Inst_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Inst_113, 1) = ((MR_Box) (Vars_28));
                MR_hl_field(3, Inst_113, 2) = NULL;
              }
              AddrSubInst_108 = (MR_Word *) (&(MR_hl_field(3, Inst_113, (MR_Integer) 2)));
              *AddrOfInst_109 = Inst_113;
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_11 = SubInst0_29;
              next_value_of_AddrOfInst_109 = AddrSubInst_108;
              Inst0_11 = next_value_of_Inst0_11;
              AddrOfInst_109 = next_value_of_AddrOfInst_109;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Inst_12;
              MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
              MR_Word HOInstInfo_17;

              if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
                *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
              }
              else
              {
                MR_Word PredOrFunc_53;
                MR_Word Modes0_54;
                MR_Word MaybeArgRegs_55;
                MR_Word Detism_56;
                MR_Word Modes_57;
                MR_Word Var_58 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
                MR_Word Var_59;

                PredOrFunc_53 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes0_54 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
                MaybeArgRegs_55 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 2))));
                Detism_56 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 3))) & (MR_Integer) 7);
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_54, &Modes_57, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
                {
                  Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_59, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
                  MR_hl_field(0, Var_59, 1) = ((MR_Box) (Modes_57));
                  MR_hl_field(0, Var_59, 2) = ((MR_Box) (MaybeArgRegs_55));
                  MR_hl_field(0, Var_59, 3) = (MR_Box) ((MR_Unsigned) (Detism_56));
                }
                HOInstInfo_17 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_59)));
              }
              {
                Inst_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Inst_12, 1) = (MR_Box) ((MR_Unsigned) (Uniq_15));
                MR_hl_field(3, Inst_12, 2) = ((MR_Box) (HOInstInfo_17));
              }
              *AddrOfInst_109 = Inst_12;
            }
            break;
          case (MR_Integer) 3:
            {
              *AddrOfInst_109 = Inst0_11;
              *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
              *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_49,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_49 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Mode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrModes_48;
      MR_Word HeadVar__4_50;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_49;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) Mode0_19)) == (MR_Integer) 0))
      {
        MR_Word InstA0_31 = ((MR_Word) ((MR_hl_field(0, Mode0_19, (MR_Integer) 0))));
        MR_Word InstB0_32 = ((MR_Word) ((MR_hl_field(0, Mode0_19, (MR_Integer) 1))));
        MR_Word InstA_33;
        MR_Word InstB_34;
        MR_Word STATE_VARIABLE_Info_29_41;
        MR_Word STATE_VARIABLE_Specs_30_42;

        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_31, &InstA_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_41, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_42);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_32, &InstB_34, STATE_VARIABLE_Info_29_41, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_30_42, &STATE_VARIABLE_Specs_30_30);
        {
          Mode_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_21, 0) = ((MR_Box) (InstA_33));
          MR_hl_field(0, Mode_21, 1) = ((MR_Box) (InstB_34));
        }
      }
      else
      {
        MR_Word SymName0_35 = ((MR_Word) ((MR_hl_field(1, Mode0_19, (MR_Integer) 0))));
        MR_Word Insts0_36 = ((MR_Word) ((MR_hl_field(1, Mode0_19, (MR_Integer) 1))));
        MR_Word Insts_37;
        MR_Integer Arity_38;
        MR_Word Modes_39;
        MR_Word SymName_40;
        MR_Word STATE_VARIABLE_Info_33_43;
        MR_Word STATE_VARIABLE_Specs_34_44;
        MR_Word Var_46;

        parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_36, &Insts_37, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_43, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_34_44);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_37, &Arity_38);
        parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_43, &Modes_39);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (SymName0_35));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (Arity_38));
        }
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, HeadVar__2_2, Modes_39, (MR_Integer) 2, Var_46, &SymName_40, STATE_VARIABLE_Info_33_43, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_44, &STATE_VARIABLE_Specs_30_30);
        {
          Mode_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mode_21, 0) = ((MR_Box) (SymName_40));
          MR_hl_field(1, Mode_21, 1) = ((MR_Box) (Insts_37));
        }
      }
      {
        HeadVar__4_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_50, 0) = ((MR_Box) (Mode_21));
        MR_hl_field(1, HeadVar__4_50, 1) = NULL;
      }
      AddrModes_48 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_50, (MR_Integer) 1)));
      *AddrOfHeadVar__4_49 = HeadVar__4_50;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Modes0_20;
      next_value_of_AddrOfHeadVar__4_49 = AddrModes_48;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_49 = next_value_of_AddrOfHeadVar__4_49;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_32,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Inst0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Inst_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrInsts_31;
      MR_Word HeadVar__4_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_32;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_19, &Inst_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_33, 0) = ((MR_Box) (Inst_21));
        MR_hl_field(1, HeadVar__4_33, 1) = NULL;
      }
      AddrInsts_31 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_33, (MR_Integer) 1)));
      *AddrOfHeadVar__4_32 = HeadVar__4_33;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Insts0_20;
      next_value_of_AddrOfHeadVar__4_32 = AddrInsts_31;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_32 = next_value_of_AddrOfHeadVar__4_32;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  recompilation__record_uses__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_42,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_42 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word BoundInst0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word BoundInst_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ConsId_31 = ((MR_Word) ((MR_hl_field(0, BoundInst0_19, (MR_Integer) 0))));
      MR_Word Insts0_32 = ((MR_Word) ((MR_hl_field(0, BoundInst0_19, (MR_Integer) 1))));
      MR_Word Insts_37;
      MR_Word STATE_VARIABLE_Info_49_39;
      MR_Word * AddrBoundInsts_41;
      MR_Word HeadVar__4_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_42;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      switch (MR_tag((MR_Word) ConsId_31)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ConsId_31, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 3:
              {
                MR_Word Name_33 = ((MR_Word) ((MR_hl_field(3, ConsId_31, (MR_Integer) 1))));
                MR_Integer Arity_34 = ((MR_Integer) ((MR_hl_field(3, ConsId_31, (MR_Integer) 2))));
                MR_Word Id_36;
                MR_Word Var_38;

                {
                  Id_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Id_36, 0) = ((MR_Box) (Name_33));
                  MR_hl_field(0, Id_36, 1) = ((MR_Box) (Arity_34));
                }
                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_11[0]));
                  MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0_1));
                  MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_38, 3) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(0, Var_38, 4) = ((MR_Box) (Id_36));
                  MR_hl_field(0, Var_38, 5) = ((MR_Box) (Id_36));
                }
                parse_tree__module_qual__mq_info__update_recompilation_info_3_p_0(Var_38, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_49_39);
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 5:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 13:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 14:
              STATE_VARIABLE_Info_49_39 = STATE_VARIABLE_Info_0_5;
              break;
          }
          break;
      }
      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_32, &Insts_37, STATE_VARIABLE_Info_49_39, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        BoundInst_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundInst_21, 0) = ((MR_Box) (ConsId_31));
        MR_hl_field(0, BoundInst_21, 1) = ((MR_Box) (Insts_37));
      }
      {
        HeadVar__4_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_43, 0) = ((MR_Box) (BoundInst_21));
        MR_hl_field(1, HeadVar__4_43, 1) = NULL;
      }
      AddrBoundInsts_41 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_43, (MR_Integer) 1)));
      *AddrOfHeadVar__4_42 = HeadVar__4_43;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BoundInsts0_20;
      next_value_of_AddrOfHeadVar__4_42 = AddrBoundInsts_41;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_42 = next_value_of_AddrOfHeadVar__4_42;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Mode_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrModes_48;

    if (((MR_tag((MR_Word) Mode0_19)) == (MR_Integer) 0))
    {
      MR_Word InstA0_31 = ((MR_Word) ((MR_hl_field(0, Mode0_19, (MR_Integer) 0))));
      MR_Word InstB0_32 = ((MR_Word) ((MR_hl_field(0, Mode0_19, (MR_Integer) 1))));
      MR_Word InstA_33;
      MR_Word InstB_34;
      MR_Word STATE_VARIABLE_Info_29_41;
      MR_Word STATE_VARIABLE_Specs_30_42;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_31, &InstA_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_41, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_42);
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_32, &InstB_34, STATE_VARIABLE_Info_29_41, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_30_42, &STATE_VARIABLE_Specs_30_30);
      {
        Mode_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_21, 0) = ((MR_Box) (InstA_33));
        MR_hl_field(0, Mode_21, 1) = ((MR_Box) (InstB_34));
      }
    }
    else
    {
      MR_Word SymName0_35 = ((MR_Word) ((MR_hl_field(1, Mode0_19, (MR_Integer) 0))));
      MR_Word Insts0_36 = ((MR_Word) ((MR_hl_field(1, Mode0_19, (MR_Integer) 1))));
      MR_Word Insts_37;
      MR_Integer Arity_38;
      MR_Word Modes_39;
      MR_Word SymName_40;
      MR_Word STATE_VARIABLE_Info_33_43;
      MR_Word STATE_VARIABLE_Specs_34_44;
      MR_Word Var_46;

      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_36, &Insts_37, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_43, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_34_44);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_37, &Arity_38);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_43, &Modes_39);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (SymName0_35));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (Arity_38));
      }
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, HeadVar__2_2, Modes_39, (MR_Integer) 2, Var_46, &SymName_40, STATE_VARIABLE_Info_33_43, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_34_44, &STATE_VARIABLE_Specs_30_30);
      {
        Mode_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_21, 0) = ((MR_Box) (SymName_40));
        MR_hl_field(1, Mode_21, 1) = ((MR_Box) (Insts_37));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrModes_48 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_20, AddrModes_48, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Inst0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Inst_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrInsts_31;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_19, &Inst_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrInsts_31 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_20, AddrInsts_31, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_12 = Inst0_11;
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
        *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_51 = ((MR_Word) ((MR_hl_field(1, Inst0_11, (MR_Integer) 1))));
        MR_Word HOInstInfo_52;

        if ((HOInstInfo0_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HOInstInfo_52 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
        }
        else
        {
          MR_Word PredOrFunc_100;
          MR_Word Modes0_101;
          MR_Word MaybeArgRegs_102;
          MR_Word Detism_103;
          MR_Word Modes_104;
          MR_Word Var_105 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_51), (MR_Integer) 1));
          MR_Word Var_106;

          PredOrFunc_100 = ((MR_Unsigned) ((MR_hl_field(0, Var_105, (MR_Integer) 0))) & (MR_Integer) 1);
          Modes0_101 = ((MR_Word) ((MR_hl_field(0, Var_105, (MR_Integer) 1))));
          MaybeArgRegs_102 = ((MR_Word) ((MR_hl_field(0, Var_105, (MR_Integer) 2))));
          Detism_103 = ((MR_Unsigned) ((MR_hl_field(0, Var_105, (MR_Integer) 3))) & (MR_Integer) 7);
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_101, &Modes_104, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_106, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_100));
            MR_hl_field(0, Var_106, 1) = ((MR_Box) (Modes_104));
            MR_hl_field(0, Var_106, 2) = ((MR_Box) (MaybeArgRegs_102));
            MR_hl_field(0, Var_106, 3) = (MR_Box) ((MR_Unsigned) (Detism_103));
          }
          HOInstInfo_52 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_106)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_50));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_52));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults0_19 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 1))));
        MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 2))));
        MR_Word Uniq_49 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word * AddrBoundInsts_107;

        switch (MR_tag((MR_Word) InstResults0_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstResults0_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
              return;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_49));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults0_19));
          MR_hl_field(2, base, 2) = NULL;
        }
        AddrBoundInsts_107 = (MR_Word *) (&(MR_hl_field(2, *Inst_12, (MR_Integer) 2)));
        parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_20, AddrBoundInsts_107, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_31 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word InstName_32;

            switch (MR_tag((MR_Word) InstName0_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SymName0_60 = ((MR_Word) ((MR_hl_field(0, InstName0_31, (MR_Integer) 0))));
                  MR_Word Insts0_61 = ((MR_Word) ((MR_hl_field(0, InstName0_31, (MR_Integer) 1))));
                  MR_Word Insts_62;
                  MR_Word SymName_66;
                  MR_Word STATE_VARIABLE_Info_48_89;
                  MR_Word STATE_VARIABLE_Specs_49_90;
                  MR_String Var_91;

                  parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_61, &Insts_62, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_48_89, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_49_90);
                  succeeded = ((MR_tag((MR_Word) SymName0_60)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_91 = ((MR_String) ((MR_hl_field(0, SymName0_60, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_91, (MR_String) "") == 0);
                  }
                  if (succeeded)
                  {
                    MR_Word InstCtor_63;
                    MR_Word UndefInsts0_64;
                    MR_Word UndefInsts_65;
                    MR_Integer Var_92;

                    parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_60, Insts_62, ErrorContext_10, STATE_VARIABLE_Specs_49_90, STATE_VARIABLE_Specs_36);
                    Var_92 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_61);
                    {
                      InstCtor_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InstCtor_63, 0) = ((MR_Box) (SymName0_60));
                      MR_hl_field(0, InstCtor_63, 1) = ((MR_Box) (Var_92));
                    }
                    parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_48_89, &UndefInsts0_64);
                    mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_63)), UndefInsts0_64, &UndefInsts_65);
                    parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(UndefInsts_65, STATE_VARIABLE_Info_48_89, STATE_VARIABLE_Info_34);
                    SymName_66 = SymName0_60;
                  }
                  else
                  {
                    MR_Integer Arity_67;
                    MR_Word InstIdSet_68;
                    MR_Word Var_94;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_61, &Arity_67);
                    parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_48_89, &InstIdSet_68);
                    {
                      Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_94, 0) = ((MR_Box) (SymName0_60));
                      MR_hl_field(0, Var_94, 1) = ((MR_Box) (Arity_67));
                    }
                    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_68, (MR_Integer) 1, Var_94, &SymName_66, STATE_VARIABLE_Info_48_89, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_49_90, STATE_VARIABLE_Specs_36);
                  }
                  {
                    InstName_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, InstName_32, 0) = ((MR_Box) (SymName_66));
                    MR_hl_field(0, InstName_32, 1) = ((MR_Box) (Insts_62));
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
                  return;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstName_32));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word SubInst0_29 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrSubInst_108;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_28));
              MR_hl_field(3, base, 2) = NULL;
            }
            AddrSubInst_108 = (MR_Word *) (&(MR_hl_field(3, *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(InInt_9, ErrorContext_10, SubInst0_29, AddrSubInst_108, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word HOInstInfo_17;

            if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
              *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
            }
            else
            {
              MR_Word PredOrFunc_53;
              MR_Word Modes0_54;
              MR_Word MaybeArgRegs_55;
              MR_Word Detism_56;
              MR_Word Modes_57;
              MR_Word Var_58 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
              MR_Word Var_59;

              PredOrFunc_53 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 0))) & (MR_Integer) 1);
              Modes0_54 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
              MaybeArgRegs_55 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 2))));
              Detism_56 = ((MR_Unsigned) ((MR_hl_field(0, Var_58, (MR_Integer) 3))) & (MR_Integer) 7);
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_54, &Modes_57, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_59, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
                MR_hl_field(0, Var_59, 1) = ((MR_Box) (Modes_57));
                MR_hl_field(0, Var_59, 2) = ((MR_Box) (MaybeArgRegs_55));
                MR_hl_field(0, Var_59, 3) = (MR_Box) ((MR_Unsigned) (Detism_56));
              }
              HOInstInfo_17 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_59)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_15));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_ItemTypeRepnInfo_12;
  MR_Word conv26_STATE_VARIABLE_Info_35;
  MR_Word conv25_STATE_VARIABLE_Specs_37;

  parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv27_ItemTypeRepnInfo_12, ((MR_Word) (wrapper_arg_3)), &conv26_STATE_VARIABLE_Info_35, ((MR_Word) (wrapper_arg_5)), &conv25_STATE_VARIABLE_Specs_37);
  *wrapper_arg_2 = ((MR_Box) (conv27_ItemTypeRepnInfo_12));
  *wrapper_arg_4 = ((MR_Box) (conv26_STATE_VARIABLE_Info_35));
  *wrapper_arg_6 = ((MR_Box) (conv25_STATE_VARIABLE_Specs_37));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_ItemInstance_10;
  MR_Word conv21_STATE_VARIABLE_Info_32;
  MR_Word conv20_STATE_VARIABLE_Specs_34;

  parse_tree__module_qual__qualify_items__module_qualify_item_abstract_instance_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv22_ItemInstance_10, ((MR_Word) (wrapper_arg_3)), &conv21_STATE_VARIABLE_Info_32, ((MR_Word) (wrapper_arg_5)), &conv20_STATE_VARIABLE_Specs_34);
  *wrapper_arg_2 = ((MR_Box) (conv22_ItemInstance_10));
  *wrapper_arg_4 = ((MR_Box) (conv21_STATE_VARIABLE_Info_32));
  *wrapper_arg_6 = ((MR_Box) (conv20_STATE_VARIABLE_Specs_34));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_ItemTypeClass_10;
  MR_Word conv16_STATE_VARIABLE_Info_26;
  MR_Word conv15_STATE_VARIABLE_Specs_28;

  parse_tree__module_qual__qualify_items__module_qualify_item_abstract_typeclass_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_ItemTypeClass_10, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_Info_26, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Specs_28);
  *wrapper_arg_2 = ((MR_Box) (conv17_ItemTypeClass_10));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_Info_26));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_28));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_CheckedDefn_8;
  MR_Word conv11_STATE_VARIABLE_Info_25;
  MR_Word conv10_STATE_VARIABLE_Specs_27;

  parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv12_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Info_25, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_27);
  *wrapper_arg_2 = ((MR_Box) (conv12_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Info_25));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_CheckedDefn_8;
  MR_Word conv6_STATE_VARIABLE_Info_25;
  MR_Word conv5_STATE_VARIABLE_Specs_27;

  parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv7_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Info_25, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_Specs_27);
  *wrapper_arg_2 = ((MR_Box) (conv7_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Info_25));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_CheckedDefn_8;
  MR_Word conv1_STATE_VARIABLE_Info_50;
  MR_Word conv0_STATE_VARIABLE_Specs_52;

  parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_50, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_52);
  *wrapper_arg_2 = ((MR_Box) (conv2_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_50));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_52));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word OrigParseTreeInt3_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 0))));
  MR_Word Info0_11;
  MR_Word Info1_12;
  MR_Word ModuleName_27;
  MR_Word ModuleNameContext_28;
  MR_Word InclMap_29;
  MR_Word ImportUseMap_30;
  MR_Word IntTypeDefnMap0_31;
  MR_Word IntInstDefnMap0_32;
  MR_Word IntModeDefnMap0_33;
  MR_Word IntTypeClasses0_34;
  MR_Word IntInstances0_35;
  MR_Word IntTypeRepns0_36;
  MR_Word IntTypeDefnMap_38;
  MR_Word IntInstDefnMap_39;
  MR_Word IntModeDefnMap_40;
  MR_Word IntTypeClasses_41;
  MR_Word IntInstances_42;
  MR_Word IntTypeRepns_43;
  MR_Word STATE_VARIABLE_Info_33_45;
  MR_Word STATE_VARIABLE_Specs_34_46;
  MR_Word STATE_VARIABLE_Info_36_48;
  MR_Word STATE_VARIABLE_Specs_37_49;
  MR_Word STATE_VARIABLE_Info_39_51;
  MR_Word STATE_VARIABLE_Specs_40_52;
  MR_Word STATE_VARIABLE_Info_42_54;
  MR_Word STATE_VARIABLE_Specs_43_55;
  MR_Word STATE_VARIABLE_Info_45_57;
  MR_Word STATE_VARIABLE_Specs_46_58;
  MR_Word Var_59;
  MR_Box conv4_STATE_VARIABLE_Info_33_45;
  MR_Box conv3_STATE_VARIABLE_Specs_34_46;
  MR_Box conv9_STATE_VARIABLE_Info_36_48;
  MR_Box conv8_STATE_VARIABLE_Specs_37_49;
  MR_Box conv14_STATE_VARIABLE_Info_39_51;
  MR_Box conv13_STATE_VARIABLE_Specs_40_52;
  MR_Box conv19_STATE_VARIABLE_Info_42_54;
  MR_Box conv18_STATE_VARIABLE_Specs_43_55;
  MR_Box conv24_STATE_VARIABLE_Info_45_57;
  MR_Box conv23_STATE_VARIABLE_Specs_46_58;
  MR_Box conv29__Info_13;
  MR_Box conv28_STATE_VARIABLE_Specs_15;

  parse_tree__module_qual__mq_info__init_mq_info_4_p_0(Globals_6, ModuleName_10, (MR_Integer) 0, &Info0_11);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0((MR_Word) ((MR_Unsigned) 0U), OrigParseTreeInt3_7, Info0_11, &Info1_12);
  ModuleName_27 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 0))));
  ModuleNameContext_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 1))));
  InclMap_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 2))));
  ImportUseMap_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 3))));
  IntTypeDefnMap0_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 4))));
  IntInstDefnMap0_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 5))));
  IntModeDefnMap0_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 6))));
  IntTypeClasses0_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 7))));
  IntInstances0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 8))));
  IntTypeRepns0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 9))));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[7]), IntTypeDefnMap0_31, &IntTypeDefnMap_38, ((MR_Box) (Info1_12)), &conv4_STATE_VARIABLE_Info_33_45, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv3_STATE_VARIABLE_Specs_34_46);
  STATE_VARIABLE_Info_33_45 = ((MR_Word) (conv4_STATE_VARIABLE_Info_33_45));
  STATE_VARIABLE_Specs_34_46 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_34_46));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[8]), IntInstDefnMap0_32, &IntInstDefnMap_39, ((MR_Box) (STATE_VARIABLE_Info_33_45)), &conv9_STATE_VARIABLE_Info_36_48, ((MR_Box) (STATE_VARIABLE_Specs_34_46)), &conv8_STATE_VARIABLE_Specs_37_49);
  STATE_VARIABLE_Info_36_48 = ((MR_Word) (conv9_STATE_VARIABLE_Info_36_48));
  STATE_VARIABLE_Specs_37_49 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_37_49));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[9]), IntModeDefnMap0_33, &IntModeDefnMap_40, ((MR_Box) (STATE_VARIABLE_Info_36_48)), &conv14_STATE_VARIABLE_Info_39_51, ((MR_Box) (STATE_VARIABLE_Specs_37_49)), &conv13_STATE_VARIABLE_Specs_40_52);
  STATE_VARIABLE_Info_39_51 = ((MR_Word) (conv14_STATE_VARIABLE_Info_39_51));
  STATE_VARIABLE_Specs_40_52 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_40_52));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[15]), IntTypeClasses0_34, &IntTypeClasses_41, ((MR_Box) (STATE_VARIABLE_Info_39_51)), &conv19_STATE_VARIABLE_Info_42_54, ((MR_Box) (STATE_VARIABLE_Specs_40_52)), &conv18_STATE_VARIABLE_Specs_43_55);
  STATE_VARIABLE_Info_42_54 = ((MR_Word) (conv19_STATE_VARIABLE_Info_42_54));
  STATE_VARIABLE_Specs_43_55 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_43_55));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[16]), IntInstances0_35, &IntInstances_42, ((MR_Box) (STATE_VARIABLE_Info_42_54)), &conv24_STATE_VARIABLE_Info_45_57, ((MR_Box) (STATE_VARIABLE_Specs_43_55)), &conv23_STATE_VARIABLE_Specs_46_58);
  STATE_VARIABLE_Info_45_57 = ((MR_Word) (conv24_STATE_VARIABLE_Info_45_57));
  STATE_VARIABLE_Specs_46_58 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_46_58));
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_10[0]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_6));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_59, IntTypeRepns0_36, &IntTypeRepns_43, ((MR_Box) (STATE_VARIABLE_Info_45_57)), &conv29__Info_13, ((MR_Box) (STATE_VARIABLE_Specs_46_58)), &conv28_STATE_VARIABLE_Specs_15);
  *STATE_VARIABLE_Specs_15 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_15));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt3_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntTypeDefnMap_38));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntInstDefnMap_39));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntModeDefnMap_40));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeClasses_41));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstances_42));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntTypeRepns_43));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int3_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0(
  MR_Word Globals_6,
  MR_Word AugMakeIntUnit0_7,
  MR_Word * AugMakeIntUnit_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word ParseTreeModuleSrc0_10 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 0))));
  MR_Word AncestorInt0s_11 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 1))));
  MR_Word DirectInt3Specs_12 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 2))));
  MR_Word IndirectInt3Specs_13 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 3))));
  MR_Word ModuleVersionNumbers_14 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_7, (MR_Integer) 4))));
  MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_10, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_17;
  MR_Word STATE_VARIABLE_Info_21_21;
  MR_Word STATE_VARIABLE_Info_22_22;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_Info_25_25;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Specs_31_31;
  MR_Word UnusedImportsMap0_77;
  MR_Word ModuleExportsInstances_78;
  MR_Word UnusedImportsMap_80;
  MR_Word WarnInterfaceImports_81;
  MR_Box conv1_STATE_VARIABLE_Info_25_25;
  MR_Box conv3_STATE_VARIABLE_Info_29_29;

  parse_tree__module_qual__mq_info__init_mq_info_4_p_0(Globals_6, ModuleName_16, (MR_Integer) 1, &STATE_VARIABLE_Info_21_21);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc0_10, STATE_VARIABLE_Info_21_21, &STATE_VARIABLE_Info_22_22);
  Var_24 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), AncestorInt0s_11);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[14]), Var_24, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv1_STATE_VARIABLE_Info_25_25);
  STATE_VARIABLE_Info_25_25 = ((MR_Word) (conv1_STATE_VARIABLE_Info_25_25));
  Var_28 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), DirectInt3Specs_12);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[6]), Var_28, ((MR_Box) (STATE_VARIABLE_Info_25_25)), &conv3_STATE_VARIABLE_Info_29_29);
  STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_Info_29_29));
  parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0(ParseTreeModuleSrc0_10, &ParseTreeModuleSrc_17, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_31_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *AugMakeIntUnit_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorInt0s_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt3Specs_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt3Specs_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (ModuleVersionNumbers_14));
  }
  parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(STATE_VARIABLE_Info_30_30, &UnusedImportsMap0_77);
  parse_tree__module_qual__mq_info__mq_info_get_exported_instances_flag_2_p_0(STATE_VARIABLE_Info_30_30, &ModuleExportsInstances_78);
  switch (ModuleExportsInstances_78) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnusedImportsMap_80 = UnusedImportsMap0_77;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstanceImports_79;
        MR_Word Var_83;

        parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(STATE_VARIABLE_Info_30_30, &InstanceImports_79);
        Var_83 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InstanceImports_79);
        mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_83, UnusedImportsMap0_77, &UnusedImportsMap_80);
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 15, &WarnInterfaceImports_81);
  switch (WarnInterfaceImports_81) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_31_31;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedImports_82;
        MR_Word Var_85;
        MR_Box conv5_STATE_VARIABLE_Specs_19;

        mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), UnusedImportsMap_80, &UnusedImports_82);
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_85, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
          MR_hl_field(0, Var_85, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_5_p_0_3));
          MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_85, 3) = ((MR_Box) (ModuleName_16));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Var_85, UnusedImports_82, ((MR_Box) (STATE_VARIABLE_Specs_31_31)), &conv5_STATE_VARIABLE_Specs_19);
        *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_19));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0(
  MR_Word Globals_14,
  MR_Word AugCompUnit0_15,
  MR_Word * AugCompUnit_16,
  MR_Word EventSpecMap0_17,
  MR_Word * EventSpecMap_18,
  MR_String EventSpecFileName_19,
  MR_Word * STATE_VARIABLE_Info_39,
  MR_Word * UndefTypes_21,
  MR_Word * UndefInsts_22,
  MR_Word * UndefModes_23,
  MR_Word * UndefTypeClasses_24,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_Word ParseTreeModuleSrc0_26 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_27 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_28 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_29 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 3))));
  MR_Word PlainOptSpecs_30 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 4))));
  MR_Word TransOptSpecs_31 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 5))));
  MR_Word IntForOptSpecs_32 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 6))));
  MR_Word TypeRepnSpecs_33 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 7))));
  MR_Word ModuleVersionNumbers_34 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_15, (MR_Integer) 8))));
  MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_26, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_36;
  MR_Word EventSpecList0_37;
  MR_Word EventSpecList_38;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_Info_50_50;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Word STATE_VARIABLE_Specs_55_55;
  MR_Word UnusedImportsMap0_103;
  MR_Word ModuleExportsInstances_104;
  MR_Word UnusedImportsMap_106;
  MR_Word WarnInterfaceImports_107;
  MR_Box conv1_STATE_VARIABLE_Info_47_47;
  MR_Box conv3_STATE_VARIABLE_Info_50_50;

  parse_tree__module_qual__mq_info__init_mq_info_4_p_0(Globals_14, ModuleName_35, (MR_Integer) 1, &STATE_VARIABLE_Info_43_43);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc0_26, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_44_44);
  Var_46 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), AncestorIntSpecs_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[4]), Var_46, ((MR_Box) (STATE_VARIABLE_Info_44_44)), &conv1_STATE_VARIABLE_Info_47_47);
  STATE_VARIABLE_Info_47_47 = ((MR_Word) (conv1_STATE_VARIABLE_Info_47_47));
  Var_49 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), DirectInt1Specs_28);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[5]), Var_49, ((MR_Box) (STATE_VARIABLE_Info_47_47)), &conv3_STATE_VARIABLE_Info_50_50);
  STATE_VARIABLE_Info_50_50 = ((MR_Word) (conv3_STATE_VARIABLE_Info_50_50));
  parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0(ParseTreeModuleSrc0_26, &ParseTreeModuleSrc_36, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_52_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *AugCompUnit_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt1Specs_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt2Specs_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (PlainOptSpecs_30));
    MR_hl_field(0, base, 5) = ((MR_Box) (TransOptSpecs_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntForOptSpecs_32));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeRepnSpecs_33));
    MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbers_34));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_17, &EventSpecList0_37);
  parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0((MR_Integer) 0, EventSpecFileName_19, EventSpecList0_37, &EventSpecList_38, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_39, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_55_55);
  mercury__map__from_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_38, EventSpecMap_18);
  parse_tree__module_qual__mq_info__mq_info_get_undef_types_2_p_0(*STATE_VARIABLE_Info_39, UndefTypes_21);
  parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(*STATE_VARIABLE_Info_39, UndefInsts_22);
  parse_tree__module_qual__mq_info__mq_info_get_undef_modes_2_p_0(*STATE_VARIABLE_Info_39, UndefModes_23);
  parse_tree__module_qual__mq_info__mq_info_get_undef_typeclasses_2_p_0(*STATE_VARIABLE_Info_39, UndefTypeClasses_24);
  parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(*STATE_VARIABLE_Info_39, &UnusedImportsMap0_103);
  parse_tree__module_qual__mq_info__mq_info_get_exported_instances_flag_2_p_0(*STATE_VARIABLE_Info_39, &ModuleExportsInstances_104);
  switch (ModuleExportsInstances_104) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnusedImportsMap_106 = UnusedImportsMap0_103;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstanceImports_105;
        MR_Word Var_109;

        parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(*STATE_VARIABLE_Info_39, &InstanceImports_105);
        Var_109 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InstanceImports_105);
        mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_109, UnusedImportsMap0_103, &UnusedImportsMap_106);
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 15, &WarnInterfaceImports_107);
  switch (WarnInterfaceImports_107) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_55_55;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedImports_108;
        MR_Word Var_111;
        MR_Box conv5_STATE_VARIABLE_Specs_41;

        mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), UnusedImportsMap_106, &UnusedImports_108);
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_111, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
          MR_hl_field(0, Var_111, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_13_p_0_3));
          MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_111, 3) = ((MR_Box) (ModuleName_35));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Var_111, UnusedImports_108, ((MR_Box) (STATE_VARIABLE_Specs_55_55)), &conv5_STATE_VARIABLE_Specs_41);
        *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_41));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Attr_16;
  MR_Word conv1_STATE_VARIABLE_Info_29;
  MR_Word conv0_STATE_VARIABLE_Specs_31;

  parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Attr_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_31);
  *wrapper_arg_2 = ((MR_Box) (conv2_Attr_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_29));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_String Name_19;
    MR_Word Spec0_20;
    MR_Word NameSpecs0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Spec_22;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Integer EventNumber_34;
    MR_String EventName_35;
    MR_Integer EventLineNumber_36;
    MR_Word Attrs0_37;
    MR_Word SynthAttrNumOrder_38;
    MR_Word Attrs_39;
    MR_Word Var_40;
    MR_Box conv4_STATE_VARIABLE_Info_32_32;
    MR_Box conv3_STATE_VARIABLE_Specs_33_33;
    MR_Word * AddrNameSpecs_44;

    Name_19 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
    Spec0_20 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
    EventNumber_34 = ((MR_Integer) ((MR_hl_field(0, Spec0_20, (MR_Integer) 0))));
    EventName_35 = ((MR_String) ((MR_hl_field(0, Spec0_20, (MR_Integer) 1))));
    EventLineNumber_36 = ((MR_Integer) ((MR_hl_field(0, Spec0_20, (MR_Integer) 2))));
    Attrs0_37 = ((MR_Word) ((MR_hl_field(0, Spec0_20, (MR_Integer) 3))));
    SynthAttrNumOrder_38 = ((MR_Word) ((MR_hl_field(0, Spec0_20, (MR_Integer) 4))));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) (EventName_35));
      MR_hl_field(0, Var_40, 5) = ((MR_Box) (FileName_2));
      MR_hl_field(0, Var_40, 6) = ((MR_Box) (EventLineNumber_36));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Var_40, Attrs0_37, &Attrs_39, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
    STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
    STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) (EventNumber_34));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) (EventName_35));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) (EventLineNumber_36));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Attrs_39));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (SynthAttrNumOrder_38));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (Name_19));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (Spec_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrNameSpecs_44 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0(HeadVar__1_1, FileName_2, NameSpecs0_21, AddrNameSpecs_44, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Attr_16;
  MR_Word conv1_STATE_VARIABLE_Info_29;
  MR_Word conv0_STATE_VARIABLE_Specs_31;

  parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Attr_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_31);
  *wrapper_arg_2 = ((MR_Box) (conv2_Attr_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_29));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_45,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_45 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_String Name_19;
      MR_Word Spec0_20;
      MR_Word NameSpecs0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Spec_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Integer EventNumber_34;
      MR_String EventName_35;
      MR_Integer EventLineNumber_36;
      MR_Word Attrs0_37;
      MR_Word SynthAttrNumOrder_38;
      MR_Word Attrs_39;
      MR_Word Var_40;
      MR_Box conv4_STATE_VARIABLE_Info_32_32;
      MR_Box conv3_STATE_VARIABLE_Specs_33_33;
      MR_Word * AddrNameSpecs_44;
      MR_Word HeadVar__4_46;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_45;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      Name_19 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      Spec0_20 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      EventNumber_34 = ((MR_Integer) ((MR_hl_field(0, Spec0_20, (MR_Integer) 0))));
      EventName_35 = ((MR_String) ((MR_hl_field(0, Spec0_20, (MR_Integer) 1))));
      EventLineNumber_36 = ((MR_Integer) ((MR_hl_field(0, Spec0_20, (MR_Integer) 2))));
      Attrs0_37 = ((MR_Word) ((MR_hl_field(0, Spec0_20, (MR_Integer) 3))));
      SynthAttrNumOrder_38 = ((MR_Word) ((MR_hl_field(0, Spec0_20, (MR_Integer) 4))));
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[0]));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0_1));
        MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_40, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_40, 4) = ((MR_Box) (EventName_35));
        MR_hl_field(0, Var_40, 5) = ((MR_Box) (FileName_2));
        MR_hl_field(0, Var_40, 6) = ((MR_Box) (EventLineNumber_36));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Var_40, Attrs0_37, &Attrs_39, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
      STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
      STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_22, 0) = ((MR_Box) (EventNumber_34));
        MR_hl_field(0, Spec_22, 1) = ((MR_Box) (EventName_35));
        MR_hl_field(0, Spec_22, 2) = ((MR_Box) (EventLineNumber_36));
        MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Attrs_39));
        MR_hl_field(0, Spec_22, 4) = ((MR_Box) (SynthAttrNumOrder_38));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (Name_19));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (Spec_22));
      }
      {
        HeadVar__4_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_46, 0) = ((MR_Box) (Var_31));
        MR_hl_field(1, HeadVar__4_46, 1) = NULL;
      }
      AddrNameSpecs_44 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_46, (MR_Integer) 1)));
      *AddrOfHeadVar__4_45 = HeadVar__4_46;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NameSpecs0_21;
      next_value_of_AddrOfHeadVar__4_45 = AddrNameSpecs_44;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_45 = next_value_of_AddrOfHeadVar__4_45;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv82_ItemMutable_10;
  MR_Word conv81_STATE_VARIABLE_Info_31;
  MR_Word conv80_STATE_VARIABLE_Specs_33;

  parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv82_ItemMutable_10, ((MR_Word) (wrapper_arg_3)), &conv81_STATE_VARIABLE_Info_31, ((MR_Word) (wrapper_arg_5)), &conv80_STATE_VARIABLE_Specs_33);
  *wrapper_arg_2 = ((MR_Box) (conv82_ItemMutable_10));
  *wrapper_arg_4 = ((MR_Box) (conv81_STATE_VARIABLE_Info_31));
  *wrapper_arg_6 = ((MR_Box) (conv80_STATE_VARIABLE_Specs_33));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv77_Pragma_10;
  MR_Word conv76_STATE_VARIABLE_Info_47;
  MR_Word conv75_STATE_VARIABLE_Specs_49;

  parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv77_Pragma_10, ((MR_Word) (wrapper_arg_3)), &conv76_STATE_VARIABLE_Info_47, ((MR_Word) (wrapper_arg_5)), &conv75_STATE_VARIABLE_Specs_49);
  *wrapper_arg_2 = ((MR_Box) (conv77_Pragma_10));
  *wrapper_arg_4 = ((MR_Box) (conv76_STATE_VARIABLE_Info_47));
  *wrapper_arg_6 = ((MR_Box) (conv75_STATE_VARIABLE_Specs_49));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv72_Pragma_10;
  MR_Word conv71_STATE_VARIABLE_Info_80;
  MR_Word conv70_STATE_VARIABLE_Specs_82;

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv72_Pragma_10, ((MR_Word) (wrapper_arg_3)), &conv71_STATE_VARIABLE_Info_80, ((MR_Word) (wrapper_arg_5)), &conv70_STATE_VARIABLE_Specs_82);
  *wrapper_arg_2 = ((MR_Box) (conv72_Pragma_10));
  *wrapper_arg_4 = ((MR_Box) (conv71_STATE_VARIABLE_Info_80));
  *wrapper_arg_6 = ((MR_Box) (conv70_STATE_VARIABLE_Specs_82));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv67_ItemFEE_10;
  MR_Word conv66_STATE_VARIABLE_Info_23;
  MR_Word conv65_STATE_VARIABLE_Specs_25;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv67_ItemFEE_10, ((MR_Word) (wrapper_arg_3)), &conv66_STATE_VARIABLE_Info_23, ((MR_Word) (wrapper_arg_5)), &conv65_STATE_VARIABLE_Specs_25);
  *wrapper_arg_2 = ((MR_Box) (conv67_ItemFEE_10));
  *wrapper_arg_4 = ((MR_Box) (conv66_STATE_VARIABLE_Info_23));
  *wrapper_arg_6 = ((MR_Box) (conv65_STATE_VARIABLE_Specs_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv62_FPInfo_10;
  MR_Word conv61_STATE_VARIABLE_Info_28;
  MR_Word conv60_STATE_VARIABLE_Specs_30;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv62_FPInfo_10, ((MR_Word) (wrapper_arg_3)), &conv61_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_Specs_30);
  *wrapper_arg_2 = ((MR_Box) (conv62_FPInfo_10));
  *wrapper_arg_4 = ((MR_Box) (conv61_STATE_VARIABLE_Info_28));
  *wrapper_arg_6 = ((MR_Box) (conv60_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv57_ItemModeDecl_10;
  MR_Word conv56_STATE_VARIABLE_Info_28;
  MR_Word conv55_STATE_VARIABLE_Specs_30;

  parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv57_ItemModeDecl_10, ((MR_Word) (wrapper_arg_3)), &conv56_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_5)), &conv55_STATE_VARIABLE_Specs_30);
  *wrapper_arg_2 = ((MR_Box) (conv57_ItemModeDecl_10));
  *wrapper_arg_4 = ((MR_Box) (conv56_STATE_VARIABLE_Info_28));
  *wrapper_arg_6 = ((MR_Box) (conv55_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv52_ItemPredDecl_10;
  MR_Word conv51_STATE_VARIABLE_Info_41;
  MR_Word conv50_STATE_VARIABLE_Specs_43;

  parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv52_ItemPredDecl_10, ((MR_Word) (wrapper_arg_3)), &conv51_STATE_VARIABLE_Info_41, ((MR_Word) (wrapper_arg_5)), &conv50_STATE_VARIABLE_Specs_43);
  *wrapper_arg_2 = ((MR_Box) (conv52_ItemPredDecl_10));
  *wrapper_arg_4 = ((MR_Box) (conv51_STATE_VARIABLE_Info_41));
  *wrapper_arg_6 = ((MR_Box) (conv50_STATE_VARIABLE_Specs_43));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv47_ItemInstance_10;
  MR_Word conv46_STATE_VARIABLE_Info_33;
  MR_Word conv45_STATE_VARIABLE_Specs_35;

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv47_ItemInstance_10, ((MR_Word) (wrapper_arg_3)), &conv46_STATE_VARIABLE_Info_33, ((MR_Word) (wrapper_arg_5)), &conv45_STATE_VARIABLE_Specs_35);
  *wrapper_arg_2 = ((MR_Box) (conv47_ItemInstance_10));
  *wrapper_arg_4 = ((MR_Box) (conv46_STATE_VARIABLE_Info_33));
  *wrapper_arg_6 = ((MR_Box) (conv45_STATE_VARIABLE_Specs_35));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv42_ItemTypeClass_10;
  MR_Word conv41_STATE_VARIABLE_Info_30;
  MR_Word conv40_STATE_VARIABLE_Specs_32;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv42_ItemTypeClass_10, ((MR_Word) (wrapper_arg_3)), &conv41_STATE_VARIABLE_Info_30, ((MR_Word) (wrapper_arg_5)), &conv40_STATE_VARIABLE_Specs_32);
  *wrapper_arg_2 = ((MR_Box) (conv42_ItemTypeClass_10));
  *wrapper_arg_4 = ((MR_Box) (conv41_STATE_VARIABLE_Info_30));
  *wrapper_arg_6 = ((MR_Box) (conv40_STATE_VARIABLE_Specs_32));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv37_Pragma_10;
  MR_Word conv36_STATE_VARIABLE_Info_80;
  MR_Word conv35_STATE_VARIABLE_Specs_82;

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv37_Pragma_10, ((MR_Word) (wrapper_arg_3)), &conv36_STATE_VARIABLE_Info_80, ((MR_Word) (wrapper_arg_5)), &conv35_STATE_VARIABLE_Specs_82);
  *wrapper_arg_2 = ((MR_Box) (conv37_Pragma_10));
  *wrapper_arg_4 = ((MR_Box) (conv36_STATE_VARIABLE_Info_80));
  *wrapper_arg_6 = ((MR_Box) (conv35_STATE_VARIABLE_Specs_82));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_ItemModeDecl_10;
  MR_Word conv31_STATE_VARIABLE_Info_28;
  MR_Word conv30_STATE_VARIABLE_Specs_30;

  parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv32_ItemModeDecl_10, ((MR_Word) (wrapper_arg_3)), &conv31_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Specs_30);
  *wrapper_arg_2 = ((MR_Box) (conv32_ItemModeDecl_10));
  *wrapper_arg_4 = ((MR_Box) (conv31_STATE_VARIABLE_Info_28));
  *wrapper_arg_6 = ((MR_Box) (conv30_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_ItemPredDecl_10;
  MR_Word conv26_STATE_VARIABLE_Info_41;
  MR_Word conv25_STATE_VARIABLE_Specs_43;

  parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv27_ItemPredDecl_10, ((MR_Word) (wrapper_arg_3)), &conv26_STATE_VARIABLE_Info_41, ((MR_Word) (wrapper_arg_5)), &conv25_STATE_VARIABLE_Specs_43);
  *wrapper_arg_2 = ((MR_Box) (conv27_ItemPredDecl_10));
  *wrapper_arg_4 = ((MR_Box) (conv26_STATE_VARIABLE_Info_41));
  *wrapper_arg_6 = ((MR_Box) (conv25_STATE_VARIABLE_Specs_43));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_ItemInstance_10;
  MR_Word conv21_STATE_VARIABLE_Info_33;
  MR_Word conv20_STATE_VARIABLE_Specs_35;

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv22_ItemInstance_10, ((MR_Word) (wrapper_arg_3)), &conv21_STATE_VARIABLE_Info_33, ((MR_Word) (wrapper_arg_5)), &conv20_STATE_VARIABLE_Specs_35);
  *wrapper_arg_2 = ((MR_Box) (conv22_ItemInstance_10));
  *wrapper_arg_4 = ((MR_Box) (conv21_STATE_VARIABLE_Info_33));
  *wrapper_arg_6 = ((MR_Box) (conv20_STATE_VARIABLE_Specs_35));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_ItemTypeClass_10;
  MR_Word conv16_STATE_VARIABLE_Info_30;
  MR_Word conv15_STATE_VARIABLE_Specs_32;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_ItemTypeClass_10, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_Info_30, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Specs_32);
  *wrapper_arg_2 = ((MR_Box) (conv17_ItemTypeClass_10));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_Info_30));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_32));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_CheckedDefn_8;
  MR_Word conv11_STATE_VARIABLE_Info_25;
  MR_Word conv10_STATE_VARIABLE_Specs_27;

  parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv12_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Info_25, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_27);
  *wrapper_arg_2 = ((MR_Box) (conv12_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Info_25));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_CheckedDefn_8;
  MR_Word conv6_STATE_VARIABLE_Info_25;
  MR_Word conv5_STATE_VARIABLE_Specs_27;

  parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv7_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Info_25, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_Specs_27);
  *wrapper_arg_2 = ((MR_Box) (conv7_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Info_25));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_CheckedDefn_8;
  MR_Word conv1_STATE_VARIABLE_Info_50;
  MR_Word conv0_STATE_VARIABLE_Specs_52;

  parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_50, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_52);
  *wrapper_arg_2 = ((MR_Box) (conv2_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_50));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_52));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_6_p_0(
  MR_Word ParseTreeModuleSrc0_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
{
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 1))));
  MR_Word InclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 2))));
  MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 5))));
  MR_Word IntSelfFIMLangs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 6))));
  MR_Word ImpSelfFIMLangs_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 7))));
  MR_Word TypeCtorCheckedMap0_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap0_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap0_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 10))));
  MR_Word TypeSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 11))));
  MR_Word InstModeSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 12))));
  MR_Word IntTypeClasses0_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 13))));
  MR_Word IntInstances0_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 14))));
  MR_Word IntPredDecls0_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 15))));
  MR_Word IntModeDecls0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 16))));
  MR_Word IntDeclPragmas0_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 17))));
  MR_Word IntDeclMarkers0_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 18))));
  MR_Word IntBadPreds_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 20))));
  MR_Word ImpTypeClasses0_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 21))));
  MR_Word ImpInstances0_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 22))));
  MR_Word ImpPredDecls0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 23))));
  MR_Word ImpModeDecls0_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 24))));
  MR_Word ImpForeignProcs0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 26))));
  MR_Word ImpForeignExportEnums0_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 27))));
  MR_Word ImpDeclPragmas0_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 28))));
  MR_Word ImpDeclMarkers0_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 29))));
  MR_Word ImpImplPragmas0_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 30))));
  MR_Word ImpImplMarkers0_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 31))));
  MR_Word ImpMutables0_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 35))));
  MR_Word TypeCtorCheckedMap_47;
  MR_Word InstCtorCheckedMap_48;
  MR_Word ModeCtorCheckedMap_49;
  MR_Word IntTypeClasses_51;
  MR_Word IntInstances_52;
  MR_Word IntPredDecls_53;
  MR_Word IntModeDecls_54;
  MR_Word IntDeclPragmas_55;
  MR_Word IntPromises_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 19))));
  MR_Word ImpTypeClasses_58;
  MR_Word ImpInstances_59;
  MR_Word ImpPredDecls_60;
  MR_Word ImpModeDecls_61;
  MR_Word ImpClauses_62 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 25))));
  MR_Word ImpForeignProcs_63;
  MR_Word ImpForeignExportEnums_64;
  MR_Word ImpDeclPragmas_65;
  MR_Word ImpImplPragmas_66;
  MR_Word ImpInitialises_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 33))));
  MR_Word ImpFinalises_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 34))));
  MR_Word ImpPromises_69 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 32))));
  MR_Word ImpMutables_70;
  MR_Word STATE_VARIABLE_Info_76_76;
  MR_Word STATE_VARIABLE_Specs_77_77;
  MR_Word STATE_VARIABLE_Info_79_79;
  MR_Word STATE_VARIABLE_Specs_80_80;
  MR_Word STATE_VARIABLE_Info_82_82;
  MR_Word STATE_VARIABLE_Specs_83_83;
  MR_Word STATE_VARIABLE_Info_85_85;
  MR_Word STATE_VARIABLE_Specs_86_86;
  MR_Word STATE_VARIABLE_Info_88_88;
  MR_Word STATE_VARIABLE_Specs_89_89;
  MR_Word STATE_VARIABLE_Info_91_91;
  MR_Word STATE_VARIABLE_Specs_92_92;
  MR_Word STATE_VARIABLE_Info_94_94;
  MR_Word STATE_VARIABLE_Specs_95_95;
  MR_Word STATE_VARIABLE_Info_97_97;
  MR_Word STATE_VARIABLE_Specs_98_98;
  MR_Word STATE_VARIABLE_Info_100_100;
  MR_Word STATE_VARIABLE_Specs_101_101;
  MR_Word STATE_VARIABLE_Info_103_103;
  MR_Word STATE_VARIABLE_Specs_104_104;
  MR_Word STATE_VARIABLE_Info_106_106;
  MR_Word STATE_VARIABLE_Specs_107_107;
  MR_Word STATE_VARIABLE_Info_109_109;
  MR_Word STATE_VARIABLE_Specs_110_110;
  MR_Word STATE_VARIABLE_Info_112_112;
  MR_Word STATE_VARIABLE_Specs_113_113;
  MR_Word STATE_VARIABLE_Info_115_115;
  MR_Word STATE_VARIABLE_Specs_116_116;
  MR_Word STATE_VARIABLE_Info_118_118;
  MR_Word STATE_VARIABLE_Specs_119_119;
  MR_Word STATE_VARIABLE_Info_121_121;
  MR_Word STATE_VARIABLE_Specs_122_122;
  MR_Box conv4_STATE_VARIABLE_Info_76_76;
  MR_Box conv3_STATE_VARIABLE_Specs_77_77;
  MR_Box conv9_STATE_VARIABLE_Info_79_79;
  MR_Box conv8_STATE_VARIABLE_Specs_80_80;
  MR_Box conv14_STATE_VARIABLE_Info_82_82;
  MR_Box conv13_STATE_VARIABLE_Specs_83_83;
  MR_Box conv19_STATE_VARIABLE_Info_85_85;
  MR_Box conv18_STATE_VARIABLE_Specs_86_86;
  MR_Box conv24_STATE_VARIABLE_Info_88_88;
  MR_Box conv23_STATE_VARIABLE_Specs_89_89;
  MR_Box conv29_STATE_VARIABLE_Info_91_91;
  MR_Box conv28_STATE_VARIABLE_Specs_92_92;
  MR_Box conv34_STATE_VARIABLE_Info_94_94;
  MR_Box conv33_STATE_VARIABLE_Specs_95_95;
  MR_Box conv39_STATE_VARIABLE_Info_97_97;
  MR_Box conv38_STATE_VARIABLE_Specs_98_98;
  MR_Box conv44_STATE_VARIABLE_Info_100_100;
  MR_Box conv43_STATE_VARIABLE_Specs_101_101;
  MR_Box conv49_STATE_VARIABLE_Info_103_103;
  MR_Box conv48_STATE_VARIABLE_Specs_104_104;
  MR_Box conv54_STATE_VARIABLE_Info_106_106;
  MR_Box conv53_STATE_VARIABLE_Specs_107_107;
  MR_Box conv59_STATE_VARIABLE_Info_109_109;
  MR_Box conv58_STATE_VARIABLE_Specs_110_110;
  MR_Box conv64_STATE_VARIABLE_Info_112_112;
  MR_Box conv63_STATE_VARIABLE_Specs_113_113;
  MR_Box conv69_STATE_VARIABLE_Info_115_115;
  MR_Box conv68_STATE_VARIABLE_Specs_116_116;
  MR_Box conv74_STATE_VARIABLE_Info_118_118;
  MR_Box conv73_STATE_VARIABLE_Specs_119_119;
  MR_Box conv79_STATE_VARIABLE_Info_121_121;
  MR_Box conv78_STATE_VARIABLE_Specs_122_122;
  MR_Box conv84_STATE_VARIABLE_Info_72;
  MR_Box conv83_STATE_VARIABLE_Specs_74;

  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[1]), TypeCtorCheckedMap0_19, &TypeCtorCheckedMap_47, ((MR_Box) (STATE_VARIABLE_Info_0_71)), &conv4_STATE_VARIABLE_Info_76_76, ((MR_Box) (STATE_VARIABLE_Specs_0_73)), &conv3_STATE_VARIABLE_Specs_77_77);
  STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv4_STATE_VARIABLE_Info_76_76));
  STATE_VARIABLE_Specs_77_77 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_77_77));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[2]), InstCtorCheckedMap0_20, &InstCtorCheckedMap_48, ((MR_Box) (STATE_VARIABLE_Info_76_76)), &conv9_STATE_VARIABLE_Info_79_79, ((MR_Box) (STATE_VARIABLE_Specs_77_77)), &conv8_STATE_VARIABLE_Specs_80_80);
  STATE_VARIABLE_Info_79_79 = ((MR_Word) (conv9_STATE_VARIABLE_Info_79_79));
  STATE_VARIABLE_Specs_80_80 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_80_80));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[3]), ModeCtorCheckedMap0_21, &ModeCtorCheckedMap_49, ((MR_Box) (STATE_VARIABLE_Info_79_79)), &conv14_STATE_VARIABLE_Info_82_82, ((MR_Box) (STATE_VARIABLE_Specs_80_80)), &conv13_STATE_VARIABLE_Specs_83_83);
  STATE_VARIABLE_Info_82_82 = ((MR_Word) (conv14_STATE_VARIABLE_Info_82_82));
  STATE_VARIABLE_Specs_83_83 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_83_83));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[0]), IntTypeClasses0_24, &IntTypeClasses_51, ((MR_Box) (STATE_VARIABLE_Info_82_82)), &conv19_STATE_VARIABLE_Info_85_85, ((MR_Box) (STATE_VARIABLE_Specs_83_83)), &conv18_STATE_VARIABLE_Specs_86_86);
  STATE_VARIABLE_Info_85_85 = ((MR_Word) (conv19_STATE_VARIABLE_Info_85_85));
  STATE_VARIABLE_Specs_86_86 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_86_86));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[1]), IntInstances0_25, &IntInstances_52, ((MR_Box) (STATE_VARIABLE_Info_85_85)), &conv24_STATE_VARIABLE_Info_88_88, ((MR_Box) (STATE_VARIABLE_Specs_86_86)), &conv23_STATE_VARIABLE_Specs_89_89);
  STATE_VARIABLE_Info_88_88 = ((MR_Word) (conv24_STATE_VARIABLE_Info_88_88));
  STATE_VARIABLE_Specs_89_89 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_89_89));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[2]), IntPredDecls0_26, &IntPredDecls_53, ((MR_Box) (STATE_VARIABLE_Info_88_88)), &conv29_STATE_VARIABLE_Info_91_91, ((MR_Box) (STATE_VARIABLE_Specs_89_89)), &conv28_STATE_VARIABLE_Specs_92_92);
  STATE_VARIABLE_Info_91_91 = ((MR_Word) (conv29_STATE_VARIABLE_Info_91_91));
  STATE_VARIABLE_Specs_92_92 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_92_92));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[3]), IntModeDecls0_27, &IntModeDecls_54, ((MR_Box) (STATE_VARIABLE_Info_91_91)), &conv34_STATE_VARIABLE_Info_94_94, ((MR_Box) (STATE_VARIABLE_Specs_92_92)), &conv33_STATE_VARIABLE_Specs_95_95);
  STATE_VARIABLE_Info_94_94 = ((MR_Word) (conv34_STATE_VARIABLE_Info_94_94));
  STATE_VARIABLE_Specs_95_95 = ((MR_Word) (conv33_STATE_VARIABLE_Specs_95_95));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[4]), IntDeclPragmas0_28, &IntDeclPragmas_55, ((MR_Box) (STATE_VARIABLE_Info_94_94)), &conv39_STATE_VARIABLE_Info_97_97, ((MR_Box) (STATE_VARIABLE_Specs_95_95)), &conv38_STATE_VARIABLE_Specs_98_98);
  STATE_VARIABLE_Info_97_97 = ((MR_Word) (conv39_STATE_VARIABLE_Info_97_97));
  STATE_VARIABLE_Specs_98_98 = ((MR_Word) (conv38_STATE_VARIABLE_Specs_98_98));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[5]), ImpTypeClasses0_32, &ImpTypeClasses_58, ((MR_Box) (STATE_VARIABLE_Info_97_97)), &conv44_STATE_VARIABLE_Info_100_100, ((MR_Box) (STATE_VARIABLE_Specs_98_98)), &conv43_STATE_VARIABLE_Specs_101_101);
  STATE_VARIABLE_Info_100_100 = ((MR_Word) (conv44_STATE_VARIABLE_Info_100_100));
  STATE_VARIABLE_Specs_101_101 = ((MR_Word) (conv43_STATE_VARIABLE_Specs_101_101));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[6]), ImpInstances0_33, &ImpInstances_59, ((MR_Box) (STATE_VARIABLE_Info_100_100)), &conv49_STATE_VARIABLE_Info_103_103, ((MR_Box) (STATE_VARIABLE_Specs_101_101)), &conv48_STATE_VARIABLE_Specs_104_104);
  STATE_VARIABLE_Info_103_103 = ((MR_Word) (conv49_STATE_VARIABLE_Info_103_103));
  STATE_VARIABLE_Specs_104_104 = ((MR_Word) (conv48_STATE_VARIABLE_Specs_104_104));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[7]), ImpPredDecls0_34, &ImpPredDecls_60, ((MR_Box) (STATE_VARIABLE_Info_103_103)), &conv54_STATE_VARIABLE_Info_106_106, ((MR_Box) (STATE_VARIABLE_Specs_104_104)), &conv53_STATE_VARIABLE_Specs_107_107);
  STATE_VARIABLE_Info_106_106 = ((MR_Word) (conv54_STATE_VARIABLE_Info_106_106));
  STATE_VARIABLE_Specs_107_107 = ((MR_Word) (conv53_STATE_VARIABLE_Specs_107_107));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[8]), ImpModeDecls0_35, &ImpModeDecls_61, ((MR_Box) (STATE_VARIABLE_Info_106_106)), &conv59_STATE_VARIABLE_Info_109_109, ((MR_Box) (STATE_VARIABLE_Specs_107_107)), &conv58_STATE_VARIABLE_Specs_110_110);
  STATE_VARIABLE_Info_109_109 = ((MR_Word) (conv59_STATE_VARIABLE_Info_109_109));
  STATE_VARIABLE_Specs_110_110 = ((MR_Word) (conv58_STATE_VARIABLE_Specs_110_110));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[9]), ImpForeignProcs0_37, &ImpForeignProcs_63, ((MR_Box) (STATE_VARIABLE_Info_109_109)), &conv64_STATE_VARIABLE_Info_112_112, ((MR_Box) (STATE_VARIABLE_Specs_110_110)), &conv63_STATE_VARIABLE_Specs_113_113);
  STATE_VARIABLE_Info_112_112 = ((MR_Word) (conv64_STATE_VARIABLE_Info_112_112));
  STATE_VARIABLE_Specs_113_113 = ((MR_Word) (conv63_STATE_VARIABLE_Specs_113_113));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[10]), ImpForeignExportEnums0_38, &ImpForeignExportEnums_64, ((MR_Box) (STATE_VARIABLE_Info_112_112)), &conv69_STATE_VARIABLE_Info_115_115, ((MR_Box) (STATE_VARIABLE_Specs_113_113)), &conv68_STATE_VARIABLE_Specs_116_116);
  STATE_VARIABLE_Info_115_115 = ((MR_Word) (conv69_STATE_VARIABLE_Info_115_115));
  STATE_VARIABLE_Specs_116_116 = ((MR_Word) (conv68_STATE_VARIABLE_Specs_116_116));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[11]), ImpDeclPragmas0_39, &ImpDeclPragmas_65, ((MR_Box) (STATE_VARIABLE_Info_115_115)), &conv74_STATE_VARIABLE_Info_118_118, ((MR_Box) (STATE_VARIABLE_Specs_116_116)), &conv73_STATE_VARIABLE_Specs_119_119);
  STATE_VARIABLE_Info_118_118 = ((MR_Word) (conv74_STATE_VARIABLE_Info_118_118));
  STATE_VARIABLE_Specs_119_119 = ((MR_Word) (conv73_STATE_VARIABLE_Specs_119_119));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[12]), ImpImplPragmas0_41, &ImpImplPragmas_66, ((MR_Box) (STATE_VARIABLE_Info_118_118)), &conv79_STATE_VARIABLE_Info_121_121, ((MR_Box) (STATE_VARIABLE_Specs_119_119)), &conv78_STATE_VARIABLE_Specs_122_122);
  STATE_VARIABLE_Info_121_121 = ((MR_Word) (conv79_STATE_VARIABLE_Info_121_121));
  STATE_VARIABLE_Specs_122_122 = ((MR_Word) (conv78_STATE_VARIABLE_Specs_122_122));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[13]), ImpMutables0_46, &ImpMutables_70, ((MR_Box) (STATE_VARIABLE_Info_121_121)), &conv84_STATE_VARIABLE_Info_72, ((MR_Box) (STATE_VARIABLE_Specs_122_122)), &conv83_STATE_VARIABLE_Specs_74);
  *STATE_VARIABLE_Info_72 = ((MR_Word) (conv84_STATE_VARIABLE_Info_72));
  *STATE_VARIABLE_Specs_74 = ((MR_Word) (conv83_STATE_VARIABLE_Specs_74));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_47));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_48));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_49));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeSpecs_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (InstModeSpecs_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntTypeClasses_51));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntInstances_52));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPredDecls_53));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntModeDecls_54));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntDeclPragmas_55));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntDeclMarkers0_29));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntPromises_56));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntBadPreds_31));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpTypeClasses_58));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpInstances_59));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPredDecls_60));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpModeDecls_61));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpClauses_62));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpForeignProcs_63));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpForeignExportEnums_64));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpDeclPragmas_65));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpDeclMarkers0_40));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpImplPragmas_66));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpImplMarkers0_42));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpPromises_69));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpInitialises_67));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpFinalises_68));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpMutables_70));
  }
}

void mercury__parse_tree__module_qual__qualify_items__init(void)
{
}

void mercury__parse_tree__module_qual__qualify_items__init_type_tables(void)
{
}

void mercury__parse_tree__module_qual__qualify_items__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__qualify_items__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.qualify_items.
