/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2022-11-25
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
#include "bimap.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__303__1_8_p_0(
  MR_Word HeadVar__1_83,
  MR_Word HeadVar__2_84,
  MR_Word HeadVar__3_188,
  MR_Word * HeadVar__4_189,
  MR_Word HeadVar__5_190,
  MR_Word * HeadVar__6_191,
  MR_Word HeadVar__7_192,
  MR_Word * HeadVar__8_193);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__299__1_8_p_0(
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
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6);

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
parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemImplPragma0_9,
  MR_Word * ItemImplPragma_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

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
  MR_Word * AddrOfHeadVar__4_37,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemDeclPragma0_9,
  MR_Word * ItemDeclPragma_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_decl_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_10_p_0(
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
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_spec_subst__1_10_p_0(
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
  MR_Word * AddrOfHeadVar__4_83,
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
  MR_Word * AddrOfHeadVar__4_40,
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__353__1__ho12_8_p_0(
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__329__1__ho11_8_p_0(
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__251__1__ho10_8_p_0(
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
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
  MR_Word * AddrOfInst_112,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

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
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[13][1];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[3][9];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[8][3];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[9][10];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[16][4];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_7[2][11];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[1][8];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_9[1][13];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[1][12];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_12[2][5];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_13[1][6];


struct parse_tree__module_qual__qualify_items__vector_common_type_10_0_s {
  const MR_Word parse_tree__module_qual__qualify_items__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_10_0_s parse_tree__module_qual__qualify_items_vector_common_10[8];



static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[13][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "int16"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "int32"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "int64"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "int8"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "uint16"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "uint32"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "uint64"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "uint8"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
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
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
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
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_11[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_11[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[9][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[16][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[5])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_14)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[6])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[7])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[8])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_7[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_used_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_9[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_12[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[6])),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[7])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_13[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};


static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_10_0_s parse_tree__module_qual__qualify_items_vector_common_10[8] = {
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 9,
  {
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__303__1_8_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_196, &Arity_201);
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__299__1_8_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_177, &Arity_182);
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
    MR_hl_field(3, ErrorContext_25, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, ErrorContext_25, 1) = ((MR_Box) (Context_24));
    MR_hl_field(3, ErrorContext_25, 2) = ((MR_Box) (EventName_12));
    MR_hl_field(3, ErrorContext_25, 3) = ((MR_Box) (AttrName_20));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_11, ErrorContext_25, AttrType0_21, &AttrType_26, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_33_33);
  parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_11, ErrorContext_25, AttrMode0_22, &AttrMode_27, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_29, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_31);
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

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), ArgTVars_16, &TypeCtorArity_28);
        {
          TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_29, 0) = ((MR_Box) (TypeCtorSymName_23));
          MR_hl_field(0, TypeCtor_29, 1) = ((MR_Box) (TypeCtorArity_28));
        }
        {
          ErrorContext_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_30, 0) = ((MR_Box) ((MR_Unsigned) 15U));
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

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), ArgTVars_16, &TypeCtorArity_42);
        {
          TypeCtor_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_43, 0) = ((MR_Box) (TypeCtorSymName_23));
          MR_hl_field(0, TypeCtor_43, 1) = ((MR_Box) (TypeCtorArity_42));
        }
        {
          ErrorContext_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_44, 0) = ((MR_Box) ((MR_Unsigned) 15U));
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
          parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_50);
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
    case (MR_Integer) 3:
      {
        RepInfo_26 = RepInfo0_17;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
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
parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemImplPragma0_9,
  MR_Word * ItemImplPragma_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word Pragma0_13 = ((MR_Word) ((MR_hl_field(0, ItemImplPragma0_9, (MR_Integer) 0))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemImplPragma0_9, (MR_Integer) 1))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(0, ItemImplPragma0_9, (MR_Integer) 2))));
  MR_Word Pragma_16;

  switch (MR_tag((MR_Word) Pragma0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        Pragma_16 = Pragma0_13;
        *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo0_35 = (MR_Word) (MR_body((MR_Word) (Pragma0_13), (MR_Integer) 2));
        MR_Word Attrs0_36 = ((MR_Word) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 0))));
        MR_Word Name_37 = ((MR_Word) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 1))));
        MR_Word PredOrFunc_38 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word Vars0_39 = ((MR_Word) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 3))));
        MR_Word Varset_40 = ((MR_Word) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 4))));
        MR_Word InstVarset_41 = ((MR_Word) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 5))));
        MR_Word Impl_42 = ((MR_Word) ((MR_hl_field(0, FPInfo0_35, (MR_Integer) 6))));
        MR_Word ErrorContext_43;
        MR_Word Vars_44;
        MR_Word UserSharing0_45;
        MR_Word UserSharing_46;
        MR_Word Attrs_47;
        MR_Word FPInfo_48;
        MR_Word STATE_VARIABLE_Info_68_70;
        MR_Word STATE_VARIABLE_Specs_69_71;

        {
          ErrorContext_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, ErrorContext_43, 1) = ((MR_Box) (Context_14));
          MR_hl_field(3, ErrorContext_43, 2) = ((MR_Box) (Pragma0_13));
        }
        parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(InInt_8, ErrorContext_43, Vars0_39, &Vars_44, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_68_70, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_69_71);
        UserSharing0_45 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_36);
        if ((UserSharing0_45 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          UserSharing_46 = UserSharing0_45;
          *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_68_70;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_69_71;
        }
        else
        {
          MR_Word Sharing_86 = ((MR_Word) ((MR_hl_field(1, UserSharing0_45, (MR_Integer) 0))));
          MR_Word MaybeTypes0_87 = ((MR_Word) ((MR_hl_field(1, UserSharing0_45, (MR_Integer) 1))));

          if ((MaybeTypes0_87 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            UserSharing_46 = UserSharing0_45;
            *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_68_70;
            *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_69_71;
          }
          else
          {
            MR_Word Types0_88;
            MR_Word TVarset_89;
            MR_Word Types_90;
            MR_Word MaybeTypes_91;
            MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, MaybeTypes0_87, (MR_Integer) 0))));
            MR_Word Var_93;

            Types0_88 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
            TVarset_89 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 1))));
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_43, Types0_88, &Types_90, STATE_VARIABLE_Info_68_70, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_69_71, STATE_VARIABLE_Specs_20);
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_93, 0) = ((MR_Box) (Types_90));
              MR_hl_field(0, Var_93, 1) = ((MR_Box) (TVarset_89));
            }
            {
              MaybeTypes_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeTypes_91, 0) = ((MR_Box) (Var_93));
            }
            {
              UserSharing_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UserSharing_46, 0) = ((MR_Box) (Sharing_86));
              MR_hl_field(1, UserSharing_46, 1) = ((MR_Box) (MaybeTypes_91));
            }
          }
        }
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_46, Attrs0_36, &Attrs_47);
        {
          FPInfo_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FPInfo_48, 0) = ((MR_Box) (Attrs_47));
          MR_hl_field(0, FPInfo_48, 1) = ((MR_Box) (Name_37));
          MR_hl_field(0, FPInfo_48, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
          MR_hl_field(0, FPInfo_48, 3) = ((MR_Box) (Vars_44));
          MR_hl_field(0, FPInfo_48, 4) = ((MR_Box) (Varset_40));
          MR_hl_field(0, FPInfo_48, 5) = ((MR_Box) (InstVarset_41));
          MR_hl_field(0, FPInfo_48, 6) = ((MR_Box) (Impl_42));
        }
        Pragma_16 = (MR_Word) (MR_mkword(2, (MR_Word) (FPInfo_48)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo0_62 = ((MR_Word) ((MR_hl_field(3, Pragma0_13, (MR_Integer) 1))));
            MR_Word Origin_63 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_62, (MR_Integer) 0))));
            MR_Word Lang_64 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo0_62, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word PredNameModesPF0_65 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_62, (MR_Integer) 2))));
            MR_String CFunc_66 = ((MR_String) ((MR_hl_field(0, FPEInfo0_62, (MR_Integer) 3))));
            MR_Word VarSet_67 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_62, (MR_Integer) 4))));
            MR_Word PredNameModesPF_68;
            MR_Word FPEInfo_69;
            MR_Word Name_81 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_65, (MR_Integer) 1))));
            MR_Word PredOrFunc_82 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_65, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ErrorContext_83;
            MR_Word Modes0_84 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_65, (MR_Integer) 2))));
            MR_Word Modes_85;

            {
              ErrorContext_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_83, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_83, 1) = ((MR_Box) (Context_14));
              MR_hl_field(3, ErrorContext_83, 2) = ((MR_Box) (Pragma0_13));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_83, Modes0_84, &Modes_85, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
            {
              PredNameModesPF_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_68, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_82));
              MR_hl_field(0, PredNameModesPF_68, 1) = ((MR_Box) (Name_81));
              MR_hl_field(0, PredNameModesPF_68, 2) = ((MR_Box) (Modes_85));
            }
            {
              FPEInfo_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FPEInfo_69, 0) = ((MR_Box) (Origin_63));
              MR_hl_field(0, FPEInfo_69, 1) = (MR_Box) ((MR_Unsigned) (Lang_64));
              MR_hl_field(0, FPEInfo_69, 2) = ((MR_Box) (PredNameModesPF_68));
              MR_hl_field(0, FPEInfo_69, 3) = ((MR_Box) (CFunc_66));
              MR_hl_field(0, FPEInfo_69, 4) = ((MR_Box) (VarSet_67));
            }
            {
              Pragma_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Pragma_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Pragma_16, 1) = ((MR_Box) (FPEInfo_69));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
          {
            Pragma_16 = Pragma0_13;
            *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
            *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TabledInfo0_49 = ((MR_Word) ((MR_hl_field(3, Pragma0_13, (MR_Integer) 1))));
            MR_Word EvalMethod_50 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_49, (MR_Integer) 0))));
            MR_Word PredOrProcSpec0_51 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_49, (MR_Integer) 1))));
            MR_Word PFUMM0_52 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec0_51, (MR_Integer) 0))));
            MR_Word PredSymName_53 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec0_51, (MR_Integer) 1))));
            MR_Word PFUMM_58;
            MR_Word PredOrProcSpec_60;
            MR_Word TabledInfo_61;
            MR_Word Attrs_80 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_49, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) PFUMM0_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_54 = ((MR_Word) ((MR_hl_field(0, PFUMM0_52, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_54)) == (MR_Integer) 1))
                  {
                    PFUMM_58 = PFUMM0_52;
                    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
                    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
                  }
                  else
                  {
                    MR_Word Modes0_55 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_54, (MR_Integer) 0))));
                    MR_Word Modes_56;
                    MR_Word ModesOrArity_57;
                    MR_Word ErrorContext_72;

                    {
                      ErrorContext_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ErrorContext_72, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, ErrorContext_72, 1) = ((MR_Box) (Context_14));
                      MR_hl_field(3, ErrorContext_72, 2) = ((MR_Box) (Pragma0_13));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_72, Modes0_55, &Modes_56, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
                    {
                      ModesOrArity_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_57, 0) = ((MR_Box) (Modes_56));
                    }
                    {
                      PFUMM_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFUMM_58, 0) = ((MR_Box) (ModesOrArity_57));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_78 = ((MR_Word) ((MR_hl_field(1, PFUMM0_52, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_78)) == (MR_Integer) 1))
                  {
                    PFUMM_58 = PFUMM0_52;
                    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
                    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
                  }
                  else
                  {
                    MR_Word ErrorContext_73;
                    MR_Word Modes0_74 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_78, (MR_Integer) 0))));
                    MR_Word Modes_75;
                    MR_Word ModesOrArity_76;

                    {
                      ErrorContext_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ErrorContext_73, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, ErrorContext_73, 1) = ((MR_Box) (Context_14));
                      MR_hl_field(3, ErrorContext_73, 2) = ((MR_Box) (Pragma0_13));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_73, Modes0_74, &Modes_75, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
                    {
                      ModesOrArity_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_76, 0) = ((MR_Box) (Modes_75));
                    }
                    {
                      PFUMM_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PFUMM_58, 0) = ((MR_Box) (ModesOrArity_76));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_58 = PFUMM0_52;
                  *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
                  *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
                }
                break;
            }
            {
              PredOrProcSpec_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredOrProcSpec_60, 0) = ((MR_Box) (PFUMM_58));
              MR_hl_field(0, PredOrProcSpec_60, 1) = ((MR_Box) (PredSymName_53));
            }
            {
              TabledInfo_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TabledInfo_61, 0) = ((MR_Box) (EvalMethod_50));
              MR_hl_field(0, TabledInfo_61, 1) = ((MR_Box) (PredOrProcSpec_60));
              MR_hl_field(0, TabledInfo_61, 2) = ((MR_Box) (Attrs_80));
            }
            {
              Pragma_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Pragma_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Pragma_16, 1) = ((MR_Box) (TabledInfo_61));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ItemImplPragma_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Pragma_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (SeqNum_15));
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
    MR_Word * AddrPragmaVars_36;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_33, &Mode_35, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
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
    AddrPragmaVars_36 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(HeadVar__1_1, HeadVar__2_2, PragmaVars0_20, AddrPragmaVars_36, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_37,
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
      *AddrOfHeadVar__4_37 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word * AddrPragmaVars_36;
      MR_Word HeadVar__4_38;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_37;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_33, &Mode_35, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PragmaVar_21, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, PragmaVar_21, 1) = ((MR_Box) (Name_32));
        MR_hl_field(0, PragmaVar_21, 2) = ((MR_Box) (Mode_35));
        MR_hl_field(0, PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_34));
      }
      {
        HeadVar__4_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_38, 0) = ((MR_Box) (PragmaVar_21));
        MR_hl_field(1, HeadVar__4_38, 1) = NULL;
      }
      AddrPragmaVars_36 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_38, (MR_Integer) 1)));
      *AddrOfHeadVar__4_37 = HeadVar__4_38;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PragmaVars0_20;
      next_value_of_AddrOfHeadVar__4_37 = AddrPragmaVars_36;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_37 = next_value_of_AddrOfHeadVar__4_37;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemDeclPragma0_9,
  MR_Word * ItemDeclPragma_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word Pragma0_13 = ((MR_Word) ((MR_hl_field(0, ItemDeclPragma0_9, (MR_Integer) 0))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemDeclPragma0_9, (MR_Integer) 1))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(0, ItemDeclPragma0_9, (MR_Integer) 2))));
  MR_Word Pragma_16;

  parse_tree__module_qual__qualify_items__qualify_decl_pragma_8_p_0(InInt_8, Context_14, Pragma0_13, &Pragma_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ItemDeclPragma_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Pragma_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (SeqNum_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_decl_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72)
{
  switch (MR_tag((MR_Word) Pragma0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Pragma_12 = Pragma0_11;
        *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
        *STATE_VARIABLE_Specs_72 = STATE_VARIABLE_Specs_0_71;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecInfo0_15 = ((MR_Word) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 1))));
            MR_Word PFUMM0_16 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_15, (MR_Integer) 0))));
            MR_Word PredName_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_15, (MR_Integer) 1))));
            MR_Word SpecPredName_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_15, (MR_Integer) 2))));
            MR_Word Subst0_19 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_15, (MR_Integer) 3))));
            MR_Word TVarSet_20 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_15, (MR_Integer) 4))));
            MR_Word Items_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_15, (MR_Integer) 5))));
            MR_Word ErrorContext_22;
            MR_Word PFUMM_27;
            MR_Word HeadSubst0_29;
            MR_Word TailSubsts0_30;
            MR_Word HeadSubst_31;
            MR_Word TailSubsts_32;
            MR_Word Subst_33;
            MR_Word TypeSpecInfo_34;
            MR_Word STATE_VARIABLE_Info_73_73;
            MR_Word STATE_VARIABLE_Specs_74_74;

            {
              ErrorContext_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ErrorContext_22, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, ErrorContext_22, 2) = ((MR_Box) (Pragma0_11));
            }
            switch (MR_tag((MR_Word) PFUMM0_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_23 = ((MR_Word) ((MR_hl_field(0, PFUMM0_16, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_23)) == (MR_Integer) 1))
                  {
                    PFUMM_27 = PFUMM0_16;
                    STATE_VARIABLE_Info_73_73 = STATE_VARIABLE_Info_0_69;
                    STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_71;
                  }
                  else
                  {
                    MR_Word Modes0_24 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_23, (MR_Integer) 0))));
                    MR_Word Modes_25;
                    MR_Word ModesOrArity_26;

                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_22, Modes0_24, &Modes_25, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Specs_0_71, &STATE_VARIABLE_Specs_74_74);
                    {
                      ModesOrArity_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_26, 0) = ((MR_Box) (Modes_25));
                    }
                    {
                      PFUMM_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFUMM_27, 0) = ((MR_Box) (ModesOrArity_26));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_98 = ((MR_Word) ((MR_hl_field(1, PFUMM0_16, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_98)) == (MR_Integer) 1))
                  {
                    PFUMM_27 = PFUMM0_16;
                    STATE_VARIABLE_Info_73_73 = STATE_VARIABLE_Info_0_69;
                    STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_71;
                  }
                  else
                  {
                    MR_Word Modes0_89 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_98, (MR_Integer) 0))));
                    MR_Word Modes_90;
                    MR_Word ModesOrArity_91;

                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_22, Modes0_89, &Modes_90, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Specs_0_71, &STATE_VARIABLE_Specs_74_74);
                    {
                      ModesOrArity_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_91, 0) = ((MR_Box) (Modes_90));
                    }
                    {
                      PFUMM_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PFUMM_27, 0) = ((MR_Box) (ModesOrArity_91));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_27 = PFUMM0_16;
                  STATE_VARIABLE_Info_73_73 = STATE_VARIABLE_Info_0_69;
                  STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_71;
                }
                break;
            }
            HeadSubst0_29 = ((MR_Word) ((MR_hl_field(0, Subst0_19, (MR_Integer) 0))));
            TailSubsts0_30 = ((MR_Word) ((MR_hl_field(0, Subst0_19, (MR_Integer) 1))));
            parse_tree__module_qual__qualify_items__qualify_type_spec_subst_10_p_0(InInt_9, ErrorContext_22, HeadSubst0_29, &HeadSubst_31, TailSubsts0_30, &TailSubsts_32, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_70, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_72);
            {
              Subst_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Subst_33, 0) = ((MR_Box) (HeadSubst_31));
              MR_hl_field(0, Subst_33, 1) = ((MR_Box) (TailSubsts_32));
            }
            {
              TypeSpecInfo_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecInfo_34, 0) = ((MR_Box) (PFUMM_27));
              MR_hl_field(0, TypeSpecInfo_34, 1) = ((MR_Box) (PredName_17));
              MR_hl_field(0, TypeSpecInfo_34, 2) = ((MR_Box) (SpecPredName_18));
              MR_hl_field(0, TypeSpecInfo_34, 3) = ((MR_Box) (Subst_33));
              MR_hl_field(0, TypeSpecInfo_34, 4) = ((MR_Box) (TVarSet_20));
              MR_hl_field(0, TypeSpecInfo_34, 5) = ((MR_Box) (Items_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecInfo_34));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OISUInfo0_35 = ((MR_Word) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 1))));
            MR_Word TypeCtor0_36 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_35, (MR_Integer) 0))));
            MR_Word CreatorPreds_37 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_35, (MR_Integer) 1))));
            MR_Word MutatorPreds_38 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_35, (MR_Integer) 2))));
            MR_Word DestructorPreds_39 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_35, (MR_Integer) 3))));
            MR_Word TypeCtor_40;
            MR_Word OISUInfo_41;
            MR_Word ErrorContext_105;

            {
              ErrorContext_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_105, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ErrorContext_105, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, ErrorContext_105, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_105, TypeCtor0_36, &TypeCtor_40, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70, STATE_VARIABLE_Specs_0_71, STATE_VARIABLE_Specs_72);
            {
              OISUInfo_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OISUInfo_41, 0) = ((MR_Box) (TypeCtor_40));
              MR_hl_field(0, OISUInfo_41, 1) = ((MR_Box) (CreatorPreds_37));
              MR_hl_field(0, OISUInfo_41, 2) = ((MR_Box) (MutatorPreds_38));
              MR_hl_field(0, OISUInfo_41, 3) = ((MR_Box) (DestructorPreds_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (OISUInfo_41));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            *Pragma_12 = Pragma0_11;
            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
            *STATE_VARIABLE_Specs_72 = STATE_VARIABLE_Specs_0_71;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TermInfo0_42 = ((MR_Word) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_43 = ((MR_Word) ((MR_hl_field(0, TermInfo0_42, (MR_Integer) 0))));
            MR_Word Args_44 = ((MR_Word) ((MR_hl_field(0, TermInfo0_42, (MR_Integer) 1))));
            MR_Word Term_45 = ((MR_Word) ((MR_hl_field(0, TermInfo0_42, (MR_Integer) 2))));
            MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_43, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_47 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_43, (MR_Integer) 1))));
            MR_Word PredNameModesPF_48;
            MR_Word TermInfo_49;
            MR_Word ErrorContext_106;
            MR_Word Modes0_107 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_43, (MR_Integer) 2))));
            MR_Word Modes_108;

            {
              ErrorContext_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_106, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ErrorContext_106, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, ErrorContext_106, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_106, Modes0_107, &Modes_108, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70, STATE_VARIABLE_Specs_0_71, STATE_VARIABLE_Specs_72);
            {
              PredNameModesPF_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_46));
              MR_hl_field(0, PredNameModesPF_48, 1) = ((MR_Box) (SymName_47));
              MR_hl_field(0, PredNameModesPF_48, 2) = ((MR_Box) (Modes_108));
            }
            {
              TermInfo_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TermInfo_49, 0) = ((MR_Box) (PredNameModesPF_48));
              MR_hl_field(0, TermInfo_49, 1) = ((MR_Box) (Args_44));
              MR_hl_field(0, TermInfo_49, 2) = ((MR_Box) (Term_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TermInfo_49));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Term2Info0_50 = ((MR_Word) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 1))));
            MR_Word SuccessArgs_51 = ((MR_Word) ((MR_hl_field(0, Term2Info0_50, (MR_Integer) 1))));
            MR_Word FailureArgs_52 = ((MR_Word) ((MR_hl_field(0, Term2Info0_50, (MR_Integer) 2))));
            MR_Word Term2Info_53;
            MR_Word ErrorContext_109;
            MR_Word Modes0_110;
            MR_Word Modes_111;
            MR_Word PredNameModesPF0_112 = ((MR_Word) ((MR_hl_field(0, Term2Info0_50, (MR_Integer) 0))));
            MR_Word Term_113 = ((MR_Word) ((MR_hl_field(0, Term2Info0_50, (MR_Integer) 3))));
            MR_Word PredOrFunc_114 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_112, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_115 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_112, (MR_Integer) 1))));
            MR_Word PredNameModesPF_116;

            Modes0_110 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_112, (MR_Integer) 2))));
            {
              ErrorContext_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_109, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ErrorContext_109, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, ErrorContext_109, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_109, Modes0_110, &Modes_111, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70, STATE_VARIABLE_Specs_0_71, STATE_VARIABLE_Specs_72);
            {
              PredNameModesPF_116 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_116, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_114));
              MR_hl_field(0, PredNameModesPF_116, 1) = ((MR_Box) (SymName_115));
              MR_hl_field(0, PredNameModesPF_116, 2) = ((MR_Box) (Modes_111));
            }
            {
              Term2Info_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Term2Info_53, 0) = ((MR_Box) (PredNameModesPF_116));
              MR_hl_field(0, Term2Info_53, 1) = ((MR_Box) (SuccessArgs_51));
              MR_hl_field(0, Term2Info_53, 2) = ((MR_Box) (FailureArgs_52));
              MR_hl_field(0, Term2Info_53, 3) = ((MR_Box) (Term_113));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Term2Info_53));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word SharingInfo0_54 = ((MR_Word) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 1))));
            MR_Word HeadVars_55 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_54, (MR_Integer) 1))));
            MR_Word HeadVarTypes_56 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_54, (MR_Integer) 2))));
            MR_Word VarSet_57 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_54, (MR_Integer) 3))));
            MR_Word MaybeSharing_58 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_54, (MR_Integer) 5))));
            MR_Word SharingInfo_59;
            MR_Word TVarSet_117 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_54, (MR_Integer) 4))));
            MR_Word ErrorContext_118;
            MR_Word Modes0_119;
            MR_Word Modes_120;
            MR_Word PredNameModesPF0_121 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_54, (MR_Integer) 0))));
            MR_Word PredOrFunc_122 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_121, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_123 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_121, (MR_Integer) 1))));
            MR_Word PredNameModesPF_124;

            Modes0_119 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_121, (MR_Integer) 2))));
            {
              ErrorContext_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_118, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ErrorContext_118, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, ErrorContext_118, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_118, Modes0_119, &Modes_120, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70, STATE_VARIABLE_Specs_0_71, STATE_VARIABLE_Specs_72);
            {
              PredNameModesPF_124 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_124, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_122));
              MR_hl_field(0, PredNameModesPF_124, 1) = ((MR_Box) (SymName_123));
              MR_hl_field(0, PredNameModesPF_124, 2) = ((MR_Box) (Modes_120));
            }
            {
              SharingInfo_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SharingInfo_59, 0) = ((MR_Box) (PredNameModesPF_124));
              MR_hl_field(0, SharingInfo_59, 1) = ((MR_Box) (HeadVars_55));
              MR_hl_field(0, SharingInfo_59, 2) = ((MR_Box) (HeadVarTypes_56));
              MR_hl_field(0, SharingInfo_59, 3) = ((MR_Box) (VarSet_57));
              MR_hl_field(0, SharingInfo_59, 4) = ((MR_Box) (TVarSet_117));
              MR_hl_field(0, SharingInfo_59, 5) = ((MR_Box) (MaybeSharing_58));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SharingInfo_59));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ReuseInfo0_60 = ((MR_Word) ((MR_hl_field(3, Pragma0_11, (MR_Integer) 1))));
            MR_Word MaybeReuse_61 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_60, (MR_Integer) 5))));
            MR_Word ReuseInfo_62;
            MR_Word TVarSet_125 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_60, (MR_Integer) 4))));
            MR_Word ErrorContext_126;
            MR_Word Modes0_127;
            MR_Word Modes_128;
            MR_Word PredNameModesPF0_129 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_60, (MR_Integer) 0))));
            MR_Word PredOrFunc_130 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_129, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_131 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_129, (MR_Integer) 1))));
            MR_Word PredNameModesPF_132;
            MR_Word HeadVars_133 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_60, (MR_Integer) 1))));
            MR_Word HeadVarTypes_134 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_60, (MR_Integer) 2))));
            MR_Word VarSet_135 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_60, (MR_Integer) 3))));

            Modes0_127 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_129, (MR_Integer) 2))));
            {
              ErrorContext_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_126, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ErrorContext_126, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, ErrorContext_126, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_126, Modes0_127, &Modes_128, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70, STATE_VARIABLE_Specs_0_71, STATE_VARIABLE_Specs_72);
            {
              PredNameModesPF_132 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_132, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_130));
              MR_hl_field(0, PredNameModesPF_132, 1) = ((MR_Box) (SymName_131));
              MR_hl_field(0, PredNameModesPF_132, 2) = ((MR_Box) (Modes_128));
            }
            {
              ReuseInfo_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReuseInfo_62, 0) = ((MR_Box) (PredNameModesPF_132));
              MR_hl_field(0, ReuseInfo_62, 1) = ((MR_Box) (HeadVars_133));
              MR_hl_field(0, ReuseInfo_62, 2) = ((MR_Box) (HeadVarTypes_134));
              MR_hl_field(0, ReuseInfo_62, 3) = ((MR_Box) (VarSet_135));
              MR_hl_field(0, ReuseInfo_62, 4) = ((MR_Box) (TVarSet_125));
              MR_hl_field(0, ReuseInfo_62, 5) = ((MR_Box) (MaybeReuse_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ReuseInfo_62));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_10_p_0(
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
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_spec_subst__1_10_p_0(InInt_11, ErrorContext_12, HeadTailSubst0_22, AddrHeadTailSubst_33, TailTailSubsts0_23, AddrTailTailSubsts_32, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_spec_subst__1_10_p_0(
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
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_18);
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
    MR_hl_field(3, ErrorContext_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ErrorContext_19, 1) = ((MR_Box) (Context_17));
  }
  parse_tree__module_qual__mq_info_get_suppress_found_undef_2_p_0(STATE_VARIABLE_Info_0_22, &OldSuppressUndef_20);
  parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
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
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_27_27, &Types_32);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_19, Types_32, (MR_Integer) 0, TypeCtorId0_31, &SymName_33, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    {
      TypeCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_21, 0) = ((MR_Box) (SymName_33));
      MR_hl_field(0, TypeCtor_21, 1) = ((MR_Box) (Arity_30));
    }
  }
  parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0(OldSuppressUndef_20, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_23);
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
    MR_hl_field(3, ErrorContext_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_27);
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
  MR_Word TypesAndModes0_15 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_9, (MR_Integer) 2))));
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
  MR_Word TypesAndModes_31;
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
  MR_Word UnivCs0_52;
  MR_Word ExistCs0_53;
  MR_Word UnivCs_54;
  MR_Word ExistCs_55;
  MR_Word STATE_VARIABLE_Info_23_56;
  MR_Word STATE_VARIABLE_Specs_24_57;

  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_15);
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
  parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_8, ErrorContext_30, TypesAndModes0_15, &TypesAndModes_31, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_46_46);
  {
    ConstraintErrorContext_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConstraintErrorContext_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ConstraintErrorContext_32, 1) = ((MR_Box) (Context_25));
    MR_hl_field(3, ConstraintErrorContext_32, 2) = ((MR_Box) (PFSymNameArity_28));
  }
  UnivCs0_52 = ((MR_Word) ((MR_hl_field(0, Constraints0_24, (MR_Integer) 0))));
  ExistCs0_53 = ((MR_Word) ((MR_hl_field(0, Constraints0_24, (MR_Integer) 1))));
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_32, UnivCs0_52, &UnivCs_54, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_23_56, STATE_VARIABLE_Specs_46_46, &STATE_VARIABLE_Specs_24_57);
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_32, ExistCs0_53, &ExistCs_55, STATE_VARIABLE_Info_23_56, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_24_57, &STATE_VARIABLE_Specs_48_48);
  {
    Constraints_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraints_33, 0) = ((MR_Box) (UnivCs_54));
    MR_hl_field(0, Constraints_33, 1) = ((MR_Box) (ExistCs_55));
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
    MR_hl_field(0, base, 2) = ((MR_Box) (TypesAndModes_31));
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
    MR_hl_field(3, ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, ErrorContext_23, 1) = ((MR_Box) (Context_20));
    MR_hl_field(3, ErrorContext_23, 2) = ((MR_Box) (Var_36));
  }
  switch (InInt_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_0_32;
      break;
    case (MR_Integer) 1:
      parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_38_38);
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
  parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_39_39, &ClassIdSet_45);
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

      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Name_27, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[12]), &DefaultModuleName_48);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_13[0]));
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Vars_14, &Arity_21);
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
      MR_hl_field(3, ErrorContext_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
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
    MR_Word * AddrDecls_82;

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
      MR_Word TypesAndModes0_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 2))));
      MR_Word MaybeWithType0_35 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 3))));
      MR_Word MaybeWithInst0_36 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 4))));
      MR_Word MaybeDetism_37 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 5))));
      MR_Word TypeVarset_38 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 6))));
      MR_Word InstVarset_39 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 7))));
      MR_Word ExistQVars_40 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 8))));
      MR_Word Purity_41 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 9))) & (MR_Integer) 3);
      MR_Word Constraints0_42 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 10))));
      MR_Word Context_43 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 11))));
      MR_Word TypesAndModes_44;
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
      MR_Word UnivCs0_76;
      MR_Word ExistCs0_77;
      MR_Word UnivCs_78;
      MR_Word ExistCs_79;
      MR_Word STATE_VARIABLE_Info_23_80;
      MR_Word STATE_VARIABLE_Specs_24_81;

      parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_34, &TypesAndModes_44, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_47_59, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_48_60);
      Var_61 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_32);
      {
        ConstraintErrorContext_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ConstraintErrorContext_45, 0) = ((MR_Box) (Context_43));
        MR_hl_field(1, ConstraintErrorContext_45, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
        MR_hl_field(1, ConstraintErrorContext_45, 2) = ((MR_Box) (Var_61));
      }
      UnivCs0_76 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 0))));
      ExistCs0_77 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, UnivCs0_76, &UnivCs_78, STATE_VARIABLE_Info_47_59, &STATE_VARIABLE_Info_23_80, STATE_VARIABLE_Specs_48_60, &STATE_VARIABLE_Specs_24_81);
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, ExistCs0_77, &ExistCs_79, STATE_VARIABLE_Info_23_80, &STATE_VARIABLE_Info_50_62, STATE_VARIABLE_Specs_24_81, &STATE_VARIABLE_Specs_51_63);
      {
        Constraints_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraints_46, 0) = ((MR_Box) (UnivCs_78));
        MR_hl_field(0, Constraints_46, 1) = ((MR_Box) (ExistCs_79));
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
        MR_hl_field(0, PredOrFuncInfo_53, 2) = ((MR_Box) (TypesAndModes_44));
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
    AddrDecls_82 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Decls0_20, AddrDecls_82, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_83,
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
      *AddrOfHeadVar__4_83 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word * AddrDecls_82;
      MR_Word HeadVar__4_84;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_83;
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
        MR_Word TypesAndModes0_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 2))));
        MR_Word MaybeWithType0_35 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 3))));
        MR_Word MaybeWithInst0_36 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 4))));
        MR_Word MaybeDetism_37 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 5))));
        MR_Word TypeVarset_38 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 6))));
        MR_Word InstVarset_39 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 7))));
        MR_Word ExistQVars_40 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 8))));
        MR_Word Purity_41 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 9))) & (MR_Integer) 3);
        MR_Word Constraints0_42 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 10))));
        MR_Word Context_43 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_31, (MR_Integer) 11))));
        MR_Word TypesAndModes_44;
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
        MR_Word UnivCs0_76;
        MR_Word ExistCs0_77;
        MR_Word UnivCs_78;
        MR_Word ExistCs_79;
        MR_Word STATE_VARIABLE_Info_23_80;
        MR_Word STATE_VARIABLE_Specs_24_81;

        parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_34, &TypesAndModes_44, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_47_59, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_48_60);
        Var_61 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_32);
        {
          ConstraintErrorContext_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConstraintErrorContext_45, 0) = ((MR_Box) (Context_43));
          MR_hl_field(1, ConstraintErrorContext_45, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
          MR_hl_field(1, ConstraintErrorContext_45, 2) = ((MR_Box) (Var_61));
        }
        UnivCs0_76 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 0))));
        ExistCs0_77 = ((MR_Word) ((MR_hl_field(0, Constraints0_42, (MR_Integer) 1))));
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, UnivCs0_76, &UnivCs_78, STATE_VARIABLE_Info_47_59, &STATE_VARIABLE_Info_23_80, STATE_VARIABLE_Specs_48_60, &STATE_VARIABLE_Specs_24_81);
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_45, ExistCs0_77, &ExistCs_79, STATE_VARIABLE_Info_23_80, &STATE_VARIABLE_Info_50_62, STATE_VARIABLE_Specs_24_81, &STATE_VARIABLE_Specs_51_63);
        {
          Constraints_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Constraints_46, 0) = ((MR_Box) (UnivCs_78));
          MR_hl_field(0, Constraints_46, 1) = ((MR_Box) (ExistCs_79));
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
          MR_hl_field(0, PredOrFuncInfo_53, 2) = ((MR_Box) (TypesAndModes_44));
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
        HeadVar__4_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_84, 0) = ((MR_Box) (Decl_21));
        MR_hl_field(1, HeadVar__4_84, 1) = NULL;
      }
      AddrDecls_82 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_84, (MR_Integer) 1)));
      *AddrOfHeadVar__4_83 = HeadVar__4_84;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Decls0_20;
      next_value_of_AddrOfHeadVar__4_83 = AddrDecls_82;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_83 = next_value_of_AddrOfHeadVar__4_83;
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
    MR_Word * AddrTypesAndModes_39;

    if (((MR_tag((MR_Word) TypeAndMode0_19)) == (MR_Integer) 1))
    {
      MR_Word Mode0_33 = ((MR_Word) ((MR_hl_field(1, TypeAndMode0_19, (MR_Integer) 1))));
      MR_Word Mode_34;
      MR_Word STATE_VARIABLE_Info_25_35;
      MR_Word STATE_VARIABLE_Specs_26_36;
      MR_Word Type0_37 = ((MR_Word) ((MR_hl_field(1, TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Type_38;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_37, &Type_38, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_25_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_26_36);
      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_33, &Mode_34, STATE_VARIABLE_Info_25_35, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_26_36, &STATE_VARIABLE_Specs_30_30);
      {
        TypeAndMode_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TypeAndMode_21, 0) = ((MR_Box) (Type_38));
        MR_hl_field(1, TypeAndMode_21, 1) = ((MR_Box) (Mode_34));
      }
    }
    else
    {
      MR_Word Type0_31 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Type_32;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_31, &Type_32, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeAndMode_21, 0) = ((MR_Box) (Type_32));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAndMode_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypesAndModes_39 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_20, AddrTypesAndModes_39, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_40,
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
      *AddrOfHeadVar__4_40 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word * AddrTypesAndModes_39;
      MR_Word HeadVar__4_41;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_40;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) TypeAndMode0_19)) == (MR_Integer) 1))
      {
        MR_Word Mode0_33 = ((MR_Word) ((MR_hl_field(1, TypeAndMode0_19, (MR_Integer) 1))));
        MR_Word Mode_34;
        MR_Word STATE_VARIABLE_Info_25_35;
        MR_Word STATE_VARIABLE_Specs_26_36;
        MR_Word Type0_37 = ((MR_Word) ((MR_hl_field(1, TypeAndMode0_19, (MR_Integer) 0))));
        MR_Word Type_38;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_37, &Type_38, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_25_35, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_26_36);
        parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_33, &Mode_34, STATE_VARIABLE_Info_25_35, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_26_36, &STATE_VARIABLE_Specs_30_30);
        {
          TypeAndMode_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypeAndMode_21, 0) = ((MR_Box) (Type_38));
          MR_hl_field(1, TypeAndMode_21, 1) = ((MR_Box) (Mode_34));
        }
      }
      else
      {
        MR_Word Type0_31 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_19, (MR_Integer) 0))));
        MR_Word Type_32;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_31, &Type_32, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
        {
          TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeAndMode_21, 0) = ((MR_Box) (Type_32));
        }
      }
      {
        HeadVar__4_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_41, 0) = ((MR_Box) (TypeAndMode_21));
        MR_hl_field(1, HeadVar__4_41, 1) = NULL;
      }
      AddrTypesAndModes_39 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_41, (MR_Integer) 1)));
      *AddrOfHeadVar__4_40 = HeadVar__4_41;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TypesAndModes0_20;
      next_value_of_AddrOfHeadVar__4_40 = AddrTypesAndModes_39;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
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
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_66, &Arity_71);
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

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__353__1__ho12_8_p_0((MR_Integer) 1, Defn0_77, &Defn_78, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_34_34);
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

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__353__1__ho12_8_p_0((MR_Integer) 0, Defn0_82, &Defn_83, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_27);
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__353__1__ho12_8_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_56, &Arity_61);
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
    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_10, ErrorContext_18, Mode0_19, &Mode_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
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
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_66, &Arity_72);
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
      parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_33_79, &Types_86);
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

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__329__1__ho11_8_p_0((MR_Integer) 1, Defn0_92, &Defn_93, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_34_34);
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

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__329__1__ho11_8_p_0((MR_Integer) 0, Defn0_97, &Defn_98, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_27);
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__329__1__ho11_8_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_56, &Arity_62);
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
      parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_33_69, &Types_76);
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

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__303__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv13_HeadVar__4_189, ((MR_Word) (wrapper_arg_3)), &conv12_HeadVar__6_191, ((MR_Word) (wrapper_arg_5)), &conv11_HeadVar__8_193);
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

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__299__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__4_170, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__6_172, ((MR_Word) (wrapper_arg_5)), &conv3_HeadVar__8_174);
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

      parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__251__1__ho10_8_p_0((MR_Integer) 1, Defn0_212, &Defn_213, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_59_59);
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
          MR_Word InInt_91 = ((&parse_tree__module_qual__qualify_items_vector_common_10[0 + DuStatus_34]))->parse_tree__module_qual__qualify_items__vector_common_type_10_0__vct_10_f_0;

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

              InInt_92 = ((&parse_tree__module_qual__qualify_items_vector_common_10[4 + DuStatus_93]))->parse_tree__module_qual__qualify_items__vector_common_type_10_0__vct_10_f_0;
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
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_12[0]), IntDefns0_43, &IntDefns_46, ((MR_Box) (STATE_VARIABLE_Info_64_64)), &conv7_STATE_VARIABLE_Info_76_76, ((MR_Box) (STATE_VARIABLE_Specs_65_65)), &conv6_STATE_VARIABLE_Specs_77_77);
    STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv7_STATE_VARIABLE_Info_76_76));
    STATE_VARIABLE_Specs_77_77 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_77_77));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_12[1]), ImpDefns0_44, &ImpDefns_47, ((MR_Box) (STATE_VARIABLE_Info_76_76)), &conv15_STATE_VARIABLE_Info_81_81, ((MR_Box) (STATE_VARIABLE_Specs_77_77)), &conv14_STATE_VARIABLE_Specs_82_82);
    STATE_VARIABLE_Info_81_81 = ((MR_Word) (conv15_STATE_VARIABLE_Info_81_81));
    STATE_VARIABLE_Specs_82_82 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_82_82));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[15]), ImpForeignEnums0_45, &ImpForeignEnums_48, ((MR_Box) (STATE_VARIABLE_Info_81_81)), &conv20_STATE_VARIABLE_Info_50, ((MR_Box) (STATE_VARIABLE_Specs_82_82)), &conv19_STATE_VARIABLE_Specs_52);
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

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__251__1__ho10_8_p_0(InInt_10, Defn0_15, &Defn_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Defn_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__251__1__ho10_8_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_121, &Arity_126);
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
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
    MR_hl_field(3, ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 14U));
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
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
    parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_42);
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
      parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_42);
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

