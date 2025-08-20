/*
** Automatically generated from `convert_import_use.m'
** by the Mercury compiler,
** version rotd-2025-08-20
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


// :- module parse_tree.convert_import_use.
// :- implementation.

/*
INIT mercury__parse_tree__convert_import_use__init
ENDINIT
*/

#include "parse_tree.convert_import_use.mih"


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
#include "multi_map.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__convert_import_use__type_ctor_info_import_use_line_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_imp_import_context_map_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0;

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_import_context_map_0;

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_imp_use_context_map_0[1];

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_use_context_map_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_import_use__list__ti_list_1parse_tree__convert_import_use__type_ctor_info_import_use_line_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__convert_import_use__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1parse_tree__convert_import_use__type_ctor_info_import_use_line_0;

static const MR_PseudoTypeInfo parse_tree__convert_import_use__parse_tree__convert_import_use__field_types_import_use_line_0_0[3];

static const MR_DuFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__du_functor_desc_import_use_line_0_0;

static const MR_DuFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__du_stag_ordered_import_use_line_0_0[1];

static const MR_DuPtagLayout parse_tree__convert_import_use__parse_tree__convert_import_use__du_ptag_ordered_import_use_line_0[1];

static const MR_DuFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__du_name_ordered_import_use_line_0[1];

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_import_use_line_0[1];

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_int_import_context_map_0[1];

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_import_context_map_0;

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_int_use_context_map_0[1];

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_use_context_map_0;

static const MR_EnumFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_0;

static const MR_EnumFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_1;

static const MR_EnumFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__enum_ordinal_ordered_maybe_include_implicit_0[2];

static const MR_EnumFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__enum_name_ordered_maybe_include_implicit_0[2];

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_maybe_include_implicit_0[2];

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__convert_import_use__acc_avail_with_context_5_p_0(
  MR_Word ImportOrUse_6,
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12);

static void MR_CALL 
parse_tree__convert_import_use__use_map_to_item_avails_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12);

static void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_acc_12_p_0(
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
parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_12_p_0(
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
parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_acc_7_p_0(
  MR_Word IncludeImplicit_8,
  MR_Word ModuleName_9,
  MR_Word ImportAndOrUse_10,
  MR_Word STATE_VARIABLE_RevIntAvails_0_26,
  MR_Word * STATE_VARIABLE_RevIntAvails_27,
  MR_Word STATE_VARIABLE_RevImpAvails_0_28,
  MR_Word * STATE_VARIABLE_RevImpAvails_29);

static void MR_CALL 
parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportAndOrUse_8,
  MR_Word STATE_VARIABLE_RevIntAvails_0_13,
  MR_Word * STATE_VARIABLE_RevIntAvails_14,
  MR_Word STATE_VARIABLE_RevImpAvails_0_15,
  MR_Word * STATE_VARIABLE_RevImpAvails_16);

static void MR_CALL 
parse_tree__convert_import_use__section_use_map_to_item_avails_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Use_8,
  MR_Word STATE_VARIABLE_RevIntAvails_0_13,
  MR_Word * STATE_VARIABLE_RevIntAvails_14,
  MR_Word STATE_VARIABLE_RevImpAvails_0_15,
  MR_Word * STATE_VARIABLE_RevImpAvails_16);

static void MR_CALL 
parse_tree__convert_import_use__wrap_section_import_and_or_use_2_p_0(
  MR_Word SectionImportUse_3,
  MR_Word * MaybeImplicitUse_4);

static void MR_CALL 
parse_tree__convert_import_use__generate_unsorted_avail_block_warnings_for_file_4_p_0(
  MR_String FileName_5,
  MR_Word ImportUseLines_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__convert_import_use__generate_unsorted_avail_block_warnings_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word PrevImportUseLine_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_Word MR_CALL 
parse_tree__convert_import_use__module_names_are_in_order_2_f_0(
  MR_String PrevModuleNameStr_4,
  MR_String CurModuleNameStr_5);

static MR_Word MR_CALL 
parse_tree__convert_import_use__module_names_are_in_numerical_order_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__convert_import_use__error_if_use_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_UseMap_0_15,
  MR_Word * STATE_VARIABLE_UseMap_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__convert_import_use__warn_if_avail_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_19,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__convert_import_use__record_imp_use_only_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_UseMap_0_20,
  MR_Word * STATE_VARIABLE_UseMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__convert_import_use__record_int_use_only_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_UseMap_0_11,
  MR_Word * STATE_VARIABLE_UseMap_12);

static void MR_CALL 
parse_tree__convert_import_use__record_imp_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_ImportUseMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
parse_tree__convert_import_use__record_imp_import_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_24,
  MR_Word * STATE_VARIABLE_ImportUseMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__convert_import_use__record_int_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_24,
  MR_Word * STATE_VARIABLE_ImportUseMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__convert_import_use__record_int_import_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_ImportUseMap_9);

