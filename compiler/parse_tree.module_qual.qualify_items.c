/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2022-03-13
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "parse_tree.error_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__type_ctor_info_mq_in_interface_0__plain_term__type_ctor_info_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__302__1_8_p_0(
  MR_Word HeadVar__1_77,
  MR_Word HeadVar__2_78,
  MR_Word HeadVar__3_186,
  MR_Word * HeadVar__4_187,
  MR_Word HeadVar__5_188,
  MR_Word * HeadVar__6_189,
  MR_Word HeadVar__7_190,
  MR_Word * HeadVar__8_191);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__298__1_8_p_0(
  MR_Word HeadVar__1_72,
  MR_Word HeadVar__2_73,
  MR_Word HeadVar__3_167,
  MR_Word * HeadVar__4_168,
  MR_Word HeadVar__5_169,
  MR_Word * HeadVar__6_170,
  MR_Word HeadVar__7_171,
  MR_Word * HeadVar__8_172);

static void MR_CALL 
parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_113_117_97_108_105_102_121_95_105_116_101_109_95_116_121_112_101_95_100_101_102_110_95_95_91_49_93_95_48_8_p_0(
  MR_Word QualDefn_9,
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

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
parse_tree__module_qual__qualify_items__qualify_impl_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word UserSharing0_11,
  MR_Word * UserSharing_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

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
  MR_Word * AddrOfHeadVar__4_51,
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
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_spec_subst__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_37,
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

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
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

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
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Decl0_11,
  MR_Word * Decl_12,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

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
  MR_Word * AddrOfHeadVar__4_56,
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
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho2_8_p_0(
  MR_Word InInt_10,
  MR_Word MaybeDefn0_11,
  MR_Word * MaybeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__350__1__ho12_8_p_0(
  MR_Word HeadVar__2_48,
  MR_Word HeadVar__3_49,
  MR_Word * HeadVar__4_50,
  MR_Word HeadVar__5_51,
  MR_Word * HeadVar__6_52,
  MR_Word HeadVar__7_53,
  MR_Word * HeadVar__8_54);

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
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho4_8_p_0(
  MR_Word InInt_10,
  MR_Word MaybeDefn0_11,
  MR_Word * MaybeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_inst_defn__ho3_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemInstDefn0_11,
  MR_Word * ItemInstDefn_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

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
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__250__1__ho10_8_p_0(
  MR_Word HeadVar__2_109,
  MR_Word HeadVar__3_110,
  MR_Word * HeadVar__4_111,
  MR_Word HeadVar__5_112,
  MR_Word * HeadVar__6_113,
  MR_Word HeadVar__7_114,
  MR_Word * HeadVar__8_115);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho13_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

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
  MR_Word * AddrOfHeadVar__3_31,
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
  MR_Word * AddrOfHeadVar__4_66,
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
  MR_Word * AddrOfHeadVar__4_71,
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
  MR_Word * AddrOfHeadVar__6_61,
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
  MR_Word * AddrOfHeadVar__4_34,
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
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * HOInstInfo_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_85,
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
  MR_Word * AddrOfHeadVar__4_82,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_ho_inst_info__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * AddrOfHOInstInfo_28,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_name__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word InstName0_11,
  MR_Word * AddrOfInstName_57,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

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

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_10[1][12];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[2][5];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_12[1][6];




static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_10[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_10[0])),
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__type_ctor_info_mq_in_interface_0__plain_term__type_ctor_info_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_used_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_10[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[2][5] = {
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

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_12[1][6] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
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

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct9 parse_tree__module_qual__qualify_items____vpti_pred_9__plain_parse_tree__module_qual__type_ctor_info_mq_in_interface_0__plain_term__type_ctor_info_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__type_ctor_info_mq_info_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 9,
  {
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__qualify_items__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__302__1_8_p_0(
  MR_Word HeadVar__1_77,
  MR_Word HeadVar__2_78,
  MR_Word HeadVar__3_186,
  MR_Word * HeadVar__4_187,
  MR_Word HeadVar__5_188,
  MR_Word * HeadVar__6_189,
  MR_Word HeadVar__7_190,
  MR_Word * HeadVar__8_191)
{
  parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_113_117_97_108_105_102_121_95_105_116_101_109_95_116_121_112_101_95_100_101_102_110_95_95_91_49_93_95_48_8_p_0(HeadVar__1_77, HeadVar__2_78, HeadVar__3_186, HeadVar__4_187, HeadVar__5_188, HeadVar__6_189, HeadVar__7_190, HeadVar__8_191);
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__298__1_8_p_0(
  MR_Word HeadVar__1_72,
  MR_Word HeadVar__2_73,
  MR_Word HeadVar__3_167,
  MR_Word * HeadVar__4_168,
  MR_Word HeadVar__5_169,
  MR_Word * HeadVar__6_170,
  MR_Word HeadVar__7_171,
  MR_Word * HeadVar__8_172)
{
  parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_113_117_97_108_105_102_121_95_105_116_101_109_95_116_121_112_101_95_100_101_102_110_95_95_91_49_93_95_48_8_p_0(HeadVar__1_72, HeadVar__2_73, HeadVar__3_167, HeadVar__4_168, HeadVar__5_169, HeadVar__6_170, HeadVar__7_171, HeadVar__8_172);
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_113_117_97_108_105_102_121_95_105_116_101_109_95_116_121_112_101_95_100_101_102_110_95_95_91_49_93_95_48_8_p_0(
  MR_Word QualDefn_9,
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Box TypeDefn0_17 = (MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 2));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Box TypeDefn_23;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_Info_25;
  MR_Box conv1_STATE_VARIABLE_Specs_27;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), QualDefn_9, (MR_Integer) 1))));
  func_0(((MR_Box) (QualDefn_9)), ((MR_Box) (InInt_10)), ((MR_Box) (Context_19)), ((MR_Box) (TypeCtor_22)), TypeDefn0_17, &TypeDefn_23, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv2_STATE_VARIABLE_Info_25, ((MR_Box) (STATE_VARIABLE_Specs_0_26)), &conv1_STATE_VARIABLE_Specs_27);
  *STATE_VARIABLE_Info_25 = ((MR_Word) (conv2_STATE_VARIABLE_Info_25));
  *STATE_VARIABLE_Specs_27 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = TypeDefn_23;
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
  MR_Integer AttrNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 0))));
  MR_String AttrName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 1))));
  MR_Word AttrType0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 2))));
  MR_Word AttrMode0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 3))));
  MR_Word MaybeSynthCall_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 4))));
  MR_Word Context_24;
  MR_Word ErrorContext_25;
  MR_Word AttrType_26;
  MR_Word AttrMode_27;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;

  {
    Context_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Context_24, 0) = ((MR_Box) (FileName_13));
    MR_hl_field(MR_mktag(0), Context_24, 1) = ((MR_Box) (LineNumber_14));
  }
  {
    ErrorContext_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_25, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(MR_mktag(3), ErrorContext_25, 1) = ((MR_Box) (Context_24));
    MR_hl_field(MR_mktag(3), ErrorContext_25, 2) = ((MR_Box) (EventName_12));
    MR_hl_field(MR_mktag(3), ErrorContext_25, 3) = ((MR_Box) (AttrName_20));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_11, ErrorContext_25, AttrType0_21, &AttrType_26, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_33_33);
  parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_11, ErrorContext_25, AttrMode0_22, &AttrMode_27, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_29, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Attr_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AttrNum_19));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AttrName_20));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AttrType_26));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AttrMode_27));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeSynthCall_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word MethodSymName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 1))));
  MR_Word InstanceProcDef_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 2))));
  MR_Word Arity_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 3))));
  MR_Word DeclContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 4))));
  MR_Word MethodSymName_13;

  if (((MR_tag((MR_Word) MethodSymName0_8)) == (MR_Integer) 1))
  {
    MR_Word MethodModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MethodSymName0_8, (MR_Integer) 0))));
    MR_String MethodBaseName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MethodSymName0_8, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(MethodModuleName_14, DefaultModuleName_4);
    if (succeeded)
      {
        MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MethodSymName_13, 0) = ((MR_Box) (DefaultModuleName_4));
        MR_hl_field(MR_mktag(1), MethodSymName_13, 1) = ((MR_Box) (MethodBaseName_15));
      }
    else
      MethodSymName_13 = MethodSymName0_8;
  }
  else
  {
    MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), MethodSymName0_8, (MR_Integer) 0))));

    {
      MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MethodSymName_13, 0) = ((MR_Box) (DefaultModuleName_4));
      MR_hl_field(MR_mktag(1), MethodSymName_13, 1) = ((MR_Box) (Name_12));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *InstanceMethod_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MethodSymName_13));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstanceProcDef_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Arity_10));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DeclContext_11));
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
  MR_Word TypeCtorSymName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_11, (MR_Integer) 0))));
  MR_Word ArgTVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_11, (MR_Integer) 1))));
  MR_Word RepInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_11, (MR_Integer) 5))));
  MR_String TypeCtorName_22;
  MR_Word TypeCtorSymName_23;
  MR_Word RepInfo_26;

  if (((MR_tag((MR_Word) TypeCtorSymName0_15)) == (MR_Integer) 1))
    TypeCtorName_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName0_15, (MR_Integer) 1))));
  else
    TypeCtorName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName0_15, (MR_Integer) 0))));
  {
    TypeCtorSymName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeCtorSymName_23, 0) = ((MR_Box) (ModuleName_9));
    MR_hl_field(MR_mktag(1), TypeCtorSymName_23, 1) = ((MR_Box) (TypeCtorName_22));
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
        MR_Word EqvType0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepInfo0_17, (MR_Integer) 0))));
        MR_Integer TypeCtorArity_28;
        MR_Word TypeCtor_29;
        MR_Word ErrorContext_30;
        MR_Word EqvType_31;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), ArgTVars_16, &TypeCtorArity_28);
        {
          TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_29, 0) = ((MR_Box) (TypeCtorSymName_23));
          MR_hl_field(MR_mktag(0), TypeCtor_29, 1) = ((MR_Box) (TypeCtorArity_28));
        }
        {
          ErrorContext_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_30, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), ErrorContext_30, 1) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(3), ErrorContext_30, 2) = ((MR_Box) (TypeCtor_29));
        }
        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_30, EqvType0_27, &EqvType_31, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
        {
          RepInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RepInfo_26, 0) = ((MR_Box) (EqvType_31));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RepInfo0_17, (MR_Integer) 0))));
        MR_Word SuperTypeCtor_33;
        MR_Integer TypeCtorArity_42;
        MR_Word TypeCtor_43;
        MR_Word ErrorContext_44;
        MR_Word SymName0_57;
        MR_Integer Arity_58;
        MR_Word SymName_66;
        MR_Integer Var_67;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), ArgTVars_16, &TypeCtorArity_42);
        {
          TypeCtor_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_43, 0) = ((MR_Box) (TypeCtorSymName_23));
          MR_hl_field(MR_mktag(0), TypeCtor_43, 1) = ((MR_Box) (TypeCtorArity_42));
        }
        {
          ErrorContext_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_44, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), ErrorContext_44, 1) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(3), ErrorContext_44, 2) = ((MR_Box) (TypeCtor_43));
        }
        SymName0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperTypeCtor0_32, (MR_Integer) 0))));
        Arity_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SuperTypeCtor0_32, (MR_Integer) 1))));
        SymName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuperTypeCtor0_32, (MR_Integer) 0))));
        Var_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SuperTypeCtor0_32, (MR_Integer) 1))));
        succeeded = (Var_67 == (MR_Integer) 0);
        if (succeeded)
          succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_66);
        if (succeeded)
        {
          SuperTypeCtor_33 = SuperTypeCtor0_32;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        }
        else
        {
          MR_Word TypeCtorId0_59;
          MR_Word Types_60;
          MR_Word SymName_61;

          {
            TypeCtorId0_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorId0_59, 0) = ((MR_Box) (SymName0_57));
            MR_hl_field(MR_mktag(0), TypeCtorId0_59, 1) = ((MR_Box) (Arity_58));
          }
          parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_60);
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_10, ErrorContext_44, Types_60, (MR_Integer) 0, TypeCtorId0_59, &SymName_61, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          {
            SuperTypeCtor_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SuperTypeCtor_33, 0) = ((MR_Box) (SymName_61));
            MR_hl_field(MR_mktag(0), SuperTypeCtor_33, 1) = ((MR_Box) (Arity_58));
          }
        }
        {
          RepInfo_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RepInfo_26, 0) = ((MR_Box) (SuperTypeCtor_33));
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
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtorSymName_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTVars_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RepInfo_26));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
  MR_Word Pragma0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma0_9, (MR_Integer) 0))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma0_9, (MR_Integer) 1))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma0_9, (MR_Integer) 2))));
  MR_Word Pragma_16;

  parse_tree__module_qual__qualify_items__qualify_impl_pragma_8_p_0(InInt_8, Context_14, Pragma0_13, &Pragma_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ItemImplPragma_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pragma_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_14));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeqNum_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_impl_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  switch (MR_tag((MR_Word) Pragma0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_12 = Pragma0_11;
        *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
        *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo0_29 = (MR_Word) (MR_body((MR_Word) (Pragma0_11), (MR_Integer) 2));
        MR_Word Attrs0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 0))));
        MR_Word Name_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 1))));
        MR_Word PredOrFunc_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word Vars0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 3))));
        MR_Word Varset_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 4))));
        MR_Word InstVarset_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 5))));
        MR_Word Impl_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_29, (MR_Integer) 6))));
        MR_Word ErrorContext_37;
        MR_Word Vars_38;
        MR_Word UserSharing0_39;
        MR_Word UserSharing_40;
        MR_Word Attrs_41;
        MR_Word FPInfo_42;
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Word STATE_VARIABLE_Specs_75_75;

        {
          ErrorContext_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), ErrorContext_37, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), ErrorContext_37, 2) = ((MR_Box) (Pragma0_11));
        }
        parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(InInt_9, ErrorContext_37, Vars0_33, &Vars_38, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_75_75);
        UserSharing0_39 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_30);
        parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(InInt_9, ErrorContext_37, UserSharing0_39, &UserSharing_40, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_67);
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_40, Attrs0_30, &Attrs_41);
        {
          FPInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FPInfo_42, 0) = ((MR_Box) (Attrs_41));
          MR_hl_field(MR_mktag(0), FPInfo_42, 1) = ((MR_Box) (Name_31));
          MR_hl_field(MR_mktag(0), FPInfo_42, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_32));
          MR_hl_field(MR_mktag(0), FPInfo_42, 3) = ((MR_Box) (Vars_38));
          MR_hl_field(MR_mktag(0), FPInfo_42, 4) = ((MR_Box) (Varset_34));
          MR_hl_field(MR_mktag(0), FPInfo_42, 5) = ((MR_Box) (InstVarset_35));
          MR_hl_field(MR_mktag(0), FPInfo_42, 6) = ((MR_Box) (Impl_36));
        }
        *Pragma_12 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_42)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Origin_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_56, (MR_Integer) 0))));
            MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo0_56, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word PredNameModesPF0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_56, (MR_Integer) 2))));
            MR_String CFunc_60 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo0_56, (MR_Integer) 3))));
            MR_Word VarSet_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_56, (MR_Integer) 4))));
            MR_Word PredNameModesPF_62;
            MR_Word FPEInfo_63;
            MR_Word Name_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_59, (MR_Integer) 1))));
            MR_Word PredOrFunc_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_59, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ErrorContext_105;
            MR_Word Modes0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_59, (MR_Integer) 2))));
            MR_Word Modes_107;

            {
              ErrorContext_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_105, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), ErrorContext_105, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_105, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_105, Modes0_106, &Modes_107, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            {
              PredNameModesPF_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_62, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_104));
              MR_hl_field(MR_mktag(0), PredNameModesPF_62, 1) = ((MR_Box) (Name_103));
              MR_hl_field(MR_mktag(0), PredNameModesPF_62, 2) = ((MR_Box) (Modes_107));
            }
            {
              FPEInfo_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_63, 0) = ((MR_Box) (Origin_57));
              MR_hl_field(MR_mktag(0), FPEInfo_63, 1) = (MR_Box) ((MR_Unsigned) (Lang_58));
              MR_hl_field(MR_mktag(0), FPEInfo_63, 2) = ((MR_Box) (PredNameModesPF_62));
              MR_hl_field(MR_mktag(0), FPEInfo_63, 3) = ((MR_Box) (CFunc_60));
              MR_hl_field(MR_mktag(0), FPEInfo_63, 4) = ((MR_Box) (VarSet_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FPEInfo_63));
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
            *Pragma_12 = Pragma0_11;
            *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
            *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TabledInfo0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word EvalMethod_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_43, (MR_Integer) 0))));
            MR_Word PredOrProcSpec0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_43, (MR_Integer) 1))));
            MR_Word PFUMM0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrProcSpec0_45, (MR_Integer) 0))));
            MR_Word PredSymName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrProcSpec0_45, (MR_Integer) 1))));
            MR_Word PFUMM_52;
            MR_Word PredOrProcSpec_54;
            MR_Word TabledInfo_55;
            MR_Word Attrs_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_43, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) PFUMM0_46)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM0_46, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_48)) == (MR_Integer) 1))
                  {
                    PFUMM_52 = PFUMM0_46;
                    *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
                    *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
                  }
                  else
                  {
                    MR_Word Modes0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity0_48, (MR_Integer) 0))));
                    MR_Word Modes_50;
                    MR_Word ModesOrArity_51;
                    MR_Word ErrorContext_78;

                    {
                      ErrorContext_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ErrorContext_78, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), ErrorContext_78, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), ErrorContext_78, 2) = ((MR_Box) (Pragma0_11));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_78, Modes0_49, &Modes_50, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
                    {
                      ModesOrArity_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ModesOrArity_51, 0) = ((MR_Box) (Modes_50));
                    }
                    {
                      PFUMM_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PFUMM_52, 0) = ((MR_Box) (ModesOrArity_51));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PFUMM0_46, (MR_Integer) 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_93)) == (MR_Integer) 1))
                  {
                    PFUMM_52 = PFUMM0_46;
                    *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
                    *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
                  }
                  else
                  {
                    MR_Word ErrorContext_81;
                    MR_Word Modes0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity0_93, (MR_Integer) 0))));
                    MR_Word Modes_83;
                    MR_Word ModesOrArity_84;

                    {
                      ErrorContext_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ErrorContext_81, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), ErrorContext_81, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), ErrorContext_81, 2) = ((MR_Box) (Pragma0_11));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_81, Modes0_82, &Modes_83, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
                    {
                      ModesOrArity_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ModesOrArity_84, 0) = ((MR_Box) (Modes_83));
                    }
                    {
                      PFUMM_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), PFUMM_52, 0) = ((MR_Box) (ModesOrArity_84));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_52 = PFUMM0_46;
                  *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
                  *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
                }
                break;
            }
            {
              PredOrProcSpec_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredOrProcSpec_54, 0) = ((MR_Box) (PFUMM_52));
              MR_hl_field(MR_mktag(0), PredOrProcSpec_54, 1) = ((MR_Box) (PredSymName_47));
            }
            {
              TabledInfo_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TabledInfo_55, 0) = ((MR_Box) (EvalMethod_44));
              MR_hl_field(MR_mktag(0), TabledInfo_55, 1) = ((MR_Box) (PredOrProcSpec_54));
              MR_hl_field(MR_mktag(0), TabledInfo_55, 2) = ((MR_Box) (Attrs_102));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TabledInfo_55));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word UserSharing0_11,
  MR_Word * UserSharing_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if ((UserSharing0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *UserSharing_12 = UserSharing0_11;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
  else
  {
    MR_Word Sharing_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_11, (MR_Integer) 0))));
    MR_Word MaybeTypes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_11, (MR_Integer) 1))));

    if ((MaybeTypes0_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *UserSharing_12 = UserSharing0_11;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word Types0_17;
      MR_Word TVarset_18;
      MR_Word Types_19;
      MR_Word MaybeTypes_20;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes0_16, (MR_Integer) 0))));
      MR_Word Var_28;

      Types0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      TVarset_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Types0_17, &Types_19, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Types_19));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (TVarset_18));
      }
      {
        MaybeTypes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTypes_20, 0) = ((MR_Box) (Var_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UserSharing_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Sharing_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeTypes_20));
      }
    }
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
    MR_Word PragmaVar0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word PragmaVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word PragmaVar_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 0))));
    MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 1))));
    MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 2))));
    MR_Word Box_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Mode_47;
    MR_Word * AddrPragmaVars_50;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PragmaVar_21, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), PragmaVar_21, 1) = ((MR_Box) (Name_44));
      MR_hl_field(MR_mktag(0), PragmaVar_21, 2) = ((MR_Box) (Mode_47));
      MR_hl_field(MR_mktag(0), PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaVar_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrPragmaVars_50 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(HeadVar__1_1, HeadVar__2_2, PragmaVars0_20, AddrPragmaVars_50, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_51,
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
      *AddrOfHeadVar__4_51 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word PragmaVar0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PragmaVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PragmaVar_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 0))));
      MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 1))));
      MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 2))));
      MR_Word Box_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word Mode_47;
      MR_Word * AddrPragmaVars_50;
      MR_Word HeadVar__4_52;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_51;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PragmaVar_21, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), PragmaVar_21, 1) = ((MR_Box) (Name_44));
        MR_hl_field(MR_mktag(0), PragmaVar_21, 2) = ((MR_Box) (Mode_47));
        MR_hl_field(MR_mktag(0), PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_46));
      }
      {
        HeadVar__4_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_52, 0) = ((MR_Box) (PragmaVar_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_52, 1) = NULL;
      }
      AddrPragmaVars_50 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_52, (MR_Integer) 1)));
      *AddrOfHeadVar__4_51 = HeadVar__4_52;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PragmaVars0_20;
      next_value_of_AddrOfHeadVar__4_51 = AddrPragmaVars_50;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_51 = next_value_of_AddrOfHeadVar__4_51;
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
  MR_Word Pragma0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma0_9, (MR_Integer) 0))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma0_9, (MR_Integer) 1))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma0_9, (MR_Integer) 2))));
  MR_Word Pragma_16;

  parse_tree__module_qual__qualify_items__qualify_decl_pragma_8_p_0(InInt_8, Context_14, Pragma0_13, &Pragma_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ItemDeclPragma_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pragma_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_14));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeqNum_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_decl_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  switch (MR_tag((MR_Word) Pragma0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_12 = Pragma0_11;
        *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
        *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeSpecInfo0_15 = (MR_Word) (MR_body((MR_Word) (Pragma0_11), (MR_Integer) 2));
        MR_Word PFUMM0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_15, (MR_Integer) 0))));
        MR_Word PredName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_15, (MR_Integer) 1))));
        MR_Word SpecPredName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_15, (MR_Integer) 2))));
        MR_Word Subst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_15, (MR_Integer) 3))));
        MR_Word TVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_15, (MR_Integer) 4))));
        MR_Word Items_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_15, (MR_Integer) 5))));
        MR_Word ErrorContext_22;
        MR_Word PFUMM_27;
        MR_Word Subst_29;
        MR_Word TypeSpecInfo_30;
        MR_Word STATE_VARIABLE_Info_80_80;
        MR_Word STATE_VARIABLE_Specs_81_81;

        {
          ErrorContext_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), ErrorContext_22, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), ErrorContext_22, 2) = ((MR_Box) (Pragma0_11));
        }
        switch (MR_tag((MR_Word) PFUMM0_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModesOrArity0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM0_16, (MR_Integer) 0))));

              if (((MR_tag((MR_Word) ModesOrArity0_23)) == (MR_Integer) 1))
              {
                PFUMM_27 = PFUMM0_16;
                STATE_VARIABLE_Info_80_80 = STATE_VARIABLE_Info_0_64;
                STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_66;
              }
              else
              {
                MR_Word Modes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity0_23, (MR_Integer) 0))));
                MR_Word Modes_25;
                MR_Word ModesOrArity_26;

                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_22, Modes0_24, &Modes_25, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_80_80, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_81_81);
                {
                  ModesOrArity_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ModesOrArity_26, 0) = ((MR_Box) (Modes_25));
                }
                {
                  PFUMM_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PFUMM_27, 0) = ((MR_Box) (ModesOrArity_26));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModesOrArity0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PFUMM0_16, (MR_Integer) 0))));

              if (((MR_tag((MR_Word) ModesOrArity0_93)) == (MR_Integer) 1))
              {
                PFUMM_27 = PFUMM0_16;
                STATE_VARIABLE_Info_80_80 = STATE_VARIABLE_Info_0_64;
                STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_66;
              }
              else
              {
                MR_Word Modes0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity0_93, (MR_Integer) 0))));
                MR_Word Modes_85;
                MR_Word ModesOrArity_86;

                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_22, Modes0_84, &Modes_85, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_80_80, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_81_81);
                {
                  ModesOrArity_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ModesOrArity_86, 0) = ((MR_Box) (Modes_85));
                }
                {
                  PFUMM_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), PFUMM_27, 0) = ((MR_Box) (ModesOrArity_86));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              PFUMM_27 = PFUMM0_16;
              STATE_VARIABLE_Info_80_80 = STATE_VARIABLE_Info_0_64;
              STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_66;
            }
            break;
        }
        parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(InInt_9, ErrorContext_22, Subst0_19, &Subst_29, STATE_VARIABLE_Info_80_80, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_81_81, STATE_VARIABLE_Specs_67);
        {
          TypeSpecInfo_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeSpecInfo_30, 0) = ((MR_Box) (PFUMM_27));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_30, 1) = ((MR_Box) (PredName_17));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_30, 2) = ((MR_Box) (SpecPredName_18));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_30, 3) = ((MR_Box) (Subst_29));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_30, 4) = ((MR_Box) (TVarSet_20));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_30, 5) = ((MR_Box) (Items_21));
        }
        *Pragma_12 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (TypeSpecInfo_30)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OISUInfo0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word TypeCtor0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_31, (MR_Integer) 0))));
            MR_Word CreatorPreds_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_31, (MR_Integer) 1))));
            MR_Word MutatorPreds_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_31, (MR_Integer) 2))));
            MR_Word DestructorPreds_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_31, (MR_Integer) 3))));
            MR_Word TypeCtor_36;
            MR_Word OISUInfo_37;
            MR_Word ErrorContext_100;

            {
              ErrorContext_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_100, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_100, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_100, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_100, TypeCtor0_32, &TypeCtor_36, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            {
              OISUInfo_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OISUInfo_37, 0) = ((MR_Box) (TypeCtor_36));
              MR_hl_field(MR_mktag(0), OISUInfo_37, 1) = ((MR_Box) (CreatorPreds_33));
              MR_hl_field(MR_mktag(0), OISUInfo_37, 2) = ((MR_Box) (MutatorPreds_34));
              MR_hl_field(MR_mktag(0), OISUInfo_37, 3) = ((MR_Box) (DestructorPreds_35));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OISUInfo_37));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            *Pragma_12 = Pragma0_11;
            *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
            *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TermInfo0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_38, (MR_Integer) 0))));
            MR_Word Args_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_38, (MR_Integer) 1))));
            MR_Word Term_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_38, (MR_Integer) 2))));
            MR_Word PredOrFunc_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_39, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_39, (MR_Integer) 1))));
            MR_Word PredNameModesPF_44;
            MR_Word TermInfo_45;
            MR_Word ErrorContext_101;
            MR_Word Modes0_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_39, (MR_Integer) 2))));
            MR_Word Modes_103;

            {
              ErrorContext_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_101, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_101, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_101, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_101, Modes0_102, &Modes_103, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            {
              PredNameModesPF_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_42));
              MR_hl_field(MR_mktag(0), PredNameModesPF_44, 1) = ((MR_Box) (SymName_43));
              MR_hl_field(MR_mktag(0), PredNameModesPF_44, 2) = ((MR_Box) (Modes_103));
            }
            {
              TermInfo_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TermInfo_45, 0) = ((MR_Box) (PredNameModesPF_44));
              MR_hl_field(MR_mktag(0), TermInfo_45, 1) = ((MR_Box) (Args_40));
              MR_hl_field(MR_mktag(0), TermInfo_45, 2) = ((MR_Box) (Term_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TermInfo_45));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Term2Info0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word SuccessArgs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_46, (MR_Integer) 1))));
            MR_Word FailureArgs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_46, (MR_Integer) 2))));
            MR_Word Term2Info_49;
            MR_Word ErrorContext_104;
            MR_Word Modes0_105;
            MR_Word Modes_106;
            MR_Word PredNameModesPF0_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_46, (MR_Integer) 0))));
            MR_Word Term_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_46, (MR_Integer) 3))));
            MR_Word PredOrFunc_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_107, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_107, (MR_Integer) 1))));
            MR_Word PredNameModesPF_111;

            Modes0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_107, (MR_Integer) 2))));
            {
              ErrorContext_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_104, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_104, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_104, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_104, Modes0_105, &Modes_106, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            {
              PredNameModesPF_111 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_111, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_109));
              MR_hl_field(MR_mktag(0), PredNameModesPF_111, 1) = ((MR_Box) (SymName_110));
              MR_hl_field(MR_mktag(0), PredNameModesPF_111, 2) = ((MR_Box) (Modes_106));
            }
            {
              Term2Info_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Term2Info_49, 0) = ((MR_Box) (PredNameModesPF_111));
              MR_hl_field(MR_mktag(0), Term2Info_49, 1) = ((MR_Box) (SuccessArgs_47));
              MR_hl_field(MR_mktag(0), Term2Info_49, 2) = ((MR_Box) (FailureArgs_48));
              MR_hl_field(MR_mktag(0), Term2Info_49, 3) = ((MR_Box) (Term_108));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term2Info_49));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word SharingInfo0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word HeadVars_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_50, (MR_Integer) 1))));
            MR_Word HeadVarTypes_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_50, (MR_Integer) 2))));
            MR_Word VarSet_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_50, (MR_Integer) 3))));
            MR_Word MaybeSharing_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_50, (MR_Integer) 5))));
            MR_Word SharingInfo_55;
            MR_Word TVarSet_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_50, (MR_Integer) 4))));
            MR_Word ErrorContext_113;
            MR_Word Modes0_114;
            MR_Word Modes_115;
            MR_Word PredNameModesPF0_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_50, (MR_Integer) 0))));
            MR_Word PredOrFunc_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_116, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_116, (MR_Integer) 1))));
            MR_Word PredNameModesPF_119;

            Modes0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_116, (MR_Integer) 2))));
            {
              ErrorContext_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_113, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_113, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_113, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_113, Modes0_114, &Modes_115, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            {
              PredNameModesPF_119 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_119, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_117));
              MR_hl_field(MR_mktag(0), PredNameModesPF_119, 1) = ((MR_Box) (SymName_118));
              MR_hl_field(MR_mktag(0), PredNameModesPF_119, 2) = ((MR_Box) (Modes_115));
            }
            {
              SharingInfo_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SharingInfo_55, 0) = ((MR_Box) (PredNameModesPF_119));
              MR_hl_field(MR_mktag(0), SharingInfo_55, 1) = ((MR_Box) (HeadVars_51));
              MR_hl_field(MR_mktag(0), SharingInfo_55, 2) = ((MR_Box) (HeadVarTypes_52));
              MR_hl_field(MR_mktag(0), SharingInfo_55, 3) = ((MR_Box) (VarSet_53));
              MR_hl_field(MR_mktag(0), SharingInfo_55, 4) = ((MR_Box) (TVarSet_112));
              MR_hl_field(MR_mktag(0), SharingInfo_55, 5) = ((MR_Box) (MaybeSharing_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SharingInfo_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ReuseInfo0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word MaybeReuse_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_56, (MR_Integer) 5))));
            MR_Word ReuseInfo_58;
            MR_Word TVarSet_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_56, (MR_Integer) 4))));
            MR_Word ErrorContext_121;
            MR_Word Modes0_122;
            MR_Word Modes_123;
            MR_Word PredNameModesPF0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_56, (MR_Integer) 0))));
            MR_Word PredOrFunc_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_124, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word SymName_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_124, (MR_Integer) 1))));
            MR_Word PredNameModesPF_127;
            MR_Word HeadVars_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_56, (MR_Integer) 1))));
            MR_Word HeadVarTypes_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_56, (MR_Integer) 2))));
            MR_Word VarSet_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_56, (MR_Integer) 3))));

            Modes0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_124, (MR_Integer) 2))));
            {
              ErrorContext_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_121, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_121, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_121, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_121, Modes0_122, &Modes_123, STATE_VARIABLE_Info_0_64, STATE_VARIABLE_Info_65, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            {
              PredNameModesPF_127 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_127, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_125));
              MR_hl_field(MR_mktag(0), PredNameModesPF_127, 1) = ((MR_Box) (SymName_126));
              MR_hl_field(MR_mktag(0), PredNameModesPF_127, 2) = ((MR_Box) (Modes_123));
            }
            {
              ReuseInfo_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ReuseInfo_58, 0) = ((MR_Box) (PredNameModesPF_127));
              MR_hl_field(MR_mktag(0), ReuseInfo_58, 1) = ((MR_Box) (HeadVars_128));
              MR_hl_field(MR_mktag(0), ReuseInfo_58, 2) = ((MR_Box) (HeadVarTypes_129));
              MR_hl_field(MR_mktag(0), ReuseInfo_58, 3) = ((MR_Box) (VarSet_130));
              MR_hl_field(MR_mktag(0), ReuseInfo_58, 4) = ((MR_Box) (TVarSet_120));
              MR_hl_field(MR_mktag(0), ReuseInfo_58, 5) = ((MR_Box) (MaybeReuse_57));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ReuseInfo_58));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
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
    MR_Word Var_19;
    MR_Word Type0_20;
    MR_Word Subst0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_22;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Word * AddrSubst_36;

    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
    Type0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_20, &Type_22, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Type_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrSubst_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_spec_subst__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Subst0_21, AddrSubst_36, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_spec_subst__1_8_p_0(
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
      MR_Word Var_19;
      MR_Word Type0_20;
      MR_Word Subst0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Type_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Word * AddrSubst_36;
      MR_Word HeadVar__4_38;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_37;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      Type0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_20, &Type_22, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Type_22));
      }
      {
        HeadVar__4_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_38, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), HeadVar__4_38, 1) = NULL;
      }
      AddrSubst_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_38, (MR_Integer) 1)));
      *AddrOfHeadVar__4_37 = HeadVar__4_38;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Subst0_21;
      next_value_of_AddrOfHeadVar__4_37 = AddrSubst_36;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
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
  MR_Word SymName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 0))));
  MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 1))));
  MR_Word SymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 0))));
  MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 1))));

  succeeded = (Var_29 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_28);
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
      MR_hl_field(MR_mktag(0), TypeCtorId0_17, 0) = ((MR_Box) (SymName0_15));
      MR_hl_field(MR_mktag(0), TypeCtorId0_17, 1) = ((MR_Box) (Arity_16));
    }
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_18);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_18, (MR_Integer) 0, TypeCtorId0_17, &SymName_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtor_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_16));
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
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemFEE0_9, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFEE0_9, (MR_Integer) 1))));
  MR_Word Attributes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFEE0_9, (MR_Integer) 2))));
  MR_Word Overrides_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFEE0_9, (MR_Integer) 3))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFEE0_9, (MR_Integer) 4))));
  MR_Word SeqNum_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFEE0_9, (MR_Integer) 5))));
  MR_Word ErrorContext_19;
  MR_Word OldSuppressUndef_20;
  MR_Word TypeCtor_21;
  MR_Word STATE_VARIABLE_Info_27_27;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word SymName0_41;
  MR_Integer Arity_42;
  MR_Word SymName_50;
  MR_Integer Var_51;

  {
    ErrorContext_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), ErrorContext_19, 1) = ((MR_Box) (Context_17));
  }
  parse_tree__module_qual__mq_info_get_suppress_found_undef_2_p_0(STATE_VARIABLE_Info_0_22, &OldSuppressUndef_20);
  parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
  SymName0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 0))));
  Arity_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 1))));
  SymName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 0))));
  Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 1))));
  succeeded = (Var_51 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_50);
  if (succeeded)
  {
    TypeCtor_21 = TypeCtor0_14;
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
  }
  else
  {
    MR_Word TypeCtorId0_43;
    MR_Word Types_44;
    MR_Word SymName_45;

    {
      TypeCtorId0_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorId0_43, 0) = ((MR_Box) (SymName0_41));
      MR_hl_field(MR_mktag(0), TypeCtorId0_43, 1) = ((MR_Box) (Arity_42));
    }
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_27_27, &Types_44);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_19, Types_44, (MR_Integer) 0, TypeCtorId0_43, &SymName_45, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    {
      TypeCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_21, 0) = ((MR_Box) (SymName_45));
      MR_hl_field(MR_mktag(0), TypeCtor_21, 1) = ((MR_Box) (Arity_42));
    }
  }
  parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0(OldSuppressUndef_20, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemFEE_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Lang_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeCtor_21));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Attributes_15));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Overrides_16));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_17));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_18));
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
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_9, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_9, (MR_Integer) 1))));
  MR_Word Values_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_9, (MR_Integer) 2))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_9, (MR_Integer) 3))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_9, (MR_Integer) 4))));
  MR_Word ErrorContext_18;
  MR_Word TypeCtor_19;
  MR_Word SymName0_36;
  MR_Integer Arity_37;
  MR_Word SymName_45;
  MR_Integer Var_46;

  {
    ErrorContext_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), ErrorContext_18, 1) = ((MR_Box) (Context_16));
  }
  SymName0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 0))));
  Arity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 1))));
  SymName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 0))));
  Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_14, (MR_Integer) 1))));
  succeeded = (Var_46 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_45);
  if (succeeded)
  {
    TypeCtor_19 = TypeCtor0_14;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word TypeCtorId0_38;
    MR_Word Types_39;
    MR_Word SymName_40;

    {
      TypeCtorId0_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorId0_38, 0) = ((MR_Box) (SymName0_36));
      MR_hl_field(MR_mktag(0), TypeCtorId0_38, 1) = ((MR_Box) (Arity_37));
    }
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_39);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_18, Types_39, (MR_Integer) 0, TypeCtorId0_38, &SymName_40, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_19, 0) = ((MR_Box) (SymName_40));
      MR_hl_field(MR_mktag(0), TypeCtor_19, 1) = ((MR_Box) (Arity_37));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *ItemForeignEnum_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Lang_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeCtor_19));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Values_15));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_16));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (SeqNum_17));
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
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 0))));
  MR_Word PredOrFunc_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 1))));
  MR_Word Modes0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 2))));
  MR_Word MaybeWithInst0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 3))));
  MR_Word MaybeDetism_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 4))));
  MR_Word InstVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 5))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 6))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_9, (MR_Integer) 7))));
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
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Arity_21));
  }
  {
    ErrorContext_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), ErrorContext_22, 1) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(3), ErrorContext_22, 2) = ((MR_Box) (PredOrFunc_14));
    MR_hl_field(MR_mktag(3), ErrorContext_22, 3) = ((MR_Box) (Var_31));
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
    MR_Word WithInst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_16, (MR_Integer) 0))));
    MR_Word WithInst_25;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_22, WithInst0_24, &WithInst_25, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_30);
    {
      MaybeWithInst_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWithInst_26, 0) = ((MR_Box) (WithInst_25));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemModeDecl_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredOrFunc_14));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Modes_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeWithInst_26));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeDetism_17));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SeqNum_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemPredDecl0_9,
  MR_Word * ItemPredDecl_10,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 0))));
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndModes0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 2))));
  MR_Word MaybeWithType0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 3))));
  MR_Word MaybeWithInst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 4))));
  MR_Word MaybeDetism_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 5))));
  MR_Word Origin_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 6))));
  MR_Word TypeVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 7))));
  MR_Word InstVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 8))));
  MR_Word ExistQVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 9))));
  MR_Word Purity_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 10))) & (MR_Integer) 3);
  MR_Word Constraints0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 11))));
  MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 12))));
  MR_Word SeqNum_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_9, (MR_Integer) 13))));
  MR_Integer Arity_27;
  MR_Word ErrorContext_28;
  MR_Word TypesAndModes_29;
  MR_Word ConstraintErrorContext_30;
  MR_Word Constraints_31;
  MR_Word MaybeWithType_34;
  MR_Word MaybeWithInst_37;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word STATE_VARIABLE_Specs_44_44;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word STATE_VARIABLE_Specs_46_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Word UnivCs0_62;
  MR_Word ExistCs0_63;
  MR_Word UnivCs_64;
  MR_Word ExistCs_65;
  MR_Word STATE_VARIABLE_Info_23_66;
  MR_Word STATE_VARIABLE_Specs_24_67;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_15, &Arity_27);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Arity_27));
  }
  {
    ErrorContext_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), ErrorContext_28, 1) = ((MR_Box) (Context_25));
    MR_hl_field(MR_mktag(3), ErrorContext_28, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(MR_mktag(3), ErrorContext_28, 3) = ((MR_Box) (Var_42));
  }
  parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_8, ErrorContext_28, TypesAndModes0_15, &TypesAndModes_29, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_44_44);
  {
    ConstraintErrorContext_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ConstraintErrorContext_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), ConstraintErrorContext_30, 1) = ((MR_Box) (Context_25));
    MR_hl_field(MR_mktag(3), ConstraintErrorContext_30, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(MR_mktag(3), ConstraintErrorContext_30, 3) = ((MR_Box) (SymName_13));
    MR_hl_field(MR_mktag(3), ConstraintErrorContext_30, 4) = ((MR_Box) (Arity_27));
  }
  UnivCs0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_24, (MR_Integer) 0))));
  ExistCs0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_24, (MR_Integer) 1))));
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_30, UnivCs0_62, &UnivCs_64, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_23_66, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_24_67);
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_30, ExistCs0_63, &ExistCs_65, STATE_VARIABLE_Info_23_66, &STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Specs_24_67, &STATE_VARIABLE_Specs_46_46);
  {
    Constraints_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Constraints_31, 0) = ((MR_Box) (UnivCs_64));
    MR_hl_field(MR_mktag(0), Constraints_31, 1) = ((MR_Box) (ExistCs_65));
  }
  if ((MaybeWithType0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithType_34 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_47_47 = STATE_VARIABLE_Info_45_45;
    STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_46_46;
  }
  else
  {
    MR_Word WithType0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_16, (MR_Integer) 0))));
    MR_Word WithType_33;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_28, WithType0_32, &WithType_33, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_46_46, &STATE_VARIABLE_Specs_48_48);
    {
      MaybeWithType_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWithType_34, 0) = ((MR_Box) (WithType_33));
    }
  }
  if ((MaybeWithInst0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithInst_37 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_47_47;
    *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_48_48;
  }
  else
  {
    MR_Word WithInst0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_17, (MR_Integer) 0))));
    MR_Word WithInst_36;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_28, WithInst0_35, &WithInst_36, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_39, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_41);
    {
      MaybeWithInst_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWithInst_37, 0) = ((MR_Box) (WithInst_36));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    *ItemPredDecl_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_13));
    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypesAndModes_29));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeWithType_34));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeWithInst_37));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeDetism_18));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Origin_19));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeVarSet_20));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstVarSet_21));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ExistQVars_22));
    MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Purity_23));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Constraints_31));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Context_25));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (SeqNum_26));
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

  parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstanceMethod_6);
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
  MR_Word Name0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 0))));
  MR_Word Types0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 1))));
  MR_Word OriginalTypes0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 2))));
  MR_Word Constraints0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 3))));
  MR_Word Body0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 4))));
  MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 5))));
  MR_Word ModName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 6))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 7))));
  MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_9, (MR_Integer) 8))));
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
  MR_Word ClassIdSet_57;
  MR_Word Var_30;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_14, &Arity_22);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name0_13));
    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Arity_22));
  }
  {
    ErrorContext_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), ErrorContext_23, 1) = ((MR_Box) (Context_20));
    MR_hl_field(MR_mktag(3), ErrorContext_23, 2) = ((MR_Box) (Var_36));
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
    ConstraintErrorContext_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), ConstraintErrorContext_24, 0) = ((MR_Box) (Context_20));
    MR_hl_field(MR_mktag(2), ConstraintErrorContext_24, 1) = ((MR_Box) (Name0_13));
    MR_hl_field(MR_mktag(2), ConstraintErrorContext_24, 2) = ((MR_Box) (OriginalTypes0_15));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_24, Constraints0_16, &Constraints_25, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_40_40);
  {
    Id0_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Id0_26, 0) = ((MR_Box) (Name0_13));
    MR_hl_field(MR_mktag(0), Id0_26, 1) = ((MR_Box) (Arity_22));
  }
  parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_39_39, &ClassIdSet_57);
  parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_23, ClassIdSet_57, (MR_Integer) 3, Id0_26, &Name_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Specs_40_40, &STATE_VARIABLE_Specs_42_42);
  parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_23, Types0_14, &Types_28, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_35);
  parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_23, OriginalTypes0_15, &OriginalTypes_29, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_33, *STATE_VARIABLE_Specs_35, &Var_30);
  if ((Body0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    Body_31 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Methods0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_17, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Name_27)) == (MR_Integer) 1))
    {
      MR_Word DefaultModuleName_68;
      MR_Word Methods_69;
      MR_Word Var_72;

      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Name_27, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[12]), &DefaultModuleName_68);
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (DefaultModuleName_68));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Var_72, Methods0_64, &Methods_69);
      {
        Body_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Body_31, 0) = ((MR_Box) (Methods_69));
      }
    }
    else
      Body_31 = Body0_17;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ItemInstance_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_27));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Types_28));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OriginalTypes_29));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Constraints_25));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Body_31));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarSet_18));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ModName_19));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Context_20));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (SeqNum_21));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeClass0_9,
  MR_Word * ItemTypeClass_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 0))));
  MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 1))));
  MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 2))));
  MR_Word FunDeps_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 3))));
  MR_Word Interface0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 4))));
  MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 5))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 6))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_9, (MR_Integer) 7))));
  MR_Integer Arity_21;
  MR_Word ConstraintErrorContext_22;
  MR_Word Constraints_23;
  MR_Word Interface_24;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Vars_14, &Arity_21);
  {
    ConstraintErrorContext_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ConstraintErrorContext_22, 0) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), ConstraintErrorContext_22, 1) = ((MR_Box) (Name_13));
    MR_hl_field(MR_mktag(0), ConstraintErrorContext_22, 2) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_22, Constraints0_15, &Constraints_23, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_33_33);
  if ((Interface0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Interface_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_32_32;
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_33_33;
  }
  else
  {
    MR_Word Methods0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_17, (MR_Integer) 0))));
    MR_Word ErrorContext_26;
    MR_Word Methods_27;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Arity_21));
    }
    {
      ErrorContext_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_26, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), ErrorContext_26, 1) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(3), ErrorContext_26, 2) = ((MR_Box) (Var_34));
    }
    parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(InInt_8, ErrorContext_26, Methods0_25, &Methods_27, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_29, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_31);
    {
      Interface_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Interface_24, 0) = ((MR_Box) (Methods_27));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeClass_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Vars_14));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Constraints_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FunDeps_16));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Interface_24));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarSet_18));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SeqNum_20));
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
    MR_Word Decl0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Decls0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Decl_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrDecls_33;

    parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(HeadVar__1_1, HeadVar__2_2, Decl0_19, &Decl_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Decl_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrDecls_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Decls0_20, AddrDecls_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
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
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Decl0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Decls0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Decl_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrDecls_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(HeadVar__1_1, HeadVar__2_2, Decl0_19, &Decl_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Decl_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrDecls_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Decls0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrDecls_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Decl0_11,
  MR_Word * Decl_12,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  if (((MR_tag((MR_Word) Decl0_11)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo0_38 = (MR_Word) (MR_body((MR_Word) (Decl0_11), (MR_Integer) 1));
    MR_Word Modes0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 2))));
    MR_Word Varset_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 5))));
    MR_Word Modes_41;
    MR_Word ModeInfo_42;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_Word Name_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 1))));
    MR_Word PredOrFunc_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 0))));
    MR_Word MaybeWithInst0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 3))));
    MR_Word MaybeDetism_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 4))));
    MR_Word Context_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 6))));
    MR_Word MaybeWithInst_71;

    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_39, &Modes_41, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_48_48);
    if ((MaybeWithInst0_66 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithInst_71 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_47_47;
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_48_48;
    }
    else
    {
      MR_Word WithInst0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_66, (MR_Integer) 0))));
      MR_Word WithInst_61;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, WithInst0_60, &WithInst_61, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_44, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_46);
      {
        MaybeWithInst_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithInst_71, 0) = ((MR_Box) (WithInst_61));
      }
    }
    {
      ModeInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeInfo_42, 0) = ((MR_Box) (PredOrFunc_65));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 1) = ((MR_Box) (Name_64));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 2) = ((MR_Box) (Modes_41));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 3) = ((MR_Box) (MaybeWithInst_71));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 4) = ((MR_Box) (MaybeDetism_67));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 5) = ((MR_Box) (Varset_40));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 6) = ((MR_Box) (Context_68));
    }
    *Decl_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ModeInfo_42)));
  }
  else
  {
    MR_Word PredOrFuncInfo0_15 = (MR_Word) ((MR_Word) (Decl0_11));
    MR_Word Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 0))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 2))));
    MR_Word MaybeWithType0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 3))));
    MR_Word MaybeWithInst0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 4))));
    MR_Word MaybeDetism_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 5))));
    MR_Word TypeVarset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 6))));
    MR_Word InstVarset_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 7))));
    MR_Word ExistQVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 8))));
    MR_Word Purity_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word Constraints0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 10))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 11))));
    MR_Word TypesAndModes_28;
    MR_Word ConstraintErrorContext_29;
    MR_Word Constraints_30;
    MR_Word MaybeWithType_33;
    MR_Word MaybeWithInst_36;
    MR_Word PredOrFuncInfo_37;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_String Var_53;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word STATE_VARIABLE_Specs_55_55;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word UnivCs0_82;
    MR_Word ExistCs0_83;
    MR_Word UnivCs_84;
    MR_Word ExistCs_85;
    MR_Word STATE_VARIABLE_Info_23_86;
    MR_Word STATE_VARIABLE_Specs_24_87;

    parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_9, ErrorContext_10, TypesAndModes0_18, &TypesAndModes_28, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_52_52);
    Var_53 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_16);
    {
      ConstraintErrorContext_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_29, 0) = ((MR_Box) (Context_27));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_29, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_29, 2) = ((MR_Box) (Var_53));
    }
    UnivCs0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_26, (MR_Integer) 0))));
    ExistCs0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_26, (MR_Integer) 1))));
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_29, UnivCs0_82, &UnivCs_84, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_23_86, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_24_87);
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_29, ExistCs0_83, &ExistCs_85, STATE_VARIABLE_Info_23_86, &STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Specs_24_87, &STATE_VARIABLE_Specs_55_55);
    {
      Constraints_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraints_30, 0) = ((MR_Box) (UnivCs_84));
      MR_hl_field(MR_mktag(0), Constraints_30, 1) = ((MR_Box) (ExistCs_85));
    }
    if ((MaybeWithType0_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithType_33 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_54_54;
      STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_55_55;
    }
    else
    {
      MR_Word WithType0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_19, (MR_Integer) 0))));
      MR_Word WithType_32;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_9, ErrorContext_10, WithType0_31, &WithType_32, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_57_57);
      {
        MaybeWithType_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithType_33, 0) = ((MR_Box) (WithType_32));
      }
    }
    if ((MaybeWithInst0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithInst_36 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_56_56;
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_57_57;
    }
    else
    {
      MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_20, (MR_Integer) 0))));
      MR_Word WithInst_35;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, WithInst0_34, &WithInst_35, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_44, STATE_VARIABLE_Specs_57_57, STATE_VARIABLE_Specs_46);
      {
        MaybeWithInst_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithInst_36, 0) = ((MR_Box) (WithInst_35));
      }
    }
    {
      PredOrFuncInfo_37 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 0) = ((MR_Box) (Name_16));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 2) = ((MR_Box) (TypesAndModes_28));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 3) = ((MR_Box) (MaybeWithType_33));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 4) = ((MR_Box) (MaybeWithInst_36));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 5) = ((MR_Box) (MaybeDetism_21));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 6) = ((MR_Box) (TypeVarset_22));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 7) = ((MR_Box) (InstVarset_23));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 8) = ((MR_Box) (ExistQVars_24));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 9) = (MR_Box) ((MR_Unsigned) (Purity_25));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 10) = ((MR_Box) (Constraints_30));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 11) = ((MR_Box) (Context_27));
    }
    *Decl_12 = (MR_Word) ((MR_Word) (PredOrFuncInfo_37));
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
    MR_Word TypeAndMode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypeAndMode_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrTypesAndModes_55;

    if (((MR_tag((MR_Word) TypeAndMode0_19)) == (MR_Integer) 1))
    {
      MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 1))));
      MR_Word Mode_46;
      MR_Word STATE_VARIABLE_Info_23_47;
      MR_Word STATE_VARIABLE_Specs_24_48;
      MR_Word Type0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Type_54;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_53, &Type_54, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_47, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_24_48);
      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_46, STATE_VARIABLE_Info_23_47, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_24_48, &STATE_VARIABLE_Specs_30_30);
      {
        TypeAndMode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeAndMode_21, 0) = ((MR_Box) (Type_54));
        MR_hl_field(MR_mktag(1), TypeAndMode_21, 1) = ((MR_Box) (Mode_46));
      }
    }
    else
    {
      MR_Word Type0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Type_44;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_43, &Type_44, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeAndMode_21, 0) = ((MR_Box) (Type_44));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAndMode_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTypesAndModes_55 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_20, AddrTypesAndModes_55, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_56,
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
      *AddrOfHeadVar__4_56 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word TypeAndMode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeAndMode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrTypesAndModes_55;
      MR_Word HeadVar__4_57;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_56;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) TypeAndMode0_19)) == (MR_Integer) 1))
      {
        MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 1))));
        MR_Word Mode_46;
        MR_Word STATE_VARIABLE_Info_23_47;
        MR_Word STATE_VARIABLE_Specs_24_48;
        MR_Word Type0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 0))));
        MR_Word Type_54;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_53, &Type_54, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_47, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_24_48);
        parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_46, STATE_VARIABLE_Info_23_47, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_24_48, &STATE_VARIABLE_Specs_30_30);
        {
          TypeAndMode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeAndMode_21, 0) = ((MR_Box) (Type_54));
          MR_hl_field(MR_mktag(1), TypeAndMode_21, 1) = ((MR_Box) (Mode_46));
        }
      }
      else
      {
        MR_Word Type0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAndMode0_19, (MR_Integer) 0))));
        MR_Word Type_44;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_43, &Type_44, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
        {
          TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeAndMode_21, 0) = ((MR_Box) (Type_44));
        }
      }
      {
        HeadVar__4_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_57, 0) = ((MR_Box) (TypeAndMode_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_57, 1) = NULL;
      }
      AddrTypesAndModes_55 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_57, (MR_Integer) 1)));
      *AddrOfHeadVar__4_56 = HeadVar__4_57;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TypesAndModes0_20;
      next_value_of_AddrOfHeadVar__4_56 = AddrTypesAndModes_55;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_56 = next_value_of_AddrOfHeadVar__4_56;
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
  MR_Word StdModeDefn0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_7, (MR_Integer) 0))));
  MR_Word SrcDefns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_7, (MR_Integer) 1))));
  MR_Word Status_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdModeDefn0_11, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdModeDefn0_11, (MR_Integer) 1))));
  MR_Word MaybeAbstractDefn_15;
  MR_Word StdModeDefn_17;
  MR_Word MaybeIntDefn0_18;
  MR_Word MaybeImpDefn0_19;
  MR_Word MaybeIntDefn_21;
  MR_Word MaybeImpDefn_22;
  MR_Word SrcDefns_23;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;
  MR_Word SymName_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn0_14, (MR_Integer) 0))));
  MR_Word Params_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn0_14, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn0_14, (MR_Integer) 2))));
  MR_Word InstVarSet_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn0_14, (MR_Integer) 3))));
  MR_Word Context_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn0_14, (MR_Integer) 4))));
  MR_Word SeqNum_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn0_14, (MR_Integer) 5))));
  MR_Integer Arity_83;
  MR_Word ModeCtor_84;
  MR_Word MaybeAbstractModeDefn_85;
  MR_Word Var_16;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_78, &Arity_83);
  {
    ModeCtor_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ModeCtor_84, 0) = ((MR_Box) (SymName_77));
    MR_hl_field(MR_mktag(0), ModeCtor_84, 1) = ((MR_Box) (Arity_83));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_defn_9_p_0((MR_Integer) 0, Context_81, ModeCtor_84, MaybeAbstractModeDefn0_79, &MaybeAbstractModeDefn_85, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_26, &Var_16);
  {
    MaybeAbstractDefn_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MaybeAbstractDefn_15, 0) = ((MR_Box) (SymName_77));
    MR_hl_field(MR_mktag(0), MaybeAbstractDefn_15, 1) = ((MR_Box) (Params_78));
    MR_hl_field(MR_mktag(0), MaybeAbstractDefn_15, 2) = ((MR_Box) (MaybeAbstractModeDefn_85));
    MR_hl_field(MR_mktag(0), MaybeAbstractDefn_15, 3) = ((MR_Box) (InstVarSet_80));
    MR_hl_field(MR_mktag(0), MaybeAbstractDefn_15, 4) = ((MR_Box) (Context_81));
    MR_hl_field(MR_mktag(0), MaybeAbstractDefn_15, 5) = ((MR_Box) (SeqNum_82));
  }
  {
    StdModeDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), StdModeDefn_17, 0) = (MR_Box) ((MR_Unsigned) (Status_13));
    MR_hl_field(MR_mktag(0), StdModeDefn_17, 1) = ((MR_Box) (MaybeAbstractDefn_15));
  }
  MaybeIntDefn0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_12, (MR_Integer) 0))));
  MaybeImpDefn0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_12, (MR_Integer) 1))));
  parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho2_8_p_0((MR_Integer) 1, MaybeIntDefn0_18, &MaybeIntDefn_21, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_34_34);
  parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho2_8_p_0((MR_Integer) 0, MaybeImpDefn0_19, &MaybeImpDefn_22, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_27);
  {
    SrcDefns_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SrcDefns_23, 0) = ((MR_Box) (MaybeIntDefn_21));
    MR_hl_field(MR_mktag(0), SrcDefns_23, 1) = ((MR_Box) (MaybeImpDefn_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CheckedDefn_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (StdModeDefn_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefns_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho2_8_p_0(
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
    MR_Word Defn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn0_11, (MR_Integer) 0))));
    MR_Word Defn_16;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__350__1__ho12_8_p_0(InInt_10, Defn0_15, &Defn_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Defn_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__350__1__ho12_8_p_0(
  MR_Word HeadVar__2_48,
  MR_Word HeadVar__3_49,
  MR_Word * HeadVar__4_50,
  MR_Word HeadVar__5_51,
  MR_Word * HeadVar__6_52,
  MR_Word HeadVar__7_53,
  MR_Word * HeadVar__8_54)
{
  MR_Word SymName_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_49, (MR_Integer) 0))));
  MR_Word Params_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_49, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_49, (MR_Integer) 2))));
  MR_Word InstVarSet_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_49, (MR_Integer) 3))));
  MR_Word Context_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_49, (MR_Integer) 4))));
  MR_Word SeqNum_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_49, (MR_Integer) 5))));
  MR_Integer Arity_83;
  MR_Word ModeCtor_84;
  MR_Word MaybeAbstractModeDefn_85;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_78, &Arity_83);
  {
    ModeCtor_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ModeCtor_84, 0) = ((MR_Box) (SymName_77));
    MR_hl_field(MR_mktag(0), ModeCtor_84, 1) = ((MR_Box) (Arity_83));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_defn_9_p_0(HeadVar__2_48, Context_81, ModeCtor_84, MaybeAbstractModeDefn0_79, &MaybeAbstractModeDefn_85, HeadVar__5_51, HeadVar__6_52, HeadVar__7_53, HeadVar__8_54);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_50 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_77));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_78));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeAbstractModeDefn_85));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InstVarSet_80));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_81));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_82));
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
    MR_Word ModeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn0_13, (MR_Integer) 0))));
    MR_Word ErrorContext_18;
    MR_Word Mode0_19;
    MR_Word Mode_20;
    MR_Word ModeDefn_21;

    {
      ErrorContext_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ErrorContext_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(2), ErrorContext_18, 1) = ((MR_Box) (ModeCtor_12));
    }
    Mode0_19 = (MR_Word) (ModeDefn0_17);
    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_10, ErrorContext_18, Mode0_19, &Mode_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    ModeDefn_21 = (MR_Word) (Mode_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractModeDefn_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModeDefn_21));
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
  MR_Word StdInstDefn0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_7, (MR_Integer) 0))));
  MR_Word SrcDefns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_7, (MR_Integer) 1))));
  MR_Word Status_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdInstDefn0_11, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdInstDefn0_11, (MR_Integer) 1))));
  MR_Word MaybeAbstractDefn_15;
  MR_Word StdInstDefn_17;
  MR_Word MaybeIntDefn0_18;
  MR_Word MaybeImpDefn0_19;
  MR_Word MaybeIntDefn_21;
  MR_Word MaybeImpDefn_22;
  MR_Word SrcDefns_23;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;
  MR_Word Var_16;

  parse_tree__module_qual__qualify_items__module_qualify_item_inst_defn__ho3_8_p_0((MR_Integer) 0, MaybeAbstractDefn0_14, &MaybeAbstractDefn_15, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_26, &Var_16);
  {
    StdInstDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), StdInstDefn_17, 0) = (MR_Box) ((MR_Unsigned) (Status_13));
    MR_hl_field(MR_mktag(0), StdInstDefn_17, 1) = ((MR_Box) (MaybeAbstractDefn_15));
  }
  MaybeIntDefn0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_12, (MR_Integer) 0))));
  MaybeImpDefn0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_12, (MR_Integer) 1))));
  parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho4_8_p_0((MR_Integer) 1, MaybeIntDefn0_18, &MaybeIntDefn_21, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_34_34);
  parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho4_8_p_0((MR_Integer) 0, MaybeImpDefn0_19, &MaybeImpDefn_22, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_27);
  {
    SrcDefns_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SrcDefns_23, 0) = ((MR_Box) (MaybeIntDefn_21));
    MR_hl_field(MR_mktag(0), SrcDefns_23, 1) = ((MR_Box) (MaybeImpDefn_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CheckedDefn_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (StdInstDefn_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefns_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho4_8_p_0(
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
    MR_Word Defn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn0_11, (MR_Integer) 0))));
    MR_Word Defn_16;

    parse_tree__module_qual__qualify_items__module_qualify_item_inst_defn__ho3_8_p_0(InInt_10, Defn0_15, &Defn_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Defn_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_inst_defn__ho3_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemInstDefn0_11,
  MR_Word * ItemInstDefn_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 1))));
  MR_Word MaybeForTypeCtor0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 2))));
  MR_Word MaybeAbstractInstDefn0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 3))));
  MR_Word InstVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 4))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 5))));
  MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_11, (MR_Integer) 6))));
  MR_Integer Arity_22;
  MR_Word InstCtor_23;
  MR_Word ErrorContext_24;
  MR_Word MaybeAbstractInstDefn_25;
  MR_Word MaybeForTypeCtor_28;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Specs_34_34;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[6]), Params_16, &Arity_22);
  {
    InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), InstCtor_23, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), InstCtor_23, 1) = ((MR_Box) (Arity_22));
  }
  {
    ErrorContext_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ErrorContext_24, 0) = ((MR_Box) (Context_20));
    MR_hl_field(MR_mktag(1), ErrorContext_24, 1) = ((MR_Box) (InstCtor_23));
  }
  parse_tree__module_qual__qualify_items__qualify_inst_defn_9_p_0(InInt_10, Context_20, InstCtor_23, MaybeAbstractInstDefn0_18, &MaybeAbstractInstDefn_25, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_34_34);
  if ((MaybeForTypeCtor0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeForTypeCtor_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_33_33;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_34_34;
  }
  else
  {
    MR_Word ForTypeCtor0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor0_17, (MR_Integer) 0))));
    MR_Word ForTypeCtor_27;
    MR_Word SymName0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor0_26, (MR_Integer) 0))));
    MR_Integer Arity_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor0_26, (MR_Integer) 1))));
    MR_Word SymName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor0_26, (MR_Integer) 0))));
    MR_Integer Var_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor0_26, (MR_Integer) 1))));

    succeeded = (Var_59 == (MR_Integer) 0);
    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_58);
    if (succeeded)
    {
      ForTypeCtor_27 = ForTypeCtor0_26;
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_34_34;
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_33_33;
    }
    else
    {
      MR_Word TypeCtorId0_51;
      MR_Word Types_52;
      MR_Word SymName_53;

      {
        TypeCtorId0_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtorId0_51, 0) = ((MR_Box) (SymName0_49));
        MR_hl_field(MR_mktag(0), TypeCtorId0_51, 1) = ((MR_Box) (Arity_50));
      }
      parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_33_33, &Types_52);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_10, ErrorContext_24, Types_52, (MR_Integer) 0, TypeCtorId0_51, &SymName_53, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_32);
      {
        ForTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForTypeCtor_27, 0) = ((MR_Box) (SymName_53));
        MR_hl_field(MR_mktag(0), ForTypeCtor_27, 1) = ((MR_Box) (Arity_50));
      }
    }
    {
      MaybeForTypeCtor_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeForTypeCtor_28, 0) = ((MR_Box) (ForTypeCtor_27));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *ItemInstDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeForTypeCtor_28));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeAbstractInstDefn_25));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InstVarSet_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_20));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SeqNum_21));
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
    MR_Word InstDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn0_13, (MR_Integer) 0))));
    MR_Word ErrorContext_18;
    MR_Word Inst0_19;
    MR_Word Inst_20;
    MR_Word InstDefn_21;

    {
      ErrorContext_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ErrorContext_18, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), ErrorContext_18, 1) = ((MR_Box) (InstCtor_12));
    }
    Inst0_19 = (MR_Word) (InstDefn0_17);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_18, Inst0_19, &Inst_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    InstDefn_21 = (MR_Word) (Inst_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractInstDefn_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstDefn_21));
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

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv18_ItemForeignEnum_10, ((MR_Word) (wrapper_arg_3)), &conv17_STATE_VARIABLE_Info_21, ((MR_Word) (wrapper_arg_5)), &conv16_STATE_VARIABLE_Specs_23);
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
  MR_Word conv13_HeadVar__4_187;
  MR_Word conv12_HeadVar__6_189;
  MR_Word conv11_HeadVar__8_191;

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__302__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv13_HeadVar__4_187, ((MR_Word) (wrapper_arg_3)), &conv12_HeadVar__6_189, ((MR_Word) (wrapper_arg_5)), &conv11_HeadVar__8_191);
  *wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__4_187));
  *wrapper_arg_4 = ((MR_Box) (conv12_HeadVar__6_189));
  *wrapper_arg_6 = ((MR_Box) (conv11_HeadVar__8_191));
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
  MR_Word conv5_HeadVar__4_168;
  MR_Word conv4_HeadVar__6_170;
  MR_Word conv3_HeadVar__8_172;

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__298__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__4_168, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__6_170, ((MR_Word) (wrapper_arg_5)), &conv3_HeadVar__8_172);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__4_168));
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__6_170));
  *wrapper_arg_6 = ((MR_Box) (conv3_HeadVar__8_172));
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
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  if (((MR_tag((MR_Word) CheckedDefn0_7)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_7, (MR_Integer) 0))));
    MR_Word SrcDefns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_7, (MR_Integer) 1))));
    MR_Word SolverDefn_15;
    MR_Word MaybeIntDefn0_20;
    MR_Word MaybeImpDefn0_21;
    MR_Word MaybeIntDefn_23;
    MR_Word MaybeImpDefn_24;
    MR_Word SrcDefns_25;
    MR_Word STATE_VARIABLE_Info_85_85;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_Word STATE_VARIABLE_Specs_89_89;

    if (((MR_tag((MR_Word) SolverDefn0_11)) == (MR_Integer) 0))
    {
      SolverDefn_15 = SolverDefn0_11;
      STATE_VARIABLE_Info_85_85 = STATE_VARIABLE_Info_0_53;
    }
    else
    {
      MR_Word MaybeAbsDefn0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_11, (MR_Integer) 0))));
      MR_Word FullDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_11, (MR_Integer) 1))));
      MR_Word FullDefn_18;
      MR_Word Var_19;

      parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho8_8_p_0((MR_Integer) 0, FullDefn0_17, &FullDefn_18, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Specs_0_55, &Var_19);
      {
        SolverDefn_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SolverDefn_15, 0) = ((MR_Box) (MaybeAbsDefn0_16));
        MR_hl_field(MR_mktag(1), SolverDefn_15, 1) = ((MR_Box) (FullDefn_18));
      }
    }
    MaybeIntDefn0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_12, (MR_Integer) 0))));
    MaybeImpDefn0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_12, (MR_Integer) 1))));
    parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_8_p_0((MR_Integer) 1, MaybeIntDefn0_20, &MaybeIntDefn_23, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_88_88, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_89_89);
    parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_8_p_0((MR_Integer) 0, MaybeImpDefn0_21, &MaybeImpDefn_24, STATE_VARIABLE_Info_88_88, STATE_VARIABLE_Info_54, STATE_VARIABLE_Specs_89_89, STATE_VARIABLE_Specs_56);
    {
      SrcDefns_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcDefns_25, 0) = ((MR_Box) (MaybeIntDefn_23));
      MR_hl_field(MR_mktag(0), SrcDefns_25, 1) = ((MR_Box) (MaybeImpDefn_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CheckedDefn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SolverDefn_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefns_25));
    }
  }
  else
  {
    MR_Word StdDefn0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn0_7, (MR_Integer) 0))));
    MR_Word StdDefn_31;
    MR_Word IntDefns0_47;
    MR_Word ImpDefns0_48;
    MR_Word ImpForeignEnums0_49;
    MR_Word IntDefns_50;
    MR_Word ImpDefns_51;
    MR_Word ImpForeignEnums_52;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word STATE_VARIABLE_Info_70_70;
    MR_Word STATE_VARIABLE_Specs_71_71;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word SrcDefns0_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn0_7, (MR_Integer) 1))));
    MR_Word SrcDefns_98;
    MR_Box conv7_STATE_VARIABLE_Info_70_70;
    MR_Box conv6_STATE_VARIABLE_Specs_71_71;
    MR_Box conv15_STATE_VARIABLE_Info_75_75;
    MR_Box conv14_STATE_VARIABLE_Specs_76_76;
    MR_Box conv20_STATE_VARIABLE_Info_54;
    MR_Box conv19_STATE_VARIABLE_Specs_56;

    switch (MR_tag((MR_Word) StdDefn0_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_26, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word EqvDefn0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn0_26, (MR_Integer) 1))));
          MR_Word EqvDefn_29;
          MR_Word Var_30;

          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_8_p_0((MR_Integer) 0, EqvDefn0_28, &EqvDefn_29, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Specs_0_55, &Var_30);
          {
            StdDefn_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_31, 0) = (MR_Box) ((MR_Unsigned) (EqvStatus_27));
            MR_hl_field(MR_mktag(0), StdDefn_31, 1) = ((MR_Box) (EqvDefn_29));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStatus_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StdDefn0_26, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word SubDefn0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn0_26, (MR_Integer) 1))));
          MR_Word SubDefn_34;
          MR_Word Var_35;

          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_8_p_0((MR_Integer) 0, SubDefn0_33, &SubDefn_34, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Specs_0_55, &Var_35);
          {
            StdDefn_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StdDefn_31, 0) = (MR_Box) ((MR_Unsigned) (SubStatus_32));
            MR_hl_field(MR_mktag(1), StdDefn_31, 1) = ((MR_Box) (SubDefn_34));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuStatus_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdDefn0_26, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word DuDefn0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_26, (MR_Integer) 1))));
          MR_String HeadCtor_38 = ((MR_String) ((MR_hl_field(MR_mktag(2), StdDefn0_26, (MR_Integer) 2))));
          MR_Word TailCtors_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_26, (MR_Integer) 3))));
          MR_Word CJCsDefnOrEnum_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_26, (MR_Integer) 4))));
          MR_Word DuDefn_41;
          MR_Word Var_42;

          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_8_p_0((MR_Integer) 0, DuDefn0_37, &DuDefn_41, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Specs_0_55, &Var_42);
          {
            StdDefn_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), StdDefn_31, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_36));
            MR_hl_field(MR_mktag(2), StdDefn_31, 1) = ((MR_Box) (DuDefn_41));
            MR_hl_field(MR_mktag(2), StdDefn_31, 2) = ((MR_Box) (HeadCtor_38));
            MR_hl_field(MR_mktag(2), StdDefn_31, 3) = ((MR_Box) (TailCtors_39));
            MR_hl_field(MR_mktag(2), StdDefn_31, 4) = ((MR_Box) (CJCsDefnOrEnum_40));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdDefn0_26, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuStatus_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn0_26, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word DuDefn0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_26, (MR_Integer) 2))));
              MR_Word CJCsDefnOrEnum_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_26, (MR_Integer) 3))));
              MR_Word DuDefn_96;
              MR_Word Var_43;

              parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_8_p_0((MR_Integer) 0, DuDefn0_94, &DuDefn_96, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Specs_0_55, &Var_43);
              {
                StdDefn_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), StdDefn_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), StdDefn_31, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_93));
                MR_hl_field(MR_mktag(3), StdDefn_31, 2) = ((MR_Box) (DuDefn_96));
                MR_hl_field(MR_mktag(3), StdDefn_31, 3) = ((MR_Box) (CJCsDefnOrEnum_95));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              StdDefn_31 = StdDefn0_26;
              STATE_VARIABLE_Info_68_68 = STATE_VARIABLE_Info_0_53;
            }
            break;
        }
        break;
    }
    IntDefns0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_97, (MR_Integer) 0))));
    ImpDefns0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_97, (MR_Integer) 1))));
    ImpForeignEnums0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_97, (MR_Integer) 2))));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_11[0]), IntDefns0_47, &IntDefns_50, ((MR_Box) (STATE_VARIABLE_Info_68_68)), &conv7_STATE_VARIABLE_Info_70_70, ((MR_Box) (STATE_VARIABLE_Specs_0_55)), &conv6_STATE_VARIABLE_Specs_71_71);
    STATE_VARIABLE_Info_70_70 = ((MR_Word) (conv7_STATE_VARIABLE_Info_70_70));
    STATE_VARIABLE_Specs_71_71 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_71_71));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_11[1]), ImpDefns0_48, &ImpDefns_51, ((MR_Box) (STATE_VARIABLE_Info_70_70)), &conv15_STATE_VARIABLE_Info_75_75, ((MR_Box) (STATE_VARIABLE_Specs_71_71)), &conv14_STATE_VARIABLE_Specs_76_76);
    STATE_VARIABLE_Info_75_75 = ((MR_Word) (conv15_STATE_VARIABLE_Info_75_75));
    STATE_VARIABLE_Specs_76_76 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_76_76));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[15]), ImpForeignEnums0_49, &ImpForeignEnums_52, ((MR_Box) (STATE_VARIABLE_Info_75_75)), &conv20_STATE_VARIABLE_Info_54, ((MR_Box) (STATE_VARIABLE_Specs_76_76)), &conv19_STATE_VARIABLE_Specs_56);
    *STATE_VARIABLE_Info_54 = ((MR_Word) (conv20_STATE_VARIABLE_Info_54));
    *STATE_VARIABLE_Specs_56 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_56));
    {
      SrcDefns_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcDefns_98, 0) = ((MR_Box) (IntDefns_50));
      MR_hl_field(MR_mktag(0), SrcDefns_98, 1) = ((MR_Box) (ImpDefns_51));
      MR_hl_field(MR_mktag(0), SrcDefns_98, 2) = ((MR_Box) (ImpForeignEnums_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CheckedDefn_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdDefn_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcDefns_98));
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
    MR_Word Defn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn0_11, (MR_Integer) 0))));
    MR_Word Defn_16;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__250__1__ho10_8_p_0(InInt_10, Defn0_15, &Defn_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Defn_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__250__1__ho10_8_p_0(
  MR_Word HeadVar__2_109,
  MR_Word HeadVar__3_110,
  MR_Word * HeadVar__4_111,
  MR_Word HeadVar__5_112,
  MR_Word * HeadVar__6_113,
  MR_Word HeadVar__7_114,
  MR_Word * HeadVar__8_115)
{
  parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho13_8_p_0(HeadVar__2_109, HeadVar__3_110, HeadVar__4_111, HeadVar__5_112, HeadVar__6_113, HeadVar__7_114, HeadVar__8_115);
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho13_8_p_0(
  MR_Word InInt_10,
  MR_Word ItemTypeDefn0_11,
  MR_Word * ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(InInt_10, Context_19, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
        *TypeDefn_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSub_24)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_17 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_13), (MR_Integer) 2));
        MR_Word DetailsSolver_18;

        parse_tree__module_qual__qualify_items__qualify_type_defn_solver_9_p_0(InInt_10, Context_11, TypeCtor_12, DetailsSolver0_17, &DetailsSolver_18, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        *TypeDefn_14 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (DetailsSolver_18)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_13, (MR_Integer) 1))));
            MR_Word DetailsEqv_20;
            MR_Word Type0_50 = (MR_Word) (DetailsEqv0_19);
            MR_Word ErrorContext_51;
            MR_Word Type_52;

            {
              ErrorContext_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ErrorContext_51, 0) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(0), ErrorContext_51, 1) = ((MR_Box) (TypeCtor_12));
            }
            parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_51, Type0_50, &Type_52, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            DetailsEqv_20 = (MR_Word) (Type_52);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsEqv_20));
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
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_solver_9_p_0(InInt_10, Context_19, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
  MR_Word SolverTypeDetails0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_13, (MR_Integer) 0))));
  MR_Word MaybeUserEqComp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_13, (MR_Integer) 1))));
  MR_Word RepnType0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_17, (MR_Integer) 0))));
  MR_Word GroundInst0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_17, (MR_Integer) 1))));
  MR_Word AnyInst0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_17, (MR_Integer) 2))));
  MR_Word Mutables0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_17, (MR_Integer) 3))));
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
    MR_hl_field(MR_mktag(0), ErrorContext_23, 0) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), ErrorContext_23, 1) = ((MR_Box) (TypeCtor_12));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_23, RepnType0_19, &RepnType_24, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_34_34);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_23, GroundInst0_20, &GroundInst_25, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_34_34, &STATE_VARIABLE_Specs_36_36);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_23, AnyInst0_21, &AnyInst_26, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_38_38);
  parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(InInt_10, Mutables0_22, &Mutables_27, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_32);
  {
    SolverTypeDetails_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SolverTypeDetails_28, 0) = ((MR_Box) (RepnType_24));
    MR_hl_field(MR_mktag(0), SolverTypeDetails_28, 1) = ((MR_Box) (GroundInst_25));
    MR_hl_field(MR_mktag(0), SolverTypeDetails_28, 2) = ((MR_Box) (AnyInst_26));
    MR_hl_field(MR_mktag(0), SolverTypeDetails_28, 3) = ((MR_Box) (Mutables_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSolver_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SolverTypeDetails_28));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeUserEqComp_18));
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
    MR_Word Mutable0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mutables0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mutable_18;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_Word * AddrMutables_30;

    parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(HeadVar__1_1, Mutable0_16, &Mutable_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_27_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mutable_18));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrMutables_30 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_7_p_0(HeadVar__1_1, Mutables0_17, AddrMutables_30, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_5, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_7);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_31,
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
      *AddrOfHeadVar__3_31 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word Mutable0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Mutables0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mutable_18;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Specs_27_27;
      MR_Word * AddrMutables_30;
      MR_Word HeadVar__3_32;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_31;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(HeadVar__1_1, Mutable0_16, &Mutable_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_27_27);
      {
        HeadVar__3_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_32, 0) = ((MR_Box) (Mutable_18));
        MR_hl_field(MR_mktag(1), HeadVar__3_32, 1) = NULL;
      }
      AddrMutables_30 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_32, (MR_Integer) 1)));
      *AddrOfHeadVar__3_31 = HeadVar__3_32;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Mutables0_17;
      next_value_of_AddrOfHeadVar__3_31 = AddrMutables_30;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_31 = next_value_of_AddrOfHeadVar__3_31;
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
  MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 0))));
  MR_Word OrigType0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 1))));
  MR_Word Type0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 2))));
  MR_Word OrigInst0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 3))));
  MR_Word Inst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 4))));
  MR_Word InitTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 5))));
  MR_Word Attrs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 6))));
  MR_Word Varset_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 7))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 8))));
  MR_Word SeqNum_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 9))));
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
    ErrorContext_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(MR_mktag(3), ErrorContext_23, 1) = ((MR_Box) (Context_21));
    MR_hl_field(MR_mktag(3), ErrorContext_23, 2) = ((MR_Box) (Name_13));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_23, OrigType0_14, &OrigType_24, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_34_34, (MR_Word) ((MR_Unsigned) 0U), &Var_25);
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_23, Type0_15, &Type_26, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_37_37);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_23, OrigInst0_16, &OrigInst_27, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38, (MR_Word) ((MR_Unsigned) 0U), &Var_28);
  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_23, Inst0_17, &Inst_29, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_31, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ItemMutable_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigType_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_26));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigInst_27));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Inst_29));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InitTerm_18));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Attrs_19));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Varset_20));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Context_21));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (SeqNum_22));
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
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;
  MR_Word Type0_43;
  MR_Word ErrorContext_44;
  MR_Word Type_45;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  Type0_43 = (MR_Word) (TypeDefn0_17);
  {
    ErrorContext_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ErrorContext_44, 0) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), ErrorContext_44, 1) = ((MR_Box) (TypeCtor_22));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_44, Type0_43, &Type_45, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  TypeDefn_23 = (MR_Word) (Type_45);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_sub_9_p_0(InInt_10, Context_19, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
  MR_Word SuperType0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub0_13, (MR_Integer) 0))));
  MR_Word OoMCtors0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub0_13, (MR_Integer) 1))));
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
  uint32_t Ordinal_46;
  MR_Word MaybeExistConstraints0_47;
  MR_Word FunctionSymbolSymName_48;
  MR_Word Args0_49;
  MR_Integer Arity_50;
  MR_Word Context_51;
  MR_String FunctionSymbolName_52;
  MR_Word MaybeExistConstraints_53;
  MR_Word Args_62;
  MR_Word STATE_VARIABLE_Info_36_63;
  MR_Word STATE_VARIABLE_Specs_37_64;

  {
    ErrorContext_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ErrorContext_19, 0) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), ErrorContext_19, 1) = ((MR_Box) (TypeCtor_12));
  }
  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_19, SuperType0_17, &SuperType_20, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_31);
  HeadCtor0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_18, (MR_Integer) 0))));
  TailCtors0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_18, (MR_Integer) 1))));
  Ordinal_46 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadCtor0_21, (MR_Integer) 0)));
  MaybeExistConstraints0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_21, (MR_Integer) 1))));
  FunctionSymbolSymName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_21, (MR_Integer) 2))));
  Args0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_21, (MR_Integer) 3))));
  Arity_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor0_21, (MR_Integer) 4))));
  Context_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_21, (MR_Integer) 5))));
  FunctionSymbolName_52 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_48);
  if ((MaybeExistConstraints0_47 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_53 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_36_63 = STATE_VARIABLE_Info_30_30;
    STATE_VARIABLE_Specs_37_64 = STATE_VARIABLE_Specs_31_31;
  }
  else
  {
    MR_Word ExistConstraints0_54 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_47), (MR_Integer) 1));
    MR_Word ExistQVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_54, (MR_Integer) 0))));
    MR_Word Constraints0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_54, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_54, (MR_Integer) 2))));
    MR_Word ConstrainedExistQVars_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_54, (MR_Integer) 3))));
    MR_Word ConstraintErrorContext_59;
    MR_Word Constraints_60;
    MR_Word ExistConstraints_61;

    {
      ConstraintErrorContext_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_59, 1) = ((MR_Box) (Context_51));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_59, 2) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_59, 3) = ((MR_Box) (FunctionSymbolName_52));
    }
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_10, ConstraintErrorContext_59, Constraints0_56, &Constraints_60, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_36_63, STATE_VARIABLE_Specs_31_31, &STATE_VARIABLE_Specs_37_64);
    {
      ExistConstraints_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExistConstraints_61, 0) = ((MR_Box) (ExistQVars_55));
      MR_hl_field(MR_mktag(0), ExistConstraints_61, 1) = ((MR_Box) (Constraints_60));
      MR_hl_field(MR_mktag(0), ExistConstraints_61, 2) = ((MR_Box) (UnconstrainedExistQVars_57));
      MR_hl_field(MR_mktag(0), ExistConstraints_61, 3) = ((MR_Box) (ConstrainedExistQVars_58));
    }
    MaybeExistConstraints_53 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_61)));
  }
  parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(InInt_10, TypeCtor_12, FunctionSymbolName_52, (MR_Integer) 0, Args0_49, &Args_62, STATE_VARIABLE_Info_36_63, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_37_64, &STATE_VARIABLE_Specs_33_33);
  {
    HeadCtor_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadCtor_23, 0) = ((MR_Box) (MR_Word) (Ordinal_46));
    MR_hl_field(MR_mktag(0), HeadCtor_23, 1) = ((MR_Box) (MaybeExistConstraints_53));
    MR_hl_field(MR_mktag(0), HeadCtor_23, 2) = ((MR_Box) (FunctionSymbolSymName_48));
    MR_hl_field(MR_mktag(0), HeadCtor_23, 3) = ((MR_Box) (Args_62));
    MR_hl_field(MR_mktag(0), HeadCtor_23, 4) = ((MR_Box) (Arity_50));
    MR_hl_field(MR_mktag(0), HeadCtor_23, 5) = ((MR_Box) (Context_51));
  }
  parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(InInt_10, TypeCtor_12, TailCtors0_22, &TailCtors_24, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_29);
  {
    OoMCtors_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), OoMCtors_25, 0) = ((MR_Box) (HeadCtor_23));
    MR_hl_field(MR_mktag(0), OoMCtors_25, 1) = ((MR_Box) (TailCtors_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSub_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SuperType_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OoMCtors_25));
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
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 0))));
  MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 1))));
  MR_Word TypeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 2))));
  MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 4))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_11, (MR_Integer) 5))));
  MR_Integer Arity_21;
  MR_Word TypeCtor_22;
  MR_Word TypeDefn_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), Params_16, &Arity_21);
  {
    TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_22, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), TypeCtor_22, 1) = ((MR_Box) (Arity_21));
  }
  parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_9_p_0(InInt_10, TypeCtor_22, TypeDefn0_17, &TypeDefn_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Params_16));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_18));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_19));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_20));
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
  MR_Word OoMCtors0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_13, (MR_Integer) 0))));
  MR_Word HeadCtor0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_17, (MR_Integer) 0))));
  MR_Word TailCtors0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_17, (MR_Integer) 1))));
  MR_Word HeadCtor_22;
  MR_Word TailCtors_23;
  MR_Word OoMCtors_24;
  MR_Word MaybeUserEqComp_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_13, (MR_Integer) 1))));
  MR_Word MaybeDirectArgCtors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_13, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_Specs_32_32;
  uint32_t Ordinal_45 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadCtor0_20, (MR_Integer) 0)));
  MR_Word MaybeExistConstraints0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_20, (MR_Integer) 1))));
  MR_Word FunctionSymbolSymName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_20, (MR_Integer) 2))));
  MR_Word Args0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_20, (MR_Integer) 3))));
  MR_Integer Arity_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor0_20, (MR_Integer) 4))));
  MR_Word Context_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_20, (MR_Integer) 5))));
  MR_String FunctionSymbolName_51;
  MR_Word MaybeExistConstraints_52;
  MR_Word Args_61;
  MR_Word STATE_VARIABLE_Info_36_62;
  MR_Word STATE_VARIABLE_Specs_37_63;

  FunctionSymbolName_51 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_47);
  if ((MaybeExistConstraints0_46 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_52 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_36_62 = STATE_VARIABLE_Info_0_27;
    STATE_VARIABLE_Specs_37_63 = STATE_VARIABLE_Specs_0_29;
  }
  else
  {
    MR_Word ExistConstraints0_53 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_46), (MR_Integer) 1));
    MR_Word ExistQVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_53, (MR_Integer) 0))));
    MR_Word Constraints0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_53, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_53, (MR_Integer) 2))));
    MR_Word ConstrainedExistQVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_53, (MR_Integer) 3))));
    MR_Word ConstraintErrorContext_58;
    MR_Word Constraints_59;
    MR_Word ExistConstraints_60;

    {
      ConstraintErrorContext_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_58, 1) = ((MR_Box) (Context_50));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_58, 2) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(MR_mktag(3), ConstraintErrorContext_58, 3) = ((MR_Box) (FunctionSymbolName_51));
    }
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_10, ConstraintErrorContext_58, Constraints0_55, &Constraints_59, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_36_62, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_37_63);
    {
      ExistConstraints_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExistConstraints_60, 0) = ((MR_Box) (ExistQVars_54));
      MR_hl_field(MR_mktag(0), ExistConstraints_60, 1) = ((MR_Box) (Constraints_59));
      MR_hl_field(MR_mktag(0), ExistConstraints_60, 2) = ((MR_Box) (UnconstrainedExistQVars_56));
      MR_hl_field(MR_mktag(0), ExistConstraints_60, 3) = ((MR_Box) (ConstrainedExistQVars_57));
    }
    MaybeExistConstraints_52 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_60)));
  }
  parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(InInt_10, TypeCtor_12, FunctionSymbolName_51, (MR_Integer) 0, Args0_48, &Args_61, STATE_VARIABLE_Info_36_62, &STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Specs_37_63, &STATE_VARIABLE_Specs_32_32);
  {
    HeadCtor_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadCtor_22, 0) = ((MR_Box) (MR_Word) (Ordinal_45));
    MR_hl_field(MR_mktag(0), HeadCtor_22, 1) = ((MR_Box) (MaybeExistConstraints_52));
    MR_hl_field(MR_mktag(0), HeadCtor_22, 2) = ((MR_Box) (FunctionSymbolSymName_47));
    MR_hl_field(MR_mktag(0), HeadCtor_22, 3) = ((MR_Box) (Args_61));
    MR_hl_field(MR_mktag(0), HeadCtor_22, 4) = ((MR_Box) (Arity_49));
    MR_hl_field(MR_mktag(0), HeadCtor_22, 5) = ((MR_Box) (Context_50));
  }
  parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(InInt_10, TypeCtor_12, TailCtors0_21, &TailCtors_23, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Specs_30);
  {
    OoMCtors_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), OoMCtors_24, 0) = ((MR_Box) (HeadCtor_22));
    MR_hl_field(MR_mktag(0), OoMCtors_24, 1) = ((MR_Box) (TailCtors_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DetailsDu_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OoMCtors_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeUserEqComp_25));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDirectArgCtors_26));
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
    MR_Word Ctor0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Ctor_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    uint32_t Ordinal_43 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 1))));
    MR_Word FunctionSymbolSymName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 2))));
    MR_Word Args0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 3))));
    MR_Integer Arity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 4))));
    MR_Word Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 5))));
    MR_String FunctionSymbolName_49;
    MR_Word MaybeExistConstraints_50;
    MR_Word Args_59;
    MR_Word STATE_VARIABLE_Info_36_60;
    MR_Word STATE_VARIABLE_Specs_37_61;
    MR_Word * AddrCtors_65;

    FunctionSymbolName_49 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_45);
    if ((MaybeExistConstraints0_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeExistConstraints_50 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_36_60 = STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_37_61 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word ExistConstraints0_51 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_44), (MR_Integer) 1));
      MR_Word ExistQVars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 0))));
      MR_Word Constraints0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 2))));
      MR_Word ConstrainedExistQVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 3))));
      MR_Word ConstraintErrorContext_56;
      MR_Word Constraints_57;
      MR_Word ExistConstraints_58;

      {
        ConstraintErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 1) = ((MR_Box) (Context_48));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 2) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 3) = ((MR_Box) (FunctionSymbolName_49));
      }
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_56, Constraints0_53, &Constraints_57, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_60, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_61);
      {
        ExistConstraints_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 0) = ((MR_Box) (ExistQVars_52));
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 1) = ((MR_Box) (Constraints_57));
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 2) = ((MR_Box) (UnconstrainedExistQVars_54));
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 3) = ((MR_Box) (ConstrainedExistQVars_55));
      }
      MaybeExistConstraints_50 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_58)));
    }
    parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_49, (MR_Integer) 0, Args0_46, &Args_59, STATE_VARIABLE_Info_36_60, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_37_61, &STATE_VARIABLE_Specs_30_30);
    {
      Ctor_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (MR_Word) (Ordinal_43));
      MR_hl_field(MR_mktag(0), Ctor_21, 1) = ((MR_Box) (MaybeExistConstraints_50));
      MR_hl_field(MR_mktag(0), Ctor_21, 2) = ((MR_Box) (FunctionSymbolSymName_45));
      MR_hl_field(MR_mktag(0), Ctor_21, 3) = ((MR_Box) (Args_59));
      MR_hl_field(MR_mktag(0), Ctor_21, 4) = ((MR_Box) (Arity_47));
      MR_hl_field(MR_mktag(0), Ctor_21, 5) = ((MR_Box) (Context_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrCtors_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Ctors0_20, AddrCtors_65, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_66,
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
      *AddrOfHeadVar__4_66 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Ctor0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Ctor_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      uint32_t Ordinal_43 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 1))));
      MR_Word FunctionSymbolSymName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 2))));
      MR_Word Args0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 3))));
      MR_Integer Arity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 4))));
      MR_Word Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 5))));
      MR_String FunctionSymbolName_49;
      MR_Word MaybeExistConstraints_50;
      MR_Word Args_59;
      MR_Word STATE_VARIABLE_Info_36_60;
      MR_Word STATE_VARIABLE_Specs_37_61;
      MR_Word * AddrCtors_65;
      MR_Word HeadVar__4_67;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_66;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      FunctionSymbolName_49 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_45);
      if ((MaybeExistConstraints0_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeExistConstraints_50 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_36_60 = STATE_VARIABLE_Info_0_5;
        STATE_VARIABLE_Specs_37_61 = STATE_VARIABLE_Specs_0_7;
      }
      else
      {
        MR_Word ExistConstraints0_51 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_44), (MR_Integer) 1));
        MR_Word ExistQVars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 0))));
        MR_Word Constraints0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 1))));
        MR_Word UnconstrainedExistQVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 2))));
        MR_Word ConstrainedExistQVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 3))));
        MR_Word ConstraintErrorContext_56;
        MR_Word Constraints_57;
        MR_Word ExistConstraints_58;

        {
          ConstraintErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 1) = ((MR_Box) (Context_48));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 3) = ((MR_Box) (FunctionSymbolName_49));
        }
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_56, Constraints0_53, &Constraints_57, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_60, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_61);
        {
          ExistConstraints_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 0) = ((MR_Box) (ExistQVars_52));
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 1) = ((MR_Box) (Constraints_57));
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 2) = ((MR_Box) (UnconstrainedExistQVars_54));
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 3) = ((MR_Box) (ConstrainedExistQVars_55));
        }
        MaybeExistConstraints_50 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_58)));
      }
      parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_49, (MR_Integer) 0, Args0_46, &Args_59, STATE_VARIABLE_Info_36_60, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_37_61, &STATE_VARIABLE_Specs_30_30);
      {
        Ctor_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (MR_Word) (Ordinal_43));
        MR_hl_field(MR_mktag(0), Ctor_21, 1) = ((MR_Box) (MaybeExistConstraints_50));
        MR_hl_field(MR_mktag(0), Ctor_21, 2) = ((MR_Box) (FunctionSymbolSymName_45));
        MR_hl_field(MR_mktag(0), Ctor_21, 3) = ((MR_Box) (Args_59));
        MR_hl_field(MR_mktag(0), Ctor_21, 4) = ((MR_Box) (Arity_47));
        MR_hl_field(MR_mktag(0), Ctor_21, 5) = ((MR_Box) (Context_48));
      }
      {
        HeadVar__4_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_67, 0) = ((MR_Box) (Ctor_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_67, 1) = NULL;
      }
      AddrCtors_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_67, (MR_Integer) 1)));
      *AddrOfHeadVar__4_66 = HeadVar__4_67;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Ctors0_20;
      next_value_of_AddrOfHeadVar__4_66 = AddrCtors_65;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_66 = next_value_of_AddrOfHeadVar__4_66;
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
    MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Constraint_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word ClassName0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 0))));
    MR_Word Types0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 1))));
    MR_Integer Arity_45;
    MR_Word OutsideContext_46;
    MR_Word ClassName_47;
    MR_Word ErrorContext_48;
    MR_Word Types_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Info_27_51;
    MR_Word STATE_VARIABLE_Specs_28_52;
    MR_Word ClassIdSet_66;
    MR_Word * AddrConstraints_70;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_44, &Arity_45);
    {
      OutsideContext_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OutsideContext_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), OutsideContext_46, 1) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (ClassName0_43));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Arity_45));
    }
    parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_66);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_46, ClassIdSet_66, (MR_Integer) 3, Var_50, &ClassName_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_51, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_28_52);
    {
      ErrorContext_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 1) = ((MR_Box) (ClassName0_43));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 2) = ((MR_Box) (Arity_45));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 3) = ((MR_Box) (HeadVar__2_2));
    }
    parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(HeadVar__1_1, ErrorContext_48, Types0_44, &Types_49, STATE_VARIABLE_Info_27_51, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_28_52, &STATE_VARIABLE_Specs_30_30);
    {
      Constraint_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_21, 0) = ((MR_Box) (ClassName_47));
      MR_hl_field(MR_mktag(0), Constraint_21, 1) = ((MR_Box) (Types_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraint_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrConstraints_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Constraints0_20, AddrConstraints_70, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_71,
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
      *AddrOfHeadVar__4_71 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Constraint_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ClassName0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 0))));
      MR_Word Types0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 1))));
      MR_Integer Arity_45;
      MR_Word OutsideContext_46;
      MR_Word ClassName_47;
      MR_Word ErrorContext_48;
      MR_Word Types_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_Info_27_51;
      MR_Word STATE_VARIABLE_Specs_28_52;
      MR_Word ClassIdSet_66;
      MR_Word * AddrConstraints_70;
      MR_Word HeadVar__4_72;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_71;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_44, &Arity_45);
      {
        OutsideContext_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), OutsideContext_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), OutsideContext_46, 1) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (ClassName0_43));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Arity_45));
      }
      parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_66);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_46, ClassIdSet_66, (MR_Integer) 3, Var_50, &ClassName_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_51, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_28_52);
      {
        ErrorContext_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 1) = ((MR_Box) (ClassName0_43));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 2) = ((MR_Box) (Arity_45));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 3) = ((MR_Box) (HeadVar__2_2));
      }
      parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(HeadVar__1_1, ErrorContext_48, Types0_44, &Types_49, STATE_VARIABLE_Info_27_51, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_28_52, &STATE_VARIABLE_Specs_30_30);
      {
        Constraint_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Constraint_21, 0) = ((MR_Box) (ClassName_47));
        MR_hl_field(MR_mktag(0), Constraint_21, 1) = ((MR_Box) (Types_49));
      }
      {
        HeadVar__4_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_72, 0) = ((MR_Box) (Constraint_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_72, 1) = NULL;
      }
      AddrConstraints_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_72, (MR_Integer) 1)));
      *AddrOfHeadVar__4_71 = HeadVar__4_72;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints0_20;
      next_value_of_AddrOfHeadVar__4_71 = AddrConstraints_70;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_71 = next_value_of_AddrOfHeadVar__4_71;
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
    MR_Word Arg0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Arg_27;
    MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word MaybeFieldName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 0))));
    MR_Word Type0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 1))));
    MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 2))));
    MR_Word ErrorContext_56;
    MR_Word Type_57;
    MR_Word * AddrArgs_60;

    {
      ErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ErrorContext_56, 1) = ((MR_Box) (Context_55));
      MR_hl_field(MR_mktag(3), ErrorContext_56, 2) = ((MR_Box) (ContainingTypeCtor_2));
      MR_hl_field(MR_mktag(3), ErrorContext_56, 3) = ((MR_Box) (FunctionSymbol_3));
      MR_hl_field(MR_mktag(3), ErrorContext_56, 4) = ((MR_Box) (CurArgNum_31));
      MR_hl_field(MR_mktag(3), ErrorContext_56, 5) = ((MR_Box) (MaybeFieldName_53));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_56, Type0_54, &Type_57, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_38_38);
    {
      Arg_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_27, 0) = ((MR_Box) (MaybeFieldName_53));
      MR_hl_field(MR_mktag(0), Arg_27, 1) = ((MR_Box) (Type_57));
      MR_hl_field(MR_mktag(0), Arg_27, 2) = ((MR_Box) (Context_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_27));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrArgs_60 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__6_6, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_10_p_0(HeadVar__1_1, ContainingTypeCtor_2, FunctionSymbol_3, CurArgNum_31, Args0_26, AddrArgs_60, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_8, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_10);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_61,
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
      *AddrOfHeadVar__6_61 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Arg0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Arg_27;
      MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Specs_38_38;
      MR_Word MaybeFieldName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 0))));
      MR_Word Type0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 1))));
      MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 2))));
      MR_Word ErrorContext_56;
      MR_Word Type_57;
      MR_Word * AddrArgs_60;
      MR_Word HeadVar__6_62;
      MR_Integer next_value_of_LastArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word * next_value_of_AddrOfHeadVar__6_61;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      {
        ErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ErrorContext_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ErrorContext_56, 1) = ((MR_Box) (Context_55));
        MR_hl_field(MR_mktag(3), ErrorContext_56, 2) = ((MR_Box) (ContainingTypeCtor_2));
        MR_hl_field(MR_mktag(3), ErrorContext_56, 3) = ((MR_Box) (FunctionSymbol_3));
        MR_hl_field(MR_mktag(3), ErrorContext_56, 4) = ((MR_Box) (CurArgNum_31));
        MR_hl_field(MR_mktag(3), ErrorContext_56, 5) = ((MR_Box) (MaybeFieldName_53));
      }
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_56, Type0_54, &Type_57, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_38_38);
      {
        Arg_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg_27, 0) = ((MR_Box) (MaybeFieldName_53));
        MR_hl_field(MR_mktag(0), Arg_27, 1) = ((MR_Box) (Type_57));
        MR_hl_field(MR_mktag(0), Arg_27, 2) = ((MR_Box) (Context_55));
      }
      {
        HeadVar__6_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__6_62, 0) = ((MR_Box) (Arg_27));
        MR_hl_field(MR_mktag(1), HeadVar__6_62, 1) = NULL;
      }
      AddrArgs_60 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__6_62, (MR_Integer) 1)));
      *AddrOfHeadVar__6_61 = HeadVar__6_62;
      // direct tailcall eliminated
      ;
      next_value_of_LastArgNum_4 = CurArgNum_31;
      next_value_of_HeadVar__5_5 = Args0_26;
      next_value_of_AddrOfHeadVar__6_61 = AddrArgs_60;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_37_37;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_38_38;
      LastArgNum_4 = next_value_of_LastArgNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      AddrOfHeadVar__6_61 = next_value_of_AddrOfHeadVar__6_61;
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

  parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Attr_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_31);
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
    MR_Word NameSpecs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Spec_22;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Integer EventNumber_46;
    MR_String EventName_47;
    MR_Integer EventLineNumber_48;
    MR_Word Attrs0_49;
    MR_Word SynthAttrNumOrder_50;
    MR_Word Attrs_51;
    MR_Word Var_52;
    MR_Box conv4_STATE_VARIABLE_Info_32_32;
    MR_Box conv3_STATE_VARIABLE_Specs_33_33;
    MR_Word * AddrNameSpecs_64;

    Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
    Spec0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
    EventNumber_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 0))));
    EventName_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 1))));
    EventLineNumber_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 2))));
    Attrs0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 3))));
    SynthAttrNumOrder_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 4))));
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (EventName_47));
      MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (FileName_2));
      MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (EventLineNumber_48));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_52, Attrs0_49, &Attrs_51, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
    STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
    STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (EventNumber_46));
      MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (EventName_47));
      MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (EventLineNumber_48));
      MR_hl_field(MR_mktag(0), Spec_22, 3) = ((MR_Box) (Attrs_51));
      MR_hl_field(MR_mktag(0), Spec_22, 4) = ((MR_Box) (SynthAttrNumOrder_50));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_19));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Spec_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrNameSpecs_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0(HeadVar__1_1, FileName_2, NameSpecs0_21, AddrNameSpecs_64, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_8);
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

  parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Attr_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_31);
  *wrapper_arg_2 = ((MR_Box) (conv2_Attr_16));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_29));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_65,
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
      *AddrOfHeadVar__4_65 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_String Name_19;
      MR_Word Spec0_20;
      MR_Word NameSpecs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Spec_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Integer EventNumber_46;
      MR_String EventName_47;
      MR_Integer EventLineNumber_48;
      MR_Word Attrs0_49;
      MR_Word SynthAttrNumOrder_50;
      MR_Word Attrs_51;
      MR_Word Var_52;
      MR_Box conv4_STATE_VARIABLE_Info_32_32;
      MR_Box conv3_STATE_VARIABLE_Specs_33_33;
      MR_Word * AddrNameSpecs_64;
      MR_Word HeadVar__4_66;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_65;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      Spec0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      EventNumber_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 0))));
      EventName_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 1))));
      EventLineNumber_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 2))));
      Attrs0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 3))));
      SynthAttrNumOrder_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 4))));
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (EventName_47));
        MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (FileName_2));
        MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (EventLineNumber_48));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_52, Attrs0_49, &Attrs_51, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
      STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
      STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (EventNumber_46));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (EventName_47));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (EventLineNumber_48));
        MR_hl_field(MR_mktag(0), Spec_22, 3) = ((MR_Box) (Attrs_51));
        MR_hl_field(MR_mktag(0), Spec_22, 4) = ((MR_Box) (SynthAttrNumOrder_50));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_19));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Spec_22));
      }
      {
        HeadVar__4_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_66, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), HeadVar__4_66, 1) = NULL;
      }
      AddrNameSpecs_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_66, (MR_Integer) 1)));
      *AddrOfHeadVar__4_65 = HeadVar__4_66;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NameSpecs0_21;
      next_value_of_AddrOfHeadVar__4_65 = AddrNameSpecs_64;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_65 = next_value_of_AddrOfHeadVar__4_65;
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
  MR_Word * AddrOfType_114,
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
          *AddrOfType_114 = Type0_11;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 0))));
          MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 1))));
          MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 2))));
          MR_Integer Arity_20;
          MR_Word TypeCtorId0_21;
          MR_Word Types_22;
          MR_Word SymName_23;
          MR_Word STATE_VARIABLE_Info_95_95;
          MR_Word STATE_VARIABLE_Specs_96_96;
          MR_Word * AddrArgs_111;
          MR_Word Type_116;

          Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
          {
            TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
            MR_hl_field(MR_mktag(0), TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
          }
          parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_22);
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_96_96);
          {
            Type_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Type_116, 0) = ((MR_Box) (SymName_23));
            MR_hl_field(MR_mktag(1), Type_116, 1) = NULL;
            MR_hl_field(MR_mktag(1), Type_116, 2) = ((MR_Box) (Kind_19));
          }
          AddrArgs_111 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Type_116, (MR_Integer) 1)));
          *AddrOfType_114 = Type_116;
          parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_111, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_37);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type0_11, (MR_Integer) 0))));

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
                MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);

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
          *AddrOfType_114 = Type0_11;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
              MR_Word Kind_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word * AddrArgs_113;
              MR_Word Type_123;

              {
                Type_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Type_123, 1) = NULL;
                MR_hl_field(MR_mktag(3), Type_123, 2) = ((MR_Box) (Kind_102));
              }
              AddrArgs_113 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Type_123, (MR_Integer) 1)));
              *AddrOfType_114 = Type_123;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_101, AddrArgs_113, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
              MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word HOInstInfo_30;
              MR_Word STATE_VARIABLE_Info_44_44;
              MR_Word STATE_VARIABLE_Specs_45_45;
              MR_Word Args0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word Args_100;
              MR_Word Type_119;

              parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_99, &Args_100, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_45_45);
              parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_27, &HOInstInfo_30, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_37);
              {
                Type_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Type_119, 1) = (MR_Box) ((MR_Unsigned) (PorF_26));
                MR_hl_field(MR_mktag(3), Type_119, 2) = ((MR_Box) (Args_100));
                MR_hl_field(MR_mktag(3), Type_119, 3) = ((MR_Box) (HOInstInfo_30));
                MR_hl_field(MR_mktag(3), Type_119, 4) = (MR_Box) ((MR_Unsigned) (Purity_28));
                MR_hl_field(MR_mktag(3), Type_119, 5) = NULL;
              }
              *AddrOfType_114 = Type_119;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
              MR_Word Args0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word Kind_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
              MR_Word Type_12;
              MR_Word * AddrArgs_110;

              {
                Type_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Type_12, 1) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(3), Type_12, 2) = NULL;
                MR_hl_field(MR_mktag(3), Type_12, 3) = ((MR_Box) (Kind_105));
              }
              AddrArgs_110 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 2)));
              *AddrOfType_114 = Type_12;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_104, AddrArgs_110, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
              MR_Word Kind_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word * AddrSubType_112;
              MR_Word Type_120;
              MR_Word next_value_of_Type0_11;
              MR_Word * next_value_of_AddrOfType_114;

              {
                Type_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_120, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Type_120, 1) = NULL;
                MR_hl_field(MR_mktag(3), Type_120, 2) = ((MR_Box) (Kind_107));
              }
              AddrSubType_112 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Type_120, (MR_Integer) 1)));
              *AddrOfType_114 = Type_120;
              // direct tailcall eliminated
              ;
              next_value_of_Type0_11 = SubType0_32;
              next_value_of_AddrOfType_114 = AddrSubType_112;
              Type0_11 = next_value_of_Type0_11;
              AddrOfType_114 = next_value_of_AddrOfType_114;
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
  MR_Word * AddrOfHeadVar__4_34,
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
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Type_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrTypes_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Type_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrTypes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrTypes_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
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
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrTypes_33;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTypes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_20, AddrTypes_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
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
        MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 0))));
        MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 1))));
        MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 2))));
        MR_Integer Arity_20;
        MR_Word TypeCtorId0_21;
        MR_Word Types_22;
        MR_Word SymName_23;
        MR_Word STATE_VARIABLE_Info_95_95;
        MR_Word STATE_VARIABLE_Specs_96_96;
        MR_Word * AddrArgs_111;

        Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
        {
          TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
          MR_hl_field(MR_mktag(0), TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
        }
        parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_22);
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_96_96);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_19));
        }
        AddrArgs_111 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *Type_12, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_111, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type0_11, (MR_Integer) 0))));

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
              MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);

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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
            MR_Word Kind_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_113;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_102));
            }
            AddrArgs_113 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_101, AddrArgs_113, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
            MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word HOInstInfo_30;
            MR_Word STATE_VARIABLE_Info_44_44;
            MR_Word STATE_VARIABLE_Specs_45_45;
            MR_Word Args0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word Args_100;

            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_99, &Args_100, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_45_45);
            parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_27, &HOInstInfo_30, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_26));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_100));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_30));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_28));
              MR_hl_field(MR_mktag(3), base, 5) = NULL;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
            MR_Word Args0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word Kind_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
            MR_Word * AddrArgs_110;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_105));
            }
            AddrArgs_110 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Type_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_104, AddrArgs_110, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
            MR_Word Kind_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word * AddrSubType_112;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_107));
            }
            AddrSubType_112 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_8_p_0(InInt_9, ErrorContext_10, SubType0_32, AddrSubType_112, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * HOInstInfo_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HOInstInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
  else
  {
    MR_Word PredOrFunc_15;
    MR_Word Modes0_16;
    MR_Word MaybeArgRegs_17;
    MR_Word Detism_18;
    MR_Word Modes_19;
    MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
    MR_Word Var_27;

    PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))) & (MR_Integer) 1);
    Modes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    MaybeArgRegs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
    Detism_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 3))) & (MR_Integer) 7);
    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_16, &Modes_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Modes_19));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MaybeArgRegs_17));
      MR_hl_field(MR_mktag(0), Var_27, 3) = (MR_Box) ((MR_Unsigned) (Detism_18));
    }
    *HOInstInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_27)));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_85,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfInst_85 = Inst0_11;
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
          MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 1))));
          MR_Word HOInstInfo_17;
          MR_Word Inst_86;

          if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          else
          {
            MR_Word PredOrFunc_71;
            MR_Word Modes0_72;
            MR_Word MaybeArgRegs_73;
            MR_Word Detism_74;
            MR_Word Modes_75;
            MR_Word Var_76 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
            MR_Word Var_79;

            PredOrFunc_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1))));
            MaybeArgRegs_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 2))));
            Detism_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 3))) & (MR_Integer) 7);
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_72, &Modes_75, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_71));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Modes_75));
              MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MaybeArgRegs_73));
              MR_hl_field(MR_mktag(0), Var_79, 3) = (MR_Box) ((MR_Unsigned) (Detism_74));
            }
            HOInstInfo_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_79)));
          }
          {
            Inst_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Inst_86, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
            MR_hl_field(MR_mktag(2), Inst_86, 1) = ((MR_Box) (HOInstInfo_17));
          }
          *AddrOfInst_85 = Inst_86;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3))));
              MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word * AddrBoundInsts_81;
              MR_Word Inst_87;

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
                Inst_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Inst_87, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
                MR_hl_field(MR_mktag(3), Inst_87, 2) = ((MR_Box) (InstResults0_20));
                MR_hl_field(MR_mktag(3), Inst_87, 3) = NULL;
              }
              AddrBoundInsts_81 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_87, (MR_Integer) 3)));
              *AddrOfInst_85 = Inst_87;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_81, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrHOInstInfo_84;
              MR_Word Inst_97;

              {
                Inst_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_97, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Inst_97, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
                MR_hl_field(MR_mktag(3), Inst_97, 2) = NULL;
              }
              AddrHOInstInfo_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_97, (MR_Integer) 2)));
              *AddrOfInst_85 = Inst_97;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_ho_inst_info__1_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_59, AddrHOInstInfo_84, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 2:
            {
              *AddrOfInst_85 = Inst0_11;
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
              *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrSubInst_82;
              MR_Word Inst_90;
              MR_Word next_value_of_Inst0_11;
              MR_Word * next_value_of_AddrOfInst_85;

              {
                Inst_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_90, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Inst_90, 1) = ((MR_Box) (Vars_29));
                MR_hl_field(MR_mktag(3), Inst_90, 2) = NULL;
              }
              AddrSubInst_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_90, (MR_Integer) 2)));
              *AddrOfInst_85 = Inst_90;
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_11 = SubInst0_30;
              next_value_of_AddrOfInst_85 = AddrSubInst_82;
              Inst0_11 = next_value_of_Inst0_11;
              AddrOfInst_85 = next_value_of_AddrOfInst_85;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word * AddrInstName_83;
              MR_Word Inst_93;

              {
                Inst_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_93, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Inst_93, 1) = NULL;
              }
              AddrInstName_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_93, (MR_Integer) 1)));
              *AddrOfInst_85 = Inst_93;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_name__1_8_p_0(InInt_9, ErrorContext_10, InstName0_32, AddrInstName_83, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word Inst_12;
              MR_Word * AddrArgs_80;

              {
                Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Inst_12, 1) = ((MR_Box) (Name_34));
                MR_hl_field(MR_mktag(3), Inst_12, 2) = NULL;
              }
              AddrArgs_80 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 2)));
              *AddrOfInst_85 = Inst_12;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_80, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
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

  recompilation__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_82,
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
      *AddrOfHeadVar__4_82 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word BoundInst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word BoundInst_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_19, (MR_Integer) 0))));
      MR_Word Insts0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_19, (MR_Integer) 1))));
      MR_Word Insts_72;
      MR_Word STATE_VARIABLE_Info_50_74;
      MR_Word * AddrBoundInsts_81;
      MR_Word HeadVar__4_83;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_82;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      switch (MR_tag((MR_Word) ConsId_43)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_43, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Name_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_43, (MR_Integer) 1))));
                MR_Integer Arity_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_43, (MR_Integer) 2))));
                MR_Word Id_48;
                MR_Word Var_73;

                {
                  Id_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Id_48, 0) = ((MR_Box) (Name_45));
                  MR_hl_field(MR_mktag(0), Id_48, 1) = ((MR_Box) (Arity_46));
                }
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Id_48));
                  MR_hl_field(MR_mktag(0), Var_73, 5) = ((MR_Box) (Id_48));
                }
                parse_tree__module_qual__update_recompilation_info_3_p_0(Var_73, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_50_74);
              }
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 5:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 13:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 14:
              STATE_VARIABLE_Info_50_74 = STATE_VARIABLE_Info_0_5;
              break;
          }
          break;
      }
      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_44, &Insts_72, STATE_VARIABLE_Info_50_74, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        BoundInst_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoundInst_21, 0) = ((MR_Box) (ConsId_43));
        MR_hl_field(MR_mktag(0), BoundInst_21, 1) = ((MR_Box) (Insts_72));
      }
      {
        HeadVar__4_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_83, 0) = ((MR_Box) (BoundInst_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_83, 1) = NULL;
      }
      AddrBoundInsts_81 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_83, (MR_Integer) 1)));
      *AddrOfHeadVar__4_82 = HeadVar__4_83;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BoundInsts0_20;
      next_value_of_AddrOfHeadVar__4_82 = AddrBoundInsts_81;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_82 = next_value_of_AddrOfHeadVar__4_82;
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
  MR_Word * AddrOfHeadVar__4_34,
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
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Inst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Inst_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrInsts_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_19, &Inst_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Inst_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrInsts_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Insts0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrInsts_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
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
  MR_Word * AddrOfHeadVar__4_34,
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
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Mode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrModes_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_19, &Mode_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Mode_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrModes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Modes0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrModes_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_ho_inst_info__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * AddrOfHOInstInfo_28,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *AddrOfHOInstInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
  else
  {
    MR_Word HOInstInfo_12;
    MR_Word PredOrFunc_15;
    MR_Word Modes0_16;
    MR_Word MaybeArgRegs_17;
    MR_Word Detism_18;
    MR_Word Modes_19;
    MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
    MR_Word Var_27;

    PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))) & (MR_Integer) 1);
    Modes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    MaybeArgRegs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
    Detism_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 3))) & (MR_Integer) 7);
    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_16, &Modes_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Modes_19));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MaybeArgRegs_17));
      MR_hl_field(MR_mktag(0), Var_27, 3) = (MR_Box) ((MR_Unsigned) (Detism_18));
    }
    HOInstInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_27)));
    *AddrOfHOInstInfo_28 = HOInstInfo_12;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_name__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word InstName0_11,
  MR_Word * AddrOfInstName_57,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word InstName_12;
        MR_Word SymName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_11, (MR_Integer) 0))));
        MR_Word Insts0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_11, (MR_Integer) 1))));
        MR_Word Insts_17;
        MR_Word SymName_18;
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word STATE_VARIABLE_Specs_48_48;
        MR_String Var_49;

        parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_16, &Insts_17, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_48_48);
        succeeded = ((MR_tag((MR_Word) SymName0_15)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName0_15, (MR_Integer) 0))));
          succeeded = (strcmp(Var_49, (MR_String) "") == 0);
        }
        if (succeeded)
        {
          parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_15, Insts_17, ErrorContext_10, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_44);
          parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_42);
          SymName_18 = SymName0_15;
        }
        else
        {
          MR_Integer Arity_19;
          MR_Word InstIdSet_20;
          MR_Word Var_53;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_16, &Arity_19);
          parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_47_47, &InstIdSet_20);
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (SymName0_15));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Arity_19));
          }
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_20, (MR_Integer) 1, Var_53, &SymName_18, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_42, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_44);
        }
        {
          InstName_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InstName_12, 0) = ((MR_Box) (SymName_18));
          MR_hl_field(MR_mktag(0), InstName_12, 1) = ((MR_Box) (Insts_17));
        }
        *AddrOfInstName_57 = InstName_12;
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
    MR_Word Inst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Inst_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrInsts_33;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_19, &Inst_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrInsts_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_20, AddrInsts_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
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
        MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 1))));
        MR_Word HOInstInfo_17;

        if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        else
        {
          MR_Word PredOrFunc_71;
          MR_Word Modes0_72;
          MR_Word MaybeArgRegs_73;
          MR_Word Detism_74;
          MR_Word Modes_75;
          MR_Word Var_76 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
          MR_Word Var_79;

          PredOrFunc_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))) & (MR_Integer) 1);
          Modes0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1))));
          MaybeArgRegs_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 2))));
          Detism_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 3))) & (MR_Integer) 7);
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_72, &Modes_75, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_71));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Modes_75));
            MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MaybeArgRegs_73));
            MR_hl_field(MR_mktag(0), Var_79, 3) = (MR_Box) ((MR_Unsigned) (Detism_74));
          }
          HOInstInfo_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_79)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_17));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3))));
            MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word * AddrBoundInsts_81;

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
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_20));
              MR_hl_field(MR_mktag(3), base, 3) = NULL;
            }
            AddrBoundInsts_81 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 3)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_insts__1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_81, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrHOInstInfo_84;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrHOInstInfo_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_ho_inst_info__1_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_59, AddrHOInstInfo_84, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
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
            MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrSubInst_82;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_29));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrSubInst_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(InInt_9, ErrorContext_10, SubInst0_30, AddrSubInst_82, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word * AddrInstName_83;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
            }
            AddrInstName_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_name__1_8_p_0(InInt_9, ErrorContext_10, InstName0_32, AddrInstName_83, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_80;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_34));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrArgs_80 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_80, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
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
    MR_Word InstA0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_11, (MR_Integer) 0))));
    MR_Word InstB0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_11, (MR_Integer) 1))));
    MR_Word InstA_17;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word * AddrInstB_40;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, InstA0_15, &InstA_17, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_36_36);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstA_17));
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
    }
    AddrInstB_40 = (MR_Word *) (&(MR_hl_field(MR_mktag(0), *Mode_12, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_8_p_0(InInt_9, ErrorContext_10, InstB0_16, AddrInstB_40, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_11, (MR_Integer) 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_11, (MR_Integer) 1))));
    MR_Word Insts_21;
    MR_Integer Arity_22;
    MR_Word Modes_23;
    MR_Word SymName_24;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Var_32;

    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_20, &Insts_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_30_30);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_21, &Arity_22);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_29_29, &Modes_23);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (SymName0_19));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Arity_22));
    }
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Modes_23, (MR_Integer) 2, Var_32, &SymName_24, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
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
    MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Mode_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrModes_33;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_19, &Mode_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrModes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_20, AddrModes_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv27_ItemTypeRepnInfo_12, ((MR_Word) (wrapper_arg_3)), &conv26_STATE_VARIABLE_Info_35, ((MR_Word) (wrapper_arg_5)), &conv25_STATE_VARIABLE_Specs_37);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv22_ItemInstance_10, ((MR_Word) (wrapper_arg_3)), &conv21_STATE_VARIABLE_Info_33, ((MR_Word) (wrapper_arg_5)), &conv20_STATE_VARIABLE_Specs_35);
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
  MR_Word conv16_STATE_VARIABLE_Info_29;
  MR_Word conv15_STATE_VARIABLE_Specs_31;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_ItemTypeClass_10, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Specs_31);
  *wrapper_arg_2 = ((MR_Box) (conv17_ItemTypeClass_10));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_Info_29));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_31));
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
  MR_Word conv1_STATE_VARIABLE_Info_54;
  MR_Word conv0_STATE_VARIABLE_Specs_56;

  parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_54, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_56);
  *wrapper_arg_2 = ((MR_Box) (conv2_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_54));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_56));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0(
  MR_Word OrigParseTreeInt3_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 1))));
  MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 2))));
  MR_Word InclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 3))));
  MR_Word IntImportedMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 4))));
  MR_Word ImportUseMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 5))));
  MR_Word IntTypeDefnMap0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 6))));
  MR_Word IntInstDefnMap0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 7))));
  MR_Word IntModeDefnMap0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 8))));
  MR_Word IntTypeClasses0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 9))));
  MR_Word IntInstances0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 10))));
  MR_Word IntTypeRepns0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt3_7, (MR_Integer) 11))));
  MR_Word IntTypeDefnMap_24;
  MR_Word IntInstDefnMap_25;
  MR_Word IntModeDefnMap_26;
  MR_Word IntTypeClasses_27;
  MR_Word IntInstances_28;
  MR_Word IntTypeRepns_29;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word STATE_VARIABLE_Specs_39_39;
  MR_Word STATE_VARIABLE_Info_41_41;
  MR_Word STATE_VARIABLE_Specs_42_42;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word STATE_VARIABLE_Specs_45_45;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Word Var_49;
  MR_Box conv4_STATE_VARIABLE_Info_35_35;
  MR_Box conv3_STATE_VARIABLE_Specs_36_36;
  MR_Box conv9_STATE_VARIABLE_Info_38_38;
  MR_Box conv8_STATE_VARIABLE_Specs_39_39;
  MR_Box conv14_STATE_VARIABLE_Info_41_41;
  MR_Box conv13_STATE_VARIABLE_Specs_42_42;
  MR_Box conv19_STATE_VARIABLE_Info_44_44;
  MR_Box conv18_STATE_VARIABLE_Specs_45_45;
  MR_Box conv24_STATE_VARIABLE_Info_47_47;
  MR_Box conv23_STATE_VARIABLE_Specs_48_48;
  MR_Box conv29_STATE_VARIABLE_Info_31;
  MR_Box conv28_STATE_VARIABLE_Specs_33;

  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[3]), IntTypeDefnMap0_17, &IntTypeDefnMap_24, ((MR_Box) (STATE_VARIABLE_Info_0_30)), &conv4_STATE_VARIABLE_Info_35_35, ((MR_Box) (STATE_VARIABLE_Specs_0_32)), &conv3_STATE_VARIABLE_Specs_36_36);
  STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_Info_35_35));
  STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36_36));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[4]), IntInstDefnMap0_18, &IntInstDefnMap_25, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv9_STATE_VARIABLE_Info_38_38, ((MR_Box) (STATE_VARIABLE_Specs_36_36)), &conv8_STATE_VARIABLE_Specs_39_39);
  STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv9_STATE_VARIABLE_Info_38_38));
  STATE_VARIABLE_Specs_39_39 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_39_39));
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[5]), IntModeDefnMap0_19, &IntModeDefnMap_26, ((MR_Box) (STATE_VARIABLE_Info_38_38)), &conv14_STATE_VARIABLE_Info_41_41, ((MR_Box) (STATE_VARIABLE_Specs_39_39)), &conv13_STATE_VARIABLE_Specs_42_42);
  STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv14_STATE_VARIABLE_Info_41_41));
  STATE_VARIABLE_Specs_42_42 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_42_42));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[13]), IntTypeClasses0_20, &IntTypeClasses_27, ((MR_Box) (STATE_VARIABLE_Info_41_41)), &conv19_STATE_VARIABLE_Info_44_44, ((MR_Box) (STATE_VARIABLE_Specs_42_42)), &conv18_STATE_VARIABLE_Specs_45_45);
  STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv19_STATE_VARIABLE_Info_44_44));
  STATE_VARIABLE_Specs_45_45 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_45_45));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[14]), IntInstances0_21, &IntInstances_28, ((MR_Box) (STATE_VARIABLE_Info_44_44)), &conv24_STATE_VARIABLE_Info_47_47, ((MR_Box) (STATE_VARIABLE_Specs_45_45)), &conv23_STATE_VARIABLE_Specs_48_48);
  STATE_VARIABLE_Info_47_47 = ((MR_Word) (conv24_STATE_VARIABLE_Info_47_47));
  STATE_VARIABLE_Specs_48_48 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_48_48));
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_6_p_0_6));
    MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleName_11));
    MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__map__map_values_foldl2_7_p_2((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_49, IntTypeRepns0_22, &IntTypeRepns_29, ((MR_Box) (STATE_VARIABLE_Info_47_47)), &conv29_STATE_VARIABLE_Info_31, ((MR_Box) (STATE_VARIABLE_Specs_48_48)), &conv28_STATE_VARIABLE_Specs_33);
  *STATE_VARIABLE_Info_31 = ((MR_Word) (conv29_STATE_VARIABLE_Info_31));
  *STATE_VARIABLE_Specs_33 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_33));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt3_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InclMap_14));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IntImportedMap_15));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ImportUseMap_16));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntTypeDefnMap_24));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntInstDefnMap_25));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IntModeDefnMap_26));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntTypeClasses_27));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntInstances_28));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntTypeRepns_29));
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

  parse_tree__module_qual__qualify_items__module_qualify_item_mutable_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv77_ItemMutable_10, ((MR_Word) (wrapper_arg_3)), &conv76_STATE_VARIABLE_Info_31, ((MR_Word) (wrapper_arg_5)), &conv75_STATE_VARIABLE_Specs_33);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv72_ItemImplPragma_10, ((MR_Word) (wrapper_arg_3)), &conv71_STATE_VARIABLE_Info_18, ((MR_Word) (wrapper_arg_5)), &conv70_STATE_VARIABLE_Specs_20);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv67_ItemDeclPragma_10, ((MR_Word) (wrapper_arg_3)), &conv66_STATE_VARIABLE_Info_18, ((MR_Word) (wrapper_arg_5)), &conv65_STATE_VARIABLE_Specs_20);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv62_ItemFEE_10, ((MR_Word) (wrapper_arg_3)), &conv61_STATE_VARIABLE_Info_23, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_Specs_25);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv57_ItemModeDecl_10, ((MR_Word) (wrapper_arg_3)), &conv56_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_5)), &conv55_STATE_VARIABLE_Specs_30);
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
  MR_Word conv51_STATE_VARIABLE_Info_39;
  MR_Word conv50_STATE_VARIABLE_Specs_41;

  parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv52_ItemPredDecl_10, ((MR_Word) (wrapper_arg_3)), &conv51_STATE_VARIABLE_Info_39, ((MR_Word) (wrapper_arg_5)), &conv50_STATE_VARIABLE_Specs_41);
  *wrapper_arg_2 = ((MR_Box) (conv52_ItemPredDecl_10));
  *wrapper_arg_4 = ((MR_Box) (conv51_STATE_VARIABLE_Info_39));
  *wrapper_arg_6 = ((MR_Box) (conv50_STATE_VARIABLE_Specs_41));
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

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv47_ItemInstance_10, ((MR_Word) (wrapper_arg_3)), &conv46_STATE_VARIABLE_Info_33, ((MR_Word) (wrapper_arg_5)), &conv45_STATE_VARIABLE_Specs_35);
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
  MR_Word conv41_STATE_VARIABLE_Info_29;
  MR_Word conv40_STATE_VARIABLE_Specs_31;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv42_ItemTypeClass_10, ((MR_Word) (wrapper_arg_3)), &conv41_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv40_STATE_VARIABLE_Specs_31);
  *wrapper_arg_2 = ((MR_Box) (conv42_ItemTypeClass_10));
  *wrapper_arg_4 = ((MR_Box) (conv41_STATE_VARIABLE_Info_29));
  *wrapper_arg_6 = ((MR_Box) (conv40_STATE_VARIABLE_Specs_31));
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

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv37_ItemDeclPragma_10, ((MR_Word) (wrapper_arg_3)), &conv36_STATE_VARIABLE_Info_18, ((MR_Word) (wrapper_arg_5)), &conv35_STATE_VARIABLE_Specs_20);
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

  parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv32_ItemModeDecl_10, ((MR_Word) (wrapper_arg_3)), &conv31_STATE_VARIABLE_Info_28, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Specs_30);
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
  MR_Word conv26_STATE_VARIABLE_Info_39;
  MR_Word conv25_STATE_VARIABLE_Specs_41;

  parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv27_ItemPredDecl_10, ((MR_Word) (wrapper_arg_3)), &conv26_STATE_VARIABLE_Info_39, ((MR_Word) (wrapper_arg_5)), &conv25_STATE_VARIABLE_Specs_41);
  *wrapper_arg_2 = ((MR_Box) (conv27_ItemPredDecl_10));
  *wrapper_arg_4 = ((MR_Box) (conv26_STATE_VARIABLE_Info_39));
  *wrapper_arg_6 = ((MR_Box) (conv25_STATE_VARIABLE_Specs_41));
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

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv22_ItemInstance_10, ((MR_Word) (wrapper_arg_3)), &conv21_STATE_VARIABLE_Info_33, ((MR_Word) (wrapper_arg_5)), &conv20_STATE_VARIABLE_Specs_35);
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
  MR_Word conv16_STATE_VARIABLE_Info_29;
  MR_Word conv15_STATE_VARIABLE_Specs_31;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_ItemTypeClass_10, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Specs_31);
  *wrapper_arg_2 = ((MR_Box) (conv17_ItemTypeClass_10));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_Info_29));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_31));
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
  MR_Word conv1_STATE_VARIABLE_Info_54;
  MR_Word conv0_STATE_VARIABLE_Specs_56;

  parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_CheckedDefn_8, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_54, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_56);
  *wrapper_arg_2 = ((MR_Box) (conv2_CheckedDefn_8));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_54));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_56));
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
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 1))));
  MR_Word IntInclMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 2))));
  MR_Word ImpInclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 3))));
  MR_Word InclMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 4))));
  MR_Word IntImportMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 5))));
  MR_Word IntUseMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 6))));
  MR_Word ImpImportMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 7))));
  MR_Word ImpUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 8))));
  MR_Word ImportUseMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 9))));
  MR_Word IntFIMSpecMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 10))));
  MR_Word ImpFIMSpecMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 11))));
  MR_Word IntSelfFIMLangs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 12))));
  MR_Word ImpSelfFIMLangs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 13))));
  MR_Word TypeCtorCheckedMap0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 14))));
  MR_Word InstCtorCheckedMap0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 15))));
  MR_Word ModeCtorCheckedMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 16))));
  MR_Word TypeSpecs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 17))));
  MR_Word InstModeSpecs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 18))));
  MR_Word IntTypeClasses0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 19))));
  MR_Word IntInstances0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 20))));
  MR_Word IntPredDecls0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 21))));
  MR_Word IntModeDecls0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 22))));
  MR_Word IntDeclPragmas0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 23))));
  MR_Word IntBadPreds_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 25))));
  MR_Word ImpTypeClasses0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 26))));
  MR_Word ImpInstances0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 27))));
  MR_Word ImpPredDecls0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 28))));
  MR_Word ImpModeDecls0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 29))));
  MR_Word ImpForeignExportEnums0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 31))));
  MR_Word ImpDeclPragmas0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 32))));
  MR_Word ImpImplPragmas0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 33))));
  MR_Word ImpMutables0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 37))));
  MR_Word TypeCtorCheckedMap_49;
  MR_Word InstCtorCheckedMap_50;
  MR_Word ModeCtorCheckedMap_51;
  MR_Word IntTypeClasses_53;
  MR_Word IntInstances_54;
  MR_Word IntPredDecls_55;
  MR_Word IntModeDecls_56;
  MR_Word IntDeclPragmas_57;
  MR_Word IntPromises_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 24))));
  MR_Word ImpTypeClasses_60;
  MR_Word ImpInstances_61;
  MR_Word ImpPredDecls_62;
  MR_Word ImpModeDecls_63;
  MR_Word ImpClauses_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 30))));
  MR_Word ImpForeignExportEnums_65;
  MR_Word ImpDeclPragmas_66;
  MR_Word ImpImplPragmas_67;
  MR_Word ImpInitialises_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 35))));
  MR_Word ImpFinalises_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 36))));
  MR_Word ImpPromises_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_7, (MR_Integer) 34))));
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
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_14));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_15));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_16));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_17));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_18));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_19));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_20));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_21));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_22));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntSelfFIMLangs_23));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ImpSelfFIMLangs_24));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (TypeCtorCheckedMap_49));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (InstCtorCheckedMap_50));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (ModeCtorCheckedMap_51));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (TypeSpecs_28));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (InstModeSpecs_29));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntTypeClasses_53));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntInstances_54));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPredDecls_55));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntModeDecls_56));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntDeclPragmas_57));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntPromises_58));
    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (IntBadPreds_36));
    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeClasses_60));
    MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpInstances_61));
    MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpPredDecls_62));
    MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpModeDecls_63));
    MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpClauses_64));
    MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpForeignExportEnums_65));
    MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ImpDeclPragmas_66));
    MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ImpImplPragmas_67));
    MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ImpPromises_70));
    MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ImpInitialises_68));
    MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ImpFinalises_69));
    MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ImpMutables_71));
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