void MR_CALL 
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
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) (EventName_35));
      MR_hl_field(0, Var_40, 5) = ((MR_Box) (FileName_2));
      MR_hl_field(0, Var_40, 6) = ((MR_Box) (EventLineNumber_36));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_40, Attrs0_37, &Attrs_39, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
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

void MR_CALL 
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
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0_1));
        MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_40, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_40, 4) = ((MR_Box) (EventName_35));
        MR_hl_field(0, Var_40, 5) = ((MR_Box) (FileName_2));
        MR_hl_field(0, Var_40, 6) = ((MR_Box) (EventLineNumber_36));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_40, Attrs0_37, &Attrs_39, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
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

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * AddrOfType_121,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfType_121 = Type0_11;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
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
          MR_Word STATE_VARIABLE_Info_39_39;
          MR_Word STATE_VARIABLE_Specs_40_40;
          MR_Word * AddrArgs_118;
          MR_Word Type_123;

          Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
          {
            TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
            MR_hl_field(0, TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
          }
          parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_22);
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_40_40);
          {
            Type_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_123, 0) = ((MR_Box) (SymName_23));
            MR_hl_field(1, Type_123, 1) = NULL;
            MR_hl_field(1, Type_123, 2) = ((MR_Box) (Kind_19));
          }
          AddrArgs_118 = (MR_Word *) (&(MR_hl_field(1, Type_123, (MR_Integer) 1)));
          *AddrOfType_121 = Type_123;
          parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_118, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_40_40, STATE_VARIABLE_Specs_37);
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
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[11]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);

                switch (Var_109) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[1]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 4:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[2]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 6:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[3]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 8:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[4]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 2:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[5]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[6]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 5:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[7]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 7:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[8]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 9:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[9]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 3:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[10]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                }
              }
              break;
          }
          *AddrOfType_121 = Type0_11;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_101 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
              MR_Word Kind_102 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word * AddrArgs_120;
              MR_Word Type_130;

              {
                Type_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Type_130, 1) = NULL;
                MR_hl_field(3, Type_130, 2) = ((MR_Box) (Kind_102));
              }
              AddrArgs_120 = (MR_Word *) (&(MR_hl_field(3, Type_130, (MR_Integer) 1)));
              *AddrOfType_121 = Type_130;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_101, AddrArgs_120, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo0_27 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
              MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word HOInstInfo_30;
              MR_Word STATE_VARIABLE_Info_89_89;
              MR_Word STATE_VARIABLE_Specs_90_90;
              MR_Word Args0_99 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word Args_100;
              MR_Word Type_126;

              parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_99, &Args_100, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_90_90);
              if ((HOInstInfo0_27 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                HOInstInfo_30 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_89_89;
                *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_90_90;
              }
              else
              {
                MR_Word PredOrFunc_110;
                MR_Word Modes0_111;
                MR_Word MaybeArgRegs_112;
                MR_Word Detism_113;
                MR_Word Modes_114;
                MR_Word Var_115 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_27), (MR_Integer) 1));
                MR_Word Var_116;

                PredOrFunc_110 = ((MR_Unsigned) ((MR_hl_field(0, Var_115, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes0_111 = ((MR_Word) ((MR_hl_field(0, Var_115, (MR_Integer) 1))));
                MaybeArgRegs_112 = ((MR_Word) ((MR_hl_field(0, Var_115, (MR_Integer) 2))));
                Detism_113 = ((MR_Unsigned) ((MR_hl_field(0, Var_115, (MR_Integer) 3))) & (MR_Integer) 7);
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_111, &Modes_114, STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_90_90, STATE_VARIABLE_Specs_37);
                {
                  Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_116, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_110));
                  MR_hl_field(0, Var_116, 1) = ((MR_Box) (Modes_114));
                  MR_hl_field(0, Var_116, 2) = ((MR_Box) (MaybeArgRegs_112));
                  MR_hl_field(0, Var_116, 3) = (MR_Box) ((MR_Unsigned) (Detism_113));
                }
                HOInstInfo_30 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_116)));
              }
              {
                Type_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_126, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Type_126, 1) = (MR_Box) ((MR_Unsigned) (PorF_26));
                MR_hl_field(3, Type_126, 2) = ((MR_Box) (Args_100));
                MR_hl_field(3, Type_126, 3) = ((MR_Box) (HOInstInfo_30));
                MR_hl_field(3, Type_126, 4) = (MR_Box) ((MR_Unsigned) (Purity_28));
                MR_hl_field(3, Type_126, 5) = NULL;
              }
              *AddrOfType_121 = Type_126;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
              MR_Word Args0_104 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word Kind_105 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
              MR_Word Type_12;
              MR_Word * AddrArgs_117;

              {
                Type_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Type_12, 1) = ((MR_Box) (Var_31));
                MR_hl_field(3, Type_12, 2) = NULL;
                MR_hl_field(3, Type_12, 3) = ((MR_Box) (Kind_105));
              }
              AddrArgs_117 = (MR_Word *) (&(MR_hl_field(3, Type_12, (MR_Integer) 2)));
              *AddrOfType_121 = Type_12;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_104, AddrArgs_117, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType0_32 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
              MR_Word Kind_107 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
              MR_Word * AddrSubType_119;
              MR_Word Type_127;
              MR_Word next_value_of_Type0_11;
              MR_Word * next_value_of_AddrOfType_121;

              {
                Type_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_127, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Type_127, 1) = NULL;
                MR_hl_field(3, Type_127, 2) = ((MR_Box) (Kind_107));
              }
              AddrSubType_119 = (MR_Word *) (&(MR_hl_field(3, Type_127, (MR_Integer) 1)));
              *AddrOfType_121 = Type_127;
              // direct tailcall eliminated
              ;
              next_value_of_Type0_11 = SubType0_32;
              next_value_of_AddrOfType_121 = AddrSubType_119;
              Type0_11 = next_value_of_Type0_11;
              AddrOfType_121 = next_value_of_AddrOfType_121;
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

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  switch (MR_tag((MR_Word) Type0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_12 = Type0_11;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
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
        MR_Word STATE_VARIABLE_Info_39_39;
        MR_Word STATE_VARIABLE_Specs_40_40;
        MR_Word * AddrArgs_118;

        Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
        {
          TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
          MR_hl_field(0, TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
        }
        parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_22);
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_40_40);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(1, base, 1) = NULL;
          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_19));
        }
        AddrArgs_118 = (MR_Word *) (&(MR_hl_field(1, *Type_12, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_118, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_40_40, STATE_VARIABLE_Specs_37);
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
                parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                break;
              case (MR_Integer) 1:
                parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[11]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (Var_109) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[1]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 4:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[2]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 6:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[3]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 8:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[4]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 2:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[5]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[6]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 5:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[7]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 7:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[8]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 9:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[9]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 3:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[10]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
              }
            }
            break;
        }
        *Type_12 = Type0_11;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args0_101 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
            MR_Word Kind_102 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_120;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = NULL;
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_102));
            }
            AddrArgs_120 = (MR_Word *) (&(MR_hl_field(3, *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_101, AddrArgs_120, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo0_27 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
            MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(3, Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word HOInstInfo_30;
            MR_Word STATE_VARIABLE_Info_89_89;
            MR_Word STATE_VARIABLE_Specs_90_90;
            MR_Word Args0_99 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word Args_100;

            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_99, &Args_100, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_90_90);
            if ((HOInstInfo0_27 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HOInstInfo_30 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_89_89;
              *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_90_90;
            }
            else
            {
              MR_Word PredOrFunc_110;
              MR_Word Modes0_111;
              MR_Word MaybeArgRegs_112;
              MR_Word Detism_113;
              MR_Word Modes_114;
              MR_Word Var_115 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_27), (MR_Integer) 1));
              MR_Word Var_116;

              PredOrFunc_110 = ((MR_Unsigned) ((MR_hl_field(0, Var_115, (MR_Integer) 0))) & (MR_Integer) 1);
              Modes0_111 = ((MR_Word) ((MR_hl_field(0, Var_115, (MR_Integer) 1))));
              MaybeArgRegs_112 = ((MR_Word) ((MR_hl_field(0, Var_115, (MR_Integer) 2))));
              Detism_113 = ((MR_Unsigned) ((MR_hl_field(0, Var_115, (MR_Integer) 3))) & (MR_Integer) 7);
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_111, &Modes_114, STATE_VARIABLE_Info_89_89, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_90_90, STATE_VARIABLE_Specs_37);
              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_116, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_110));
                MR_hl_field(0, Var_116, 1) = ((MR_Box) (Modes_114));
                MR_hl_field(0, Var_116, 2) = ((MR_Box) (MaybeArgRegs_112));
                MR_hl_field(0, Var_116, 3) = (MR_Box) ((MR_Unsigned) (Detism_113));
              }
              HOInstInfo_30 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_116)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_26));
              MR_hl_field(3, base, 2) = ((MR_Box) (Args_100));
              MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_30));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_28));
              MR_hl_field(3, base, 5) = NULL;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
            MR_Word Args0_104 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word Kind_105 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 3))));
            MR_Word * AddrArgs_117;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(3, base, 2) = NULL;
              MR_hl_field(3, base, 3) = ((MR_Box) (Kind_105));
            }
            AddrArgs_117 = (MR_Word *) (&(MR_hl_field(3, *Type_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_104, AddrArgs_117, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType0_32 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 1))));
            MR_Word Kind_107 = ((MR_Word) ((MR_hl_field(3, Type0_11, (MR_Integer) 2))));
            MR_Word * AddrSubType_119;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = NULL;
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_107));
            }
            AddrSubType_119 = (MR_Word *) (&(MR_hl_field(3, *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_8_p_0(InInt_9, ErrorContext_10, SubType0_32, AddrSubType_119, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_112,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
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
          *AddrOfInst_112 = Inst0_11;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 1))));
          MR_Word HOInstInfo_17;
          MR_Word Inst_113;

          if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          else
          {
            MR_Word PredOrFunc_61;
            MR_Word Modes0_62;
            MR_Word MaybeArgRegs_63;
            MR_Word Detism_64;
            MR_Word Modes_65;
            MR_Word Var_66 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
            MR_Word Var_67;

            PredOrFunc_61 = ((MR_Unsigned) ((MR_hl_field(0, Var_66, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes0_62 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 1))));
            MaybeArgRegs_63 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 2))));
            Detism_64 = ((MR_Unsigned) ((MR_hl_field(0, Var_66, (MR_Integer) 3))) & (MR_Integer) 7);
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_62, &Modes_65, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_61));
              MR_hl_field(0, Var_67, 1) = ((MR_Box) (Modes_65));
              MR_hl_field(0, Var_67, 2) = ((MR_Box) (MaybeArgRegs_63));
              MR_hl_field(0, Var_67, 3) = (MR_Box) ((MR_Unsigned) (Detism_64));
            }
            HOInstInfo_17 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_67)));
          }
          {
            Inst_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Inst_113, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
            MR_hl_field(2, Inst_113, 1) = ((MR_Box) (HOInstInfo_17));
          }
          *AddrOfInst_112 = Inst_113;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
              MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 3))));
              MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word * AddrBoundInsts_110;
              MR_Word Inst_114;

              switch (MR_tag((MR_Word) InstResults0_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_20)) {
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
                Inst_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Inst_114, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
                MR_hl_field(3, Inst_114, 2) = ((MR_Box) (InstResults0_20));
                MR_hl_field(3, Inst_114, 3) = NULL;
              }
              AddrBoundInsts_110 = (MR_Word *) (&(MR_hl_field(3, Inst_114, (MR_Integer) 3)));
              *AddrOfInst_112 = Inst_114;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_110, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_59 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
              MR_Word HOInstInfo_60;
              MR_Word Inst_122;

              if ((HOInstInfo0_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                HOInstInfo_60 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
                *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
              }
              else
              {
                MR_Word PredOrFunc_102;
                MR_Word Modes0_103;
                MR_Word MaybeArgRegs_104;
                MR_Word Detism_105;
                MR_Word Modes_106;
                MR_Word Var_107 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_59), (MR_Integer) 1));
                MR_Word Var_108;

                PredOrFunc_102 = ((MR_Unsigned) ((MR_hl_field(0, Var_107, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes0_103 = ((MR_Word) ((MR_hl_field(0, Var_107, (MR_Integer) 1))));
                MaybeArgRegs_104 = ((MR_Word) ((MR_hl_field(0, Var_107, (MR_Integer) 2))));
                Detism_105 = ((MR_Unsigned) ((MR_hl_field(0, Var_107, (MR_Integer) 3))) & (MR_Integer) 7);
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_103, &Modes_106, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
                {
                  Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_108, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_102));
                  MR_hl_field(0, Var_108, 1) = ((MR_Box) (Modes_106));
                  MR_hl_field(0, Var_108, 2) = ((MR_Box) (MaybeArgRegs_104));
                  MR_hl_field(0, Var_108, 3) = (MR_Box) ((MR_Unsigned) (Detism_105));
                }
                HOInstInfo_60 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_108)));
              }
              {
                Inst_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_122, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Inst_122, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
                MR_hl_field(3, Inst_122, 2) = ((MR_Box) (HOInstInfo_60));
              }
              *AddrOfInst_112 = Inst_122;
            }
            break;
          case (MR_Integer) 2:
            {
              *AddrOfInst_112 = Inst0_11;
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
              *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
              MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrSubInst_111;
              MR_Word Inst_117;
              MR_Word next_value_of_Inst0_11;
              MR_Word * next_value_of_AddrOfInst_112;

              {
                Inst_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_117, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Inst_117, 1) = ((MR_Box) (Vars_29));
                MR_hl_field(3, Inst_117, 2) = NULL;
              }
              AddrSubInst_111 = (MR_Word *) (&(MR_hl_field(3, Inst_117, (MR_Integer) 2)));
              *AddrOfInst_112 = Inst_117;
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_11 = SubInst0_30;
              next_value_of_AddrOfInst_112 = AddrSubInst_111;
              Inst0_11 = next_value_of_Inst0_11;
              AddrOfInst_112 = next_value_of_AddrOfInst_112;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
              MR_Word InstName_33;
              MR_Word Inst_120;

              switch (MR_tag((MR_Word) InstName0_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SymName0_68 = ((MR_Word) ((MR_hl_field(0, InstName0_32, (MR_Integer) 0))));
                    MR_Word Insts0_69 = ((MR_Word) ((MR_hl_field(0, InstName0_32, (MR_Integer) 1))));
                    MR_Word Insts_70;
                    MR_Word SymName_71;
                    MR_Word STATE_VARIABLE_Info_45_94;
                    MR_Word STATE_VARIABLE_Specs_46_95;
                    MR_String Var_96;

                    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_69, &Insts_70, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_45_94, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_46_95);
                    succeeded = ((MR_tag((MR_Word) SymName0_68)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_96 = ((MR_String) ((MR_hl_field(0, SymName0_68, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_96, (MR_String) "") == 0);
                    }
                    if (succeeded)
                    {
                      parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_68, Insts_70, ErrorContext_10, STATE_VARIABLE_Specs_46_95, STATE_VARIABLE_Specs_40);
                      parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(STATE_VARIABLE_Info_45_94, STATE_VARIABLE_Info_38);
                      SymName_71 = SymName0_68;
                    }
                    else
                    {
                      MR_Integer Arity_72;
                      MR_Word InstIdSet_73;
                      MR_Word Var_98;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_69, &Arity_72);
                      parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_45_94, &InstIdSet_73);
                      {
                        Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_98, 0) = ((MR_Box) (SymName0_68));
                        MR_hl_field(0, Var_98, 1) = ((MR_Box) (Arity_72));
                      }
                      parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_73, (MR_Integer) 1, Var_98, &SymName_71, STATE_VARIABLE_Info_45_94, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_46_95, STATE_VARIABLE_Specs_40);
                    }
                    {
                      InstName_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InstName_33, 0) = ((MR_Box) (SymName_71));
                      MR_hl_field(0, InstName_33, 1) = ((MR_Box) (Insts_70));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
                    return;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
                    return;
                  }
                  break;
              }
              {
                Inst_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_120, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Inst_120, 1) = ((MR_Box) (InstName_33));
              }
              *AddrOfInst_112 = Inst_120;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_34 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
              MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
              MR_Word Inst_12;
              MR_Word * AddrArgs_109;

              {
                Inst_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Inst_12, 1) = ((MR_Box) (Name_34));
                MR_hl_field(3, Inst_12, 2) = NULL;
              }
              AddrArgs_109 = (MR_Word *) (&(MR_hl_field(3, Inst_12, (MR_Integer) 2)));
              *AddrOfInst_112 = Inst_12;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_109, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
        }
        break;
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

  recompilation__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
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
      MR_Word STATE_VARIABLE_Info_50_39;
      MR_Word * AddrBoundInsts_41;
      MR_Word HeadVar__4_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_42;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      switch (MR_tag((MR_Word) ConsId_31)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ConsId_31, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 2:
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
                  MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[0]));
                  MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0_1));
                  MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_38, 3) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(0, Var_38, 4) = ((MR_Box) (Id_36));
                  MR_hl_field(0, Var_38, 5) = ((MR_Box) (Id_36));
                }
                parse_tree__module_qual__update_recompilation_info_3_p_0(Var_38, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_50_39);
              }
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 5:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 13:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 14:
              STATE_VARIABLE_Info_50_39 = STATE_VARIABLE_Info_0_5;
              break;
          }
          break;
      }
      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_32, &Insts_37, STATE_VARIABLE_Info_50_39, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
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

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_8_p_0(
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
      MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Mode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrModes_31;
      MR_Word HeadVar__4_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_32;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_19, &Mode_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_33, 0) = ((MR_Box) (Mode_21));
        MR_hl_field(1, HeadVar__4_33, 1) = NULL;
      }
      AddrModes_31 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_33, (MR_Integer) 1)));
      *AddrOfHeadVar__4_32 = HeadVar__4_33;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Modes0_20;
      next_value_of_AddrOfHeadVar__4_32 = AddrModes_31;
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
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_12 = Inst0_11;
        *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 1))));
        MR_Word HOInstInfo_17;

        if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        else
        {
          MR_Word PredOrFunc_61;
          MR_Word Modes0_62;
          MR_Word MaybeArgRegs_63;
          MR_Word Detism_64;
          MR_Word Modes_65;
          MR_Word Var_66 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
          MR_Word Var_67;

          PredOrFunc_61 = ((MR_Unsigned) ((MR_hl_field(0, Var_66, (MR_Integer) 0))) & (MR_Integer) 1);
          Modes0_62 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 1))));
          MaybeArgRegs_63 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 2))));
          Detism_64 = ((MR_Unsigned) ((MR_hl_field(0, Var_66, (MR_Integer) 3))) & (MR_Integer) 7);
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_62, &Modes_65, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_61));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (Modes_65));
            MR_hl_field(0, Var_67, 2) = ((MR_Box) (MaybeArgRegs_63));
            MR_hl_field(0, Var_67, 3) = (MR_Box) ((MR_Unsigned) (Detism_64));
          }
          HOInstInfo_17 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_67)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
          MR_hl_field(2, base, 1) = ((MR_Box) (HOInstInfo_17));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 3))));
            MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word * AddrBoundInsts_110;

            switch (MR_tag((MR_Word) InstResults0_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstResults0_20)) {
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
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
              MR_hl_field(3, base, 2) = ((MR_Box) (InstResults0_20));
              MR_hl_field(3, base, 3) = NULL;
            }
            AddrBoundInsts_110 = (MR_Word *) (&(MR_hl_field(3, *Inst_12, (MR_Integer) 3)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_110, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_59 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word HOInstInfo_60;

            if ((HOInstInfo0_59 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HOInstInfo_60 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
              *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
            }
            else
            {
              MR_Word PredOrFunc_102;
              MR_Word Modes0_103;
              MR_Word MaybeArgRegs_104;
              MR_Word Detism_105;
              MR_Word Modes_106;
              MR_Word Var_107 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_59), (MR_Integer) 1));
              MR_Word Var_108;

              PredOrFunc_102 = ((MR_Unsigned) ((MR_hl_field(0, Var_107, (MR_Integer) 0))) & (MR_Integer) 1);
              Modes0_103 = ((MR_Word) ((MR_hl_field(0, Var_107, (MR_Integer) 1))));
              MaybeArgRegs_104 = ((MR_Word) ((MR_hl_field(0, Var_107, (MR_Integer) 2))));
              Detism_105 = ((MR_Unsigned) ((MR_hl_field(0, Var_107, (MR_Integer) 3))) & (MR_Integer) 7);
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_103, &Modes_106, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_108, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_102));
                MR_hl_field(0, Var_108, 1) = ((MR_Box) (Modes_106));
                MR_hl_field(0, Var_108, 2) = ((MR_Box) (MaybeArgRegs_104));
                MR_hl_field(0, Var_108, 3) = (MR_Box) ((MR_Unsigned) (Detism_105));
              }
              HOInstInfo_60 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_108)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_60));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrSubInst_111;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_29));
              MR_hl_field(3, base, 2) = NULL;
            }
            AddrSubInst_111 = (MR_Word *) (&(MR_hl_field(3, *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(InInt_9, ErrorContext_10, SubInst0_30, AddrSubInst_111, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word InstName_33;

            switch (MR_tag((MR_Word) InstName0_32)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SymName0_68 = ((MR_Word) ((MR_hl_field(0, InstName0_32, (MR_Integer) 0))));
                  MR_Word Insts0_69 = ((MR_Word) ((MR_hl_field(0, InstName0_32, (MR_Integer) 1))));
                  MR_Word Insts_70;
                  MR_Word SymName_71;
                  MR_Word STATE_VARIABLE_Info_45_94;
                  MR_Word STATE_VARIABLE_Specs_46_95;
                  MR_String Var_96;

                  parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_69, &Insts_70, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_45_94, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_46_95);
                  succeeded = ((MR_tag((MR_Word) SymName0_68)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_96 = ((MR_String) ((MR_hl_field(0, SymName0_68, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_96, (MR_String) "") == 0);
                  }
                  if (succeeded)
                  {
                    parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_68, Insts_70, ErrorContext_10, STATE_VARIABLE_Specs_46_95, STATE_VARIABLE_Specs_40);
                    parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(STATE_VARIABLE_Info_45_94, STATE_VARIABLE_Info_38);
                    SymName_71 = SymName0_68;
                  }
                  else
                  {
                    MR_Integer Arity_72;
                    MR_Word InstIdSet_73;
                    MR_Word Var_98;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_69, &Arity_72);
                    parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_45_94, &InstIdSet_73);
                    {
                      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_98, 0) = ((MR_Box) (SymName0_68));
                      MR_hl_field(0, Var_98, 1) = ((MR_Box) (Arity_72));
                    }
                    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_73, (MR_Integer) 1, Var_98, &SymName_71, STATE_VARIABLE_Info_45_94, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_46_95, STATE_VARIABLE_Specs_40);
                  }
                  {
                    InstName_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, InstName_33, 0) = ((MR_Box) (SymName_71));
                    MR_hl_field(0, InstName_33, 1) = ((MR_Box) (Insts_70));
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
                  return;
                }
                break;
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
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstName_33));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_34 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_109;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Name_34));
              MR_hl_field(3, base, 2) = NULL;
            }
            AddrArgs_109 = (MR_Word *) (&(MR_hl_field(3, *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_109, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Mode0_11,
  MR_Word * Mode_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  if (((MR_tag((MR_Word) Mode0_11)) == (MR_Integer) 0))
  {
    MR_Word InstA0_15 = ((MR_Word) ((MR_hl_field(0, Mode0_11, (MR_Integer) 0))));
    MR_Word InstB0_16 = ((MR_Word) ((MR_hl_field(0, Mode0_11, (MR_Integer) 1))));
    MR_Word InstA_17;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrInstB_38;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, InstA0_15, &InstA_17, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstA_17));
      MR_hl_field(0, base, 1) = NULL;
    }
    AddrInstB_38 = (MR_Word *) (&(MR_hl_field(0, *Mode_12, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(InInt_9, ErrorContext_10, InstB0_16, AddrInstB_38, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(1, Mode0_11, (MR_Integer) 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(1, Mode0_11, (MR_Integer) 1))));
    MR_Word Insts_21;
    MR_Integer Arity_22;
    MR_Word Modes_23;
    MR_Word SymName_24;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Word Var_36;

    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_20, &Insts_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_34);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_21, &Arity_22);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_33_33, &Modes_23);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (SymName0_19));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (Arity_22));
    }
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Modes_23, (MR_Integer) 2, Var_36, &SymName_24, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_21));
    }
  }
}

