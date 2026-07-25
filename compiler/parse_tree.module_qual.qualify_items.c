/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2026-07-25
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
#include "integer.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__module_qual__qualify_items____vpti_pred_7__plain_parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__506__1_6_p_0(
  MR_Word HeadVar__1_69,
  MR_Word HeadVar__2_70,
  MR_Word HeadVar__3_154,
  MR_Word * HeadVar__4_155,
  MR_Word HeadVar__5_156,
  MR_Word * HeadVar__6_157);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__502__1_6_p_0(
  MR_Word HeadVar__1_65,
  MR_Word HeadVar__2_66,
  MR_Word HeadVar__3_140,
  MR_Word * HeadVar__4_141,
  MR_Word HeadVar__5_142,
  MR_Word * HeadVar__6_143);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_8_p_0(
  MR_Word InInt_9,
  MR_String EventName_10,
  MR_String FileName_11,
  MR_Integer LineNumber_12,
  MR_Word Attr0_13,
  MR_Word * Attr_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mutable_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemMutable0_7,
  MR_Word * ItemMutable_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_5_p_0(
  MR_Word InInt_6,
  MR_Word Pragma0_7,
  MR_Word * Pragma_8,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0(
  MR_Word InInt_6,
  MR_Word Pragma0_7,
  MR_Word * Pragma_8,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_subst_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Subst0_9,
  MR_Word * Subst_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_tvar_substs_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HeadSubst0_11,
  MR_Word * HeadSubst_12,
  MR_Word TailSubsts0_13,
  MR_Word * TailSubsts_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_tvar_substs__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HeadSubst0_11,
  MR_Word * AddrOfHeadSubst_28,
  MR_Word TailSubsts0_13,
  MR_Word * AddrOfTailSubsts_29,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_6_p_0(
  MR_Word InInt_7,
  MR_Word ContainingErrorContext_8,
  MR_Word Constraint0_9,
  MR_Word * Constraint_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_constraint_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_36,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_6_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_type_list__1_6_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_31,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word TypeCtor0_9,
  MR_Word * TypeCtor_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InInt_8,
  MR_Word ItemTypeRepnInfo0_9,
  MR_Word * ItemTypeRepnInfo_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemFEE0_7,
  MR_Word * ItemFEE_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemForeignEnum0_7,
  MR_Word * ItemForeignEnum_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_proc_5_p_0(
  MR_Word InInt_6,
  MR_Word FPInfo0_7,
  MR_Word * FPInfo_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_43,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemModeDecl0_7,
  MR_Word * ItemModeDecl_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemPredDecl0_7,
  MR_Word * ItemPredDecl_8,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_instance_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemInstance0_7,
  MR_Word * ItemInstance_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemInstance0_7,
  MR_Word * ItemInstance_8,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_typeclass_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemTypeClass0_7,
  MR_Word * ItemTypeClass_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemTypeClass0_7,
  MR_Word * ItemTypeClass_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decls_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_119,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_43,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_23,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_4_p_0(
  MR_Word CheckedDefn0_5,
  MR_Word * CheckedDefn_6,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__552__1__ho12_6_p_0(
  MR_Word HeadVar__2_37,
  MR_Word HeadVar__3_38,
  MR_Word * HeadVar__4_39,
  MR_Word HeadVar__5_40,
  MR_Word * HeadVar__6_41);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word ModeCtor_10,
  MR_Word MaybeAbstractModeDefn0_11,
  MR_Word * MaybeAbstractModeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_4_p_0(
  MR_Word CheckedDefn0_5,
  MR_Word * CheckedDefn_6,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__530__1__ho11_6_p_0(
  MR_Word HeadVar__2_37,
  MR_Word HeadVar__3_38,
  MR_Word * HeadVar__4_39,
  MR_Word HeadVar__5_40,
  MR_Word * HeadVar__6_41);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word InstCtor_10,
  MR_Word MaybeAbstractInstDefn0_11,
  MR_Word * MaybeAbstractInstDefn_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0(
  MR_Word CheckedDefn0_5,
  MR_Word * CheckedDefn_6,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static void MR_CALL 
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_6_p_0(
  MR_Word InInt_8,
  MR_Word MaybeDefn0_9,
  MR_Word * MaybeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__454__1__ho10_6_p_0(
  MR_Word HeadVar__2_94,
  MR_Word HeadVar__3_95,
  MR_Word * HeadVar__4_96,
  MR_Word HeadVar__5_97,
  MR_Word * HeadVar__6_98);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn0_11,
  MR_Word * TypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_6_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeDefn0_9,
  MR_Word * ItemTypeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_6_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeDefn0_9,
  MR_Word * ItemTypeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_sub_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsSub0_11,
  MR_Word * DetailsSub_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_6_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeDefn0_9,
  MR_Word * ItemTypeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_7_p_0(
  MR_Word InInt_8,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu0_11,
  MR_Word * DetailsDu_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_42,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_36,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_solver_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsSolver0_11,
  MR_Word * DetailsSolver_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_38,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Type0_9,
  MR_Word * AddrOfType_71,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_23,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Type0_9,
  MR_Word * Type_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Inst0_9,
  MR_Word * AddrOfInst_100,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_38,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_23,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0(
  MR_Word ParseTreeModuleSrc0_5,
  MR_Word * ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static void MR_CALL 
parse_tree__module_qual__qualify_items__get_unused_imports_map_2_p_0(
  MR_Word Info_3,
  MR_Word * UnusedImportsMap_4);


static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[6][2];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[5][7];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[11][3];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[13][8];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[18][4];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_7[1][11];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[4][6];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_9[3][9];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[1][10];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_12[2][5];


struct parse_tree__module_qual__qualify_items__vector_common_type_10_0_s {
  const MR_Word parse_tree__module_qual__qualify_items__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_10_0_s parse_tree__module_qual__qualify_items_vector_common_10[8];



static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "float")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "string")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "")) },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int0_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_11[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_11[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[13][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row  11 */
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
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[18][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[5])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[6])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_14)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[7])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[8])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[4])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_1)),
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
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[12])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_8[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0)),
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

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_9[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items____vpti_pred_7__plain_parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_11[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_12[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[9])),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[10])),
    ((MR_Box) ((MR_Integer) 0))
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


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__module_qual__qualify_items____vpti_pred_7__plain_parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0__plain_term_context__type_ctor_info_term_context_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0__plain_parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)
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
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__506__1_6_p_0(
  MR_Word HeadVar__1_69,
  MR_Word HeadVar__2_70,
  MR_Word HeadVar__3_154,
  MR_Word * HeadVar__4_155,
  MR_Word HeadVar__5_156,
  MR_Word * HeadVar__6_157)
{
  MR_Word SymName_159 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_154, 0))));
  MR_Word Params_160 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_154, 1))));
  MR_Word TypeDefn0_161 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_154, 2))));
  MR_Word TVarSet_162 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_154, 3))));
  MR_Word Context_163 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_154, 4))));
  MR_Word SeqNum_164 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_154, 5))));
  MR_Integer Arity_165;
  MR_Word TypeCtor_166;
  MR_Word TypeDefn_167;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_TypeDefn_167;
  MR_Box conv1_HeadVar__6_157;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_160, &Arity_165);
  {
    TypeCtor_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_166, 0) = ((MR_Box) (SymName_159));
    MR_hl_field(0, TypeCtor_166, 1) = ((MR_Box) (Arity_165));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__1_69, 1))));
  func_0(((MR_Box) (HeadVar__1_69)), ((MR_Box) (HeadVar__2_70)), ((MR_Box) (Context_163)), ((MR_Box) (TypeCtor_166)), ((MR_Box) (TypeDefn0_161)), &conv2_TypeDefn_167, ((MR_Box) (HeadVar__5_156)), &conv1_HeadVar__6_157);
  TypeDefn_167 = ((MR_Word) (conv2_TypeDefn_167));
  *HeadVar__6_157 = ((MR_Word) (conv1_HeadVar__6_157));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_155 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_159));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_160));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_167));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_162));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_163));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_164));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__502__1_6_p_0(
  MR_Word HeadVar__1_65,
  MR_Word HeadVar__2_66,
  MR_Word HeadVar__3_140,
  MR_Word * HeadVar__4_141,
  MR_Word HeadVar__5_142,
  MR_Word * HeadVar__6_143)
{
  MR_Word SymName_145 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_140, 0))));
  MR_Word Params_146 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_140, 1))));
  MR_Word TypeDefn0_147 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_140, 2))));
  MR_Word TVarSet_148 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_140, 3))));
  MR_Word Context_149 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_140, 4))));
  MR_Word SeqNum_150 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_140, 5))));
  MR_Integer Arity_151;
  MR_Word TypeCtor_152;
  MR_Word TypeDefn_153;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_TypeDefn_153;
  MR_Box conv1_HeadVar__6_143;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_146, &Arity_151);
  {
    TypeCtor_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_152, 0) = ((MR_Box) (SymName_145));
    MR_hl_field(0, TypeCtor_152, 1) = ((MR_Box) (Arity_151));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__1_65, 1))));
  func_0(((MR_Box) (HeadVar__1_65)), ((MR_Box) (HeadVar__2_66)), ((MR_Box) (Context_149)), ((MR_Box) (TypeCtor_152)), ((MR_Box) (TypeDefn0_147)), &conv2_TypeDefn_153, ((MR_Box) (HeadVar__5_142)), &conv1_HeadVar__6_143);
  TypeDefn_153 = ((MR_Word) (conv2_TypeDefn_153));
  *HeadVar__6_143 = ((MR_Word) (conv1_HeadVar__6_143));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_141 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_145));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_146));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_153));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_148));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_149));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_150));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_8_p_0(
  MR_Word InInt_9,
  MR_String EventName_10,
  MR_String FileName_11,
  MR_Integer LineNumber_12,
  MR_Word Attr0_13,
  MR_Word * Attr_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Integer AttrNum_16 = ((MR_Integer) ((MR_hl_field(0, Attr0_13, 0))));
  MR_String AttrName_17 = ((MR_String) ((MR_hl_field(0, Attr0_13, 1))));
  MR_Word AttrType0_18 = ((MR_Word) ((MR_hl_field(0, Attr0_13, 2))));
  MR_Word AttrMode0_19 = ((MR_Word) ((MR_hl_field(0, Attr0_13, 3))));
  MR_Word MaybeSynthCall_20 = ((MR_Word) ((MR_hl_field(0, Attr0_13, 4))));
  MR_Word Context_21;
  MR_Word ErrorContext_22;
  MR_Word AttrType_23;
  MR_Word AttrMode_24;
  MR_Word STATE_VARIABLE_Info_1_27;

  {
    Context_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Context_21, 0) = ((MR_Box) (FileName_11));
    MR_hl_field(0, Context_21, 1) = ((MR_Box) (LineNumber_12));
  }
  {
    ErrorContext_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_22, 0) = ((MR_Box) ((MR_Unsigned) 19U));
    MR_hl_field(3, ErrorContext_22, 1) = ((MR_Box) (Context_21));
    MR_hl_field(3, ErrorContext_22, 2) = ((MR_Box) (EventName_10));
    MR_hl_field(3, ErrorContext_22, 3) = ((MR_Box) (AttrName_17));
  }
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_9, ErrorContext_22, AttrType0_18, &AttrType_23, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_27);
  if (((MR_tag((MR_Word) AttrMode0_19)) == (MR_Integer) 0))
  {
    MR_Word InstA0_28 = ((MR_Word) ((MR_hl_field(0, AttrMode0_19, 0))));
    MR_Word InstB0_29 = ((MR_Word) ((MR_hl_field(0, AttrMode0_19, 1))));
    MR_Word InstA_30;
    MR_Word InstB_31;
    MR_Word STATE_VARIABLE_Info_1_38;

    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_9, ErrorContext_22, InstA0_28, &InstA_30, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_1_38);
    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_9, ErrorContext_22, InstB0_29, &InstB_31, STATE_VARIABLE_Info_1_38, STATE_VARIABLE_Info_26);
    {
      AttrMode_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AttrMode_24, 0) = ((MR_Box) (InstA_30));
      MR_hl_field(0, AttrMode_24, 1) = ((MR_Box) (InstB_31));
    }
  }
  else
  {
    MR_Word SymName0_32 = ((MR_Word) ((MR_hl_field(1, AttrMode0_19, 0))));
    MR_Word Insts0_33 = ((MR_Word) ((MR_hl_field(1, AttrMode0_19, 1))));
    MR_Word Insts_34;
    MR_Integer Arity_35;
    MR_Word Modes_36;
    MR_Word SymName_37;
    MR_Word STATE_VARIABLE_Info_3_39;
    MR_Word Var_41;

    parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(InInt_9, ErrorContext_22, Insts0_33, &Insts_34, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_3_39);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_34, &Arity_35);
    parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_39, &Modes_36);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (SymName0_32));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (Arity_35));
    }
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_9, ErrorContext_22, Modes_36, (MR_Integer) 2, Var_41, &SymName_37, STATE_VARIABLE_Info_3_39, STATE_VARIABLE_Info_26);
    {
      AttrMode_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, AttrMode_24, 0) = ((MR_Box) (SymName_37));
      MR_hl_field(1, AttrMode_24, 1) = ((MR_Box) (Insts_34));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Attr_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AttrNum_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (AttrName_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (AttrType_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (AttrMode_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeSynthCall_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mutable_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemMutable0_7,
  MR_Word * ItemMutable_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_String Name_10 = ((MR_String) ((MR_hl_field(0, ItemMutable0_7, 0))));
  MR_Word OrigType0_11 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 1))));
  MR_Word Type0_12 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 2))));
  MR_Word OrigInst0_13 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 3))));
  MR_Word Inst0_14 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 4))));
  MR_Word InitTerm_15 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 5))));
  MR_Word Attrs_16 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 6))));
  MR_Word Varset_17 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 7))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 8))));
  MR_Word SeqNum_19 = ((MR_Word) ((MR_hl_field(0, ItemMutable0_7, 9))));
  MR_Word ErrorContext_20;
  MR_Word OrigType_21;
  MR_Word Type_22;
  MR_Word OrigInst_23;
  MR_Word Inst_24;
  MR_Word STATE_VARIABLE_Info_1_27;
  MR_Word STATE_VARIABLE_Info_2_28;
  MR_Word STATE_VARIABLE_Info_3_29;

  {
    ErrorContext_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_20, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, ErrorContext_20, 1) = ((MR_Box) (Context_18));
    MR_hl_field(3, ErrorContext_20, 2) = ((MR_Box) (Name_10));
  }
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_6, ErrorContext_20, OrigType0_11, &OrigType_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_27);
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_6, ErrorContext_20, Type0_12, &Type_22, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_2_28);
  parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_6, ErrorContext_20, OrigInst0_13, &OrigInst_23, STATE_VARIABLE_Info_2_28, &STATE_VARIABLE_Info_3_29);
  parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_6, ErrorContext_20, Inst0_14, &Inst_24, STATE_VARIABLE_Info_3_29, STATE_VARIABLE_Info_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ItemMutable_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigType_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigInst_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (Inst_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (InitTerm_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Attrs_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Varset_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Context_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (SeqNum_19));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_5_p_0(
  MR_Word InInt_6,
  MR_Word Pragma0_7,
  MR_Word * Pragma_8,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  switch (MR_tag((MR_Word) Pragma0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_8 = Pragma0_7;
        *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo0_33 = (MR_Word) (MR_body((MR_Word) (Pragma0_7), (MR_Integer) 2));
        MR_Word Origin_34 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_33, 0))));
        MR_Word Lang_35 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo0_33, 1))) & (MR_Integer) 3);
        MR_Word PredNameModesPF0_36 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_33, 2))));
        MR_String CFunc_37 = ((MR_String) ((MR_hl_field(0, FPEInfo0_33, 3))));
        MR_Word VarSet_38 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_33, 4))));
        MR_Word PredOrFunc_39 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_36, 0))) & (MR_Integer) 1);
        MR_Word Name_40 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_36, 1))));
        MR_Word PredNameModesPF_41;
        MR_Word FPEInfo_42;
        MR_Word Context_67 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_33, 5))));
        MR_Word SeqNum_68 = ((MR_Word) ((MR_hl_field(0, FPEInfo0_33, 6))));
        MR_Word Modes0_69 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_36, 2))));
        MR_Word ErrorContext_70;
        MR_Word Modes_71;

        {
          ErrorContext_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, ErrorContext_70, 1) = ((MR_Box) (Context_67));
          MR_hl_field(3, ErrorContext_70, 2) = ((MR_Box) (Pragma0_7));
        }
        parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_70, Modes0_69, &Modes_71, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
        {
          PredNameModesPF_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredNameModesPF_41, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_39));
          MR_hl_field(0, PredNameModesPF_41, 1) = ((MR_Box) (Name_40));
          MR_hl_field(0, PredNameModesPF_41, 2) = ((MR_Box) (Modes_71));
        }
        {
          FPEInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FPEInfo_42, 0) = ((MR_Box) (Origin_34));
          MR_hl_field(0, FPEInfo_42, 1) = (MR_Box) ((MR_Unsigned) (Lang_35));
          MR_hl_field(0, FPEInfo_42, 2) = ((MR_Box) (PredNameModesPF_41));
          MR_hl_field(0, FPEInfo_42, 3) = ((MR_Box) (CFunc_37));
          MR_hl_field(0, FPEInfo_42, 4) = ((MR_Box) (VarSet_38));
          MR_hl_field(0, FPEInfo_42, 5) = ((MR_Box) (Context_67));
          MR_hl_field(0, FPEInfo_42, 6) = ((MR_Box) (SeqNum_68));
        }
        *Pragma_8 = (MR_Word) (MR_mkword(2, (MR_Word) (FPEInfo_42)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            *Pragma_8 = Pragma0_7;
            *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TabledInfo0_16 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word EvalMethod_17 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_16, 0))));
            MR_Word PredOrProcSpec0_18 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_16, 1))));
            MR_Word Attrs_19 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_16, 2))));
            MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_16, 3))));
            MR_Word SeqNum_21 = ((MR_Word) ((MR_hl_field(0, TabledInfo0_16, 4))));
            MR_Word PFUMM0_22 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec0_18, 0))));
            MR_Word PredSymName_23 = ((MR_Word) ((MR_hl_field(0, PredOrProcSpec0_18, 1))));
            MR_Word PFUMM_29;
            MR_Word PredOrProcSpec_31;
            MR_Word TabledInfo_32;

            switch (MR_tag((MR_Word) PFUMM0_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_24 = ((MR_Word) ((MR_hl_field(0, PFUMM0_22, 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_24)) == (MR_Integer) 1))
                  {
                    PFUMM_29 = PFUMM0_22;
                    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                  }
                  else
                  {
                    MR_Word Modes0_25 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_24, 0))));
                    MR_Word ErrorContext_26;
                    MR_Word Modes_27;
                    MR_Word ModesOrArity_28;

                    {
                      ErrorContext_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ErrorContext_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, ErrorContext_26, 1) = ((MR_Box) (Context_20));
                      MR_hl_field(3, ErrorContext_26, 2) = ((MR_Box) (Pragma0_7));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_26, Modes0_25, &Modes_27, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                    {
                      ModesOrArity_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_28, 0) = ((MR_Box) (Modes_27));
                    }
                    {
                      PFUMM_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFUMM_29, 0) = ((MR_Box) (ModesOrArity_28));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_59 = ((MR_Word) ((MR_hl_field(1, PFUMM0_22, 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_59)) == (MR_Integer) 1))
                  {
                    PFUMM_29 = PFUMM0_22;
                    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                  }
                  else
                  {
                    MR_Word Modes0_48 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_59, 0))));
                    MR_Word ErrorContext_49;
                    MR_Word Modes_50;
                    MR_Word ModesOrArity_51;

                    {
                      ErrorContext_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, ErrorContext_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, ErrorContext_49, 1) = ((MR_Box) (Context_20));
                      MR_hl_field(3, ErrorContext_49, 2) = ((MR_Box) (Pragma0_7));
                    }
                    parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_49, Modes0_48, &Modes_50, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                    {
                      ModesOrArity_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_51, 0) = ((MR_Box) (Modes_50));
                    }
                    {
                      PFUMM_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PFUMM_29, 0) = ((MR_Box) (ModesOrArity_51));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_29 = PFUMM0_22;
                  *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                }
                break;
            }
            {
              PredOrProcSpec_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredOrProcSpec_31, 0) = ((MR_Box) (PFUMM_29));
              MR_hl_field(0, PredOrProcSpec_31, 1) = ((MR_Box) (PredSymName_23));
            }
            {
              TabledInfo_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TabledInfo_32, 0) = ((MR_Box) (EvalMethod_17));
              MR_hl_field(0, TabledInfo_32, 1) = ((MR_Box) (PredOrProcSpec_31));
              MR_hl_field(0, TabledInfo_32, 2) = ((MR_Box) (Attrs_19));
              MR_hl_field(0, TabledInfo_32, 3) = ((MR_Box) (Context_20));
              MR_hl_field(0, TabledInfo_32, 4) = ((MR_Box) (SeqNum_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TabledInfo_32));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Subst_10;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  parse_tree__module_qual__qualify_items__qualify_type_subst_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Subst_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_2 = ((MR_Box) (conv1_Subst_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0(
  MR_Word InInt_6,
  MR_Word Pragma0_7,
  MR_Word * Pragma_8,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77)
{
  switch (MR_tag((MR_Word) Pragma0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Pragma_8 = Pragma0_7;
        *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecConstrInfo0_10 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 0))));
            MR_Word OoMConstraints0_12 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 1))));
            MR_Word ApplyToSupers_13 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 2))) & (MR_Integer) 1);
            MR_Word OoMSubsts0_14 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 3))));
            MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 4))));
            MR_Word Items_16 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 5))));
            MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 6))));
            MR_Word SeqNum_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstrInfo0_10, 7))));
            MR_Word ConstraintErrorContext_19;
            MR_Word HeadConstraint0_20;
            MR_Word TailConstraints0_21;
            MR_Word HeadConstraint_22;
            MR_Word TailConstraints_23;
            MR_Word OoMConstraints_24;
            MR_Word ErrorContext_25;
            MR_Word HeadSubst0_26;
            MR_Word TailSubsts0_27;
            MR_Word HeadSubst_28;
            MR_Word TailSubsts_29;
            MR_Word OoMSubsts_30;
            MR_Word TypeSpecConstrInfo_31;
            MR_Word STATE_VARIABLE_Info_1_78;
            MR_Word STATE_VARIABLE_Info_2_79;
            MR_Word STATE_VARIABLE_Info_3_80;
            MR_Word Var_81;
            MR_Box conv2_STATE_VARIABLE_Info_77;

            {
              ConstraintErrorContext_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstraintErrorContext_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, ConstraintErrorContext_19, 1) = ((MR_Box) (Context_17));
              MR_hl_field(3, ConstraintErrorContext_19, 2) = ((MR_Box) (ModuleName_11));
            }
            HeadConstraint0_20 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_12, 0))));
            TailConstraints0_21 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_12, 1))));
            parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_6_p_0(InInt_6, ConstraintErrorContext_19, HeadConstraint0_20, &HeadConstraint_22, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_1_78);
            parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_19, TailConstraints0_21, &TailConstraints_23, STATE_VARIABLE_Info_1_78, &STATE_VARIABLE_Info_2_79);
            {
              OoMConstraints_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMConstraints_24, 0) = ((MR_Box) (HeadConstraint_22));
              MR_hl_field(0, OoMConstraints_24, 1) = ((MR_Box) (TailConstraints_23));
            }
            {
              ErrorContext_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_25, 1) = ((MR_Box) (Context_17));
              MR_hl_field(3, ErrorContext_25, 2) = ((MR_Box) (Pragma0_7));
            }
            HeadSubst0_26 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_14, 0))));
            TailSubsts0_27 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_14, 1))));
            parse_tree__module_qual__qualify_items__qualify_type_subst_6_p_0(InInt_6, ErrorContext_25, HeadSubst0_26, &HeadSubst_28, STATE_VARIABLE_Info_2_79, &STATE_VARIABLE_Info_3_80);
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[2]));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0_1));
              MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_81, 3) = ((MR_Box) (InInt_6));
              MR_hl_field(0, Var_81, 4) = ((MR_Box) (ErrorContext_25));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[5]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_81, TailSubsts0_27, &TailSubsts_29, ((MR_Box) (STATE_VARIABLE_Info_3_80)), &conv2_STATE_VARIABLE_Info_77);
            *STATE_VARIABLE_Info_77 = ((MR_Word) (conv2_STATE_VARIABLE_Info_77));
            {
              OoMSubsts_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMSubsts_30, 0) = ((MR_Box) (HeadSubst_28));
              MR_hl_field(0, OoMSubsts_30, 1) = ((MR_Box) (TailSubsts_29));
            }
            {
              TypeSpecConstrInfo_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecConstrInfo_31, 0) = ((MR_Box) (ModuleName_11));
              MR_hl_field(0, TypeSpecConstrInfo_31, 1) = ((MR_Box) (OoMConstraints_24));
              MR_hl_field(0, TypeSpecConstrInfo_31, 2) = (MR_Box) ((MR_Unsigned) (ApplyToSupers_13));
              MR_hl_field(0, TypeSpecConstrInfo_31, 3) = ((MR_Box) (OoMSubsts_30));
              MR_hl_field(0, TypeSpecConstrInfo_31, 4) = ((MR_Box) (TVarSet_15));
              MR_hl_field(0, TypeSpecConstrInfo_31, 5) = ((MR_Box) (Items_16));
              MR_hl_field(0, TypeSpecConstrInfo_31, 6) = ((MR_Box) (Context_17));
              MR_hl_field(0, TypeSpecConstrInfo_31, 7) = ((MR_Box) (SeqNum_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecConstrInfo_31));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpecInfo0_32 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word PFUMM0_33 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 0))));
            MR_Word PredName_34 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 1))));
            MR_Word SpecPredName_35 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 2))));
            MR_Word Subst0_36 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 3))));
            MR_Word PFUMM_41;
            MR_Word Subst_43;
            MR_Word TypeSpecInfo_44;
            MR_Word STATE_VARIABLE_Info_5_83;
            MR_Word TVarSet_107 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 4))));
            MR_Word Items_108 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 5))));
            MR_Word Context_109 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 6))));
            MR_Word SeqNum_110 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_32, 7))));
            MR_Word ErrorContext_111;

            {
              ErrorContext_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_111, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_111, 1) = ((MR_Box) (Context_109));
              MR_hl_field(3, ErrorContext_111, 2) = ((MR_Box) (Pragma0_7));
            }
            switch (MR_tag((MR_Word) PFUMM0_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModesOrArity0_37 = ((MR_Word) ((MR_hl_field(0, PFUMM0_33, 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_37)) == (MR_Integer) 1))
                  {
                    PFUMM_41 = PFUMM0_33;
                    STATE_VARIABLE_Info_5_83 = STATE_VARIABLE_Info_0_76;
                  }
                  else
                  {
                    MR_Word Modes0_38 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_37, 0))));
                    MR_Word Modes_39;
                    MR_Word ModesOrArity_40;

                    parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_111, Modes0_38, &Modes_39, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_5_83);
                    {
                      ModesOrArity_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_40, 0) = ((MR_Box) (Modes_39));
                    }
                    {
                      PFUMM_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PFUMM_41, 0) = ((MR_Box) (ModesOrArity_40));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModesOrArity0_100 = ((MR_Word) ((MR_hl_field(1, PFUMM0_33, 0))));

                  if (((MR_tag((MR_Word) ModesOrArity0_100)) == (MR_Integer) 1))
                  {
                    PFUMM_41 = PFUMM0_33;
                    STATE_VARIABLE_Info_5_83 = STATE_VARIABLE_Info_0_76;
                  }
                  else
                  {
                    MR_Word Modes0_91 = ((MR_Word) ((MR_hl_field(0, ModesOrArity0_100, 0))));
                    MR_Word Modes_92;
                    MR_Word ModesOrArity_93;

                    parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_111, Modes0_91, &Modes_92, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_5_83);
                    {
                      ModesOrArity_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ModesOrArity_93, 0) = ((MR_Box) (Modes_92));
                    }
                    {
                      PFUMM_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, PFUMM_41, 0) = ((MR_Box) (ModesOrArity_93));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  PFUMM_41 = PFUMM0_33;
                  STATE_VARIABLE_Info_5_83 = STATE_VARIABLE_Info_0_76;
                }
                break;
            }
            parse_tree__module_qual__qualify_items__qualify_type_subst_6_p_0(InInt_6, ErrorContext_111, Subst0_36, &Subst_43, STATE_VARIABLE_Info_5_83, STATE_VARIABLE_Info_77);
            {
              TypeSpecInfo_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecInfo_44, 0) = ((MR_Box) (PFUMM_41));
              MR_hl_field(0, TypeSpecInfo_44, 1) = ((MR_Box) (PredName_34));
              MR_hl_field(0, TypeSpecInfo_44, 2) = ((MR_Box) (SpecPredName_35));
              MR_hl_field(0, TypeSpecInfo_44, 3) = ((MR_Box) (Subst_43));
              MR_hl_field(0, TypeSpecInfo_44, 4) = ((MR_Box) (TVarSet_107));
              MR_hl_field(0, TypeSpecInfo_44, 5) = ((MR_Box) (Items_108));
              MR_hl_field(0, TypeSpecInfo_44, 6) = ((MR_Box) (Context_109));
              MR_hl_field(0, TypeSpecInfo_44, 7) = ((MR_Box) (SeqNum_110));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecInfo_44));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OISUInfo0_45 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word TypeCtor0_46 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_45, 0))));
            MR_Word CreatorPreds_47 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_45, 1))));
            MR_Word MutatorPreds_48 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_45, 2))));
            MR_Word DestructorPreds_49 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_45, 3))));
            MR_Word TypeCtor_50;
            MR_Word OISUInfo_51;
            MR_Word Context_112 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_45, 4))));
            MR_Word SeqNum_113 = ((MR_Word) ((MR_hl_field(0, OISUInfo0_45, 5))));
            MR_Word ErrorContext_114;

            {
              ErrorContext_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_114, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_114, 1) = ((MR_Box) (Context_112));
              MR_hl_field(3, ErrorContext_114, 2) = ((MR_Box) (Pragma0_7));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_6_p_0(InInt_6, ErrorContext_114, TypeCtor0_46, &TypeCtor_50, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            {
              OISUInfo_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OISUInfo_51, 0) = ((MR_Box) (TypeCtor_50));
              MR_hl_field(0, OISUInfo_51, 1) = ((MR_Box) (CreatorPreds_47));
              MR_hl_field(0, OISUInfo_51, 2) = ((MR_Box) (MutatorPreds_48));
              MR_hl_field(0, OISUInfo_51, 3) = ((MR_Box) (DestructorPreds_49));
              MR_hl_field(0, OISUInfo_51, 4) = ((MR_Box) (Context_112));
              MR_hl_field(0, OISUInfo_51, 5) = ((MR_Box) (SeqNum_113));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (OISUInfo_51));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermInfo0_52 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word PredNameModesPF0_53 = ((MR_Word) ((MR_hl_field(0, TermInfo0_52, 0))));
            MR_Word Args_54 = ((MR_Word) ((MR_hl_field(0, TermInfo0_52, 1))));
            MR_Word Term_55 = ((MR_Word) ((MR_hl_field(0, TermInfo0_52, 2))));
            MR_Word PredOrFunc_56 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_53, 0))) & (MR_Integer) 1);
            MR_Word SymName_57 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_53, 1))));
            MR_Word PredNameModesPF_58;
            MR_Word TermInfo_59;
            MR_Word Context_115 = ((MR_Word) ((MR_hl_field(0, TermInfo0_52, 3))));
            MR_Word SeqNum_116 = ((MR_Word) ((MR_hl_field(0, TermInfo0_52, 4))));
            MR_Word ErrorContext_117;
            MR_Word Modes0_118 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_53, 2))));
            MR_Word Modes_119;

            {
              ErrorContext_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_117, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_117, 1) = ((MR_Box) (Context_115));
              MR_hl_field(3, ErrorContext_117, 2) = ((MR_Box) (Pragma0_7));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_117, Modes0_118, &Modes_119, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            {
              PredNameModesPF_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_58, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_56));
              MR_hl_field(0, PredNameModesPF_58, 1) = ((MR_Box) (SymName_57));
              MR_hl_field(0, PredNameModesPF_58, 2) = ((MR_Box) (Modes_119));
            }
            {
              TermInfo_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TermInfo_59, 0) = ((MR_Box) (PredNameModesPF_58));
              MR_hl_field(0, TermInfo_59, 1) = ((MR_Box) (Args_54));
              MR_hl_field(0, TermInfo_59, 2) = ((MR_Box) (Term_55));
              MR_hl_field(0, TermInfo_59, 3) = ((MR_Box) (Context_115));
              MR_hl_field(0, TermInfo_59, 4) = ((MR_Box) (SeqNum_116));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TermInfo_59));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Term2Info0_60 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word SuccessArgs_61 = ((MR_Word) ((MR_hl_field(0, Term2Info0_60, 1))));
            MR_Word FailureArgs_62 = ((MR_Word) ((MR_hl_field(0, Term2Info0_60, 2))));
            MR_Word Term2Info_63;
            MR_Word Context_120 = ((MR_Word) ((MR_hl_field(0, Term2Info0_60, 4))));
            MR_Word SeqNum_121 = ((MR_Word) ((MR_hl_field(0, Term2Info0_60, 5))));
            MR_Word ErrorContext_122;
            MR_Word Modes0_123;
            MR_Word Modes_124;
            MR_Word PredNameModesPF0_125 = ((MR_Word) ((MR_hl_field(0, Term2Info0_60, 0))));
            MR_Word Term_126 = ((MR_Word) ((MR_hl_field(0, Term2Info0_60, 3))));
            MR_Word PredOrFunc_127 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_125, 0))) & (MR_Integer) 1);
            MR_Word SymName_128 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_125, 1))));
            MR_Word PredNameModesPF_129;

            Modes0_123 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_125, 2))));
            {
              ErrorContext_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_122, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_122, 1) = ((MR_Box) (Context_120));
              MR_hl_field(3, ErrorContext_122, 2) = ((MR_Box) (Pragma0_7));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_122, Modes0_123, &Modes_124, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            {
              PredNameModesPF_129 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_129, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_127));
              MR_hl_field(0, PredNameModesPF_129, 1) = ((MR_Box) (SymName_128));
              MR_hl_field(0, PredNameModesPF_129, 2) = ((MR_Box) (Modes_124));
            }
            {
              Term2Info_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Term2Info_63, 0) = ((MR_Box) (PredNameModesPF_129));
              MR_hl_field(0, Term2Info_63, 1) = ((MR_Box) (SuccessArgs_61));
              MR_hl_field(0, Term2Info_63, 2) = ((MR_Box) (FailureArgs_62));
              MR_hl_field(0, Term2Info_63, 3) = ((MR_Box) (Term_126));
              MR_hl_field(0, Term2Info_63, 4) = ((MR_Box) (Context_120));
              MR_hl_field(0, Term2Info_63, 5) = ((MR_Box) (SeqNum_121));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Term2Info_63));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SharingInfo0_64 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word HeadVars_65 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 1))));
            MR_Word HeadVarTypes_66 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 2))));
            MR_Word VarSet_67 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 3))));
            MR_Word MaybeSharing_68 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 5))));
            MR_Word SharingInfo_69;
            MR_Word TVarSet_130 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 4))));
            MR_Word Context_131 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 6))));
            MR_Word SeqNum_132 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 7))));
            MR_Word ErrorContext_133;
            MR_Word Modes0_134;
            MR_Word Modes_135;
            MR_Word PredNameModesPF0_136 = ((MR_Word) ((MR_hl_field(0, SharingInfo0_64, 0))));
            MR_Word PredOrFunc_137 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_136, 0))) & (MR_Integer) 1);
            MR_Word SymName_138 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_136, 1))));
            MR_Word PredNameModesPF_139;

            Modes0_134 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_136, 2))));
            {
              ErrorContext_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_133, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_133, 1) = ((MR_Box) (Context_131));
              MR_hl_field(3, ErrorContext_133, 2) = ((MR_Box) (Pragma0_7));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_133, Modes0_134, &Modes_135, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            {
              PredNameModesPF_139 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_139, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_137));
              MR_hl_field(0, PredNameModesPF_139, 1) = ((MR_Box) (SymName_138));
              MR_hl_field(0, PredNameModesPF_139, 2) = ((MR_Box) (Modes_135));
            }
            {
              SharingInfo_69 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SharingInfo_69, 0) = ((MR_Box) (PredNameModesPF_139));
              MR_hl_field(0, SharingInfo_69, 1) = ((MR_Box) (HeadVars_65));
              MR_hl_field(0, SharingInfo_69, 2) = ((MR_Box) (HeadVarTypes_66));
              MR_hl_field(0, SharingInfo_69, 3) = ((MR_Box) (VarSet_67));
              MR_hl_field(0, SharingInfo_69, 4) = ((MR_Box) (TVarSet_130));
              MR_hl_field(0, SharingInfo_69, 5) = ((MR_Box) (MaybeSharing_68));
              MR_hl_field(0, SharingInfo_69, 6) = ((MR_Box) (Context_131));
              MR_hl_field(0, SharingInfo_69, 7) = ((MR_Box) (SeqNum_132));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SharingInfo_69));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ReuseInfo0_70 = ((MR_Word) ((MR_hl_field(3, Pragma0_7, 1))));
            MR_Word MaybeReuse_71 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 5))));
            MR_Word ReuseInfo_72;
            MR_Word TVarSet_140 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 4))));
            MR_Word Context_141 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 6))));
            MR_Word SeqNum_142 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 7))));
            MR_Word ErrorContext_143;
            MR_Word Modes0_144;
            MR_Word Modes_145;
            MR_Word PredNameModesPF0_146 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 0))));
            MR_Word PredOrFunc_147 = ((MR_Unsigned) ((MR_hl_field(0, PredNameModesPF0_146, 0))) & (MR_Integer) 1);
            MR_Word SymName_148 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_146, 1))));
            MR_Word PredNameModesPF_149;
            MR_Word HeadVars_150 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 1))));
            MR_Word HeadVarTypes_151 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 2))));
            MR_Word VarSet_152 = ((MR_Word) ((MR_hl_field(0, ReuseInfo0_70, 3))));

            Modes0_144 = ((MR_Word) ((MR_hl_field(0, PredNameModesPF0_146, 2))));
            {
              ErrorContext_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_143, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ErrorContext_143, 1) = ((MR_Box) (Context_141));
              MR_hl_field(3, ErrorContext_143, 2) = ((MR_Box) (Pragma0_7));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_143, Modes0_144, &Modes_145, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77);
            {
              PredNameModesPF_149 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_149, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_147));
              MR_hl_field(0, PredNameModesPF_149, 1) = ((MR_Box) (SymName_148));
              MR_hl_field(0, PredNameModesPF_149, 2) = ((MR_Box) (Modes_145));
            }
            {
              ReuseInfo_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReuseInfo_72, 0) = ((MR_Box) (PredNameModesPF_149));
              MR_hl_field(0, ReuseInfo_72, 1) = ((MR_Box) (HeadVars_150));
              MR_hl_field(0, ReuseInfo_72, 2) = ((MR_Box) (HeadVarTypes_151));
              MR_hl_field(0, ReuseInfo_72, 3) = ((MR_Box) (VarSet_152));
              MR_hl_field(0, ReuseInfo_72, 4) = ((MR_Box) (TVarSet_140));
              MR_hl_field(0, ReuseInfo_72, 5) = ((MR_Box) (MaybeReuse_71));
              MR_hl_field(0, ReuseInfo_72, 6) = ((MR_Box) (Context_141));
              MR_hl_field(0, ReuseInfo_72, 7) = ((MR_Box) (SeqNum_142));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ReuseInfo_72));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_subst_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Subst0_9,
  MR_Word * Subst_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word HeadSubst0_12 = ((MR_Word) ((MR_hl_field(0, Subst0_9, 0))));
  MR_Word TailSubsts0_13 = ((MR_Word) ((MR_hl_field(0, Subst0_9, 1))));
  MR_Word HeadSubst_14;
  MR_Word TailSubsts_15;

  parse_tree__module_qual__qualify_items__qualify_tvar_substs_8_p_0(InInt_7, ErrorContext_8, HeadSubst0_12, &HeadSubst_14, TailSubsts0_13, &TailSubsts_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Subst_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadSubst_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailSubsts_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_tvar_substs_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HeadSubst0_11,
  MR_Word * HeadSubst_12,
  MR_Word TailSubsts0_13,
  MR_Word * TailSubsts_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_11, 0))));
  MR_Word Type0_17 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_11, 1))));
  MR_Word Type_18;
  MR_Word STATE_VARIABLE_Info_1_25;

  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_9, ErrorContext_10, Type0_17, &Type_18, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadSubst_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Type_18));
  }
  if ((TailSubsts0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailSubsts_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_25;
  }
  else
  {
    MR_Word HeadTailSubst0_19 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_13, 0))));
    MR_Word TailTailSubsts0_20 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_13, 1))));
    MR_Word * AddrTailTailSubsts_26;
    MR_Word * AddrHeadTailSubst_27;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailSubsts_14 = base;
      MR_hl_field(1, base, 0) = NULL;
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrHeadTailSubst_27 = (MR_Word *) (&(MR_hl_field(1, *TailSubsts_14, 0)));
    AddrTailTailSubsts_26 = (MR_Word *) (&(MR_hl_field(1, *TailSubsts_14, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_tvar_substs__1_8_p_0(InInt_9, ErrorContext_10, HeadTailSubst0_19, AddrHeadTailSubst_27, TailTailSubsts0_20, AddrTailTailSubsts_26, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_tvar_substs__1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HeadSubst0_11,
  MR_Word * AddrOfHeadSubst_28,
  MR_Word TailSubsts0_13,
  MR_Word * AddrOfTailSubsts_29,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  while (MR_TRUE)
  {
    MR_Word HeadSubst_12;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_11, 0))));
    MR_Word Type0_17 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_11, 1))));
    MR_Word Type_18;
    MR_Word STATE_VARIABLE_Info_1_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_9, ErrorContext_10, Type0_17, &Type_18, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_25);
    {
      HeadSubst_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadSubst_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, HeadSubst_12, 1) = ((MR_Box) (Type_18));
    }
    *AddrOfHeadSubst_28 = HeadSubst_12;
    if ((TailSubsts0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfTailSubsts_29 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_25;
    }
    else
    {
      MR_Word HeadTailSubst0_19 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_13, 0))));
      MR_Word TailTailSubsts0_20 = ((MR_Word) ((MR_hl_field(1, TailSubsts0_13, 1))));
      MR_Word * AddrTailTailSubsts_26;
      MR_Word * AddrHeadTailSubst_27;
      MR_Word TailSubsts_30;
      MR_Word next_value_of_HeadSubst0_11;
      MR_Word * next_value_of_AddrOfHeadSubst_28;
      MR_Word next_value_of_TailSubsts0_13;
      MR_Word * next_value_of_AddrOfTailSubsts_29;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_23;

      {
        TailSubsts_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TailSubsts_30, 0) = NULL;
        MR_hl_field(1, TailSubsts_30, 1) = NULL;
      }
      AddrHeadTailSubst_27 = (MR_Word *) (&(MR_hl_field(1, TailSubsts_30, 0)));
      AddrTailTailSubsts_26 = (MR_Word *) (&(MR_hl_field(1, TailSubsts_30, 1)));
      *AddrOfTailSubsts_29 = TailSubsts_30;
      // direct tailcall eliminated
      ;
      next_value_of_HeadSubst0_11 = HeadTailSubst0_19;
      next_value_of_AddrOfHeadSubst_28 = AddrHeadTailSubst_27;
      next_value_of_TailSubsts0_13 = TailTailSubsts0_20;
      next_value_of_AddrOfTailSubsts_29 = AddrTailTailSubsts_26;
      next_value_of_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_1_25;
      HeadSubst0_11 = next_value_of_HeadSubst0_11;
      AddrOfHeadSubst_28 = next_value_of_AddrOfHeadSubst_28;
      TailSubsts0_13 = next_value_of_TailSubsts0_13;
      AddrOfTailSubsts_29 = next_value_of_AddrOfTailSubsts_29;
      STATE_VARIABLE_Info_0_23 = next_value_of_STATE_VARIABLE_Info_0_23;
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
  MR_Word MethodName0_7 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_5, 0))));
  MR_Word InstanceProcDef_8 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_5, 1))));
  MR_Word DeclContext_9 = ((MR_Word) ((MR_hl_field(0, InstanceMethod0_5, 2))));
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, MethodName0_7, 0))) & (MR_Integer) 1);
  MR_Word MethodSymName0_11 = ((MR_Word) ((MR_hl_field(0, MethodName0_7, 1))));
  MR_Word UserArity_12 = ((MR_Word) ((MR_hl_field(0, MethodName0_7, 2))));
  MR_Word MethodSymName_14;
  MR_Word MethodName_17;

  if (((MR_tag((MR_Word) MethodSymName0_11)) == (MR_Integer) 1))
  {
    MR_Word MethodModuleName_15 = ((MR_Word) ((MR_hl_field(1, MethodSymName0_11, 0))));
    MR_String MethodBaseName_16 = ((MR_String) ((MR_hl_field(1, MethodSymName0_11, 1))));

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
    MR_String Name_13 = ((MR_String) ((MR_hl_field(0, MethodSymName0_11, 0))));

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
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_6_p_0(
  MR_Word InInt_7,
  MR_Word ContainingErrorContext_8,
  MR_Word Constraint0_9,
  MR_Word * Constraint_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word ClassName0_12 = ((MR_Word) ((MR_hl_field(0, Constraint0_9, 0))));
  MR_Word Types0_13 = ((MR_Word) ((MR_hl_field(0, Constraint0_9, 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, Constraint0_9, 2))));
  MR_Integer Arity_15;
  MR_Word OutsideContext_16;
  MR_Word ClassName_17;
  MR_Word ErrorContext_18;
  MR_Word Types_19;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_Info_1_23;
  MR_Word ClassIdSet_25;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Types0_13, &Arity_15);
  {
    OutsideContext_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OutsideContext_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, OutsideContext_16, 1) = ((MR_Box) (ContainingErrorContext_8));
  }
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (ClassName0_12));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (Arity_15));
  }
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_20, &ClassIdSet_25);
  parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, OutsideContext_16, ClassIdSet_25, (MR_Integer) 3, Var_22, &ClassName_17, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_1_23);
  {
    ErrorContext_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ErrorContext_18, 1) = ((MR_Box) (ClassName0_12));
    MR_hl_field(3, ErrorContext_18, 2) = ((MR_Box) (Arity_15));
    MR_hl_field(3, ErrorContext_18, 3) = ((MR_Box) (ContainingErrorContext_8));
  }
  parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_6_p_0(InInt_7, ErrorContext_18, Types0_13, &Types_19, STATE_VARIABLE_Info_1_23, STATE_VARIABLE_Info_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_14));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_constraint_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Constraint_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word ClassName0_22 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 0))));
    MR_Word Types0_23 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 1))));
    MR_Word Context_24 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 2))));
    MR_Integer Arity_25;
    MR_Word OutsideContext_26;
    MR_Word ClassName_27;
    MR_Word ErrorContext_28;
    MR_Word Types_29;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Info_1_31;
    MR_Word ClassIdSet_33;
    MR_Word * AddrConstraints_35;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Types0_23, &Arity_25);
    {
      OutsideContext_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, OutsideContext_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, OutsideContext_26, 1) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (ClassName0_22));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (Arity_25));
    }
    parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_33);
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, OutsideContext_26, ClassIdSet_33, (MR_Integer) 3, Var_30, &ClassName_27, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_31);
    {
      ErrorContext_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ErrorContext_28, 1) = ((MR_Box) (ClassName0_22));
      MR_hl_field(3, ErrorContext_28, 2) = ((MR_Box) (Arity_25));
      MR_hl_field(3, ErrorContext_28, 3) = ((MR_Box) (HeadVar__2_2));
    }
    parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_6_p_0(HeadVar__1_1, ErrorContext_28, Types0_23, &Types_29, STATE_VARIABLE_Info_1_31, &STATE_VARIABLE_Info_1_21);
    {
      Constraint_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Constraint_16, 0) = ((MR_Box) (ClassName_27));
      MR_hl_field(0, Constraint_16, 1) = ((MR_Box) (Types_29));
      MR_hl_field(0, Constraint_16, 2) = ((MR_Box) (Context_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Constraint_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrConstraints_35 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_constraint_list__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Constraints0_15, AddrConstraints_35, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_constraint_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_36,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_36 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Constraint_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word ClassName0_22 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 0))));
      MR_Word Types0_23 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 1))));
      MR_Word Context_24 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 2))));
      MR_Integer Arity_25;
      MR_Word OutsideContext_26;
      MR_Word ClassName_27;
      MR_Word ErrorContext_28;
      MR_Word Types_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_Info_1_31;
      MR_Word ClassIdSet_33;
      MR_Word * AddrConstraints_35;
      MR_Word HeadVar__4_37;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_36;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), Types0_23, &Arity_25);
      {
        OutsideContext_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OutsideContext_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, OutsideContext_26, 1) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (ClassName0_22));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (Arity_25));
      }
      parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_33);
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, OutsideContext_26, ClassIdSet_33, (MR_Integer) 3, Var_30, &ClassName_27, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_31);
      {
        ErrorContext_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ErrorContext_28, 1) = ((MR_Box) (ClassName0_22));
        MR_hl_field(3, ErrorContext_28, 2) = ((MR_Box) (Arity_25));
        MR_hl_field(3, ErrorContext_28, 3) = ((MR_Box) (HeadVar__2_2));
      }
      parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_6_p_0(HeadVar__1_1, ErrorContext_28, Types0_23, &Types_29, STATE_VARIABLE_Info_1_31, &STATE_VARIABLE_Info_1_21);
      {
        Constraint_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraint_16, 0) = ((MR_Box) (ClassName_27));
        MR_hl_field(0, Constraint_16, 1) = ((MR_Box) (Types_29));
        MR_hl_field(0, Constraint_16, 2) = ((MR_Box) (Context_24));
      }
      {
        HeadVar__4_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_37, 0) = ((MR_Box) (Constraint_16));
        MR_hl_field(1, HeadVar__4_37, 1) = NULL;
      }
      AddrConstraints_35 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_37, 1)));
      *AddrOfHeadVar__4_36 = HeadVar__4_37;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints0_15;
      next_value_of_AddrOfHeadVar__4_36 = AddrConstraints_35;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_36 = next_value_of_AddrOfHeadVar__4_36;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_var_or_ground_type_list_6_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Arg0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Arg_16;
    MR_Word STATE_VARIABLE_Info_1_27;
    MR_Word * AddrArgs_30;

    if (((MR_tag((MR_Word) Arg0_14)) == (MR_Integer) 1))
    {
      MR_Word GroundType0_21 = ((MR_Word) ((MR_hl_field(1, Arg0_14, 0))));
      MR_Word Type0_22 = (MR_Word) (GroundType0_21);
      MR_Word Type_23;
      MR_Word GroundType_24;

      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_1, ErrorContext_2, Type0_22, &Type_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_27);
      succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_23, &GroundType_24);
      if (succeeded)
        {
          Arg_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Arg_16, 0) = ((MR_Box) (GroundType_24));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_var_or_ground_type_list\'/6", (MR_String) "qualified ground type is not ground");
          return;
        }
    }
    else
    {
      Arg_16 = Arg0_14;
      STATE_VARIABLE_Info_1_27 = STATE_VARIABLE_Info_0_5;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrArgs_30 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_type_list__1_6_p_0(InInt_1, ErrorContext_2, Args0_15, AddrArgs_30, STATE_VARIABLE_Info_1_27, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_var_or_ground_type_list__1_6_p_0(
  MR_Word InInt_1,
  MR_Word ErrorContext_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_31,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_31 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Arg0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Arg_16;
      MR_Word STATE_VARIABLE_Info_1_27;
      MR_Word * AddrArgs_30;
      MR_Word HeadVar__4_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_31;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      if (((MR_tag((MR_Word) Arg0_14)) == (MR_Integer) 1))
      {
        MR_Word GroundType0_21 = ((MR_Word) ((MR_hl_field(1, Arg0_14, 0))));
        MR_Word Type0_22 = (MR_Word) (GroundType0_21);
        MR_Word Type_23;
        MR_Word GroundType_24;

        parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_1, ErrorContext_2, Type0_22, &Type_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_27);
        succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_23, &GroundType_24);
        if (succeeded)
          {
            Arg_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Arg_16, 0) = ((MR_Box) (GroundType_24));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_var_or_ground_type_list\'/6", (MR_String) "qualified ground type is not ground");
            return;
          }
      }
      else
      {
        Arg_16 = Arg0_14;
        STATE_VARIABLE_Info_1_27 = STATE_VARIABLE_Info_0_5;
      }
      {
        HeadVar__4_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_32, 0) = ((MR_Box) (Arg_16));
        MR_hl_field(1, HeadVar__4_32, 1) = NULL;
      }
      AddrArgs_30 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_32, 1)));
      *AddrOfHeadVar__4_31 = HeadVar__4_32;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Args0_15;
      next_value_of_AddrOfHeadVar__4_31 = AddrArgs_30;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_31 = next_value_of_AddrOfHeadVar__4_31;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word TypeCtor0_9,
  MR_Word * TypeCtor_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_9, 0))));
  MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_9, 1))));
  MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_9, 0))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_9, 1))));

  succeeded = (Var_21 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_20);
  if (succeeded)
  {
    *TypeCtor_10 = TypeCtor0_9;
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
  else
  {
    MR_Word TypeCtorId0_14;
    MR_Word Types_15;
    MR_Word SymName_16;

    {
      TypeCtorId0_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtorId0_14, 0) = ((MR_Box) (SymName0_12));
      MR_hl_field(0, TypeCtorId0_14, 1) = ((MR_Box) (Arity_13));
    }
    parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_17, &Types_15);
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, ErrorContext_8, Types_15, (MR_Integer) 0, TypeCtorId0_14, &SymName_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtor_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SymName_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Arity_13));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InInt_8,
  MR_Word ItemTypeRepnInfo0_9,
  MR_Word * ItemTypeRepnInfo_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Word TypeCtorSymName0_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_9, 0))));
  MR_Word ArgTVars_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_9, 1))));
  MR_Word RepInfo0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_9, 2))));
  MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_9, 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_9, 4))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepnInfo0_9, 5))));
  MR_String TypeCtorName_19;
  MR_Word TypeCtorSymName_20;
  MR_Word RepInfo_23;

  if (((MR_tag((MR_Word) TypeCtorSymName0_12)) == (MR_Integer) 1))
    TypeCtorName_19 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName0_12, 1))));
  else
    TypeCtorName_19 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName0_12, 0))));
  {
    TypeCtorSymName_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeCtorSymName_20, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(1, TypeCtorSymName_20, 1) = ((MR_Box) (TypeCtorName_19));
  }
  switch (MR_tag((MR_Word) RepInfo0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        RepInfo_23 = RepInfo0_14;
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word EqvType0_24 = ((MR_Word) ((MR_hl_field(1, RepInfo0_14, 0))));
        MR_Integer TypeCtorArity_25;
        MR_Word TypeCtor_26;
        MR_Word ErrorContext_27;
        MR_Word EqvType_28;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), ArgTVars_13, &TypeCtorArity_25);
        {
          TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_26, 0) = ((MR_Box) (TypeCtorSymName_20));
          MR_hl_field(0, TypeCtor_26, 1) = ((MR_Box) (TypeCtorArity_25));
        }
        {
          ErrorContext_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_27, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, ErrorContext_27, 1) = ((MR_Box) (Context_16));
          MR_hl_field(3, ErrorContext_27, 2) = ((MR_Box) (TypeCtor_26));
        }
        parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_8, ErrorContext_27, EqvType0_24, &EqvType_28, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
        {
          RepInfo_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RepInfo_23, 0) = ((MR_Box) (EqvType_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor0_29 = ((MR_Word) ((MR_hl_field(2, RepInfo0_14, 0))));
        MR_Word SuperTypeCtor_30;
        MR_Integer TypeCtorArity_35;
        MR_Word TypeCtor_36;
        MR_Word ErrorContext_37;
        MR_Word SymName0_40;
        MR_Integer Arity_41;
        MR_Word SymName_46;
        MR_Integer Var_47;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), ArgTVars_13, &TypeCtorArity_35);
        {
          TypeCtor_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_36, 0) = ((MR_Box) (TypeCtorSymName_20));
          MR_hl_field(0, TypeCtor_36, 1) = ((MR_Box) (TypeCtorArity_35));
        }
        {
          ErrorContext_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_37, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, ErrorContext_37, 1) = ((MR_Box) (Context_16));
          MR_hl_field(3, ErrorContext_37, 2) = ((MR_Box) (TypeCtor_36));
        }
        SymName0_40 = ((MR_Word) ((MR_hl_field(0, SuperTypeCtor0_29, 0))));
        Arity_41 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor0_29, 1))));
        SymName_46 = ((MR_Word) ((MR_hl_field(0, SuperTypeCtor0_29, 0))));
        Var_47 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor0_29, 1))));
        succeeded = (Var_47 == (MR_Integer) 0);
        if (succeeded)
          succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_46);
        if (succeeded)
        {
          SuperTypeCtor_30 = SuperTypeCtor0_29;
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
        }
        else
        {
          MR_Word TypeCtorId0_42;
          MR_Word Types_43;
          MR_Word SymName_44;

          {
            TypeCtorId0_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorId0_42, 0) = ((MR_Box) (SymName0_40));
            MR_hl_field(0, TypeCtorId0_42, 1) = ((MR_Box) (Arity_41));
          }
          parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_31, &Types_43);
          parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_8, ErrorContext_37, Types_43, (MR_Integer) 0, TypeCtorId0_42, &SymName_44, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
          {
            SuperTypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SuperTypeCtor_30, 0) = ((MR_Box) (SymName_44));
            MR_hl_field(0, SuperTypeCtor_30, 1) = ((MR_Box) (Arity_41));
          }
        }
        {
          RepInfo_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RepInfo_23, 0) = ((MR_Box) (SuperTypeCtor_30));
        }
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeRepnInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeCtorSymName_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTVars_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (RepInfo_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemFEE0_7,
  MR_Word * ItemFEE_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemFEE0_7, 0))) & (MR_Integer) 3);
  MR_Word TypeCtor0_11 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_7, 1))));
  MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_7, 2))));
  MR_Word Overrides_13 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_7, 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_7, 4))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(0, ItemFEE0_7, 5))));
  MR_Word ErrorContext_16;
  MR_Word OldUndefBlocking_17;
  MR_Word TypeCtor_18;
  MR_Word STATE_VARIABLE_Info_1_22;
  MR_Word STATE_VARIABLE_Info_2_23;
  MR_Word SymName0_24;
  MR_Integer Arity_25;
  MR_Word SymName_30;
  MR_Integer Var_31;

  {
    ErrorContext_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, ErrorContext_16, 1) = ((MR_Box) (Context_14));
  }
  parse_tree__module_qual__mq_info__mq_info_get_is_undef_blocking_2_p_0(STATE_VARIABLE_Info_0_19, &OldUndefBlocking_17);
  parse_tree__module_qual__mq_info__mq_info_set_is_undef_blocking_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_22);
  SymName0_24 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, 0))));
  Arity_25 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_11, 1))));
  SymName_30 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, 0))));
  Var_31 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_11, 1))));
  succeeded = (Var_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_30);
  if (succeeded)
  {
    TypeCtor_18 = TypeCtor0_11;
    STATE_VARIABLE_Info_2_23 = STATE_VARIABLE_Info_1_22;
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
    parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_1_22, &Types_27);
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_6, ErrorContext_16, Types_27, (MR_Integer) 0, TypeCtorId0_26, &SymName_28, STATE_VARIABLE_Info_1_22, &STATE_VARIABLE_Info_2_23);
    {
      TypeCtor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_18, 0) = ((MR_Box) (SymName_28));
      MR_hl_field(0, TypeCtor_18, 1) = ((MR_Box) (Arity_25));
    }
  }
  parse_tree__module_qual__mq_info__mq_info_set_is_undef_blocking_3_p_0(OldUndefBlocking_17, STATE_VARIABLE_Info_2_23, STATE_VARIABLE_Info_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemFEE_8 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeCtor_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (Attributes_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Overrides_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemForeignEnum0_7,
  MR_Word * ItemForeignEnum_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum0_7, 0))) & (MR_Integer) 3);
  MR_Word TypeCtor0_11 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_7, 1))));
  MR_Word Values_12 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_7, 2))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_7, 3))));
  MR_Word SeqNum_14 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum0_7, 4))));
  MR_Word ErrorContext_15;
  MR_Word TypeCtor_16;
  MR_Word SymName0_19;
  MR_Integer Arity_20;
  MR_Word SymName_25;
  MR_Integer Var_26;

  {
    ErrorContext_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ErrorContext_15, 1) = ((MR_Box) (Context_13));
  }
  SymName0_19 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, 0))));
  Arity_20 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_11, 1))));
  SymName_25 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, 0))));
  Var_26 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_11, 1))));
  succeeded = (Var_26 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_25);
  if (succeeded)
  {
    TypeCtor_16 = TypeCtor0_11;
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
  else
  {
    MR_Word TypeCtorId0_21;
    MR_Word Types_22;
    MR_Word SymName_23;

    {
      TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtorId0_21, 0) = ((MR_Box) (SymName0_19));
      MR_hl_field(0, TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
    }
    parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_17, &Types_22);
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_6, ErrorContext_15, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    {
      TypeCtor_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_16, 0) = ((MR_Box) (SymName_23));
      MR_hl_field(0, TypeCtor_16, 1) = ((MR_Box) (Arity_20));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *ItemForeignEnum_8 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeCtor_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Values_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (SeqNum_14));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_foreign_proc_5_p_0(
  MR_Word InInt_6,
  MR_Word FPInfo0_7,
  MR_Word * FPInfo_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word Attrs0_10 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 0))));
  MR_Word Name_11 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 1))));
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo0_7, 2))) & (MR_Integer) 1);
  MR_Word Vars0_13 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 3))));
  MR_Word Varset_14 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 4))));
  MR_Word InstVarset_15 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 5))));
  MR_Word Impl_16 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 6))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 7))));
  MR_Word SeqNum_18 = ((MR_Word) ((MR_hl_field(0, FPInfo0_7, 8))));
  MR_Word ErrorContext_19;
  MR_Word Vars_20;
  MR_Word UserSharing0_21;
  MR_Word UserSharing_22;
  MR_Word Attrs_23;
  MR_Word STATE_VARIABLE_Info_1_26;

  {
    ErrorContext_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ErrorContext_19, 1) = ((MR_Box) (Context_17));
  }
  parse_tree__module_qual__qualify_items__qualify_pragma_vars_6_p_0(InInt_6, ErrorContext_19, Vars0_13, &Vars_20, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_26);
  UserSharing0_21 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_10);
  if ((UserSharing0_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    UserSharing_22 = UserSharing0_21;
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_26;
  }
  else
  {
    MR_Word Sharing_27 = ((MR_Word) ((MR_hl_field(1, UserSharing0_21, 0))));
    MR_Word MaybeTypes0_28 = ((MR_Word) ((MR_hl_field(1, UserSharing0_21, 1))));

    if ((MaybeTypes0_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      UserSharing_22 = UserSharing0_21;
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_26;
    }
    else
    {
      MR_Word Types0_29;
      MR_Word TVarset_30;
      MR_Word Types_31;
      MR_Word MaybeTypes_32;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, MaybeTypes0_28, 0))));
      MR_Word Var_34;

      Types0_29 = ((MR_Word) ((MR_hl_field(0, Var_33, 0))));
      TVarset_30 = ((MR_Word) ((MR_hl_field(0, Var_33, 1))));
      parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_6, ErrorContext_19, Types0_29, &Types_31, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_25);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (Types_31));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (TVarset_30));
      }
      {
        MaybeTypes_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTypes_32, 0) = ((MR_Box) (Var_34));
      }
      {
        UserSharing_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UserSharing_22, 0) = ((MR_Box) (Sharing_27));
        MR_hl_field(1, UserSharing_22, 1) = ((MR_Box) (MaybeTypes_32));
      }
    }
  }
  parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_22, Attrs0_10, &Attrs_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *FPInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Attrs_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Name_11));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Vars_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (Varset_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstVarset_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Impl_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word PragmaVar0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word PragmaVars0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word PragmaVar_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_14, 0))));
    MR_String Name_23 = ((MR_String) ((MR_hl_field(0, PragmaVar0_14, 1))));
    MR_Word Mode0_24 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_14, 2))));
    MR_Word Box_25 = ((MR_Unsigned) ((MR_hl_field(0, PragmaVar0_14, 3))) & (MR_Integer) 1);
    MR_Word Mode_26;
    MR_Word * AddrPragmaVars_42;

    if (((MR_tag((MR_Word) Mode0_24)) == (MR_Integer) 0))
    {
      MR_Word InstA0_27 = ((MR_Word) ((MR_hl_field(0, Mode0_24, 0))));
      MR_Word InstB0_28 = ((MR_Word) ((MR_hl_field(0, Mode0_24, 1))));
      MR_Word InstA_29;
      MR_Word InstB_30;
      MR_Word STATE_VARIABLE_Info_1_37;

      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_27, &InstA_29, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_37);
      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_28, &InstB_30, STATE_VARIABLE_Info_1_37, &STATE_VARIABLE_Info_1_21);
      {
        Mode_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_26, 0) = ((MR_Box) (InstA_29));
        MR_hl_field(0, Mode_26, 1) = ((MR_Box) (InstB_30));
      }
    }
    else
    {
      MR_Word SymName0_31 = ((MR_Word) ((MR_hl_field(1, Mode0_24, 0))));
      MR_Word Insts0_32 = ((MR_Word) ((MR_hl_field(1, Mode0_24, 1))));
      MR_Word Insts_33;
      MR_Integer Arity_34;
      MR_Word Modes_35;
      MR_Word SymName_36;
      MR_Word STATE_VARIABLE_Info_3_38;
      MR_Word Var_40;

      parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_32, &Insts_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_3_38);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_33, &Arity_34);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_38, &Modes_35);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (SymName0_31));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (Arity_34));
      }
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes_35, (MR_Integer) 2, Var_40, &SymName_36, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_1_21);
      {
        Mode_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_26, 0) = ((MR_Box) (SymName_36));
        MR_hl_field(1, Mode_26, 1) = ((MR_Box) (Insts_33));
      }
    }
    {
      PragmaVar_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PragmaVar_16, 0) = ((MR_Box) (Var_22));
      MR_hl_field(0, PragmaVar_16, 1) = ((MR_Box) (Name_23));
      MR_hl_field(0, PragmaVar_16, 2) = ((MR_Box) (Mode_26));
      MR_hl_field(0, PragmaVar_16, 3) = (MR_Box) ((MR_Unsigned) (Box_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PragmaVar_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrPragmaVars_42 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_6_p_0(HeadVar__1_1, HeadVar__2_2, PragmaVars0_15, AddrPragmaVars_42, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_pragma_vars__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_43,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_43 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word PragmaVar0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PragmaVars0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PragmaVar_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_14, 0))));
      MR_String Name_23 = ((MR_String) ((MR_hl_field(0, PragmaVar0_14, 1))));
      MR_Word Mode0_24 = ((MR_Word) ((MR_hl_field(0, PragmaVar0_14, 2))));
      MR_Word Box_25 = ((MR_Unsigned) ((MR_hl_field(0, PragmaVar0_14, 3))) & (MR_Integer) 1);
      MR_Word Mode_26;
      MR_Word * AddrPragmaVars_42;
      MR_Word HeadVar__4_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_43;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      if (((MR_tag((MR_Word) Mode0_24)) == (MR_Integer) 0))
      {
        MR_Word InstA0_27 = ((MR_Word) ((MR_hl_field(0, Mode0_24, 0))));
        MR_Word InstB0_28 = ((MR_Word) ((MR_hl_field(0, Mode0_24, 1))));
        MR_Word InstA_29;
        MR_Word InstB_30;
        MR_Word STATE_VARIABLE_Info_1_37;

        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_27, &InstA_29, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_37);
        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_28, &InstB_30, STATE_VARIABLE_Info_1_37, &STATE_VARIABLE_Info_1_21);
        {
          Mode_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_26, 0) = ((MR_Box) (InstA_29));
          MR_hl_field(0, Mode_26, 1) = ((MR_Box) (InstB_30));
        }
      }
      else
      {
        MR_Word SymName0_31 = ((MR_Word) ((MR_hl_field(1, Mode0_24, 0))));
        MR_Word Insts0_32 = ((MR_Word) ((MR_hl_field(1, Mode0_24, 1))));
        MR_Word Insts_33;
        MR_Integer Arity_34;
        MR_Word Modes_35;
        MR_Word SymName_36;
        MR_Word STATE_VARIABLE_Info_3_38;
        MR_Word Var_40;

        parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_32, &Insts_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_3_38);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_33, &Arity_34);
        parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_38, &Modes_35);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (SymName0_31));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) (Arity_34));
        }
        parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes_35, (MR_Integer) 2, Var_40, &SymName_36, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_1_21);
        {
          Mode_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mode_26, 0) = ((MR_Box) (SymName_36));
          MR_hl_field(1, Mode_26, 1) = ((MR_Box) (Insts_33));
        }
      }
      {
        PragmaVar_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PragmaVar_16, 0) = ((MR_Box) (Var_22));
        MR_hl_field(0, PragmaVar_16, 1) = ((MR_Box) (Name_23));
        MR_hl_field(0, PragmaVar_16, 2) = ((MR_Box) (Mode_26));
        MR_hl_field(0, PragmaVar_16, 3) = (MR_Box) ((MR_Unsigned) (Box_25));
      }
      {
        HeadVar__4_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_44, 0) = ((MR_Box) (PragmaVar_16));
        MR_hl_field(1, HeadVar__4_44, 1) = NULL;
      }
      AddrPragmaVars_42 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_44, 1)));
      *AddrOfHeadVar__4_43 = HeadVar__4_44;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PragmaVars0_15;
      next_value_of_AddrOfHeadVar__4_43 = AddrPragmaVars_42;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_43 = next_value_of_AddrOfHeadVar__4_43;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemModeDecl0_7,
  MR_Word * ItemModeDecl_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 0))));
  MR_Word PredOrFunc_11 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 1))));
  MR_Word Modes0_12 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 2))));
  MR_Word MaybeWithInst0_13 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 3))));
  MR_Word MaybeDetism_14 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 4))));
  MR_Word InstVarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 5))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 6))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemModeDecl0_7, 7))));
  MR_Integer Arity_18;
  MR_Word ErrorContext_19;
  MR_Word Modes_20;
  MR_Word MaybeWithInst_23;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_Info_1_27;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_12, &Arity_18);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (Arity_18));
  }
  {
    ErrorContext_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, ErrorContext_19, 1) = ((MR_Box) (Context_16));
    MR_hl_field(3, ErrorContext_19, 2) = ((MR_Box) (PredOrFunc_11));
    MR_hl_field(3, ErrorContext_19, 3) = ((MR_Box) (Var_26));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_6, ErrorContext_19, Modes0_12, &Modes_20, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_27);
  if ((MaybeWithInst0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithInst_23 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_27;
  }
  else
  {
    MR_Word WithInst0_21 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_13, 0))));
    MR_Word WithInst_22;

    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_6, ErrorContext_19, WithInst0_21, &WithInst_22, STATE_VARIABLE_Info_1_27, STATE_VARIABLE_Info_25);
    {
      MaybeWithInst_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeWithInst_23, 0) = ((MR_Box) (WithInst_22));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemModeDecl_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredOrFunc_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Modes_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeWithInst_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeDetism_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstVarSet_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemPredDecl0_7,
  MR_Word * ItemPredDecl_8,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 0))));
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl0_7, 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes0_12 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 2))));
  MR_Word MaybeWithType0_13 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 3))));
  MR_Word MaybeWithInst0_14 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 4))));
  MR_Word MaybeDetism_15 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 5))));
  MR_Word Origin_16 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 6))));
  MR_Word TypeVarSet_17 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 7))));
  MR_Word InstVarSet_18 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 8))));
  MR_Word ExistQVars_19 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 9))));
  MR_Word Purity_20 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl0_7, 10))) & (MR_Integer) 3);
  MR_Word Constraints0_21 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 11))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 12))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl0_7, 13))));
  MR_Word PredFormArity_24;
  MR_Word PFSymNameArity_25;
  MR_Integer PredFormArityInt_26;
  MR_Word ErrorContext_27;
  MR_Word TypesAndMaybeModes_28;
  MR_Word ConstraintErrorContext_29;
  MR_Word Constraints_30;
  MR_Word MaybeWithType_33;
  MR_Word MaybeWithInst_36;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_Info_1_40;
  MR_Word STATE_VARIABLE_Info_2_41;
  MR_Word STATE_VARIABLE_Info_3_42;
  MR_Word UnivCs0_47;
  MR_Word ExistCs0_48;
  MR_Word UnivCs_49;
  MR_Word ExistCs_50;
  MR_Word STATE_VARIABLE_Info_1_51;

  PredFormArity_24 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes0_12);
  {
    PFSymNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    MR_hl_field(0, PFSymNameArity_25, 1) = ((MR_Box) (SymName_10));
    MR_hl_field(0, PFSymNameArity_25, 2) = ((MR_Box) (PredFormArity_24));
  }
  PredFormArityInt_26 = (MR_Integer) (PredFormArity_24);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (PredFormArityInt_26));
  }
  {
    ErrorContext_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, ErrorContext_27, 1) = ((MR_Box) (Context_22));
    MR_hl_field(3, ErrorContext_27, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    MR_hl_field(3, ErrorContext_27, 3) = ((MR_Box) (Var_39));
  }
  switch (MR_tag((MR_Word) TypesAndMaybeModes0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TypesAndMaybeModes_28 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_1_40 = STATE_VARIABLE_Info_0_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types0_43 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_12, 0))));
        MR_Word Types_44;

        parse_tree__module_qual__qualify_items__qualify_types_6_p_0(InInt_6, ErrorContext_27, Types0_43, &Types_44, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_1_40);
        {
          TypesAndMaybeModes_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypesAndMaybeModes_28, 0) = ((MR_Box) (Types_44));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes0_45 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_12, 0))));
        MR_Word TypesAndModes_46;

        parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(InInt_6, ErrorContext_27, TypesAndModes0_45, &TypesAndModes_46, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_1_40);
        {
          TypesAndMaybeModes_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TypesAndMaybeModes_28, 0) = ((MR_Box) (TypesAndModes_46));
        }
      }
      break;
  }
  {
    ConstraintErrorContext_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConstraintErrorContext_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ConstraintErrorContext_29, 1) = ((MR_Box) (Context_22));
    MR_hl_field(3, ConstraintErrorContext_29, 2) = ((MR_Box) (PFSymNameArity_25));
  }
  UnivCs0_47 = ((MR_Word) ((MR_hl_field(0, Constraints0_21, 0))));
  ExistCs0_48 = ((MR_Word) ((MR_hl_field(0, Constraints0_21, 1))));
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_29, UnivCs0_47, &UnivCs_49, STATE_VARIABLE_Info_1_40, &STATE_VARIABLE_Info_1_51);
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_29, ExistCs0_48, &ExistCs_50, STATE_VARIABLE_Info_1_51, &STATE_VARIABLE_Info_2_41);
  {
    Constraints_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraints_30, 0) = ((MR_Box) (UnivCs_49));
    MR_hl_field(0, Constraints_30, 1) = ((MR_Box) (ExistCs_50));
  }
  if ((MaybeWithType0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithType_33 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_3_42 = STATE_VARIABLE_Info_2_41;
  }
  else
  {
    MR_Word WithType0_31 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_13, 0))));
    MR_Word WithType_32;

    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_6, ErrorContext_27, WithType0_31, &WithType_32, STATE_VARIABLE_Info_2_41, &STATE_VARIABLE_Info_3_42);
    {
      MaybeWithType_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeWithType_33, 0) = ((MR_Box) (WithType_32));
    }
  }
  if ((MaybeWithInst0_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeWithInst_36 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_3_42;
  }
  else
  {
    MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_14, 0))));
    MR_Word WithInst_35;

    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_6, ErrorContext_27, WithInst0_34, &WithInst_35, STATE_VARIABLE_Info_3_42, STATE_VARIABLE_Info_38);
    {
      MaybeWithInst_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeWithInst_36, 0) = ((MR_Box) (WithInst_35));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    *ItemPredDecl_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypesAndMaybeModes_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeWithType_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeWithInst_36));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeDetism_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Origin_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeVarSet_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (ExistQVars_19));
    MR_hl_field(0, base, 10) = (MR_Box) ((MR_Unsigned) (Purity_20));
    MR_hl_field(0, base, 11) = ((MR_Box) (Constraints_30));
    MR_hl_field(0, base, 12) = ((MR_Box) (Context_22));
    MR_hl_field(0, base, 13) = ((MR_Box) (SeqNum_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_instance_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemInstance0_7,
  MR_Word * ItemInstance_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word Name0_10 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 0))));
  MR_Word Types0_11 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 1))));
  MR_Word OrigTypes0_12 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 2))));
  MR_Word Constraints0_13 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 3))));
  MR_Word Body_14 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 4))));
  MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 5))));
  MR_Word ModName_16 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 6))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 7))));
  MR_Word SeqNum_18 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 8))));
  MR_Integer Arity_19;
  MR_Word ErrorContext_20;
  MR_Word ConstraintErrorContext_21;
  MR_Word Constraints_22;
  MR_Word Id0_23;
  MR_Word Name_24;
  MR_Word Types_25;
  MR_Word OrigTypes_26;
  MR_Word Var_29;
  MR_Word STATE_VARIABLE_Info_1_31;
  MR_Word STATE_VARIABLE_Info_2_32;
  MR_Word STATE_VARIABLE_Info_3_33;
  MR_Word STATE_VARIABLE_Info_4_34;
  MR_Word ClassIdSet_36;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_11, &Arity_19);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (Name0_10));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (Arity_19));
  }
  {
    ErrorContext_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_20, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, ErrorContext_20, 1) = ((MR_Box) (Context_17));
    MR_hl_field(3, ErrorContext_20, 2) = ((MR_Box) (Var_29));
  }
  switch (InInt_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_27;
      break;
    case (MR_Integer) 1:
      parse_tree__module_qual__mq_info__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_1_31);
      break;
  }
  {
    ConstraintErrorContext_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ConstraintErrorContext_21, 0) = ((MR_Box) (Context_17));
    MR_hl_field(2, ConstraintErrorContext_21, 1) = ((MR_Box) (Name0_10));
    MR_hl_field(2, ConstraintErrorContext_21, 2) = ((MR_Box) (OrigTypes0_12));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_21, Constraints0_13, &Constraints_22, STATE_VARIABLE_Info_1_31, &STATE_VARIABLE_Info_2_32);
  {
    Id0_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id0_23, 0) = ((MR_Box) (Name0_10));
    MR_hl_field(0, Id0_23, 1) = ((MR_Box) (Arity_19));
  }
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_2_32, &ClassIdSet_36);
  parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_6, ErrorContext_20, ClassIdSet_36, (MR_Integer) 3, Id0_23, &Name_24, STATE_VARIABLE_Info_2_32, &STATE_VARIABLE_Info_3_33);
  parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_6, ErrorContext_20, Types0_11, &Types_25, STATE_VARIABLE_Info_3_33, &STATE_VARIABLE_Info_4_34);
  parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_6, ErrorContext_20, OrigTypes0_12, &OrigTypes_26, STATE_VARIABLE_Info_4_34, STATE_VARIABLE_Info_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ItemInstance_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (OrigTypes_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Body_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (ModName_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstanceMethod_6;

  parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstanceMethod_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_InstanceMethod_6));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemInstance0_7,
  MR_Word * ItemInstance_8,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Word Name0_10 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 0))));
  MR_Word Types0_11 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 1))));
  MR_Word OrigTypes0_12 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 2))));
  MR_Word Constraints0_13 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 3))));
  MR_Word Body0_14 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 4))));
  MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 5))));
  MR_Word ModName_16 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 6))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 7))));
  MR_Word SeqNum_18 = ((MR_Word) ((MR_hl_field(0, ItemInstance0_7, 8))));
  MR_Integer Arity_19;
  MR_Word ErrorContext_20;
  MR_Word ConstraintErrorContext_21;
  MR_Word Constraints_22;
  MR_Word Id0_23;
  MR_Word Name_24;
  MR_Word Types_25;
  MR_Word OrigTypes_26;
  MR_Word Body_27;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_1_32;
  MR_Word STATE_VARIABLE_Info_2_33;
  MR_Word STATE_VARIABLE_Info_3_34;
  MR_Word STATE_VARIABLE_Info_4_35;
  MR_Word ClassIdSet_37;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_11, &Arity_19);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (Name0_10));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (Arity_19));
  }
  {
    ErrorContext_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_20, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, ErrorContext_20, 1) = ((MR_Box) (Context_17));
    MR_hl_field(3, ErrorContext_20, 2) = ((MR_Box) (Var_30));
  }
  switch (InInt_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Info_1_32 = STATE_VARIABLE_Info_0_28;
      break;
    case (MR_Integer) 1:
      parse_tree__module_qual__mq_info__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_32);
      break;
  }
  {
    ConstraintErrorContext_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ConstraintErrorContext_21, 0) = ((MR_Box) (Context_17));
    MR_hl_field(2, ConstraintErrorContext_21, 1) = ((MR_Box) (Name0_10));
    MR_hl_field(2, ConstraintErrorContext_21, 2) = ((MR_Box) (OrigTypes0_12));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_21, Constraints0_13, &Constraints_22, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_2_33);
  {
    Id0_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id0_23, 0) = ((MR_Box) (Name0_10));
    MR_hl_field(0, Id0_23, 1) = ((MR_Box) (Arity_19));
  }
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_2_33, &ClassIdSet_37);
  parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_6, ErrorContext_20, ClassIdSet_37, (MR_Integer) 3, Id0_23, &Name_24, STATE_VARIABLE_Info_2_33, &STATE_VARIABLE_Info_3_34);
  parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_6, ErrorContext_20, Types0_11, &Types_25, STATE_VARIABLE_Info_3_34, &STATE_VARIABLE_Info_4_35);
  parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_6, ErrorContext_20, OrigTypes0_12, &OrigTypes_26, STATE_VARIABLE_Info_4_35, STATE_VARIABLE_Info_29);
  if ((Body0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    Body_27 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Methods0_39 = ((MR_Word) ((MR_hl_field(1, Body0_14, 0))));

    if (((MR_tag((MR_Word) Name_24)) == (MR_Integer) 1))
    {
      MR_Word DefaultModuleName_40;
      MR_Word Methods_41;
      MR_Word Var_43;

      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Name_24, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[2]), &DefaultModuleName_40);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_8[3]));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0_1));
        MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_43, 3) = ((MR_Box) (DefaultModuleName_40));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Var_43, Methods0_39, &Methods_41);
      {
        Body_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Body_27, 0) = ((MR_Box) (Methods_41));
      }
    }
    else
      Body_27 = Body0_14;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ItemInstance_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (OrigTypes_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Body_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (ModName_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_abstract_typeclass_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemTypeClass0_7,
  MR_Word * ItemTypeClass_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 0))));
  MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 1))));
  MR_Word Constraints0_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 2))));
  MR_Word FunDeps_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 3))));
  MR_Word Interface0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 4))));
  MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 5))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 6))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 7))));
  MR_Integer Arity_18;
  MR_Word ClassId_19;
  MR_Word ConstraintErrorContext_20;
  MR_Word Constraints_21;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Vars_11, &Arity_18);
  {
    ClassId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_19, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, ClassId_19, 1) = ((MR_Box) (Arity_18));
  }
  {
    ConstraintErrorContext_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConstraintErrorContext_20, 0) = ((MR_Box) (Context_16));
    MR_hl_field(0, ConstraintErrorContext_20, 1) = ((MR_Box) (ClassId_19));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_20, Constraints0_12, &Constraints_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeClass_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Interface0_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_5_p_0(
  MR_Word InInt_6,
  MR_Word ItemTypeClass0_7,
  MR_Word * ItemTypeClass_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 0))));
  MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 1))));
  MR_Word Constraints0_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 2))));
  MR_Word FunDeps_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 3))));
  MR_Word Interface0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 4))));
  MR_Word VarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 5))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 6))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_7, 7))));
  MR_Integer Arity_18;
  MR_Word ClassId_19;
  MR_Word ConstraintErrorContext_20;
  MR_Word Constraints_21;
  MR_Word Interface_22;
  MR_Word STATE_VARIABLE_Info_1_27;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Vars_11, &Arity_18);
  {
    ClassId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_19, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, ClassId_19, 1) = ((MR_Box) (Arity_18));
  }
  {
    ConstraintErrorContext_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConstraintErrorContext_20, 0) = ((MR_Box) (Context_16));
    MR_hl_field(0, ConstraintErrorContext_20, 1) = ((MR_Box) (ClassId_19));
  }
  parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_6, ConstraintErrorContext_20, Constraints0_12, &Constraints_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_27);
  if ((Interface0_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Interface_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_1_27;
  }
  else
  {
    MR_Word Methods0_23 = ((MR_Word) ((MR_hl_field(1, Interface0_14, 0))));
    MR_Word Methods_24;

    parse_tree__module_qual__qualify_items__qualify_class_decls_6_p_0(InInt_6, ClassId_19, Methods0_23, &Methods_24, STATE_VARIABLE_Info_1_27, STATE_VARIABLE_Info_26);
    {
      Interface_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Interface_22, 0) = ((MR_Box) (Methods_24));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeClass_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Interface_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (VarSet_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decls_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Decl0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Decls0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Decl_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word * AddrDecls_118;

    if (((MR_tag((MR_Word) Decl0_14)) == (MR_Integer) 1))
    {
      MR_Word ModeInfo0_53 = (MR_Word) (MR_body((MR_Word) (Decl0_14), (MR_Integer) 1));
      MR_Word MaybePredOrFunc_54 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 1))));
      MR_Word Modes0_55 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 2))));
      MR_Word Varset_56 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 5))));
      MR_Word Modes_58;
      MR_Word ModeInfo_59;
      MR_Word SymName_70 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 0))));
      MR_Word MaybeWithInst0_71 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 3))));
      MR_Word MaybeDetism_72 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 4))));
      MR_Word Context_73 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 6))));
      MR_String Name_74;
      MR_Word MaybeWithInst_77;

      Name_74 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_70);
      if ((MaybePredOrFunc_54 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_Info_5_64;
        MR_Word ErrorContext_76;

        {
          ErrorContext_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_76, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, ErrorContext_76, 1) = ((MR_Box) (Context_73));
          MR_hl_field(3, ErrorContext_76, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(3, ErrorContext_76, 3) = ((MR_Box) (MaybePredOrFunc_54));
          MR_hl_field(3, ErrorContext_76, 4) = ((MR_Box) (Name_74));
          MR_hl_field(3, ErrorContext_76, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(HeadVar__1_1, ErrorContext_76, Modes0_55, &Modes_58, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_5_64);
        if ((MaybeWithInst0_71 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeWithInst_77 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_1_21 = STATE_VARIABLE_Info_5_64;
        }
        else
        {
          MR_Word WithInst0_68 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_71, 0))));
          MR_Word WithInst_69;

          parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_76, WithInst0_68, &WithInst_69, STATE_VARIABLE_Info_5_64, &STATE_VARIABLE_Info_1_21);
          {
            MaybeWithInst_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithInst_77, 0) = ((MR_Box) (WithInst_69));
          }
        }
      }
      else
      {
        MR_Word PredOrFunc_67 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_54, 0))));

        if ((MaybeWithInst0_71 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PredFormArity_65;
          MR_Word UserArity_66;
          MR_Word UserArityIfKnown_97;
          MR_Word ErrorContext_98;

          PredFormArity_65 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_55);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_67, &UserArity_66, PredFormArity_65);
          {
            UserArityIfKnown_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, UserArityIfKnown_97, 0) = ((MR_Box) (UserArity_66));
          }
          {
            ErrorContext_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ErrorContext_98, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, ErrorContext_98, 1) = ((MR_Box) (Context_73));
            MR_hl_field(3, ErrorContext_98, 2) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(3, ErrorContext_98, 3) = ((MR_Box) (MaybePredOrFunc_54));
            MR_hl_field(3, ErrorContext_98, 4) = ((MR_Box) (Name_74));
            MR_hl_field(3, ErrorContext_98, 5) = ((MR_Box) (UserArityIfKnown_97));
          }
          parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(HeadVar__1_1, ErrorContext_98, Modes0_55, &Modes_58, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
          MaybeWithInst_77 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word WithInst0_90;
          MR_Word WithInst_91;
          MR_Word STATE_VARIABLE_Info_5_99;
          MR_Word ErrorContext_101;

          {
            ErrorContext_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ErrorContext_101, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, ErrorContext_101, 1) = ((MR_Box) (Context_73));
            MR_hl_field(3, ErrorContext_101, 2) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(3, ErrorContext_101, 3) = ((MR_Box) (MaybePredOrFunc_54));
            MR_hl_field(3, ErrorContext_101, 4) = ((MR_Box) (Name_74));
            MR_hl_field(3, ErrorContext_101, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(HeadVar__1_1, ErrorContext_101, Modes0_55, &Modes_58, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_5_99);
          WithInst0_90 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_71, 0))));
          parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_101, WithInst0_90, &WithInst_91, STATE_VARIABLE_Info_5_99, &STATE_VARIABLE_Info_1_21);
          {
            MaybeWithInst_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithInst_77, 0) = ((MR_Box) (WithInst_91));
          }
        }
      }
      {
        ModeInfo_59 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeInfo_59, 0) = ((MR_Box) (SymName_70));
        MR_hl_field(0, ModeInfo_59, 1) = ((MR_Box) (MaybePredOrFunc_54));
        MR_hl_field(0, ModeInfo_59, 2) = ((MR_Box) (Modes_58));
        MR_hl_field(0, ModeInfo_59, 3) = ((MR_Box) (MaybeWithInst_77));
        MR_hl_field(0, ModeInfo_59, 4) = ((MR_Box) (MaybeDetism_72));
        MR_hl_field(0, ModeInfo_59, 5) = ((MR_Box) (Varset_56));
        MR_hl_field(0, ModeInfo_59, 6) = ((MR_Box) (Context_73));
      }
      Decl_16 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_59)));
    }
    else
    {
      MR_Word PredOrFuncInfo0_22 = (MR_Word) ((MR_Word) (Decl0_14));
      MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 0))));
      MR_Word PredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_22, 1))) & (MR_Integer) 1);
      MR_Word TypesAndMaybeModes0_25 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 2))));
      MR_Word MaybeWithType0_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 3))));
      MR_Word MaybeWithInst0_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 4))));
      MR_Word MaybeDetism_28 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 5))));
      MR_Word TypeVarset_29 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 6))));
      MR_Word InstVarset_30 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 7))));
      MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 8))));
      MR_Word Purity_32 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_22, 9))) & (MR_Integer) 3);
      MR_Word Constraints0_33 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 10))));
      MR_Word Context_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 11))));
      MR_String Name_35;
      MR_Word UserArityIfKnown_37;
      MR_Word ErrorContext_42;
      MR_Word TypesAndMaybeModes_43;
      MR_Word ConstraintErrorContext_44;
      MR_Word Constraints_45;
      MR_Word MaybeWithType_48;
      MR_Word MaybeWithInst_51;
      MR_Word PredOrFuncInfo_52;
      MR_Word STATE_VARIABLE_Info_1_61;
      MR_Word STATE_VARIABLE_Info_2_62;
      MR_Word STATE_VARIABLE_Info_3_63;
      MR_Word UnivCs0_85;
      MR_Word ExistCs0_86;
      MR_Word UnivCs_87;
      MR_Word ExistCs_88;
      MR_Word STATE_VARIABLE_Info_1_89;

      Name_35 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_23);
      if ((MaybeWithType0_26 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (MR_tag((MR_Word) TypesAndMaybeModes0_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UserArity_41;

              parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_41, (MR_Word) (((MR_Box) ((MR_Integer) 0))));
              {
                UserArityIfKnown_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UserArityIfKnown_37, 0) = ((MR_Box) (UserArity_41));
              }
              {
                ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
                MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
                MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
                MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
              }
              TypesAndMaybeModes_43 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_1_61 = STATE_VARIABLE_Info_0_5;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Types0_81 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_25, 0))));
              MR_Word Types_82;
              MR_Word PredFormArity_116;
              MR_Word UserArity_117;

              PredFormArity_116 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_81);
              parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_117, PredFormArity_116);
              {
                UserArityIfKnown_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UserArityIfKnown_37, 0) = ((MR_Box) (UserArity_117));
              }
              {
                ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
                MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
                MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
                MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
              }
              parse_tree__module_qual__qualify_items__qualify_types_6_p_0(HeadVar__1_1, ErrorContext_42, Types0_81, &Types_82, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
              {
                TypesAndMaybeModes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypesAndMaybeModes_43, 0) = ((MR_Box) (Types_82));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypesAndModes0_83 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_25, 0))));
              MR_Word TypesAndModes_84;
              MR_Word PredFormArity_114;
              MR_Word UserArity_115;

              PredFormArity_114 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_83);
              parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_115, PredFormArity_114);
              {
                UserArityIfKnown_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UserArityIfKnown_37, 0) = ((MR_Box) (UserArity_115));
              }
              {
                ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
                MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
                MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
                MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
              }
              parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(HeadVar__1_1, ErrorContext_42, TypesAndModes0_83, &TypesAndModes_84, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
              {
                TypesAndMaybeModes_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TypesAndMaybeModes_43, 0) = ((MR_Box) (TypesAndModes_84));
              }
            }
            break;
        }
      else
      {
        UserArityIfKnown_37 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
          MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
          MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
          MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
        }
        switch (MR_tag((MR_Word) TypesAndMaybeModes0_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TypesAndMaybeModes_43 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_1_61 = STATE_VARIABLE_Info_0_5;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Types0_104 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_25, 0))));
              MR_Word Types_105;

              parse_tree__module_qual__qualify_items__qualify_types_6_p_0(HeadVar__1_1, ErrorContext_42, Types0_104, &Types_105, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
              {
                TypesAndMaybeModes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypesAndMaybeModes_43, 0) = ((MR_Box) (Types_105));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypesAndModes0_102 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_25, 0))));
              MR_Word TypesAndModes_103;

              parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(HeadVar__1_1, ErrorContext_42, TypesAndModes0_102, &TypesAndModes_103, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
              {
                TypesAndMaybeModes_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, TypesAndMaybeModes_43, 0) = ((MR_Box) (TypesAndModes_103));
              }
            }
            break;
        }
      }
      {
        ConstraintErrorContext_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ConstraintErrorContext_44, 0) = ((MR_Box) (Context_34));
        MR_hl_field(1, ConstraintErrorContext_44, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, ConstraintErrorContext_44, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
        MR_hl_field(1, ConstraintErrorContext_44, 3) = ((MR_Box) (Name_35));
        MR_hl_field(1, ConstraintErrorContext_44, 4) = ((MR_Box) (UserArityIfKnown_37));
      }
      UnivCs0_85 = ((MR_Word) ((MR_hl_field(0, Constraints0_33, 0))));
      ExistCs0_86 = ((MR_Word) ((MR_hl_field(0, Constraints0_33, 1))));
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(HeadVar__1_1, ConstraintErrorContext_44, UnivCs0_85, &UnivCs_87, STATE_VARIABLE_Info_1_61, &STATE_VARIABLE_Info_1_89);
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(HeadVar__1_1, ConstraintErrorContext_44, ExistCs0_86, &ExistCs_88, STATE_VARIABLE_Info_1_89, &STATE_VARIABLE_Info_2_62);
      {
        Constraints_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraints_45, 0) = ((MR_Box) (UnivCs_87));
        MR_hl_field(0, Constraints_45, 1) = ((MR_Box) (ExistCs_88));
      }
      if ((MaybeWithType0_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeWithType_48 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_3_63 = STATE_VARIABLE_Info_2_62;
      }
      else
      {
        MR_Word WithType0_46 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_26, 0))));
        MR_Word WithType_47;

        parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_42, WithType0_46, &WithType_47, STATE_VARIABLE_Info_2_62, &STATE_VARIABLE_Info_3_63);
        {
          MaybeWithType_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeWithType_48, 0) = ((MR_Box) (WithType_47));
        }
      }
      if ((MaybeWithInst0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeWithInst_51 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_1_21 = STATE_VARIABLE_Info_3_63;
      }
      else
      {
        MR_Word WithInst0_49 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_27, 0))));
        MR_Word WithInst_50;

        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_42, WithInst0_49, &WithInst_50, STATE_VARIABLE_Info_3_63, &STATE_VARIABLE_Info_1_21);
        {
          MaybeWithInst_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeWithInst_51, 0) = ((MR_Box) (WithInst_50));
        }
      }
      {
        PredOrFuncInfo_52 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredOrFuncInfo_52, 0) = ((MR_Box) (SymName_23));
        MR_hl_field(0, PredOrFuncInfo_52, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
        MR_hl_field(0, PredOrFuncInfo_52, 2) = ((MR_Box) (TypesAndMaybeModes_43));
        MR_hl_field(0, PredOrFuncInfo_52, 3) = ((MR_Box) (MaybeWithType_48));
        MR_hl_field(0, PredOrFuncInfo_52, 4) = ((MR_Box) (MaybeWithInst_51));
        MR_hl_field(0, PredOrFuncInfo_52, 5) = ((MR_Box) (MaybeDetism_28));
        MR_hl_field(0, PredOrFuncInfo_52, 6) = ((MR_Box) (TypeVarset_29));
        MR_hl_field(0, PredOrFuncInfo_52, 7) = ((MR_Box) (InstVarset_30));
        MR_hl_field(0, PredOrFuncInfo_52, 8) = ((MR_Box) (ExistQVars_31));
        MR_hl_field(0, PredOrFuncInfo_52, 9) = (MR_Box) ((MR_Unsigned) (Purity_32));
        MR_hl_field(0, PredOrFuncInfo_52, 10) = ((MR_Box) (Constraints_45));
        MR_hl_field(0, PredOrFuncInfo_52, 11) = ((MR_Box) (Context_34));
      }
      Decl_16 = (MR_Word) ((MR_Word) (PredOrFuncInfo_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Decl_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrDecls_118 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Decls0_15, AddrDecls_118, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_class_decls__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_119,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_119 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Decl0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Decls0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Decl_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word * AddrDecls_118;
      MR_Word HeadVar__4_120;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_119;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      if (((MR_tag((MR_Word) Decl0_14)) == (MR_Integer) 1))
      {
        MR_Word ModeInfo0_53 = (MR_Word) (MR_body((MR_Word) (Decl0_14), (MR_Integer) 1));
        MR_Word MaybePredOrFunc_54 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 1))));
        MR_Word Modes0_55 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 2))));
        MR_Word Varset_56 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 5))));
        MR_Word Modes_58;
        MR_Word ModeInfo_59;
        MR_Word SymName_70 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 0))));
        MR_Word MaybeWithInst0_71 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 3))));
        MR_Word MaybeDetism_72 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 4))));
        MR_Word Context_73 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_53, 6))));
        MR_String Name_74;
        MR_Word MaybeWithInst_77;

        Name_74 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_70);
        if ((MaybePredOrFunc_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word STATE_VARIABLE_Info_5_64;
          MR_Word ErrorContext_76;

          {
            ErrorContext_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ErrorContext_76, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, ErrorContext_76, 1) = ((MR_Box) (Context_73));
            MR_hl_field(3, ErrorContext_76, 2) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(3, ErrorContext_76, 3) = ((MR_Box) (MaybePredOrFunc_54));
            MR_hl_field(3, ErrorContext_76, 4) = ((MR_Box) (Name_74));
            MR_hl_field(3, ErrorContext_76, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(HeadVar__1_1, ErrorContext_76, Modes0_55, &Modes_58, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_5_64);
          if ((MaybeWithInst0_71 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeWithInst_77 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_1_21 = STATE_VARIABLE_Info_5_64;
          }
          else
          {
            MR_Word WithInst0_68 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_71, 0))));
            MR_Word WithInst_69;

            parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_76, WithInst0_68, &WithInst_69, STATE_VARIABLE_Info_5_64, &STATE_VARIABLE_Info_1_21);
            {
              MaybeWithInst_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeWithInst_77, 0) = ((MR_Box) (WithInst_69));
            }
          }
        }
        else
        {
          MR_Word PredOrFunc_67 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_54, 0))));

          if ((MaybeWithInst0_71 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word PredFormArity_65;
            MR_Word UserArity_66;
            MR_Word UserArityIfKnown_97;
            MR_Word ErrorContext_98;

            PredFormArity_65 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_55);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_67, &UserArity_66, PredFormArity_65);
            {
              UserArityIfKnown_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UserArityIfKnown_97, 0) = ((MR_Box) (UserArity_66));
            }
            {
              ErrorContext_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_98, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, ErrorContext_98, 1) = ((MR_Box) (Context_73));
              MR_hl_field(3, ErrorContext_98, 2) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(3, ErrorContext_98, 3) = ((MR_Box) (MaybePredOrFunc_54));
              MR_hl_field(3, ErrorContext_98, 4) = ((MR_Box) (Name_74));
              MR_hl_field(3, ErrorContext_98, 5) = ((MR_Box) (UserArityIfKnown_97));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(HeadVar__1_1, ErrorContext_98, Modes0_55, &Modes_58, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
            MaybeWithInst_77 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word WithInst0_90;
            MR_Word WithInst_91;
            MR_Word STATE_VARIABLE_Info_5_99;
            MR_Word ErrorContext_101;

            {
              ErrorContext_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ErrorContext_101, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, ErrorContext_101, 1) = ((MR_Box) (Context_73));
              MR_hl_field(3, ErrorContext_101, 2) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(3, ErrorContext_101, 3) = ((MR_Box) (MaybePredOrFunc_54));
              MR_hl_field(3, ErrorContext_101, 4) = ((MR_Box) (Name_74));
              MR_hl_field(3, ErrorContext_101, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(HeadVar__1_1, ErrorContext_101, Modes0_55, &Modes_58, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_5_99);
            WithInst0_90 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_71, 0))));
            parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_101, WithInst0_90, &WithInst_91, STATE_VARIABLE_Info_5_99, &STATE_VARIABLE_Info_1_21);
            {
              MaybeWithInst_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeWithInst_77, 0) = ((MR_Box) (WithInst_91));
            }
          }
        }
        {
          ModeInfo_59 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModeInfo_59, 0) = ((MR_Box) (SymName_70));
          MR_hl_field(0, ModeInfo_59, 1) = ((MR_Box) (MaybePredOrFunc_54));
          MR_hl_field(0, ModeInfo_59, 2) = ((MR_Box) (Modes_58));
          MR_hl_field(0, ModeInfo_59, 3) = ((MR_Box) (MaybeWithInst_77));
          MR_hl_field(0, ModeInfo_59, 4) = ((MR_Box) (MaybeDetism_72));
          MR_hl_field(0, ModeInfo_59, 5) = ((MR_Box) (Varset_56));
          MR_hl_field(0, ModeInfo_59, 6) = ((MR_Box) (Context_73));
        }
        Decl_16 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_59)));
      }
      else
      {
        MR_Word PredOrFuncInfo0_22 = (MR_Word) ((MR_Word) (Decl0_14));
        MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 0))));
        MR_Word PredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_22, 1))) & (MR_Integer) 1);
        MR_Word TypesAndMaybeModes0_25 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 2))));
        MR_Word MaybeWithType0_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 3))));
        MR_Word MaybeWithInst0_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 4))));
        MR_Word MaybeDetism_28 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 5))));
        MR_Word TypeVarset_29 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 6))));
        MR_Word InstVarset_30 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 7))));
        MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 8))));
        MR_Word Purity_32 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_22, 9))) & (MR_Integer) 3);
        MR_Word Constraints0_33 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 10))));
        MR_Word Context_34 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_22, 11))));
        MR_String Name_35;
        MR_Word UserArityIfKnown_37;
        MR_Word ErrorContext_42;
        MR_Word TypesAndMaybeModes_43;
        MR_Word ConstraintErrorContext_44;
        MR_Word Constraints_45;
        MR_Word MaybeWithType_48;
        MR_Word MaybeWithInst_51;
        MR_Word PredOrFuncInfo_52;
        MR_Word STATE_VARIABLE_Info_1_61;
        MR_Word STATE_VARIABLE_Info_2_62;
        MR_Word STATE_VARIABLE_Info_3_63;
        MR_Word UnivCs0_85;
        MR_Word ExistCs0_86;
        MR_Word UnivCs_87;
        MR_Word ExistCs_88;
        MR_Word STATE_VARIABLE_Info_1_89;

        Name_35 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_23);
        if ((MaybeWithType0_26 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (MR_tag((MR_Word) TypesAndMaybeModes0_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word UserArity_41;

                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_41, (MR_Word) (((MR_Box) ((MR_Integer) 0))));
                {
                  UserArityIfKnown_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, UserArityIfKnown_37, 0) = ((MR_Box) (UserArity_41));
                }
                {
                  ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
                  MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
                  MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
                  MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
                }
                TypesAndMaybeModes_43 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Info_1_61 = STATE_VARIABLE_Info_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Types0_81 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_25, 0))));
                MR_Word Types_82;
                MR_Word PredFormArity_116;
                MR_Word UserArity_117;

                PredFormArity_116 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_81);
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_117, PredFormArity_116);
                {
                  UserArityIfKnown_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, UserArityIfKnown_37, 0) = ((MR_Box) (UserArity_117));
                }
                {
                  ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
                  MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
                  MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
                  MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
                }
                parse_tree__module_qual__qualify_items__qualify_types_6_p_0(HeadVar__1_1, ErrorContext_42, Types0_81, &Types_82, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
                {
                  TypesAndMaybeModes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, TypesAndMaybeModes_43, 0) = ((MR_Box) (Types_82));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypesAndModes0_83 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_25, 0))));
                MR_Word TypesAndModes_84;
                MR_Word PredFormArity_114;
                MR_Word UserArity_115;

                PredFormArity_114 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_83);
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_115, PredFormArity_114);
                {
                  UserArityIfKnown_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, UserArityIfKnown_37, 0) = ((MR_Box) (UserArity_115));
                }
                {
                  ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
                  MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
                  MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
                  MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
                }
                parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(HeadVar__1_1, ErrorContext_42, TypesAndModes0_83, &TypesAndModes_84, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
                {
                  TypesAndMaybeModes_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, TypesAndMaybeModes_43, 0) = ((MR_Box) (TypesAndModes_84));
                }
              }
              break;
          }
        else
        {
          UserArityIfKnown_37 = (MR_Word) ((MR_Unsigned) 0U);
          {
            ErrorContext_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, ErrorContext_42, 1) = ((MR_Box) (Context_34));
            MR_hl_field(3, ErrorContext_42, 2) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(3, ErrorContext_42, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
            MR_hl_field(3, ErrorContext_42, 4) = ((MR_Box) (Name_35));
            MR_hl_field(3, ErrorContext_42, 5) = ((MR_Box) (UserArityIfKnown_37));
          }
          switch (MR_tag((MR_Word) TypesAndMaybeModes0_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TypesAndMaybeModes_43 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Info_1_61 = STATE_VARIABLE_Info_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Types0_104 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_25, 0))));
                MR_Word Types_105;

                parse_tree__module_qual__qualify_items__qualify_types_6_p_0(HeadVar__1_1, ErrorContext_42, Types0_104, &Types_105, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
                {
                  TypesAndMaybeModes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, TypesAndMaybeModes_43, 0) = ((MR_Box) (Types_105));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypesAndModes0_102 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_25, 0))));
                MR_Word TypesAndModes_103;

                parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(HeadVar__1_1, ErrorContext_42, TypesAndModes0_102, &TypesAndModes_103, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_61);
                {
                  TypesAndMaybeModes_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, TypesAndMaybeModes_43, 0) = ((MR_Box) (TypesAndModes_103));
                }
              }
              break;
          }
        }
        {
          ConstraintErrorContext_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConstraintErrorContext_44, 0) = ((MR_Box) (Context_34));
          MR_hl_field(1, ConstraintErrorContext_44, 1) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(1, ConstraintErrorContext_44, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
          MR_hl_field(1, ConstraintErrorContext_44, 3) = ((MR_Box) (Name_35));
          MR_hl_field(1, ConstraintErrorContext_44, 4) = ((MR_Box) (UserArityIfKnown_37));
        }
        UnivCs0_85 = ((MR_Word) ((MR_hl_field(0, Constraints0_33, 0))));
        ExistCs0_86 = ((MR_Word) ((MR_hl_field(0, Constraints0_33, 1))));
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(HeadVar__1_1, ConstraintErrorContext_44, UnivCs0_85, &UnivCs_87, STATE_VARIABLE_Info_1_61, &STATE_VARIABLE_Info_1_89);
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(HeadVar__1_1, ConstraintErrorContext_44, ExistCs0_86, &ExistCs_88, STATE_VARIABLE_Info_1_89, &STATE_VARIABLE_Info_2_62);
        {
          Constraints_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Constraints_45, 0) = ((MR_Box) (UnivCs_87));
          MR_hl_field(0, Constraints_45, 1) = ((MR_Box) (ExistCs_88));
        }
        if ((MaybeWithType0_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeWithType_48 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_3_63 = STATE_VARIABLE_Info_2_62;
        }
        else
        {
          MR_Word WithType0_46 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_26, 0))));
          MR_Word WithType_47;

          parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_42, WithType0_46, &WithType_47, STATE_VARIABLE_Info_2_62, &STATE_VARIABLE_Info_3_63);
          {
            MaybeWithType_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithType_48, 0) = ((MR_Box) (WithType_47));
          }
        }
        if ((MaybeWithInst0_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeWithInst_51 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_1_21 = STATE_VARIABLE_Info_3_63;
        }
        else
        {
          MR_Word WithInst0_49 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_27, 0))));
          MR_Word WithInst_50;

          parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_42, WithInst0_49, &WithInst_50, STATE_VARIABLE_Info_3_63, &STATE_VARIABLE_Info_1_21);
          {
            MaybeWithInst_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeWithInst_51, 0) = ((MR_Box) (WithInst_50));
          }
        }
        {
          PredOrFuncInfo_52 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredOrFuncInfo_52, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(0, PredOrFuncInfo_52, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
          MR_hl_field(0, PredOrFuncInfo_52, 2) = ((MR_Box) (TypesAndMaybeModes_43));
          MR_hl_field(0, PredOrFuncInfo_52, 3) = ((MR_Box) (MaybeWithType_48));
          MR_hl_field(0, PredOrFuncInfo_52, 4) = ((MR_Box) (MaybeWithInst_51));
          MR_hl_field(0, PredOrFuncInfo_52, 5) = ((MR_Box) (MaybeDetism_28));
          MR_hl_field(0, PredOrFuncInfo_52, 6) = ((MR_Box) (TypeVarset_29));
          MR_hl_field(0, PredOrFuncInfo_52, 7) = ((MR_Box) (InstVarset_30));
          MR_hl_field(0, PredOrFuncInfo_52, 8) = ((MR_Box) (ExistQVars_31));
          MR_hl_field(0, PredOrFuncInfo_52, 9) = (MR_Box) ((MR_Unsigned) (Purity_32));
          MR_hl_field(0, PredOrFuncInfo_52, 10) = ((MR_Box) (Constraints_45));
          MR_hl_field(0, PredOrFuncInfo_52, 11) = ((MR_Box) (Context_34));
        }
        Decl_16 = (MR_Word) ((MR_Word) (PredOrFuncInfo_52));
      }
      {
        HeadVar__4_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_120, 0) = ((MR_Box) (Decl_16));
        MR_hl_field(1, HeadVar__4_120, 1) = NULL;
      }
      AddrDecls_118 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_120, 1)));
      *AddrOfHeadVar__4_119 = HeadVar__4_120;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Decls0_15;
      next_value_of_AddrOfHeadVar__4_119 = AddrDecls_118;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_119 = next_value_of_AddrOfHeadVar__4_119;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word TypeAndMode0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TypesAndModes0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word TypeAndMode_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word Type0_22 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_14, 0))));
    MR_Word Mode0_23 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_14, 1))));
    MR_Word Type_24;
    MR_Word Mode_25;
    MR_Word STATE_VARIABLE_Info_1_26;
    MR_Word * AddrTypesAndModes_42;

    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, HeadVar__2_2, Type0_22, &Type_24, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_26);
    if (((MR_tag((MR_Word) Mode0_23)) == (MR_Integer) 0))
    {
      MR_Word InstA0_27 = ((MR_Word) ((MR_hl_field(0, Mode0_23, 0))));
      MR_Word InstB0_28 = ((MR_Word) ((MR_hl_field(0, Mode0_23, 1))));
      MR_Word InstA_29;
      MR_Word InstB_30;
      MR_Word STATE_VARIABLE_Info_1_37;

      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_27, &InstA_29, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_1_37);
      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_28, &InstB_30, STATE_VARIABLE_Info_1_37, &STATE_VARIABLE_Info_1_21);
      {
        Mode_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_25, 0) = ((MR_Box) (InstA_29));
        MR_hl_field(0, Mode_25, 1) = ((MR_Box) (InstB_30));
      }
    }
    else
    {
      MR_Word SymName0_31 = ((MR_Word) ((MR_hl_field(1, Mode0_23, 0))));
      MR_Word Insts0_32 = ((MR_Word) ((MR_hl_field(1, Mode0_23, 1))));
      MR_Word Insts_33;
      MR_Integer Arity_34;
      MR_Word Modes_35;
      MR_Word SymName_36;
      MR_Word STATE_VARIABLE_Info_3_38;
      MR_Word Var_40;

      parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_32, &Insts_33, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_3_38);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_33, &Arity_34);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_38, &Modes_35);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (SymName0_31));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (Arity_34));
      }
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes_35, (MR_Integer) 2, Var_40, &SymName_36, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_1_21);
      {
        Mode_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_25, 0) = ((MR_Box) (SymName_36));
        MR_hl_field(1, Mode_25, 1) = ((MR_Box) (Insts_33));
      }
    }
    {
      TypeAndMode_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeAndMode_16, 0) = ((MR_Box) (Type_24));
      MR_hl_field(0, TypeAndMode_16, 1) = ((MR_Box) (Mode_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAndMode_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypesAndModes_42 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_6_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_15, AddrTypesAndModes_42, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types_and_modes__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_43,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_43 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word TypeAndMode0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TypesAndModes0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word TypeAndMode_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word Type0_22 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_14, 0))));
      MR_Word Mode0_23 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_14, 1))));
      MR_Word Type_24;
      MR_Word Mode_25;
      MR_Word STATE_VARIABLE_Info_1_26;
      MR_Word * AddrTypesAndModes_42;
      MR_Word HeadVar__4_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_43;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, HeadVar__2_2, Type0_22, &Type_24, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_26);
      if (((MR_tag((MR_Word) Mode0_23)) == (MR_Integer) 0))
      {
        MR_Word InstA0_27 = ((MR_Word) ((MR_hl_field(0, Mode0_23, 0))));
        MR_Word InstB0_28 = ((MR_Word) ((MR_hl_field(0, Mode0_23, 1))));
        MR_Word InstA_29;
        MR_Word InstB_30;
        MR_Word STATE_VARIABLE_Info_1_37;

        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_27, &InstA_29, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_1_37);
        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_28, &InstB_30, STATE_VARIABLE_Info_1_37, &STATE_VARIABLE_Info_1_21);
        {
          Mode_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_25, 0) = ((MR_Box) (InstA_29));
          MR_hl_field(0, Mode_25, 1) = ((MR_Box) (InstB_30));
        }
      }
      else
      {
        MR_Word SymName0_31 = ((MR_Word) ((MR_hl_field(1, Mode0_23, 0))));
        MR_Word Insts0_32 = ((MR_Word) ((MR_hl_field(1, Mode0_23, 1))));
        MR_Word Insts_33;
        MR_Integer Arity_34;
        MR_Word Modes_35;
        MR_Word SymName_36;
        MR_Word STATE_VARIABLE_Info_3_38;
        MR_Word Var_40;

        parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_32, &Insts_33, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_3_38);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_33, &Arity_34);
        parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_38, &Modes_35);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (SymName0_31));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) (Arity_34));
        }
        parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes_35, (MR_Integer) 2, Var_40, &SymName_36, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_1_21);
        {
          Mode_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mode_25, 0) = ((MR_Box) (SymName_36));
          MR_hl_field(1, Mode_25, 1) = ((MR_Box) (Insts_33));
        }
      }
      {
        TypeAndMode_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeAndMode_16, 0) = ((MR_Box) (Type_24));
        MR_hl_field(0, TypeAndMode_16, 1) = ((MR_Box) (Mode_25));
      }
      {
        HeadVar__4_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_44, 0) = ((MR_Box) (TypeAndMode_16));
        MR_hl_field(1, HeadVar__4_44, 1) = NULL;
      }
      AddrTypesAndModes_42 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_44, 1)));
      *AddrOfHeadVar__4_43 = HeadVar__4_44;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TypesAndModes0_15;
      next_value_of_AddrOfHeadVar__4_43 = AddrTypesAndModes_42;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_43 = next_value_of_AddrOfHeadVar__4_43;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Types0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Type_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word * AddrTypes_22;

    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, HeadVar__2_2, Type0_14, &Type_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypes_22 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Types0_15, AddrTypes_22, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_types__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_23,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_23 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Types0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Type_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word * AddrTypes_22;
      MR_Word HeadVar__4_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_23;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, HeadVar__2_2, Type0_14, &Type_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
      {
        HeadVar__4_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_24, 0) = ((MR_Box) (Type_16));
        MR_hl_field(1, HeadVar__4_24, 1) = NULL;
      }
      AddrTypes_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_24, 1)));
      *AddrOfHeadVar__4_23 = HeadVar__4_24;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types0_15;
      next_value_of_AddrOfHeadVar__4_23 = AddrTypes_22;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_23 = next_value_of_AddrOfHeadVar__4_23;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_4_p_0(
  MR_Word CheckedDefn0_5,
  MR_Word * CheckedDefn_6,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word StdModeDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_5, 0))));
  MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_5, 1))));
  MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(0, StdModeDefn0_8, 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn0_11 = ((MR_Word) ((MR_hl_field(0, StdModeDefn0_8, 1))));
  MR_Word InInt_12;
  MR_Word MaybeAbstractDefn_13;
  MR_Word StdModeDefn_14;
  MR_Word MaybeIntDefn0_15;
  MR_Word MaybeImpDefn0_16;
  MR_Word MaybeIntDefn_18;
  MR_Word MaybeImpDefn_19;
  MR_Word SrcDefns_20;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word STATE_VARIABLE_Info_2_27;
  MR_Word SymName_52;
  MR_Word Params_53;
  MR_Word MaybeAbstractModeDefn0_54;
  MR_Word InstVarSet_55;
  MR_Word Context_56;
  MR_Word SeqNum_57;
  MR_Integer Arity_58;
  MR_Word ModeCtor_59;
  MR_Word MaybeAbstractModeDefn_60;

  switch (Status_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InInt_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      InInt_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      InInt_12 = (MR_Integer) 1;
      break;
  }
  SymName_52 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 0))));
  Params_53 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 1))));
  MaybeAbstractModeDefn0_54 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 2))));
  InstVarSet_55 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 3))));
  Context_56 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 4))));
  SeqNum_57 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 5))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_53, &Arity_58);
  {
    ModeCtor_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtor_59, 0) = ((MR_Box) (SymName_52));
    MR_hl_field(0, ModeCtor_59, 1) = ((MR_Box) (Arity_58));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_defn_7_p_0(InInt_12, Context_56, ModeCtor_59, MaybeAbstractModeDefn0_54, &MaybeAbstractModeDefn_60, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_24);
  {
    MaybeAbstractDefn_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeAbstractDefn_13, 0) = ((MR_Box) (SymName_52));
    MR_hl_field(0, MaybeAbstractDefn_13, 1) = ((MR_Box) (Params_53));
    MR_hl_field(0, MaybeAbstractDefn_13, 2) = ((MR_Box) (MaybeAbstractModeDefn_60));
    MR_hl_field(0, MaybeAbstractDefn_13, 3) = ((MR_Box) (InstVarSet_55));
    MR_hl_field(0, MaybeAbstractDefn_13, 4) = ((MR_Box) (Context_56));
    MR_hl_field(0, MaybeAbstractDefn_13, 5) = ((MR_Box) (SeqNum_57));
  }
  {
    StdModeDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdModeDefn_14, 0) = (MR_Box) ((MR_Unsigned) (Status_10));
    MR_hl_field(0, StdModeDefn_14, 1) = ((MR_Box) (MaybeAbstractDefn_13));
  }
  MaybeIntDefn0_15 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, 0))));
  MaybeImpDefn0_16 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, 1))));
  if ((MaybeIntDefn0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeIntDefn_18 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_2_27 = STATE_VARIABLE_Info_1_24;
  }
  else
  {
    MR_Word Defn0_64 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn0_15, 0))));
    MR_Word Defn_65;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__552__1__ho12_6_p_0((MR_Integer) 1, Defn0_64, &Defn_65, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_2_27);
    {
      MaybeIntDefn_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIntDefn_18, 0) = ((MR_Box) (Defn_65));
    }
  }
  if ((MaybeImpDefn0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeImpDefn_19 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_2_27;
  }
  else
  {
    MR_Word Defn0_69 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn0_16, 0))));
    MR_Word Defn_70;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__552__1__ho12_6_p_0((MR_Integer) 0, Defn0_69, &Defn_70, STATE_VARIABLE_Info_2_27, STATE_VARIABLE_Info_22);
    {
      MaybeImpDefn_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeImpDefn_19, 0) = ((MR_Box) (Defn_70));
    }
  }
  {
    SrcDefns_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SrcDefns_20, 0) = ((MR_Box) (MaybeIntDefn_18));
    MR_hl_field(0, SrcDefns_20, 1) = ((MR_Box) (MaybeImpDefn_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CheckedDefn_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (StdModeDefn_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_mode_ctor_checked_defn__552__1__ho12_6_p_0(
  MR_Word HeadVar__2_37,
  MR_Word HeadVar__3_38,
  MR_Word * HeadVar__4_39,
  MR_Word HeadVar__5_40,
  MR_Word * HeadVar__6_41)
{
  MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 0))));
  MR_Word Params_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 1))));
  MR_Word MaybeAbstractModeDefn0_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 2))));
  MR_Word InstVarSet_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 3))));
  MR_Word Context_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 4))));
  MR_Word SeqNum_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 5))));
  MR_Integer Arity_50;
  MR_Word ModeCtor_51;
  MR_Word MaybeAbstractModeDefn_52;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_45, &Arity_50);
  {
    ModeCtor_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeCtor_51, 0) = ((MR_Box) (SymName_44));
    MR_hl_field(0, ModeCtor_51, 1) = ((MR_Box) (Arity_50));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_defn_7_p_0(HeadVar__2_37, Context_48, ModeCtor_51, MaybeAbstractModeDefn0_46, &MaybeAbstractModeDefn_52, HeadVar__5_40, HeadVar__6_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_39 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_45));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeAbstractModeDefn_52));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstVarSet_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_48));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_49));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word ModeCtor_10,
  MR_Word MaybeAbstractModeDefn0_11,
  MR_Word * MaybeAbstractModeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  if ((MaybeAbstractModeDefn0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeAbstractModeDefn_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
  }
  else
  {
    MR_Word ModeDefn0_14 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn0_11, 0))));
    MR_Word ErrorContext_15;
    MR_Word Mode0_16;
    MR_Word Mode_17;
    MR_Word ModeDefn_18;

    {
      ErrorContext_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ErrorContext_15, 0) = ((MR_Box) (Context_9));
      MR_hl_field(2, ErrorContext_15, 1) = ((MR_Box) (ModeCtor_10));
    }
    Mode0_16 = (MR_Word) (ModeDefn0_14);
    if (((MR_tag((MR_Word) Mode0_16)) == (MR_Integer) 0))
    {
      MR_Word InstA0_21 = ((MR_Word) ((MR_hl_field(0, Mode0_16, 0))));
      MR_Word InstB0_22 = ((MR_Word) ((MR_hl_field(0, Mode0_16, 1))));
      MR_Word InstA_23;
      MR_Word InstB_24;
      MR_Word STATE_VARIABLE_Info_1_31;

      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_8, ErrorContext_15, InstA0_21, &InstA_23, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_31);
      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_8, ErrorContext_15, InstB0_22, &InstB_24, STATE_VARIABLE_Info_1_31, STATE_VARIABLE_Info_20);
      {
        Mode_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_17, 0) = ((MR_Box) (InstA_23));
        MR_hl_field(0, Mode_17, 1) = ((MR_Box) (InstB_24));
      }
    }
    else
    {
      MR_Word SymName0_25 = ((MR_Word) ((MR_hl_field(1, Mode0_16, 0))));
      MR_Word Insts0_26 = ((MR_Word) ((MR_hl_field(1, Mode0_16, 1))));
      MR_Word Insts_27;
      MR_Integer Arity_28;
      MR_Word Modes_29;
      MR_Word SymName_30;
      MR_Word STATE_VARIABLE_Info_3_32;
      MR_Word Var_34;

      parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(InInt_8, ErrorContext_15, Insts0_26, &Insts_27, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_3_32);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_27, &Arity_28);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_32, &Modes_29);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (SymName0_25));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (Arity_28));
      }
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_8, ErrorContext_15, Modes_29, (MR_Integer) 2, Var_34, &SymName_30, STATE_VARIABLE_Info_3_32, STATE_VARIABLE_Info_20);
      {
        Mode_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_17, 0) = ((MR_Box) (SymName_30));
        MR_hl_field(1, Mode_17, 1) = ((MR_Box) (Insts_27));
      }
    }
    ModeDefn_18 = (MR_Word) (Mode_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractModeDefn_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModeDefn_18));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_4_p_0(
  MR_Word CheckedDefn0_5,
  MR_Word * CheckedDefn_6,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word StdInstDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_5, 0))));
  MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_5, 1))));
  MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn0_8, 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn0_11 = ((MR_Word) ((MR_hl_field(0, StdInstDefn0_8, 1))));
  MR_Word InInt_12;
  MR_Word MaybeAbstractDefn_13;
  MR_Word StdInstDefn_14;
  MR_Word MaybeIntDefn0_15;
  MR_Word MaybeImpDefn0_16;
  MR_Word MaybeIntDefn_18;
  MR_Word MaybeImpDefn_19;
  MR_Word SrcDefns_20;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word STATE_VARIABLE_Info_2_27;
  MR_Word SymName_52;
  MR_Word Params_53;
  MR_Word MaybeForTypeCtor0_54;
  MR_Word MaybeAbstractInstDefn0_55;
  MR_Word InstVarSet_56;
  MR_Word Context_57;
  MR_Word SeqNum_58;
  MR_Integer Arity_59;
  MR_Word InstCtor_60;
  MR_Word ErrorContext_61;
  MR_Word MaybeAbstractInstDefn_62;
  MR_Word MaybeForTypeCtor_65;
  MR_Word STATE_VARIABLE_Info_1_66;

  switch (Status_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InInt_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      InInt_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      InInt_12 = (MR_Integer) 1;
      break;
  }
  SymName_52 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 0))));
  Params_53 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 1))));
  MaybeForTypeCtor0_54 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 2))));
  MaybeAbstractInstDefn0_55 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 3))));
  InstVarSet_56 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 4))));
  Context_57 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 5))));
  SeqNum_58 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn0_11, 6))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_53, &Arity_59);
  {
    InstCtor_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtor_60, 0) = ((MR_Box) (SymName_52));
    MR_hl_field(0, InstCtor_60, 1) = ((MR_Box) (Arity_59));
  }
  {
    ErrorContext_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ErrorContext_61, 0) = ((MR_Box) (Context_57));
    MR_hl_field(1, ErrorContext_61, 1) = ((MR_Box) (InstCtor_60));
  }
  parse_tree__module_qual__qualify_items__qualify_inst_defn_7_p_0(InInt_12, Context_57, InstCtor_60, MaybeAbstractInstDefn0_55, &MaybeAbstractInstDefn_62, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_66);
  if ((MaybeForTypeCtor0_54 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeForTypeCtor_65 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_1_24 = STATE_VARIABLE_Info_1_66;
  }
  else
  {
    MR_Word ForTypeCtor0_63 = ((MR_Word) ((MR_hl_field(1, MaybeForTypeCtor0_54, 0))));
    MR_Word ForTypeCtor_64;
    MR_Word SymName0_69 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_63, 0))));
    MR_Integer Arity_70 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_63, 1))));
    MR_Word SymName_75 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_63, 0))));
    MR_Integer Var_76 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_63, 1))));

    succeeded = (Var_76 == (MR_Integer) 0);
    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_75);
    if (succeeded)
    {
      ForTypeCtor_64 = ForTypeCtor0_63;
      STATE_VARIABLE_Info_1_24 = STATE_VARIABLE_Info_1_66;
    }
    else
    {
      MR_Word TypeCtorId0_71;
      MR_Word Types_72;
      MR_Word SymName_73;

      {
        TypeCtorId0_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtorId0_71, 0) = ((MR_Box) (SymName0_69));
        MR_hl_field(0, TypeCtorId0_71, 1) = ((MR_Box) (Arity_70));
      }
      parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_1_66, &Types_72);
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_12, ErrorContext_61, Types_72, (MR_Integer) 0, TypeCtorId0_71, &SymName_73, STATE_VARIABLE_Info_1_66, &STATE_VARIABLE_Info_1_24);
      {
        ForTypeCtor_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForTypeCtor_64, 0) = ((MR_Box) (SymName_73));
        MR_hl_field(0, ForTypeCtor_64, 1) = ((MR_Box) (Arity_70));
      }
    }
    {
      MaybeForTypeCtor_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeForTypeCtor_65, 0) = ((MR_Box) (ForTypeCtor_64));
    }
  }
  {
    MaybeAbstractDefn_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeAbstractDefn_13, 0) = ((MR_Box) (SymName_52));
    MR_hl_field(0, MaybeAbstractDefn_13, 1) = ((MR_Box) (Params_53));
    MR_hl_field(0, MaybeAbstractDefn_13, 2) = ((MR_Box) (MaybeForTypeCtor_65));
    MR_hl_field(0, MaybeAbstractDefn_13, 3) = ((MR_Box) (MaybeAbstractInstDefn_62));
    MR_hl_field(0, MaybeAbstractDefn_13, 4) = ((MR_Box) (InstVarSet_56));
    MR_hl_field(0, MaybeAbstractDefn_13, 5) = ((MR_Box) (Context_57));
    MR_hl_field(0, MaybeAbstractDefn_13, 6) = ((MR_Box) (SeqNum_58));
  }
  {
    StdInstDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdInstDefn_14, 0) = (MR_Box) ((MR_Unsigned) (Status_10));
    MR_hl_field(0, StdInstDefn_14, 1) = ((MR_Box) (MaybeAbstractDefn_13));
  }
  MaybeIntDefn0_15 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, 0))));
  MaybeImpDefn0_16 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, 1))));
  if ((MaybeIntDefn0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeIntDefn_18 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_2_27 = STATE_VARIABLE_Info_1_24;
  }
  else
  {
    MR_Word Defn0_78 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn0_15, 0))));
    MR_Word Defn_79;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__530__1__ho11_6_p_0((MR_Integer) 1, Defn0_78, &Defn_79, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_2_27);
    {
      MaybeIntDefn_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIntDefn_18, 0) = ((MR_Box) (Defn_79));
    }
  }
  if ((MaybeImpDefn0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeImpDefn_19 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_2_27;
  }
  else
  {
    MR_Word Defn0_83 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn0_16, 0))));
    MR_Word Defn_84;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__530__1__ho11_6_p_0((MR_Integer) 0, Defn0_83, &Defn_84, STATE_VARIABLE_Info_2_27, STATE_VARIABLE_Info_22);
    {
      MaybeImpDefn_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeImpDefn_19, 0) = ((MR_Box) (Defn_84));
    }
  }
  {
    SrcDefns_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SrcDefns_20, 0) = ((MR_Box) (MaybeIntDefn_18));
    MR_hl_field(0, SrcDefns_20, 1) = ((MR_Box) (MaybeImpDefn_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CheckedDefn_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (StdInstDefn_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_inst_ctor_checked_defn__530__1__ho11_6_p_0(
  MR_Word HeadVar__2_37,
  MR_Word HeadVar__3_38,
  MR_Word * HeadVar__4_39,
  MR_Word HeadVar__5_40,
  MR_Word * HeadVar__6_41)
{
  MR_bool succeeded;
  MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 0))));
  MR_Word Params_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 1))));
  MR_Word MaybeForTypeCtor0_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 2))));
  MR_Word MaybeAbstractInstDefn0_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 3))));
  MR_Word InstVarSet_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 4))));
  MR_Word Context_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 5))));
  MR_Word SeqNum_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_38, 6))));
  MR_Integer Arity_51;
  MR_Word InstCtor_52;
  MR_Word ErrorContext_53;
  MR_Word MaybeAbstractInstDefn_54;
  MR_Word MaybeForTypeCtor_57;
  MR_Word STATE_VARIABLE_Info_1_58;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[4]), Params_45, &Arity_51);
  {
    InstCtor_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstCtor_52, 0) = ((MR_Box) (SymName_44));
    MR_hl_field(0, InstCtor_52, 1) = ((MR_Box) (Arity_51));
  }
  {
    ErrorContext_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ErrorContext_53, 0) = ((MR_Box) (Context_49));
    MR_hl_field(1, ErrorContext_53, 1) = ((MR_Box) (InstCtor_52));
  }
  parse_tree__module_qual__qualify_items__qualify_inst_defn_7_p_0(HeadVar__2_37, Context_49, InstCtor_52, MaybeAbstractInstDefn0_47, &MaybeAbstractInstDefn_54, HeadVar__5_40, &STATE_VARIABLE_Info_1_58);
  if ((MaybeForTypeCtor0_46 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeForTypeCtor_57 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_41 = STATE_VARIABLE_Info_1_58;
  }
  else
  {
    MR_Word ForTypeCtor0_55 = ((MR_Word) ((MR_hl_field(1, MaybeForTypeCtor0_46, 0))));
    MR_Word ForTypeCtor_56;
    MR_Word SymName0_61 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_55, 0))));
    MR_Integer Arity_62 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_55, 1))));
    MR_Word SymName_67 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_55, 0))));
    MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_55, 1))));

    succeeded = (Var_68 == (MR_Integer) 0);
    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_67);
    if (succeeded)
    {
      ForTypeCtor_56 = ForTypeCtor0_55;
      *HeadVar__6_41 = STATE_VARIABLE_Info_1_58;
    }
    else
    {
      MR_Word TypeCtorId0_63;
      MR_Word Types_64;
      MR_Word SymName_65;

      {
        TypeCtorId0_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtorId0_63, 0) = ((MR_Box) (SymName0_61));
        MR_hl_field(0, TypeCtorId0_63, 1) = ((MR_Box) (Arity_62));
      }
      parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_1_58, &Types_64);
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__2_37, ErrorContext_53, Types_64, (MR_Integer) 0, TypeCtorId0_63, &SymName_65, STATE_VARIABLE_Info_1_58, HeadVar__6_41);
      {
        ForTypeCtor_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForTypeCtor_56, 0) = ((MR_Box) (SymName_65));
        MR_hl_field(0, ForTypeCtor_56, 1) = ((MR_Box) (Arity_62));
      }
    }
    {
      MaybeForTypeCtor_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeForTypeCtor_57, 0) = ((MR_Box) (ForTypeCtor_56));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_39 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_45));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeForTypeCtor_57));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeAbstractInstDefn_54));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstVarSet_48));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (SeqNum_50));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word InstCtor_10,
  MR_Word MaybeAbstractInstDefn0_11,
  MR_Word * MaybeAbstractInstDefn_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  if ((MaybeAbstractInstDefn0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeAbstractInstDefn_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
  }
  else
  {
    MR_Word InstDefn0_14 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn0_11, 0))));
    MR_Word ErrorContext_15;
    MR_Word Inst0_16;
    MR_Word Inst_17;
    MR_Word InstDefn_18;

    {
      ErrorContext_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ErrorContext_15, 0) = ((MR_Box) (Context_9));
      MR_hl_field(1, ErrorContext_15, 1) = ((MR_Box) (InstCtor_10));
    }
    Inst0_16 = (MR_Word) (InstDefn0_14);
    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_8, ErrorContext_15, Inst0_16, &Inst_17, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    InstDefn_18 = (MR_Word) (Inst_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractInstDefn_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstDefn_18));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_ItemForeignEnum_8;
  MR_Word conv10_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_enum_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv11_ItemForeignEnum_8, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_Info_18);
  *wrapper_arg_2 = ((MR_Box) (conv11_ItemForeignEnum_8));
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__4_155;
  MR_Word conv7_HeadVar__6_157;

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__506__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__4_155, ((MR_Word) (wrapper_arg_3)), &conv7_HeadVar__6_157);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__4_155));
  *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__6_157));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_TypeDefn_12;
  MR_Word conv5_STATE_VARIABLE_Info_25;

  parse_tree__module_qual__qualify_items__qualify_type_defn_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv6_TypeDefn_12, ((MR_Word) (wrapper_arg_6)), &conv5_STATE_VARIABLE_Info_25);
  *wrapper_arg_5 = ((MR_Box) (conv6_TypeDefn_12));
  *wrapper_arg_7 = ((MR_Box) (conv5_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_141;
  MR_Word conv2_HeadVar__6_143;

  parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__502__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__4_141, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__6_143);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_141));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__6_143));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TypeDefn_12;
  MR_Word conv0_STATE_VARIABLE_Info_25;

  parse_tree__module_qual__qualify_items__qualify_type_defn_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv1_TypeDefn_12, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_25);
  *wrapper_arg_5 = ((MR_Box) (conv1_TypeDefn_12));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0(
  MR_Word CheckedDefn0_5,
  MR_Word * CheckedDefn_6,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  if (((MR_tag((MR_Word) CheckedDefn0_5)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_5, 0))));
    MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_5, 1))));
    MR_Word SolverDefn_12;
    MR_Word MaybeIntDefn0_17;
    MR_Word MaybeImpDefn0_18;
    MR_Word MaybeIntDefn_20;
    MR_Word MaybeImpDefn_21;
    MR_Word SrcDefns_22;
    MR_Word STATE_VARIABLE_Info_1_49;
    MR_Word STATE_VARIABLE_Info_2_52;

    if (((MR_tag((MR_Word) SolverDefn0_8)) == (MR_Integer) 0))
    {
      SolverDefn_12 = SolverDefn0_8;
      STATE_VARIABLE_Info_1_49 = STATE_VARIABLE_Info_0_46;
    }
    else
    {
      MR_Word MaybeAbsDefn0_13 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_8, 0))));
      MR_Word FullDefn0_14 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_8, 1))));
      MR_Word FullDefn_16;
      MR_Word SymName_172 = ((MR_Word) ((MR_hl_field(0, FullDefn0_14, 0))));
      MR_Word Params_173 = ((MR_Word) ((MR_hl_field(0, FullDefn0_14, 1))));
      MR_Word TypeDefn0_174 = ((MR_Word) ((MR_hl_field(0, FullDefn0_14, 2))));
      MR_Word TVarSet_175 = ((MR_Word) ((MR_hl_field(0, FullDefn0_14, 3))));
      MR_Word Context_176 = ((MR_Word) ((MR_hl_field(0, FullDefn0_14, 4))));
      MR_Word SeqNum_177 = ((MR_Word) ((MR_hl_field(0, FullDefn0_14, 5))));
      MR_Integer Arity_178;
      MR_Word TypeCtor_179;
      MR_Word TypeDefn_180;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_173, &Arity_178);
      {
        TypeCtor_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtor_179, 0) = ((MR_Box) (SymName_172));
        MR_hl_field(0, TypeCtor_179, 1) = ((MR_Box) (Arity_178));
      }
      parse_tree__module_qual__qualify_items__qualify_type_defn_solver_7_p_0((MR_Integer) 0, Context_176, TypeCtor_179, TypeDefn0_174, &TypeDefn_180, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_1_49);
      {
        FullDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FullDefn_16, 0) = ((MR_Box) (SymName_172));
        MR_hl_field(0, FullDefn_16, 1) = ((MR_Box) (Params_173));
        MR_hl_field(0, FullDefn_16, 2) = ((MR_Box) (TypeDefn_180));
        MR_hl_field(0, FullDefn_16, 3) = ((MR_Box) (TVarSet_175));
        MR_hl_field(0, FullDefn_16, 4) = ((MR_Box) (Context_176));
        MR_hl_field(0, FullDefn_16, 5) = ((MR_Box) (SeqNum_177));
      }
      {
        SolverDefn_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SolverDefn_12, 0) = ((MR_Box) (MaybeAbsDefn0_13));
        MR_hl_field(1, SolverDefn_12, 1) = ((MR_Box) (FullDefn_16));
      }
    }
    MaybeIntDefn0_17 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, 0))));
    MaybeImpDefn0_18 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, 1))));
    if ((MaybeIntDefn0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeIntDefn_20 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_2_52 = STATE_VARIABLE_Info_1_49;
    }
    else
    {
      MR_Word Defn0_184 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn0_17, 0))));
      MR_Word Defn_185;

      parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__454__1__ho10_6_p_0((MR_Integer) 1, Defn0_184, &Defn_185, STATE_VARIABLE_Info_1_49, &STATE_VARIABLE_Info_2_52);
      {
        MaybeIntDefn_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeIntDefn_20, 0) = ((MR_Box) (Defn_185));
      }
    }
    parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_6_p_0((MR_Integer) 0, MaybeImpDefn0_18, &MaybeImpDefn_21, STATE_VARIABLE_Info_2_52, STATE_VARIABLE_Info_47);
    {
      SrcDefns_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_22, 0) = ((MR_Box) (MaybeIntDefn_20));
      MR_hl_field(0, SrcDefns_22, 1) = ((MR_Box) (MaybeImpDefn_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CheckedDefn_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SolverDefn_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_22));
    }
  }
  else
  {
    MR_Word StdDefn0_23 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_5, 0))));
    MR_Word StdDefn_27;
    MR_Word IntDefns0_40;
    MR_Word ImpDefns0_41;
    MR_Word ImpForeignEnums0_42;
    MR_Word IntDefns_43;
    MR_Word ImpDefns_44;
    MR_Word ImpForeignEnums_45;
    MR_Word STATE_VARIABLE_Info_4_56;
    MR_Word STATE_VARIABLE_Info_8_64;
    MR_Word STATE_VARIABLE_Info_9_68;
    MR_Word SrcDefns0_83 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_5, 1))));
    MR_Word SrcDefns_85;
    MR_Box conv4_STATE_VARIABLE_Info_8_64;
    MR_Box conv9_STATE_VARIABLE_Info_9_68;
    MR_Box conv12_STATE_VARIABLE_Info_47;

    switch (MR_tag((MR_Word) StdDefn0_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_24 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_23, 0))) & (MR_Integer) 3);
          MR_Word EqvDefn0_25 = ((MR_Word) ((MR_hl_field(0, StdDefn0_23, 1))));
          MR_Word EqvDefn_26;
          MR_Word InInt_74;

          switch (EqvStatus_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              InInt_74 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              InInt_74 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              InInt_74 = (MR_Integer) 1;
              break;
          }
          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_6_p_0(InInt_74, EqvDefn0_25, &EqvDefn_26, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_56);
          {
            StdDefn_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StdDefn_27, 0) = (MR_Box) ((MR_Unsigned) (EqvStatus_24));
            MR_hl_field(0, StdDefn_27, 1) = ((MR_Box) (EqvDefn_26));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStatus_28 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn0_23, 0))) & (MR_Integer) 3);
          MR_Word SubDefn0_29 = ((MR_Word) ((MR_hl_field(1, StdDefn0_23, 1))));
          MR_Word SubDefn_30;
          MR_Word InInt_75;

          switch (SubStatus_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              InInt_75 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              InInt_75 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              InInt_75 = (MR_Integer) 1;
              break;
          }
          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_6_p_0(InInt_75, SubDefn0_29, &SubDefn_30, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_56);
          {
            StdDefn_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StdDefn_27, 0) = (MR_Box) ((MR_Unsigned) (SubStatus_28));
            MR_hl_field(1, StdDefn_27, 1) = ((MR_Box) (SubDefn_30));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuStatus_31 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn0_23, 0))) & (MR_Integer) 3);
          MR_Word DuDefn0_32 = ((MR_Word) ((MR_hl_field(2, StdDefn0_23, 1))));
          MR_String HeadCtor_33 = ((MR_String) ((MR_hl_field(2, StdDefn0_23, 2))));
          MR_Word TailCtors_34 = ((MR_Word) ((MR_hl_field(2, StdDefn0_23, 3))));
          MR_Word CJCsDefnOrEnum_35 = ((MR_Word) ((MR_hl_field(2, StdDefn0_23, 4))));
          MR_Word DuDefn_36;
          MR_Word InInt_76 = ((&parse_tree__module_qual__qualify_items_vector_common_10[0 + DuStatus_31]))->parse_tree__module_qual__qualify_items__vector_common_type_10_0__vct_10_f_0;

          parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_6_p_0(InInt_76, DuDefn0_32, &DuDefn_36, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_56);
          {
            StdDefn_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, StdDefn_27, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
            MR_hl_field(2, StdDefn_27, 1) = ((MR_Box) (DuDefn_36));
            MR_hl_field(2, StdDefn_27, 2) = ((MR_Box) (HeadCtor_33));
            MR_hl_field(2, StdDefn_27, 3) = ((MR_Box) (TailCtors_34));
            MR_hl_field(2, StdDefn_27, 4) = ((MR_Box) (CJCsDefnOrEnum_35));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn0_23, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InInt_77;
              MR_Word DuStatus_78 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_23, 1))) & (MR_Integer) 3);
              MR_Word DuDefn0_79 = ((MR_Word) ((MR_hl_field(3, StdDefn0_23, 2))));
              MR_Word CJCsDefnOrEnum_80 = ((MR_Word) ((MR_hl_field(3, StdDefn0_23, 3))));
              MR_Word DuDefn_81;

              InInt_77 = ((&parse_tree__module_qual__qualify_items_vector_common_10[4 + DuStatus_78]))->parse_tree__module_qual__qualify_items__vector_common_type_10_0__vct_10_f_0;
              parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_6_p_0(InInt_77, DuDefn0_79, &DuDefn_81, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_56);
              {
                StdDefn_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, StdDefn_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, StdDefn_27, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_78));
                MR_hl_field(3, StdDefn_27, 2) = ((MR_Box) (DuDefn_81));
                MR_hl_field(3, StdDefn_27, 3) = ((MR_Box) (CJCsDefnOrEnum_80));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              StdDefn_27 = StdDefn0_23;
              STATE_VARIABLE_Info_4_56 = STATE_VARIABLE_Info_0_46;
            }
            break;
        }
        break;
    }
    IntDefns0_40 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_83, 0))));
    ImpDefns0_41 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_83, 1))));
    ImpForeignEnums0_42 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_83, 2))));
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_12[0]), IntDefns0_40, &IntDefns_43, ((MR_Box) (STATE_VARIABLE_Info_4_56)), &conv4_STATE_VARIABLE_Info_8_64);
    STATE_VARIABLE_Info_8_64 = ((MR_Word) (conv4_STATE_VARIABLE_Info_8_64));
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_12[1]), ImpDefns0_41, &ImpDefns_44, ((MR_Box) (STATE_VARIABLE_Info_8_64)), &conv9_STATE_VARIABLE_Info_9_68);
    STATE_VARIABLE_Info_9_68 = ((MR_Word) (conv9_STATE_VARIABLE_Info_9_68));
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[17]), ImpForeignEnums0_42, &ImpForeignEnums_45, ((MR_Box) (STATE_VARIABLE_Info_9_68)), &conv12_STATE_VARIABLE_Info_47);
    *STATE_VARIABLE_Info_47 = ((MR_Word) (conv12_STATE_VARIABLE_Info_47));
    {
      SrcDefns_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_85, 0) = ((MR_Box) (IntDefns_43));
      MR_hl_field(0, SrcDefns_85, 1) = ((MR_Box) (ImpDefns_44));
      MR_hl_field(0, SrcDefns_85, 2) = ((MR_Box) (ImpForeignEnums_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CheckedDefn_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_85));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__maybe_qualify_defn__ho9_6_p_0(
  MR_Word InInt_8,
  MR_Word MaybeDefn0_9,
  MR_Word * MaybeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  if ((MaybeDefn0_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
  }
  else
  {
    MR_Word Defn0_12 = ((MR_Word) ((MR_hl_field(1, MaybeDefn0_9, 0))));
    MR_Word Defn_13;

    parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__454__1__ho10_6_p_0(InInt_8, Defn0_12, &Defn_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Defn_13));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__IntroducedFrom__pred__module_qualify_type_ctor_checked_defn__454__1__ho10_6_p_0(
  MR_Word HeadVar__2_94,
  MR_Word HeadVar__3_95,
  MR_Word * HeadVar__4_96,
  MR_Word HeadVar__5_97,
  MR_Word * HeadVar__6_98)
{
  MR_Word SymName_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_95, 0))));
  MR_Word Params_102 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_95, 1))));
  MR_Word TypeDefn0_103 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_95, 2))));
  MR_Word TVarSet_104 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_95, 3))));
  MR_Word Context_105 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_95, 4))));
  MR_Word SeqNum_106 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_95, 5))));
  MR_Integer Arity_107;
  MR_Word TypeCtor_108;
  MR_Word TypeDefn_109;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_102, &Arity_107);
  {
    TypeCtor_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_108, 0) = ((MR_Box) (SymName_101));
    MR_hl_field(0, TypeCtor_108, 1) = ((MR_Box) (Arity_107));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_7_p_0(HeadVar__2_94, Context_105, TypeCtor_108, TypeDefn0_103, &TypeDefn_109, HeadVar__5_97, HeadVar__6_98);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_96 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_101));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_102));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_109));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_104));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_105));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_106));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn0_11,
  MR_Word * TypeDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  switch (MR_tag((MR_Word) TypeDefn0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_18 = (MR_Word) ((MR_Word) (TypeDefn0_11));
        MR_Word DetailsDu_19;

        parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_7_p_0(InInt_8, TypeCtor_10, DetailsDu0_18, &DetailsDu_19, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
        *TypeDefn_12 = (MR_Word) ((MR_Word) (DetailsDu_19));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub0_20 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_11), (MR_Integer) 1));
        MR_Word DetailsSub_21;

        parse_tree__module_qual__qualify_items__qualify_type_defn_sub_7_p_0(InInt_8, Context_9, TypeCtor_10, DetailsSub0_20, &DetailsSub_21, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
        *TypeDefn_12 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_21)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_14 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_11), (MR_Integer) 2));
        MR_Word DetailsSolver_15;

        parse_tree__module_qual__qualify_items__qualify_type_defn_solver_7_p_0(InInt_8, Context_9, TypeCtor_10, DetailsSolver0_14, &DetailsSolver_15, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
        *TypeDefn_12 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_15)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn0_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_16 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_11, 1))));
            MR_Word DetailsEqv_17;
            MR_Word Type0_26 = (MR_Word) (DetailsEqv0_16);
            MR_Word ErrorContext_27;
            MR_Word Type_28;

            {
              ErrorContext_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ErrorContext_27, 0) = ((MR_Box) (Context_9));
              MR_hl_field(0, ErrorContext_27, 1) = ((MR_Box) (TypeCtor_10));
            }
            parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_8, ErrorContext_27, Type0_26, &Type_28, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
            DetailsEqv_17 = (MR_Word) (Type_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (DetailsEqv_17));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *TypeDefn_12 = TypeDefn0_11;
            *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho7_6_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeDefn0_9,
  MR_Word * ItemTypeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 0))));
  MR_Word Params_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 1))));
  MR_Word TypeDefn0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 2))));
  MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 4))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 5))));
  MR_Integer Arity_18;
  MR_Word TypeCtor_19;
  MR_Word TypeDefn_20;
  MR_Word Type0_25;
  MR_Word ErrorContext_26;
  MR_Word Type_27;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_13, &Arity_18);
  {
    TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_19, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, TypeCtor_19, 1) = ((MR_Box) (Arity_18));
  }
  Type0_25 = (MR_Word) (TypeDefn0_14);
  {
    ErrorContext_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ErrorContext_26, 0) = ((MR_Box) (Context_16));
    MR_hl_field(0, ErrorContext_26, 1) = ((MR_Box) (TypeCtor_19));
  }
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_8, ErrorContext_26, Type0_25, &Type_27, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  TypeDefn_20 = (MR_Word) (Type_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho6_6_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeDefn0_9,
  MR_Word * ItemTypeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 0))));
  MR_Word Params_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 1))));
  MR_Word TypeDefn0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 2))));
  MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 4))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 5))));
  MR_Integer Arity_18;
  MR_Word TypeCtor_19;
  MR_Word TypeDefn_20;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_13, &Arity_18);
  {
    TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_19, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, TypeCtor_19, 1) = ((MR_Box) (Arity_18));
  }
  parse_tree__module_qual__qualify_items__qualify_type_defn_sub_7_p_0(InInt_8, Context_16, TypeCtor_19, TypeDefn0_14, &TypeDefn_20, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_sub_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsSub0_11,
  MR_Word * DetailsSub_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word SuperType0_14 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_11, 0))));
  MR_Word OoMCtors0_15 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_11, 1))));
  MR_Word ErrorContext_16;
  MR_Word SuperType_17;
  MR_Word HeadCtor0_18;
  MR_Word TailCtors0_19;
  MR_Word HeadCtor_20;
  MR_Word TailCtors_21;
  MR_Word OoMCtors_22;
  MR_Word STATE_VARIABLE_Info_1_25;
  MR_Word STATE_VARIABLE_Info_2_26;
  uint32_t Ordinal_27;
  MR_Word MaybeExistConstraints0_28;
  MR_Word FunctionSymbolSymName_29;
  MR_Word Args0_30;
  MR_Integer Arity_31;
  MR_Word Context_32;
  MR_String FunctionSymbolName_33;
  MR_Word MaybeExistConstraints_34;
  MR_Word Args_43;
  MR_Word STATE_VARIABLE_Info_1_44;

  {
    ErrorContext_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ErrorContext_16, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, ErrorContext_16, 1) = ((MR_Box) (TypeCtor_10));
  }
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_8, ErrorContext_16, SuperType0_14, &SuperType_17, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_25);
  HeadCtor0_18 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_15, 0))));
  TailCtors0_19 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_15, 1))));
  Ordinal_27 = ((uint32_t) (MR_Word) (MR_hl_field(0, HeadCtor0_18, 0)));
  MaybeExistConstraints0_28 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_18, 1))));
  FunctionSymbolSymName_29 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_18, 2))));
  Args0_30 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_18, 3))));
  Arity_31 = ((MR_Integer) ((MR_hl_field(0, HeadCtor0_18, 4))));
  Context_32 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_18, 5))));
  FunctionSymbolName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_29);
  if ((MaybeExistConstraints0_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_34 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_1_44 = STATE_VARIABLE_Info_1_25;
  }
  else
  {
    MR_Word ExistConstraints0_35 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_28), (MR_Integer) 1));
    MR_Word ExistQVars_36 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 0))));
    MR_Word Constraints0_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 1))));
    MR_Word UnconstrainedExistQVars_38 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 2))));
    MR_Word ConstrainedExistQVars_39 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 3))));
    MR_Word ConstraintErrorContext_40;
    MR_Word Constraints_41;
    MR_Word ExistConstraints_42;

    {
      ConstraintErrorContext_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConstraintErrorContext_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ConstraintErrorContext_40, 1) = ((MR_Box) (Context_32));
      MR_hl_field(3, ConstraintErrorContext_40, 2) = ((MR_Box) (TypeCtor_10));
      MR_hl_field(3, ConstraintErrorContext_40, 3) = ((MR_Box) (FunctionSymbolName_33));
      MR_hl_field(3, ConstraintErrorContext_40, 4) = ((MR_Box) (Arity_31));
    }
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_8, ConstraintErrorContext_40, Constraints0_37, &Constraints_41, STATE_VARIABLE_Info_1_25, &STATE_VARIABLE_Info_1_44);
    {
      ExistConstraints_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_42, 0) = ((MR_Box) (ExistQVars_36));
      MR_hl_field(0, ExistConstraints_42, 1) = ((MR_Box) (Constraints_41));
      MR_hl_field(0, ExistConstraints_42, 2) = ((MR_Box) (UnconstrainedExistQVars_38));
      MR_hl_field(0, ExistConstraints_42, 3) = ((MR_Box) (ConstrainedExistQVars_39));
    }
    MaybeExistConstraints_34 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_42)));
  }
  parse_tree__module_qual__qualify_items__qualify_constructor_args_8_p_0(InInt_8, TypeCtor_10, FunctionSymbolName_33, (MR_Integer) 0, Args0_30, &Args_43, STATE_VARIABLE_Info_1_44, &STATE_VARIABLE_Info_2_26);
  {
    HeadCtor_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadCtor_20, 0) = ((MR_Box) (MR_Word) (Ordinal_27));
    MR_hl_field(0, HeadCtor_20, 1) = ((MR_Box) (MaybeExistConstraints_34));
    MR_hl_field(0, HeadCtor_20, 2) = ((MR_Box) (FunctionSymbolSymName_29));
    MR_hl_field(0, HeadCtor_20, 3) = ((MR_Box) (Args_43));
    MR_hl_field(0, HeadCtor_20, 4) = ((MR_Box) (Arity_31));
    MR_hl_field(0, HeadCtor_20, 5) = ((MR_Box) (Context_32));
  }
  parse_tree__module_qual__qualify_items__qualify_constructors_6_p_0(InInt_8, TypeCtor_10, TailCtors0_19, &TailCtors_21, STATE_VARIABLE_Info_2_26, STATE_VARIABLE_Info_24);
  {
    OoMCtors_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OoMCtors_22, 0) = ((MR_Box) (HeadCtor_20));
    MR_hl_field(0, OoMCtors_22, 1) = ((MR_Box) (TailCtors_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSub_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SuperType_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (OoMCtors_22));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_type_defn__ho5_6_p_0(
  MR_Word InInt_8,
  MR_Word ItemTypeDefn0_9,
  MR_Word * ItemTypeDefn_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 0))));
  MR_Word Params_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 1))));
  MR_Word TypeDefn0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 2))));
  MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 4))));
  MR_Word SeqNum_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_9, 5))));
  MR_Integer Arity_18;
  MR_Word TypeCtor_19;
  MR_Word TypeDefn_20;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Params_13, &Arity_18);
  {
    TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_19, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, TypeCtor_19, 1) = ((MR_Box) (Arity_18));
  }
  parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_7_p_0(InInt_8, TypeCtor_19, TypeDefn0_14, &TypeDefn_20, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Params_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_17));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_97_108_105_102_121_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_50_93_95_48_7_p_0(
  MR_Word InInt_8,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu0_11,
  MR_Word * DetailsDu_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word OoMCtors0_14 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_11, 0))));
  MR_Word HeadCtor0_17 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_14, 0))));
  MR_Word TailCtors0_18 = ((MR_Word) ((MR_hl_field(0, OoMCtors0_14, 1))));
  MR_Word HeadCtor_19;
  MR_Word TailCtors_20;
  MR_Word OoMCtors_21;
  MR_Word MaybeUserEqComp_22 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_11, 1))));
  MR_Word MaybeDirectArgCtors_23 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_11, 2))));
  MR_Word STATE_VARIABLE_Info_1_26;
  uint32_t Ordinal_27 = ((uint32_t) (MR_Word) (MR_hl_field(0, HeadCtor0_17, 0)));
  MR_Word MaybeExistConstraints0_28 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_17, 1))));
  MR_Word FunctionSymbolSymName_29 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_17, 2))));
  MR_Word Args0_30 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_17, 3))));
  MR_Integer Arity_31 = ((MR_Integer) ((MR_hl_field(0, HeadCtor0_17, 4))));
  MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, HeadCtor0_17, 5))));
  MR_String FunctionSymbolName_33;
  MR_Word MaybeExistConstraints_34;
  MR_Word Args_43;
  MR_Word STATE_VARIABLE_Info_1_44;

  FunctionSymbolName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_29);
  if ((MaybeExistConstraints0_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_34 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_1_44 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word ExistConstraints0_35 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_28), (MR_Integer) 1));
    MR_Word ExistQVars_36 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 0))));
    MR_Word Constraints0_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 1))));
    MR_Word UnconstrainedExistQVars_38 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 2))));
    MR_Word ConstrainedExistQVars_39 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_35, 3))));
    MR_Word ConstraintErrorContext_40;
    MR_Word Constraints_41;
    MR_Word ExistConstraints_42;

    {
      ConstraintErrorContext_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConstraintErrorContext_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ConstraintErrorContext_40, 1) = ((MR_Box) (Context_32));
      MR_hl_field(3, ConstraintErrorContext_40, 2) = ((MR_Box) (TypeCtor_10));
      MR_hl_field(3, ConstraintErrorContext_40, 3) = ((MR_Box) (FunctionSymbolName_33));
      MR_hl_field(3, ConstraintErrorContext_40, 4) = ((MR_Box) (Arity_31));
    }
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(InInt_8, ConstraintErrorContext_40, Constraints0_37, &Constraints_41, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_44);
    {
      ExistConstraints_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_42, 0) = ((MR_Box) (ExistQVars_36));
      MR_hl_field(0, ExistConstraints_42, 1) = ((MR_Box) (Constraints_41));
      MR_hl_field(0, ExistConstraints_42, 2) = ((MR_Box) (UnconstrainedExistQVars_38));
      MR_hl_field(0, ExistConstraints_42, 3) = ((MR_Box) (ConstrainedExistQVars_39));
    }
    MaybeExistConstraints_34 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_42)));
  }
  parse_tree__module_qual__qualify_items__qualify_constructor_args_8_p_0(InInt_8, TypeCtor_10, FunctionSymbolName_33, (MR_Integer) 0, Args0_30, &Args_43, STATE_VARIABLE_Info_1_44, &STATE_VARIABLE_Info_1_26);
  {
    HeadCtor_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadCtor_19, 0) = ((MR_Box) (MR_Word) (Ordinal_27));
    MR_hl_field(0, HeadCtor_19, 1) = ((MR_Box) (MaybeExistConstraints_34));
    MR_hl_field(0, HeadCtor_19, 2) = ((MR_Box) (FunctionSymbolSymName_29));
    MR_hl_field(0, HeadCtor_19, 3) = ((MR_Box) (Args_43));
    MR_hl_field(0, HeadCtor_19, 4) = ((MR_Box) (Arity_31));
    MR_hl_field(0, HeadCtor_19, 5) = ((MR_Box) (Context_32));
  }
  parse_tree__module_qual__qualify_items__qualify_constructors_6_p_0(InInt_8, TypeCtor_10, TailCtors0_18, &TailCtors_20, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_25);
  {
    OoMCtors_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OoMCtors_21, 0) = ((MR_Box) (HeadCtor_19));
    MR_hl_field(0, OoMCtors_21, 1) = ((MR_Box) (TailCtors_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DetailsDu_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OoMCtors_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeUserEqComp_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDirectArgCtors_23));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Ctor0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Ctors0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Ctor_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    uint32_t Ordinal_22 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_14, 0)));
    MR_Word MaybeExistConstraints0_23 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 1))));
    MR_Word FunctionSymbolSymName_24 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 2))));
    MR_Word Args0_25 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 3))));
    MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(0, Ctor0_14, 4))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 5))));
    MR_String FunctionSymbolName_28;
    MR_Word MaybeExistConstraints_29;
    MR_Word Args_38;
    MR_Word STATE_VARIABLE_Info_1_39;
    MR_Word * AddrCtors_41;

    FunctionSymbolName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_24);
    if ((MaybeExistConstraints0_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeExistConstraints_29 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word ExistConstraints0_30 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_23), (MR_Integer) 1));
      MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 0))));
      MR_Word Constraints0_32 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 1))));
      MR_Word UnconstrainedExistQVars_33 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 2))));
      MR_Word ConstrainedExistQVars_34 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 3))));
      MR_Word ConstraintErrorContext_35;
      MR_Word Constraints_36;
      MR_Word ExistConstraints_37;

      {
        ConstraintErrorContext_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConstraintErrorContext_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ConstraintErrorContext_35, 1) = ((MR_Box) (Context_27));
        MR_hl_field(3, ConstraintErrorContext_35, 2) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(3, ConstraintErrorContext_35, 3) = ((MR_Box) (FunctionSymbolName_28));
        MR_hl_field(3, ConstraintErrorContext_35, 4) = ((MR_Box) (Arity_26));
      }
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(HeadVar__1_1, ConstraintErrorContext_35, Constraints0_32, &Constraints_36, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_39);
      {
        ExistConstraints_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExistConstraints_37, 0) = ((MR_Box) (ExistQVars_31));
        MR_hl_field(0, ExistConstraints_37, 1) = ((MR_Box) (Constraints_36));
        MR_hl_field(0, ExistConstraints_37, 2) = ((MR_Box) (UnconstrainedExistQVars_33));
        MR_hl_field(0, ExistConstraints_37, 3) = ((MR_Box) (ConstrainedExistQVars_34));
      }
      MaybeExistConstraints_29 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_37)));
    }
    parse_tree__module_qual__qualify_items__qualify_constructor_args_8_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_28, (MR_Integer) 0, Args0_25, &Args_38, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_1_21);
    {
      Ctor_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Ctor_16, 0) = ((MR_Box) (MR_Word) (Ordinal_22));
      MR_hl_field(0, Ctor_16, 1) = ((MR_Box) (MaybeExistConstraints_29));
      MR_hl_field(0, Ctor_16, 2) = ((MR_Box) (FunctionSymbolSymName_24));
      MR_hl_field(0, Ctor_16, 3) = ((MR_Box) (Args_38));
      MR_hl_field(0, Ctor_16, 4) = ((MR_Box) (Arity_26));
      MR_hl_field(0, Ctor_16, 5) = ((MR_Box) (Context_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Ctor_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrCtors_41 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Ctors0_15, AddrCtors_41, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructors__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_42,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_42 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Ctor0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Ctors0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Ctor_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      uint32_t Ordinal_22 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_14, 0)));
      MR_Word MaybeExistConstraints0_23 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 1))));
      MR_Word FunctionSymbolSymName_24 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 2))));
      MR_Word Args0_25 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 3))));
      MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(0, Ctor0_14, 4))));
      MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Ctor0_14, 5))));
      MR_String FunctionSymbolName_28;
      MR_Word MaybeExistConstraints_29;
      MR_Word Args_38;
      MR_Word STATE_VARIABLE_Info_1_39;
      MR_Word * AddrCtors_41;
      MR_Word HeadVar__4_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_42;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      FunctionSymbolName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_24);
      if ((MaybeExistConstraints0_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeExistConstraints_29 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_5;
      }
      else
      {
        MR_Word ExistConstraints0_30 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_23), (MR_Integer) 1));
        MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 0))));
        MR_Word Constraints0_32 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 1))));
        MR_Word UnconstrainedExistQVars_33 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 2))));
        MR_Word ConstrainedExistQVars_34 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_30, 3))));
        MR_Word ConstraintErrorContext_35;
        MR_Word Constraints_36;
        MR_Word ExistConstraints_37;

        {
          ConstraintErrorContext_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstraintErrorContext_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ConstraintErrorContext_35, 1) = ((MR_Box) (Context_27));
          MR_hl_field(3, ConstraintErrorContext_35, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(3, ConstraintErrorContext_35, 3) = ((MR_Box) (FunctionSymbolName_28));
          MR_hl_field(3, ConstraintErrorContext_35, 4) = ((MR_Box) (Arity_26));
        }
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(HeadVar__1_1, ConstraintErrorContext_35, Constraints0_32, &Constraints_36, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_39);
        {
          ExistConstraints_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ExistConstraints_37, 0) = ((MR_Box) (ExistQVars_31));
          MR_hl_field(0, ExistConstraints_37, 1) = ((MR_Box) (Constraints_36));
          MR_hl_field(0, ExistConstraints_37, 2) = ((MR_Box) (UnconstrainedExistQVars_33));
          MR_hl_field(0, ExistConstraints_37, 3) = ((MR_Box) (ConstrainedExistQVars_34));
        }
        MaybeExistConstraints_29 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_37)));
      }
      parse_tree__module_qual__qualify_items__qualify_constructor_args_8_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_28, (MR_Integer) 0, Args0_25, &Args_38, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_1_21);
      {
        Ctor_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Ctor_16, 0) = ((MR_Box) (MR_Word) (Ordinal_22));
        MR_hl_field(0, Ctor_16, 1) = ((MR_Box) (MaybeExistConstraints_29));
        MR_hl_field(0, Ctor_16, 2) = ((MR_Box) (FunctionSymbolSymName_24));
        MR_hl_field(0, Ctor_16, 3) = ((MR_Box) (Args_38));
        MR_hl_field(0, Ctor_16, 4) = ((MR_Box) (Arity_26));
        MR_hl_field(0, Ctor_16, 5) = ((MR_Box) (Context_27));
      }
      {
        HeadVar__4_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_43, 0) = ((MR_Box) (Ctor_16));
        MR_hl_field(1, HeadVar__4_43, 1) = NULL;
      }
      AddrCtors_41 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_43, 1)));
      *AddrOfHeadVar__4_42 = HeadVar__4_43;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Ctors0_15;
      next_value_of_AddrOfHeadVar__4_42 = AddrCtors_41;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_42 = next_value_of_AddrOfHeadVar__4_42;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Constraint_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word ClassName0_22 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 0))));
    MR_Word Types0_23 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 1))));
    MR_Integer Arity_24;
    MR_Word OutsideContext_25;
    MR_Word ClassName_26;
    MR_Word ErrorContext_27;
    MR_Word Types_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_1_30;
    MR_Word ClassIdSet_32;
    MR_Word * AddrConstraints_34;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_23, &Arity_24);
    {
      OutsideContext_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, OutsideContext_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, OutsideContext_25, 1) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (ClassName0_22));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (Arity_24));
    }
    parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_32);
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, OutsideContext_25, ClassIdSet_32, (MR_Integer) 3, Var_29, &ClassName_26, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_30);
    {
      ErrorContext_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ErrorContext_27, 1) = ((MR_Box) (ClassName0_22));
      MR_hl_field(3, ErrorContext_27, 2) = ((MR_Box) (Arity_24));
      MR_hl_field(3, ErrorContext_27, 3) = ((MR_Box) (HeadVar__2_2));
    }
    parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(HeadVar__1_1, ErrorContext_27, Types0_23, &Types_28, STATE_VARIABLE_Info_1_30, &STATE_VARIABLE_Info_1_21);
    {
      Constraint_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Constraint_16, 0) = ((MR_Box) (ClassName_26));
      MR_hl_field(0, Constraint_16, 1) = ((MR_Box) (Types_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Constraint_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrConstraints_34 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Constraints0_15, AddrConstraints_34, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_prog_constraint_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_35 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Constraints0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Constraint_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word ClassName0_22 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 0))));
      MR_Word Types0_23 = ((MR_Word) ((MR_hl_field(0, Constraint0_14, 1))));
      MR_Integer Arity_24;
      MR_Word OutsideContext_25;
      MR_Word ClassName_26;
      MR_Word ErrorContext_27;
      MR_Word Types_28;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_Info_1_30;
      MR_Word ClassIdSet_32;
      MR_Word * AddrConstraints_34;
      MR_Word HeadVar__4_36;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_35;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_23, &Arity_24);
      {
        OutsideContext_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, OutsideContext_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, OutsideContext_25, 1) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (ClassName0_22));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (Arity_24));
      }
      parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_32);
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, OutsideContext_25, ClassIdSet_32, (MR_Integer) 3, Var_29, &ClassName_26, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_30);
      {
        ErrorContext_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ErrorContext_27, 1) = ((MR_Box) (ClassName0_22));
        MR_hl_field(3, ErrorContext_27, 2) = ((MR_Box) (Arity_24));
        MR_hl_field(3, ErrorContext_27, 3) = ((MR_Box) (HeadVar__2_2));
      }
      parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(HeadVar__1_1, ErrorContext_27, Types0_23, &Types_28, STATE_VARIABLE_Info_1_30, &STATE_VARIABLE_Info_1_21);
      {
        Constraint_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Constraint_16, 0) = ((MR_Box) (ClassName_26));
        MR_hl_field(0, Constraint_16, 1) = ((MR_Box) (Types_28));
      }
      {
        HeadVar__4_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_36, 0) = ((MR_Box) (Constraint_16));
        MR_hl_field(1, HeadVar__4_36, 1) = NULL;
      }
      AddrConstraints_34 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_36, 1)));
      *AddrOfHeadVar__4_35 = HeadVar__4_36;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints0_15;
      next_value_of_AddrOfHeadVar__4_35 = AddrConstraints_34;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_35 = next_value_of_AddrOfHeadVar__4_35;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word Arg0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word Arg_22;
    MR_Integer CurArgNum_25 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Info_1_29;
    MR_Word MaybeFieldName_30 = ((MR_Word) ((MR_hl_field(0, Arg0_20, 0))));
    MR_Word Type0_31 = ((MR_Word) ((MR_hl_field(0, Arg0_20, 1))));
    MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, Arg0_20, 2))));
    MR_Word ErrorContext_33;
    MR_Word Type_34;
    MR_Word * AddrArgs_35;

    {
      ErrorContext_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ErrorContext_33, 1) = ((MR_Box) (Context_32));
      MR_hl_field(3, ErrorContext_33, 2) = ((MR_Box) (ContainingTypeCtor_2));
      MR_hl_field(3, ErrorContext_33, 3) = ((MR_Box) (FunctionSymbol_3));
      MR_hl_field(3, ErrorContext_33, 4) = ((MR_Box) (CurArgNum_25));
      MR_hl_field(3, ErrorContext_33, 5) = ((MR_Box) (MaybeFieldName_30));
    }
    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_33, Type0_31, &Type_34, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_29);
    {
      Arg_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_22, 0) = ((MR_Box) (MaybeFieldName_30));
      MR_hl_field(0, Arg_22, 1) = ((MR_Box) (Type_34));
      MR_hl_field(0, Arg_22, 2) = ((MR_Box) (Context_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_22));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrArgs_35 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__6_6, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_8_p_0(HeadVar__1_1, ContainingTypeCtor_2, FunctionSymbol_3, CurArgNum_25, Args0_21, AddrArgs_35, STATE_VARIABLE_Info_1_29, STATE_VARIABLE_Info_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constructor_args__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_36,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__6_36 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Arg0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Arg_22;
      MR_Integer CurArgNum_25 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Info_1_29;
      MR_Word MaybeFieldName_30 = ((MR_Word) ((MR_hl_field(0, Arg0_20, 0))));
      MR_Word Type0_31 = ((MR_Word) ((MR_hl_field(0, Arg0_20, 1))));
      MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, Arg0_20, 2))));
      MR_Word ErrorContext_33;
      MR_Word Type_34;
      MR_Word * AddrArgs_35;
      MR_Word HeadVar__6_37;
      MR_Integer next_value_of_LastArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word * next_value_of_AddrOfHeadVar__6_36;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      {
        ErrorContext_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ErrorContext_33, 1) = ((MR_Box) (Context_32));
        MR_hl_field(3, ErrorContext_33, 2) = ((MR_Box) (ContainingTypeCtor_2));
        MR_hl_field(3, ErrorContext_33, 3) = ((MR_Box) (FunctionSymbol_3));
        MR_hl_field(3, ErrorContext_33, 4) = ((MR_Box) (CurArgNum_25));
        MR_hl_field(3, ErrorContext_33, 5) = ((MR_Box) (MaybeFieldName_30));
      }
      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_33, Type0_31, &Type_34, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_29);
      {
        Arg_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arg_22, 0) = ((MR_Box) (MaybeFieldName_30));
        MR_hl_field(0, Arg_22, 1) = ((MR_Box) (Type_34));
        MR_hl_field(0, Arg_22, 2) = ((MR_Box) (Context_32));
      }
      {
        HeadVar__6_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__6_37, 0) = ((MR_Box) (Arg_22));
        MR_hl_field(1, HeadVar__6_37, 1) = NULL;
      }
      AddrArgs_35 = (MR_Word *) (&(MR_hl_field(1, HeadVar__6_37, 1)));
      *AddrOfHeadVar__6_36 = HeadVar__6_37;
      // direct tailcall eliminated
      ;
      next_value_of_LastArgNum_4 = CurArgNum_25;
      next_value_of_HeadVar__5_5 = Args0_21;
      next_value_of_AddrOfHeadVar__6_36 = AddrArgs_35;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_1_29;
      LastArgNum_4 = next_value_of_LastArgNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      AddrOfHeadVar__6_36 = next_value_of_AddrOfHeadVar__6_36;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_solver_7_p_0(
  MR_Word InInt_8,
  MR_Word Context_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsSolver0_11,
  MR_Word * DetailsSolver_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word SolverTypeDetails0_14 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_11, 0))));
  MR_Word MaybeUserEqComp_15 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_11, 1))));
  MR_Word RepnType0_16 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_14, 0))));
  MR_Word GroundInst0_17 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_14, 1))));
  MR_Word AnyInst0_18 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_14, 2))));
  MR_Word Mutables0_19 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_14, 3))));
  MR_Word ErrorContext_20;
  MR_Word RepnType_21;
  MR_Word GroundInst_22;
  MR_Word AnyInst_23;
  MR_Word Mutables_24;
  MR_Word SolverTypeDetails_25;
  MR_Word STATE_VARIABLE_Info_1_28;
  MR_Word STATE_VARIABLE_Info_2_29;
  MR_Word STATE_VARIABLE_Info_3_30;

  {
    ErrorContext_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ErrorContext_20, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, ErrorContext_20, 1) = ((MR_Box) (TypeCtor_10));
  }
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_8, ErrorContext_20, RepnType0_16, &RepnType_21, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_1_28);
  parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_8, ErrorContext_20, GroundInst0_17, &GroundInst_22, STATE_VARIABLE_Info_1_28, &STATE_VARIABLE_Info_2_29);
  parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_8, ErrorContext_20, AnyInst0_18, &AnyInst_23, STATE_VARIABLE_Info_2_29, &STATE_VARIABLE_Info_3_30);
  parse_tree__module_qual__qualify_items__qualify_constraint_stores_5_p_0(InInt_8, Mutables0_19, &Mutables_24, STATE_VARIABLE_Info_3_30, STATE_VARIABLE_Info_27);
  {
    SolverTypeDetails_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SolverTypeDetails_25, 0) = ((MR_Box) (RepnType_21));
    MR_hl_field(0, SolverTypeDetails_25, 1) = ((MR_Box) (GroundInst_22));
    MR_hl_field(0, SolverTypeDetails_25, 2) = ((MR_Box) (AnyInst_23));
    MR_hl_field(0, SolverTypeDetails_25, 3) = ((MR_Box) (Mutables_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSolver_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SolverTypeDetails_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeUserEqComp_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Mutable0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Mutables0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Mutable_13;
    MR_Word STATE_VARIABLE_Info_1_18;
    MR_String Name_19 = ((MR_String) ((MR_hl_field(0, Mutable0_11, 0))));
    MR_Word OrigType0_20 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 1))));
    MR_Word Type0_21 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 2))));
    MR_Word OrigInst0_22 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 3))));
    MR_Word Inst0_23 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 4))));
    MR_Word InitTerm_24 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 5))));
    MR_Word Attrs_25 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 6))));
    MR_Word Varset_26 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 7))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 8))));
    MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 9))));
    MR_Word ErrorContext_29;
    MR_Word OrigType_30;
    MR_Word Type_31;
    MR_Word OrigInst_32;
    MR_Word Inst_33;
    MR_Word STATE_VARIABLE_Info_1_34;
    MR_Word STATE_VARIABLE_Info_2_35;
    MR_Word STATE_VARIABLE_Info_3_36;
    MR_Word * AddrMutables_37;

    {
      ErrorContext_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ErrorContext_29, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, ErrorContext_29, 1) = ((MR_Box) (Context_27));
      MR_hl_field(3, ErrorContext_29, 2) = ((MR_Box) (Name_19));
    }
    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_29, OrigType0_20, &OrigType_30, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_34);
    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_29, Type0_21, &Type_31, STATE_VARIABLE_Info_1_34, &STATE_VARIABLE_Info_2_35);
    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_29, OrigInst0_22, &OrigInst_32, STATE_VARIABLE_Info_2_35, &STATE_VARIABLE_Info_3_36);
    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_29, Inst0_23, &Inst_33, STATE_VARIABLE_Info_3_36, &STATE_VARIABLE_Info_1_18);
    {
      Mutable_13 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Mutable_13, 0) = ((MR_Box) (Name_19));
      MR_hl_field(0, Mutable_13, 1) = ((MR_Box) (OrigType_30));
      MR_hl_field(0, Mutable_13, 2) = ((MR_Box) (Type_31));
      MR_hl_field(0, Mutable_13, 3) = ((MR_Box) (OrigInst_32));
      MR_hl_field(0, Mutable_13, 4) = ((MR_Box) (Inst_33));
      MR_hl_field(0, Mutable_13, 5) = ((MR_Box) (InitTerm_24));
      MR_hl_field(0, Mutable_13, 6) = ((MR_Box) (Attrs_25));
      MR_hl_field(0, Mutable_13, 7) = ((MR_Box) (Varset_26));
      MR_hl_field(0, Mutable_13, 8) = ((MR_Box) (Context_27));
      MR_hl_field(0, Mutable_13, 9) = ((MR_Box) (SeqNum_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mutable_13));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrMutables_37 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_5_p_0(HeadVar__1_1, Mutables0_12, AddrMutables_37, STATE_VARIABLE_Info_1_18, STATE_VARIABLE_Info_5);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_constraint_stores__1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_38,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_38 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word Mutable0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Mutables0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Mutable_13;
      MR_Word STATE_VARIABLE_Info_1_18;
      MR_String Name_19 = ((MR_String) ((MR_hl_field(0, Mutable0_11, 0))));
      MR_Word OrigType0_20 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 1))));
      MR_Word Type0_21 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 2))));
      MR_Word OrigInst0_22 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 3))));
      MR_Word Inst0_23 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 4))));
      MR_Word InitTerm_24 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 5))));
      MR_Word Attrs_25 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 6))));
      MR_Word Varset_26 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 7))));
      MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 8))));
      MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Mutable0_11, 9))));
      MR_Word ErrorContext_29;
      MR_Word OrigType_30;
      MR_Word Type_31;
      MR_Word OrigInst_32;
      MR_Word Inst_33;
      MR_Word STATE_VARIABLE_Info_1_34;
      MR_Word STATE_VARIABLE_Info_2_35;
      MR_Word STATE_VARIABLE_Info_3_36;
      MR_Word * AddrMutables_37;
      MR_Word HeadVar__3_39;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_38;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      {
        ErrorContext_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ErrorContext_29, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, ErrorContext_29, 1) = ((MR_Box) (Context_27));
        MR_hl_field(3, ErrorContext_29, 2) = ((MR_Box) (Name_19));
      }
      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_29, OrigType0_20, &OrigType_30, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_34);
      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, ErrorContext_29, Type0_21, &Type_31, STATE_VARIABLE_Info_1_34, &STATE_VARIABLE_Info_2_35);
      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_29, OrigInst0_22, &OrigInst_32, STATE_VARIABLE_Info_2_35, &STATE_VARIABLE_Info_3_36);
      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, ErrorContext_29, Inst0_23, &Inst_33, STATE_VARIABLE_Info_3_36, &STATE_VARIABLE_Info_1_18);
      {
        Mutable_13 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mutable_13, 0) = ((MR_Box) (Name_19));
        MR_hl_field(0, Mutable_13, 1) = ((MR_Box) (OrigType_30));
        MR_hl_field(0, Mutable_13, 2) = ((MR_Box) (Type_31));
        MR_hl_field(0, Mutable_13, 3) = ((MR_Box) (OrigInst_32));
        MR_hl_field(0, Mutable_13, 4) = ((MR_Box) (Inst_33));
        MR_hl_field(0, Mutable_13, 5) = ((MR_Box) (InitTerm_24));
        MR_hl_field(0, Mutable_13, 6) = ((MR_Box) (Attrs_25));
        MR_hl_field(0, Mutable_13, 7) = ((MR_Box) (Varset_26));
        MR_hl_field(0, Mutable_13, 8) = ((MR_Box) (Context_27));
        MR_hl_field(0, Mutable_13, 9) = ((MR_Box) (SeqNum_28));
      }
      {
        HeadVar__3_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_39, 0) = ((MR_Box) (Mutable_13));
        MR_hl_field(1, HeadVar__3_39, 1) = NULL;
      }
      AddrMutables_37 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_39, 1)));
      *AddrOfHeadVar__3_38 = HeadVar__3_39;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Mutables0_12;
      next_value_of_AddrOfHeadVar__3_38 = AddrMutables_37;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_38 = next_value_of_AddrOfHeadVar__3_38;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_lambda_mode_6_p_0(
  MR_Word InInt_7,
  MR_Word Context_8,
  MR_Word Mode0_9,
  MR_Word * Mode_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word ErrorContext_12;

  {
    ErrorContext_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_12, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, ErrorContext_12, 1) = ((MR_Box) (Context_8));
  }
  if (((MR_tag((MR_Word) Mode0_9)) == (MR_Integer) 0))
  {
    MR_Word InstA0_15 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 0))));
    MR_Word InstB0_16 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 1))));
    MR_Word InstA_17;
    MR_Word InstB_18;
    MR_Word STATE_VARIABLE_Info_1_25;

    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_7, ErrorContext_12, InstA0_15, &InstA_17, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_1_25);
    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(InInt_7, ErrorContext_12, InstB0_16, &InstB_18, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstA_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (InstB_18));
    }
  }
  else
  {
    MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 1))));
    MR_Word Insts_21;
    MR_Integer Arity_22;
    MR_Word Modes_23;
    MR_Word SymName_24;
    MR_Word STATE_VARIABLE_Info_3_26;
    MR_Word Var_28;

    parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(InInt_7, ErrorContext_12, Insts0_20, &Insts_21, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_3_26);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_21, &Arity_22);
    parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_26, &Modes_23);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (SymName0_19));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (Arity_22));
    }
    parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, ErrorContext_12, Modes_23, (MR_Integer) 2, Var_28, &SymName_24, STATE_VARIABLE_Info_3_26, STATE_VARIABLE_Info_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SymName_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_21));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_clause_mode_list_6_p_0(
  MR_Word InInt_7,
  MR_Word Context_8,
  MR_Word Modes0_9,
  MR_Word * Modes_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word ErrorContext_12;

  {
    ErrorContext_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_12, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, ErrorContext_12, 1) = ((MR_Box) (Context_8));
  }
  parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_12, Modes0_9, Modes_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_qualification_6_p_0(
  MR_Word InInt_7,
  MR_Word Context_8,
  MR_Word Type0_9,
  MR_Word * Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word ErrorContext_12;

  {
    ErrorContext_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ErrorContext_12, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, ErrorContext_12, 1) = ((MR_Box) (Context_8));
  }
  parse_tree__module_qual__qualify_items__qualify_type_6_p_0(InInt_7, ErrorContext_12, Type0_9, Type_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Type0_9,
  MR_Word * AddrOfType_71,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfType_71 = Type0_9;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName0_14 = ((MR_Word) ((MR_hl_field(1, Type0_9, 0))));
          MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(1, Type0_9, 1))));
          MR_Word Kind_16 = ((MR_Word) ((MR_hl_field(1, Type0_9, 2))));
          MR_Integer Arity_17;
          MR_Word TypeCtorId0_18;
          MR_Word Types_19;
          MR_Word SymName_20;
          MR_Word STATE_VARIABLE_Info_1_35;
          MR_Word * AddrArgs_68;
          MR_Word Type_73;

          Arity_17 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_15);
          {
            TypeCtorId0_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtorId0_18, 0) = ((MR_Box) (SymName0_14));
            MR_hl_field(0, TypeCtorId0_18, 1) = ((MR_Box) (Arity_17));
          }
          parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_32, &Types_19);
          parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, ErrorContext_8, Types_19, (MR_Integer) 0, TypeCtorId0_18, &SymName_20, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_35);
          {
            Type_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_73, 0) = ((MR_Box) (SymName_20));
            MR_hl_field(1, Type_73, 1) = NULL;
            MR_hl_field(1, Type_73, 2) = ((MR_Box) (Kind_16));
          }
          AddrArgs_68 = (MR_Word *) (&(MR_hl_field(1, Type_73, 1)));
          *AddrOfType_71 = Type_73;
          parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(InInt_7, ErrorContext_8, Args0_15, AddrArgs_68, STATE_VARIABLE_Info_1_35, STATE_VARIABLE_Info_33);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_22 = ((MR_Word) ((MR_hl_field(2, Type0_9, 0))));

          switch (MR_tag((MR_Word) BuiltinType_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_7, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]), STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_7, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[1]), STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_23 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_22, 0))) & (MR_Integer) 15);
                MR_String IntModule_24;
                MR_Word Var_37;

                parse_tree__prog_data__int_type_module_name_2_p_0(IntType_23, &IntModule_24);
                {
                  Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_37, 0) = ((MR_Box) (IntModule_24));
                }
                parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_7, Var_37, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
              }
              break;
          }
          *AddrOfType_71 = Type0_9;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type0_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_52 = ((MR_Word) ((MR_hl_field(3, Type0_9, 1))));
              MR_Word Kind_53 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
              MR_Word * AddrArgs_70;
              MR_Word Type_80;

              {
                Type_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Type_80, 1) = NULL;
                MR_hl_field(3, Type_80, 2) = ((MR_Box) (Kind_53));
              }
              AddrArgs_70 = (MR_Word *) (&(MR_hl_field(3, Type_80, 1)));
              *AddrOfType_71 = Type_80;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(InInt_7, ErrorContext_8, Args0_52, AddrArgs_70, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, Type0_9, 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo0_26 = ((MR_Word) ((MR_hl_field(3, Type0_9, 3))));
              MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, Type0_9, 4))) & (MR_Integer) 3);
              MR_Word HOInstInfo_28;
              MR_Word STATE_VARIABLE_Info_6_45;
              MR_Word Args0_50 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
              MR_Word Args_51;
              MR_Word Type_76;

              parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_7, ErrorContext_8, Args0_50, &Args_51, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_6_45);
              if ((HOInstInfo0_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                HOInstInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_6_45;
              }
              else
              {
                MR_Word PredOrFunc_60;
                MR_Word Modes0_61;
                MR_Word MaybeArgRegs_62;
                MR_Word Detism_63;
                MR_Word Modes_64;
                MR_Word Var_65 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_26), (MR_Integer) 1));
                MR_Word Var_66;

                PredOrFunc_60 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, 0))) & (MR_Integer) 1);
                Modes0_61 = ((MR_Word) ((MR_hl_field(0, Var_65, 1))));
                MaybeArgRegs_62 = ((MR_Word) ((MR_hl_field(0, Var_65, 2))));
                Detism_63 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, 3))) & (MR_Integer) 7);
                parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_8, Modes0_61, &Modes_64, STATE_VARIABLE_Info_6_45, STATE_VARIABLE_Info_33);
                {
                  Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_66, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_60));
                  MR_hl_field(0, Var_66, 1) = ((MR_Box) (Modes_64));
                  MR_hl_field(0, Var_66, 2) = ((MR_Box) (MaybeArgRegs_62));
                  MR_hl_field(0, Var_66, 3) = (MR_Box) ((MR_Unsigned) (Detism_63));
                }
                HOInstInfo_28 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_66)));
              }
              {
                Type_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Type_76, 1) = (MR_Box) ((MR_Unsigned) (PorF_25));
                MR_hl_field(3, Type_76, 2) = ((MR_Box) (Args_51));
                MR_hl_field(3, Type_76, 3) = ((MR_Box) (HOInstInfo_28));
                MR_hl_field(3, Type_76, 4) = (MR_Box) ((MR_Unsigned) (Purity_27));
              }
              *AddrOfType_71 = Type_76;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Type0_9, 1))));
              MR_Word Args0_55 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
              MR_Word Kind_56 = ((MR_Word) ((MR_hl_field(3, Type0_9, 3))));
              MR_Word Type_10;
              MR_Word * AddrArgs_67;

              {
                Type_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Type_10, 1) = ((MR_Box) (Var_29));
                MR_hl_field(3, Type_10, 2) = NULL;
                MR_hl_field(3, Type_10, 3) = ((MR_Box) (Kind_56));
              }
              AddrArgs_67 = (MR_Word *) (&(MR_hl_field(3, Type_10, 2)));
              *AddrOfType_71 = Type_10;
              parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(InInt_7, ErrorContext_8, Args0_55, AddrArgs_67, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType0_30 = ((MR_Word) ((MR_hl_field(3, Type0_9, 1))));
              MR_Word Kind_58 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
              MR_Word * AddrSubType_69;
              MR_Word Type_77;
              MR_Word next_value_of_Type0_9;
              MR_Word * next_value_of_AddrOfType_71;

              {
                Type_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Type_77, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Type_77, 1) = NULL;
                MR_hl_field(3, Type_77, 2) = ((MR_Box) (Kind_58));
              }
              AddrSubType_69 = (MR_Word *) (&(MR_hl_field(3, Type_77, 1)));
              *AddrOfType_71 = Type_77;
              // direct tailcall eliminated
              ;
              next_value_of_Type0_9 = SubType0_30;
              next_value_of_AddrOfType_71 = AddrSubType_69;
              Type0_9 = next_value_of_Type0_9;
              AddrOfType_71 = next_value_of_AddrOfType_71;
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
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_23,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_23 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Types0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Type_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word * AddrTypes_22;
      MR_Word HeadVar__4_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_23;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, HeadVar__2_2, Type0_14, &Type_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
      {
        HeadVar__4_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_24, 0) = ((MR_Box) (Type_16));
        MR_hl_field(1, HeadVar__4_24, 1) = NULL;
      }
      AddrTypes_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_24, 1)));
      *AddrOfHeadVar__4_23 = HeadVar__4_24;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types0_15;
      next_value_of_AddrOfHeadVar__4_23 = AddrTypes_22;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_23 = next_value_of_AddrOfHeadVar__4_23;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Type0_9,
  MR_Word * Type_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  switch (MR_tag((MR_Word) Type0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_10 = Type0_9;
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName0_14 = ((MR_Word) ((MR_hl_field(1, Type0_9, 0))));
        MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(1, Type0_9, 1))));
        MR_Word Kind_16 = ((MR_Word) ((MR_hl_field(1, Type0_9, 2))));
        MR_Integer Arity_17;
        MR_Word TypeCtorId0_18;
        MR_Word Types_19;
        MR_Word SymName_20;
        MR_Word STATE_VARIABLE_Info_1_35;
        MR_Word * AddrArgs_68;

        Arity_17 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_15);
        {
          TypeCtorId0_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorId0_18, 0) = ((MR_Box) (SymName0_14));
          MR_hl_field(0, TypeCtorId0_18, 1) = ((MR_Box) (Arity_17));
        }
        parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_32, &Types_19);
        parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, ErrorContext_8, Types_19, (MR_Integer) 0, TypeCtorId0_18, &SymName_20, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(1, base, 1) = NULL;
          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_16));
        }
        AddrArgs_68 = (MR_Word *) (&(MR_hl_field(1, *Type_10, 1)));
        parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(InInt_7, ErrorContext_8, Args0_15, AddrArgs_68, STATE_VARIABLE_Info_1_35, STATE_VARIABLE_Info_33);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_22 = ((MR_Word) ((MR_hl_field(2, Type0_9, 0))));

        switch (MR_tag((MR_Word) BuiltinType_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_7, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]), STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
                break;
              case (MR_Integer) 1:
                parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_7, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_2[1]), STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_23 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_22, 0))) & (MR_Integer) 15);
              MR_String IntModule_24;
              MR_Word Var_37;

              parse_tree__prog_data__int_type_module_name_2_p_0(IntType_23, &IntModule_24);
              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_37, 0) = ((MR_Box) (IntModule_24));
              }
              parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_7, Var_37, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
            }
            break;
        }
        *Type_10 = Type0_9;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args0_52 = ((MR_Word) ((MR_hl_field(3, Type0_9, 1))));
            MR_Word Kind_53 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
            MR_Word * AddrArgs_70;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = NULL;
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_53));
            }
            AddrArgs_70 = (MR_Word *) (&(MR_hl_field(3, *Type_10, 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(InInt_7, ErrorContext_8, Args0_52, AddrArgs_70, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, Type0_9, 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo0_26 = ((MR_Word) ((MR_hl_field(3, Type0_9, 3))));
            MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, Type0_9, 4))) & (MR_Integer) 3);
            MR_Word HOInstInfo_28;
            MR_Word STATE_VARIABLE_Info_6_45;
            MR_Word Args0_50 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
            MR_Word Args_51;

            parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(InInt_7, ErrorContext_8, Args0_50, &Args_51, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_6_45);
            if ((HOInstInfo0_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HOInstInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_6_45;
            }
            else
            {
              MR_Word PredOrFunc_60;
              MR_Word Modes0_61;
              MR_Word MaybeArgRegs_62;
              MR_Word Detism_63;
              MR_Word Modes_64;
              MR_Word Var_65 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_26), (MR_Integer) 1));
              MR_Word Var_66;

              PredOrFunc_60 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, 0))) & (MR_Integer) 1);
              Modes0_61 = ((MR_Word) ((MR_hl_field(0, Var_65, 1))));
              MaybeArgRegs_62 = ((MR_Word) ((MR_hl_field(0, Var_65, 2))));
              Detism_63 = ((MR_Unsigned) ((MR_hl_field(0, Var_65, 3))) & (MR_Integer) 7);
              parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_8, Modes0_61, &Modes_64, STATE_VARIABLE_Info_6_45, STATE_VARIABLE_Info_33);
              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_66, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_60));
                MR_hl_field(0, Var_66, 1) = ((MR_Box) (Modes_64));
                MR_hl_field(0, Var_66, 2) = ((MR_Box) (MaybeArgRegs_62));
                MR_hl_field(0, Var_66, 3) = (MR_Box) ((MR_Unsigned) (Detism_63));
              }
              HOInstInfo_28 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_66)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Type_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_25));
              MR_hl_field(3, base, 2) = ((MR_Box) (Args_51));
              MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_28));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_27));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Type0_9, 1))));
            MR_Word Args0_55 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
            MR_Word Kind_56 = ((MR_Word) ((MR_hl_field(3, Type0_9, 3))));
            MR_Word * AddrArgs_67;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Type_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_29));
              MR_hl_field(3, base, 2) = NULL;
              MR_hl_field(3, base, 3) = ((MR_Box) (Kind_56));
            }
            AddrArgs_67 = (MR_Word *) (&(MR_hl_field(3, *Type_10, 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(InInt_7, ErrorContext_8, Args0_55, AddrArgs_67, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType0_30 = ((MR_Word) ((MR_hl_field(3, Type0_9, 1))));
            MR_Word Kind_58 = ((MR_Word) ((MR_hl_field(3, Type0_9, 2))));
            MR_Word * AddrSubType_69;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = NULL;
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_58));
            }
            AddrSubType_69 = (MR_Word *) (&(MR_hl_field(3, *Type_10, 1)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type__1_6_p_0(InInt_7, ErrorContext_8, SubType0_30, AddrSubType_69, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Types0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Type_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word * AddrTypes_22;

    parse_tree__module_qual__qualify_items__qualify_type_6_p_0(HeadVar__1_1, HeadVar__2_2, Type0_14, &Type_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTypes_22 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_type_list__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Types0_15, AddrTypes_22, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Inst0_9,
  MR_Word * AddrOfInst_100,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfInst_100 = Inst0_9;
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_40 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_41 = ((MR_Word) ((MR_hl_field(1, Inst0_9, 1))));
          MR_Word HOInstInfo_42;
          MR_Word Inst_109;

          if ((HOInstInfo0_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HOInstInfo_42 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
          }
          else
          {
            MR_Word PredOrFunc_91;
            MR_Word Modes0_92;
            MR_Word MaybeArgRegs_93;
            MR_Word Detism_94;
            MR_Word Modes_95;
            MR_Word Var_96 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_41), (MR_Integer) 1));
            MR_Word Var_97;

            PredOrFunc_91 = ((MR_Unsigned) ((MR_hl_field(0, Var_96, 0))) & (MR_Integer) 1);
            Modes0_92 = ((MR_Word) ((MR_hl_field(0, Var_96, 1))));
            MaybeArgRegs_93 = ((MR_Word) ((MR_hl_field(0, Var_96, 2))));
            Detism_94 = ((MR_Unsigned) ((MR_hl_field(0, Var_96, 3))) & (MR_Integer) 7);
            parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_8, Modes0_92, &Modes_95, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_97, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_91));
              MR_hl_field(0, Var_97, 1) = ((MR_Box) (Modes_95));
              MR_hl_field(0, Var_97, 2) = ((MR_Box) (MaybeArgRegs_93));
              MR_hl_field(0, Var_97, 3) = (MR_Box) ((MR_Unsigned) (Detism_94));
            }
            HOInstInfo_42 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_97)));
          }
          {
            Inst_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Inst_109, 0) = (MR_Box) ((MR_Unsigned) (Uniq_40));
            MR_hl_field(1, Inst_109, 1) = ((MR_Box) (HOInstInfo_42));
          }
          *AddrOfInst_100 = Inst_109;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults0_16 = ((MR_Word) ((MR_hl_field(2, Inst0_9, 1))));
          MR_Word BoundFunctors0_17 = ((MR_Word) ((MR_hl_field(2, Inst0_9, 2))));
          MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_9, 0))) & (MR_Integer) 7);
          MR_Word * AddrBoundFunctors_98;
          MR_Word Inst_101;

          switch (MR_tag((MR_Word) InstResults0_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults0_16)) {
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/6", (MR_String) "compiler generated inst not expected");
                return;
              }
              break;
          }
          {
            Inst_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Inst_101, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
            MR_hl_field(2, Inst_101, 1) = ((MR_Box) (InstResults0_16));
            MR_hl_field(2, Inst_101, 2) = NULL;
          }
          AddrBoundFunctors_98 = (MR_Word *) (&(MR_hl_field(2, Inst_101, 2)));
          *AddrOfInst_100 = Inst_101;
          parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0(InInt_7, ErrorContext_8, BoundFunctors0_17, AddrBoundFunctors_98, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName0_28 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 1))));
              MR_Word InstName_29;
              MR_Word Inst_107;

              switch (MR_tag((MR_Word) InstName0_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SymName0_50 = ((MR_Word) ((MR_hl_field(0, InstName0_28, 0))));
                    MR_Word Insts0_51 = ((MR_Word) ((MR_hl_field(0, InstName0_28, 1))));
                    MR_Word Insts_52;
                    MR_Word SymName_57;
                    MR_Word STATE_VARIABLE_Info_1_80;
                    MR_String Var_81;

                    parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(InInt_7, ErrorContext_8, Insts0_51, &Insts_52, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_1_80);
                    succeeded = ((MR_tag((MR_Word) SymName0_50)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_81 = ((MR_String) ((MR_hl_field(0, SymName0_50, 0))));
                      succeeded = (strcmp(Var_81, (MR_String) "") == 0);
                    }
                    if (succeeded)
                    {
                      MR_Word Spec_53;
                      MR_Word InstCtor_54;
                      MR_Word UndefInsts0_55;
                      MR_Word UndefInsts_56;
                      MR_Integer Var_82;

                      parse_tree__module_qual__qual_errors__report_invalid_user_inst_4_p_0(SymName0_50, Insts_52, ErrorContext_8, &Spec_53);
                      Var_82 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_51);
                      {
                        InstCtor_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, InstCtor_54, 0) = ((MR_Box) (SymName0_50));
                        MR_hl_field(0, InstCtor_54, 1) = ((MR_Box) (Var_82));
                      }
                      parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_1_80, &UndefInsts0_55);
                      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (InstCtor_54)), ((MR_Box) (Spec_53)), UndefInsts0_55, &UndefInsts_56);
                      parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(UndefInsts_56, STATE_VARIABLE_Info_1_80, STATE_VARIABLE_Info_31);
                      SymName_57 = SymName0_50;
                    }
                    else
                    {
                      MR_Integer Arity_58;
                      MR_Word InstIdSet_59;
                      MR_Word Var_84;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_51, &Arity_58);
                      parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_1_80, &InstIdSet_59);
                      {
                        Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_84, 0) = ((MR_Box) (SymName0_50));
                        MR_hl_field(0, Var_84, 1) = ((MR_Box) (Arity_58));
                      }
                      parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, ErrorContext_8, InstIdSet_59, (MR_Integer) 1, Var_84, &SymName_57, STATE_VARIABLE_Info_1_80, STATE_VARIABLE_Info_31);
                    }
                    {
                      InstName_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InstName_29, 0) = ((MR_Box) (SymName_57));
                      MR_hl_field(0, InstName_29, 1) = ((MR_Box) (Insts_52));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/6", (MR_String) "unexpected compiler generated inst_name");
                    return;
                  }
                  break;
              }
              {
                Inst_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Inst_107, 1) = ((MR_Box) (InstName_29));
              }
              *AddrOfInst_100 = Inst_107;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 1))));
              MR_Word SubInst0_26 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 2))));
              MR_Word * AddrSubInst_99;
              MR_Word Inst_104;
              MR_Word next_value_of_Inst0_9;
              MR_Word * next_value_of_AddrOfInst_100;

              {
                Inst_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Inst_104, 1) = ((MR_Box) (Vars_25));
                MR_hl_field(3, Inst_104, 2) = NULL;
              }
              AddrSubInst_99 = (MR_Word *) (&(MR_hl_field(3, Inst_104, 2)));
              *AddrOfInst_100 = Inst_104;
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_9 = SubInst0_26;
              next_value_of_AddrOfInst_100 = AddrSubInst_99;
              Inst0_9 = next_value_of_Inst0_9;
              AddrOfInst_100 = next_value_of_AddrOfInst_100;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Inst_10;
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_13 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 2))));
              MR_Word HOInstInfo_14;

              if ((HOInstInfo0_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                HOInstInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
              }
              else
              {
                MR_Word PredOrFunc_43;
                MR_Word Modes0_44;
                MR_Word MaybeArgRegs_45;
                MR_Word Detism_46;
                MR_Word Modes_47;
                MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_13), (MR_Integer) 1));
                MR_Word Var_49;

                PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(0, Var_48, 0))) & (MR_Integer) 1);
                Modes0_44 = ((MR_Word) ((MR_hl_field(0, Var_48, 1))));
                MaybeArgRegs_45 = ((MR_Word) ((MR_hl_field(0, Var_48, 2))));
                Detism_46 = ((MR_Unsigned) ((MR_hl_field(0, Var_48, 3))) & (MR_Integer) 7);
                parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_8, Modes0_44, &Modes_47, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                {
                  Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_43));
                  MR_hl_field(0, Var_49, 1) = ((MR_Box) (Modes_47));
                  MR_hl_field(0, Var_49, 2) = ((MR_Box) (MaybeArgRegs_45));
                  MR_hl_field(0, Var_49, 3) = (MR_Box) ((MR_Unsigned) (Detism_46));
                }
                HOInstInfo_14 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_49)));
              }
              {
                Inst_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Inst_10, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
                MR_hl_field(3, Inst_10, 2) = ((MR_Box) (HOInstInfo_14));
              }
              *AddrOfInst_100 = Inst_10;
            }
            break;
          case (MR_Integer) 3:
            {
              *AddrOfInst_100 = Inst0_9;
              *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_38,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_38 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Mode0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Modes0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Mode_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word * AddrModes_37;
      MR_Word HeadVar__4_39;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_38;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      if (((MR_tag((MR_Word) Mode0_14)) == (MR_Integer) 0))
      {
        MR_Word InstA0_22 = ((MR_Word) ((MR_hl_field(0, Mode0_14, 0))));
        MR_Word InstB0_23 = ((MR_Word) ((MR_hl_field(0, Mode0_14, 1))));
        MR_Word InstA_24;
        MR_Word InstB_25;
        MR_Word STATE_VARIABLE_Info_1_32;

        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_22, &InstA_24, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_32);
        parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_23, &InstB_25, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_1_21);
        {
          Mode_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mode_16, 0) = ((MR_Box) (InstA_24));
          MR_hl_field(0, Mode_16, 1) = ((MR_Box) (InstB_25));
        }
      }
      else
      {
        MR_Word SymName0_26 = ((MR_Word) ((MR_hl_field(1, Mode0_14, 0))));
        MR_Word Insts0_27 = ((MR_Word) ((MR_hl_field(1, Mode0_14, 1))));
        MR_Word Insts_28;
        MR_Integer Arity_29;
        MR_Word Modes_30;
        MR_Word SymName_31;
        MR_Word STATE_VARIABLE_Info_3_33;
        MR_Word Var_35;

        parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_27, &Insts_28, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_3_33);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_28, &Arity_29);
        parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_33, &Modes_30);
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (SymName0_26));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (Arity_29));
        }
        parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes_30, (MR_Integer) 2, Var_35, &SymName_31, STATE_VARIABLE_Info_3_33, &STATE_VARIABLE_Info_1_21);
        {
          Mode_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mode_16, 0) = ((MR_Box) (SymName_31));
          MR_hl_field(1, Mode_16, 1) = ((MR_Box) (Insts_28));
        }
      }
      {
        HeadVar__4_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_39, 0) = ((MR_Box) (Mode_16));
        MR_hl_field(1, HeadVar__4_39, 1) = NULL;
      }
      AddrModes_37 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_39, 1)));
      *AddrOfHeadVar__4_38 = HeadVar__4_39;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Modes0_15;
      next_value_of_AddrOfHeadVar__4_38 = AddrModes_37;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_38 = next_value_of_AddrOfHeadVar__4_38;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_23,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_23 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Inst0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Insts0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Inst_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word * AddrInsts_22;
      MR_Word HeadVar__4_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_23;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_14, &Inst_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
      {
        HeadVar__4_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_24, 0) = ((MR_Box) (Inst_16));
        MR_hl_field(1, HeadVar__4_24, 1) = NULL;
      }
      AddrInsts_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_24, 1)));
      *AddrOfHeadVar__4_23 = HeadVar__4_24;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Insts0_15;
      next_value_of_AddrOfHeadVar__4_23 = AddrInsts_22;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_23 = next_value_of_AddrOfHeadVar__4_23;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  recompilation__record_uses__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word BoundFunctor0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word BoundFunctor_16;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_14, 0))));
      MR_Word Insts0_23 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_14, 1))));
      MR_Word Insts_28;
      MR_Word STATE_VARIABLE_Info_1_31;
      MR_Word * AddrBoundFunctors_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      switch (MR_tag((MR_Word) ConsId_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Name_24;
            MR_Integer Arity_25;
            MR_Word Id_27;
            MR_Word Var_29 = (MR_Word) (MR_body((MR_Word) (ConsId_22), (MR_Integer) 1));
            MR_Word Var_30;

            Name_24 = ((MR_Word) ((MR_hl_field(0, Var_29, 0))));
            Arity_25 = ((MR_Integer) ((MR_hl_field(0, Var_29, 1))));
            {
              Id_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Id_27, 0) = ((MR_Box) (Name_24));
              MR_hl_field(0, Id_27, 1) = ((MR_Box) (Arity_25));
            }
            {
              Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[11]));
              MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0_1));
              MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_30, 3) = ((MR_Box) ((MR_Integer) 5));
              MR_hl_field(0, Var_30, 4) = ((MR_Box) (Id_27));
              MR_hl_field(0, Var_30, 5) = ((MR_Box) (Id_27));
            }
            parse_tree__module_qual__mq_info__update_recompilation_info_3_p_0(Var_30, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_31);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ConsId_22, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 5:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 13:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 14:
              STATE_VARIABLE_Info_1_31 = STATE_VARIABLE_Info_0_5;
              break;
          }
          break;
      }
      parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_23, &Insts_28, STATE_VARIABLE_Info_1_31, &STATE_VARIABLE_Info_1_21);
      {
        BoundFunctor_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundFunctor_16, 0) = ((MR_Box) (ConsId_22));
        MR_hl_field(0, BoundFunctor_16, 1) = ((MR_Box) (Insts_28));
      }
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_35, 0) = ((MR_Box) (BoundFunctor_16));
        MR_hl_field(1, HeadVar__4_35, 1) = NULL;
      }
      AddrBoundFunctors_33 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_35, 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BoundFunctors0_15;
      next_value_of_AddrOfHeadVar__4_34 = AddrBoundFunctors_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Mode0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Modes0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Mode_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word * AddrModes_37;

    if (((MR_tag((MR_Word) Mode0_14)) == (MR_Integer) 0))
    {
      MR_Word InstA0_22 = ((MR_Word) ((MR_hl_field(0, Mode0_14, 0))));
      MR_Word InstB0_23 = ((MR_Word) ((MR_hl_field(0, Mode0_14, 1))));
      MR_Word InstA_24;
      MR_Word InstB_25;
      MR_Word STATE_VARIABLE_Info_1_32;

      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstA0_22, &InstA_24, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_32);
      parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, InstB0_23, &InstB_25, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_1_21);
      {
        Mode_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_16, 0) = ((MR_Box) (InstA_24));
        MR_hl_field(0, Mode_16, 1) = ((MR_Box) (InstB_25));
      }
    }
    else
    {
      MR_Word SymName0_26 = ((MR_Word) ((MR_hl_field(1, Mode0_14, 0))));
      MR_Word Insts0_27 = ((MR_Word) ((MR_hl_field(1, Mode0_14, 1))));
      MR_Word Insts_28;
      MR_Integer Arity_29;
      MR_Word Modes_30;
      MR_Word SymName_31;
      MR_Word STATE_VARIABLE_Info_3_33;
      MR_Word Var_35;

      parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_27, &Insts_28, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_3_33);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_28, &Arity_29);
      parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_33, &Modes_30);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (SymName0_26));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (Arity_29));
      }
      parse_tree__module_qual__id_set__find_unique_match_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes_30, (MR_Integer) 2, Var_35, &SymName_31, STATE_VARIABLE_Info_3_33, &STATE_VARIABLE_Info_1_21);
      {
        Mode_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Mode_16, 0) = ((MR_Box) (SymName_31));
        MR_hl_field(1, Mode_16, 1) = ((MR_Box) (Insts_28));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrModes_37 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_mode_list__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_15, AddrModes_37, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Inst0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Insts0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Inst_16;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Word * AddrInsts_22;

    parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_14, &Inst_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_16));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrInsts_22 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst_list__1_6_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_15, AddrInsts_22, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_6_p_0(
  MR_Word InInt_7,
  MR_Word ErrorContext_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_10 = Inst0_9;
        *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_40 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_9, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_41 = ((MR_Word) ((MR_hl_field(1, Inst0_9, 1))));
        MR_Word HOInstInfo_42;

        if ((HOInstInfo0_41 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HOInstInfo_42 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
        }
        else
        {
          MR_Word PredOrFunc_91;
          MR_Word Modes0_92;
          MR_Word MaybeArgRegs_93;
          MR_Word Detism_94;
          MR_Word Modes_95;
          MR_Word Var_96 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_41), (MR_Integer) 1));
          MR_Word Var_97;

          PredOrFunc_91 = ((MR_Unsigned) ((MR_hl_field(0, Var_96, 0))) & (MR_Integer) 1);
          Modes0_92 = ((MR_Word) ((MR_hl_field(0, Var_96, 1))));
          MaybeArgRegs_93 = ((MR_Word) ((MR_hl_field(0, Var_96, 2))));
          Detism_94 = ((MR_Unsigned) ((MR_hl_field(0, Var_96, 3))) & (MR_Integer) 7);
          parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_8, Modes0_92, &Modes_95, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_97, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_91));
            MR_hl_field(0, Var_97, 1) = ((MR_Box) (Modes_95));
            MR_hl_field(0, Var_97, 2) = ((MR_Box) (MaybeArgRegs_93));
            MR_hl_field(0, Var_97, 3) = (MR_Box) ((MR_Unsigned) (Detism_94));
          }
          HOInstInfo_42 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_97)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_10 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_40));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_42));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults0_16 = ((MR_Word) ((MR_hl_field(2, Inst0_9, 1))));
        MR_Word BoundFunctors0_17 = ((MR_Word) ((MR_hl_field(2, Inst0_9, 2))));
        MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_9, 0))) & (MR_Integer) 7);
        MR_Word * AddrBoundFunctors_98;

        switch (MR_tag((MR_Word) InstResults0_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstResults0_16)) {
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/6", (MR_String) "compiler generated inst not expected");
              return;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_10 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults0_16));
          MR_hl_field(2, base, 2) = NULL;
        }
        AddrBoundFunctors_98 = (MR_Word *) (&(MR_hl_field(2, *Inst_10, 2)));
        parse_tree__module_qual__qualify_items__LCMC__pred__qualify_bound_functors__1_6_p_0(InInt_7, ErrorContext_8, BoundFunctors0_17, AddrBoundFunctors_98, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_28 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 1))));
            MR_Word InstName_29;

            switch (MR_tag((MR_Word) InstName0_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SymName0_50 = ((MR_Word) ((MR_hl_field(0, InstName0_28, 0))));
                  MR_Word Insts0_51 = ((MR_Word) ((MR_hl_field(0, InstName0_28, 1))));
                  MR_Word Insts_52;
                  MR_Word SymName_57;
                  MR_Word STATE_VARIABLE_Info_1_80;
                  MR_String Var_81;

                  parse_tree__module_qual__qualify_items__qualify_inst_list_6_p_0(InInt_7, ErrorContext_8, Insts0_51, &Insts_52, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_1_80);
                  succeeded = ((MR_tag((MR_Word) SymName0_50)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_81 = ((MR_String) ((MR_hl_field(0, SymName0_50, 0))));
                    succeeded = (strcmp(Var_81, (MR_String) "") == 0);
                  }
                  if (succeeded)
                  {
                    MR_Word Spec_53;
                    MR_Word InstCtor_54;
                    MR_Word UndefInsts0_55;
                    MR_Word UndefInsts_56;
                    MR_Integer Var_82;

                    parse_tree__module_qual__qual_errors__report_invalid_user_inst_4_p_0(SymName0_50, Insts_52, ErrorContext_8, &Spec_53);
                    Var_82 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_51);
                    {
                      InstCtor_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, InstCtor_54, 0) = ((MR_Box) (SymName0_50));
                      MR_hl_field(0, InstCtor_54, 1) = ((MR_Box) (Var_82));
                    }
                    parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_1_80, &UndefInsts0_55);
                    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (InstCtor_54)), ((MR_Box) (Spec_53)), UndefInsts0_55, &UndefInsts_56);
                    parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(UndefInsts_56, STATE_VARIABLE_Info_1_80, STATE_VARIABLE_Info_31);
                    SymName_57 = SymName0_50;
                  }
                  else
                  {
                    MR_Integer Arity_58;
                    MR_Word InstIdSet_59;
                    MR_Word Var_84;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_51, &Arity_58);
                    parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_1_80, &InstIdSet_59);
                    {
                      Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_84, 0) = ((MR_Box) (SymName0_50));
                      MR_hl_field(0, Var_84, 1) = ((MR_Box) (Arity_58));
                    }
                    parse_tree__module_qual__id_set__find_unique_match_8_p_0(InInt_7, ErrorContext_8, InstIdSet_59, (MR_Integer) 1, Var_84, &SymName_57, STATE_VARIABLE_Info_1_80, STATE_VARIABLE_Info_31);
                  }
                  {
                    InstName_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, InstName_29, 0) = ((MR_Box) (SymName_57));
                    MR_hl_field(0, InstName_29, 1) = ((MR_Box) (Insts_52));
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/6", (MR_String) "unexpected compiler generated inst_name");
                  return;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstName_29));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 1))));
            MR_Word SubInst0_26 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 2))));
            MR_Word * AddrSubInst_99;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_25));
              MR_hl_field(3, base, 2) = NULL;
            }
            AddrSubInst_99 = (MR_Word *) (&(MR_hl_field(3, *Inst_10, 2)));
            parse_tree__module_qual__qualify_items__LCMC__pred__qualify_inst__1_6_p_0(InInt_7, ErrorContext_8, SubInst0_26, AddrSubInst_99, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_9, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_13 = ((MR_Word) ((MR_hl_field(3, Inst0_9, 2))));
            MR_Word HOInstInfo_14;

            if ((HOInstInfo0_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HOInstInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
            }
            else
            {
              MR_Word PredOrFunc_43;
              MR_Word Modes0_44;
              MR_Word MaybeArgRegs_45;
              MR_Word Detism_46;
              MR_Word Modes_47;
              MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_13), (MR_Integer) 1));
              MR_Word Var_49;

              PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(0, Var_48, 0))) & (MR_Integer) 1);
              Modes0_44 = ((MR_Word) ((MR_hl_field(0, Var_48, 1))));
              MaybeArgRegs_45 = ((MR_Word) ((MR_hl_field(0, Var_48, 2))));
              Detism_46 = ((MR_Unsigned) ((MR_hl_field(0, Var_48, 3))) & (MR_Integer) 7);
              parse_tree__module_qual__qualify_items__qualify_mode_list_6_p_0(InInt_7, ErrorContext_8, Modes0_44, &Modes_47, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_43));
                MR_hl_field(0, Var_49, 1) = ((MR_Box) (Modes_47));
                MR_hl_field(0, Var_49, 2) = ((MR_Box) (MaybeArgRegs_45));
                MR_hl_field(0, Var_49, 3) = (MR_Box) ((MR_Unsigned) (Detism_46));
              }
              HOInstInfo_14 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_49)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            *Inst_10 = Inst0_9;
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
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
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_ItemTypeRepnInfo_10;
  MR_Word conv15_STATE_VARIABLE_Info_32;

  parse_tree__module_qual__qualify_items__module_qualify_item_type_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv16_ItemTypeRepnInfo_10, ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_Info_32);
  *wrapper_arg_2 = ((MR_Box) (conv16_ItemTypeRepnInfo_10));
  *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_Info_32));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_ItemInstance_8;
  MR_Word conv12_STATE_VARIABLE_Info_28;

  parse_tree__module_qual__qualify_items__module_qualify_item_abstract_instance_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv13_ItemInstance_8, ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_Info_28);
  *wrapper_arg_2 = ((MR_Box) (conv13_ItemInstance_8));
  *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_Info_28));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_ItemTypeClass_8;
  MR_Word conv9_STATE_VARIABLE_Info_23;

  parse_tree__module_qual__qualify_items__module_qualify_item_abstract_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_ItemTypeClass_8, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Info_23);
  *wrapper_arg_2 = ((MR_Box) (conv10_ItemTypeClass_8));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_CheckedDefn_6;
  MR_Word conv6_STATE_VARIABLE_Info_22;

  parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_CheckedDefn_6, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Info_22);
  *wrapper_arg_2 = ((MR_Box) (conv7_CheckedDefn_6));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_CheckedDefn_6;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_CheckedDefn_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_2 = ((MR_Box) (conv4_CheckedDefn_6));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CheckedDefn_6;
  MR_Word conv0_STATE_VARIABLE_Info_47;

  parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_CheckedDefn_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_47);
  *wrapper_arg_2 = ((MR_Box) (conv1_CheckedDefn_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_47));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word OrigParseTreeInt3_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_17,
  MR_Word * STATE_VARIABLE_ErrSpecs_18)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 0))));
  MR_Word Info0_11;
  MR_Word Info1_12;
  MR_Word Info_13;
  MR_Word InvalidTypeSpecs_14;
  MR_Word InvalidInstModeSpecs_15;
  MR_Word NonBlockingUndefSpecs_16;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word ModuleName_34;
  MR_Word ModuleNameContext_35;
  MR_Word InclMap_36;
  MR_Word ImportUseMap_37;
  MR_Word IntTypeDefnMap0_38;
  MR_Word IntInstDefnMap0_39;
  MR_Word IntModeDefnMap0_40;
  MR_Word IntTypeClasses0_41;
  MR_Word IntInstances0_42;
  MR_Word IntTypeRepns0_43;
  MR_Word IntTypeDefnMap_45;
  MR_Word IntInstDefnMap_46;
  MR_Word IntModeDefnMap_47;
  MR_Word IntTypeClasses_48;
  MR_Word IntInstances_49;
  MR_Word IntTypeRepns_50;
  MR_Word STATE_VARIABLE_Info_1_52;
  MR_Word STATE_VARIABLE_Info_2_54;
  MR_Word STATE_VARIABLE_Info_3_56;
  MR_Word STATE_VARIABLE_Info_4_58;
  MR_Word STATE_VARIABLE_Info_5_60;
  MR_Word Var_61;
  MR_Box conv2_STATE_VARIABLE_Info_1_52;
  MR_Box conv5_STATE_VARIABLE_Info_2_54;
  MR_Box conv8_STATE_VARIABLE_Info_3_56;
  MR_Box conv11_STATE_VARIABLE_Info_4_58;
  MR_Box conv14_STATE_VARIABLE_Info_5_60;
  MR_Box conv17_Info_13;

  parse_tree__module_qual__mq_info__init_mq_info_4_p_0(Globals_6, ModuleName_10, (MR_Integer) 0, &Info0_11);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0((MR_Word) ((MR_Unsigned) 0U), OrigParseTreeInt3_7, Info0_11, &Info1_12);
  ModuleName_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 0))));
  ModuleNameContext_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 1))));
  InclMap_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 2))));
  ImportUseMap_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 3))));
  IntTypeDefnMap0_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 4))));
  IntInstDefnMap0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 5))));
  IntModeDefnMap0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 6))));
  IntTypeClasses0_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 7))));
  IntInstances0_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 8))));
  IntTypeRepns0_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt3_7, 9))));
  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[6]), IntTypeDefnMap0_38, &IntTypeDefnMap_45, ((MR_Box) (Info1_12)), &conv2_STATE_VARIABLE_Info_1_52);
  STATE_VARIABLE_Info_1_52 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_52));
  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[7]), IntInstDefnMap0_39, &IntInstDefnMap_46, ((MR_Box) (STATE_VARIABLE_Info_1_52)), &conv5_STATE_VARIABLE_Info_2_54);
  STATE_VARIABLE_Info_2_54 = ((MR_Word) (conv5_STATE_VARIABLE_Info_2_54));
  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[8]), IntModeDefnMap0_40, &IntModeDefnMap_47, ((MR_Box) (STATE_VARIABLE_Info_2_54)), &conv8_STATE_VARIABLE_Info_3_56);
  STATE_VARIABLE_Info_3_56 = ((MR_Word) (conv8_STATE_VARIABLE_Info_3_56));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[15]), IntTypeClasses0_41, &IntTypeClasses_48, ((MR_Box) (STATE_VARIABLE_Info_3_56)), &conv11_STATE_VARIABLE_Info_4_58);
  STATE_VARIABLE_Info_4_58 = ((MR_Word) (conv11_STATE_VARIABLE_Info_4_58));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[16]), IntInstances0_42, &IntInstances_49, ((MR_Box) (STATE_VARIABLE_Info_4_58)), &conv14_STATE_VARIABLE_Info_5_60);
  STATE_VARIABLE_Info_5_60 = ((MR_Word) (conv14_STATE_VARIABLE_Info_5_60));
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_9[0]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_parse_tree_int3_5_p_0_6));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (ModuleName_34));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_61, IntTypeRepns0_43, &IntTypeRepns_50, ((MR_Box) (STATE_VARIABLE_Info_5_60)), &conv17_Info_13);
  Info_13 = ((MR_Word) (conv17_Info_13));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt3_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_35));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_36));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_37));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntTypeDefnMap_45));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntInstDefnMap_46));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntModeDefnMap_47));
    MR_hl_field(0, base, 7) = ((MR_Box) (IntTypeClasses_48));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntInstances_49));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntTypeRepns_50));
  }
  parse_tree__module_qual__mq_info__get_err_specs_in_mq_info_4_p_0(Info_13, &InvalidTypeSpecs_14, &InvalidInstModeSpecs_15, &NonBlockingUndefSpecs_16);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NonBlockingUndefSpecs_16, STATE_VARIABLE_ErrSpecs_0_17);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InvalidInstModeSpecs_15, Var_23);
  *STATE_VARIABLE_ErrSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InvalidTypeSpecs_14, Var_22);
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_2(
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
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0(
  MR_Word Globals_8,
  MR_Word AugMakeIntUnit0_9,
  MR_Word * AugMakeIntUnit_10,
  MR_Word STATE_VARIABLE_ErrSpecs_0_29,
  MR_Word * STATE_VARIABLE_ErrSpecs_30,
  MR_Word STATE_VARIABLE_WarnSpecs_0_31,
  MR_Word * STATE_VARIABLE_WarnSpecs_32)
{
  MR_Word ParseTreeModuleSrc0_13 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_9, 0))));
  MR_Word DelayedSpecs0_14 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_9, 1))));
  MR_Word AncestorInt0s_15 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_9, 2))));
  MR_Word DirectInt3Specs_16 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_9, 3))));
  MR_Word IndirectInt3Specs_17 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_9, 4))));
  MR_Word ModuleVersionNumbers_18 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit0_9, 5))));
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 0))));
  MR_Word ParseTreeModuleSrc_21;
  MR_Word InvalidTypeSpecs_22;
  MR_Word InvalidInstModeSpecs_23;
  MR_Word NonBlockingUndefSpecs_24;
  MR_Word WarnUnusedInterfaceImports_25;
  MR_Word STATE_VARIABLE_Info_1_34;
  MR_Word STATE_VARIABLE_Info_2_35;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_Info_3_38;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_Info_4_42;
  MR_Word STATE_VARIABLE_Info_5_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Box conv1_STATE_VARIABLE_Info_3_38;
  MR_Box conv3_STATE_VARIABLE_Info_4_42;

  parse_tree__module_qual__mq_info__init_mq_info_4_p_0(Globals_8, ModuleName_20, (MR_Integer) 1, &STATE_VARIABLE_Info_1_34);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc0_13, STATE_VARIABLE_Info_1_34, &STATE_VARIABLE_Info_2_35);
  Var_37 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0), AncestorInt0s_15);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[14]), Var_37, ((MR_Box) (STATE_VARIABLE_Info_2_35)), &conv1_STATE_VARIABLE_Info_3_38);
  STATE_VARIABLE_Info_3_38 = ((MR_Word) (conv1_STATE_VARIABLE_Info_3_38));
  Var_41 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), DirectInt3Specs_16);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[5]), Var_41, ((MR_Box) (STATE_VARIABLE_Info_3_38)), &conv3_STATE_VARIABLE_Info_4_42);
  STATE_VARIABLE_Info_4_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_4_42));
  parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0(ParseTreeModuleSrc0_13, &ParseTreeModuleSrc_21, STATE_VARIABLE_Info_4_42, &STATE_VARIABLE_Info_5_43);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *AugMakeIntUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedSpecs0_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (AncestorInt0s_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (DirectInt3Specs_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (IndirectInt3Specs_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (ModuleVersionNumbers_18));
  }
  parse_tree__module_qual__mq_info__get_err_specs_in_mq_info_4_p_0(STATE_VARIABLE_Info_5_43, &InvalidTypeSpecs_22, &InvalidInstModeSpecs_23, &NonBlockingUndefSpecs_24);
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NonBlockingUndefSpecs_24, STATE_VARIABLE_ErrSpecs_0_29);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InvalidInstModeSpecs_23, Var_46);
  *STATE_VARIABLE_ErrSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), InvalidTypeSpecs_22, Var_45);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 165, &WarnUnusedInterfaceImports_25);
  switch (WarnUnusedInterfaceImports_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_WarnSpecs_32 = STATE_VARIABLE_WarnSpecs_0_31;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedImportsContextsMap_26;
        MR_Word UnusedImportsSpecsMap_27;
        MR_Word UnusedImportsSpecs_28;
        MR_Word Var_48;
        MR_Word UnusedImportsMap0_102;
        MR_Word ModuleExportsInstances_103;

        parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(STATE_VARIABLE_Info_5_43, &UnusedImportsMap0_102);
        parse_tree__module_qual__mq_info__mq_info_get_exported_instances_flag_2_p_0(STATE_VARIABLE_Info_5_43, &ModuleExportsInstances_103);
        switch (ModuleExportsInstances_103) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            UnusedImportsContextsMap_26 = UnusedImportsMap0_102;
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstanceImports_104;
              MR_Word Var_105;

              parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(STATE_VARIABLE_Info_5_43, &InstanceImports_104);
              Var_105 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InstanceImports_104);
              mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_105, UnusedImportsMap0_102, &UnusedImportsContextsMap_26);
            }
            break;
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[3]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_make_int_unit_7_p_0_3));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (ModuleName_20));
        }
        mercury__map__map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), Var_48, UnusedImportsContextsMap_26, &UnusedImportsSpecsMap_27);
        mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), UnusedImportsSpecsMap_27, &UnusedImportsSpecs_28);
        *STATE_VARIABLE_WarnSpecs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), UnusedImportsSpecs_28, STATE_VARIABLE_WarnSpecs_0_31);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_2(
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
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_1(
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
parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0(
  MR_Word Globals_10,
  MR_Word AugCompUnit0_11,
  MR_Word * AugCompUnit_12,
  MR_Word EventSpecMap0_13,
  MR_Word * EventSpecMap_14,
  MR_String EventSpecFileName_15,
  MR_Word * STATE_VARIABLE_Info_37,
  MR_Word * UnusedImportsSet_17,
  MR_Word * UnusedImportsSpecsMap_18)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc0_19 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 0))));
  MR_Word AncestorIntSpecs_20 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 1))));
  MR_Word DirectInt1Specs_21 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 2))));
  MR_Word IndirectInt2Specs_22 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 3))));
  MR_Word PlainOptSpecs_23 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 4))));
  MR_Word TransOptSpecs_24 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 5))));
  MR_Word IntForOptSpecs_25 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 6))));
  MR_Word TypeRepnSpecs_26 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 7))));
  MR_Word ModuleVersionNumbers_27 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_11, 8))));
  MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_19, 0))));
  MR_Word ParseTreeModuleSrc_29;
  MR_Word EventSpecList0_30;
  MR_Word EventSpecList_31;
  MR_Word WarnUnusedInterfaceImports_32;
  MR_Word WarnUnusedImports_33;
  MR_Word STATE_VARIABLE_Info_1_39;
  MR_Word STATE_VARIABLE_Info_2_40;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_Info_3_43;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Info_4_46;
  MR_Word STATE_VARIABLE_Info_5_47;
  MR_Box conv1_STATE_VARIABLE_Info_3_43;
  MR_Box conv3_STATE_VARIABLE_Info_4_46;

  parse_tree__module_qual__mq_info__init_mq_info_4_p_0(Globals_10, ModuleName_28, (MR_Integer) 1, &STATE_VARIABLE_Info_1_39);
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc0_19, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_2_40);
  Var_42 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), AncestorIntSpecs_20);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[3]), Var_42, ((MR_Box) (STATE_VARIABLE_Info_2_40)), &conv1_STATE_VARIABLE_Info_3_43);
  STATE_VARIABLE_Info_3_43 = ((MR_Word) (conv1_STATE_VARIABLE_Info_3_43));
  Var_45 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), DirectInt1Specs_21);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[4]), Var_45, ((MR_Box) (STATE_VARIABLE_Info_3_43)), &conv3_STATE_VARIABLE_Info_4_46);
  STATE_VARIABLE_Info_4_46 = ((MR_Word) (conv3_STATE_VARIABLE_Info_4_46));
  parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0(ParseTreeModuleSrc0_19, &ParseTreeModuleSrc_29, STATE_VARIABLE_Info_4_46, &STATE_VARIABLE_Info_5_47);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt1Specs_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt2Specs_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (PlainOptSpecs_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (TransOptSpecs_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntForOptSpecs_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeRepnSpecs_26));
    MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbers_27));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_13, &EventSpecList0_30);
  parse_tree__module_qual__qualify_items__qualify_event_specs_6_p_0((MR_Integer) 0, EventSpecFileName_15, EventSpecList0_30, &EventSpecList_31, STATE_VARIABLE_Info_5_47, STATE_VARIABLE_Info_37);
  mercury__map__from_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_31, EventSpecMap_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 165, &WarnUnusedInterfaceImports_32);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 164, &WarnUnusedImports_33);
  succeeded = (WarnUnusedInterfaceImports_32 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (WarnUnusedImports_33 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word UnusedImportsContextMap_34;
    MR_Word UnusedImports_35;
    MR_Word UnusedImportsMap0_109;
    MR_Word ModuleExportsInstances_110;

    parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(*STATE_VARIABLE_Info_37, &UnusedImportsMap0_109);
    parse_tree__module_qual__mq_info__mq_info_get_exported_instances_flag_2_p_0(*STATE_VARIABLE_Info_37, &ModuleExportsInstances_110);
    switch (ModuleExportsInstances_110) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnusedImportsContextMap_34 = UnusedImportsMap0_109;
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstanceImports_111;
          MR_Word Var_112;

          parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(*STATE_VARIABLE_Info_37, &InstanceImports_111);
          Var_112 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InstanceImports_111);
          mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_112, UnusedImportsMap0_109, &UnusedImportsContextMap_34);
        }
        break;
    }
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), UnusedImportsContextMap_34, &UnusedImports_35);
    mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnusedImports_35, UnusedImportsSet_17);
    switch (WarnUnusedImports_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnusedImportsContextsMap_36;
          MR_Word Var_52;

          parse_tree__module_qual__qualify_items__get_unused_imports_map_2_p_0(*STATE_VARIABLE_Info_37, &UnusedImportsContextsMap_36);
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_3[3]));
            MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__module_qualify_aug_comp_unit_9_p_0_3));
            MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleName_28));
          }
          mercury__map__map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), Var_52, UnusedImportsContextsMap_36, UnusedImportsSpecsMap_18);
        }
        break;
      case (MR_Integer) 1:
        mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), UnusedImportsSpecsMap_18);
        break;
    }
  }
  else
  {
    *UnusedImportsSet_17 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), UnusedImportsSpecsMap_18);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Attr_14;
  MR_Word conv0_STATE_VARIABLE_Info_26;

  parse_tree__module_qual__qualify_items__qualify_event_attr_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Attr_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_Attr_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_String Name_14;
    MR_Word Spec0_15;
    MR_Word NameSpecs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Spec_17;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_Info_1_24;
    MR_Integer EventNumber_25;
    MR_String EventName_26;
    MR_Integer EventLineNumber_27;
    MR_Word Attrs0_28;
    MR_Word SynthAttrNumOrder_29;
    MR_Word Attrs_30;
    MR_Word Var_31;
    MR_Box conv2_STATE_VARIABLE_Info_1_24;
    MR_Word * AddrNameSpecs_34;

    Name_14 = ((MR_String) ((MR_hl_field(0, Var_22, 0))));
    Spec0_15 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
    EventNumber_25 = ((MR_Integer) ((MR_hl_field(0, Spec0_15, 0))));
    EventName_26 = ((MR_String) ((MR_hl_field(0, Spec0_15, 1))));
    EventLineNumber_27 = ((MR_Integer) ((MR_hl_field(0, Spec0_15, 2))));
    Attrs0_28 = ((MR_Word) ((MR_hl_field(0, Spec0_15, 3))));
    SynthAttrNumOrder_29 = ((MR_Word) ((MR_hl_field(0, Spec0_15, 4))));
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_6_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(0, Var_31, 4) = ((MR_Box) (EventName_26));
      MR_hl_field(0, Var_31, 5) = ((MR_Box) (FileName_2));
      MR_hl_field(0, Var_31, 6) = ((MR_Box) (EventLineNumber_27));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_31, Attrs0_28, &Attrs_30, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv2_STATE_VARIABLE_Info_1_24);
    STATE_VARIABLE_Info_1_24 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_24));
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) (EventNumber_25));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) (EventName_26));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) (EventLineNumber_27));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Attrs_30));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (SynthAttrNumOrder_29));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (Name_14));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (Spec_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrNameSpecs_34 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
    parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_6_p_0(HeadVar__1_1, FileName_2, NameSpecs0_16, AddrNameSpecs_34, STATE_VARIABLE_Info_1_24, STATE_VARIABLE_Info_6);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Attr_14;
  MR_Word conv0_STATE_VARIABLE_Info_26;

  parse_tree__module_qual__qualify_items__qualify_event_attr_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Attr_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_Attr_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_35 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_String Name_14;
      MR_Word Spec0_15;
      MR_Word NameSpecs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Spec_17;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_Info_1_24;
      MR_Integer EventNumber_25;
      MR_String EventName_26;
      MR_Integer EventLineNumber_27;
      MR_Word Attrs0_28;
      MR_Word SynthAttrNumOrder_29;
      MR_Word Attrs_30;
      MR_Word Var_31;
      MR_Box conv2_STATE_VARIABLE_Info_1_24;
      MR_Word * AddrNameSpecs_34;
      MR_Word HeadVar__4_36;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_35;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      Name_14 = ((MR_String) ((MR_hl_field(0, Var_22, 0))));
      Spec0_15 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
      EventNumber_25 = ((MR_Integer) ((MR_hl_field(0, Spec0_15, 0))));
      EventName_26 = ((MR_String) ((MR_hl_field(0, Spec0_15, 1))));
      EventLineNumber_27 = ((MR_Integer) ((MR_hl_field(0, Spec0_15, 2))));
      Attrs0_28 = ((MR_Word) ((MR_hl_field(0, Spec0_15, 3))));
      SynthAttrNumOrder_29 = ((MR_Word) ((MR_hl_field(0, Spec0_15, 4))));
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_7[0]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMC__pred__qualify_event_specs__1_6_p_0_1));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_31, 4) = ((MR_Box) (EventName_26));
        MR_hl_field(0, Var_31, 5) = ((MR_Box) (FileName_2));
        MR_hl_field(0, Var_31, 6) = ((MR_Box) (EventLineNumber_27));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_31, Attrs0_28, &Attrs_30, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv2_STATE_VARIABLE_Info_1_24);
      STATE_VARIABLE_Info_1_24 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_24));
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) (EventNumber_25));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) (EventName_26));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) (EventLineNumber_27));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Attrs_30));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (SynthAttrNumOrder_29));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (Name_14));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (Spec_17));
      }
      {
        HeadVar__4_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_36, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, HeadVar__4_36, 1) = NULL;
      }
      AddrNameSpecs_34 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_36, 1)));
      *AddrOfHeadVar__4_35 = HeadVar__4_36;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NameSpecs0_16;
      next_value_of_AddrOfHeadVar__4_35 = AddrNameSpecs_34;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_35 = next_value_of_AddrOfHeadVar__4_35;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv49_ItemMutable_8;
  MR_Word conv48_STATE_VARIABLE_Info_26;

  parse_tree__module_qual__qualify_items__module_qualify_item_mutable_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv49_ItemMutable_8, ((MR_Word) (wrapper_arg_3)), &conv48_STATE_VARIABLE_Info_26);
  *wrapper_arg_2 = ((MR_Box) (conv49_ItemMutable_8));
  *wrapper_arg_4 = ((MR_Box) (conv48_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv46_Pragma_8;
  MR_Word conv45_STATE_VARIABLE_Info_44;

  parse_tree__module_qual__qualify_items__module_qualify_item_impl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv46_Pragma_8, ((MR_Word) (wrapper_arg_3)), &conv45_STATE_VARIABLE_Info_44);
  *wrapper_arg_2 = ((MR_Box) (conv46_Pragma_8));
  *wrapper_arg_4 = ((MR_Box) (conv45_STATE_VARIABLE_Info_44));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv43_Pragma_8;
  MR_Word conv42_STATE_VARIABLE_Info_77;

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv43_Pragma_8, ((MR_Word) (wrapper_arg_3)), &conv42_STATE_VARIABLE_Info_77);
  *wrapper_arg_2 = ((MR_Box) (conv43_Pragma_8));
  *wrapper_arg_4 = ((MR_Box) (conv42_STATE_VARIABLE_Info_77));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv40_ItemFEE_8;
  MR_Word conv39_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_export_enum_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv40_ItemFEE_8, ((MR_Word) (wrapper_arg_3)), &conv39_STATE_VARIABLE_Info_20);
  *wrapper_arg_2 = ((MR_Box) (conv40_ItemFEE_8));
  *wrapper_arg_4 = ((MR_Box) (conv39_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv37_FPInfo_8;
  MR_Word conv36_STATE_VARIABLE_Info_25;

  parse_tree__module_qual__qualify_items__module_qualify_item_foreign_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv37_FPInfo_8, ((MR_Word) (wrapper_arg_3)), &conv36_STATE_VARIABLE_Info_25);
  *wrapper_arg_2 = ((MR_Box) (conv37_FPInfo_8));
  *wrapper_arg_4 = ((MR_Box) (conv36_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv34_ItemModeDecl_8;
  MR_Word conv33_STATE_VARIABLE_Info_25;

  parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv34_ItemModeDecl_8, ((MR_Word) (wrapper_arg_3)), &conv33_STATE_VARIABLE_Info_25);
  *wrapper_arg_2 = ((MR_Box) (conv34_ItemModeDecl_8));
  *wrapper_arg_4 = ((MR_Box) (conv33_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv31_ItemPredDecl_8;
  MR_Word conv30_STATE_VARIABLE_Info_38;

  parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv31_ItemPredDecl_8, ((MR_Word) (wrapper_arg_3)), &conv30_STATE_VARIABLE_Info_38);
  *wrapper_arg_2 = ((MR_Box) (conv31_ItemPredDecl_8));
  *wrapper_arg_4 = ((MR_Box) (conv30_STATE_VARIABLE_Info_38));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv28_ItemInstance_8;
  MR_Word conv27_STATE_VARIABLE_Info_29;

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv28_ItemInstance_8, ((MR_Word) (wrapper_arg_3)), &conv27_STATE_VARIABLE_Info_29);
  *wrapper_arg_2 = ((MR_Box) (conv28_ItemInstance_8));
  *wrapper_arg_4 = ((MR_Box) (conv27_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv25_ItemTypeClass_8;
  MR_Word conv24_STATE_VARIABLE_Info_26;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv25_ItemTypeClass_8, ((MR_Word) (wrapper_arg_3)), &conv24_STATE_VARIABLE_Info_26);
  *wrapper_arg_2 = ((MR_Box) (conv25_ItemTypeClass_8));
  *wrapper_arg_4 = ((MR_Box) (conv24_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_Pragma_8;
  MR_Word conv21_STATE_VARIABLE_Info_77;

  parse_tree__module_qual__qualify_items__module_qualify_item_decl_pragma_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv22_Pragma_8, ((MR_Word) (wrapper_arg_3)), &conv21_STATE_VARIABLE_Info_77);
  *wrapper_arg_2 = ((MR_Box) (conv22_Pragma_8));
  *wrapper_arg_4 = ((MR_Box) (conv21_STATE_VARIABLE_Info_77));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_ItemModeDecl_8;
  MR_Word conv18_STATE_VARIABLE_Info_25;

  parse_tree__module_qual__qualify_items__module_qualify_item_mode_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv19_ItemModeDecl_8, ((MR_Word) (wrapper_arg_3)), &conv18_STATE_VARIABLE_Info_25);
  *wrapper_arg_2 = ((MR_Box) (conv19_ItemModeDecl_8));
  *wrapper_arg_4 = ((MR_Box) (conv18_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_ItemPredDecl_8;
  MR_Word conv15_STATE_VARIABLE_Info_38;

  parse_tree__module_qual__qualify_items__module_qualify_item_pred_decl_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv16_ItemPredDecl_8, ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_Info_38);
  *wrapper_arg_2 = ((MR_Box) (conv16_ItemPredDecl_8));
  *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_Info_38));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_ItemInstance_8;
  MR_Word conv12_STATE_VARIABLE_Info_29;

  parse_tree__module_qual__qualify_items__module_qualify_item_instance_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv13_ItemInstance_8, ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_Info_29);
  *wrapper_arg_2 = ((MR_Box) (conv13_ItemInstance_8));
  *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_ItemTypeClass_8;
  MR_Word conv9_STATE_VARIABLE_Info_26;

  parse_tree__module_qual__qualify_items__module_qualify_item_typeclass_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_ItemTypeClass_8, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Info_26);
  *wrapper_arg_2 = ((MR_Box) (conv10_ItemTypeClass_8));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_CheckedDefn_6;
  MR_Word conv6_STATE_VARIABLE_Info_22;

  parse_tree__module_qual__qualify_items__module_qualify_mode_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_CheckedDefn_6, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Info_22);
  *wrapper_arg_2 = ((MR_Box) (conv7_CheckedDefn_6));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_CheckedDefn_6;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  parse_tree__module_qual__qualify_items__module_qualify_inst_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_CheckedDefn_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_2 = ((MR_Box) (conv4_CheckedDefn_6));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CheckedDefn_6;
  MR_Word conv0_STATE_VARIABLE_Info_47;

  parse_tree__module_qual__qualify_items__module_qualify_type_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_CheckedDefn_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_47);
  *wrapper_arg_2 = ((MR_Box) (conv1_CheckedDefn_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_47));
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_parse_tree_module_src_4_p_0(
  MR_Word ParseTreeModuleSrc0_5,
  MR_Word * ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 0))));
  MR_Word ModuleNameContext_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 1))));
  MR_Word InclMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 2))));
  MR_Word ImportUseMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 3))));
  MR_Word IntFIMSpecMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 4))));
  MR_Word ImpFIMSpecMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 5))));
  MR_Word IntSelfFIMLangs_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 6))));
  MR_Word ImpSelfFIMLangs_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 7))));
  MR_Word TypeCtorCheckedMap0_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 8))));
  MR_Word InstCtorCheckedMap0_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 9))));
  MR_Word ModeCtorCheckedMap0_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 10))));
  MR_Word TypeErrSpecs_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 11))));
  MR_Word TypeWarnSpecs_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 12))));
  MR_Word InstModeErrSpecs_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 13))));
  MR_Word InstModeWarnSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 14))));
  MR_Word IntTypeClasses0_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 15))));
  MR_Word IntInstances0_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 16))));
  MR_Word IntPredDecls0_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 17))));
  MR_Word IntModeDecls0_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 18))));
  MR_Word IntDeclPragmas0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 19))));
  MR_Word IntDeclMarkers0_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 20))));
  MR_Word IntBadPreds_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 22))));
  MR_Word ImpTypeClasses0_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 23))));
  MR_Word ImpInstances0_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 24))));
  MR_Word ImpPredDecls0_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 25))));
  MR_Word ImpModeDecls0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 26))));
  MR_Word ImpForeignProcs0_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 28))));
  MR_Word ImpForeignExportEnums0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 29))));
  MR_Word ImpDeclPragmas0_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 30))));
  MR_Word ImpDeclMarkers0_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 31))));
  MR_Word ImpImplPragmas0_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 32))));
  MR_Word ImpImplMarkers0_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 33))));
  MR_Word ImpMutables0_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 37))));
  MR_Word TypeCtorCheckedMap_46;
  MR_Word InstCtorCheckedMap_47;
  MR_Word ModeCtorCheckedMap_48;
  MR_Word IntTypeClasses_50;
  MR_Word IntInstances_51;
  MR_Word IntPredDecls_52;
  MR_Word IntModeDecls_53;
  MR_Word IntDeclPragmas_54;
  MR_Word IntPromises_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 21))));
  MR_Word ImpTypeClasses_57;
  MR_Word ImpInstances_58;
  MR_Word ImpPredDecls_59;
  MR_Word ImpModeDecls_60;
  MR_Word ImpClauses_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 27))));
  MR_Word ImpForeignProcs_62;
  MR_Word ImpForeignExportEnums_63;
  MR_Word ImpDeclPragmas_64;
  MR_Word ImpImplPragmas_65;
  MR_Word ImpInitialises_66 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 35))));
  MR_Word ImpFinalises_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 36))));
  MR_Word ImpPromises_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_5, 34))));
  MR_Word ImpMutables_69;
  MR_Word STATE_VARIABLE_Info_1_73;
  MR_Word STATE_VARIABLE_Info_2_75;
  MR_Word STATE_VARIABLE_Info_3_77;
  MR_Word STATE_VARIABLE_Info_4_79;
  MR_Word STATE_VARIABLE_Info_5_81;
  MR_Word STATE_VARIABLE_Info_6_83;
  MR_Word STATE_VARIABLE_Info_7_85;
  MR_Word STATE_VARIABLE_Info_8_87;
  MR_Word STATE_VARIABLE_Info_9_89;
  MR_Word STATE_VARIABLE_Info_10_91;
  MR_Word STATE_VARIABLE_Info_11_93;
  MR_Word STATE_VARIABLE_Info_12_95;
  MR_Word STATE_VARIABLE_Info_13_97;
  MR_Word STATE_VARIABLE_Info_14_99;
  MR_Word STATE_VARIABLE_Info_15_101;
  MR_Word STATE_VARIABLE_Info_16_103;
  MR_Box conv2_STATE_VARIABLE_Info_1_73;
  MR_Box conv5_STATE_VARIABLE_Info_2_75;
  MR_Box conv8_STATE_VARIABLE_Info_3_77;
  MR_Box conv11_STATE_VARIABLE_Info_4_79;
  MR_Box conv14_STATE_VARIABLE_Info_5_81;
  MR_Box conv17_STATE_VARIABLE_Info_6_83;
  MR_Box conv20_STATE_VARIABLE_Info_7_85;
  MR_Box conv23_STATE_VARIABLE_Info_8_87;
  MR_Box conv26_STATE_VARIABLE_Info_9_89;
  MR_Box conv29_STATE_VARIABLE_Info_10_91;
  MR_Box conv32_STATE_VARIABLE_Info_11_93;
  MR_Box conv35_STATE_VARIABLE_Info_12_95;
  MR_Box conv38_STATE_VARIABLE_Info_13_97;
  MR_Box conv41_STATE_VARIABLE_Info_14_99;
  MR_Box conv44_STATE_VARIABLE_Info_15_101;
  MR_Box conv47_STATE_VARIABLE_Info_16_103;
  MR_Box conv50_STATE_VARIABLE_Info_71;

  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[0]), TypeCtorCheckedMap0_16, &TypeCtorCheckedMap_46, ((MR_Box) (STATE_VARIABLE_Info_0_70)), &conv2_STATE_VARIABLE_Info_1_73);
  STATE_VARIABLE_Info_1_73 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_73));
  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[1]), InstCtorCheckedMap0_17, &InstCtorCheckedMap_47, ((MR_Box) (STATE_VARIABLE_Info_1_73)), &conv5_STATE_VARIABLE_Info_2_75);
  STATE_VARIABLE_Info_2_75 = ((MR_Word) (conv5_STATE_VARIABLE_Info_2_75));
  mercury__map__map_values_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_4[2]), ModeCtorCheckedMap0_18, &ModeCtorCheckedMap_48, ((MR_Box) (STATE_VARIABLE_Info_2_75)), &conv8_STATE_VARIABLE_Info_3_77);
  STATE_VARIABLE_Info_3_77 = ((MR_Word) (conv8_STATE_VARIABLE_Info_3_77));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[0]), IntTypeClasses0_23, &IntTypeClasses_50, ((MR_Box) (STATE_VARIABLE_Info_3_77)), &conv11_STATE_VARIABLE_Info_4_79);
  STATE_VARIABLE_Info_4_79 = ((MR_Word) (conv11_STATE_VARIABLE_Info_4_79));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[1]), IntInstances0_24, &IntInstances_51, ((MR_Box) (STATE_VARIABLE_Info_4_79)), &conv14_STATE_VARIABLE_Info_5_81);
  STATE_VARIABLE_Info_5_81 = ((MR_Word) (conv14_STATE_VARIABLE_Info_5_81));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[2]), IntPredDecls0_25, &IntPredDecls_52, ((MR_Box) (STATE_VARIABLE_Info_5_81)), &conv17_STATE_VARIABLE_Info_6_83);
  STATE_VARIABLE_Info_6_83 = ((MR_Word) (conv17_STATE_VARIABLE_Info_6_83));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[3]), IntModeDecls0_26, &IntModeDecls_53, ((MR_Box) (STATE_VARIABLE_Info_6_83)), &conv20_STATE_VARIABLE_Info_7_85);
  STATE_VARIABLE_Info_7_85 = ((MR_Word) (conv20_STATE_VARIABLE_Info_7_85));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[4]), IntDeclPragmas0_27, &IntDeclPragmas_54, ((MR_Box) (STATE_VARIABLE_Info_7_85)), &conv23_STATE_VARIABLE_Info_8_87);
  STATE_VARIABLE_Info_8_87 = ((MR_Word) (conv23_STATE_VARIABLE_Info_8_87));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[5]), ImpTypeClasses0_31, &ImpTypeClasses_57, ((MR_Box) (STATE_VARIABLE_Info_8_87)), &conv26_STATE_VARIABLE_Info_9_89);
  STATE_VARIABLE_Info_9_89 = ((MR_Word) (conv26_STATE_VARIABLE_Info_9_89));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[6]), ImpInstances0_32, &ImpInstances_58, ((MR_Box) (STATE_VARIABLE_Info_9_89)), &conv29_STATE_VARIABLE_Info_10_91);
  STATE_VARIABLE_Info_10_91 = ((MR_Word) (conv29_STATE_VARIABLE_Info_10_91));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[7]), ImpPredDecls0_33, &ImpPredDecls_59, ((MR_Box) (STATE_VARIABLE_Info_10_91)), &conv32_STATE_VARIABLE_Info_11_93);
  STATE_VARIABLE_Info_11_93 = ((MR_Word) (conv32_STATE_VARIABLE_Info_11_93));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[8]), ImpModeDecls0_34, &ImpModeDecls_60, ((MR_Box) (STATE_VARIABLE_Info_11_93)), &conv35_STATE_VARIABLE_Info_12_95);
  STATE_VARIABLE_Info_12_95 = ((MR_Word) (conv35_STATE_VARIABLE_Info_12_95));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[9]), ImpForeignProcs0_36, &ImpForeignProcs_62, ((MR_Box) (STATE_VARIABLE_Info_12_95)), &conv38_STATE_VARIABLE_Info_13_97);
  STATE_VARIABLE_Info_13_97 = ((MR_Word) (conv38_STATE_VARIABLE_Info_13_97));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[10]), ImpForeignExportEnums0_37, &ImpForeignExportEnums_63, ((MR_Box) (STATE_VARIABLE_Info_13_97)), &conv41_STATE_VARIABLE_Info_14_99);
  STATE_VARIABLE_Info_14_99 = ((MR_Word) (conv41_STATE_VARIABLE_Info_14_99));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[11]), ImpDeclPragmas0_38, &ImpDeclPragmas_64, ((MR_Box) (STATE_VARIABLE_Info_14_99)), &conv44_STATE_VARIABLE_Info_15_101);
  STATE_VARIABLE_Info_15_101 = ((MR_Word) (conv44_STATE_VARIABLE_Info_15_101));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[12]), ImpImplPragmas0_40, &ImpImplPragmas_65, ((MR_Box) (STATE_VARIABLE_Info_15_101)), &conv47_STATE_VARIABLE_Info_16_103);
  STATE_VARIABLE_Info_16_103 = ((MR_Word) (conv47_STATE_VARIABLE_Info_16_103));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_6[13]), ImpMutables0_45, &ImpMutables_69, ((MR_Box) (STATE_VARIABLE_Info_16_103)), &conv50_STATE_VARIABLE_Info_71);
  *STATE_VARIABLE_Info_71 = ((MR_Word) (conv50_STATE_VARIABLE_Info_71));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_46));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_47));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_48));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeErrSpecs_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (TypeWarnSpecs_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (InstModeErrSpecs_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (InstModeWarnSpecs_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntTypeClasses_50));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntInstances_51));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntPredDecls_52));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntModeDecls_53));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntDeclPragmas_54));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntDeclMarkers0_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (IntPromises_55));
    MR_hl_field(0, base, 22) = ((MR_Box) (IntBadPreds_30));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpTypeClasses_57));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpInstances_58));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpPredDecls_59));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpModeDecls_60));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpClauses_61));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpForeignProcs_62));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpForeignExportEnums_63));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpDeclPragmas_64));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpDeclMarkers0_39));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpImplPragmas_65));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpImplMarkers0_41));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpPromises_68));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpInitialises_66));
    MR_hl_field(0, base, 36) = ((MR_Box) (ImpFinalises_67));
    MR_hl_field(0, base, 37) = ((MR_Box) (ImpMutables_69));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__get_unused_imports_map_2_p_0(
  MR_Word Info_3,
  MR_Word * UnusedImportsMap_4)
{
  MR_Word UnusedImportsMap0_5;
  MR_Word ModuleExportsInstances_6;

  parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(Info_3, &UnusedImportsMap0_5);
  parse_tree__module_qual__mq_info__mq_info_get_exported_instances_flag_2_p_0(Info_3, &ModuleExportsInstances_6);
  switch (ModuleExportsInstances_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *UnusedImportsMap_4 = UnusedImportsMap0_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstanceImports_7;
        MR_Word Var_8;

        parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(Info_3, &InstanceImports_7);
        Var_8 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InstanceImports_7);
        mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), Var_8, UnusedImportsMap0_5, UnusedImportsMap_4);
      }
      break;
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
