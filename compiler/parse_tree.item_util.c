/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version rotd-2024-12-03
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


// :- module parse_tree.item_util.
// :- implementation.

/*
INIT mercury__parse_tree__item_util__init
ENDINIT
*/

#include "parse_tree.item_util.mih"


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
#include "libs.optimization_options.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_imp_import_context_map_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0;

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_import_context_map_0;

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_imp_use_context_map_0[1];

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_use_context_map_0;

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_int_import_context_map_0[1];

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_import_context_map_0;

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_int_use_context_map_0[1];

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_use_context_map_0;

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_0;

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_1;

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_ordinal_ordered_maybe_include_implicit_0[2];

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_maybe_include_implicit_0[2];

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_maybe_include_implicit_0[2];

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6);

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6);

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_defn_get_src_defns_4_p_0(
  MR_Word CheckedDefn_5,
  MR_Word * IntDefns_6,
  MR_Word * ImpDefns_7,
  MR_Word * ImpForeignEnums_8);

static void MR_CALL 
parse_tree__item_util__acc_avail_with_context_5_p_0(
  MR_Word ImportOrUse_6,
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12);

static void MR_CALL 
parse_tree__item_util__use_map_to_item_avails_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_acc_12_p_0(
  MR_Word ModuleName_13,
  MR_Word ImportAndOrUse_14,
  MR_Word STATE_VARIABLE_IntImports_0_27,
  MR_Word * STATE_VARIABLE_IntImports_28,
  MR_Word STATE_VARIABLE_IntUses_0_29,
  MR_Word * STATE_VARIABLE_IntUses_30,
  MR_Word STATE_VARIABLE_ImpImports_0_31,
  MR_Word * STATE_VARIABLE_ImpImports_32,
  MR_Word STATE_VARIABLE_ImpUses_0_33,
  MR_Word * STATE_VARIABLE_ImpUses_34,
  MR_Word STATE_VARIABLE_IntUseImpImports_0_35,
  MR_Word * STATE_VARIABLE_IntUseImpImports_36);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_12_p_0(
  MR_Word ModuleName_13,
  MR_Word ImportAndOrUse_14,
  MR_Word STATE_VARIABLE_SectionImportAndOrUseMap_0_26,
  MR_Word * STATE_VARIABLE_SectionImportAndOrUseMap_27,
  MR_Word STATE_VARIABLE_IntImportMap_0_28,
  MR_Word * STATE_VARIABLE_IntImportMap_29,
  MR_Word STATE_VARIABLE_IntUseMap_0_30,
  MR_Word * STATE_VARIABLE_IntUseMap_31,
  MR_Word STATE_VARIABLE_ImpImportMap_0_32,
  MR_Word * STATE_VARIABLE_ImpImportMap_33,
  MR_Word STATE_VARIABLE_ImpUseMap_0_34,
  MR_Word * STATE_VARIABLE_ImpUseMap_35);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_item_avails_acc_7_p_0(
  MR_Word IncludeImplicit_8,
  MR_Word ModuleName_9,
  MR_Word ImportAndOrUse_10,
  MR_Word STATE_VARIABLE_RevIntAvails_0_26,
  MR_Word * STATE_VARIABLE_RevIntAvails_27,
  MR_Word STATE_VARIABLE_RevImpAvails_0_28,
  MR_Word * STATE_VARIABLE_RevImpAvails_29);

static void MR_CALL 
parse_tree__item_util__section_import_and_or_use_map_to_item_avails_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportAndOrUse_8,
  MR_Word STATE_VARIABLE_RevIntAvails_0_13,
  MR_Word * STATE_VARIABLE_RevIntAvails_14,
  MR_Word STATE_VARIABLE_RevImpAvails_0_15,
  MR_Word * STATE_VARIABLE_RevImpAvails_16);

static void MR_CALL 
parse_tree__item_util__section_use_map_to_item_avails_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Use_8,
  MR_Word STATE_VARIABLE_RevIntAvails_0_13,
  MR_Word * STATE_VARIABLE_RevIntAvails_14,
  MR_Word STATE_VARIABLE_RevImpAvails_0_15,
  MR_Word * STATE_VARIABLE_RevImpAvails_16);

static void MR_CALL 
parse_tree__item_util__wrap_section_import_and_or_use_2_p_0(
  MR_Word SectionImportUse_3,
  MR_Word * MaybeImplicitUse_4);

static void MR_CALL 
parse_tree__item_util__error_if_use_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_UseMap_0_14,
  MR_Word * STATE_VARIABLE_UseMap_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__item_util__warn_if_avail_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_18,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__item_util__record_imp_use_only_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_UseMap_0_19,
  MR_Word * STATE_VARIABLE_UseMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__item_util__record_int_use_only_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_UseMap_0_14,
  MR_Word * STATE_VARIABLE_UseMap_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__item_util__record_imp_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_27,
  MR_Word * STATE_VARIABLE_ImportUseMap_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__item_util__record_imp_import_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_23,
  MR_Word * STATE_VARIABLE_ImportUseMap_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__item_util__record_int_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_23,
  MR_Word * STATE_VARIABLE_ImportUseMap_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__item_util__record_int_import_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_ImportUseMap_9);

static void MR_CALL 
parse_tree__item_util__report_duplicate_avail_context_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word PrevContext_11,
  MR_Word DuplicateContext_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word OoMContexts_11,
  MR_Word * HeadSortedContext_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__item_util__include_map_to_int_imp_modules_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_IntModules_0_13,
  MR_Word * STATE_VARIABLE_IntModules_14,
  MR_Word STATE_VARIABLE_ImpModules_0_15,
  MR_Word * STATE_VARIABLE_ImpModules_16);