void MR_CALL 
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
    MR_Word * AddrModes_31;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_19, &Mode_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_21));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrModes_31 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_20, AddrModes_31, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_6(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_5(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_4(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_3(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_2(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_1(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0(
  MR_Word OrigParseTreeInt3_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 1))));
  MR_Word InclMap_13 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 2))));
  MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 3))));
  MR_Word IntTypeDefnMap0_15 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 4))));
  MR_Word IntInstDefnMap0_16 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 5))));
  MR_Word IntModeDefnMap0_17 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 6))));
  MR_Word IntTypeClasses0_18 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 7))));
  MR_Word IntInstances0_19 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 8))));
  MR_Word IntTypeRepns0_20 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, (MR_Integer) 9))));
  MR_Word IntTypeDefnMap_22;
  MR_Word IntInstDefnMap_23;
  MR_Word IntModeDefnMap_24;
  MR_Word IntTypeClasses_25;
  MR_Word IntInstances_26;
  MR_Word IntTypeRepns_27;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Word STATE_VARIABLE_Specs_37_37;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Word STATE_VARIABLE_Specs_40_40;
  MR_Word STATE_VARIABLE_Info_42_42;
  MR_Word STATE_VARIABLE_Specs_43_43;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word STATE_VARIABLE_Specs_46_46;
  MR_Word Var_47;
  MR_Box conv4_STATE_VARIABLE_Info_33_33;
  MR_Box conv3_STATE_VARIABLE_Specs_34_34;
  MR_Box conv9_STATE_VARIABLE_Info_36_36;
  MR_Box conv8_STATE_VARIABLE_Specs_37_37;
  MR_Box conv14_STATE_VARIABLE_Info_39_39;
  MR_Box conv13_STATE_VARIABLE_Specs_40_40;
  MR_Box conv19_STATE_VARIABLE_Info_42_42;
  MR_Box conv18_STATE_VARIABLE_Specs_43_43;
  MR_Box conv24_STATE_VARIABLE_Info_45_45;
  MR_Box conv23_STATE_VARIABLE_Specs_46_46;
  MR_Box conv29_STATE_VARIABLE_Info_29;
  MR_Box conv28_STATE_VARIABLE_Specs_31;

  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[3]), IntTypeDefnMap0_15, &IntTypeDefnMap_22, ((MR_Box) (STATE_VARIABLE_Info_0_28)), &conv4_STATE_VARIABLE_Info_33_33, ((MR_Box) (STATE_VARIABLE_Specs_0_30)), &conv3_STATE_VARIABLE_Specs_34_34);
  STATE_VARIABLE_Info_33_33 = ((MR_Word) (conv4_STATE_VARIABLE_Info_33_33));
  STATE_VARIABLE_Specs_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_34_34));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[4]), IntInstDefnMap0_16, &IntInstDefnMap_23, ((MR_Box) (STATE_VARIABLE_Info_33_33)), &conv9_STATE_VARIABLE_Info_36_36, ((MR_Box) (STATE_VARIABLE_Specs_34_34)), &conv8_STATE_VARIABLE_Specs_37_37);
  STATE_VARIABLE_Info_36_36 = ((MR_Word) (conv9_STATE_VARIABLE_Info_36_36));
  STATE_VARIABLE_Specs_37_37 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_37_37));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[5]), IntModeDefnMap0_17, &IntModeDefnMap_24, ((MR_Box) (STATE_VARIABLE_Info_36_36)), &conv14_STATE_VARIABLE_Info_39_39, ((MR_Box) (STATE_VARIABLE_Specs_37_37)), &conv13_STATE_VARIABLE_Specs_40_40);
  STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv14_STATE_VARIABLE_Info_39_39));
  STATE_VARIABLE_Specs_40_40 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_40_40));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[13]), IntTypeClasses0_18, &IntTypeClasses_25, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv19_STATE_VARIABLE_Info_42_42, ((MR_Box) (STATE_VARIABLE_Specs_40_40)), &conv18_STATE_VARIABLE_Specs_43_43);
  STATE_VARIABLE_Info_42_42 = ((MR_Word) (conv19_STATE_VARIABLE_Info_42_42));
  STATE_VARIABLE_Specs_43_43 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_43_43));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[14]), IntInstances0_19, &IntInstances_26, ((MR_Box) (STATE_VARIABLE_Info_42_42)), &conv24_STATE_VARIABLE_Info_45_45, ((MR_Box) (STATE_VARIABLE_Specs_43_43)), &conv23_STATE_VARIABLE_Specs_46_46);
  STATE_VARIABLE_Info_45_45 = ((MR_Word) (conv24_STATE_VARIABLE_Info_45_45));
  STATE_VARIABLE_Specs_46_46 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_46_46));
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[0]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_6));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_47, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_47, IntTypeRepns0_20, &IntTypeRepns_27, ((MR_Box) (STATE_VARIABLE_Info_45_45)), &conv29_STATE_VARIABLE_Info_29, ((MR_Box) (STATE_VARIABLE_Specs_46_46)), &conv28_STATE_VARIABLE_Specs_31);
  *STATE_VARIABLE_Info_29 = ((MR_Word) (conv29_STATE_VARIABLE_Info_29));
  *STATE_VARIABLE_Specs_31 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_31));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt3_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntTypeDefnMap_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntInstDefnMap_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntModeDefnMap_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeClasses_25));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstances_26));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntTypeRepns_27));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv77_ItemMutable_10;
  MR_Word conv76_STATE_VARIABLE_Info_31;
  MR_Word conv75_STATE_VARIABLE_Specs_33;

  parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv77_ItemMutable_10, ((MR_Word) (wrapper_arg_3)), &conv76_STATE_VARIABLE_Info_31, ((MR_Word) (wrapper_arg_5)), &conv75_STATE_VARIABLE_Specs_33);
  *wrapper_arg_2 = ((MR_Box) (conv77_ItemMutable_10));
  *wrapper_arg_4 = ((MR_Box) (conv76_STATE_VARIABLE_Info_31));
  *wrapper_arg_6 = ((MR_Box) (conv75_STATE_VARIABLE_Specs_33));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv72_ItemImplPragma_10;
  MR_Word conv71_STATE_VARIABLE_Info_18;
  MR_Word conv70_STATE_VARIABLE_Specs_20;

  parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv72_ItemImplPragma_10, ((MR_Word) (wrapper_arg_3)), &conv71_STATE_VARIABLE_Info_18, ((MR_Word) (wrapper_arg_5)), &conv70_STATE_VARIABLE_Specs_20);
  *wrapper_arg_2 = ((MR_Box) (conv72_ItemImplPragma_10));
  *wrapper_arg_4 = ((MR_Box) (conv71_STATE_VARIABLE_Info_18));
  *wrapper_arg_6 = ((MR_Box) (conv70_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv67_ItemDeclPragma_10;
  MR_Word conv66_STATE_VARIABLE_Info_18;
  MR_Word conv65_STATE_VARIABLE_Specs_20;

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv67_ItemDeclPragma_10, ((MR_Word) (wrapper_arg_3)), &conv66_STATE_VARIABLE_Info_18, ((MR_Word) (wrapper_arg_5)), &conv65_STATE_VARIABLE_Specs_20);
  *wrapper_arg_2 = ((MR_Box) (conv67_ItemDeclPragma_10));
  *wrapper_arg_4 = ((MR_Box) (conv66_STATE_VARIABLE_Info_18));
  *wrapper_arg_6 = ((MR_Box) (conv65_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv62_ItemFEE_10;
  MR_Word conv61_STATE_VARIABLE_Info_23;
  MR_Word conv60_STATE_VARIABLE_Specs_25;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv62_ItemFEE_10, ((MR_Word) (wrapper_arg_3)), &conv61_STATE_VARIABLE_Info_23, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_Specs_25);
  *wrapper_arg_2 = ((MR_Box) (conv62_ItemFEE_10));
  *wrapper_arg_4 = ((MR_Box) (conv61_STATE_VARIABLE_Info_23));
  *wrapper_arg_6 = ((MR_Box) (conv60_STATE_VARIABLE_Specs_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_12(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_11(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_10(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_9(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv37_ItemDeclPragma_10;
  MR_Word conv36_STATE_VARIABLE_Info_18;
  MR_Word conv35_STATE_VARIABLE_Specs_20;

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv37_ItemDeclPragma_10, ((MR_Word) (wrapper_arg_3)), &conv36_STATE_VARIABLE_Info_18, ((MR_Word) (wrapper_arg_5)), &conv35_STATE_VARIABLE_Specs_20);
  *wrapper_arg_2 = ((MR_Box) (conv37_ItemDeclPragma_10));
  *wrapper_arg_4 = ((MR_Box) (conv36_STATE_VARIABLE_Info_18));
  *wrapper_arg_6 = ((MR_Box) (conv35_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_7(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_6(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_5(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_4(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_3(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_2(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0_1(
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
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_module_src_6_p_0(
  MR_Word ParseTreeModuleSrc0_7,
  MR_Word * ParseTreeModuleSrc_8,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75)
{
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 1))));
  MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 2))));
  MR_Word ImpInclMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 3))));
  MR_Word InclMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 4))));
  MR_Word IntImportMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 5))));
  MR_Word IntUseMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 6))));
  MR_Word ImpImportMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 7))));
  MR_Word ImpUseMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 8))));
  MR_Word ImportUseMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 9))));
  MR_Word IntFIMSpecMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 10))));
  MR_Word ImpFIMSpecMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 11))));
  MR_Word IntSelfFIMLangs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 12))));
  MR_Word ImpSelfFIMLangs_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 13))));
  MR_Word TypeCtorCheckedMap0_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 14))));
  MR_Word InstCtorCheckedMap0_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 15))));
  MR_Word ModeCtorCheckedMap0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 16))));
  MR_Word TypeSpecs_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 17))));
  MR_Word InstModeSpecs_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 18))));
  MR_Word IntTypeClasses0_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 19))));
  MR_Word IntInstances0_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 20))));
  MR_Word IntPredDecls0_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 21))));
  MR_Word IntModeDecls0_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 22))));
  MR_Word IntDeclPragmas0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 23))));
  MR_Word IntBadPreds_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 25))));
  MR_Word ImpTypeClasses0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 26))));
  MR_Word ImpInstances0_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 27))));
  MR_Word ImpPredDecls0_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 28))));
  MR_Word ImpModeDecls0_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 29))));
  MR_Word ImpForeignExportEnums0_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 31))));
  MR_Word ImpDeclPragmas0_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 32))));
  MR_Word ImpImplPragmas0_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 33))));
  MR_Word ImpMutables0_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 37))));
  MR_Word TypeCtorCheckedMap_49;
  MR_Word InstCtorCheckedMap_50;
  MR_Word ModeCtorCheckedMap_51;
  MR_Word IntTypeClasses_53;
  MR_Word IntInstances_54;
  MR_Word IntPredDecls_55;
  MR_Word IntModeDecls_56;
  MR_Word IntDeclPragmas_57;
  MR_Word IntPromises_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 24))));
  MR_Word ImpTypeClasses_60;
  MR_Word ImpInstances_61;
  MR_Word ImpPredDecls_62;
  MR_Word ImpModeDecls_63;
  MR_Word ImpClauses_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 30))));
  MR_Word ImpForeignExportEnums_65;
  MR_Word ImpDeclPragmas_66;
  MR_Word ImpImplPragmas_67;
  MR_Word ImpInitialises_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 35))));
  MR_Word ImpFinalises_69 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 36))));
  MR_Word ImpPromises_70 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_7, (MR_Integer) 34))));
  MR_Word ImpMutables_71;
  MR_Word STATE_VARIABLE_Info_77_77;
  MR_Word STATE_VARIABLE_Specs_78_78;
  MR_Word STATE_VARIABLE_Info_80_80;
  MR_Word STATE_VARIABLE_Specs_81_81;
  MR_Word STATE_VARIABLE_Info_83_83;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word STATE_VARIABLE_Info_86_86;
  MR_Word STATE_VARIABLE_Specs_87_87;
  MR_Word STATE_VARIABLE_Info_89_89;
  MR_Word STATE_VARIABLE_Specs_90_90;
  MR_Word STATE_VARIABLE_Info_92_92;
  MR_Word STATE_VARIABLE_Specs_93_93;
  MR_Word STATE_VARIABLE_Info_95_95;
  MR_Word STATE_VARIABLE_Specs_96_96;
  MR_Word STATE_VARIABLE_Info_98_98;
  MR_Word STATE_VARIABLE_Specs_99_99;
  MR_Word STATE_VARIABLE_Info_101_101;
  MR_Word STATE_VARIABLE_Specs_102_102;
  MR_Word STATE_VARIABLE_Info_104_104;
  MR_Word STATE_VARIABLE_Specs_105_105;
  MR_Word STATE_VARIABLE_Info_107_107;
  MR_Word STATE_VARIABLE_Specs_108_108;
  MR_Word STATE_VARIABLE_Info_110_110;
  MR_Word STATE_VARIABLE_Specs_111_111;
  MR_Word STATE_VARIABLE_Info_113_113;
  MR_Word STATE_VARIABLE_Specs_114_114;
  MR_Word STATE_VARIABLE_Info_116_116;
  MR_Word STATE_VARIABLE_Specs_117_117;
  MR_Word STATE_VARIABLE_Info_119_119;
  MR_Word STATE_VARIABLE_Specs_120_120;
  MR_Box conv4_STATE_VARIABLE_Info_77_77;
  MR_Box conv3_STATE_VARIABLE_Specs_78_78;
  MR_Box conv9_STATE_VARIABLE_Info_80_80;
  MR_Box conv8_STATE_VARIABLE_Specs_81_81;
  MR_Box conv14_STATE_VARIABLE_Info_83_83;
  MR_Box conv13_STATE_VARIABLE_Specs_84_84;
  MR_Box conv19_STATE_VARIABLE_Info_86_86;
  MR_Box conv18_STATE_VARIABLE_Specs_87_87;
  MR_Box conv24_STATE_VARIABLE_Info_89_89;
  MR_Box conv23_STATE_VARIABLE_Specs_90_90;
  MR_Box conv29_STATE_VARIABLE_Info_92_92;
  MR_Box conv28_STATE_VARIABLE_Specs_93_93;
  MR_Box conv34_STATE_VARIABLE_Info_95_95;
  MR_Box conv33_STATE_VARIABLE_Specs_96_96;
  MR_Box conv39_STATE_VARIABLE_Info_98_98;
  MR_Box conv38_STATE_VARIABLE_Specs_99_99;
  MR_Box conv44_STATE_VARIABLE_Info_101_101;
  MR_Box conv43_STATE_VARIABLE_Specs_102_102;
  MR_Box conv49_STATE_VARIABLE_Info_104_104;
  MR_Box conv48_STATE_VARIABLE_Specs_105_105;
  MR_Box conv54_STATE_VARIABLE_Info_107_107;
  MR_Box conv53_STATE_VARIABLE_Specs_108_108;
  MR_Box conv59_STATE_VARIABLE_Info_110_110;
  MR_Box conv58_STATE_VARIABLE_Specs_111_111;
  MR_Box conv64_STATE_VARIABLE_Info_113_113;
  MR_Box conv63_STATE_VARIABLE_Specs_114_114;
  MR_Box conv69_STATE_VARIABLE_Info_116_116;
  MR_Box conv68_STATE_VARIABLE_Specs_117_117;
  MR_Box conv74_STATE_VARIABLE_Info_119_119;
  MR_Box conv73_STATE_VARIABLE_Specs_120_120;
  MR_Box conv79_STATE_VARIABLE_Info_73;
  MR_Box conv78_STATE_VARIABLE_Specs_75;

  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[0]), TypeCtorCheckedMap0_25, &TypeCtorCheckedMap_49, ((MR_Box) (STATE_VARIABLE_Info_0_72)), &conv4_STATE_VARIABLE_Info_77_77, ((MR_Box) (STATE_VARIABLE_Specs_0_74)), &conv3_STATE_VARIABLE_Specs_78_78);
  STATE_VARIABLE_Info_77_77 = ((MR_Word) (conv4_STATE_VARIABLE_Info_77_77));
  STATE_VARIABLE_Specs_78_78 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_78_78));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[1]), InstCtorCheckedMap0_26, &InstCtorCheckedMap_50, ((MR_Box) (STATE_VARIABLE_Info_77_77)), &conv9_STATE_VARIABLE_Info_80_80, ((MR_Box) (STATE_VARIABLE_Specs_78_78)), &conv8_STATE_VARIABLE_Specs_81_81);
  STATE_VARIABLE_Info_80_80 = ((MR_Word) (conv9_STATE_VARIABLE_Info_80_80));
  STATE_VARIABLE_Specs_81_81 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_81_81));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[2]), ModeCtorCheckedMap0_27, &ModeCtorCheckedMap_51, ((MR_Box) (STATE_VARIABLE_Info_80_80)), &conv14_STATE_VARIABLE_Info_83_83, ((MR_Box) (STATE_VARIABLE_Specs_81_81)), &conv13_STATE_VARIABLE_Specs_84_84);
  STATE_VARIABLE_Info_83_83 = ((MR_Word) (conv14_STATE_VARIABLE_Info_83_83));
  STATE_VARIABLE_Specs_84_84 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_84_84));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[0]), IntTypeClasses0_30, &IntTypeClasses_53, ((MR_Box) (STATE_VARIABLE_Info_83_83)), &conv19_STATE_VARIABLE_Info_86_86, ((MR_Box) (STATE_VARIABLE_Specs_84_84)), &conv18_STATE_VARIABLE_Specs_87_87);
  STATE_VARIABLE_Info_86_86 = ((MR_Word) (conv19_STATE_VARIABLE_Info_86_86));
  STATE_VARIABLE_Specs_87_87 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_87_87));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[1]), IntInstances0_31, &IntInstances_54, ((MR_Box) (STATE_VARIABLE_Info_86_86)), &conv24_STATE_VARIABLE_Info_89_89, ((MR_Box) (STATE_VARIABLE_Specs_87_87)), &conv23_STATE_VARIABLE_Specs_90_90);
  STATE_VARIABLE_Info_89_89 = ((MR_Word) (conv24_STATE_VARIABLE_Info_89_89));
  STATE_VARIABLE_Specs_90_90 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_90_90));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[2]), IntPredDecls0_32, &IntPredDecls_55, ((MR_Box) (STATE_VARIABLE_Info_89_89)), &conv29_STATE_VARIABLE_Info_92_92, ((MR_Box) (STATE_VARIABLE_Specs_90_90)), &conv28_STATE_VARIABLE_Specs_93_93);
  STATE_VARIABLE_Info_92_92 = ((MR_Word) (conv29_STATE_VARIABLE_Info_92_92));
  STATE_VARIABLE_Specs_93_93 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_93_93));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[3]), IntModeDecls0_33, &IntModeDecls_56, ((MR_Box) (STATE_VARIABLE_Info_92_92)), &conv34_STATE_VARIABLE_Info_95_95, ((MR_Box) (STATE_VARIABLE_Specs_93_93)), &conv33_STATE_VARIABLE_Specs_96_96);
  STATE_VARIABLE_Info_95_95 = ((MR_Word) (conv34_STATE_VARIABLE_Info_95_95));
  STATE_VARIABLE_Specs_96_96 = ((MR_Word) (conv33_STATE_VARIABLE_Specs_96_96));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[4]), IntDeclPragmas0_34, &IntDeclPragmas_57, ((MR_Box) (STATE_VARIABLE_Info_95_95)), &conv39_STATE_VARIABLE_Info_98_98, ((MR_Box) (STATE_VARIABLE_Specs_96_96)), &conv38_STATE_VARIABLE_Specs_99_99);
  STATE_VARIABLE_Info_98_98 = ((MR_Word) (conv39_STATE_VARIABLE_Info_98_98));
  STATE_VARIABLE_Specs_99_99 = ((MR_Word) (conv38_STATE_VARIABLE_Specs_99_99));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[5]), ImpTypeClasses0_37, &ImpTypeClasses_60, ((MR_Box) (STATE_VARIABLE_Info_98_98)), &conv44_STATE_VARIABLE_Info_101_101, ((MR_Box) (STATE_VARIABLE_Specs_99_99)), &conv43_STATE_VARIABLE_Specs_102_102);
  STATE_VARIABLE_Info_101_101 = ((MR_Word) (conv44_STATE_VARIABLE_Info_101_101));
  STATE_VARIABLE_Specs_102_102 = ((MR_Word) (conv43_STATE_VARIABLE_Specs_102_102));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[6]), ImpInstances0_38, &ImpInstances_61, ((MR_Box) (STATE_VARIABLE_Info_101_101)), &conv49_STATE_VARIABLE_Info_104_104, ((MR_Box) (STATE_VARIABLE_Specs_102_102)), &conv48_STATE_VARIABLE_Specs_105_105);
  STATE_VARIABLE_Info_104_104 = ((MR_Word) (conv49_STATE_VARIABLE_Info_104_104));
  STATE_VARIABLE_Specs_105_105 = ((MR_Word) (conv48_STATE_VARIABLE_Specs_105_105));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[7]), ImpPredDecls0_39, &ImpPredDecls_62, ((MR_Box) (STATE_VARIABLE_Info_104_104)), &conv54_STATE_VARIABLE_Info_107_107, ((MR_Box) (STATE_VARIABLE_Specs_105_105)), &conv53_STATE_VARIABLE_Specs_108_108);
  STATE_VARIABLE_Info_107_107 = ((MR_Word) (conv54_STATE_VARIABLE_Info_107_107));
  STATE_VARIABLE_Specs_108_108 = ((MR_Word) (conv53_STATE_VARIABLE_Specs_108_108));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[8]), ImpModeDecls0_40, &ImpModeDecls_63, ((MR_Box) (STATE_VARIABLE_Info_107_107)), &conv59_STATE_VARIABLE_Info_110_110, ((MR_Box) (STATE_VARIABLE_Specs_108_108)), &conv58_STATE_VARIABLE_Specs_111_111);
  STATE_VARIABLE_Info_110_110 = ((MR_Word) (conv59_STATE_VARIABLE_Info_110_110));
  STATE_VARIABLE_Specs_111_111 = ((MR_Word) (conv58_STATE_VARIABLE_Specs_111_111));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[9]), ImpForeignExportEnums0_42, &ImpForeignExportEnums_65, ((MR_Box) (STATE_VARIABLE_Info_110_110)), &conv64_STATE_VARIABLE_Info_113_113, ((MR_Box) (STATE_VARIABLE_Specs_111_111)), &conv63_STATE_VARIABLE_Specs_114_114);
  STATE_VARIABLE_Info_113_113 = ((MR_Word) (conv64_STATE_VARIABLE_Info_113_113));
  STATE_VARIABLE_Specs_114_114 = ((MR_Word) (conv63_STATE_VARIABLE_Specs_114_114));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[10]), ImpDeclPragmas0_43, &ImpDeclPragmas_66, ((MR_Box) (STATE_VARIABLE_Info_113_113)), &conv69_STATE_VARIABLE_Info_116_116, ((MR_Box) (STATE_VARIABLE_Specs_114_114)), &conv68_STATE_VARIABLE_Specs_117_117);
  STATE_VARIABLE_Info_116_116 = ((MR_Word) (conv69_STATE_VARIABLE_Info_116_116));
  STATE_VARIABLE_Specs_117_117 = ((MR_Word) (conv68_STATE_VARIABLE_Specs_117_117));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[11]), ImpImplPragmas0_44, &ImpImplPragmas_67, ((MR_Box) (STATE_VARIABLE_Info_116_116)), &conv74_STATE_VARIABLE_Info_119_119, ((MR_Box) (STATE_VARIABLE_Specs_117_117)), &conv73_STATE_VARIABLE_Specs_120_120);
  STATE_VARIABLE_Info_119_119 = ((MR_Word) (conv74_STATE_VARIABLE_Info_119_119));
  STATE_VARIABLE_Specs_120_120 = ((MR_Word) (conv73_STATE_VARIABLE_Specs_120_120));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[12]), ImpMutables0_48, &ImpMutables_71, ((MR_Box) (STATE_VARIABLE_Info_119_119)), &conv79_STATE_VARIABLE_Info_73, ((MR_Box) (STATE_VARIABLE_Specs_120_120)), &conv78_STATE_VARIABLE_Specs_75);
  *STATE_VARIABLE_Info_73 = ((MR_Word) (conv79_STATE_VARIABLE_Info_73));
  *STATE_VARIABLE_Specs_75 = ((MR_Word) (conv78_STATE_VARIABLE_Specs_75));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (IntInclMap_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImpInclMap_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (InclMap_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntImportMap_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntUseMap_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpImportMap_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (ImpUseMap_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (ImportUseMap_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntFIMSpecMap_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (ImpFIMSpecMap_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntSelfFIMLangs_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (ImpSelfFIMLangs_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (TypeCtorCheckedMap_49));
    MR_hl_field(0, base, 15) = ((MR_Box) (InstCtorCheckedMap_50));
    MR_hl_field(0, base, 16) = ((MR_Box) (ModeCtorCheckedMap_51));
    MR_hl_field(0, base, 17) = ((MR_Box) (TypeSpecs_28));
    MR_hl_field(0, base, 18) = ((MR_Box) (InstModeSpecs_29));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntTypeClasses_53));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntInstances_54));
    MR_hl_field(0, base, 21) = ((MR_Box) (IntPredDecls_55));
    MR_hl_field(0, base, 22) = ((MR_Box) (IntModeDecls_56));
    MR_hl_field(0, base, 23) = ((MR_Box) (IntDeclPragmas_57));
    MR_hl_field(0, base, 24) = ((MR_Box) (IntPromises_58));
    MR_hl_field(0, base, 25) = ((MR_Box) (IntBadPreds_36));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpTypeClasses_60));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpInstances_61));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpPredDecls_62));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpModeDecls_63));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpClauses_64));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpForeignExportEnums_65));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpDeclPragmas_66));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpImplPragmas_67));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpPromises_70));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpInitialises_68));
    MR_hl_field(0, base, 36) = ((MR_Box) (ImpFinalises_69));
    MR_hl_field(0, base, 37) = ((MR_Box) (ImpMutables_71));
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