static void MR_CALL 
parse_tree__convert_import_use__report_duplicate_avail_context_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word PrevContext_11,
  MR_Word DuplicateContext_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word OoMContexts_11,
  MR_Word * HeadSortedContext_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__convert_import_use__acc_avails_with_contexts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__convert_import_use__use_map_to_item_avails_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0_1(
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
parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0_1(
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
parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__section_use_map_to_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__convert_import_use__build_import_use_file_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_FileMap_0_2,
  MR_Word * STATE_VARIABLE_FileMap_3);

static void MR_CALL 
parse_tree__convert_import_use__warn_if_avail_for_self_5_p_0(
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_16,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____imp_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____imp_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____imp_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____imp_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____int_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____int_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____int_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____int_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____maybe_include_implicit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____maybe_include_implicit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____module_name_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__convert_import_use____Compare____module_name_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_1[102][2];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_2[17][3];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_4[3][10];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_5[7][5];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_6[4][7];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_7[6][9];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_8[2][15];

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_9[1][8];




static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_1[102][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The previous"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration was here."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the interface section is"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "redundant,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the same section."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for the same module"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "given the"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[17])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[19])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the implementation section is"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the interface section."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[17])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the same module in the same section."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the same module in the interface section."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration is here."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for itself!"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for its own ancestor module,"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[69])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[71])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is on the same line"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as the preceding"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is out of order"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with respect to the preceding"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[51])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[17])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[54])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[54])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[17])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[98])))
  },
  /* row 100 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[79])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__convert_import_use_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_2[17][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_6[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_6[1])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_6[2])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[2])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_5[6])),
    ((MR_Box) (parse_tree__convert_import_use__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[4])),
    ((MR_Box) (parse_tree__convert_import_use__section_use_map_to_item_avails_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[5])),
    ((MR_Box) (parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_8[0])),
    ((MR_Box) (parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_8[1])),
    ((MR_Box) (parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_6[3])),
    ((MR_Box) (parse_tree__convert_import_use__use_map_to_item_avails_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 223U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 186U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 238U) },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_4[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_import_use__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_maybe_include_implicit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
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
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_5[7][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[0])),
    ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_6[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__convert_import_use__type_ctor_info_import_use_line_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_import_use__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_7[6][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_8[2][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__convert_import_use_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__one_or_more__pti_one_or_more_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__convert_import_use__type_ctor_info_import_use_line_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_section_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__convert_import_use__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__convert_import_use__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_imp_import_context_map_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_import_context_map_0 = {
  (MR_String) "imp_import_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_imp_import_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__convert_import_use____Unify____imp_import_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____imp_import_context_map_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "imp_import_context_map",
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_import_context_map_0 },
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_import_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_imp_import_context_map_0,

};

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_imp_use_context_map_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_use_context_map_0 = {
  (MR_String) "imp_use_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_imp_use_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__convert_import_use____Unify____imp_use_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____imp_use_context_map_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "imp_use_context_map",
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_use_context_map_0 },
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_imp_use_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_imp_use_context_map_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__convert_import_use__list__ti_list_1parse_tree__convert_import_use__type_ctor_info_import_use_line_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__convert_import_use__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1parse_tree__convert_import_use__type_ctor_info_import_use_line_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__convert_import_use__list__ti_list_1parse_tree__convert_import_use__type_ctor_info_import_use_line_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_file_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__convert_import_use____Unify____import_use_file_map_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____import_use_file_map_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "import_use_file_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1parse_tree__convert_import_use__type_ctor_info_import_use_line_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__convert_import_use__parse_tree__convert_import_use__field_types_import_use_line_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__du_functor_desc_import_use_line_0_0 = {
  (MR_String) "import_use_line",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__convert_import_use__parse_tree__convert_import_use__field_types_import_use_line_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__du_stag_ordered_import_use_line_0_0[1] = { &parse_tree__convert_import_use__parse_tree__convert_import_use__du_functor_desc_import_use_line_0_0 };

static const MR_DuPtagLayout parse_tree__convert_import_use__parse_tree__convert_import_use__du_ptag_ordered_import_use_line_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__convert_import_use__parse_tree__convert_import_use__du_stag_ordered_import_use_line_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__du_name_ordered_import_use_line_0[1] = { &parse_tree__convert_import_use__parse_tree__convert_import_use__du_functor_desc_import_use_line_0_0 };

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_import_use_line_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__convert_import_use____Unify____import_use_line_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____import_use_line_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "import_use_line",
  { parse_tree__convert_import_use__parse_tree__convert_import_use__du_name_ordered_import_use_line_0 },
  { parse_tree__convert_import_use__parse_tree__convert_import_use__du_ptag_ordered_import_use_line_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_import_use_line_0,

};

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_int_import_context_map_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_import_context_map_0 = {
  (MR_String) "int_import_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_int_import_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__convert_import_use____Unify____int_import_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____int_import_context_map_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "int_import_context_map",
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_import_context_map_0 },
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_import_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_int_import_context_map_0,

};

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_int_use_context_map_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_use_context_map_0 = {
  (MR_String) "int_use_context_map",
  (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_int_use_context_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__convert_import_use____Unify____int_use_context_map_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____int_use_context_map_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "int_use_context_map",
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_use_context_map_0 },
  { &parse_tree__convert_import_use__parse_tree__convert_import_use__notag_functor_desc_int_use_context_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_int_use_context_map_0,

};

static const MR_EnumFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_0 = {
  (MR_String) "do_include_implicit",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_1 = {
  (MR_String) "do_not_include_implicit",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__enum_ordinal_ordered_maybe_include_implicit_0[2] = {
  &parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_0,
  &parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__convert_import_use__parse_tree__convert_import_use__enum_name_ordered_maybe_include_implicit_0[2] = {
  &parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_0,
  &parse_tree__convert_import_use__parse_tree__convert_import_use__enum_functor_desc_maybe_include_implicit_0_1
};

static const MR_Integer parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_maybe_include_implicit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_maybe_include_implicit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__convert_import_use____Unify____maybe_include_implicit_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____maybe_include_implicit_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "maybe_include_implicit",
  { parse_tree__convert_import_use__parse_tree__convert_import_use__enum_name_ordered_maybe_include_implicit_0 },
  { parse_tree__convert_import_use__parse_tree__convert_import_use__enum_ordinal_ordered_maybe_include_implicit_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__convert_import_use__parse_tree__convert_import_use__functor_number_map_maybe_include_implicit_0,

};

const MR_TypeCtorInfo_Struct parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_module_name_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__convert_import_use____Unify____module_name_context_0_0_10001)),
  ((MR_Box) (parse_tree__convert_import_use____Compare____module_name_context_0_0_10001)),
  (MR_String) "parse_tree.convert_import_use",
  (MR_String) "module_name_context",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__convert_import_use__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__convert_import_use____Compare____module_name_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____module_name_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_import_use____Compare____maybe_include_implicit_0_0(
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
parse_tree__convert_import_use____Unify____maybe_include_implicit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__convert_import_use____Compare____int_use_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____int_use_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__convert_import_use____Compare____int_import_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____int_import_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_line_0_0(
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
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__convert_import_use____Compare____imp_use_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____imp_use_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__convert_import_use____Compare____imp_import_context_map_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____imp_import_context_map_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use__acc_avail_with_context_5_p_0(
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
parse_tree__convert_import_use__use_map_to_item_avails_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12)
{
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(0, Contexts_6, 0))));
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
parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_acc_12_p_0(
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
    MR_Word Explicit_20 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_14, 0))));

    switch (MR_tag((MR_Word) Explicit_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, Explicit_20, 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_21)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
          *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_58 = ((MR_Word) ((MR_hl_field(1, Explicit_20, 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_58)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
          *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
          *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_59 = ((MR_Word) ((MR_hl_field(2, Explicit_20, 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_59)), STATE_VARIABLE_ImpImports_0_31, STATE_VARIABLE_ImpImports_32);
          *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
          *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Explicit_20, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_60 = ((MR_Word) ((MR_hl_field(3, Explicit_20, 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_60)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
              *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
              *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
              *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
              *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_61 = ((MR_Word) ((MR_hl_field(3, Explicit_20, 1))));

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
    MR_Word Implicit_23 = ((MR_Unsigned) ((MR_hl_field(1, ImportAndOrUse_14, 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_24 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_14, 1))));
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
      MR_Word Explicit_68 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_24, 0))));

      switch (MR_tag((MR_Word) Explicit_68)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_62 = ((MR_Word) ((MR_hl_field(0, Explicit_68, 0))));

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_62)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
            *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
            *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_63 = ((MR_Word) ((MR_hl_field(1, Explicit_68, 0))));

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
            MR_Word Context_64 = ((MR_Word) ((MR_hl_field(2, Explicit_68, 0))));

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
          switch (((MR_Integer) ((MR_hl_field(3, Explicit_68, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_65 = ((MR_Word) ((MR_hl_field(3, Explicit_68, 1))));

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
                MR_Word Context_66 = ((MR_Word) ((MR_hl_field(3, Explicit_68, 1))));

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
parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_12_p_0(
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
    Explicit_20 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_14, 0))));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word MaybeExplicit_22 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_14, 1))));

    succeeded = (MaybeExplicit_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Explicit_20 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_22, 0))));
  }
  if (succeeded)
  {
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Explicit_20)), STATE_VARIABLE_SectionImportAndOrUseMap_0_26, STATE_VARIABLE_SectionImportAndOrUseMap_27);
    switch (MR_tag((MR_Word) Explicit_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, Explicit_20, 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_23)), STATE_VARIABLE_IntImportMap_0_28, STATE_VARIABLE_IntImportMap_29);
          *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
          *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
          *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_43 = ((MR_Word) ((MR_hl_field(1, Explicit_20, 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_43)), STATE_VARIABLE_IntUseMap_0_30, STATE_VARIABLE_IntUseMap_31);
          *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
          *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
          *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_44 = ((MR_Word) ((MR_hl_field(2, Explicit_20, 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_44)), STATE_VARIABLE_ImpImportMap_0_32, STATE_VARIABLE_ImpImportMap_33);
          *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
          *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
          *STATE_VARIABLE_ImpUseMap_35 = STATE_VARIABLE_ImpUseMap_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Explicit_20, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_45 = ((MR_Word) ((MR_hl_field(3, Explicit_20, 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_45)), STATE_VARIABLE_ImpUseMap_0_34, STATE_VARIABLE_ImpUseMap_35);
              *STATE_VARIABLE_IntImportMap_29 = STATE_VARIABLE_IntImportMap_0_28;
              *STATE_VARIABLE_IntUseMap_31 = STATE_VARIABLE_IntUseMap_0_30;
              *STATE_VARIABLE_ImpImportMap_33 = STATE_VARIABLE_ImpImportMap_0_32;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_24 = ((MR_Word) ((MR_hl_field(3, Explicit_20, 1))));
              MR_Word ImpContext_25 = ((MR_Word) ((MR_hl_field(3, Explicit_20, 2))));

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
parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_acc_7_p_0(
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
    MR_Word Explicit_13 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_10, 0))));

    parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_acc_6_p_0(ModuleName_9, Explicit_13, STATE_VARIABLE_RevIntAvails_0_26, STATE_VARIABLE_RevIntAvails_27, STATE_VARIABLE_RevImpAvails_0_28, STATE_VARIABLE_RevImpAvails_29);
  }
  else
  {
    MR_Word Implicit_14 = ((MR_Unsigned) ((MR_hl_field(1, ImportAndOrUse_10, 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_15 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_10, 1))));
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
          MR_Word Explicit_59 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_15, 0))));

          switch (MR_tag((MR_Word) Explicit_59)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_85 = ((MR_Word) ((MR_hl_field(0, Explicit_59, 0))));
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
                MR_Word Context_103 = ((MR_Word) ((MR_hl_field(1, Explicit_59, 0))));
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
                MR_Word Context_105 = ((MR_Word) ((MR_hl_field(2, Explicit_59, 0))));
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
              switch (((MR_Integer) ((MR_hl_field(3, Explicit_59, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_97;
                    MR_Word Context_107 = ((MR_Word) ((MR_hl_field(3, Explicit_59, 1))));
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
                    MR_Word IntContext_87 = ((MR_Word) ((MR_hl_field(3, Explicit_59, 1))));
                    MR_Word ImpContext_88 = ((MR_Word) ((MR_hl_field(3, Explicit_59, 2))));
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
          MR_Word Explicit_56 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_15, 0))));

          parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_acc_6_p_0(ModuleName_9, Explicit_56, STATE_VARIABLE_RevIntAvails_0_26, STATE_VARIABLE_RevIntAvails_27, STATE_VARIABLE_RevImpAvails_0_28, STATE_VARIABLE_RevImpAvails_29);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_acc_6_p_0(
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
        MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, ImportAndOrUse_8, 0))));
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
        MR_Word Context_37 = ((MR_Word) ((MR_hl_field(1, ImportAndOrUse_8, 0))));
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
        MR_Word Context_39 = ((MR_Word) ((MR_hl_field(2, ImportAndOrUse_8, 0))));
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
      switch (((MR_Integer) ((MR_hl_field(3, ImportAndOrUse_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_31;
            MR_Word Context_41 = ((MR_Word) ((MR_hl_field(3, ImportAndOrUse_8, 1))));
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
            MR_Word IntContext_21 = ((MR_Word) ((MR_hl_field(3, ImportAndOrUse_8, 1))));
            MR_Word ImpContext_22 = ((MR_Word) ((MR_hl_field(3, ImportAndOrUse_8, 2))));
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
parse_tree__convert_import_use__section_use_map_to_item_avails_acc_6_p_0(
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
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(1, Use_8, 0))));
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
    MR_Word Context_25 = ((MR_Word) ((MR_hl_field(3, Use_8, 1))));
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
parse_tree__convert_import_use__wrap_section_import_and_or_use_2_p_0(
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
parse_tree__convert_import_use__generate_unsorted_avail_block_warnings_for_file_4_p_0(
  MR_String FileName_5,
  MR_Word ImportUseLines_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  MR_Word SortedImportUseLines_8;

  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0), ImportUseLines_6, &SortedImportUseLines_8);
  if ((SortedImportUseLines_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
  else
  {
    MR_Word FirstLine_9 = ((MR_Word) ((MR_hl_field(1, SortedImportUseLines_8, 0))));
    MR_Word LaterLines_10 = ((MR_Word) ((MR_hl_field(1, SortedImportUseLines_8, 1))));

    parse_tree__convert_import_use__generate_unsorted_avail_block_warnings_5_p_0(FileName_5, FirstLine_9, LaterLines_10, STATE_VARIABLE_Specs_0_11, STATE_VARIABLE_Specs_12);
  }
}

static void MR_CALL 
parse_tree__convert_import_use__generate_unsorted_avail_block_warnings_5_p_0(
  MR_String HeadVar__1_1,
  MR_Word PrevImportUseLine_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word ImportUseLine_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ImportUseLines_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Integer PrevLineNum_16 = ((MR_Integer) ((MR_hl_field(0, PrevImportUseLine_2, 0))));
      MR_String PrevModuleNameStr_17 = ((MR_String) ((MR_hl_field(0, PrevImportUseLine_2, 1))));
      MR_String PrevAvailDecl_18 = ((MR_String) ((MR_hl_field(0, PrevImportUseLine_2, 2))));
      MR_Integer CurLineNum_19 = ((MR_Integer) ((MR_hl_field(0, ImportUseLine_13, 0))));
      MR_String CurModuleNameStr_20 = ((MR_String) ((MR_hl_field(0, ImportUseLine_13, 1))));
      MR_String CurAvailDecl_21 = ((MR_String) ((MR_hl_field(0, ImportUseLine_13, 2))));
      MR_Word STATE_VARIABLE_Specs_1_67;
      MR_Word next_value_of_PrevImportUseLine_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      succeeded = (CurLineNum_19 == PrevLineNum_16);
      if (succeeded)
      {
        MR_Word Pieces_22;
        MR_Word Context_23;
        MR_Word Spec_24;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_56;

        {
          Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 35U));
          MR_hl_field(3, Var_34, 1) = ((MR_Box) (CurAvailDecl_21));
        }
        {
          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_39, 1) = ((MR_Box) (CurModuleNameStr_20));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[18])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
        }
        Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
        Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[86])));
        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 35U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (PrevAvailDecl_18));
        }
        {
          Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_56, 1) = ((MR_Box) (PrevModuleNameStr_17));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[73])));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[18])));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[87])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_47);
        Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_41);
        Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[84])), Var_31);
        {
          Context_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Context_23, 0) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(0, Context_23, 1) = ((MR_Box) (CurLineNum_19));
        }
        {
          Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.generate_unsorted_avail_block_warnings\'/5"));
          MR_hl_field(0, Spec_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[2])));
          MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Context_23));
          MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_22));
        }
        {
          STATE_VARIABLE_Specs_1_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_67, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_67, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      else
      {
        MR_Integer Var_68 = (MR_Integer) ((MR_Unsigned) CurLineNum_19 - (MR_Unsigned) PrevLineNum_16);
        MR_Word Var_69;

        succeeded = (Var_68 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_69 = parse_tree__convert_import_use__module_names_are_in_order_2_f_0(PrevModuleNameStr_17, CurModuleNameStr_20);
          succeeded = (Var_69 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_90;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Pieces_112;
          MR_Word Context_113;
          MR_Word Spec_114;

          {
            Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 35U));
            MR_hl_field(3, Var_77, 1) = ((MR_Box) (CurAvailDecl_21));
          }
          {
            Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_82, 1) = ((MR_Box) (CurModuleNameStr_20));
          }
          {
            Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[18])));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
          }
          Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
          Var_85 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[89])));
          {
            Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 35U));
            MR_hl_field(3, Var_94, 1) = ((MR_Box) (PrevAvailDecl_18));
          }
          {
            Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_99, 1) = ((MR_Box) (PrevModuleNameStr_17));
          }
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[73])));
          }
          {
            Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[18])));
            MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
          }
          {
            Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
            MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_95));
          }
          {
            Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_90, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[90])));
            MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_93));
          }
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_90);
          Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_84);
          Pieces_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[84])), Var_74);
          {
            Context_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_113, 0) = ((MR_Box) (HeadVar__1_1));
            MR_hl_field(0, Context_113, 1) = ((MR_Box) (CurLineNum_19));
          }
          {
            Spec_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.generate_unsorted_avail_block_warnings\'/5"));
            MR_hl_field(0, Spec_114, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[2])));
            MR_hl_field(0, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_114, 3) = ((MR_Box) (Context_113));
            MR_hl_field(0, Spec_114, 4) = ((MR_Box) (Pieces_112));
          }
          {
            STATE_VARIABLE_Specs_1_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_67, 0) = ((MR_Box) (Spec_114));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_67, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
        else
          STATE_VARIABLE_Specs_1_67 = STATE_VARIABLE_Specs_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_PrevImportUseLine_2 = ImportUseLine_13;
      next_value_of_HeadVar__3_3 = ImportUseLines_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_67;
      PrevImportUseLine_2 = next_value_of_PrevImportUseLine_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__convert_import_use__module_names_are_in_order_2_f_0(
  MR_String PrevModuleNameStr_4,
  MR_String CurModuleNameStr_5)
{
  MR_Word InOrder_6;
  MR_Word CmpResult_7;

  mercury__private_builtin__builtin_compare_string_3_p_0(&CmpResult_7, PrevModuleNameStr_4, CurModuleNameStr_5);
  switch (CmpResult_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      InOrder_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      InOrder_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      {
        MR_Word PrevChars_8;
        MR_Word CurChars_9;

        mercury__string__to_char_list_2_p_0(PrevModuleNameStr_4, &PrevChars_8);
        mercury__string__to_char_list_2_p_0(CurModuleNameStr_5, &CurChars_9);
        InOrder_6 = parse_tree__convert_import_use__module_names_are_in_numerical_order_2_f_0(PrevChars_8, CurChars_9);
      }
      break;
  }
  return InOrder_6;
}

static MR_Word MR_CALL 
parse_tree__convert_import_use__module_names_are_in_numerical_order_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.convert_import_use.module_names_are_in_numerical_order\'/2", (MR_String) "CmpResult is >, but char lists are identical");
      else
        HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Char Var_23 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Char CurChar_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
        MR_Word CurChars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

        succeeded = (Var_23 == CurChar_13);
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_22;
          MR_Word next_value_of_HeadVar__2_2 = CurChars_14;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
        else
        {
          MR_String PrevSuffix_16;
          MR_String CurSuffix_17;
          MR_Integer PrevNum_18;
          MR_Integer CurNum_19;

          mercury__string__from_char_list_2_p_0(HeadVar__1_1, &PrevSuffix_16);
          mercury__string__from_char_list_2_p_0(HeadVar__2_2, &CurSuffix_17);
          succeeded = mercury__string__to_int_2_p_0(PrevSuffix_16, &PrevNum_18);
          if (succeeded)
          {
            succeeded = mercury__string__to_int_2_p_0(CurSuffix_17, &CurNum_19);
            if (succeeded)
              succeeded = (PrevNum_18 < CurNum_19);
          }
          if (succeeded)
            HeadVar__3_3 = (MR_Integer) 1;
          else
            HeadVar__3_3 = (MR_Integer) 0;
        }
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__error_if_use_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_UseMap_0_15,
  MR_Word * STATE_VARIABLE_UseMap_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word Use_11;
  MR_Word STATE_VARIABLE_UseMap_1_19;
  MR_Box conv0_Use_11;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), &conv0_Use_11, STATE_VARIABLE_UseMap_0_15, &STATE_VARIABLE_UseMap_1_19);
  if (succeeded)
  {
    Use_11 = ((MR_Word) (conv0_Use_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Pieces_12;
    MR_Word Context_13;
    MR_Word Spec_14;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_43;
    MR_Word Var_44;

    *STATE_VARIABLE_UseMap_16 = STATE_VARIABLE_UseMap_1_19;
    {
      Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_27, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
    Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[83])));
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (AncestorName_8));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[73])));
    }
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_43);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[67])), Var_34);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[81])), Var_24);
    if (((MR_tag((MR_Word) Use_11)) == (MR_Integer) 1))
      Context_13 = ((MR_Word) ((MR_hl_field(1, Use_11, 0))));
    else
      Context_13 = ((MR_Word) ((MR_hl_field(3, Use_11, 1))));
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.error_if_use_for_ancestor\'/6"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_13));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
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
    *STATE_VARIABLE_UseMap_16 = STATE_VARIABLE_UseMap_0_15;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__warn_if_avail_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_19,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_Word ImportOrUse_11;
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_1_23;
  MR_Box conv0_ImportOrUse_11;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (AncestorName_8)), &conv0_ImportOrUse_11, STATE_VARIABLE_SectionImportOrUseMap_0_19, &STATE_VARIABLE_SectionImportOrUseMap_1_23);
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
    MR_Word Spec_18;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_74;

    *STATE_VARIABLE_SectionImportOrUseMap_20 = STATE_VARIABLE_SectionImportOrUseMap_1_23;
    switch (MR_tag((MR_Word) ImportOrUse_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Context_13 = ((MR_Word) ((MR_hl_field(0, ImportOrUse_11, 0))));
          DeclName_12 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 1:
        {
          Context_13 = ((MR_Word) ((MR_hl_field(1, ImportOrUse_11, 0))));
          DeclName_12 = (MR_String) "use_module";
        }
        break;
      case (MR_Integer) 2:
        {
          Context_13 = ((MR_Word) ((MR_hl_field(2, ImportOrUse_11, 0))));
          DeclName_12 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ImportOrUse_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Context_13 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_11, 1))));
              DeclName_12 = (MR_String) "use_module";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ContextA_79 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_11, 1))));
              MR_Word ContextB_80 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_11, 2))));
              MR_Word Var_83;

              mercury__term_context____Compare____term_context_0_0(&Var_83, ContextB_80, ContextA_79);
              succeeded = ((MR_Integer) 1 == Var_83);
              if (succeeded)
              {
                Context_13 = ContextB_80;
                DeclName_12 = (MR_String) "import_module";
              }
              else
              {
                Context_13 = ContextA_79;
                DeclName_12 = (MR_String) "use_module";
              }
            }
            break;
        }
        break;
    }
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (DeclName_12));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[71])));
    }
    Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_40);
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (AncestorName_8));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[73])));
    }
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_46);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[67])), Var_38);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
    MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[65])), Var_28);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (MainPieces_14));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[101])));
    }
    {
      Msg_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_16, 0) = ((MR_Box) (Context_13));
      MR_hl_field(2, Msg_16, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Msg_16));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.warn_if_avail_for_ancestor\'/6"));
      MR_hl_field(2, Spec_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
      MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_74));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    *STATE_VARIABLE_SectionImportOrUseMap_20 = STATE_VARIABLE_SectionImportOrUseMap_0_19;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__record_imp_use_only_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_UseMap_0_20,
  MR_Word * STATE_VARIABLE_UseMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), STATE_VARIABLE_UseMap_0_20, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
  if (succeeded)
  {
    OldEntry_11 = ((MR_Word) (conv0_OldEntry_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if (((MR_tag((MR_Word) OldEntry_11)) == (MR_Integer) 1))
    {
      MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(1, OldEntry_11, 0))));
      MR_Word DupPieces_13;
      MR_Word DupMsg_15;
      MR_Word PrevMsg_16;
      MR_Word Spec_18;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_79;
      MR_Word Var_80;

      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_37, 1) = ((MR_Box) (ModuleName_7));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_35 = parse_tree__error_spec__color_as_subject_1_f_0(Var_36);
      Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[59])));
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[41])), Var_44);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_39);
      DupPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[23])), Var_34);
      {
        DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DupMsg_15, 0) = ((MR_Box) (Context_8));
        MR_hl_field(0, DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
      }
      {
        PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
        MR_hl_field(0, PrevMsg_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[63])));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (PrevMsg_16));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (DupMsg_15));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
      }
      {
        Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use_only\'/6"));
        MR_hl_field(2, Spec_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
        MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use_only\'/6", (MR_String) "unexpected OldEntry");
        return;
      }
    *STATE_VARIABLE_UseMap_21 = STATE_VARIABLE_UseMap_0_20;
  }
  else
  {
    MR_Word Var_85;

    {
      Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_85, 1) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_85)), STATE_VARIABLE_UseMap_0_20, STATE_VARIABLE_UseMap_21);
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__record_int_use_only_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_UseMap_0_11,
  MR_Word * STATE_VARIABLE_UseMap_12)
{
  MR_bool succeeded;
  MR_Box conv0_OldEntry_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), STATE_VARIABLE_UseMap_0_11, ((MR_Box) (ModuleName_5)), &conv0_OldEntry_8);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_import_use.record_int_use_only\'/4", (MR_String) "unexpected OldEntry");
      return;
    }
  else
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (Context_6));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_15)), STATE_VARIABLE_UseMap_0_11, STATE_VARIABLE_UseMap_12);
  }
}

static void MR_CALL 
parse_tree__convert_import_use__record_imp_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_ImportUseMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_28, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
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
          MR_Word PrevContext_118 = ((MR_Word) ((MR_hl_field(0, OldEntry_11, 0))));
          MR_Word DupPieces_121;
          MR_Word DupMsg_123;
          MR_Word PrevMsg_124;
          MR_Word Spec_126;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_133;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_138;
          MR_Word Var_140;
          MR_Word Var_148;
          MR_Word Var_149;

          {
            Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_131, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
            MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_129 = parse_tree__error_spec__color_as_subject_1_f_0(Var_130);
          Var_136 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
          Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[95])), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])));
          Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[55])), Var_140);
          Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, Var_138);
          Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[41])), Var_135);
          Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_129, Var_133);
          DupPieces_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[23])), Var_128);
          {
            DupMsg_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_123, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_123, 1) = ((MR_Box) (DupPieces_121));
          }
          {
            PrevMsg_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_124, 0) = ((MR_Box) (PrevContext_118));
            MR_hl_field(0, PrevMsg_124, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[94])));
          }
          {
            Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_149, 0) = ((MR_Box) (PrevMsg_124));
            MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_148, 0) = ((MR_Box) (DupMsg_123));
            MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
          }
          {
            Spec_126 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_126, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use\'/6"));
            MR_hl_field(2, Spec_126, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
            MR_hl_field(2, Spec_126, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_126, 3) = ((MR_Box) (Var_148));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_31 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_126));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PrevContext_152 = ((MR_Word) ((MR_hl_field(1, OldEntry_11, 0))));
          MR_Word DupPieces_155;
          MR_Word DupMsg_157;
          MR_Word PrevMsg_158;
          MR_Word Spec_160;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Var_167;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word Var_172;
          MR_Word Var_174;
          MR_Word Var_182;
          MR_Word Var_183;

          {
            Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_165, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
            MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_163 = parse_tree__error_spec__color_as_subject_1_f_0(Var_164);
          Var_170 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
          Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[96])), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])));
          Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[55])), Var_174);
          Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_170, Var_172);
          Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[41])), Var_169);
          Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_163, Var_167);
          DupPieces_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[23])), Var_162);
          {
            DupMsg_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_157, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_157, 1) = ((MR_Box) (DupPieces_155));
          }
          {
            PrevMsg_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_158, 0) = ((MR_Box) (PrevContext_152));
            MR_hl_field(0, PrevMsg_158, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[99])));
          }
          {
            Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_183, 0) = ((MR_Box) (PrevMsg_158));
            MR_hl_field(1, Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_182, 0) = ((MR_Box) (DupMsg_157));
            MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_183));
          }
          {
            Spec_160 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_160, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use\'/6"));
            MR_hl_field(2, Spec_160, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
            MR_hl_field(2, Spec_160, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_160, 3) = ((MR_Box) (Var_182));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_31 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_160));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PrevContext_17 = ((MR_Word) ((MR_hl_field(2, OldEntry_11, 0))));
          MR_Word DupPieces_21;
          MR_Word DupMsg_23;
          MR_Word PrevMsg_24;
          MR_Word Spec_26;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_71;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_82;
          MR_Word Var_87;
          MR_Word Var_104;
          MR_Word Var_105;

          {
            Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_69, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_67 = parse_tree__error_spec__color_as_subject_1_f_0(Var_68);
          Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
          Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[91])), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])));
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[55])), Var_87);
          Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
          Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[41])), Var_76);
          Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_71);
          DupPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[23])), Var_66);
          {
            DupMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_23, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_23, 1) = ((MR_Box) (DupPieces_21));
          }
          {
            PrevMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_24, 0) = ((MR_Box) (PrevContext_17));
            MR_hl_field(0, PrevMsg_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[94])));
          }
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (PrevMsg_24));
            MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) (DupMsg_23));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            Spec_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use\'/6"));
            MR_hl_field(2, Spec_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
            MR_hl_field(2, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_26, 3) = ((MR_Box) (Var_104));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_31 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, OldEntry_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use\'/6", (MR_String) "unexpected OldEntry");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PrevContext_186 = ((MR_Word) ((MR_hl_field(3, OldEntry_11, 1))));
              MR_Word DupPieces_189;
              MR_Word DupMsg_191;
              MR_Word PrevMsg_192;
              MR_Word Spec_194;
              MR_Word Var_196;
              MR_Word Var_197;
              MR_Word Var_198;
              MR_Word Var_199;
              MR_Word Var_201;
              MR_Word Var_203;
              MR_Word Var_204;
              MR_Word Var_206;
              MR_Word Var_208;
              MR_Word Var_216;
              MR_Word Var_217;

              {
                Var_199 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_199, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Var_199, 1) = ((MR_Box) (ModuleName_7));
              }
              {
                Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_198, 0) = ((MR_Box) (Var_199));
                MR_hl_field(1, Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_197 = parse_tree__error_spec__color_as_subject_1_f_0(Var_198);
              Var_204 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
              Var_208 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[96])), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])));
              Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[55])), Var_208);
              Var_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_204, Var_206);
              Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[41])), Var_203);
              Var_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_197, Var_201);
              DupPieces_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[23])), Var_196);
              {
                DupMsg_191 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DupMsg_191, 0) = ((MR_Box) (Context_8));
                MR_hl_field(0, DupMsg_191, 1) = ((MR_Box) (DupPieces_189));
              }
              {
                PrevMsg_192 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PrevMsg_192, 0) = ((MR_Box) (PrevContext_186));
                MR_hl_field(0, PrevMsg_192, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[99])));
              }
              {
                Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_217, 0) = ((MR_Box) (PrevMsg_192));
                MR_hl_field(1, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_216, 0) = ((MR_Box) (DupMsg_191));
                MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_217));
              }
              {
                Spec_194 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_194, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_use\'/6"));
                MR_hl_field(2, Spec_194, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
                MR_hl_field(2, Spec_194, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(2, Spec_194, 3) = ((MR_Box) (Var_216));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_31 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_194));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
              }
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_ImportUseMap_29 = STATE_VARIABLE_ImportUseMap_0_28;
  }
  else
  {
    MR_Word Var_110;

    {
      Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_110, 1) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_110)), STATE_VARIABLE_ImportUseMap_0_28, STATE_VARIABLE_ImportUseMap_29);
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__record_imp_import_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_24,
  MR_Word * STATE_VARIABLE_ImportUseMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_24, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
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
          MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(0, OldEntry_11, 0))));
          MR_Word DupPieces_13;
          MR_Word DupMsg_15;
          MR_Word PrevMsg_16;
          MR_Word Spec_18;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_83;
          MR_Word Var_84;

          {
            Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_41, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
            MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_39 = parse_tree__error_spec__color_as_subject_1_f_0(Var_40);
          Var_49 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[46])));
          Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[41])), Var_48);
          Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_43);
          DupPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[39])), Var_38);
          {
            DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_15, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
          }
          {
            PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
            MR_hl_field(0, PrevMsg_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[48])));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (PrevMsg_16));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (DupMsg_15));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_import\'/6"));
            MR_hl_field(2, Spec_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
            MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_83));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_27 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
          }
          *STATE_VARIABLE_ImportUseMap_25 = STATE_VARIABLE_ImportUseMap_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntUseContext_19 = ((MR_Word) ((MR_hl_field(1, OldEntry_11, 0))));
          MR_Word Var_87;

          {
            Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_87, 1) = ((MR_Box) (IntUseContext_19));
            MR_hl_field(3, Var_87, 2) = ((MR_Box) (Context_8));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_87)), STATE_VARIABLE_ImportUseMap_0_24, STATE_VARIABLE_ImportUseMap_25);
          *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_import_use.record_imp_import\'/6", (MR_String) "unexpected OldEntry");
          return;
        }
        break;
    }
  else
  {
    MR_Word Var_91;

    {
      Var_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_91, 0) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_91)), STATE_VARIABLE_ImportUseMap_0_24, STATE_VARIABLE_ImportUseMap_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__record_int_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_24,
  MR_Word * STATE_VARIABLE_ImportUseMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word OldEntry_11;
  MR_Box conv0_OldEntry_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_24, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
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
          MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(0, OldEntry_11, 0))));
          MR_Word DupPieces_13;
          MR_Word DupMsg_15;
          MR_Word PrevMsg_16;
          MR_Word Spec_18;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_83;
          MR_Word Var_84;

          {
            Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_41, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
            MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_39 = parse_tree__error_spec__color_as_subject_1_f_0(Var_40);
          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[27])));
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[35])));
          Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[25])), Var_48);
          Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_43);
          DupPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[23])), Var_38);
          {
            DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DupMsg_15, 0) = ((MR_Box) (Context_8));
            MR_hl_field(0, DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
          }
          {
            PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
            MR_hl_field(0, PrevMsg_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[37])));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (PrevMsg_16));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (DupMsg_15));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.record_int_use\'/6"));
            MR_hl_field(2, Spec_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
            MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_83));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_27 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_import_use.record_int_use\'/6", (MR_String) "unexpected OldEntry");
          return;
        }
        break;
    }
    *STATE_VARIABLE_ImportUseMap_25 = STATE_VARIABLE_ImportUseMap_0_24;
  }
  else
  {
    MR_Word Var_89;

    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Context_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_89)), STATE_VARIABLE_ImportUseMap_0_24, STATE_VARIABLE_ImportUseMap_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__record_int_import_4_p_0(
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
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_10)), STATE_VARIABLE_ImportUseMap_0_8, STATE_VARIABLE_ImportUseMap_9);
}

static void MR_CALL 
parse_tree__convert_import_use__report_duplicate_avail_context_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word PrevContext_11,
  MR_Word DuplicateContext_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word DupPieces_14;
  MR_Word PrevPieces_15;
  MR_Word DupMsg_16;
  MR_Word PrevMsg_17;
  MR_Word Spec_19;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_60;
  MR_Word Var_71;
  MR_Word Var_72;

  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 35U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (DeclName_9));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[8])));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[6])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_28);
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (ModuleName_10));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
  {
    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_51, 1) = ((MR_Box) (Section_8));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[14])));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[11])));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
  }
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[10])), Var_42);
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_37);
  DupPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[5])), Var_26);
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[17])));
  }
  {
    PrevPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrevPieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__convert_import_use_scalar_common_1[15])));
    MR_hl_field(1, PrevPieces_15, 1) = ((MR_Box) (Var_60));
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
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (PrevMsg_17));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (DupMsg_16));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Spec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.report_duplicate_avail_context\'/7"));
    MR_hl_field(2, Spec_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[0])));
    MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_71));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_21 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
  }
}

static void MR_CALL 
parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_21;

  parse_tree__convert_import_use__report_duplicate_avail_context_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(
  MR_String Section_8,
  MR_String DeclName_9,
  MR_Word ModuleName_10,
  MR_Word OoMContexts_11,
  MR_Word * HeadSortedContext_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word HeadContext_14 = ((MR_Word) ((MR_hl_field(0, OoMContexts_11, 0))));
  MR_Word TailContexts_15 = ((MR_Word) ((MR_hl_field(0, OoMContexts_11, 1))));
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.convert_import_use.report_any_duplicate_avail_contexts\'/7", (MR_String) "SortedContexts = []");
      return;
    }
  else
  {
    MR_Word TailSortedContexts_17;

    *HeadSortedContext_12 = ((MR_Word) ((MR_hl_field(1, SortedContexts_16, 0))));
    TailSortedContexts_17 = ((MR_Word) ((MR_hl_field(1, SortedContexts_16, 1))));
    if ((TailSortedContexts_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    else
    {
      MR_Word Var_25;
      MR_Box conv1_STATE_VARIABLE_Specs_21;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[2]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (Section_8));
        MR_hl_field(0, Var_25, 4) = ((MR_Box) (DeclName_9));
        MR_hl_field(0, Var_25, 5) = ((MR_Box) (ModuleName_10));
        MR_hl_field(0, Var_25, 6) = ((MR_Box) (*HeadSortedContext_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), Var_25, TailSortedContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_20)), &conv1_STATE_VARIABLE_Specs_21);
      *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_21));
    }
  }
}

MR_bool MR_CALL 
parse_tree__convert_import_use__avail_is_use_2_p_0(
  MR_Word Avail_3,
  MR_Word * UseInfo_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Avail_3)) == (MR_Integer) 1);

  if (succeeded)
    *UseInfo_4 = (MR_Word) (MR_body((MR_Word) (Avail_3), (MR_Integer) 1));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__convert_import_use__avail_is_import_2_p_0(
  MR_Word Avail_3,
  MR_Word * ImportInfo_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Avail_3)) == (MR_Integer) 0);

  if (succeeded)
    *ImportInfo_4 = (MR_Word) ((MR_Word) (Avail_3));
  return succeeded;
}

MR_String MR_CALL 
parse_tree__convert_import_use__import_or_use_decl_name_1_f_0(
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
parse_tree__convert_import_use__avail_imports_uses_3_p_0(
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
    MR_Word Avail_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Avails_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word STATE_VARIABLE_Imports_1_12;
    MR_Word STATE_VARIABLE_Uses_1_13;

    parse_tree__convert_import_use__avail_imports_uses_3_p_0(Avails_5, &STATE_VARIABLE_Imports_1_12, &STATE_VARIABLE_Uses_1_13);
    if (((MR_tag((MR_Word) Avail_4)) == (MR_Integer) 0))
    {
      MR_Word AvailImportInfo_8 = (MR_Word) ((MR_Word) (Avail_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (AvailImportInfo_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Imports_1_12));
      }
      *HeadVar__3_3 = STATE_VARIABLE_Uses_1_13;
    }
    else
    {
      MR_Word AvailUseInfo_9 = (MR_Word) (MR_body((MR_Word) (Avail_4), (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (AvailUseInfo_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Uses_1_13));
      }
      *HeadVar__2_2 = STATE_VARIABLE_Imports_1_12;
    }
  }
}

static void MR_CALL 
parse_tree__convert_import_use__acc_avails_with_contexts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevAvails_12;

  parse_tree__convert_import_use__acc_avail_with_context_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevAvails_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevAvails_12));
}

void MR_CALL 
parse_tree__convert_import_use__acc_avails_with_contexts_5_p_0(
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
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__convert_import_use_scalar_common_9[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__convert_import_use__acc_avails_with_contexts_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ImportOrUse_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (ModuleName_7));
  }
  mercury__one_or_more__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), Var_12, Contexts_8, ((MR_Box) (STATE_VARIABLE_RevAvails_0_10)), &conv1_STATE_VARIABLE_RevAvails_11);
  *STATE_VARIABLE_RevAvails_11 = ((MR_Word) (conv1_STATE_VARIABLE_RevAvails_11));
}

static void MR_CALL 
parse_tree__convert_import_use__use_map_to_item_avails_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevAvails_12;

  parse_tree__convert_import_use__use_map_to_item_avails_acc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RevAvails_12);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RevAvails_12));
}

MR_Word MR_CALL 
parse_tree__convert_import_use__use_map_to_item_avails_1_f_0(
  MR_Word UseMap_3)
{
  MR_Word Avails_4;
  MR_Word RevAvails_5;
  MR_Box conv1_RevAvails_5;

  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[16]), UseMap_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevAvails_5);
  RevAvails_5 = ((MR_Word) (conv1_RevAvails_5));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevAvails_5, &Avails_4);
  return Avails_4;
}

static void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0_1(
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

  parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_acc_12_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_IntImports_28, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IntUses_30, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_ImpImports_32, ((MR_Word) (wrapper_arg_9)), &conv1_STATE_VARIABLE_ImpUses_34, ((MR_Word) (wrapper_arg_11)), &conv0_STATE_VARIABLE_IntUseImpImports_36);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_IntImports_28));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IntUses_30));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_ImpImports_32));
  *wrapper_arg_10 = ((MR_Box) (conv1_STATE_VARIABLE_ImpUses_34));
  *wrapper_arg_12 = ((MR_Box) (conv0_STATE_VARIABLE_IntUseImpImports_36));
}

void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_module_name_contexts_6_p_0(
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
  mercury__map__foldl5_12_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[15]), ImportUseMap_7, ((MR_Box) (Var_14)), &conv9_IntImports_8, ((MR_Box) (Var_15)), &conv8_IntUses_9, ((MR_Box) (Var_16)), &conv7_ImpImports_10, ((MR_Box) (Var_17)), &conv6_ImpUses_11, ((MR_Box) (Var_18)), &conv5_IntUseImpImports_12);
  *IntImports_8 = ((MR_Word) (conv9_IntImports_8));
  *IntUses_9 = ((MR_Word) (conv8_IntUses_9));
  *ImpImports_10 = ((MR_Word) (conv7_ImpImports_10));
  *ImpUses_11 = ((MR_Word) (conv6_ImpUses_11));
  *IntUseImpImports_12 = ((MR_Word) (conv5_IntUseImpImports_12));
}

static void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0_1(
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

  parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_12_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_SectionImportAndOrUseMap_27, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IntImportMap_29, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_IntUseMap_31, ((MR_Word) (wrapper_arg_9)), &conv1_STATE_VARIABLE_ImpImportMap_33, ((MR_Word) (wrapper_arg_11)), &conv0_STATE_VARIABLE_ImpUseMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_SectionImportAndOrUseMap_27));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportMap_29));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_IntUseMap_31));
  *wrapper_arg_10 = ((MR_Box) (conv1_STATE_VARIABLE_ImpImportMap_33));
  *wrapper_arg_12 = ((MR_Box) (conv0_STATE_VARIABLE_ImpUseMap_35));
}

void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0(
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

  Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0));
  Var_19 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_20 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_21 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  mercury__map__foldl5_12_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[14]), ImportUseMap_7, ((MR_Box) (Var_18)), &conv9_SectionImportUseMap_8, ((MR_Box) (Var_19)), &conv8_IntImportMap0_13, ((MR_Box) (Var_20)), &conv7_IntUseMap0_14, ((MR_Box) (Var_21)), &conv6_ImpImportMap0_15, ((MR_Box) (Var_22)), &conv5_ImpUseMap0_16);
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
parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0_1(
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

  parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_acc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_27, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_29);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_27));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_29));
}

void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0(
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
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&parse_tree__convert_import_use_scalar_common_4[1]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (IncludeImplicit_5));
  }
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), Var_11, ImportUseMap_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_10);
  RevIntAvails_9 = ((MR_Word) (conv3_RevIntAvails_9));
  RevImpAvails_10 = ((MR_Word) (conv2_RevImpAvails_10));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_9, IntAvails_7);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_10, ImpAvails_8);
}

static void MR_CALL 
parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_3_p_0_1(
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

  parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_14));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_16));
}

void MR_CALL 
parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_3_p_0(
  MR_Word ImportUseMap_4,
  MR_Word * IntAvails_5,
  MR_Word * ImpAvails_6)
{
  MR_Word RevIntAvails_7;
  MR_Word RevImpAvails_8;
  MR_Box conv3_RevIntAvails_7;
  MR_Box conv2_RevImpAvails_8;

  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[13]), ImportUseMap_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_8);
  RevIntAvails_7 = ((MR_Word) (conv3_RevIntAvails_7));
  RevImpAvails_8 = ((MR_Word) (conv2_RevImpAvails_8));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_7, IntAvails_5);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_8, ImpAvails_6);
}

static void MR_CALL 
parse_tree__convert_import_use__section_use_map_to_item_avails_3_p_0_1(
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

  parse_tree__convert_import_use__section_use_map_to_item_avails_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_16);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_14));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_16));
}

void MR_CALL 
parse_tree__convert_import_use__section_use_map_to_item_avails_3_p_0(
  MR_Word UseMap_4,
  MR_Word * IntAvails_5,
  MR_Word * ImpAvails_6)
{
  MR_Word RevIntAvails_7;
  MR_Word RevImpAvails_8;
  MR_Box conv3_RevIntAvails_7;
  MR_Box conv2_RevImpAvails_8;

  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[2]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[12]), UseMap_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_8);
  RevIntAvails_7 = ((MR_Word) (conv3_RevIntAvails_7));
  RevImpAvails_8 = ((MR_Word) (conv2_RevImpAvails_8));
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_7, IntAvails_5);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_8, ImpAvails_6);
}

static void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeImplicitUse_4;

  parse_tree__convert_import_use__wrap_section_import_and_or_use_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_MaybeImplicitUse_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeImplicitUse_4));
}

void MR_CALL 
parse_tree__convert_import_use__import_and_or_use_map_section_to_maybe_implicit_2_p_0(
  MR_Word SectionImportUseMap_3,
  MR_Word * ImportUseMap_4)
{
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[11]), SectionImportUseMap_3, ImportUseMap_4);
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_UseMap_16;
  MR_Word conv13_STATE_VARIABLE_Specs_18;

  parse_tree__convert_import_use__error_if_use_for_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_UseMap_16, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_UseMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_UseMap_21;
  MR_Word conv8_STATE_VARIABLE_Specs_23;

  parse_tree__convert_import_use__record_imp_use_only_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_UseMap_21, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_Specs_23);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_UseMap_21));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_UseMap_12;

  parse_tree__convert_import_use__record_int_use_only_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_UseMap_12);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_UseMap_12));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_2(
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

  parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_1(
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

  parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0(
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
  MR_Word STATE_VARIABLE_Specs_1_18;
  MR_Word STATE_VARIABLE_Specs_2_22;
  MR_Word STATE_VARIABLE_UseMap_1_25;
  MR_Word STATE_VARIABLE_UseMap_2_27;
  MR_Word STATE_VARIABLE_UseMap_3_29;
  MR_Word STATE_VARIABLE_Specs_3_30;
  MR_Word STATE_VARIABLE_UseMap_4_31;
  MR_Word STATE_VARIABLE_Specs_4_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Box conv2_STATE_VARIABLE_Specs_1_18;
  MR_Box conv5_STATE_VARIABLE_Specs_2_22;
  MR_Box conv7_STATE_VARIABLE_UseMap_2_27;
  MR_Box conv11_STATE_VARIABLE_UseMap_3_29;
  MR_Box conv10_STATE_VARIABLE_Specs_3_30;
  MR_Word Use_55;
  MR_Word STATE_VARIABLE_UseMap_1_59;
  MR_Box conv12_Use_55;
  MR_Box conv16_STATE_VARIABLE_UseMap_14;
  MR_Box conv15_STATE_VARIABLE_Specs_16;

  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_5[4]), IntUseContextsMap_8, &IntUseMap_12, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_1_18);
  STATE_VARIABLE_Specs_1_18 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_18));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_5[5]), ImpUseContextsMap_9, &ImpUseMap_13, ((MR_Box) (STATE_VARIABLE_Specs_1_18)), &conv5_STATE_VARIABLE_Specs_2_22);
  STATE_VARIABLE_Specs_2_22 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_2_22));
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), &STATE_VARIABLE_UseMap_1_25);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[9]), IntUseMap_12, ((MR_Box) (STATE_VARIABLE_UseMap_1_25)), &conv7_STATE_VARIABLE_UseMap_2_27);
  STATE_VARIABLE_UseMap_2_27 = ((MR_Word) (conv7_STATE_VARIABLE_UseMap_2_27));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[10]), ImpUseMap_13, ((MR_Box) (STATE_VARIABLE_UseMap_2_27)), &conv11_STATE_VARIABLE_UseMap_3_29, ((MR_Box) (STATE_VARIABLE_Specs_2_22)), &conv10_STATE_VARIABLE_Specs_3_30);
  STATE_VARIABLE_UseMap_3_29 = ((MR_Word) (conv11_STATE_VARIABLE_UseMap_3_29));
  STATE_VARIABLE_Specs_3_30 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_3_30));
  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_7)), &conv12_Use_55, STATE_VARIABLE_UseMap_3_29, &STATE_VARIABLE_UseMap_1_59);
  if (succeeded)
  {
    Use_55 = ((MR_Word) (conv12_Use_55));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Pieces_56;
    MR_Word Context_57;
    MR_Word Spec_58;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_74;
    MR_Word Var_75;

    STATE_VARIABLE_UseMap_4_31 = STATE_VARIABLE_UseMap_1_59;
    {
      Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_67, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_65 = parse_tree__error_spec__color_as_subject_1_f_0(Var_66);
    Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[82])));
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[67])), Var_74);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_69);
    Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[81])), Var_64);
    if (((MR_tag((MR_Word) Use_55)) == (MR_Integer) 1))
      Context_57 = ((MR_Word) ((MR_hl_field(1, Use_55, 0))));
    else
      Context_57 = ((MR_Word) ((MR_hl_field(3, Use_55, 1))));
    {
      Spec_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.error_if_use_for_self\'/5"));
      MR_hl_field(0, Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_58, 3) = ((MR_Box) (Context_57));
      MR_hl_field(0, Spec_58, 4) = ((MR_Box) (Pieces_56));
    }
    {
      STATE_VARIABLE_Specs_4_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_4_32, 0) = ((MR_Box) (Spec_58));
      MR_hl_field(1, STATE_VARIABLE_Specs_4_32, 1) = ((MR_Box) (STATE_VARIABLE_Specs_3_30));
    }
  }
  else
  {
    STATE_VARIABLE_Specs_4_32 = STATE_VARIABLE_Specs_3_30;
    STATE_VARIABLE_UseMap_4_31 = STATE_VARIABLE_UseMap_3_29;
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[3]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_use_modules_6_p_0_5));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (ModuleName_7));
  }
  Var_34 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_7);
  mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), Var_33, Var_34, ((MR_Box) (STATE_VARIABLE_UseMap_4_31)), &conv16_STATE_VARIABLE_UseMap_14, ((MR_Box) (STATE_VARIABLE_Specs_4_32)), &conv15_STATE_VARIABLE_Specs_16);
  *STATE_VARIABLE_UseMap_14 = ((MR_Word) (conv16_STATE_VARIABLE_UseMap_14));
  *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv30_STATE_VARIABLE_Specs_12;

  parse_tree__convert_import_use__generate_unsorted_avail_block_warnings_for_file_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv30_STATE_VARIABLE_Specs_12);
  *wrapper_arg_4 = ((MR_Box) (conv30_STATE_VARIABLE_Specs_12));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_STATE_VARIABLE_SectionImportOrUseMap_20;
  MR_Word conv26_STATE_VARIABLE_Specs_22;

  parse_tree__convert_import_use__warn_if_avail_for_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_STATE_VARIABLE_SectionImportOrUseMap_20, ((MR_Word) (wrapper_arg_4)), &conv26_STATE_VARIABLE_Specs_22);
  *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_SectionImportOrUseMap_20));
  *wrapper_arg_5 = ((MR_Box) (conv26_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_STATE_VARIABLE_ImportUseMap_29;
  MR_Word conv22_STATE_VARIABLE_Specs_31;

  parse_tree__convert_import_use__record_imp_use_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv23_STATE_VARIABLE_ImportUseMap_29, ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_Specs_31);
  *wrapper_arg_4 = ((MR_Box) (conv23_STATE_VARIABLE_ImportUseMap_29));
  *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_Specs_31));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_STATE_VARIABLE_ImportUseMap_25;
  MR_Word conv18_STATE_VARIABLE_Specs_27;

  parse_tree__convert_import_use__record_imp_import_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv19_STATE_VARIABLE_ImportUseMap_25, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Specs_27);
  *wrapper_arg_4 = ((MR_Box) (conv19_STATE_VARIABLE_ImportUseMap_25));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_ImportUseMap_25;
  MR_Word conv14_STATE_VARIABLE_Specs_27;

  parse_tree__convert_import_use__record_int_use_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_ImportUseMap_25, ((MR_Word) (wrapper_arg_5)), &conv14_STATE_VARIABLE_Specs_27);
  *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_ImportUseMap_25));
  *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_27));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_ImportUseMap_9;

  parse_tree__convert_import_use__record_int_import_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_ImportUseMap_9);
  *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_ImportUseMap_9));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_4(
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

  parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_3(
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

  parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_2(
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

  parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_1(
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

  parse_tree__convert_import_use__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadSortedContext_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

void MR_CALL 
parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0(
  MR_Word WarnUnsortedAvailBlocks_8,
  MR_Word ModuleName_9,
  MR_Word IntAvails_10,
  MR_Word ImpAvails_11,
  MR_Word * STATE_VARIABLE_ImportUseMap_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word IntImportContextsMap_14;
  MR_Word IntUseContextsMap_15;
  MR_Word ImpImportContextsMap_16;
  MR_Word ImpUseContextsMap_17;
  MR_Word IntImportMap_18;
  MR_Word IntUseMap_19;
  MR_Word ImpImportMap_20;
  MR_Word ImpUseMap_21;
  MR_Word STATE_VARIABLE_Specs_1_26;
  MR_Word STATE_VARIABLE_Specs_2_30;
  MR_Word STATE_VARIABLE_Specs_3_34;
  MR_Word STATE_VARIABLE_Specs_4_38;
  MR_Word STATE_VARIABLE_ImportUseMap_1_41;
  MR_Word STATE_VARIABLE_ImportUseMap_2_43;
  MR_Word STATE_VARIABLE_ImportUseMap_3_45;
  MR_Word STATE_VARIABLE_Specs_5_46;
  MR_Word STATE_VARIABLE_ImportUseMap_4_48;
  MR_Word STATE_VARIABLE_Specs_6_49;
  MR_Word STATE_VARIABLE_ImportUseMap_5_51;
  MR_Word STATE_VARIABLE_Specs_7_52;
  MR_Word STATE_VARIABLE_ImportUseMap_6_53;
  MR_Word STATE_VARIABLE_Specs_8_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_Specs_9_58;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Box conv2_STATE_VARIABLE_Specs_1_26;
  MR_Box conv5_STATE_VARIABLE_Specs_2_30;
  MR_Box conv8_STATE_VARIABLE_Specs_3_34;
  MR_Box conv11_STATE_VARIABLE_Specs_4_38;
  MR_Box conv13_STATE_VARIABLE_ImportUseMap_2_43;
  MR_Box conv17_STATE_VARIABLE_ImportUseMap_3_45;
  MR_Box conv16_STATE_VARIABLE_Specs_5_46;
  MR_Box conv21_STATE_VARIABLE_ImportUseMap_4_48;
  MR_Box conv20_STATE_VARIABLE_Specs_6_49;
  MR_Box conv25_STATE_VARIABLE_ImportUseMap_5_51;
  MR_Box conv24_STATE_VARIABLE_Specs_7_52;
  MR_Box conv29_STATE_VARIABLE_ImportUseMap_22;
  MR_Box conv28_STATE_VARIABLE_Specs_9_58;

  Var_114 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_115 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  parse_tree__convert_import_use__accumulate_imports_uses_maps_5_p_0(IntAvails_10, Var_114, &IntImportContextsMap_14, Var_115, &IntUseContextsMap_15);
  Var_118 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_119 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  parse_tree__convert_import_use__accumulate_imports_uses_maps_5_p_0(ImpAvails_11, Var_118, &ImpImportContextsMap_16, Var_119, &ImpUseContextsMap_17);
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_5[0]), IntImportContextsMap_14, &IntImportMap_18, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv2_STATE_VARIABLE_Specs_1_26);
  STATE_VARIABLE_Specs_1_26 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_26));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_5[1]), IntUseContextsMap_15, &IntUseMap_19, ((MR_Box) (STATE_VARIABLE_Specs_1_26)), &conv5_STATE_VARIABLE_Specs_2_30);
  STATE_VARIABLE_Specs_2_30 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_2_30));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_5[2]), ImpImportContextsMap_16, &ImpImportMap_20, ((MR_Box) (STATE_VARIABLE_Specs_2_30)), &conv8_STATE_VARIABLE_Specs_3_34);
  STATE_VARIABLE_Specs_3_34 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_3_34));
  mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[0]), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_5[3]), ImpUseContextsMap_17, &ImpUseMap_21, ((MR_Box) (STATE_VARIABLE_Specs_3_34)), &conv11_STATE_VARIABLE_Specs_4_38);
  STATE_VARIABLE_Specs_4_38 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_4_38));
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), &STATE_VARIABLE_ImportUseMap_1_41);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[4]), IntImportMap_18, ((MR_Box) (STATE_VARIABLE_ImportUseMap_1_41)), &conv13_STATE_VARIABLE_ImportUseMap_2_43);
  STATE_VARIABLE_ImportUseMap_2_43 = ((MR_Word) (conv13_STATE_VARIABLE_ImportUseMap_2_43));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[5]), IntUseMap_19, ((MR_Box) (STATE_VARIABLE_ImportUseMap_2_43)), &conv17_STATE_VARIABLE_ImportUseMap_3_45, ((MR_Box) (STATE_VARIABLE_Specs_4_38)), &conv16_STATE_VARIABLE_Specs_5_46);
  STATE_VARIABLE_ImportUseMap_3_45 = ((MR_Word) (conv17_STATE_VARIABLE_ImportUseMap_3_45));
  STATE_VARIABLE_Specs_5_46 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_5_46));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[6]), ImpImportMap_20, ((MR_Box) (STATE_VARIABLE_ImportUseMap_3_45)), &conv21_STATE_VARIABLE_ImportUseMap_4_48, ((MR_Box) (STATE_VARIABLE_Specs_5_46)), &conv20_STATE_VARIABLE_Specs_6_49);
  STATE_VARIABLE_ImportUseMap_4_48 = ((MR_Word) (conv21_STATE_VARIABLE_ImportUseMap_4_48));
  STATE_VARIABLE_Specs_6_49 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_6_49));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[7]), ImpUseMap_21, ((MR_Box) (STATE_VARIABLE_ImportUseMap_4_48)), &conv25_STATE_VARIABLE_ImportUseMap_5_51, ((MR_Box) (STATE_VARIABLE_Specs_6_49)), &conv24_STATE_VARIABLE_Specs_7_52);
  STATE_VARIABLE_ImportUseMap_5_51 = ((MR_Word) (conv25_STATE_VARIABLE_ImportUseMap_5_51));
  STATE_VARIABLE_Specs_7_52 = ((MR_Word) (conv24_STATE_VARIABLE_Specs_7_52));
  parse_tree__convert_import_use__warn_if_avail_for_self_5_p_0(ModuleName_9, STATE_VARIABLE_ImportUseMap_5_51, &STATE_VARIABLE_ImportUseMap_6_53, STATE_VARIABLE_Specs_7_52, &STATE_VARIABLE_Specs_8_54);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__convert_import_use_scalar_common_7[1]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__convert_import_use__classify_int_imp_import_use_modules_7_p_0_9));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (ModuleName_9));
  }
  Var_56 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
  mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[0]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), Var_55, Var_56, ((MR_Box) (STATE_VARIABLE_ImportUseMap_6_53)), &conv29_STATE_VARIABLE_ImportUseMap_22, ((MR_Box) (STATE_VARIABLE_Specs_8_54)), &conv28_STATE_VARIABLE_Specs_9_58);
  *STATE_VARIABLE_ImportUseMap_22 = ((MR_Word) (conv29_STATE_VARIABLE_ImportUseMap_22));
  STATE_VARIABLE_Specs_9_58 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_9_58));
  switch (WarnUnsortedAvailBlocks_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_9_58;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_59;
        MR_Word FileMap_122;
        MR_Word Var_123;
        MR_Box conv31_STATE_VARIABLE_Specs_24;

        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_10, ImpAvails_11);
        Var_123 = mercury__multi_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0));
        parse_tree__convert_import_use__build_import_use_file_map_3_p_0(Var_59, Var_123, &FileMap_122);
        mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[3]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_1[1]), (MR_Word) (&parse_tree__convert_import_use_scalar_common_2[8]), FileMap_122, ((MR_Box) (STATE_VARIABLE_Specs_9_58)), &conv31_STATE_VARIABLE_Specs_24);
        *STATE_VARIABLE_Specs_24 = ((MR_Word) (conv31_STATE_VARIABLE_Specs_24));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__build_import_use_file_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_FileMap_0_2,
  MR_Word * STATE_VARIABLE_FileMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FileMap_3 = STATE_VARIABLE_FileMap_0_2;
    else
    {
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ModuleName_10;
      MR_Word Context_11;
      MR_String AvailDecl_13;
      MR_String ModuleNameStr_15;
      MR_String FileName_16;
      MR_Integer LineNumber_17;
      MR_Word ImportUseLine_18;
      MR_Word STATE_VARIABLE_FileMap_1_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FileMap_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_Integer) 0))
      {
        MR_Word Var_21 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(0, Var_21, 1))));
        AvailDecl_13 = (MR_String) "import_module";
      }
      else
      {
        MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_22, 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
        AvailDecl_13 = (MR_String) "use_module";
      }
      ModuleNameStr_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
      FileName_16 = ((MR_String) ((MR_hl_field(0, Context_11, 0))));
      LineNumber_17 = ((MR_Integer) ((MR_hl_field(0, Context_11, 1))));
      {
        ImportUseLine_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ImportUseLine_18, 0) = ((MR_Box) (LineNumber_17));
        MR_hl_field(0, ImportUseLine_18, 1) = ((MR_Box) (ModuleNameStr_15));
        MR_hl_field(0, ImportUseLine_18, 2) = ((MR_Box) (AvailDecl_13));
      }
      mercury__multi_map__add_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0), ((MR_Box) (FileName_16)), ((MR_Box) (ImportUseLine_18)), STATE_VARIABLE_FileMap_0_2, &STATE_VARIABLE_FileMap_1_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_8;
      next_value_of_STATE_VARIABLE_FileMap_0_2 = STATE_VARIABLE_FileMap_1_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FileMap_0_2 = next_value_of_STATE_VARIABLE_FileMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__convert_import_use__warn_if_avail_for_self_5_p_0(
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_16,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word ImportOrUse_9;
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_1_20;
  MR_Box conv0_ImportOrUse_9;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_6)), &conv0_ImportOrUse_9, STATE_VARIABLE_SectionImportOrUseMap_0_16, &STATE_VARIABLE_SectionImportOrUseMap_1_20);
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
    MR_Word Spec_15;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_49;

    *STATE_VARIABLE_SectionImportOrUseMap_17 = STATE_VARIABLE_SectionImportOrUseMap_1_20;
    switch (MR_tag((MR_Word) ImportOrUse_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Context_11 = ((MR_Word) ((MR_hl_field(0, ImportOrUse_9, 0))));
          DeclName_10 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 1:
        {
          Context_11 = ((MR_Word) ((MR_hl_field(1, ImportOrUse_9, 0))));
          DeclName_10 = (MR_String) "use_module";
        }
        break;
      case (MR_Integer) 2:
        {
          Context_11 = ((MR_Word) ((MR_hl_field(2, ImportOrUse_9, 0))));
          DeclName_10 = (MR_String) "import_module";
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ImportOrUse_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Context_11 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_9, 1))));
              DeclName_10 = (MR_String) "use_module";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ContextA_54 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_9, 1))));
              MR_Word ContextB_55 = ((MR_Word) ((MR_hl_field(3, ImportOrUse_9, 2))));
              MR_Word Var_58;

              mercury__term_context____Compare____term_context_0_0(&Var_58, ContextB_55, ContextA_54);
              succeeded = ((MR_Integer) 1 == Var_58);
              if (succeeded)
              {
                Context_11 = ContextB_55;
                DeclName_10 = (MR_String) "import_module";
              }
              else
              {
                Context_11 = ContextA_54;
                DeclName_10 = (MR_String) "use_module";
              }
            }
            break;
        }
        break;
    }
    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_26 = parse_tree__error_spec__color_as_subject_1_f_0(Var_27);
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (DeclName_10));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[69])));
    }
    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_37);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[12])));
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[67])), Var_35);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_30);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_1[65])), Var_25);
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_13, 0) = ((MR_Box) (Context_11));
      MR_hl_field(0, Msg_13, 1) = ((MR_Box) (Pieces_12));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.convert_import_use.warn_if_avail_for_self\'/5"));
      MR_hl_field(2, Spec_15, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__convert_import_use_scalar_common_3[1])));
      MR_hl_field(2, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_15, 3) = ((MR_Box) (Var_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    *STATE_VARIABLE_SectionImportOrUseMap_17 = STATE_VARIABLE_SectionImportOrUseMap_0_16;
  }
}

void MR_CALL 
parse_tree__convert_import_use__accumulate_imports_uses_maps_5_p_0(
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
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ImportMap_1_25;
      MR_Word STATE_VARIABLE_UseMap_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_UseMap_0_4;

      if (((MR_tag((MR_Word) Avail_12)) == (MR_Integer) 0))
      {
        MR_Word ModuleName_16;
        MR_Word Context_17;
        MR_Word Var_24 = (MR_Word) ((MR_Word) (Avail_12));

        ModuleName_16 = ((MR_Word) ((MR_hl_field(0, Var_24, 0))));
        Context_17 = ((MR_Word) ((MR_hl_field(0, Var_24, 1))));
        mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_16)), ((MR_Box) (Context_17)), STATE_VARIABLE_ImportMap_0_2, &STATE_VARIABLE_ImportMap_1_25);
        STATE_VARIABLE_UseMap_1_27 = STATE_VARIABLE_UseMap_0_4;
      }
      else
      {
        MR_Word Var_26 = (MR_Word) (MR_body((MR_Word) (Avail_12), (MR_Integer) 1));
        MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(0, Var_26, 0))));
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, Var_26, 1))));

        mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (ModuleName_30)), ((MR_Box) (Context_31)), STATE_VARIABLE_UseMap_0_4, &STATE_VARIABLE_UseMap_1_27);
        STATE_VARIABLE_ImportMap_1_25 = STATE_VARIABLE_ImportMap_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_13;
      next_value_of_STATE_VARIABLE_ImportMap_0_2 = STATE_VARIABLE_ImportMap_1_25;
      next_value_of_STATE_VARIABLE_UseMap_0_4 = STATE_VARIABLE_UseMap_1_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportMap_0_2 = next_value_of_STATE_VARIABLE_ImportMap_0_2;
      STATE_VARIABLE_UseMap_0_4 = next_value_of_STATE_VARIABLE_UseMap_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__convert_import_use__get_uses_6_p_0(
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
parse_tree__convert_import_use__get_imports_uses_10_p_0(
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
      switch (((MR_Integer) ((MR_hl_field(3, ImportAndOrUse_12, 0))))) {
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

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____imp_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____imp_import_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____imp_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____imp_import_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____imp_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____imp_use_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____imp_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____imp_use_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____import_use_file_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____import_use_file_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____import_use_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____import_use_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____import_use_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____import_use_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____int_import_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____int_import_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____int_import_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____int_import_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____int_use_context_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____int_use_context_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____int_use_context_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____int_use_context_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____maybe_include_implicit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____maybe_include_implicit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____maybe_include_implicit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____maybe_include_implicit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__convert_import_use____Unify____module_name_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__convert_import_use____Unify____module_name_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__convert_import_use____Compare____module_name_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__convert_import_use____Compare____module_name_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__convert_import_use__init(void)
{
}

void mercury__parse_tree__convert_import_use__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_imp_import_context_map_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_imp_use_context_map_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_file_map_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_import_use_line_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_int_import_context_map_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_int_use_context_map_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_maybe_include_implicit_0);
  MR_register_type_ctor_info(&parse_tree__convert_import_use__parse_tree__convert_import_use__type_ctor_info_module_name_context_0);
}

void mercury__parse_tree__convert_import_use__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__convert_import_use__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.convert_import_use.