static void MR_CALL 
parse_tree__item_util__classify_include_module_6_p_0(
  MR_Word Section_7,
  MR_Word ItemInclude_8,
  MR_Word STATE_VARIABLE_InclMap_0_18,
  MR_Word * STATE_VARIABLE_InclMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__item_util__acc_avails_with_contexts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__use_map_to_item_avails_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__section_use_map_to_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__warn_if_avail_for_self_5_p_0(
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_15,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__item_util__include_map_to_int_imp_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_include_modules_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_include_modules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____imp_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____imp_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____imp_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____imp_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____int_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____int_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____int_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____int_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____maybe_include_implicit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____maybe_include_implicit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____module_name_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____module_name_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[20][3];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[226][2];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[8][9];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[2][4];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[3][10];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_6[7][5];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_7[3][7];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_8[2][15];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_9[1][8];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_11[2][6];


struct parse_tree__item_util__vector_common_type_10_0_s {
  const MR_Word parse_tree__item_util__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct parse_tree__item_util__vector_common_type_10_0_s parse_tree__item_util_vector_common_10[12];



static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[20][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[1])),
    ((MR_Box) (parse_tree__item_util__include_map_to_int_imp_modules_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[2])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[2])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[2])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[4])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_use_modules_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[4])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_use_modules_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[6])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[6])),
    ((MR_Box) (parse_tree__item_util__section_use_map_to_item_avails_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[7])),
    ((MR_Box) (parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_8[0])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_8[1])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[1])),
    ((MR_Box) (parse_tree__item_util__use_map_to_item_avails_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[2])),
    ((MR_Box) (parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_11[0])),
    ((MR_Box) (parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_11[1])),
    ((MR_Box) (parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[226][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_2[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_2[9]))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "inst definition"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instance declaration"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode declaration"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode definition"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function declaration"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicate declaration"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exclusivity promise"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exclusivity and exhaustivity promise"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exhaustivity promise"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type definition"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type_repn"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "typeclass declaration"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[63]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[67]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[69]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "type_spec_constrained_preds"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "check_termination"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[75]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[85]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_decl"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "require_feature_set"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "loop_check"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[97]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[99]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "minimal_model"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "consider_used"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "mode_check_clauses"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "no_determinism_warning"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "promise_equivalent_clauses"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "promise_pure"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[115]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "promise_semipure"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[119]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "include"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[129]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[131]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for submodule"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration was here."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[138]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[129]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[143]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[154]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the interface section is"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "redundant,"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[158]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the same section."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[160]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for the same module"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "given the"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[139])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[151])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[154]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the implementation section is"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[172]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[174]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[175])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[139])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[179])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the same module in the same section."))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[181]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the same module in the interface section."))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[184]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[166]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[184]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[166]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration is here."))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[192]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[193])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[194])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[196]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[198]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for itself!"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[200]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for its own ancestor module,"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[202]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[205]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[207]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[206])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[209]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[208])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[211]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[201])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[203])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[183])))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[216]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[139])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[217])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[186])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[186])))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[221]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[139])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[222])))
  },
  /* row 224 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[210])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__item_util_scalar_common_2[224]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[8][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__item_util__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[0])),
    ((MR_Box) (parse_tree__item_util__classify_include_modules_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[0])),
    ((MR_Box) (parse_tree__item_util__classify_include_modules_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_maybe_include_implicit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_6[7][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_use_modules_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_use_modules_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_7[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_8[2][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_11[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};


static /* final */ const struct parse_tree__item_util__vector_common_type_10_0_s parse_tree__item_util_vector_common_10[12] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[106])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[112])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[104])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[108])) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[110])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[116])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[118])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[114])) },
  /* row   8 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[40])) },
  /* row   9 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[44])) },
  /* row  10 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[42])) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[46])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_imp_import_context_map_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_import_context_map_0 = {
  (MR_String) "imp_import_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_imp_import_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__item_util____Unify____imp_import_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____imp_import_context_map_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "imp_import_context_map",
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_import_context_map_0 },
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_import_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_imp_import_context_map_0,

};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_imp_use_context_map_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_use_context_map_0 = {
  (MR_String) "imp_use_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_imp_use_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__item_util____Unify____imp_use_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____imp_use_context_map_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "imp_use_context_map",
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_use_context_map_0 },
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_imp_use_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_imp_use_context_map_0,

};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_int_import_context_map_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_import_context_map_0 = {
  (MR_String) "int_import_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_int_import_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__item_util____Unify____int_import_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____int_import_context_map_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "int_import_context_map",
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_import_context_map_0 },
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_import_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_int_import_context_map_0,

};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_int_use_context_map_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_use_context_map_0 = {
  (MR_String) "int_use_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_int_use_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__item_util____Unify____int_use_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____int_use_context_map_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "int_use_context_map",
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_use_context_map_0 },
  { &parse_tree__item_util__parse_tree__item_util__notag_functor_desc_int_use_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_int_use_context_map_0,

};

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_0 = {
  (MR_String) "do_include_implicit",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_1 = {
  (MR_String) "do_not_include_implicit",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_ordinal_ordered_maybe_include_implicit_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_maybe_include_implicit_0[2] = {
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_0,
  &parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_1
};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_maybe_include_implicit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_maybe_include_implicit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__item_util____Unify____maybe_include_implicit_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____maybe_include_implicit_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "maybe_include_implicit",
  { parse_tree__item_util__parse_tree__item_util__enum_name_ordered_maybe_include_implicit_0 },
  { parse_tree__item_util__parse_tree__item_util__enum_ordinal_ordered_maybe_include_implicit_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_maybe_include_implicit_0,

};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_name_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__item_util____Unify____module_name_context_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____module_name_context_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "module_name_context",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__item_util____Compare____module_name_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____module_name_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__item_util____Compare____maybe_include_implicit_0_0(
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
parse_tree__item_util____Unify____maybe_include_implicit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__item_util____Compare____int_use_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____int_use_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__item_util____Compare____int_import_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____int_import_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__item_util____Compare____imp_use_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____imp_use_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__item_util____Compare____imp_import_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____imp_import_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6)
{
  MR_Word SrcDefns_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_4, (MR_Integer) 1))));
  MR_Word MaybeIntDefn_9 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 0))));
  MR_Word MaybeImpDefn_10 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 1))));

  if ((MaybeIntDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *IntDefns_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *IntDefns_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeImpDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *ImpDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_14 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ImpDefns_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6)
{
  MR_Word SrcDefns_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_4, (MR_Integer) 1))));
  MR_Word MaybeIntDefn_9 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 0))));
  MR_Word MaybeImpDefn_10 = ((MR_Word) ((MR_hl_field(0, SrcDefns_8, (MR_Integer) 1))));

  if ((MaybeIntDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *IntDefns_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *IntDefns_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeImpDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *ImpDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_14 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ImpDefns_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_defn_get_src_defns_4_p_0(
  MR_Word CheckedDefn_5,
  MR_Word * IntDefns_6,
  MR_Word * ImpDefns_7,
  MR_Word * ImpForeignEnums_8)
{
  if (((MR_tag((MR_Word) CheckedDefn_5)) == (MR_Integer) 0))
  {
    MR_Word SrcDefnsSolver_10 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_5, (MR_Integer) 1))));
    MR_Word MaybeIntDefn_11 = ((MR_Word) ((MR_hl_field(0, SrcDefnsSolver_10, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_12 = ((MR_Word) ((MR_hl_field(0, SrcDefnsSolver_10, (MR_Integer) 1))));

    if ((MaybeIntDefn_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *IntDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_16 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IntDefns_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (X_16));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeImpDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *ImpDefns_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_18 = ((MR_Word) ((MR_hl_field(1, MaybeImpDefn_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ImpDefns_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (X_18));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    *ImpForeignEnums_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SrcDefnsStd_14 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_5, (MR_Integer) 1))));

    *IntDefns_6 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd_14, (MR_Integer) 0))));
    *ImpDefns_7 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd_14, (MR_Integer) 1))));
    *ImpForeignEnums_8 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd_14, (MR_Integer) 2))));
  }
}

static void MR_CALL 
parse_tree__item_util__acc_avail_with_context_5_p_0(
  MR_Word ImportOrUse_6,
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12)
{
  MR_Word Avail_10;

  switch (ImportOrUse_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_13, 1) = ((MR_Box) (Context_8));
          MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_10 = (MR_Word) ((MR_Word) (Var_13));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (Context_8));
          MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_10 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_15)));
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_RevAvails_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Avail_10));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevAvails_0_11));
  }
}

static void MR_CALL 
parse_tree__item_util__use_map_to_item_avails_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12)
{
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(0, Contexts_6, (MR_Integer) 0))));
  MR_Word Avail_10;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Context_8));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Avail_10 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_13)));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_RevAvails_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Avail_10));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevAvails_0_11));
  }
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_acc_12_p_0(
  MR_Word ModuleName_13,
  MR_Word ImportAndOrUse_14,
  MR_Word STATE_VARIABLE_IntImports_0_27,
  MR_Word * STATE_VARIABLE_IntImports_28,
  MR_Word STATE_VARIABLE_IntUses_0_29,
  MR_Word * STATE_VARIABLE_IntUses_30,
  MR_Word STATE_VARIABLE_ImpImports_0_31,
  MR_Word * STATE_VARIABLE_ImpImports_32,
  MR_Word STATE_VARIABLE_ImpUses_0_33,
  MR_Word * STATE_VARIABLE_ImpUses_34,
  MR_Word STATE_VARIABLE_IntUseImpImports_0_35,
  MR_Word * STATE_VARIABLE_IntUseImpImports_36)
{
  if (((MR_tag((MR_Word) ImportAndOrUse_14)) == (MR_Integer) 0))
  {
    MR_Word Explicit_20 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_14, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Explicit_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_21)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
          *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_58 = ((MR_Word) ((MR_hl_field(1, Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_58)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
          *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
          *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_59 = ((MR_Word) ((MR_hl_field(2, Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_59)), STATE_VARIABLE_ImpImports_0_31, STATE_VARIABLE_ImpImports_32);
          *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
          *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Explicit_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_60 = ((MR_Word) ((MR_hl_field(3, Explicit_20, (MR_Integer) 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_60)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
              *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
              *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
              *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
              *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_61 = ((MR_Word) ((MR_hl_field(3, Explicit_20, (MR_Integer) 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_61)), STATE_VARIABLE_IntUseImpImports_0_35, STATE_VARIABLE_IntUseImpImports_36);
              *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
              *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
              *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
              *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word Implicit_23 = ((MR_Unsigned) ((MR_hl_field(1, ImportAndOrUse_14, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_24 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_14, (MR_Integer) 1))));
    MR_Word ImplicitContext_25;

    ImplicitContext_25 = mercury__term_context__context_init_2_f_0((MR_String) "implicit", (MR_Integer) -1);
    if ((MaybeExplicit_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (Implicit_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
            *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
            *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          }
          break;
      }
      *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
      *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
    }
    else
    {
      MR_Word Explicit_68 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_24, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Explicit_68)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_62 = ((MR_Word) ((MR_hl_field(0, Explicit_68, (MR_Integer) 0))));

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_62)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
            *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
            *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_63 = ((MR_Word) ((MR_hl_field(1, Explicit_68, (MR_Integer) 0))));

            switch (Implicit_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_63)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
                  *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
                  *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
                }
                break;
            }
            *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
            *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Context_64 = ((MR_Word) ((MR_hl_field(2, Explicit_68, (MR_Integer) 0))));

            switch (Implicit_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_64)), STATE_VARIABLE_ImpImports_0_31, STATE_VARIABLE_ImpImports_32);
                  *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                  *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
                  *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
                  *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_64)), STATE_VARIABLE_IntUseImpImports_0_35, STATE_VARIABLE_IntUseImpImports_36);
                  *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                  *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
                }
                break;
            }
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Explicit_68, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_65 = ((MR_Word) ((MR_hl_field(3, Explicit_68, (MR_Integer) 1))));

                switch (Implicit_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_65)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
                      *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                      *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
                      *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
                      *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
                      *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                      *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
                    }
                    break;
                }
                *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
                *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Context_66 = ((MR_Word) ((MR_hl_field(3, Explicit_68, (MR_Integer) 1))));

                switch (Implicit_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_66)), STATE_VARIABLE_IntUseImpImports_0_35, STATE_VARIABLE_IntUseImpImports_36);
                      *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
                      *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
                    }
                    break;
                }
                *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
                *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
                *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_12_p_0(
  MR_Word ModuleName_13,
  MR_Word ImportAndOrUse_14,
  MR_Word STATE_VARIABLE_SectionImportAndOrUseMap_0_26,
  MR_Word * STATE_VARIABLE_SectionImportAndOrUseMap_27,
  MR_Word STATE_VARIABLE_IntImportMap_0_28,
  MR_Word * STATE_VARIABLE_IntImportMap_29,
  MR_Word STATE_VARIABLE_IntUseMap_0_30,
  MR_Word * STATE_VARIABLE_IntUseMap_31,
  MR_Word STATE_VARIABLE_ImpImportMap_0_32,
  MR_Word * STATE_VARIABLE_ImpImportMap_33,
  MR_Word STATE_VARIABLE_ImpUseMap_0_34,
  MR_Word * STATE_VARIABLE_ImpUseMap_35)
{
  MR_bool succeeded;
  MR_Word Explicit_20;

  if (((MR_tag((MR_Word) ImportAndOrUse_14)) == (MR_Integer) 0))
  {
    Explicit_20 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_14, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word MaybeExplicit_22 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_14, (MR_Integer) 1))));

    succeeded = (MaybeExplicit_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Explicit_20 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_22, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Explicit_20)), STATE_VARIABLE_SectionImportAndOrUseMap_0_26, STATE_VARIABLE_SectionImportAndOrUseMap_27);
    switch (MR_tag((MR_Word) Explicit_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_23)), STATE_VARIABLE_IntImportMap_0_28, STATE_VARIABLE_IntImportMap_29);
          *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
          *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
          *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_43 = ((MR_Word) ((MR_hl_field(1, Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_43)), STATE_VARIABLE_IntUseMap_0_30, STATE_VARIABLE_IntUseMap_31);
          *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
          *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
          *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_44 = ((MR_Word) ((MR_hl_field(2, Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_44)), STATE_VARIABLE_ImpImportMap_0_32, STATE_VARIABLE_ImpImportMap_33);
          *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
          *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
          *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Explicit_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_45 = ((MR_Word) ((MR_hl_field(3, Explicit_20, (MR_Integer) 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_45)), STATE_VARIABLE_ImpUseMap_0_34, STATE_VARIABLE_ImpUseMap_35);
              *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
              *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
              *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_24 = ((MR_Word) ((MR_hl_field(3, Explicit_20, (MR_Integer) 1))));
              MR_Word ImpContext_25 = ((MR_Word) ((MR_hl_field(3, Explicit_20, (MR_Integer) 2))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (IntContext_24)), STATE_VARIABLE_IntUseMap_0_30, STATE_VARIABLE_IntUseMap_31);
              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImpContext_25)), STATE_VARIABLE_ImpImportMap_0_32, STATE_VARIABLE_ImpImportMap_33);
              *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
              *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
            }
            break;
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
    *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
    *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
    *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
    *STATE_VARIABLE_SectionImportAndOrUseMap_27 = STATE_VARIABLE_SectionImportAndOrUseMap_0_26;
  }
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_item_avails_acc_7_p_0(
  MR_Word IncludeImplicit_8,
  MR_Word ModuleName_9,
  MR_Word ImportAndOrUse_10,
  MR_Word STATE_VARIABLE_RevIntAvails_0_26,
  MR_Word * STATE_VARIABLE_RevIntAvails_27,
  MR_Word STATE_VARIABLE_RevImpAvails_0_28,
  MR_Word * STATE_VARIABLE_RevImpAvails_29)
{
  if (((MR_tag((MR_Word) ImportAndOrUse_10)) == (MR_Integer) 0))
  {
    MR_Word Explicit_13 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_10, (MR_Integer) 0))));

    parse_tree__item_util__section_import_and_or_use_map_to_item_avails_acc_6_p_0(ModuleName_9, Explicit_13, STATE_VARIABLE_RevIntAvails_0_26, STATE_VARIABLE_RevIntAvails_27, STATE_VARIABLE_RevImpAvails_0_28, STATE_VARIABLE_RevImpAvails_29);
  }
  else
  {
    MR_Word Implicit_14 = ((MR_Unsigned) ((MR_hl_field(1, ImportAndOrUse_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_15 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_10, (MR_Integer) 1))));
    MR_Word ImplicitIntAvails_16;
    MR_Word ImplicitImpAvails_17;
    MR_Word Context_71;

    Context_71 = mercury__term_context__context_init_2_f_0((MR_String) "implicit", (MR_Integer) -1);
    switch (Implicit_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Var_80;
          MR_Word Avail_83;

          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_80, 0) = ((MR_Box) (ModuleName_9));
            MR_hl_field(0, Var_80, 1) = ((MR_Box) (Context_71));
            MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_83 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_80)));
          ImplicitIntAvails_16 = (MR_Word) ((MR_Unsigned) 0U);
          {
            ImplicitImpAvails_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ImplicitImpAvails_17, 0) = ((MR_Box) (Avail_83));
            MR_hl_field(1, ImplicitImpAvails_17, 1) = ((MR_Box) (ImplicitIntAvails_16));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Avail_73;
          MR_Word Var_76;

          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_76, 0) = ((MR_Box) (ModuleName_9));
            MR_hl_field(0, Var_76, 1) = ((MR_Box) (Context_71));
            MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_73 = (MR_Word) ((MR_Word) (Var_76));
          {
            ImplicitIntAvails_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ImplicitIntAvails_16, 0) = ((MR_Box) (Avail_73));
            MR_hl_field(1, ImplicitIntAvails_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ImplicitImpAvails_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_78;
          MR_Word Avail_82;

          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_78, 0) = ((MR_Box) (ModuleName_9));
            MR_hl_field(0, Var_78, 1) = ((MR_Box) (Context_71));
            MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_82 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_78)));
          {
            ImplicitIntAvails_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ImplicitIntAvails_16, 0) = ((MR_Box) (Avail_82));
            MR_hl_field(1, ImplicitIntAvails_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ImplicitImpAvails_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    switch (IncludeImplicit_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((MaybeExplicit_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_16, STATE_VARIABLE_RevIntAvails_0_26);
          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_17, STATE_VARIABLE_RevImpAvails_0_28);
        }
        else
        {
          MR_Word Explicit_59 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_15, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Explicit_59)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_85 = ((MR_Word) ((MR_hl_field(0, Explicit_59, (MR_Integer) 0))));
                MR_Word Avail_86;
                MR_Word Var_91;
                MR_Word ExplicitIntAvails_111;

                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_91, 0) = ((MR_Box) (ModuleName_9));
                  MR_hl_field(0, Var_91, 1) = ((MR_Box) (Context_85));
                  MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Avail_86 = (MR_Word) ((MR_Word) (Var_91));
                {
                  ExplicitIntAvails_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ExplicitIntAvails_111, 0) = ((MR_Box) (Avail_86));
                  MR_hl_field(1, ExplicitIntAvails_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_111, STATE_VARIABLE_RevIntAvails_0_26);
                *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_RevImpAvails_0_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_93;
                MR_Word Context_103 = ((MR_Word) ((MR_hl_field(1, Explicit_59, (MR_Integer) 0))));
                MR_Word Avail_104;
                MR_Word ExplicitIntAvails_113;

                {
                  Var_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_93, 0) = ((MR_Box) (ModuleName_9));
                  MR_hl_field(0, Var_93, 1) = ((MR_Box) (Context_103));
                  MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Avail_104 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_93)));
                {
                  ExplicitIntAvails_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ExplicitIntAvails_113, 0) = ((MR_Box) (Avail_104));
                  MR_hl_field(1, ExplicitIntAvails_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                switch (Implicit_14) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_113, STATE_VARIABLE_RevIntAvails_0_26);
                      *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_RevImpAvails_0_28);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_16, STATE_VARIABLE_RevIntAvails_0_26);
                      *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_17, STATE_VARIABLE_RevImpAvails_0_28);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ExplicitImpAvails_19;
                MR_Word Var_95;
                MR_Word Context_105 = ((MR_Word) ((MR_hl_field(2, Explicit_59, (MR_Integer) 0))));
                MR_Word Avail_106;

                {
                  Var_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_95, 0) = ((MR_Box) (ModuleName_9));
                  MR_hl_field(0, Var_95, 1) = ((MR_Box) (Context_105));
                  MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Avail_106 = (MR_Word) ((MR_Word) (Var_95));
                {
                  ExplicitImpAvails_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ExplicitImpAvails_19, 0) = ((MR_Box) (Avail_106));
                  MR_hl_field(1, ExplicitImpAvails_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                switch (Implicit_14) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_RevIntAvails_0_26);
                      *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_16, STATE_VARIABLE_RevIntAvails_0_26);
                      *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_17, STATE_VARIABLE_RevImpAvails_0_28);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_16, STATE_VARIABLE_RevIntAvails_0_26);
                      *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Explicit_59, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_97;
                    MR_Word Context_107 = ((MR_Word) ((MR_hl_field(3, Explicit_59, (MR_Integer) 1))));
                    MR_Word Avail_108;
                    MR_Word ExplicitImpAvails_110;

                    {
                      Var_97 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_97, 0) = ((MR_Box) (ModuleName_9));
                      MR_hl_field(0, Var_97, 1) = ((MR_Box) (Context_107));
                      MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    Avail_108 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_97)));
                    {
                      ExplicitImpAvails_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ExplicitImpAvails_110, 0) = ((MR_Box) (Avail_108));
                      MR_hl_field(1, ExplicitImpAvails_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    switch (Implicit_14) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        {
                          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_RevIntAvails_0_26);
                          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_110, STATE_VARIABLE_RevImpAvails_0_28);
                        }
                        break;
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_16, STATE_VARIABLE_RevIntAvails_0_26);
                          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_17, STATE_VARIABLE_RevImpAvails_0_28);
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntContext_87 = ((MR_Word) ((MR_hl_field(3, Explicit_59, (MR_Integer) 1))));
                    MR_Word ImpContext_88 = ((MR_Word) ((MR_hl_field(3, Explicit_59, (MR_Integer) 2))));
                    MR_Word IntAvail_89;
                    MR_Word ImpAvail_90;
                    MR_Word Var_99;
                    MR_Word Var_100;
                    MR_Word ExplicitIntAvails_115;
                    MR_Word ExplicitImpAvails_116;

                    {
                      Var_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_99, 0) = ((MR_Box) (ModuleName_9));
                      MR_hl_field(0, Var_99, 1) = ((MR_Box) (IntContext_87));
                      MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    IntAvail_89 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_99)));
                    {
                      Var_100 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_100, 0) = ((MR_Box) (ModuleName_9));
                      MR_hl_field(0, Var_100, 1) = ((MR_Box) (ImpContext_88));
                      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ImpAvail_90 = (MR_Word) ((MR_Word) (Var_100));
                    {
                      ExplicitIntAvails_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ExplicitIntAvails_115, 0) = ((MR_Box) (IntAvail_89));
                      MR_hl_field(1, ExplicitIntAvails_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ExplicitImpAvails_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ExplicitImpAvails_116, 0) = ((MR_Box) (ImpAvail_90));
                      MR_hl_field(1, ExplicitImpAvails_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    switch (Implicit_14) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_115, STATE_VARIABLE_RevIntAvails_0_26);
                          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_116, STATE_VARIABLE_RevImpAvails_0_28);
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_16, STATE_VARIABLE_RevIntAvails_0_26);
                          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_17, STATE_VARIABLE_RevImpAvails_0_28);
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeExplicit_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_RevIntAvails_27 = STATE_VARIABLE_RevIntAvails_0_26;
          *STATE_VARIABLE_RevImpAvails_29 = STATE_VARIABLE_RevImpAvails_0_28;
        }
        else
        {
          MR_Word Explicit_56 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_15, (MR_Integer) 0))));

          parse_tree__item_util__section_import_and_or_use_map_to_item_avails_acc_6_p_0(ModuleName_9, Explicit_56, STATE_VARIABLE_RevIntAvails_0_26, STATE_VARIABLE_RevIntAvails_27, STATE_VARIABLE_RevImpAvails_0_28, STATE_VARIABLE_RevImpAvails_29);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__section_import_and_or_use_map_to_item_avails_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportAndOrUse_8,
  MR_Word STATE_VARIABLE_RevIntAvails_0_13,
  MR_Word * STATE_VARIABLE_RevIntAvails_14,
  MR_Word STATE_VARIABLE_RevImpAvails_0_15,
  MR_Word * STATE_VARIABLE_RevImpAvails_16)
{
  MR_Word IntAvails_11;
  MR_Word ImpAvails_12;

  switch (MR_tag((MR_Word) ImportAndOrUse_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_8, (MR_Integer) 0))));
        MR_Word Avail_20;
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (Context_19));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_20 = (MR_Word) ((MR_Word) (Var_25));
        {
          IntAvails_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntAvails_11, 0) = ((MR_Box) (Avail_20));
          MR_hl_field(1, IntAvails_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ImpAvails_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_27;
        MR_Word Context_37 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_8, (MR_Integer) 0))));
        MR_Word Avail_38;

        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (Context_37));
          MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_38 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_27)));
        {
          IntAvails_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntAvails_11, 0) = ((MR_Box) (Avail_38));
          MR_hl_field(1, IntAvails_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ImpAvails_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_29;
        MR_Word Context_39 = ((MR_Word) ((MR_hl_field(2, ImportAndOrUse_8, (MR_Integer) 0))));
        MR_Word Avail_40;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (Context_39));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_40 = (MR_Word) ((MR_Word) (Var_29));
        IntAvails_11 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ImpAvails_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ImpAvails_12, 0) = ((MR_Box) (Avail_40));
          MR_hl_field(1, ImpAvails_12, 1) = ((MR_Box) (IntAvails_11));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImportAndOrUse_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_31;
            MR_Word Context_41 = ((MR_Word) ((MR_hl_field(3, ImportAndOrUse_8, (MR_Integer) 1))));
            MR_Word Avail_42;

            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_31, 0) = ((MR_Box) (ModuleName_7));
              MR_hl_field(0, Var_31, 1) = ((MR_Box) (Context_41));
              MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Avail_42 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_31)));
            IntAvails_11 = (MR_Word) ((MR_Unsigned) 0U);
            {
              ImpAvails_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ImpAvails_12, 0) = ((MR_Box) (Avail_42));
              MR_hl_field(1, ImpAvails_12, 1) = ((MR_Box) (IntAvails_11));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_21 = ((MR_Word) ((MR_hl_field(3, ImportAndOrUse_8, (MR_Integer) 1))));
            MR_Word ImpContext_22 = ((MR_Word) ((MR_hl_field(3, ImportAndOrUse_8, (MR_Integer) 2))));
            MR_Word IntAvail_23;
            MR_Word ImpAvail_24;
            MR_Word Var_33;
            MR_Word Var_34;

            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_33, 0) = ((MR_Box) (ModuleName_7));
              MR_hl_field(0, Var_33, 1) = ((MR_Box) (IntContext_21));
              MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            IntAvail_23 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_33)));
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_34, 0) = ((MR_Box) (ModuleName_7));
              MR_hl_field(0, Var_34, 1) = ((MR_Box) (ImpContext_22));
              MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ImpAvail_24 = (MR_Word) ((MR_Word) (Var_34));
            {
              IntAvails_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, IntAvails_11, 0) = ((MR_Box) (IntAvail_23));
              MR_hl_field(1, IntAvails_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ImpAvails_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ImpAvails_12, 0) = ((MR_Box) (ImpAvail_24));
              MR_hl_field(1, ImpAvails_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_RevIntAvails_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_11, STATE_VARIABLE_RevIntAvails_0_13);
  *STATE_VARIABLE_RevImpAvails_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvails_12, STATE_VARIABLE_RevImpAvails_0_15);
}

static void MR_CALL 
parse_tree__item_util__section_use_map_to_item_avails_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Use_8,
  MR_Word STATE_VARIABLE_RevIntAvails_0_13,
  MR_Word * STATE_VARIABLE_RevIntAvails_14,
  MR_Word STATE_VARIABLE_RevImpAvails_0_15,
  MR_Word * STATE_VARIABLE_RevImpAvails_16)
{
  MR_Word IntAvails_11;
  MR_Word ImpAvails_12;

  if (((MR_tag((MR_Word) Use_8)) == (MR_Integer) 1))
  {
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(1, Use_8, (MR_Integer) 0))));
    MR_Word Avail_20;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (Context_19));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Avail_20 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_21)));
    {
      IntAvails_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IntAvails_11, 0) = ((MR_Box) (Avail_20));
      MR_hl_field(1, IntAvails_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ImpAvails_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_23;
    MR_Word Context_25 = ((MR_Word) ((MR_hl_field(3, Use_8, (MR_Integer) 1))));
    MR_Word Avail_26;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (Context_25));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Avail_26 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_23)));
    IntAvails_11 = (MR_Word) ((MR_Unsigned) 0U);
    {
      ImpAvails_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpAvails_12, 0) = ((MR_Box) (Avail_26));
      MR_hl_field(1, ImpAvails_12, 1) = ((MR_Box) (IntAvails_11));
    }
  }
  *STATE_VARIABLE_RevIntAvails_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_11, STATE_VARIABLE_RevIntAvails_0_13);
  *STATE_VARIABLE_RevImpAvails_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImpAvails_12, STATE_VARIABLE_RevImpAvails_0_15);
}

static void MR_CALL 
parse_tree__item_util__wrap_section_import_and_or_use_2_p_0(
  MR_Word SectionImportUse_3,
  MR_Word * MaybeImplicitUse_4)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *MaybeImplicitUse_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SectionImportUse_3));
  }
}

static void MR_CALL 
parse_tree__item_util__error_if_use_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_UseMap_0_14,
  MR_Word * STATE_VARIABLE_UseMap_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word Use_11;
  MR_Word STATE_VARIABLE_UseMap_18_18;
  MR_Box conv0_Use_11;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), &conv0_Use_11, STATE_VARIABLE_UseMap_0_14, &STATE_VARIABLE_UseMap_18_18);
  if (succeeded)
  {
    Use_11 = ((MR_Word) (conv0_Use_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_53;

    *STATE_VARIABLE_UseMap_15 = STATE_VARIABLE_UseMap_18_18;
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
    Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[214])));
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (AncestorName_8));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[204])));
    }
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_42);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[199])), Var_33);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[212])), Var_23);
    if (((MR_tag((MR_Word) Use_11)) == (MR_Integer) 1))
      Var_53 = ((MR_Word) ((MR_hl_field(1, Use_11, (MR_Integer) 0))));
    else
      Var_53 = ((MR_Word) ((MR_hl_field(3, Use_11, (MR_Integer) 1))));
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.error_if_use_for_ancestor\'/6"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_53));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
    *STATE_VARIABLE_UseMap_15 = STATE_VARIABLE_UseMap_0_14;
  }
}

static void MR_CALL 
parse_tree__item_util__warn_if_avail_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_18,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word ImportOrUse_11;
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_22_22;
  MR_Box conv0_ImportOrUse_11;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (AncestorName_8)), &conv0_ImportOrUse_11, STATE_VARIABLE_SectionImportOrUseMap_0_18, &STATE_VARIABLE_SectionImportOrUseMap_22_22);
  if (succeeded)
  {
    ImportOrUse_11 = ((MR_Word) (conv0_ImportOrUse_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String DeclName_12;
    MR_Word Context_13;
    MR_Word MainPieces_14;
    MR_Word Msg_16;
    MR_Word Spec_17;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_75;

    *STATE_VARIABLE_SectionImportOrUseMap_19 = STATE_VARIABLE_SectionImportOrUseMap_22_22;
    switch (MR_tag((MR_Word) ImportOrUse_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Context_13 = ((MR_Word) ((MR_hl_field(0, ImportOrUse_11, (MR_Integer) 0))));
          DeclName_12 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 1:
        {
          Context_13 = ((MR_Word) ((MR_hl_field(1, ImportOrUse_11, (MR_Integer) 0))));
          DeclName_12 = (MR_String) "use_module";
        }
        break;
      case (MR_Integer) 2:
        {
          Context_13 = ((MR_Word) ((MR_hl_field(2, ImportOrUse_11, (MR_Integer) 0))));
          DeclName_12 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ImportOrUse_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Context_13 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_11, (MR_Integer) 1))));
              DeclName_12 = (MR_String) "use_module";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ContextA_80 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_11, (MR_Integer) 1))));
              MR_Word ContextB_81 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_11, (MR_Integer) 2))));
              MR_Word Var_84;

              mercury__term_context____Compare____term_context_0_0(&Var_84, ContextB_81, ContextA_80);
              succeeded = ((MR_Integer) 1 == Var_84);
              if (succeeded)
              {
                Context_13 = ContextB_81;
                DeclName_12 = (MR_String) "import_module";
              }
              else
              {
                Context_13 = ContextA_80;
                DeclName_12 = (MR_String) "use_module";
              }
            }
            break;
        }
        break;
    }
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_30, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_28 = parse_tree__error_spec__color_as_subject_1_f_0(Var_29);
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (DeclName_12));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[203])));
    }
    Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (AncestorName_8));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[204])));
    }
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_45);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[199])), Var_37);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_32);
    MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[197])), Var_27);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (MainPieces_14));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[225])));
    }
    {
      Msg_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_16, 0) = ((MR_Box) (Context_13));
      MR_hl_field(2, Msg_16, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Msg_16));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.warn_if_avail_for_ancestor\'/6"));
      MR_hl_field(3, Spec_17, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Spec_17, 3) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(3, Spec_17, 4) = ((MR_Box) (Var_75));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    *STATE_VARIABLE_SectionImportOrUseMap_19 = STATE_VARIABLE_SectionImportOrUseMap_0_18;
  }
}

static void MR_CALL 
parse_tree__item_util__record_imp_use_only_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_UseMap_0_19,
  MR_Word * STATE_VARIABLE_UseMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), STATE_VARIABLE_UseMap_0_19, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
  if (succeeded)
  {
    OldEntry_11 = ((MR_Word) (conv0_OldEntry_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if (((MR_tag((MR_Word) OldEntry_11)) == (MR_Integer) 1))
    {
      MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(1, OldEntry_11, (MR_Integer) 0))));
      MR_Word DupPieces_13;
      MR_Word DupMsg_15;
      MR_Word PrevMsg_16;
      MR_Word Spec_17;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_38;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_78;
      MR_Word Var_79;

      {
        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_36, 1) = ((MR_Box) (ModuleName_7));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_34 = parse_tree__error_spec__color_as_subject_1_f_0(Var_35);
      Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[191])));
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[173])), Var_43);
      Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_38);
      DupPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[155])), Var_33);
      {
        DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DupMsg_15, 0) = ((MR_Box) (Context_8));
        MR_hl_field(0, DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
      }
      {
        PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
        MR_hl_field(0, PrevMsg_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[195])));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (PrevMsg_16));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (DupMsg_15));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
      }
      {
        Spec_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use_only\'/6"));
        MR_hl_field(2, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(2, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(2, Spec_17, 3) = ((MR_Box) (Var_78));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_imp_use_only\'/6", (MR_String) "unexpected OldEntry");
        return;
      }
    *STATE_VARIABLE_UseMap_20 = STATE_VARIABLE_UseMap_0_19;
  }
  else
  {
    MR_Word Var_84;

    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_84)), STATE_VARIABLE_UseMap_0_19, STATE_VARIABLE_UseMap_20);
    *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
  }
}

static void MR_CALL 
parse_tree__item_util__record_int_use_only_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_UseMap_0_14,
  MR_Word * STATE_VARIABLE_UseMap_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), STATE_VARIABLE_UseMap_0_14, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_int_use_only\'/6", (MR_String) "unexpected OldEntry");
      return;
    }
  else
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_20)), STATE_VARIABLE_UseMap_0_14, STATE_VARIABLE_UseMap_15);
  }
  *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
}

static void MR_CALL 
parse_tree__item_util__record_imp_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_27,
  MR_Word * STATE_VARIABLE_ImportUseMap_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_27, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
  if (succeeded)
  {
    OldEntry_11 = ((MR_Word) (conv0_OldEntry_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    switch (MR_tag((MR_Word) OldEntry_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PrevContext_117 = ((MR_Word) ((MR_hl_field(0, OldEntry_11, (MR_Integer) 0))));
          MR_Word DupPieces_120;
          MR_Word DupMsg_122;
          MR_Word PrevMsg_123;
          MR_Word Spec_124;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_131;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_136;
          MR_Word Var_138;
          MR_Word Var_147;
          MR_Word Var_148;

          {
            Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_129, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
            MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_127 = parse_tree__error_spec__color_as_subject_1_f_0(Var_128);
          Var_134 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
          Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[219])), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
          Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[187])), Var_138);
          Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, Var_136);
          Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[173])), Var_133);
          Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_127, Var_131);
          DupPieces_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[155])), Var_126);
          {
            DupMsg_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_122, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_122, 1) = ((MR_Box) (DupPieces_120));
          }
          {
            PrevMsg_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_123, 0) = ((MR_Box) (PrevContext_117));
            MR_hl_field(0, PrevMsg_123, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[218])));
          }
          {
            Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_148, 0) = ((MR_Box) (PrevMsg_123));
            MR_hl_field(1, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_147, 0) = ((MR_Box) (DupMsg_122));
            MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_148));
          }
          {
            Spec_124 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6"));
            MR_hl_field(2, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(2, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_124, 3) = ((MR_Box) (Var_147));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_30 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_124));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PrevContext_151 = ((MR_Word) ((MR_hl_field(1, OldEntry_11, (MR_Integer) 0))));
          MR_Word DupPieces_154;
          MR_Word DupMsg_156;
          MR_Word PrevMsg_157;
          MR_Word Spec_158;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_165;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_Word Var_170;
          MR_Word Var_172;
          MR_Word Var_181;
          MR_Word Var_182;

          {
            Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_163, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_162, 0) = ((MR_Box) (Var_163));
            MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_161 = parse_tree__error_spec__color_as_subject_1_f_0(Var_162);
          Var_168 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
          Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[220])), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
          Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[187])), Var_172);
          Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_168, Var_170);
          Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[173])), Var_167);
          Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_161, Var_165);
          DupPieces_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[155])), Var_160);
          {
            DupMsg_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_156, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_156, 1) = ((MR_Box) (DupPieces_154));
          }
          {
            PrevMsg_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_157, 0) = ((MR_Box) (PrevContext_151));
            MR_hl_field(0, PrevMsg_157, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[223])));
          }
          {
            Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_182, 0) = ((MR_Box) (PrevMsg_157));
            MR_hl_field(1, Var_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_181, 0) = ((MR_Box) (DupMsg_156));
            MR_hl_field(1, Var_181, 1) = ((MR_Box) (Var_182));
          }
          {
            Spec_158 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_158, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6"));
            MR_hl_field(2, Spec_158, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(2, Spec_158, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_158, 3) = ((MR_Box) (Var_181));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_30 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_158));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PrevContext_17 = ((MR_Word) ((MR_hl_field(2, OldEntry_11, (MR_Integer) 0))));
          MR_Word DupPieces_21;
          MR_Word DupMsg_23;
          MR_Word PrevMsg_24;
          MR_Word Spec_25;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_70;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_81;
          MR_Word Var_86;
          MR_Word Var_103;
          MR_Word Var_104;

          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_68, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_66 = parse_tree__error_spec__color_as_subject_1_f_0(Var_67);
          Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
          Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[215])), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
          Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[187])), Var_86);
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_81);
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[173])), Var_75);
          Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_70);
          DupPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[155])), Var_65);
          {
            DupMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_23, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_23, 1) = ((MR_Box) (DupPieces_21));
          }
          {
            PrevMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_24, 0) = ((MR_Box) (PrevContext_17));
            MR_hl_field(0, PrevMsg_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[218])));
          }
          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) (PrevMsg_24));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (DupMsg_23));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
          }
          {
            Spec_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6"));
            MR_hl_field(2, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(2, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_25, 3) = ((MR_Box) (Var_103));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_30 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, OldEntry_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6", (MR_String) "unexpected OldEntry");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PrevContext_185 = ((MR_Word) ((MR_hl_field(3, OldEntry_11, (MR_Integer) 1))));
              MR_Word DupPieces_188;
              MR_Word DupMsg_190;
              MR_Word PrevMsg_191;
              MR_Word Spec_192;
              MR_Word Var_194;
              MR_Word Var_195;
              MR_Word Var_196;
              MR_Word Var_197;
              MR_Word Var_199;
              MR_Word Var_201;
              MR_Word Var_202;
              MR_Word Var_204;
              MR_Word Var_206;
              MR_Word Var_215;
              MR_Word Var_216;

              {
                Var_197 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_197, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, Var_197, 1) = ((MR_Box) (ModuleName_7));
              }
              {
                Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_196, 0) = ((MR_Box) (Var_197));
                MR_hl_field(1, Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_195 = parse_tree__error_spec__color_as_subject_1_f_0(Var_196);
              Var_202 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
              Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[220])), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
              Var_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[187])), Var_206);
              Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202, Var_204);
              Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[173])), Var_201);
              Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_195, Var_199);
              DupPieces_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[155])), Var_194);
              {
                DupMsg_190 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DupMsg_190, 0) = ((MR_Box) (Context_8));
                MR_hl_field(0, DupMsg_190, 1) = ((MR_Box) (DupPieces_188));
              }
              {
                PrevMsg_191 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PrevMsg_191, 0) = ((MR_Box) (PrevContext_185));
                MR_hl_field(0, PrevMsg_191, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[223])));
              }
              {
                Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_216, 0) = ((MR_Box) (PrevMsg_191));
                MR_hl_field(1, Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_215, 0) = ((MR_Box) (DupMsg_190));
                MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_216));
              }
              {
                Spec_192 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_192, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6"));
                MR_hl_field(2, Spec_192, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(2, Spec_192, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_192, 3) = ((MR_Box) (Var_215));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_30 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_192));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
              }
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_ImportUseMap_28 = STATE_VARIABLE_ImportUseMap_0_27;
  }
  else
  {
    MR_Word Var_109;

    {
      Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_109, 1) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_109)), STATE_VARIABLE_ImportUseMap_0_27, STATE_VARIABLE_ImportUseMap_28);
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
}

static void MR_CALL 
parse_tree__item_util__record_imp_import_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_23,
  MR_Word * STATE_VARIABLE_ImportUseMap_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_23, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
  if (succeeded)
  {
    OldEntry_11 = ((MR_Word) (conv0_OldEntry_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) OldEntry_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(0, OldEntry_11, (MR_Integer) 0))));
          MR_Word DupPieces_13;
          MR_Word DupMsg_15;
          MR_Word PrevMsg_16;
          MR_Word Spec_17;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_42;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_82;
          MR_Word Var_83;

          {
            Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_40, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_38 = parse_tree__error_spec__color_as_subject_1_f_0(Var_39);
          Var_48 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[178])));
          Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[173])), Var_47);
          Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_42);
          DupPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[171])), Var_37);
          {
            DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_15, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
          }
          {
            PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
            MR_hl_field(0, PrevMsg_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[180])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (PrevMsg_16));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_82, 0) = ((MR_Box) (DupMsg_15));
            MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Spec_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_import\'/6"));
            MR_hl_field(2, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(2, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_17, 3) = ((MR_Box) (Var_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
          }
          *STATE_VARIABLE_ImportUseMap_24 = STATE_VARIABLE_ImportUseMap_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntUseContext_18 = ((MR_Word) ((MR_hl_field(1, OldEntry_11, (MR_Integer) 0))));
          MR_Word Var_86;

          {
            Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_86, 1) = ((MR_Box) (IntUseContext_18));
            MR_hl_field(3, Var_86, 2) = ((MR_Box) (Context_8));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_86)), STATE_VARIABLE_ImportUseMap_0_23, STATE_VARIABLE_ImportUseMap_24);
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_imp_import\'/6", (MR_String) "unexpected OldEntry");
          return;
        }
        break;
    }
  else
  {
    MR_Word Var_90;

    {
      Var_90 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_90, 0) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_90)), STATE_VARIABLE_ImportUseMap_0_23, STATE_VARIABLE_ImportUseMap_24);
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  }
}

static void MR_CALL 
parse_tree__item_util__record_int_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_23,
  MR_Word * STATE_VARIABLE_ImportUseMap_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_23, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
  if (succeeded)
  {
    OldEntry_11 = ((MR_Word) (conv0_OldEntry_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    switch (MR_tag((MR_Word) OldEntry_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(0, OldEntry_11, (MR_Integer) 0))));
          MR_Word DupPieces_13;
          MR_Word DupMsg_15;
          MR_Word PrevMsg_16;
          MR_Word Spec_17;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_42;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_82;
          MR_Word Var_83;

          {
            Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_40, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_38 = parse_tree__error_spec__color_as_subject_1_f_0(Var_39);
          Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[159])));
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[167])));
          Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[157])), Var_47);
          Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_42);
          DupPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[155])), Var_37);
          {
            DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_15, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
          }
          {
            PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
            MR_hl_field(0, PrevMsg_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[169])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (PrevMsg_16));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_82, 0) = ((MR_Box) (DupMsg_15));
            MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Spec_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_int_use\'/6"));
            MR_hl_field(2, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(2, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_17, 3) = ((MR_Box) (Var_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_int_use\'/6", (MR_String) "unexpected OldEntry");
          return;
        }
        break;
    }
    *STATE_VARIABLE_ImportUseMap_24 = STATE_VARIABLE_ImportUseMap_0_23;
  }
  else
  {
    MR_Word Var_88;

    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_88)), STATE_VARIABLE_ImportUseMap_0_23, STATE_VARIABLE_ImportUseMap_24);
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  }
}

static void MR_CALL 
parse_tree__item_util__record_int_import_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_ImportUseMap_9)
{
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Context_6));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_10)), STATE_VARIABLE_ImportUseMap_0_8, STATE_VARIABLE_ImportUseMap_9);
}

static void MR_CALL 
parse_tree__item_util__report_duplicate_avail_context_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word PrevContext_11,
  MR_Word DuplicateContext_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word DupPieces_14;
  MR_Word PrevPieces_15;
  MR_Word DupMsg_16;
  MR_Word PrevMsg_17;
  MR_Word Spec_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_59;
  MR_Word Var_70;
  MR_Word Var_71;

  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (DeclName_9));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[14])));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[131])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_27);
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (ModuleName_10));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (Section_8));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[149])));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[147])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_46);
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[146])), Var_41);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_36);
  DupPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[144])), Var_25);
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[139])));
  }
  {
    PrevPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrevPieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__item_util_scalar_common_2[141])));
    MR_hl_field(1, PrevPieces_15, 1) = ((MR_Box) (Var_59));
  }
  {
    DupMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DupMsg_16, 0) = ((MR_Box) (DuplicateContext_12));
    MR_hl_field(0, DupMsg_16, 1) = ((MR_Box) (DupPieces_14));
  }
  {
    PrevMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PrevMsg_17, 0) = ((MR_Box) (PrevContext_11));
    MR_hl_field(0, PrevMsg_17, 1) = ((MR_Box) (PrevPieces_15));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (PrevMsg_17));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (DupMsg_16));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
  }
  {
    Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.report_duplicate_avail_context\'/7"));
    MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_70));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
  }
}

static void MR_CALL 
parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_20;

  parse_tree__item_util__report_duplicate_avail_context_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word OoMContexts_11,
  MR_Word * HeadSortedContext_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word HeadContext_14 = ((MR_Word) ((MR_hl_field(0, OoMContexts_11, (MR_Integer) 0))));
  MR_Word TailContexts_15 = ((MR_Word) ((MR_hl_field(0, OoMContexts_11, (MR_Integer) 1))));
  MR_Word SortedContexts_16;
  MR_Word Var_22;

  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (HeadContext_14));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (TailContexts_15));
  }
  mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), Var_22, &SortedContexts_16);
  if ((SortedContexts_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.report_any_duplicate_avail_contexts\'/7", (MR_String) "SortedContexts = []");
      return;
    }
  else
  {
    MR_Word TailSortedContexts_17;

    *HeadSortedContext_12 = ((MR_Word) ((MR_hl_field(1, SortedContexts_16, (MR_Integer) 0))));
    TailSortedContexts_17 = ((MR_Word) ((MR_hl_field(1, SortedContexts_16, (MR_Integer) 1))));
    if ((TailSortedContexts_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    else
    {
      MR_Word Var_25;
      MR_Box conv1_STATE_VARIABLE_Specs_21;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_5[2]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (Section_8));
        MR_hl_field(0, Var_25, 4) = ((MR_Box) (DeclName_9));
        MR_hl_field(0, Var_25, 5) = ((MR_Box) (ModuleName_10));
        MR_hl_field(0, Var_25, 6) = ((MR_Box) (*HeadSortedContext_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), Var_25, TailSortedContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_20)), &conv1_STATE_VARIABLE_Specs_21);
      *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_21));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__include_map_to_int_imp_modules_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_IntModules_0_13,
  MR_Word * STATE_VARIABLE_IntModules_14,
  MR_Word STATE_VARIABLE_ImpModules_0_15,
  MR_Word * STATE_VARIABLE_ImpModules_16)
{
  MR_Word Section_11 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Section_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImpModules_0_15, STATE_VARIABLE_ImpModules_16);
        *STATE_VARIABLE_IntModules_14 = STATE_VARIABLE_IntModules_0_13;
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_IntModules_0_13, STATE_VARIABLE_IntModules_14);
        *STATE_VARIABLE_ImpModules_16 = STATE_VARIABLE_ImpModules_0_15;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__item_util__classify_include_module_6_p_0(
  MR_Word Section_7,
  MR_Word ItemInclude_8,
  MR_Word STATE_VARIABLE_InclMap_0_18,
  MR_Word * STATE_VARIABLE_InclMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ItemInclude_8, (MR_Integer) 0))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, ItemInclude_8, (MR_Integer) 1))));
  MR_Word PrevEntry_14;
  MR_Box conv0_PrevEntry_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), STATE_VARIABLE_InclMap_0_18, ((MR_Box) (ModuleName_11)), &conv0_PrevEntry_14);
  if (succeeded)
  {
    PrevEntry_14 = ((MR_Word) (conv0_PrevEntry_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PrevContext_16 = ((MR_Word) ((MR_hl_field(0, PrevEntry_14, (MR_Integer) 1))));
    MR_Word MainPieces_26;
    MR_Word MainMsg_27;
    MR_Word PrevMsg_29;
    MR_Word Spec_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_57;
    MR_Word Var_58;

    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[132])));
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (ModuleName_11));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[136])));
    }
    Var_44 = parse_tree__error_spec__color_as_subject_1_f_0(Var_45);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[134])), Var_43);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_38);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[128])), Var_35);
    {
      MainMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_27, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, MainMsg_27, 1) = ((MR_Box) (MainPieces_26));
    }
    {
      PrevMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrevMsg_29, 0) = ((MR_Box) (PrevContext_16));
      MR_hl_field(0, PrevMsg_29, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[142])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (PrevMsg_29));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (MainMsg_27));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Spec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.report_duplicate_include\'/5"));
      MR_hl_field(2, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_30, 3) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
    *STATE_VARIABLE_InclMap_19 = STATE_VARIABLE_InclMap_0_18;
  }
  else
  {
    MR_Word Entry_17;

    {
      Entry_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_17, 0) = (MR_Box) ((MR_Unsigned) (Section_7));
      MR_hl_field(0, Entry_17, 1) = ((MR_Box) (Context_12));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Entry_17)), STATE_VARIABLE_InclMap_0_18, STATE_VARIABLE_InclMap_19);
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  MR_Word ModeDefnInfo_4;
  MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (EqvDefn_5));
  }
  {
    ModeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, ModeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, ModeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, ModeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, ModeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, ModeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return ModeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  MR_Word ModeDefnInfo_4;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 5))));

  {
    ModeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeDefnInfo_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, ModeDefnInfo_4, 1) = ((MR_Box) (Var_7));
    MR_hl_field(0, ModeDefnInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, ModeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, ModeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return ModeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  MR_Word InstDefnInfo_4;
  MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 5))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 6))));

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (EqvDefn_5));
  }
  {
    InstDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, InstDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, InstDefnInfo_4, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, InstDefnInfo_4, 3) = ((MR_Box) (Var_6));
    MR_hl_field(0, InstDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, InstDefnInfo_4, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, InstDefnInfo_4, 6) = ((MR_Box) (Var_12));
  }
  return InstDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  MR_Word InstDefnInfo_4;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 5))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 6))));

  {
    InstDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstDefnInfo_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, InstDefnInfo_4, 1) = ((MR_Box) (Var_7));
    MR_hl_field(0, InstDefnInfo_4, 2) = ((MR_Box) (Var_8));
    MR_hl_field(0, InstDefnInfo_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, InstDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, InstDefnInfo_4, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, InstDefnInfo_4, 6) = ((MR_Box) (Var_12));
  }
  return InstDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_type_defn_1_f_0(
  MR_Word ForeignDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word ForeignDefn_5 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, ForeignDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (ForeignDefn_5));
  }
  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_sub_type_defn_1_f_0(
  MR_Word SubDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word SubDefn_5 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6 = (MR_Word) (MR_mkword(1, (MR_Word) (SubDefn_5)));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, SubDefnInfo_3, (MR_Integer) 5))));

  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_du_type_defn_1_f_0(
  MR_Word DuDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word DuDefn_5 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6 = (MR_Word) ((MR_Word) (DuDefn_5));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_3, (MR_Integer) 5))));

  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_type_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, EqvDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (EqvDefn_5));
  }
  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_solver_type_defn_1_f_0(
  MR_Word SolverDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word SolverDefn_5 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6 = (MR_Word) (MR_mkword(2, (MR_Word) (SolverDefn_5)));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, SolverDefnInfo_3, (MR_Integer) 5))));

  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_type_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  MR_Word TypeDefnInfo_4;
  MR_Word AbstractDefn_5 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 2))));
  MR_Word Var_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, AbstractDefnInfo_3, (MR_Integer) 5))));

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (AbstractDefn_5));
  }
  {
    TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
  }
  return TypeDefnInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_repn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mutable_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_finalise_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_initialise_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_promise_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_generated_pragma_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_impl_pragma_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_decl_pragma_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_clause_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) ((MR_Word) (X_3));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_export_enum_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_enum_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mode_decl_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(2, (MR_Word) (X_3)));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_pred_decl_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(1, (MR_Word) (X_3)));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_instance_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_typeclass_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mode_defn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_inst_defn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_defn_item_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (X_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_avail_use_1_f_0(
  MR_Word AvailUseInfo_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(1, (MR_Word) (AvailUseInfo_3)));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_avail_import_1_f_0(
  MR_Word AvailImportInfo_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) ((MR_Word) (AvailImportInfo_3));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_use_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word UseInfo_4;
  MR_Word Var_5;

  Var_5 = mercury__term_context__dummy_context_0_f_0();
  {
    UseInfo_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseInfo_4, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, UseInfo_4, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, UseInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return UseInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_import_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word ImportInfo_4;
  MR_Word Var_5;

  Var_5 = mercury__term_context__dummy_context_0_f_0();
  {
    ImportInfo_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImportInfo_4, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, ImportInfo_4, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, ImportInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return ImportInfo_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_use_avail_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word Avail_4;
  MR_Word UseInfo_5;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  {
    UseInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseInfo_5, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, UseInfo_5, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, UseInfo_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Avail_4 = (MR_Word) (MR_mkword(1, (MR_Word) (UseInfo_5)));
  return Avail_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_import_avail_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word Avail_4;
  MR_Word ImportInfo_5;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  {
    ImportInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImportInfo_5, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, ImportInfo_5, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, ImportInfo_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Avail_4 = (MR_Word) ((MR_Word) (ImportInfo_5));
  return Avail_4;
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_include_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word Include_4;
  MR_Word Var_5;

  Var_5 = mercury__term_context__dummy_context_0_f_0();
  {
    Include_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Include_4, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, Include_4, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, Include_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Include_4;
}

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_IntDefns_5;
  MR_Word conv0_ImpDefns_6;

  parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntDefns_5, &conv0_ImpDefns_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_IntDefns_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_ImpDefns_6));
}

void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(
  MR_Word ModeCtorCheckedMap_4,
  MR_Word * IntModeDefns_5,
  MR_Word * ImpModeDefns_6)
{
  MR_Word ModeCtorCheckedDefns_7;
  MR_Word IntModeDefnLists_8;
  MR_Word ImpModeDefnLists_9;

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ModeCtorCheckedMap_4, &ModeCtorCheckedDefns_7);
  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[10]), (MR_Word) (&parse_tree__item_util_scalar_common_2[10]), (MR_Word) (&parse_tree__item_util_scalar_common_1[19]), ModeCtorCheckedDefns_7, &IntModeDefnLists_8, &ImpModeDefnLists_9);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[9]), IntModeDefnLists_8, IntModeDefns_5);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[9]), ImpModeDefnLists_9, ImpModeDefns_6);
}

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_IntDefns_5;
  MR_Word conv0_ImpDefns_6;

  parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntDefns_5, &conv0_ImpDefns_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_IntDefns_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_ImpDefns_6));
}

void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(
  MR_Word InstCtorCheckedMap_4,
  MR_Word * IntInstDefns_5,
  MR_Word * ImpInstDefns_6)
{
  MR_Word InstCtorCheckedDefns_7;
  MR_Word IntInstDefnLists_8;
  MR_Word ImpInstDefnLists_9;

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), InstCtorCheckedMap_4, &InstCtorCheckedDefns_7);
  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[8]), (MR_Word) (&parse_tree__item_util_scalar_common_2[8]), (MR_Word) (&parse_tree__item_util_scalar_common_1[18]), InstCtorCheckedDefns_7, &IntInstDefnLists_8, &ImpInstDefnLists_9);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[7]), IntInstDefnLists_8, IntInstDefns_5);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[7]), ImpInstDefnLists_9, ImpInstDefns_6);
}

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_IntDefns_6;
  MR_Word conv1_ImpDefns_7;
  MR_Word conv0_ImpForeignEnums_8;

  parse_tree__item_util__type_ctor_checked_defn_get_src_defns_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_IntDefns_6, &conv1_ImpDefns_7, &conv0_ImpForeignEnums_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_IntDefns_6));
  *wrapper_arg_3 = ((MR_Box) (conv1_ImpDefns_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_ImpForeignEnums_8));
}

void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * IntTypeDefns_6,
  MR_Word * ImpTypeDefns_7,
  MR_Word * ImpForeignEnums_8)
{
  MR_Word TypeCtorCheckedDefns_9;
  MR_Word IntTypeDefnLists_10;
  MR_Word ImpTypeDefnLists_11;
  MR_Word ImpForeignEnumLists_12;

  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), TypeCtorCheckedMap_5, &TypeCtorCheckedDefns_9);
  mercury__list__map3_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[5]), (MR_Word) (&parse_tree__item_util_scalar_common_2[5]), (MR_Word) (&parse_tree__item_util_scalar_common_2[6]), (MR_Word) (&parse_tree__item_util_scalar_common_1[17]), TypeCtorCheckedDefns_9, &IntTypeDefnLists_10, &ImpTypeDefnLists_11, &ImpForeignEnumLists_12);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[4]), IntTypeDefnLists_10, IntTypeDefns_6);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[4]), ImpTypeDefnLists_11, ImpTypeDefns_7);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpForeignEnumLists_12, ImpForeignEnums_8);
}

MR_Word MR_CALL 
parse_tree__item_util__get_use_module_name_1_f_0(
  MR_Word AvailUseInfo_3)
{
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailUseInfo_3, (MR_Integer) 0))));

  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_import_module_name_1_f_0(
  MR_Word AvailImportInfo_3)
{
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailImportInfo_3, (MR_Integer) 0))));

  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_avail_module_name_1_f_0(
  MR_Word ItemAvail_3)
{
  MR_Word ModuleName_4;

  if (((MR_tag((MR_Word) ItemAvail_3)) == (MR_Integer) 0))
  {
    MR_Word AvailImportInfo_5 = (MR_Word) ((MR_Word) (ItemAvail_3));

    ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailImportInfo_5, (MR_Integer) 0))));
  }
  else
  {
    MR_Word AvailUseInfo_8 = (MR_Word) (MR_body((MR_Word) (ItemAvail_3), (MR_Integer) 1));

    ModuleName_4 = ((MR_Word) ((MR_hl_field(0, AvailUseInfo_8, (MR_Integer) 0))));
  }
  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_use_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Context_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_import_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Context_4;
}

MR_Word MR_CALL 
parse_tree__item_util__get_avail_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Var_6 = (MR_Word) ((MR_Word) (HeadVar__1_1));

    Context_2 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Var_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));

    Context_2 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  }
  return Context_2;
}

MR_Word MR_CALL 
parse_tree__item_util__item_include_module_name_1_f_0(
  MR_Word Incl_3)
{
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, Incl_3, (MR_Integer) 0))));

  return ModuleName_4;
}

MR_Word MR_CALL 
parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(
  MR_Word ParseTreeModuleSrc_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__item_util__gen_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Pragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[126]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[120]));
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[124]));
      break;
    case (MR_Integer) 3:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[122]));
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__decl_marker_desc_pieces_1_f_0(
  MR_Word Marker_3)
{
  MR_Word Pieces_4;
  MR_Word MarkerKind_5 = ((MR_Unsigned) ((MR_hl_field(0, Marker_3, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (MarkerKind_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[76]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[78]));
      break;
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[80]));
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__items_desc_pieces_1_f_0(
  MR_Word Item_3)
{
  MR_Word Pieces_4;
  MR_Word Pieces0_5;

  Pieces0_5 = parse_tree__item_util__item_desc_pieces_1_f_0(Item_3);
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_5, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[54])));
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__item_desc_pieces_1_f_0(
  MR_Word Item_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Item_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[12]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemPredDecl_9 = (MR_Word) (MR_body((MR_Word) (Item_3), (MR_Integer) 1));
        MR_Word PorF_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_9, (MR_Integer) 1))) & (MR_Integer) 1);

        switch (PorF_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[36]));
            break;
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[38]));
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[30]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[22]));
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[18]));
          break;
        case (MR_Integer) 2:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[20]));
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemDeclMarker_16 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word MarkerKind_127 = ((MR_Unsigned) ((MR_hl_field(0, ItemDeclMarker_16, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MarkerKind_127) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[76]));
                break;
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[78]));
                break;
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[80]));
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ItemImplMarker_18 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            Pieces_4 = parse_tree__item_util__impl_marker_desc_pieces_1_f_0(ItemImplMarker_18);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemPromise_20 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word PromiseType_21 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromise_20, (MR_Integer) 0))) & (MR_Integer) 3);

            Pieces_4 = ((&parse_tree__item_util_vector_common_10[8 + PromiseType_21]))->parse_tree__item_util__vector_common_type_10_0__vct_10_f_0;
          }
          break;
        case (MR_Integer) 6:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[52]));
          break;
        case (MR_Integer) 7:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[28]));
          break;
        case (MR_Integer) 8:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[24]));
          break;
        case (MR_Integer) 9:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[16]));
          break;
        case (MR_Integer) 10:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[34]));
          break;
        case (MR_Integer) 11:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[48]));
          break;
        case (MR_Integer) 12:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[26]));
          break;
        case (MR_Integer) 13:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[32]));
          break;
        case (MR_Integer) 14:
          {
            MR_Word ItemDeclPragma_15 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            Pieces_4 = parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(ItemDeclPragma_15);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word ItemImplPragma_17 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            Pieces_4 = parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(ItemImplPragma_17);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word ItemGenPragma_19 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ItemGenPragma_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[126]));
                break;
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[120]));
                break;
              case (MR_Integer) 2:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[124]));
                break;
              case (MR_Integer) 3:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[122]));
                break;
            }
          }
          break;
        case (MR_Integer) 17:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[50]));
          break;
      }
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__impl_marker_desc_pieces_1_f_0(
  MR_Word Marker_3)
{
  MR_Word Pieces_4;
  MR_Word MarkerKind_5 = ((MR_Unsigned) ((MR_hl_field(0, Marker_3, (MR_Integer) 0))) & (MR_Integer) 7);

  Pieces_4 = ((&parse_tree__item_util_vector_common_10[0 + MarkerKind_5]))->parse_tree__item_util__vector_common_type_10_0__vct_10_f_0;
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Pragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[90]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[88]));
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[92]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word External_8 = ((MR_Word) ((MR_hl_field(3, Pragma_3, (MR_Integer) 1))));
            MR_Word PFNameArity_9 = ((MR_Word) ((MR_hl_field(0, External_8, (MR_Integer) 0))));
            MR_Word PorF_13 = ((MR_Unsigned) ((MR_hl_field(0, PFNameArity_9, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (PorF_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[82]));
                break;
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[84]));
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[86]));
          break;
        case (MR_Integer) 2:
          {
            MR_Word Tabled_18 = ((MR_Word) ((MR_hl_field(3, Pragma_3, (MR_Integer) 1))));
            MR_Word TabledMethod_19 = ((MR_Word) ((MR_hl_field(0, Tabled_18, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) TabledMethod_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[98]));
                break;
              case (MR_Integer) 1:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[100]));
                break;
              case (MR_Integer) 2:
                mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.impl_pragma_desc_pieces\'/1", (MR_String) "eval_table_io");
                break;
              case (MR_Integer) 3:
                Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[102]));
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[96]));
          break;
        case (MR_Integer) 4:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[94]));
          break;
      }
      break;
  }
  return Pieces_4;
}

MR_Word MR_CALL 
parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Pragma_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[58]));
      break;
    case (MR_Integer) 1:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[60]));
      break;
    case (MR_Integer) 2:
      Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[56]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[74]));
          break;
        case (MR_Integer) 1:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[72]));
          break;
        case (MR_Integer) 2:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[62]));
          break;
        case (MR_Integer) 3:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[68]));
          break;
        case (MR_Integer) 4:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[70]));
          break;
        case (MR_Integer) 5:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[66]));
          break;
        case (MR_Integer) 6:
          Pieces_4 = (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[64]));
          break;
      }
      break;
  }
  return Pieces_4;
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_impl_pragma_3_p_0(
  MR_Word ItemImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_6,
  MR_Word * STATE_VARIABLE_Langs_7)
{
  MR_Word Var_8;

  switch (MR_tag((MR_Word) ItemImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_10 = (MR_Word) ((MR_Word) (ItemImplPragma_4));
        MR_Word Lang_33 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Lang_33));
          MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Lang_11;
        MR_Word FCInfo_16 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_4), (MR_Integer) 1));

        Lang_11 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_16, (MR_Integer) 0))) & (MR_Integer) 3);
        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Lang_11));
          MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo_20 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_4), (MR_Integer) 2));
        MR_Word Lang_35 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_20, (MR_Integer) 1))) & (MR_Integer) 3);

        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Lang_35));
          MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_8, STATE_VARIABLE_Langs_0_6, STATE_VARIABLE_Langs_7);
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_enum_3_p_0(
  MR_Word FEInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_11,
  MR_Word * STATE_VARIABLE_Langs_12)
{
  MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(0, FEInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);

  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), STATE_VARIABLE_Langs_0_11, STATE_VARIABLE_Langs_12);
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_proc_3_p_0(
  MR_Word FPInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_15,
  MR_Word * STATE_VARIABLE_Langs_16)
{
  MR_Word Attrs_6 = ((MR_Word) ((MR_hl_field(0, FPInfo_4, (MR_Integer) 0))));
  MR_Word Var_17;

  Var_17 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_6);
  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_17)), STATE_VARIABLE_Langs_0_15, STATE_VARIABLE_Langs_16);
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_Langs_0_10,
  MR_Word * STATE_VARIABLE_Langs_11)
{
  MR_bool succeeded;
  MR_Word ForeignType_7;
  MR_Word DetailsForeign_6;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 2))));

  succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    DetailsForeign_6 = ((MR_Word) ((MR_hl_field(3, Var_12, (MR_Integer) 1))));
    ForeignType_7 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_6, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_13;

    Var_13 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_7);
    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_13)), STATE_VARIABLE_Langs_0_10, STATE_VARIABLE_Langs_11);
  }
  else
    *STATE_VARIABLE_Langs_11 = STATE_VARIABLE_Langs_0_10;
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
  MR_Word Item_3)
{
  MR_bool succeeded;
  MR_Word Langs_4;

  switch (MR_tag((MR_Word) Item_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPInfo_11 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word Attrs_12 = ((MR_Word) ((MR_hl_field(0, FPInfo_11, (MR_Integer) 0))));
            MR_Word Var_47;

            Var_47 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_12);
            {
              Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Var_47));
              MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FEInfo_21 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word Lang_22 = ((MR_Unsigned) ((MR_hl_field(0, FEInfo_21, (MR_Integer) 0))) & (MR_Integer) 3);

            {
              Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_22));
              MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 16:
          Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 10:
          Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeDefn_6 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));
            MR_Word ForeignType_8;
            MR_Word DetailsForeign_7;
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_6, (MR_Integer) 2))));

            succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_44, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              DetailsForeign_7 = ((MR_Word) ((MR_hl_field(3, Var_44, (MR_Integer) 1))));
              ForeignType_8 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_7, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_45;

              Var_45 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_8);
              {
                Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Var_45));
                MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word ItemImplPragma_27 = ((MR_Word) ((MR_hl_field(3, Item_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ItemImplPragma_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FDInfo_57 = (MR_Word) ((MR_Word) (ItemImplPragma_27));
                  MR_Word Lang_80 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_57, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                  {
                    Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_80));
                    MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lang_58;
                  MR_Word FCInfo_63 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_27), (MR_Integer) 1));

                  Lang_58 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_63, (MR_Integer) 0))) & (MR_Integer) 3);
                  {
                    Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_58));
                    MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word FPEInfo_67 = (MR_Word) (MR_body((MR_Word) (ItemImplPragma_27), (MR_Integer) 2));
                  MR_Word Lang_82 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_67, (MR_Integer) 1))) & (MR_Integer) 3);

                  {
                    Langs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Langs_4, 0) = ((MR_Box) (Lang_82));
                    MR_hl_field(1, Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 3:
                Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
          }
          break;
        case (MR_Integer) 17:
          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.item_needs_foreign_imports\'/1", (MR_String) "item_type_repn");
          break;
      }
      break;
  }
  return Langs_4;
}

void MR_CALL 
parse_tree__item_util__add_implicit_fim_for_module_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  MR_bool succeeded;
  MR_Word FIMSpec_8;
  MR_Box conv0_Var_9;

  {
    FIMSpec_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
    MR_hl_field(0, FIMSpec_8, 1) = ((MR_Box) (ModuleName_5));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_Map_0_10, ((MR_Box) (FIMSpec_8)), &conv0_Var_9);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *STATE_VARIABLE_Map_11 = STATE_VARIABLE_Map_0_10;
  else
  {
    MR_Word Var_12;

    Var_12 = mercury__term_context__dummy_context_0_f_0();
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (FIMSpec_8)), ((MR_Box) (Var_12)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
  }
}

MR_Word MR_CALL 
parse_tree__item_util__fim_module_lang_to_item_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__term_context__dummy_context_0_f_0();
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (ModuleName_4));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__item_util__fim_module_lang_to_spec_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (ModuleName_4));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__item_util__fim_spec_to_item_1_f_0(
  MR_Word FIMSpec_3)
{
  MR_Word FIM_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 1))));
  MR_Word Var_7;

  Var_7 = mercury__term_context__dummy_context_0_f_0();
  {
    FIM_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIM_4, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, FIM_4, 1) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, FIM_4, 2) = ((MR_Box) (Var_7));
    MR_hl_field(0, FIM_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return FIM_4;
}

MR_Word MR_CALL 
parse_tree__item_util__fim_item_to_spec_1_f_0(
  MR_Word FIM_3)
{
  MR_Word FIMSpec_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIM_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(0, FIM_3, (MR_Integer) 1))));

  {
    FIMSpec_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_4, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
    MR_hl_field(0, FIMSpec_4, 1) = ((MR_Box) (ModuleName_6));
  }
  return FIMSpec_4;
}

MR_bool MR_CALL 
parse_tree__item_util__avail_is_use_2_p_0(
  MR_Word Avail_3,
  MR_Word * UseInfo_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Avail_3)) == (MR_Integer) 1);

  if (succeeded)
    *UseInfo_4 = (MR_Word) (MR_body((MR_Word) (Avail_3), (MR_Integer) 1));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__item_util__avail_is_import_2_p_0(
  MR_Word Avail_3,
  MR_Word * ImportInfo_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Avail_3)) == (MR_Integer) 0);

  if (succeeded)
    *ImportInfo_4 = (MR_Word) ((MR_Word) (Avail_3));
  return succeeded;
}

MR_String MR_CALL 
parse_tree__item_util__import_or_use_decl_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "import_module";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "use_module";
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__item_util__avail_imports_uses_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Avail_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Avails_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Imports_12_12;
    MR_Word STATE_VARIABLE_Uses_13_13;

    parse_tree__item_util__avail_imports_uses_3_p_0(Avails_5, &STATE_VARIABLE_Imports_12_12, &STATE_VARIABLE_Uses_13_13);
    if (((MR_tag((MR_Word) Avail_4)) == (MR_Integer) 0))
    {
      MR_Word AvailImportInfo_8 = (MR_Word) ((MR_Word) (Avail_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (AvailImportInfo_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Imports_12_12));
      }
      *HeadVar__3_3 = STATE_VARIABLE_Uses_13_13;
    }
    else
    {
      MR_Word AvailUseInfo_9 = (MR_Word) (MR_body((MR_Word) (Avail_4), (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (AvailUseInfo_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Uses_13_13));
      }
      *HeadVar__2_2 = STATE_VARIABLE_Imports_12_12;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__acc_avails_with_contexts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevAvails_12;

  parse_tree__item_util__acc_avail_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevAvails_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevAvails_12));
}

void MR_CALL 
parse_tree__item_util__acc_avails_with_contexts_5_p_0(
  MR_Word ImportOrUse_6,
  MR_Word ModuleName_7,
  MR_Word Contexts_8,
  MR_Word STATE_VARIABLE_RevAvails_0_10,
  MR_Word * STATE_VARIABLE_RevAvails_11)
{
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_RevAvails_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_9[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__item_util__acc_avails_with_contexts_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ImportOrUse_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (ModuleName_7));
  }
  mercury__one_or_more__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), Var_12, Contexts_8, ((MR_Box) (STATE_VARIABLE_RevAvails_0_10)), &conv1_STATE_VARIABLE_RevAvails_11);
  *STATE_VARIABLE_RevAvails_11 = ((MR_Word) (conv1_STATE_VARIABLE_RevAvails_11));
}

static void MR_CALL 
parse_tree__item_util__use_map_to_item_avails_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevAvails_12;

  parse_tree__item_util__use_map_to_item_avails_acc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RevAvails_12);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RevAvails_12));
}

MR_Word MR_CALL 
parse_tree__item_util__use_map_to_item_avails_1_f_0(
  MR_Word UseMap_3)
{
  MR_Word Avails_4;
  MR_Word RevAvails_5;
  MR_Box conv1_RevAvails_5;

  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[16]), UseMap_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevAvails_5);
  RevAvails_5 = ((MR_Word) (conv1_RevAvails_5));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevAvails_5, &Avails_4);
  return Avails_4;
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_IntImports_28;
  MR_Word conv3_STATE_VARIABLE_IntUses_30;
  MR_Word conv2_STATE_VARIABLE_ImpImports_32;
  MR_Word conv1_STATE_VARIABLE_ImpUses_34;
  MR_Word conv0_STATE_VARIABLE_IntUseImpImports_36;

  parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_acc_12_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_IntImports_28, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IntUses_30, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_ImpImports_32, ((MR_Word) (wrapper_arg_9)), &conv1_STATE_VARIABLE_ImpUses_34, ((MR_Word) (wrapper_arg_11)), &conv0_STATE_VARIABLE_IntUseImpImports_36);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_IntImports_28));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IntUses_30));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_ImpImports_32));
  *wrapper_arg_10 = ((MR_Box) (conv1_STATE_VARIABLE_ImpUses_34));
  *wrapper_arg_12 = ((MR_Box) (conv0_STATE_VARIABLE_IntUseImpImports_36));
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(
  MR_Word ImportUseMap_7,
  MR_Word * IntImports_8,
  MR_Word * IntUses_9,
  MR_Word * ImpImports_10,
  MR_Word * ImpUses_11,
  MR_Word * IntUseImpImports_12)
{
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv9_IntImports_8;
  MR_Box conv8_IntUses_9;
  MR_Box conv7_ImpImports_10;
  MR_Box conv6_ImpUses_11;
  MR_Box conv5_IntUseImpImports_12;

  Var_14 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  mercury__map__foldl5_12_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[15]), ImportUseMap_7, ((MR_Box) (Var_14)), &conv9_IntImports_8, ((MR_Box) (Var_15)), &conv8_IntUses_9, ((MR_Box) (Var_16)), &conv7_ImpImports_10, ((MR_Box) (Var_17)), &conv6_ImpUses_11, ((MR_Box) (Var_18)), &conv5_IntUseImpImports_12);
  *IntImports_8 = ((MR_Word) (conv9_IntImports_8));
  *IntUses_9 = ((MR_Word) (conv8_IntUses_9));
  *ImpImports_10 = ((MR_Word) (conv7_ImpImports_10));
  *ImpUses_11 = ((MR_Word) (conv6_ImpUses_11));
  *IntUseImpImports_12 = ((MR_Word) (conv5_IntUseImpImports_12));
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_SectionImportAndOrUseMap_27;
  MR_Word conv3_STATE_VARIABLE_IntImportMap_29;
  MR_Word conv2_STATE_VARIABLE_IntUseMap_31;
  MR_Word conv1_STATE_VARIABLE_ImpImportMap_33;
  MR_Word conv0_STATE_VARIABLE_ImpUseMap_35;

  parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_12_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_SectionImportAndOrUseMap_27, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IntImportMap_29, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_IntUseMap_31, ((MR_Word) (wrapper_arg_9)), &conv1_STATE_VARIABLE_ImpImportMap_33, ((MR_Word) (wrapper_arg_11)), &conv0_STATE_VARIABLE_ImpUseMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_SectionImportAndOrUseMap_27));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportMap_29));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_IntUseMap_31));
  *wrapper_arg_10 = ((MR_Box) (conv1_STATE_VARIABLE_ImpImportMap_33));
  *wrapper_arg_12 = ((MR_Box) (conv0_STATE_VARIABLE_ImpUseMap_35));
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0(
  MR_Word ImportUseMap_7,
  MR_Word * SectionImportUseMap_8,
  MR_Word * IntImportMap_9,
  MR_Word * IntUseMap_10,
  MR_Word * ImpImportMap_11,
  MR_Word * ImpUseMap_12)
{
  MR_Word IntImportMap0_13;
  MR_Word IntUseMap0_14;
  MR_Word ImpImportMap0_15;
  MR_Word ImpUseMap0_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv9_SectionImportUseMap_8;
  MR_Box conv8_IntImportMap0_13;
  MR_Box conv7_IntUseMap0_14;
  MR_Box conv6_ImpImportMap0_15;
  MR_Box conv5_ImpUseMap0_16;

  Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0));
  Var_19 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_20 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_21 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  mercury__map__foldl5_12_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[14]), ImportUseMap_7, ((MR_Box) (Var_18)), &conv9_SectionImportUseMap_8, ((MR_Box) (Var_19)), &conv8_IntImportMap0_13, ((MR_Box) (Var_20)), &conv7_IntUseMap0_14, ((MR_Box) (Var_21)), &conv6_ImpImportMap0_15, ((MR_Box) (Var_22)), &conv5_ImpUseMap0_16);
  *SectionImportUseMap_8 = ((MR_Word) (conv9_SectionImportUseMap_8));
  IntImportMap0_13 = ((MR_Word) (conv8_IntImportMap0_13));
  IntUseMap0_14 = ((MR_Word) (conv7_IntUseMap0_14));
  ImpImportMap0_15 = ((MR_Word) (conv6_ImpImportMap0_15));
  ImpUseMap0_16 = ((MR_Word) (conv5_ImpUseMap0_16));
  *IntImportMap_9 = (MR_Word) (IntImportMap0_13);
  *IntUseMap_10 = (MR_Word) (IntUseMap0_14);
  *ImpImportMap_11 = (MR_Word) (ImpImportMap0_15);
  *ImpUseMap_12 = (MR_Word) (ImpUseMap0_16);
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RevIntAvails_27;
  MR_Word conv0_STATE_VARIABLE_RevImpAvails_29;

  parse_tree__item_util__import_and_or_use_map_to_item_avails_acc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_27, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_29);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_27));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_29));
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0(
  MR_Word IncludeImplicit_5,
  MR_Word ImportUseMap_6,
  MR_Word * IntAvails_7,
  MR_Word * ImpAvails_8)
{
  MR_Word RevIntAvails_9;
  MR_Word RevImpAvails_10;
  MR_Word Var_11;
  MR_Box conv3_RevIntAvails_9;
  MR_Box conv2_RevImpAvails_10;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_5[1]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (IncludeImplicit_5));
  }
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), Var_11, ImportUseMap_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_10);
  RevIntAvails_9 = ((MR_Word) (conv3_RevIntAvails_9));
  RevImpAvails_10 = ((MR_Word) (conv2_RevImpAvails_10));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_9, IntAvails_7);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_10, ImpAvails_8);
}

static void MR_CALL 
parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RevIntAvails_14;
  MR_Word conv0_STATE_VARIABLE_RevImpAvails_16;

  parse_tree__item_util__section_import_and_or_use_map_to_item_avails_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_14));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_16));
}

void MR_CALL 
parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0(
  MR_Word ImportUseMap_4,
  MR_Word * IntAvails_5,
  MR_Word * ImpAvails_6)
{
  MR_Word RevIntAvails_7;
  MR_Word RevImpAvails_8;
  MR_Box conv3_RevIntAvails_7;
  MR_Box conv2_RevImpAvails_8;

  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[13]), ImportUseMap_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_8);
  RevIntAvails_7 = ((MR_Word) (conv3_RevIntAvails_7));
  RevImpAvails_8 = ((MR_Word) (conv2_RevImpAvails_8));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_7, IntAvails_5);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_8, ImpAvails_6);
}

static void MR_CALL 
parse_tree__item_util__section_use_map_to_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RevIntAvails_14;
  MR_Word conv0_STATE_VARIABLE_RevImpAvails_16;

  parse_tree__item_util__section_use_map_to_item_avails_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_14));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_16));
}

void MR_CALL 
parse_tree__item_util__section_use_map_to_item_avails_3_p_0(
  MR_Word UseMap_4,
  MR_Word * IntAvails_5,
  MR_Word * ImpAvails_6)
{
  MR_Word RevIntAvails_7;
  MR_Word RevImpAvails_8;
  MR_Box conv3_RevIntAvails_7;
  MR_Box conv2_RevImpAvails_8;

  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[12]), UseMap_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_8);
  RevIntAvails_7 = ((MR_Word) (conv3_RevIntAvails_7));
  RevImpAvails_8 = ((MR_Word) (conv2_RevImpAvails_8));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_7, IntAvails_5);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_8, ImpAvails_6);
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeImplicitUse_4;

  parse_tree__item_util__wrap_section_import_and_or_use_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_MaybeImplicitUse_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeImplicitUse_4));
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(
  MR_Word SectionImportUseMap_3,
  MR_Word * ImportUseMap_4)
{
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[11]), SectionImportUseMap_3, ImportUseMap_4);
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_UseMap_15;
  MR_Word conv15_STATE_VARIABLE_Specs_17;

  parse_tree__item_util__error_if_use_for_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_UseMap_15, ((MR_Word) (wrapper_arg_4)), &conv15_STATE_VARIABLE_Specs_17);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_UseMap_15));
  *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_17));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_UseMap_20;
  MR_Word conv10_STATE_VARIABLE_Specs_22;

  parse_tree__item_util__record_imp_use_only_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_UseMap_20, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Specs_22);
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_UseMap_20));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_UseMap_15;
  MR_Word conv6_STATE_VARIABLE_Specs_17;

  parse_tree__item_util__record_int_use_only_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_UseMap_15, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Specs_17);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_UseMap_15));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_17));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadSortedContext_12;
  MR_Word conv3_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadSortedContext_12;
  MR_Word conv0_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

void MR_CALL 
parse_tree__item_util__classify_int_imp_use_modules_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntUseContextsMap_8,
  MR_Word ImpUseContextsMap_9,
  MR_Word * STATE_VARIABLE_UseMap_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_bool succeeded;
  MR_Word IntUseMap_12;
  MR_Word ImpUseMap_13;
  MR_Word STATE_VARIABLE_Specs_18_18;
  MR_Word STATE_VARIABLE_Specs_22_22;
  MR_Word STATE_VARIABLE_UseMap_25_25;
  MR_Word STATE_VARIABLE_UseMap_27_27;
  MR_Word STATE_VARIABLE_Specs_28_28;
  MR_Word STATE_VARIABLE_UseMap_30_30;
  MR_Word STATE_VARIABLE_Specs_31_31;
  MR_Word STATE_VARIABLE_UseMap_32_32;
  MR_Word STATE_VARIABLE_Specs_33_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Box conv2_STATE_VARIABLE_Specs_18_18;
  MR_Box conv5_STATE_VARIABLE_Specs_22_22;
  MR_Box conv9_STATE_VARIABLE_UseMap_27_27;
  MR_Box conv8_STATE_VARIABLE_Specs_28_28;
  MR_Box conv13_STATE_VARIABLE_UseMap_30_30;
  MR_Box conv12_STATE_VARIABLE_Specs_31_31;
  MR_Word Use_58;
  MR_Word STATE_VARIABLE_UseMap_16_61;
  MR_Box conv14_Use_58;
  MR_Box conv18_STATE_VARIABLE_UseMap_14;
  MR_Box conv17_STATE_VARIABLE_Specs_16;

  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_6[4]), IntUseContextsMap_8, &IntUseMap_12, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_18_18);
  STATE_VARIABLE_Specs_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_18_18));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_6[5]), ImpUseContextsMap_9, &ImpUseMap_13, ((MR_Box) (STATE_VARIABLE_Specs_18_18)), &conv5_STATE_VARIABLE_Specs_22_22);
  STATE_VARIABLE_Specs_22_22 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_22_22));
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), &STATE_VARIABLE_UseMap_25_25);
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[9]), IntUseMap_12, ((MR_Box) (STATE_VARIABLE_UseMap_25_25)), &conv9_STATE_VARIABLE_UseMap_27_27, ((MR_Box) (STATE_VARIABLE_Specs_22_22)), &conv8_STATE_VARIABLE_Specs_28_28);
  STATE_VARIABLE_UseMap_27_27 = ((MR_Word) (conv9_STATE_VARIABLE_UseMap_27_27));
  STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_28_28));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[10]), ImpUseMap_13, ((MR_Box) (STATE_VARIABLE_UseMap_27_27)), &conv13_STATE_VARIABLE_UseMap_30_30, ((MR_Box) (STATE_VARIABLE_Specs_28_28)), &conv12_STATE_VARIABLE_Specs_31_31);
  STATE_VARIABLE_UseMap_30_30 = ((MR_Word) (conv13_STATE_VARIABLE_UseMap_30_30));
  STATE_VARIABLE_Specs_31_31 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_31_31));
  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), &conv14_Use_58, STATE_VARIABLE_UseMap_30_30, &STATE_VARIABLE_UseMap_16_61);
  if (succeeded)
  {
    Use_58 = ((MR_Word) (conv14_Use_58));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Pieces_59;
    MR_Word Spec_60;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_85;

    STATE_VARIABLE_UseMap_32_32 = STATE_VARIABLE_UseMap_16_61;
    {
      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_69, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_67 = parse_tree__error_spec__color_as_subject_1_f_0(Var_68);
    Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[213])));
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[199])), Var_76);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_71);
    Pieces_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[212])), Var_66);
    if (((MR_tag((MR_Word) Use_58)) == (MR_Integer) 1))
      Var_85 = ((MR_Word) ((MR_hl_field(1, Use_58, (MR_Integer) 0))));
    else
      Var_85 = ((MR_Word) ((MR_hl_field(3, Use_58, (MR_Integer) 1))));
    {
      Spec_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.error_if_use_for_self\'/5"));
      MR_hl_field(0, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_60, 3) = ((MR_Box) (Var_85));
      MR_hl_field(0, Spec_60, 4) = ((MR_Box) (Pieces_59));
    }
    {
      STATE_VARIABLE_Specs_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_33_33, 0) = ((MR_Box) (Spec_60));
      MR_hl_field(1, STATE_VARIABLE_Specs_33_33, 1) = ((MR_Box) (STATE_VARIABLE_Specs_31_31));
    }
  }
  else
  {
    STATE_VARIABLE_Specs_33_33 = STATE_VARIABLE_Specs_31_31;
    STATE_VARIABLE_UseMap_32_32 = STATE_VARIABLE_UseMap_30_30;
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_3[5]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__item_util__classify_int_imp_use_modules_6_p_0_5));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (ModuleName_7));
  }
  Var_35 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_7);
  mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), Var_34, Var_35, ((MR_Box) (STATE_VARIABLE_UseMap_32_32)), &conv18_STATE_VARIABLE_UseMap_14, ((MR_Box) (STATE_VARIABLE_Specs_33_33)), &conv17_STATE_VARIABLE_Specs_16);
  *STATE_VARIABLE_UseMap_14 = ((MR_Word) (conv18_STATE_VARIABLE_UseMap_14));
  *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv17_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_STATE_VARIABLE_SectionImportOrUseMap_19;
  MR_Word conv26_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__warn_if_avail_for_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_STATE_VARIABLE_SectionImportOrUseMap_19, ((MR_Word) (wrapper_arg_4)), &conv26_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_SectionImportOrUseMap_19));
  *wrapper_arg_5 = ((MR_Box) (conv26_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_STATE_VARIABLE_ImportUseMap_28;
  MR_Word conv22_STATE_VARIABLE_Specs_30;

  parse_tree__item_util__record_imp_use_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv23_STATE_VARIABLE_ImportUseMap_28, ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_Specs_30);
  *wrapper_arg_4 = ((MR_Box) (conv23_STATE_VARIABLE_ImportUseMap_28));
  *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_STATE_VARIABLE_ImportUseMap_24;
  MR_Word conv18_STATE_VARIABLE_Specs_26;

  parse_tree__item_util__record_imp_import_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv19_STATE_VARIABLE_ImportUseMap_24, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Specs_26);
  *wrapper_arg_4 = ((MR_Box) (conv19_STATE_VARIABLE_ImportUseMap_24));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Specs_26));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_ImportUseMap_24;
  MR_Word conv14_STATE_VARIABLE_Specs_26;

  parse_tree__item_util__record_int_use_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_ImportUseMap_24, ((MR_Word) (wrapper_arg_5)), &conv14_STATE_VARIABLE_Specs_26);
  *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_ImportUseMap_24));
  *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_26));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_ImportUseMap_9;

  parse_tree__item_util__record_int_import_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_ImportUseMap_9);
  *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_ImportUseMap_9));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadSortedContext_12;
  MR_Word conv9_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadSortedContext_12;
  MR_Word conv6_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadSortedContext_12;
  MR_Word conv3_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadSortedContext_12;
  MR_Word conv0_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntAvails_8,
  MR_Word ImpAvails_9,
  MR_Word * STATE_VARIABLE_ImportUseMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word IntImportContextsMap_12;
  MR_Word IntUseContextsMap_13;
  MR_Word ImpImportContextsMap_14;
  MR_Word ImpUseContextsMap_15;
  MR_Word IntImportMap_16;
  MR_Word IntUseMap_17;
  MR_Word ImpImportMap_18;
  MR_Word ImpUseMap_19;
  MR_Word STATE_VARIABLE_Specs_24_24;
  MR_Word STATE_VARIABLE_Specs_28_28;
  MR_Word STATE_VARIABLE_Specs_32_32;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_ImportUseMap_39_39;
  MR_Word STATE_VARIABLE_ImportUseMap_41_41;
  MR_Word STATE_VARIABLE_ImportUseMap_43_43;
  MR_Word STATE_VARIABLE_Specs_44_44;
  MR_Word STATE_VARIABLE_ImportUseMap_46_46;
  MR_Word STATE_VARIABLE_Specs_47_47;
  MR_Word STATE_VARIABLE_ImportUseMap_49_49;
  MR_Word STATE_VARIABLE_Specs_50_50;
  MR_Word STATE_VARIABLE_ImportUseMap_51_51;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Box conv2_STATE_VARIABLE_Specs_24_24;
  MR_Box conv5_STATE_VARIABLE_Specs_28_28;
  MR_Box conv8_STATE_VARIABLE_Specs_32_32;
  MR_Box conv11_STATE_VARIABLE_Specs_36_36;
  MR_Box conv13_STATE_VARIABLE_ImportUseMap_41_41;
  MR_Box conv17_STATE_VARIABLE_ImportUseMap_43_43;
  MR_Box conv16_STATE_VARIABLE_Specs_44_44;
  MR_Box conv21_STATE_VARIABLE_ImportUseMap_46_46;
  MR_Box conv20_STATE_VARIABLE_Specs_47_47;
  MR_Box conv25_STATE_VARIABLE_ImportUseMap_49_49;
  MR_Box conv24_STATE_VARIABLE_Specs_50_50;
  MR_Box conv29_STATE_VARIABLE_ImportUseMap_20;
  MR_Box conv28_STATE_VARIABLE_Specs_22;

  Var_85 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_86 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(IntAvails_8, Var_85, &IntImportContextsMap_12, Var_86, &IntUseContextsMap_13);
  Var_89 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_90 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(ImpAvails_9, Var_89, &ImpImportContextsMap_14, Var_90, &ImpUseContextsMap_15);
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_6[0]), IntImportContextsMap_12, &IntImportMap_16, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv2_STATE_VARIABLE_Specs_24_24);
  STATE_VARIABLE_Specs_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_24_24));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_6[1]), IntUseContextsMap_13, &IntUseMap_17, ((MR_Box) (STATE_VARIABLE_Specs_24_24)), &conv5_STATE_VARIABLE_Specs_28_28);
  STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_28_28));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_6[2]), ImpImportContextsMap_14, &ImpImportMap_18, ((MR_Box) (STATE_VARIABLE_Specs_28_28)), &conv8_STATE_VARIABLE_Specs_32_32);
  STATE_VARIABLE_Specs_32_32 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_32_32));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_6[3]), ImpUseContextsMap_15, &ImpUseMap_19, ((MR_Box) (STATE_VARIABLE_Specs_32_32)), &conv11_STATE_VARIABLE_Specs_36_36);
  STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_36_36));
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), &STATE_VARIABLE_ImportUseMap_39_39);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[5]), IntImportMap_16, ((MR_Box) (STATE_VARIABLE_ImportUseMap_39_39)), &conv13_STATE_VARIABLE_ImportUseMap_41_41);
  STATE_VARIABLE_ImportUseMap_41_41 = ((MR_Word) (conv13_STATE_VARIABLE_ImportUseMap_41_41));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[6]), IntUseMap_17, ((MR_Box) (STATE_VARIABLE_ImportUseMap_41_41)), &conv17_STATE_VARIABLE_ImportUseMap_43_43, ((MR_Box) (STATE_VARIABLE_Specs_36_36)), &conv16_STATE_VARIABLE_Specs_44_44);
  STATE_VARIABLE_ImportUseMap_43_43 = ((MR_Word) (conv17_STATE_VARIABLE_ImportUseMap_43_43));
  STATE_VARIABLE_Specs_44_44 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_44_44));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[7]), ImpImportMap_18, ((MR_Box) (STATE_VARIABLE_ImportUseMap_43_43)), &conv21_STATE_VARIABLE_ImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_Specs_44_44)), &conv20_STATE_VARIABLE_Specs_47_47);
  STATE_VARIABLE_ImportUseMap_46_46 = ((MR_Word) (conv21_STATE_VARIABLE_ImportUseMap_46_46));
  STATE_VARIABLE_Specs_47_47 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_47_47));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[8]), ImpUseMap_19, ((MR_Box) (STATE_VARIABLE_ImportUseMap_46_46)), &conv25_STATE_VARIABLE_ImportUseMap_49_49, ((MR_Box) (STATE_VARIABLE_Specs_47_47)), &conv24_STATE_VARIABLE_Specs_50_50);
  STATE_VARIABLE_ImportUseMap_49_49 = ((MR_Word) (conv25_STATE_VARIABLE_ImportUseMap_49_49));
  STATE_VARIABLE_Specs_50_50 = ((MR_Word) (conv24_STATE_VARIABLE_Specs_50_50));
  parse_tree__item_util__warn_if_avail_for_self_5_p_0(ModuleName_7, STATE_VARIABLE_ImportUseMap_49_49, &STATE_VARIABLE_ImportUseMap_51_51, STATE_VARIABLE_Specs_50_50, &STATE_VARIABLE_Specs_52_52);
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_3[3]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_6_p_0_9));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (ModuleName_7));
  }
  Var_54 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_7);
  mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), Var_53, Var_54, ((MR_Box) (STATE_VARIABLE_ImportUseMap_51_51)), &conv29_STATE_VARIABLE_ImportUseMap_20, ((MR_Box) (STATE_VARIABLE_Specs_52_52)), &conv28_STATE_VARIABLE_Specs_22);
  *STATE_VARIABLE_ImportUseMap_20 = ((MR_Word) (conv29_STATE_VARIABLE_ImportUseMap_20));
  *STATE_VARIABLE_Specs_22 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
parse_tree__item_util__warn_if_avail_for_self_5_p_0(
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_15,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word ImportOrUse_9;
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_19_19;
  MR_Box conv0_ImportOrUse_9;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_6)), &conv0_ImportOrUse_9, STATE_VARIABLE_SectionImportOrUseMap_0_15, &STATE_VARIABLE_SectionImportOrUseMap_19_19);
  if (succeeded)
  {
    ImportOrUse_9 = ((MR_Word) (conv0_ImportOrUse_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String DeclName_10;
    MR_Word Context_11;
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_50;

    *STATE_VARIABLE_SectionImportOrUseMap_16 = STATE_VARIABLE_SectionImportOrUseMap_19_19;
    switch (MR_tag((MR_Word) ImportOrUse_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Context_11 = ((MR_Word) ((MR_hl_field(0, ImportOrUse_9, (MR_Integer) 0))));
          DeclName_10 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 1:
        {
          Context_11 = ((MR_Word) ((MR_hl_field(1, ImportOrUse_9, (MR_Integer) 0))));
          DeclName_10 = (MR_String) "use_module";
        }
        break;
      case (MR_Integer) 2:
        {
          Context_11 = ((MR_Word) ((MR_hl_field(2, ImportOrUse_9, (MR_Integer) 0))));
          DeclName_10 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ImportOrUse_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Context_11 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_9, (MR_Integer) 1))));
              DeclName_10 = (MR_String) "use_module";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ContextA_55 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_9, (MR_Integer) 1))));
              MR_Word ContextB_56 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_9, (MR_Integer) 2))));
              MR_Word Var_59;

              mercury__term_context____Compare____term_context_0_0(&Var_59, ContextB_56, ContextA_55);
              succeeded = ((MR_Integer) 1 == Var_59);
              if (succeeded)
              {
                Context_11 = ContextB_56;
                DeclName_10 = (MR_String) "import_module";
              }
              else
              {
                Context_11 = ContextA_55;
                DeclName_10 = (MR_String) "use_module";
              }
            }
            break;
        }
        break;
    }
    {
      Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_27, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (DeclName_10));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[201])));
    }
    Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_36);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[137])));
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[199])), Var_34);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__item_util_scalar_common_2[197])), Var_24);
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_13, 0) = ((MR_Box) (Context_11));
      MR_hl_field(0, Msg_13, 1) = ((MR_Box) (Pieces_12));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.warn_if_avail_for_self\'/5"));
      MR_hl_field(3, Spec_14, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Spec_14, 3) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(3, Spec_14, 4) = ((MR_Box) (Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
    *STATE_VARIABLE_SectionImportOrUseMap_16 = STATE_VARIABLE_SectionImportOrUseMap_0_15;
  }
}

void MR_CALL 
parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportMap_0_2,
  MR_Word * STATE_VARIABLE_ImportMap_3,
  MR_Word STATE_VARIABLE_UseMap_0_4,
  MR_Word * STATE_VARIABLE_UseMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UseMap_5 = STATE_VARIABLE_UseMap_0_4;
      *STATE_VARIABLE_ImportMap_3 = STATE_VARIABLE_ImportMap_0_2;
    }
    else
    {
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImportMap_25_25;
      MR_Word STATE_VARIABLE_UseMap_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_UseMap_0_4;

      if (((MR_tag((MR_Word) Avail_12)) == (MR_Integer) 0))
      {
        MR_Word ModuleName_16;
        MR_Word Context_17;
        MR_Word Var_24 = (MR_Word) ((MR_Word) (Avail_12));

        ModuleName_16 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
        Context_17 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
        mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_16)), ((MR_Box) (Context_17)), STATE_VARIABLE_ImportMap_0_2, &STATE_VARIABLE_ImportMap_25_25);
        STATE_VARIABLE_UseMap_27_27 = STATE_VARIABLE_UseMap_0_4;
      }
      else
      {
        MR_Word Var_26 = (MR_Word) (MR_body((MR_Word) (Avail_12), (MR_Integer) 1));
        MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));

        mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_30)), ((MR_Box) (Context_31)), STATE_VARIABLE_UseMap_0_4, &STATE_VARIABLE_UseMap_27_27);
        STATE_VARIABLE_ImportMap_25_25 = STATE_VARIABLE_ImportMap_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_13;
      next_value_of_STATE_VARIABLE_ImportMap_0_2 = STATE_VARIABLE_ImportMap_25_25;
      next_value_of_STATE_VARIABLE_UseMap_0_4 = STATE_VARIABLE_UseMap_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportMap_0_2 = next_value_of_STATE_VARIABLE_ImportMap_0_2;
      STATE_VARIABLE_UseMap_0_4 = next_value_of_STATE_VARIABLE_UseMap_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__item_util__get_uses_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Use_8,
  MR_Word STATE_VARIABLE_IntUses_0_12,
  MR_Word * STATE_VARIABLE_IntUses_13,
  MR_Word STATE_VARIABLE_ImpUses_0_14,
  MR_Word * STATE_VARIABLE_ImpUses_15)
{
  if (((MR_tag((MR_Word) Use_8)) == (MR_Integer) 1))
  {
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_IntUses_0_12, STATE_VARIABLE_IntUses_13);
    *STATE_VARIABLE_ImpUses_15 = STATE_VARIABLE_ImpUses_0_14;
  }
  else
  {
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImpUses_0_14, STATE_VARIABLE_ImpUses_15);
    *STATE_VARIABLE_IntUses_13 = STATE_VARIABLE_IntUses_0_12;
  }
}

void MR_CALL 
parse_tree__item_util__get_imports_uses_10_p_0(
  MR_Word ModuleName_11,
  MR_Word ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_IntImports_0_20,
  MR_Word * STATE_VARIABLE_IntImports_21,
  MR_Word STATE_VARIABLE_ImpImports_0_22,
  MR_Word * STATE_VARIABLE_ImpImports_23,
  MR_Word STATE_VARIABLE_IntUses_0_24,
  MR_Word * STATE_VARIABLE_IntUses_25,
  MR_Word STATE_VARIABLE_ImpUses_0_26,
  MR_Word * STATE_VARIABLE_ImpUses_27)
{
  switch (MR_tag((MR_Word) ImportAndOrUse_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_IntImports_0_20, STATE_VARIABLE_IntImports_21);
        *STATE_VARIABLE_ImpImports_23 = STATE_VARIABLE_ImpImports_0_22;
        *STATE_VARIABLE_IntUses_25 = STATE_VARIABLE_IntUses_0_24;
        *STATE_VARIABLE_ImpUses_27 = STATE_VARIABLE_ImpUses_0_26;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_IntUses_0_24, STATE_VARIABLE_IntUses_25);
        *STATE_VARIABLE_IntImports_21 = STATE_VARIABLE_IntImports_0_20;
        *STATE_VARIABLE_ImpImports_23 = STATE_VARIABLE_ImpImports_0_22;
        *STATE_VARIABLE_ImpUses_27 = STATE_VARIABLE_ImpUses_0_26;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_ImpImports_0_22, STATE_VARIABLE_ImpImports_23);
        *STATE_VARIABLE_IntImports_21 = STATE_VARIABLE_IntImports_0_20;
        *STATE_VARIABLE_IntUses_25 = STATE_VARIABLE_IntUses_0_24;
        *STATE_VARIABLE_ImpUses_27 = STATE_VARIABLE_ImpUses_0_26;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImportAndOrUse_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_ImpUses_0_26, STATE_VARIABLE_ImpUses_27);
            *STATE_VARIABLE_IntImports_21 = STATE_VARIABLE_IntImports_0_20;
            *STATE_VARIABLE_ImpImports_23 = STATE_VARIABLE_ImpImports_0_22;
            *STATE_VARIABLE_IntUses_25 = STATE_VARIABLE_IntUses_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_IntUses_0_24, STATE_VARIABLE_IntUses_25);
            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_ImpImports_0_22, STATE_VARIABLE_ImpImports_23);
            *STATE_VARIABLE_IntImports_21 = STATE_VARIABLE_IntImports_0_20;
            *STATE_VARIABLE_ImpUses_27 = STATE_VARIABLE_ImpUses_0_26;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__item_util__add_only_int_include_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_IntInclMap_0_11,
  MR_Word * STATE_VARIABLE_IntInclMap_12)
{
  MR_Word Section_8 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, InclInfo_6, (MR_Integer) 1))));

  switch (Section_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_IntInclMap_12 = STATE_VARIABLE_IntInclMap_0_11;
      break;
    case (MR_Integer) 0:
      {
        MR_Word IntInclInfo_10;

        {
          IntInclInfo_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IntInclInfo_10, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, IntInclInfo_10, 1) = ((MR_Box) (Context_9));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (IntInclInfo_10)), STATE_VARIABLE_IntInclMap_0_11, STATE_VARIABLE_IntInclMap_12);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__item_util__include_map_to_int_imp_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_IntModules_14;
  MR_Word conv0_STATE_VARIABLE_ImpModules_16;

  parse_tree__item_util__include_map_to_int_imp_modules_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_IntModules_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ImpModules_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_IntModules_14));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ImpModules_16));
}

void MR_CALL 
parse_tree__item_util__include_map_to_int_imp_modules_3_p_0(
  MR_Word IncludeMap_4,
  MR_Word * IntModules_5,
  MR_Word * ImpModules_6)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv3_IntModules_5;
  MR_Box conv2_ImpModules_6;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_9 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[4]), IncludeMap_4, ((MR_Box) (Var_8)), &conv3_IntModules_5, ((MR_Box) (Var_9)), &conv2_ImpModules_6);
  *IntModules_5 = ((MR_Word) (conv3_IntModules_5));
  *ImpModules_6 = ((MR_Word) (conv2_ImpModules_6));
}

static void MR_CALL 
parse_tree__item_util__classify_include_modules_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_InclMap_19;
  MR_Word conv4_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__classify_include_module_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_InclMap_19, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_InclMap_19));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__item_util__classify_include_modules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_InclMap_19;
  MR_Word conv0_STATE_VARIABLE_Specs_21;

  parse_tree__item_util__classify_include_module_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_InclMap_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_InclMap_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

void MR_CALL 
parse_tree__item_util__classify_include_modules_5_p_0(
  MR_Word IntIncludes_6,
  MR_Word ImpIncludes_7,
  MR_Word * STATE_VARIABLE_InclMap_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  MR_Word STATE_VARIABLE_InclMap_13_13;
  MR_Word STATE_VARIABLE_InclMap_15_15;
  MR_Word STATE_VARIABLE_Specs_16_16;
  MR_Box conv3_STATE_VARIABLE_InclMap_15_15;
  MR_Box conv2_STATE_VARIABLE_Specs_16_16;
  MR_Box conv7_STATE_VARIABLE_InclMap_10;
  MR_Box conv6_STATE_VARIABLE_Specs_12;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), &STATE_VARIABLE_InclMap_13_13);
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_4[0]), IntIncludes_6, ((MR_Box) (STATE_VARIABLE_InclMap_13_13)), &conv3_STATE_VARIABLE_InclMap_15_15, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv2_STATE_VARIABLE_Specs_16_16);
  STATE_VARIABLE_InclMap_15_15 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_15_15));
  STATE_VARIABLE_Specs_16_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_16_16));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_4[1]), ImpIncludes_7, ((MR_Box) (STATE_VARIABLE_InclMap_15_15)), &conv7_STATE_VARIABLE_InclMap_10, ((MR_Box) (STATE_VARIABLE_Specs_16_16)), &conv6_STATE_VARIABLE_Specs_12);
  *STATE_VARIABLE_InclMap_10 = ((MR_Word) (conv7_STATE_VARIABLE_InclMap_10));
  *STATE_VARIABLE_Specs_12 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_12));
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____imp_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__item_util____Unify____imp_import_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util____Compare____imp_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__item_util____Compare____imp_import_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____imp_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__item_util____Unify____imp_use_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util____Compare____imp_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__item_util____Compare____imp_use_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____int_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__item_util____Unify____int_import_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util____Compare____int_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__item_util____Compare____int_import_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____int_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__item_util____Unify____int_use_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util____Compare____int_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__item_util____Compare____int_use_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____maybe_include_implicit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__item_util____Unify____maybe_include_implicit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util____Compare____maybe_include_implicit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__item_util____Compare____maybe_include_implicit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____module_name_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__item_util____Unify____module_name_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__item_util____Compare____module_name_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__item_util____Compare____module_name_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__item_util__init(void)
{
}

void mercury__parse_tree__item_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_imp_import_context_map_0);
	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_imp_use_context_map_0);
	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_int_import_context_map_0);
	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_int_use_context_map_0);
	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_maybe_include_implicit_0);
	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_name_context_0);
}

void mercury__parse_tree__item_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__item_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.item_util.
