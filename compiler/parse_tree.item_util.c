/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-08
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

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
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_10_p_0(
  MR_Word ModuleName_11,
  MR_Word ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_IntImportMap_0_24,
  MR_Word * STATE_VARIABLE_IntImportMap_25,
  MR_Word STATE_VARIABLE_IntUseMap_0_26,
  MR_Word * STATE_VARIABLE_IntUseMap_27,
  MR_Word STATE_VARIABLE_ImpImportMap_0_28,
  MR_Word * STATE_VARIABLE_ImpImportMap_29,
  MR_Word STATE_VARIABLE_ImpUseMap_0_30,
  MR_Word * STATE_VARIABLE_ImpUseMap_31);

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
parse_tree__item_util__get_explicit_avails_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Explicit_6,
  MR_Word * IntAvails_7,
  MR_Word * ImpAvails_8);

static void MR_CALL 
parse_tree__item_util__get_implicit_avails_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Implicit_6,
  MR_Word * IntAvails_7,
  MR_Word * ImpAvails_8);

static void MR_CALL 
parse_tree__item_util__wrap_section_import_and_or_use_2_p_0(
  MR_Word SectionImportUse_3,
  MR_Word * MaybeImplicitUse_4);

static void MR_CALL 
parse_tree__item_util__warn_if_import_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_17,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__item_util__record_imp_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_ImportUseMap_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

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
parse_tree__item_util__module_names_contexts_to_item_includes_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevIncludes_0_11,
  MR_Word * STATE_VARIABLE_RevIncludes_12);

static void MR_CALL 
parse_tree__item_util__include_map_to_item_includes_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_RevIntIncludes_0_14,
  MR_Word * STATE_VARIABLE_RevIntIncludes_15,
  MR_Word STATE_VARIABLE_RevImpIncludes_0_16,
  MR_Word * STATE_VARIABLE_RevImpIncludes_17);

static void MR_CALL 
parse_tree__item_util__classify_include_module_8_p_0(
  MR_Word Section_9,
  MR_Word ItemInclude_10,
  MR_Word STATE_VARIABLE_ContextMap_0_26,
  MR_Word * STATE_VARIABLE_ContextMap_27,
  MR_Word STATE_VARIABLE_InclMap_0_28,
  MR_Word * STATE_VARIABLE_InclMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

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
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_5_p_0_1(
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
  MR_Box * wrapper_arg_10);

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
parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__item_util__warn_if_import_for_self_5_p_0(
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_14,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__item_util__include_map_to_item_includes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__item_util__classify_include_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__item_util__classify_include_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____maybe_include_implicit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____maybe_include_implicit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[166][2];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[17][3];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[1][11];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[2][4];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[3][9];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_6[4][7];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_7[3][10];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_8[5][5];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_9[1][13];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_10[1][15];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_11[1][8];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_13[2][6];


/* sealed */ struct parse_tree__item_util__vector_common_type_12_0_s {
  const MR_Word parse_tree__item_util__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct parse_tree__item_util__vector_common_type_12_0_s parse_tree__item_util_vector_common_12[4];



static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[166][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[9]))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst definition"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance declaration"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode definition"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function declaration"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate declaration"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exclusivity promise"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exclusivity and exhaustivity promise"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exhaustivity promise"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type definition"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "type_repn"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "typeclass declaration"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "check_termination"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "consider_used"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_decl"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "mode_check_clauses"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "no_determinism_warning"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "promise_equivalent_clauses"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "promise_pure"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "promise_semipure"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "require_feature_set"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "loop_check"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "minimal_model"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[14])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate inclusion of submodule"))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous inclusion was here."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous declaration is here."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the same module in the same section."))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface section is redundant, given the"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the same module in the interface section."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant, given the"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[145])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[122])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[161])))
  },
  /* row 164 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__item_util_scalar_common_1[164]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__include_map_to_item_includes_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[0])),
    ((MR_Box) (parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_8[4])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_9[0])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_10[0])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[2])),
    ((MR_Box) (parse_tree__item_util__use_map_to_item_avails_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[3])),
    ((MR_Box) (parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_13[0])),
    ((MR_Box) (parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_13[1])),
    ((MR_Box) (parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[0])),
    ((MR_Box) (parse_tree__item_util__classify_include_modules_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_3[0])),
    ((MR_Box) (parse_tree__item_util__classify_include_modules_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_6[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 3 */
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

static /* final */ const MR_Box parse_tree__item_util_scalar_common_7[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_8[5][5] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "interface")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_7[0])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "implementation")),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_10[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_11[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_13[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};


static /* final */ const struct parse_tree__item_util__vector_common_type_12_0_s parse_tree__item_util_vector_common_12[4] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[38])) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[42])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[40])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[44])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__item_util__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__item_util__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__item_util__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
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
  {     parse_tree__item_util__parse_tree__item_util__enum_name_ordered_maybe_include_implicit_0 },
  {     parse_tree__item_util__parse_tree__item_util__enum_ordinal_ordered_maybe_include_implicit_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_maybe_include_implicit_0,

};

void MR_CALL 
parse_tree__item_util____Compare____maybe_include_implicit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
parse_tree__item_util____Unify____maybe_include_implicit_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6)
{
  {
    MR_Word SrcDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn_4, (MR_Integer) 1))));
    MR_Word MaybeIntDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns_8, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns_8, (MR_Integer) 1))));

    if ((MaybeIntDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *IntDefns_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIntDefn_9, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IntDefns_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeImpDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *ImpDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpDefn_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ImpDefns_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word * IntDefns_5,
  MR_Word * ImpDefns_6)
{
  {
    MR_Word SrcDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn_4, (MR_Integer) 1))));
    MR_Word MaybeIntDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns_8, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns_8, (MR_Integer) 1))));

    if ((MaybeIntDefn_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *IntDefns_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIntDefn_9, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IntDefns_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeImpDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *ImpDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpDefn_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ImpDefns_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
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
    MR_Word SrcDefnsSolver_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn_5, (MR_Integer) 1))));
    MR_Word MaybeIntDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsSolver_10, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsSolver_10, (MR_Integer) 1))));

    if ((MaybeIntDefn_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *IntDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIntDefn_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IntDefns_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeImpDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *ImpDefns_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpDefn_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ImpDefns_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    *ImpForeignEnums_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SrcDefnsStd_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_5, (MR_Integer) 1))));

    *IntDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd_14, (MR_Integer) 0))));
    *ImpDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd_14, (MR_Integer) 1))));
    *ImpForeignEnums_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd_14, (MR_Integer) 2))));
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
  {
    MR_Word Avail_10;

    switch (ImportOrUse_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_10 = (MR_Word) ((MR_Word) (Var_15));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13;

          {
            Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_13)));
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevAvails_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevAvails_0_11));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__use_map_to_item_avails_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevAvails_0_11,
  MR_Word * STATE_VARIABLE_RevAvails_12)
{
  {
    MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contexts_6, (MR_Integer) 0))));
    MR_Word Avail_10;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Avail_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_13)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevAvails_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevAvails_0_11));
    }
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
    MR_Word Explicit_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAndOrUse_14, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Explicit_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_21)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
          *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_58)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
          *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
          *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit_20, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_59)), STATE_VARIABLE_ImpImports_0_31, STATE_VARIABLE_ImpImports_32);
          *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
          *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_60)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
              *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
              *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
              *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
              *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 1))));

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_61)), STATE_VARIABLE_IntUseImpImports_0_35, STATE_VARIABLE_IntUseImpImports_36);
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
    MR_Word Implicit_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_14, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_14, (MR_Integer) 1))));
    MR_Word ImplicitContext_25;

    mercury__term__context_init_3_p_0((MR_String) "implicit", (MR_Integer) -1, &ImplicitContext_25);
    if ((MaybeExplicit_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (Implicit_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
            *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
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
      MR_Word Explicit_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_24, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Explicit_68)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit_68, (MR_Integer) 0))));

            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_62)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
            *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
            *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
            *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
            *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Explicit_68, (MR_Integer) 0))));

            switch (Implicit_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_63)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
                  *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
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
            MR_Word Context_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit_68, (MR_Integer) 0))));

            switch (Implicit_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_64)), STATE_VARIABLE_ImpImports_0_31, STATE_VARIABLE_ImpImports_32);
                  *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                  *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
                  *STATE_VARIABLE_ImpImports_32 = STATE_VARIABLE_ImpImports_0_31;
                  *STATE_VARIABLE_IntUseImpImports_36 = STATE_VARIABLE_IntUseImpImports_0_35;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_64)), STATE_VARIABLE_IntUseImpImports_0_35, STATE_VARIABLE_IntUseImpImports_36);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit_68, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Context_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_68, (MR_Integer) 1))));

                switch (Implicit_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_65)), STATE_VARIABLE_ImpUses_0_33, STATE_VARIABLE_ImpUses_34);
                      *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                      *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
                      *STATE_VARIABLE_IntUses_30 = STATE_VARIABLE_IntUses_0_29;
                      *STATE_VARIABLE_ImpUses_34 = STATE_VARIABLE_ImpUses_0_33;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntUses_0_29, STATE_VARIABLE_IntUses_30);
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
                MR_Word Context_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_68, (MR_Integer) 1))));

                switch (Implicit_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (Context_66)), STATE_VARIABLE_IntUseImpImports_0_35, STATE_VARIABLE_IntUseImpImports_36);
                      *STATE_VARIABLE_IntImports_28 = STATE_VARIABLE_IntImports_0_27;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (ImplicitContext_25)), STATE_VARIABLE_IntImports_0_27, STATE_VARIABLE_IntImports_28);
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
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_10_p_0(
  MR_Word ModuleName_11,
  MR_Word ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_IntImportMap_0_24,
  MR_Word * STATE_VARIABLE_IntImportMap_25,
  MR_Word STATE_VARIABLE_IntUseMap_0_26,
  MR_Word * STATE_VARIABLE_IntUseMap_27,
  MR_Word STATE_VARIABLE_ImpImportMap_0_28,
  MR_Word * STATE_VARIABLE_ImpImportMap_29,
  MR_Word STATE_VARIABLE_ImpUseMap_0_30,
  MR_Word * STATE_VARIABLE_ImpUseMap_31)
{
  {
    MR_Word MaybeExplicit_18;

    if (((MR_tag((MR_Word) ImportAndOrUse_12)) == (MR_Integer) 0))
    {
      MR_Word Explicit0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAndOrUse_12, (MR_Integer) 0))));

      {
        MaybeExplicit_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeExplicit_18, 0) = ((MR_Box) (Explicit0_17));
      }
    }
    else
      MaybeExplicit_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_12, (MR_Integer) 1))));
    if ((MaybeExplicit_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntImportMap_25 = STATE_VARIABLE_IntImportMap_0_24;
      *STATE_VARIABLE_IntUseMap_27 = STATE_VARIABLE_IntUseMap_0_26;
      *STATE_VARIABLE_ImpImportMap_29 = STATE_VARIABLE_ImpImportMap_0_28;
      *STATE_VARIABLE_ImpUseMap_31 = STATE_VARIABLE_ImpUseMap_0_30;
    }
    else
    {
      MR_Word Explicit_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_18, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Explicit_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit_20, (MR_Integer) 0))));
            MR_Word Var_47;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Context_21));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) (Var_47)), STATE_VARIABLE_IntImportMap_0_24, STATE_VARIABLE_IntImportMap_25);
            *STATE_VARIABLE_IntUseMap_27 = STATE_VARIABLE_IntUseMap_0_26;
            *STATE_VARIABLE_ImpImportMap_29 = STATE_VARIABLE_ImpImportMap_0_28;
            *STATE_VARIABLE_ImpUseMap_31 = STATE_VARIABLE_ImpUseMap_0_30;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_44;
            MR_Word Context_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Explicit_20, (MR_Integer) 0))));

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Context_50));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) (Var_44)), STATE_VARIABLE_IntUseMap_0_26, STATE_VARIABLE_IntUseMap_27);
            *STATE_VARIABLE_IntImportMap_25 = STATE_VARIABLE_IntImportMap_0_24;
            *STATE_VARIABLE_ImpImportMap_29 = STATE_VARIABLE_ImpImportMap_0_28;
            *STATE_VARIABLE_ImpUseMap_31 = STATE_VARIABLE_ImpUseMap_0_30;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_41;
            MR_Word Context_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit_20, (MR_Integer) 0))));

            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Context_51));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) (Var_41)), STATE_VARIABLE_ImpImportMap_0_28, STATE_VARIABLE_ImpImportMap_29);
            *STATE_VARIABLE_IntImportMap_25 = STATE_VARIABLE_IntImportMap_0_24;
            *STATE_VARIABLE_IntUseMap_27 = STATE_VARIABLE_IntUseMap_0_26;
            *STATE_VARIABLE_ImpUseMap_31 = STATE_VARIABLE_ImpUseMap_0_30;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_38;
                MR_Word Context_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 1))));

                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Context_52));
                  MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) (Var_38)), STATE_VARIABLE_ImpUseMap_0_30, STATE_VARIABLE_ImpUseMap_31);
                *STATE_VARIABLE_IntImportMap_25 = STATE_VARIABLE_IntImportMap_0_24;
                *STATE_VARIABLE_IntUseMap_27 = STATE_VARIABLE_IntUseMap_0_26;
                *STATE_VARIABLE_ImpImportMap_29 = STATE_VARIABLE_ImpImportMap_0_28;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 1))));
                MR_Word ImpContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_20, (MR_Integer) 2))));
                MR_Word Var_32;
                MR_Word Var_35;

                {
                  Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (IntContext_22));
                  MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) (Var_32)), STATE_VARIABLE_IntUseMap_0_26, STATE_VARIABLE_IntUseMap_27);
                {
                  Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ImpContext_23));
                  MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) (Var_35)), STATE_VARIABLE_ImpImportMap_0_28, STATE_VARIABLE_ImpImportMap_29);
                *STATE_VARIABLE_IntImportMap_25 = STATE_VARIABLE_IntImportMap_0_24;
                *STATE_VARIABLE_ImpUseMap_31 = STATE_VARIABLE_ImpUseMap_0_30;
              }
              break;
          }
          break;
      }
    }
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
    MR_Word Explicit_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAndOrUse_10, (MR_Integer) 0))));
    MR_Word ExplicitIntAvails_14;
    MR_Word ExplicitImpAvails_15;

    parse_tree__item_util__get_explicit_avails_4_p_0(ModuleName_9, Explicit_13, &ExplicitIntAvails_14, &ExplicitImpAvails_15);
    *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_14, STATE_VARIABLE_RevIntAvails_0_26);
    *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_15, STATE_VARIABLE_RevImpAvails_0_28);
  }
  else
  {
    MR_Word Implicit_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportAndOrUse_10, (MR_Integer) 1))));
    MR_Word ImplicitIntAvails_18;
    MR_Word ImplicitImpAvails_19;

    parse_tree__item_util__get_implicit_avails_4_p_0(ModuleName_9, Implicit_16, &ImplicitIntAvails_18, &ImplicitImpAvails_19);
    switch (IncludeImplicit_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((MaybeExplicit_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_18, STATE_VARIABLE_RevIntAvails_0_26);
          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
        }
        else
        {
          MR_Word Explicit_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_17, (MR_Integer) 0))));
          MR_Word ExplicitIntAvails_66;
          MR_Word ExplicitImpAvails_67;

          parse_tree__item_util__get_explicit_avails_4_p_0(ModuleName_9, Explicit_65, &ExplicitIntAvails_66, &ExplicitImpAvails_67);
          switch (MR_tag((MR_Word) Explicit_65)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_66, STATE_VARIABLE_RevIntAvails_0_26);
                *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_67, STATE_VARIABLE_RevImpAvails_0_28);
              }
              break;
            case (MR_Integer) 1:
              switch (Implicit_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_66, STATE_VARIABLE_RevIntAvails_0_26);
                    *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_67, STATE_VARIABLE_RevImpAvails_0_28);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_18, STATE_VARIABLE_RevIntAvails_0_26);
                    *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (Implicit_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_66, STATE_VARIABLE_RevIntAvails_0_26);
                    *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_67, STATE_VARIABLE_RevImpAvails_0_28);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_18, STATE_VARIABLE_RevIntAvails_0_26);
                    *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_18, STATE_VARIABLE_RevIntAvails_0_26);
                    *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_67, STATE_VARIABLE_RevImpAvails_0_28);
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit_65, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (Implicit_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_66, STATE_VARIABLE_RevIntAvails_0_26);
                        *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_67, STATE_VARIABLE_RevImpAvails_0_28);
                      }
                      break;
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_18, STATE_VARIABLE_RevIntAvails_0_26);
                        *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (Implicit_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_66, STATE_VARIABLE_RevIntAvails_0_26);
                        *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_67, STATE_VARIABLE_RevImpAvails_0_28);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitIntAvails_18, STATE_VARIABLE_RevIntAvails_0_26);
                        *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ImplicitImpAvails_19, STATE_VARIABLE_RevImpAvails_0_28);
                      }
                      break;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeExplicit_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_RevIntAvails_27 = STATE_VARIABLE_RevIntAvails_0_26;
          *STATE_VARIABLE_RevImpAvails_29 = STATE_VARIABLE_RevImpAvails_0_28;
        }
        else
        {
          MR_Word Explicit_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_17, (MR_Integer) 0))));
          MR_Word ExplicitIntAvails_57;
          MR_Word ExplicitImpAvails_58;

          parse_tree__item_util__get_explicit_avails_4_p_0(ModuleName_9, Explicit_56, &ExplicitIntAvails_57, &ExplicitImpAvails_58);
          *STATE_VARIABLE_RevIntAvails_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitIntAvails_57, STATE_VARIABLE_RevIntAvails_0_26);
          *STATE_VARIABLE_RevImpAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), ExplicitImpAvails_58, STATE_VARIABLE_RevImpAvails_0_28);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__get_explicit_avails_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Explicit_6,
  MR_Word * IntAvails_7,
  MR_Word * ImpAvails_8)
{
  switch (MR_tag((MR_Word) Explicit_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit_6, (MR_Integer) 0))));
        MR_Word Avail_11;
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (ModuleName_5));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_11 = (MR_Word) ((MR_Word) (Var_26));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntAvails_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *ImpAvails_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_24;
        MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Explicit_6, (MR_Integer) 0))));
        MR_Word Avail_29;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (ModuleName_5));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Context_28));
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_29 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_24)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntAvails_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *ImpAvails_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_22;
        MR_Word Context_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit_6, (MR_Integer) 0))));
        MR_Word Avail_31;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (ModuleName_5));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Context_30));
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Avail_31 = (MR_Word) ((MR_Word) (Var_22));
        *IntAvails_7 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ImpAvails_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*IntAvails_7));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_20;
            MR_Word Context_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_6, (MR_Integer) 1))));
            MR_Word Avail_33;

            {
              Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (ModuleName_5));
              MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (Context_32));
              MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Avail_33 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_20)));
            *IntAvails_7 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ImpAvails_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_33));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*IntAvails_7));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_6, (MR_Integer) 1))));
            MR_Word ImpContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit_6, (MR_Integer) 2))));
            MR_Word IntAvail_14;
            MR_Word ImpAvail_15;
            MR_Word Var_16;
            MR_Word Var_17;

            {
              Var_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (ModuleName_5));
              MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (IntContext_12));
              MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            IntAvail_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_16)));
            {
              Var_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ModuleName_5));
              MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ImpContext_13));
              MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ImpAvail_15 = (MR_Word) ((MR_Word) (Var_17));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *IntAvails_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IntAvail_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ImpAvails_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpAvail_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__item_util__get_implicit_avails_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Implicit_6,
  MR_Word * IntAvails_7,
  MR_Word * ImpAvails_8)
{
  {
    MR_Word Context_9;

    mercury__term__context_init_3_p_0((MR_String) "implicit", (MR_Integer) -1, &Context_9);
    switch (Implicit_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Var_14;
          MR_Word Avail_21;

          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (ModuleName_5));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_21 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_14)));
          *IntAvails_7 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ImpAvails_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_21));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*IntAvails_7));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Avail_11;
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (ModuleName_5));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_11 = (MR_Word) ((MR_Word) (Var_18));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *IntAvails_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *ImpAvails_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_16;
          MR_Word Avail_20;

          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (ModuleName_5));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Avail_20 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_16)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *IntAvails_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *ImpAvails_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
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
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SectionImportUse_3));
  }
}

static void MR_CALL 
parse_tree__item_util__warn_if_import_for_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word AncestorName_8,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_17,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word ImportOrUse_11;
    MR_Word STATE_VARIABLE_SectionImportOrUseMap_21_21;
    MR_Box conv0_ImportOrUse_11;

    succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), &conv0_ImportOrUse_11, STATE_VARIABLE_SectionImportOrUseMap_0_17, &STATE_VARIABLE_SectionImportOrUseMap_21_21);
    if (succeeded)
    {
      ImportOrUse_11 = ((MR_Word) (conv0_ImportOrUse_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Context_12;
      MR_Word MainPieces_13;
      MR_Word Msg_15;
      MR_Word Spec_16;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_59;

      *STATE_VARIABLE_SectionImportOrUseMap_18 = STATE_VARIABLE_SectionImportOrUseMap_21_21;
      switch (MR_tag((MR_Word) ImportOrUse_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportOrUse_11, (MR_Integer) 0))));
          break;
        case (MR_Integer) 1:
          Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportOrUse_11, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ImportOrUse_11, (MR_Integer) 0))));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImportOrUse_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImportOrUse_11, (MR_Integer) 1))));
              break;
            case (MR_Integer) 1:
              {
                MR_Word ContextA_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImportOrUse_11, (MR_Integer) 1))));
                MR_Word ContextB_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImportOrUse_11, (MR_Integer) 2))));
                MR_Word Var_71;

                mercury__term____Compare____context_0_0(&Var_71, ContextB_68, ContextA_67);
                succeeded = ((MR_Integer) 1 == Var_71);
                if (succeeded)
                  Context_12 = ContextB_68;
                else
                  Context_12 = ContextA_67;
              }
              break;
          }
          break;
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (ModuleName_7));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (AncestorName_8));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[157])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[155])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
      }
      {
        MainPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[154])));
        MR_hl_field(MR_mktag(1), MainPieces_13, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (MainPieces_13));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[165])));
      }
      {
        Msg_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Msg_15, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(2), Msg_15, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Msg_15));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.warn_if_import_for_ancestor\'/6"));
        MR_hl_field(MR_mktag(3), Spec_16, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Spec_16, 3) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(3), Spec_16, 4) = ((MR_Box) (Var_59));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      *STATE_VARIABLE_SectionImportOrUseMap_18 = STATE_VARIABLE_SectionImportOrUseMap_0_17;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__record_imp_use_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_ImportUseMap_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word OldEntry_11;
    MR_Box conv0_OldEntry_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_26, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_11);
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
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word PrevContext_17;
            MR_Word OldPieces_18;
            MR_Word DupPieces_20;
            MR_Word DupMsg_22;
            MR_Word PrevMsg_23;
            MR_Word Spec_24;
            MR_Word Var_65;
            MR_Word Var_68;
            MR_Word Var_71;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_88;
            MR_Word Var_89;

            switch (MR_tag((MR_Word) OldEntry_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_11, (MR_Integer) 0))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[146]));
                }
                break;
              case (MR_Integer) 1:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_11, (MR_Integer) 0))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[149]));
                }
                break;
              case (MR_Integer) 2:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldEntry_11, (MR_Integer) 0))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[140]));
                }
                break;
              case (MR_Integer) 3:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldEntry_11, (MR_Integer) 1))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[149]));
                }
                break;
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (ModuleName_7));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[150])));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[135])));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[134])));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
            }
            DupPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, OldPieces_18);
            {
              DupMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DupMsg_22, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), DupMsg_22, 1) = ((MR_Box) (DupPieces_20));
            }
            {
              PrevMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PrevMsg_23, 0) = ((MR_Box) (PrevContext_17));
              MR_hl_field(MR_mktag(0), PrevMsg_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[133])));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (PrevMsg_23));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (DupMsg_22));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6"));
              MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), Spec_24, 3) = ((MR_Box) (Var_88));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_29 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OldEntry_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6", (MR_String) "unexpected OldEntry");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PrevContext_17;
                MR_Word OldPieces_18;
                MR_Word DupPieces_20;
                MR_Word DupMsg_22;
                MR_Word PrevMsg_23;
                MR_Word Spec_24;
                MR_Word Var_65;
                MR_Word Var_68;
                MR_Word Var_71;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_88;
                MR_Word Var_89;

                switch (MR_tag((MR_Word) OldEntry_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_11, (MR_Integer) 0))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[146]));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_11, (MR_Integer) 0))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[149]));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldEntry_11, (MR_Integer) 0))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[140]));
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldEntry_11, (MR_Integer) 1))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[149]));
                    }
                    break;
                }
                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (ModuleName_7));
                }
                {
                  Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
                  MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[150])));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[128])));
                  MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[135])));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[134])));
                  MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
                }
                DupPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, OldPieces_18);
                {
                  DupMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DupMsg_22, 0) = ((MR_Box) (Context_8));
                  MR_hl_field(MR_mktag(0), DupMsg_22, 1) = ((MR_Box) (DupPieces_20));
                }
                {
                  PrevMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PrevMsg_23, 0) = ((MR_Box) (PrevContext_17));
                  MR_hl_field(MR_mktag(0), PrevMsg_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[133])));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (PrevMsg_23));
                  MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (DupMsg_22));
                  MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
                }
                {
                  Spec_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_use\'/6"));
                  MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(0), Spec_24, 3) = ((MR_Box) (Var_88));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_29 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
                }
              }
              break;
          }
          break;
      }
      *STATE_VARIABLE_ImportUseMap_27 = STATE_VARIABLE_ImportUseMap_0_26;
    }
    else
    {
      MR_Word Var_92;

      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Context_8));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_92)), STATE_VARIABLE_ImportUseMap_0_26, STATE_VARIABLE_ImportUseMap_27);
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
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
            MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_11, (MR_Integer) 0))));
            MR_Word DupPieces_13;
            MR_Word DupMsg_15;
            MR_Word PrevMsg_16;
            MR_Word Spec_17;
            MR_Word Var_33;
            MR_Word Var_36;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_64;
            MR_Word Var_65;

            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ModuleName_7));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[148])));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[139])));
              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
            }
            {
              DupPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[134])));
              MR_hl_field(MR_mktag(1), DupPieces_13, 1) = ((MR_Box) (Var_33));
            }
            {
              DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DupMsg_15, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
            }
            {
              PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
              MR_hl_field(MR_mktag(0), PrevMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[133])));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (PrevMsg_16));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (DupMsg_15));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
            }
            {
              Spec_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_imp_import\'/6"));
              MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), Spec_17, 3) = ((MR_Box) (Var_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
            }
            *STATE_VARIABLE_ImportUseMap_24 = STATE_VARIABLE_ImportUseMap_0_23;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntUseContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_11, (MR_Integer) 0))));
            MR_Word Var_29;

            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (IntUseContext_18));
              MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) (Context_8));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_29)), STATE_VARIABLE_ImportUseMap_0_23, STATE_VARIABLE_ImportUseMap_24);
            *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_imp_import\'/6", (MR_String) "unexpected OldEntry");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_imp_import\'/6", (MR_String) "unexpected OldEntry");
            return;
          }
          break;
      }
    else
    {
      MR_Word Var_68;

      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (Context_8));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_68)), STATE_VARIABLE_ImportUseMap_0_23, STATE_VARIABLE_ImportUseMap_24);
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
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
            MR_Word PrevContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_11, (MR_Integer) 0))));
            MR_Word DupPieces_13;
            MR_Word DupMsg_15;
            MR_Word PrevMsg_16;
            MR_Word Spec_17;
            MR_Word Var_31;
            MR_Word Var_34;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_62;
            MR_Word Var_63;

            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (ModuleName_7));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[142])));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[135])));
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
            }
            {
              DupPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[134])));
              MR_hl_field(MR_mktag(1), DupPieces_13, 1) = ((MR_Box) (Var_31));
            }
            {
              DupMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DupMsg_15, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), DupMsg_15, 1) = ((MR_Box) (DupPieces_13));
            }
            {
              PrevMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PrevMsg_16, 0) = ((MR_Box) (PrevContext_12));
              MR_hl_field(MR_mktag(0), PrevMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[133])));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (PrevMsg_16));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (DupMsg_15));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
            }
            {
              Spec_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.record_int_use\'/6"));
              MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), Spec_17, 3) = ((MR_Box) (Var_62));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.record_int_use\'/6", (MR_String) "unexpected OldEntry");
            return;
          }
          break;
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
      MR_Word Var_66;

      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Context_8));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Var_66)), STATE_VARIABLE_ImportUseMap_0_23, STATE_VARIABLE_ImportUseMap_24);
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__record_int_import_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_ImportUseMap_9)
{
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Context_6));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_10)), STATE_VARIABLE_ImportUseMap_0_8, STATE_VARIABLE_ImportUseMap_9);
  }
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
  {
    MR_Word DupPieces_14;
    MR_Word DupMsg_16;
    MR_Word PrevMsg_17;
    MR_Word Spec_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_49;
    MR_Word Var_50;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (DeclName_9));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ModuleName_10));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Section_8));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[131])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[129])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[128])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      DupPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DupPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[127])));
      MR_hl_field(MR_mktag(1), DupPieces_14, 1) = ((MR_Box) (Var_23));
    }
    {
      DupMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DupMsg_16, 0) = ((MR_Box) (DuplicateContext_12));
      MR_hl_field(MR_mktag(0), DupMsg_16, 1) = ((MR_Box) (DupPieces_14));
    }
    {
      PrevMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrevMsg_17, 0) = ((MR_Box) (PrevContext_11));
      MR_hl_field(MR_mktag(0), PrevMsg_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[133])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (PrevMsg_17));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (DupMsg_16));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.report_duplicate_avail_context\'/7"));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), Spec_18, 3) = ((MR_Box) (Var_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_20;

    parse_tree__item_util__report_duplicate_avail_context_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
  }
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
  {
    MR_Word HeadContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMContexts_11, (MR_Integer) 0))));
    MR_Word TailContexts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMContexts_11, (MR_Integer) 1))));
    MR_Word SortedContexts_16;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (HeadContext_14));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (TailContexts_15));
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_22, &SortedContexts_16);
    if ((SortedContexts_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.item_util.report_any_duplicate_avail_contexts\'/7", (MR_String) "SortedContexts = []");
        return;
      }
    else
    {
      MR_Word TailSortedContexts_17;

      *HeadSortedContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_16, (MR_Integer) 0))));
      TailSortedContexts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_16, (MR_Integer) 1))));
      if ((TailSortedContexts_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      else
      {
        MR_Word Var_23;
        MR_Box conv1_STATE_VARIABLE_Specs_21;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_7[2]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Section_8));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (DeclName_9));
          MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (ModuleName_10));
          MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (*HeadSortedContext_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), Var_23, TailSortedContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_20)), &conv1_STATE_VARIABLE_Specs_21);
        *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_21));
      }
    }
  }
}

static void MR_CALL 
parse_tree__item_util__module_names_contexts_to_item_includes_acc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Contexts_6,
  MR_Word STATE_VARIABLE_RevIncludes_0_11,
  MR_Word * STATE_VARIABLE_RevIncludes_12)
{
  {
    MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contexts_6, (MR_Integer) 0))));
    MR_Word Include_10;

    {
      Include_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Include_10, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), Include_10, 1) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Include_10, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevIncludes_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Include_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevIncludes_0_11));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__include_map_to_item_includes_acc_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_RevIntIncludes_0_14,
  MR_Word * STATE_VARIABLE_RevIntIncludes_15,
  MR_Word STATE_VARIABLE_RevImpIncludes_0_16,
  MR_Word * STATE_VARIABLE_RevImpIncludes_17)
{
  {
    MR_Word Section_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 1))));
    MR_Word Include_13;

    {
      Include_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Include_13, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Include_13, 1) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Include_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    switch (Section_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevImpIncludes_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Include_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevImpIncludes_0_16));
          }
          *STATE_VARIABLE_RevIntIncludes_15 = STATE_VARIABLE_RevIntIncludes_0_14;
        }
        break;
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevIntIncludes_15 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Include_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevIntIncludes_0_14));
          }
          *STATE_VARIABLE_RevImpIncludes_17 = STATE_VARIABLE_RevImpIncludes_0_16;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__classify_include_module_8_p_0(
  MR_Word Section_9,
  MR_Word ItemInclude_10,
  MR_Word STATE_VARIABLE_ContextMap_0_26,
  MR_Word * STATE_VARIABLE_ContextMap_27,
  MR_Word STATE_VARIABLE_InclMap_0_28,
  MR_Word * STATE_VARIABLE_InclMap_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude_10, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInclude_10, (MR_Integer) 1))));
    MR_Word PrevEntry_17;
    MR_Box conv0_PrevEntry_17;

    mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Context_15)), STATE_VARIABLE_ContextMap_0_26, STATE_VARIABLE_ContextMap_27);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), STATE_VARIABLE_InclMap_0_28, ((MR_Box) (ModuleName_14)), &conv0_PrevEntry_17);
    if (succeeded)
    {
      PrevEntry_17 = ((MR_Word) (conv0_PrevEntry_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word PrevContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrevEntry_17, (MR_Integer) 1))));
      MR_Word MainPieces_20;
      MR_Word MainMsg_21;
      MR_Word PrevMsg_23;
      MR_Word Spec_24;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_51;
      MR_Word Var_52;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ModuleName_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[124])));
      }
      {
        MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[121])));
        MR_hl_field(MR_mktag(1), MainPieces_20, 1) = ((MR_Box) (Var_35));
      }
      {
        MainMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MainMsg_21, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), MainMsg_21, 1) = ((MR_Box) (MainPieces_20));
      }
      {
        PrevMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PrevMsg_23, 0) = ((MR_Box) (PrevContext_19));
        MR_hl_field(MR_mktag(0), PrevMsg_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[126])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (PrevMsg_23));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MainMsg_21));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        Spec_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.classify_include_module\'/8"));
        MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_24, 3) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_31 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
      }
      *STATE_VARIABLE_InclMap_29 = STATE_VARIABLE_InclMap_0_28;
    }
    else
    {
      MR_Word Entry_25;

      {
        Entry_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_25, 0) = (MR_Box) ((MR_Unsigned) (Section_9));
        MR_hl_field(MR_mktag(0), Entry_25, 1) = ((MR_Box) (Context_15));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_25)), STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29);
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
    }
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  {
    MR_Word ModeDefnInfo_4;
    MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (EqvDefn_5));
    }
    {
      ModeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return ModeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  {
    MR_Word ModeDefnInfo_4;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 5))));

    {
      ModeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), ModeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return ModeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  {
    MR_Word InstDefnInfo_4;
    MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 5))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 6))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (EqvDefn_5));
    }
    {
      InstDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 2) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 3) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 5) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 6) = ((MR_Box) (Var_12));
    }
    return InstDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  {
    MR_Word InstDefnInfo_4;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 5))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 6))));

    {
      InstDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 1) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 5) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), InstDefnInfo_4, 6) = ((MR_Box) (Var_12));
    }
    return InstDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_type_defn_1_f_0(
  MR_Word ForeignDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word ForeignDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (ForeignDefn_5));
    }
    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_sub_type_defn_1_f_0(
  MR_Word SubDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word SubDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SubDefn_5)));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefnInfo_3, (MR_Integer) 5))));

    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_du_type_defn_1_f_0(
  MR_Word DuDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word DuDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6 = (MR_Word) ((MR_Word) (DuDefn_5));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_3, (MR_Integer) 5))));

    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_eqv_type_defn_1_f_0(
  MR_Word EqvDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word EqvDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (EqvDefn_5));
    }
    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_solver_type_defn_1_f_0(
  MR_Word SolverDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word SolverDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (SolverDefn_5)));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefnInfo_3, (MR_Integer) 5))));

    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_abstract_type_defn_1_f_0(
  MR_Word AbstractDefnInfo_3)
{
  {
    MR_Word TypeDefnInfo_4;
    MR_Word AbstractDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefnInfo_3, (MR_Integer) 5))));

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (AbstractDefn_5));
    }
    {
      TypeDefnInfo_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), TypeDefnInfo_4, 5) = ((MR_Box) (Var_11));
    }
    return TypeDefnInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_dummy_pragma_item_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box T_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__term__context_init_0_f_0();
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = T_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_marker_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word MarkerInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word SymNameArityPF_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MarkerInfo_5, (MR_Integer) 0))));
    MR_Word Kind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MarkerInfo_5, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word PrefOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SymNameArityPF_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityPF_8, (MR_Integer) 1))));
    MR_Word Arity_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArityPF_8, (MR_Integer) 2))));
    MR_Word PFU_13;
    MR_Word SymNameArityMaybePF_14;

    switch (PrefOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PFU_13 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        PFU_13 = (MR_Integer) 0;
        break;
    }
    {
      SymNameArityMaybePF_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SymNameArityMaybePF_14, 0) = (MR_Box) ((MR_Unsigned) (PFU_13));
      MR_hl_field(MR_mktag(0), SymNameArityMaybePF_14, 1) = ((MR_Box) (SymName_11));
      MR_hl_field(MR_mktag(0), SymNameArityMaybePF_14, 2) = ((MR_Box) (Arity_12));
    }
    switch (Kind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
        {
          MR_Word DeclPragma_17;
          MR_Word Pragma_18;

          {
            DeclPragma_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeclPragma_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), DeclPragma_17, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_18, 0) = ((MR_Box) (DeclPragma_17));
            MR_hl_field(MR_mktag(0), Pragma_18, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_18, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_18));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ImplPragma_15;
          MR_Word Pragma_16;

          {
            ImplPragma_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), ImplPragma_15, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_16, 0) = ((MR_Box) (ImplPragma_15));
            MR_hl_field(MR_mktag(0), Pragma_16, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_16, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_16));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word ImplPragma_19;
          MR_Word Pragma_20;

          {
            ImplPragma_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), ImplPragma_19, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_20, 0) = ((MR_Box) (ImplPragma_19));
            MR_hl_field(MR_mktag(0), Pragma_20, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_20, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImplPragma_21;
          MR_Word Pragma_22;

          {
            ImplPragma_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), ImplPragma_21, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_22, 0) = ((MR_Box) (ImplPragma_21));
            MR_hl_field(MR_mktag(0), Pragma_22, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_22, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_22));
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word ImplPragma_23;
          MR_Word Pragma_24;

          {
            ImplPragma_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_23, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), ImplPragma_23, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_24, 0) = ((MR_Box) (ImplPragma_23));
            MR_hl_field(MR_mktag(0), Pragma_24, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_24, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_24));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ImplPragma_25;
          MR_Word Pragma_26;

          {
            ImplPragma_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_25, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), ImplPragma_25, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_26, 0) = ((MR_Box) (ImplPragma_25));
            MR_hl_field(MR_mktag(0), Pragma_26, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_26, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_26));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ImplPragma_27;
          MR_Word Pragma_28;

          {
            ImplPragma_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), ImplPragma_27, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_28, 0) = ((MR_Box) (ImplPragma_27));
            MR_hl_field(MR_mktag(0), Pragma_28, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_28, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_28));
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DeclPragma_29;
          MR_Word Pragma_30;

          {
            DeclPragma_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeclPragma_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), DeclPragma_29, 1) = ((MR_Box) (SymNameArityMaybePF_14));
          }
          {
            Pragma_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_30, 0) = ((MR_Box) (DeclPragma_29));
            MR_hl_field(MR_mktag(0), Pragma_30, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_30, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_30));
          }
        }
        break;
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mm_tabling_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (Info_5)));

    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_trailing_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Info_5)));

    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_exceptions_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Info_5)));

    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_unused_args_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9 = (MR_Word) ((MR_Word) (Info_5));

    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_struct_reuse_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Info_5));
    }
    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_struct_sharing_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Info_5));
    }
    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_termination2_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Info_5));
    }
    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_termination_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Info_5));
    }
    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_spec_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Info_5)));

    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_proc_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Word SeqNum_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word Pragma_8;
    MR_Word Var_9 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Info_5)));

    {
      Pragma_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Pragma_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Pragma_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Pragma_8, 2) = ((MR_Box) (SeqNum_7));
    }
    {
      Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_8));
    }
    return Item_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_repn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mutable_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_finalise_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_initialise_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_promise_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_generated_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_impl_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_decl_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_clause_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) ((MR_Word) (X_3));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_export_enum_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_foreign_enum_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mode_decl_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (X_3)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_pred_decl_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (X_3)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_instance_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_typeclass_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_mode_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_inst_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_type_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_avail_use_1_f_0(
  MR_Word AvailUseInfo_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (AvailUseInfo_3)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_avail_import_1_f_0(
  MR_Word AvailImportInfo_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) ((MR_Word) (AvailImportInfo_3));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_use_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word UseInfo_4;
    MR_Word Var_5;

    Var_5 = mercury__term__context_init_0_f_0();
    {
      UseInfo_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UseInfo_4, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), UseInfo_4, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), UseInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return UseInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_import_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word ImportInfo_4;
    MR_Word Var_5;

    Var_5 = mercury__term__context_init_0_f_0();
    {
      ImportInfo_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImportInfo_4, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), ImportInfo_4, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), ImportInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return ImportInfo_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_use_avail_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Avail_4;
    MR_Word UseInfo_5;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    {
      UseInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UseInfo_5, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), UseInfo_5, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), UseInfo_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Avail_4 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (UseInfo_5)));
    return Avail_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_import_avail_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Avail_4;
    MR_Word ImportInfo_5;
    MR_Word Var_6;

    Var_6 = mercury__term__context_init_0_f_0();
    {
      ImportInfo_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ImportInfo_5, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), ImportInfo_5, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), ImportInfo_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Avail_4 = (MR_Word) ((MR_Word) (ImportInfo_5));
    return Avail_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_include_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word Include_4;
    MR_Word Var_5;

    Var_5 = mercury__term__context_init_0_f_0();
    {
      Include_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Include_4, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), Include_4, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), Include_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return Include_4;
  }
}

static void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_IntDefns_5;
    MR_Word conv0_ImpDefns_6;

    parse_tree__item_util__mode_ctor_checked_defn_get_src_defns_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntDefns_5, &conv0_ImpDefns_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_IntDefns_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_ImpDefns_6));
  }
}

void MR_CALL 
parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(
  MR_Word ModeCtorCheckedMap_4,
  MR_Word * IntModeDefns_5,
  MR_Word * ImpModeDefns_6)
{
  {
    MR_Word ModeCtorCheckedDefns_7;
    MR_Word IntModeDefnLists_8;
    MR_Word ImpModeDefnLists_9;

    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ModeCtorCheckedMap_4, &ModeCtorCheckedDefns_7);
    mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[10]), (MR_Word) (&parse_tree__item_util_scalar_common_1[10]), (MR_Word) (&parse_tree__item_util_scalar_common_2[16]), ModeCtorCheckedDefns_7, &IntModeDefnLists_8, &ImpModeDefnLists_9);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[9]), IntModeDefnLists_8, IntModeDefns_5);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[9]), ImpModeDefnLists_9, ImpModeDefns_6);
  }
}

static void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_IntDefns_5;
    MR_Word conv0_ImpDefns_6;

    parse_tree__item_util__inst_ctor_checked_defn_get_src_defns_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntDefns_5, &conv0_ImpDefns_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_IntDefns_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_ImpDefns_6));
  }
}

void MR_CALL 
parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(
  MR_Word InstCtorCheckedMap_4,
  MR_Word * IntInstDefns_5,
  MR_Word * ImpInstDefns_6)
{
  {
    MR_Word InstCtorCheckedDefns_7;
    MR_Word IntInstDefnLists_8;
    MR_Word ImpInstDefnLists_9;

    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), InstCtorCheckedMap_4, &InstCtorCheckedDefns_7);
    mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[8]), (MR_Word) (&parse_tree__item_util_scalar_common_1[8]), (MR_Word) (&parse_tree__item_util_scalar_common_2[15]), InstCtorCheckedDefns_7, &IntInstDefnLists_8, &ImpInstDefnLists_9);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[7]), IntInstDefnLists_8, IntInstDefns_5);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[7]), ImpInstDefnLists_9, ImpInstDefns_6);
  }
}

static void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
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
}

void MR_CALL 
parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * IntTypeDefns_6,
  MR_Word * ImpTypeDefns_7,
  MR_Word * ImpForeignEnums_8)
{
  {
    MR_Word TypeCtorCheckedDefns_9;
    MR_Word IntTypeDefnLists_10;
    MR_Word ImpTypeDefnLists_11;
    MR_Word ImpForeignEnumLists_12;

    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), TypeCtorCheckedMap_5, &TypeCtorCheckedDefns_9);
    mercury__list__map3_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[5]), (MR_Word) (&parse_tree__item_util_scalar_common_1[5]), (MR_Word) (&parse_tree__item_util_scalar_common_1[6]), (MR_Word) (&parse_tree__item_util_scalar_common_2[14]), TypeCtorCheckedDefns_9, &IntTypeDefnLists_10, &ImpTypeDefnLists_11, &ImpForeignEnumLists_12);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[4]), IntTypeDefnLists_10, IntTypeDefns_6);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[4]), ImpTypeDefnLists_11, ImpTypeDefns_7);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpForeignEnumLists_12, ImpForeignEnums_8);
  }
}

MR_Box MR_CALL 
parse_tree__item_util__project_pragma_type_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Pragma_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));

    return Pragma_3;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__get_use_module_name_1_f_0(
  MR_Word AvailUseInfo_3)
{
  {
    MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AvailUseInfo_3, (MR_Integer) 0))));

    return ModuleName_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__get_import_module_name_1_f_0(
  MR_Word AvailImportInfo_3)
{
  {
    MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AvailImportInfo_3, (MR_Integer) 0))));

    return ModuleName_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__get_avail_module_name_1_f_0(
  MR_Word ItemAvail_3)
{
  {
    MR_Word ModuleName_4;

    if (((MR_tag((MR_Word) ItemAvail_3)) == (MR_Integer) 0))
    {
      MR_Word AvailImportInfo_5 = (MR_Word) ((MR_Word) (ItemAvail_3));

      ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AvailImportInfo_5, (MR_Integer) 0))));
    }
    else
    {
      MR_Word AvailUseInfo_8 = (MR_Word) (MR_body((MR_Word) (ItemAvail_3), (MR_Integer) 1));

      ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AvailUseInfo_8, (MR_Integer) 0))));
    }
    return ModuleName_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__get_use_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Context_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__get_import_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Context_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__get_avail_context_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Context_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word Var_6 = (MR_Word) ((MR_Word) (HeadVar__1_1));

      Context_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));
    }
    else
    {
      MR_Word Var_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));

      Context_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    }
    return Context_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__item_include_module_name_1_f_0(
  MR_Word Incl_3)
{
  {
    MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incl_3, (MR_Integer) 0))));

    return ModuleName_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(
  MR_Word ParseTreeModuleSrc_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__raw_compilation_unit_project_name_1_f_0(
  MR_Word RawCompUnit_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_3, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__item_desc_pieces_1_f_0(
  MR_Word Item_3)
{
  {
    MR_Word Pieces_4;

    switch (MR_tag((MR_Word) Item_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[12]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemPredDecl_9 = (MR_Word) (MR_body((MR_Word) (Item_3), (MR_Integer) 1));
          MR_Word PorF_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_9, (MR_Integer) 1))) & (MR_Integer) 1);

          switch (PorF_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[34]));
              break;
            case (MR_Integer) 0:
              Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[36]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[28]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[18]));
            break;
          case (MR_Integer) 1:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[20]));
            break;
          case (MR_Integer) 2:
            {
              MR_Word ItemPromise_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word PromiseType_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_17, (MR_Integer) 0))) & (MR_Integer) 3);

              Pieces_4 = ((&parse_tree__item_util_vector_common_12[0 + PromiseType_18]))->parse_tree__item_util__vector_common_type_12_0__vct_12_f_0;
            }
            break;
          case (MR_Integer) 3:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[50]));
            break;
          case (MR_Integer) 4:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[26]));
            break;
          case (MR_Integer) 5:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[22]));
            break;
          case (MR_Integer) 6:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[16]));
            break;
          case (MR_Integer) 7:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[32]));
            break;
          case (MR_Integer) 8:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[46]));
            break;
          case (MR_Integer) 9:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[24]));
            break;
          case (MR_Integer) 10:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[30]));
            break;
          case (MR_Integer) 11:
            {
              MR_Word ItemDeclPragma_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemDeclPragma_14, (MR_Integer) 0))));

              Pieces_4 = parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(Var_69);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ItemImplPragma_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_15, (MR_Integer) 0))));

              Pieces_4 = parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(Var_68);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ItemGenPragma_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemGenPragma_16, (MR_Integer) 0))));

              Pieces_4 = parse_tree__item_util__gen_pragma_desc_pieces_1_f_0(Var_67);
            }
            break;
          case (MR_Integer) 14:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[48]));
            break;
        }
        break;
    }
    return Pieces_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__gen_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  {
    MR_Word Pieces_4;

    switch (MR_tag((MR_Word) Pragma_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[120]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[114]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[118]));
        break;
      case (MR_Integer) 3:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[116]));
        break;
    }
    return Pieces_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  {
    MR_Word Pieces_4;

    switch (MR_tag((MR_Word) Pragma_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[84]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[82]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[86]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[88]));
            break;
          case (MR_Integer) 1:
            {
              MR_Word External_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 1))));
              MR_Word PFNameArity_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), External_9, (MR_Integer) 0))));
              MR_Word PorF_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFNameArity_10, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (PorF_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[76]));
                  break;
                case (MR_Integer) 0:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[78]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[80]));
            break;
          case (MR_Integer) 3:
            {
              MR_Word Tabled_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 1))));
              MR_Word TabledMethod_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tabled_21, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) TabledMethod_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[108]));
                  break;
                case (MR_Integer) 1:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[110]));
                  break;
                case (MR_Integer) 2:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.impl_pragma_desc_pieces\'/1", (MR_String) "eval_table_io");
                  break;
                case (MR_Integer) 3:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[112]));
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90]));
            break;
          case (MR_Integer) 5:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[96]));
            break;
          case (MR_Integer) 6:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[74]));
            break;
          case (MR_Integer) 7:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[92]));
            break;
          case (MR_Integer) 8:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[94]));
            break;
          case (MR_Integer) 9:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[106]));
            break;
          case (MR_Integer) 10:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[100]));
            break;
          case (MR_Integer) 11:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[102]));
            break;
          case (MR_Integer) 12:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[98]));
            break;
          case (MR_Integer) 13:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[104]));
            break;
        }
        break;
    }
    return Pieces_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(
  MR_Word Pragma_3)
{
  {
    MR_Word Pieces_4;

    switch (MR_tag((MR_Word) Pragma_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[56]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[58]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[72]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[60]));
            break;
          case (MR_Integer) 1:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[66]));
            break;
          case (MR_Integer) 2:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[54]));
            break;
          case (MR_Integer) 3:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[52]));
            break;
          case (MR_Integer) 4:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[70]));
            break;
          case (MR_Integer) 5:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[68]));
            break;
          case (MR_Integer) 6:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[64]));
            break;
          case (MR_Integer) 7:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[62]));
            break;
        }
        break;
    }
    return Pieces_4;
  }
}

void MR_CALL 
parse_tree__item_util__get_raw_components_9_p_0(
  MR_Word RawItemBlocks_10,
  MR_Word * STATE_VARIABLE_IntIncls_27,
  MR_Word * STATE_VARIABLE_ImpIncls_28,
  MR_Word * STATE_VARIABLE_IntAvails_29,
  MR_Word * STATE_VARIABLE_ImpAvails_30,
  MR_Word * STATE_VARIABLE_IntFIMs_31,
  MR_Word * STATE_VARIABLE_ImpFIMs_32,
  MR_Word * STATE_VARIABLE_IntItems_33,
  MR_Word * STATE_VARIABLE_ImpItems_34)
{
  if ((RawItemBlocks_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_IntIncls_27 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ImpIncls_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_IntAvails_29 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ImpAvails_30 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_IntFIMs_31 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ImpFIMs_32 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_IntItems_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ImpItems_34 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadRawItemBlock_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawItemBlocks_10, (MR_Integer) 0))));
    MR_Word TailRawItemBlocks_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawItemBlocks_10, (MR_Integer) 1))));
    MR_Word Section_22;
    MR_Word Incls_23;
    MR_Word Avails_24;
    MR_Word FIMs_25;
    MR_Word Items_26;
    MR_Word STATE_VARIABLE_IntIncls_35_35;
    MR_Word STATE_VARIABLE_ImpIncls_36_36;
    MR_Word STATE_VARIABLE_IntAvails_37_37;
    MR_Word STATE_VARIABLE_ImpAvails_38_38;
    MR_Word STATE_VARIABLE_IntFIMs_39_39;
    MR_Word STATE_VARIABLE_ImpFIMs_40_40;
    MR_Word STATE_VARIABLE_IntItems_41_41;
    MR_Word STATE_VARIABLE_ImpItems_42_42;

    parse_tree__item_util__get_raw_components_9_p_0(TailRawItemBlocks_20, &STATE_VARIABLE_IntIncls_35_35, &STATE_VARIABLE_ImpIncls_36_36, &STATE_VARIABLE_IntAvails_37_37, &STATE_VARIABLE_ImpAvails_38_38, &STATE_VARIABLE_IntFIMs_39_39, &STATE_VARIABLE_ImpFIMs_40_40, &STATE_VARIABLE_IntItems_41_41, &STATE_VARIABLE_ImpItems_42_42);
    Section_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_19, (MR_Integer) 1))));
    Incls_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_19, (MR_Integer) 2))));
    Avails_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_19, (MR_Integer) 3))));
    FIMs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_19, (MR_Integer) 4))));
    Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_19, (MR_Integer) 5))));
    switch (Section_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ImpIncls_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_23, STATE_VARIABLE_ImpIncls_36_36);
          *STATE_VARIABLE_ImpAvails_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_24, STATE_VARIABLE_ImpAvails_38_38);
          *STATE_VARIABLE_ImpFIMs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_25, STATE_VARIABLE_ImpFIMs_40_40);
          *STATE_VARIABLE_ImpItems_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_26, STATE_VARIABLE_ImpItems_42_42);
          *STATE_VARIABLE_IntIncls_27 = STATE_VARIABLE_IntIncls_35_35;
          *STATE_VARIABLE_IntAvails_29 = STATE_VARIABLE_IntAvails_37_37;
          *STATE_VARIABLE_IntFIMs_31 = STATE_VARIABLE_IntFIMs_39_39;
          *STATE_VARIABLE_IntItems_33 = STATE_VARIABLE_IntItems_41_41;
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_IntIncls_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_23, STATE_VARIABLE_IntIncls_35_35);
          *STATE_VARIABLE_IntAvails_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_24, STATE_VARIABLE_IntAvails_37_37);
          *STATE_VARIABLE_IntFIMs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMs_25, STATE_VARIABLE_IntFIMs_39_39);
          *STATE_VARIABLE_IntItems_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_26, STATE_VARIABLE_IntItems_41_41);
          *STATE_VARIABLE_ImpIncls_28 = STATE_VARIABLE_ImpIncls_36_36;
          *STATE_VARIABLE_ImpAvails_30 = STATE_VARIABLE_ImpAvails_38_38;
          *STATE_VARIABLE_ImpFIMs_32 = STATE_VARIABLE_ImpFIMs_40_40;
          *STATE_VARIABLE_ImpItems_34 = STATE_VARIABLE_ImpItems_42_42;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__item_util__int_imp_items_to_item_blocks_12_p_0(
  MR_Word TypeInfo_for_MS_29,
  MR_Word ModuleName_13,
  MR_Box IntSection_14,
  MR_Box ImpSection_15,
  MR_Word IntIncls_16,
  MR_Word ImpIncls_17,
  MR_Word IntAvails_18,
  MR_Word ImpAvails_19,
  MR_Word IntFIMs_20,
  MR_Word ImpFIMs_21,
  MR_Word IntItems_22,
  MR_Word ImpItems_23,
  MR_Word * STATE_VARIABLE_ItemBlocks_25)
{
  {
    MR_Word STATE_VARIABLE_ItemBlocks_27_27;

    parse_tree__item_util__make_and_add_item_block_8_p_0(TypeInfo_for_MS_29, ModuleName_13, ImpSection_15, ImpIncls_17, ImpAvails_19, ImpFIMs_21, ImpItems_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ItemBlocks_27_27);
    parse_tree__item_util__make_and_add_item_block_8_p_0(TypeInfo_for_MS_29, ModuleName_13, IntSection_14, IntIncls_16, IntAvails_18, IntFIMs_20, IntItems_22, STATE_VARIABLE_ItemBlocks_27_27, STATE_VARIABLE_ItemBlocks_25);
  }
}

void MR_CALL 
parse_tree__item_util__make_and_add_item_block_8_p_0(
  MR_Word TypeInfo_for_MS_20,
  MR_Word ModuleName_9,
  MR_Box Section_10,
  MR_Word Incls_11,
  MR_Word Avails_12,
  MR_Word FIMs_13,
  MR_Word Items_14,
  MR_Word STATE_VARIABLE_ItemBlocks_0_17,
  MR_Word * STATE_VARIABLE_ItemBlocks_18)
{
  {
    MR_bool succeeded = (Incls_11 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (Avails_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (FIMs_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Items_14 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      *STATE_VARIABLE_ItemBlocks_18 = STATE_VARIABLE_ItemBlocks_0_17;
    else
    {
      MR_Word Block_16;

      {
        Block_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Block_16, 0) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Block_16, 1) = Section_10;
        MR_hl_field(MR_mktag(0), Block_16, 2) = ((MR_Box) (Incls_11));
        MR_hl_field(MR_mktag(0), Block_16, 3) = ((MR_Box) (Avails_12));
        MR_hl_field(MR_mktag(0), Block_16, 4) = ((MR_Box) (FIMs_13));
        MR_hl_field(MR_mktag(0), Block_16, 5) = ((MR_Box) (Items_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ItemBlocks_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Block_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ItemBlocks_0_17));
      }
    }
  }
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_impl_pragma_3_p_0(
  MR_Word ItemImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_9,
  MR_Word * STATE_VARIABLE_Langs_10)
{
  {
    MR_Word ImplPragma_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_4, (MR_Integer) 0))));
    MR_Word Var_11;

    switch (MR_tag((MR_Word) ImplPragma_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_16 = (MR_Word) ((MR_Word) (ImplPragma_6));
          MR_Word Lang_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Lang_50));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Lang_17;
          MR_Word FCInfo_20 = (MR_Word) (MR_body((MR_Word) (ImplPragma_6), (MR_Integer) 1));

          Lang_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_20, (MR_Integer) 0))) & (MR_Integer) 3);
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Lang_17));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_26 = (MR_Word) (MR_body((MR_Word) (ImplPragma_6), (MR_Integer) 2));
          MR_Word Attrs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_26, (MR_Integer) 0))));
          MR_Word Var_47;

          Var_47 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_27);
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FPEInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_6, (MR_Integer) 1))));
              MR_Word Lang_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_22, (MR_Integer) 1))) & (MR_Integer) 3);

              {
                Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Lang_52));
                MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
            Var_11 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
    }
    mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_11, STATE_VARIABLE_Langs_0_9, STATE_VARIABLE_Langs_10);
  }
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_enum_3_p_0(
  MR_Word FEInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_11,
  MR_Word * STATE_VARIABLE_Langs_12)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), STATE_VARIABLE_Langs_0_11, STATE_VARIABLE_Langs_12);
  }
}

void MR_CALL 
parse_tree__item_util__acc_needed_self_fim_langs_for_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_Langs_0_10,
  MR_Word * STATE_VARIABLE_Langs_11)
{
  {
    MR_bool succeeded;
    MR_Word ForeignType_7;
    MR_Word DetailsForeign_6;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 2))));

    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      DetailsForeign_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
      ForeignType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_6, (MR_Integer) 0))));
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
}

MR_Word MR_CALL 
parse_tree__item_util__item_needs_foreign_imports_1_f_0(
  MR_Word Item_3)
{
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FEInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_11, (MR_Integer) 0))) & (MR_Integer) 3);

              {
                Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_12));
                MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 13:
            Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 7:
            Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            break;
          case (MR_Integer) 8:
            {
              MR_Word ItemTypeDefn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word ForeignType_8;
              MR_Word DetailsForeign_7;
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 2))));

              succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                DetailsForeign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 1))));
                ForeignType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_7, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Var_39;

                Var_39 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_8);
                {
                  Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Var_39));
                  MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ItemImplPragma_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word ImplPragma_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_17, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) ImplPragma_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word FDInfo_48 = (MR_Word) ((MR_Word) (ImplPragma_18));
                    MR_Word Lang_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_48, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

                    {
                      Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_82));
                      MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Lang_49;
                    MR_Word FCInfo_52 = (MR_Word) (MR_body((MR_Word) (ImplPragma_18), (MR_Integer) 1));

                    Lang_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_52, (MR_Integer) 0))) & (MR_Integer) 3);
                    {
                      Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_49));
                      MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word FPInfo_58 = (MR_Word) (MR_body((MR_Word) (ImplPragma_18), (MR_Integer) 2));
                    MR_Word Attrs_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_58, (MR_Integer) 0))));
                    MR_Word Var_79;

                    Var_79 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_59);
                    {
                      Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Var_79));
                      MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_18, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word FPEInfo_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_18, (MR_Integer) 1))));
                        MR_Word Lang_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_54, (MR_Integer) 1))) & (MR_Integer) 3);

                        {
                          Langs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Langs_4, 0) = ((MR_Box) (Lang_84));
                          MR_hl_field(MR_mktag(1), Langs_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
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
                      Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 14:
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.item_needs_foreign_imports\'/1", (MR_String) "item_type_repn");
            break;
        }
        break;
    }
    return Langs_4;
  }
}

void MR_CALL 
parse_tree__item_util__add_implicit_fim_for_module_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  {
    MR_bool succeeded;
    MR_Word FIMSpec_8;
    MR_Box conv0_Var_9;

    {
      FIMSpec_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIMSpec_8, 1) = ((MR_Box) (ModuleName_5));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), STATE_VARIABLE_Map_0_10, ((MR_Box) (FIMSpec_8)), &conv0_Var_9);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *STATE_VARIABLE_Map_11 = STATE_VARIABLE_Map_0_10;
    else
    {
      MR_Word Var_12;

      Var_12 = mercury__term__dummy_context_init_0_f_0();
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (FIMSpec_8)), ((MR_Box) (Var_12)), STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
    }
  }
}

MR_Word MR_CALL 
parse_tree__item_util__fim_module_lang_to_item_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__term__dummy_context_init_0_f_0();
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__fim_module_lang_to_spec_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (ModuleName_4));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__fim_spec_to_item_1_f_0(
  MR_Word FIMSpec_3)
{
  {
    MR_Word FIM_4;
    MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_3, (MR_Integer) 1))));
    MR_Word Var_7;

    Var_7 = mercury__term__dummy_context_init_0_f_0();
    {
      FIM_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIM_4, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), FIM_4, 1) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), FIM_4, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), FIM_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return FIM_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__fim_item_to_spec_1_f_0(
  MR_Word FIM_3)
{
  {
    MR_Word FIMSpec_4;
    MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIM_3, (MR_Integer) 1))));

    {
      FIMSpec_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_4, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), FIMSpec_4, 1) = ((MR_Box) (ModuleName_6));
    }
    return FIMSpec_4;
  }
}

MR_bool MR_CALL 
parse_tree__item_util__avail_is_use_2_p_0(
  MR_Word Avail_3,
  MR_Word * UseInfo_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Avail_3)) == (MR_Integer) 1);

    if (succeeded)
      *UseInfo_4 = (MR_Word) (MR_body((MR_Word) (Avail_3), (MR_Integer) 1));
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__item_util__avail_is_import_2_p_0(
  MR_Word Avail_3,
  MR_Word * ImportInfo_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Avail_3)) == (MR_Integer) 0);

    if (succeeded)
      *ImportInfo_4 = (MR_Word) ((MR_Word) (Avail_3));
    return succeeded;
  }
}

MR_String MR_CALL 
parse_tree__item_util__import_or_use_decl_name_1_f_0(
  MR_Word HeadVar__1_1)
{
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
    MR_Word Avail_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Avails_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Imports_12_12;
    MR_Word STATE_VARIABLE_Uses_13_13;

    parse_tree__item_util__avail_imports_uses_3_p_0(Avails_5, &STATE_VARIABLE_Imports_12_12, &STATE_VARIABLE_Uses_13_13);
    if (((MR_tag((MR_Word) Avail_4)) == (MR_Integer) 0))
    {
      MR_Word AvailImportInfo_8 = (MR_Word) ((MR_Word) (Avail_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AvailImportInfo_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Imports_12_12));
      }
      *HeadVar__3_3 = STATE_VARIABLE_Uses_13_13;
    }
    else
    {
      MR_Word AvailUseInfo_9 = (MR_Word) (MR_body((MR_Word) (Avail_4), (MR_Integer) 1));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AvailUseInfo_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Uses_13_13));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevAvails_12;

    parse_tree__item_util__acc_avail_with_context_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevAvails_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevAvails_12));
  }
}

void MR_CALL 
parse_tree__item_util__acc_avails_with_contexts_5_p_0(
  MR_Word ImportOrUse_6,
  MR_Word ModuleName_7,
  MR_Word Contexts_8,
  MR_Word STATE_VARIABLE_RevAvails_0_10,
  MR_Word * STATE_VARIABLE_RevAvails_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_RevAvails_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__item_util__acc_avails_with_contexts_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ImportOrUse_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ModuleName_7));
    }
    mercury__one_or_more__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), Var_12, Contexts_8, ((MR_Box) (STATE_VARIABLE_RevAvails_0_10)), &conv1_STATE_VARIABLE_RevAvails_11);
    *STATE_VARIABLE_RevAvails_11 = ((MR_Word) (conv1_STATE_VARIABLE_RevAvails_11));
  }
}

static void MR_CALL 
parse_tree__item_util__use_map_to_item_avails_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevAvails_12;

    parse_tree__item_util__use_map_to_item_avails_acc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RevAvails_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RevAvails_12));
  }
}

MR_Word MR_CALL 
parse_tree__item_util__use_map_to_item_avails_1_f_0(
  MR_Word UseMap_3)
{
  {
    MR_Word Avails_4;
    MR_Word RevAvails_5;
    MR_Box conv1_RevAvails_5;

    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[13]), UseMap_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevAvails_5);
    RevAvails_5 = ((MR_Word) (conv1_RevAvails_5));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevAvails_5, &Avails_4);
    return Avails_4;
  }
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

    Var_14 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_16 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_17 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__map__foldl5_12_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[3]), (MR_Word) (&parse_tree__item_util_scalar_common_2[12]), ImportUseMap_7, ((MR_Box) (Var_14)), &conv9_IntImports_8, ((MR_Box) (Var_15)), &conv8_IntUses_9, ((MR_Box) (Var_16)), &conv7_ImpImports_10, ((MR_Box) (Var_17)), &conv6_ImpUses_11, ((MR_Box) (Var_18)), &conv5_IntUseImpImports_12);
    *IntImports_8 = ((MR_Word) (conv9_IntImports_8));
    *IntUses_9 = ((MR_Word) (conv8_IntUses_9));
    *ImpImports_10 = ((MR_Word) (conv7_ImpImports_10));
    *ImpUses_11 = ((MR_Word) (conv6_ImpUses_11));
    *IntUseImpImports_12 = ((MR_Word) (conv5_IntUseImpImports_12));
  }
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_5_p_0_1(
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
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_IntImportMap_25;
    MR_Word conv2_STATE_VARIABLE_IntUseMap_27;
    MR_Word conv1_STATE_VARIABLE_ImpImportMap_29;
    MR_Word conv0_STATE_VARIABLE_ImpUseMap_31;

    parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_acc_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_IntImportMap_25, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_IntUseMap_27, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_ImpImportMap_29, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ImpUseMap_31);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportMap_25));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_IntUseMap_27));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_ImpImportMap_29));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ImpUseMap_31));
  }
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_5_p_0(
  MR_Word ImportUseMap_6,
  MR_Word * IntImportMap_7,
  MR_Word * IntUseMap_8,
  MR_Word * ImpImportMap_9,
  MR_Word * ImpUseMap_10)
{
  {
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box conv7_IntImportMap_7;
    MR_Box conv6_IntUseMap_8;
    MR_Box conv5_ImpImportMap_9;
    MR_Box conv4_ImpUseMap_10;

    Var_12 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]));
    Var_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]));
    Var_14 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]));
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[11]), ImportUseMap_6, ((MR_Box) (Var_12)), &conv7_IntImportMap_7, ((MR_Box) (Var_13)), &conv6_IntUseMap_8, ((MR_Box) (Var_14)), &conv5_ImpImportMap_9, ((MR_Box) (Var_15)), &conv4_ImpUseMap_10);
    *IntImportMap_7 = ((MR_Word) (conv7_IntImportMap_7));
    *IntUseMap_8 = ((MR_Word) (conv6_IntUseMap_8));
    *ImpImportMap_9 = ((MR_Word) (conv5_ImpImportMap_9));
    *ImpUseMap_10 = ((MR_Word) (conv4_ImpUseMap_10));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_RevIntAvails_27;
    MR_Word conv0_STATE_VARIABLE_RevImpAvails_29;

    parse_tree__item_util__import_and_or_use_map_to_item_avails_acc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntAvails_27, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpAvails_29);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntAvails_27));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpAvails_29));
  }
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0(
  MR_Word IncludeImplicit_5,
  MR_Word ImportUseMap_6,
  MR_Word * IntAvails_7,
  MR_Word * ImpAvails_8)
{
  {
    MR_Word RevIntAvails_9;
    MR_Word RevImpAvails_10;
    MR_Word Var_11;
    MR_Box conv3_RevIntAvails_9;
    MR_Box conv2_RevImpAvails_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (IncludeImplicit_5));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), (MR_Word) (&parse_tree__item_util_scalar_common_1[3]), Var_11, ImportUseMap_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntAvails_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpAvails_10);
    RevIntAvails_9 = ((MR_Word) (conv3_RevIntAvails_9));
    RevImpAvails_10 = ((MR_Word) (conv2_RevImpAvails_10));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevIntAvails_9, IntAvails_7);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), RevImpAvails_10, ImpAvails_8);
  }
}

static void MR_CALL 
parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeImplicitUse_4;

    parse_tree__item_util__wrap_section_import_and_or_use_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_MaybeImplicitUse_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeImplicitUse_4));
  }
}

void MR_CALL 
parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0(
  MR_Word SectionImportUseMap_3,
  MR_Word * ImportUseMap_4)
{
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[10]), SectionImportUseMap_3, ImportUseMap_4);
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv27_STATE_VARIABLE_SectionImportOrUseMap_18;
    MR_Word conv26_STATE_VARIABLE_Specs_20;

    parse_tree__item_util__warn_if_import_for_ancestor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_STATE_VARIABLE_SectionImportOrUseMap_18, ((MR_Word) (wrapper_arg_4)), &conv26_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_SectionImportOrUseMap_18));
    *wrapper_arg_5 = ((MR_Box) (conv26_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv23_STATE_VARIABLE_ImportUseMap_27;
    MR_Word conv22_STATE_VARIABLE_Specs_29;

    parse_tree__item_util__record_imp_use_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv23_STATE_VARIABLE_ImportUseMap_27, ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_Specs_29);
    *wrapper_arg_4 = ((MR_Box) (conv23_STATE_VARIABLE_ImportUseMap_27));
    *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_STATE_VARIABLE_ImportUseMap_24;
    MR_Word conv18_STATE_VARIABLE_Specs_26;

    parse_tree__item_util__record_imp_import_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv19_STATE_VARIABLE_ImportUseMap_24, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Specs_26);
    *wrapper_arg_4 = ((MR_Box) (conv19_STATE_VARIABLE_ImportUseMap_24));
    *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Specs_26));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_ImportUseMap_24;
    MR_Word conv14_STATE_VARIABLE_Specs_26;

    parse_tree__item_util__record_int_use_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_ImportUseMap_24, ((MR_Word) (wrapper_arg_5)), &conv14_STATE_VARIABLE_Specs_26);
    *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_ImportUseMap_24));
    *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_26));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_ImportUseMap_9;

    parse_tree__item_util__record_int_import_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_ImportUseMap_9);
    *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_ImportUseMap_9));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadSortedContext_12;
    MR_Word conv9_STATE_VARIABLE_Specs_21;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv10_HeadSortedContext_12));
    *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadSortedContext_12;
    MR_Word conv6_STATE_VARIABLE_Specs_21;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadSortedContext_12));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadSortedContext_12;
    MR_Word conv3_STATE_VARIABLE_Specs_21;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadSortedContext_12));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadSortedContext_12;
    MR_Word conv0_STATE_VARIABLE_Specs_21;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadSortedContext_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadSortedContext_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
  }
}

void MR_CALL 
parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0(
  MR_Word ModuleName_9,
  MR_Word IntImportContextsMap_10,
  MR_Word IntUseContextsMap_11,
  MR_Word ImpImportContextsMap_12,
  MR_Word ImpUseContextsMap_13,
  MR_Word * STATE_VARIABLE_ImportUseMap_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
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

    mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_8[0]), IntImportContextsMap_10, &IntImportMap_16, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv2_STATE_VARIABLE_Specs_24_24);
    STATE_VARIABLE_Specs_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_24_24));
    mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_8[1]), IntUseContextsMap_11, &IntUseMap_17, ((MR_Box) (STATE_VARIABLE_Specs_24_24)), &conv5_STATE_VARIABLE_Specs_28_28);
    STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_28_28));
    mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_8[2]), ImpImportContextsMap_12, &ImpImportMap_18, ((MR_Box) (STATE_VARIABLE_Specs_28_28)), &conv8_STATE_VARIABLE_Specs_32_32);
    STATE_VARIABLE_Specs_32_32 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_32_32));
    mercury__map__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_8[3]), ImpUseContextsMap_13, &ImpUseMap_19, ((MR_Box) (STATE_VARIABLE_Specs_32_32)), &conv11_STATE_VARIABLE_Specs_36_36);
    STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_36_36));
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), &STATE_VARIABLE_ImportUseMap_39_39);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[6]), IntImportMap_16, ((MR_Box) (STATE_VARIABLE_ImportUseMap_39_39)), &conv13_STATE_VARIABLE_ImportUseMap_41_41);
    STATE_VARIABLE_ImportUseMap_41_41 = ((MR_Word) (conv13_STATE_VARIABLE_ImportUseMap_41_41));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[7]), IntUseMap_17, ((MR_Box) (STATE_VARIABLE_ImportUseMap_41_41)), &conv17_STATE_VARIABLE_ImportUseMap_43_43, ((MR_Box) (STATE_VARIABLE_Specs_36_36)), &conv16_STATE_VARIABLE_Specs_44_44);
    STATE_VARIABLE_ImportUseMap_43_43 = ((MR_Word) (conv17_STATE_VARIABLE_ImportUseMap_43_43));
    STATE_VARIABLE_Specs_44_44 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_44_44));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[8]), ImpImportMap_18, ((MR_Box) (STATE_VARIABLE_ImportUseMap_43_43)), &conv21_STATE_VARIABLE_ImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_Specs_44_44)), &conv20_STATE_VARIABLE_Specs_47_47);
    STATE_VARIABLE_ImportUseMap_46_46 = ((MR_Word) (conv21_STATE_VARIABLE_ImportUseMap_46_46));
    STATE_VARIABLE_Specs_47_47 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_47_47));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[9]), ImpUseMap_19, ((MR_Box) (STATE_VARIABLE_ImportUseMap_46_46)), &conv25_STATE_VARIABLE_ImportUseMap_49_49, ((MR_Box) (STATE_VARIABLE_Specs_47_47)), &conv24_STATE_VARIABLE_Specs_50_50);
    STATE_VARIABLE_ImportUseMap_49_49 = ((MR_Word) (conv25_STATE_VARIABLE_ImportUseMap_49_49));
    STATE_VARIABLE_Specs_50_50 = ((MR_Word) (conv24_STATE_VARIABLE_Specs_50_50));
    parse_tree__item_util__warn_if_import_for_self_5_p_0(ModuleName_9, STATE_VARIABLE_ImportUseMap_49_49, &STATE_VARIABLE_ImportUseMap_51_51, STATE_VARIABLE_Specs_50_50, &STATE_VARIABLE_Specs_52_52);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_9));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ModuleName_9));
    }
    Var_54 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
    mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), Var_53, Var_54, ((MR_Box) (STATE_VARIABLE_ImportUseMap_51_51)), &conv29_STATE_VARIABLE_ImportUseMap_20, ((MR_Box) (STATE_VARIABLE_Specs_52_52)), &conv28_STATE_VARIABLE_Specs_22);
    *STATE_VARIABLE_ImportUseMap_20 = ((MR_Word) (conv29_STATE_VARIABLE_ImportUseMap_20));
    *STATE_VARIABLE_Specs_22 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
parse_tree__item_util__warn_if_import_for_self_5_p_0(
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SectionImportOrUseMap_0_14,
  MR_Word * STATE_VARIABLE_SectionImportOrUseMap_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word ImportOrUse_9;
    MR_Word STATE_VARIABLE_SectionImportOrUseMap_18_18;
    MR_Box conv0_ImportOrUse_9;

    succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ((MR_Box) (ModuleName_6)), &conv0_ImportOrUse_9, STATE_VARIABLE_SectionImportOrUseMap_0_14, &STATE_VARIABLE_SectionImportOrUseMap_18_18);
    if (succeeded)
    {
      ImportOrUse_9 = ((MR_Word) (conv0_ImportOrUse_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Context_10;
      MR_Word Pieces_11;
      MR_Word Msg_12;
      MR_Word Spec_13;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_34;

      *STATE_VARIABLE_SectionImportOrUseMap_15 = STATE_VARIABLE_SectionImportOrUseMap_18_18;
      switch (MR_tag((MR_Word) ImportOrUse_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportOrUse_9, (MR_Integer) 0))));
          break;
        case (MR_Integer) 1:
          Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportOrUse_9, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ImportOrUse_9, (MR_Integer) 0))));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImportOrUse_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImportOrUse_9, (MR_Integer) 1))));
              break;
            case (MR_Integer) 1:
              {
                MR_Word ContextA_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImportOrUse_9, (MR_Integer) 1))));
                MR_Word ContextB_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImportOrUse_9, (MR_Integer) 2))));
                MR_Word Var_46;

                mercury__term____Compare____context_0_0(&Var_46, ContextB_43, ContextA_42);
                succeeded = ((MR_Integer) 1 == Var_46);
                if (succeeded)
                  Context_10 = ContextB_43;
                else
                  Context_10 = ContextA_42;
              }
              break;
          }
          break;
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ModuleName_6));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[153])));
      }
      {
        Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[151])));
        MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_21));
      }
      {
        Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Pieces_11));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Msg_12));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.warn_if_import_for_self\'/5"));
        MR_hl_field(MR_mktag(3), Spec_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Spec_13, 3) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(3), Spec_13, 4) = ((MR_Box) (Var_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      *STATE_VARIABLE_SectionImportOrUseMap_15 = STATE_VARIABLE_SectionImportOrUseMap_0_14;
    }
  }
}

void MR_CALL 
parse_tree__item_util__get_imports_uses_maps_3_p_0(
  MR_Word Avails_4,
  MR_Word * ImportMap_5,
  MR_Word * UseMap_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;

    Var_7 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_8 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__item_util__accumulate_imports_uses_maps_5_p_0(Avails_4, Var_7, ImportMap_5, Var_8, UseMap_6);
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
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UseMap_25_25;
      MR_Word STATE_VARIABLE_ImportMap_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_UseMap_0_4;

      if (((MR_tag((MR_Word) Avail_12)) == (MR_Integer) 0))
      {
        MR_Word ModuleName_16;
        MR_Word Context_17;
        MR_Word Var_26 = (MR_Word) ((MR_Word) (Avail_12));

        ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
        Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
        mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_16)), ((MR_Box) (Context_17)), STATE_VARIABLE_ImportMap_0_2, &STATE_VARIABLE_ImportMap_27_27);
        STATE_VARIABLE_UseMap_25_25 = STATE_VARIABLE_UseMap_0_4;
      }
      else
      {
        MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (Avail_12), (MR_Integer) 1));
        MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));

        mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_30)), ((MR_Box) (Context_31)), STATE_VARIABLE_UseMap_0_4, &STATE_VARIABLE_UseMap_25_25);
        STATE_VARIABLE_ImportMap_27_27 = STATE_VARIABLE_ImportMap_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_13;
      next_value_of_STATE_VARIABLE_ImportMap_0_2 = STATE_VARIABLE_ImportMap_27_27;
      next_value_of_STATE_VARIABLE_UseMap_0_4 = STATE_VARIABLE_UseMap_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportMap_0_2 = next_value_of_STATE_VARIABLE_ImportMap_0_2;
      STATE_VARIABLE_UseMap_0_4 = next_value_of_STATE_VARIABLE_UseMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevIncludes_12;

    parse_tree__item_util__module_names_contexts_to_item_includes_acc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RevIncludes_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RevIncludes_12));
  }
}

MR_Word MR_CALL 
parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(
  MR_Word IncludeMap_3)
{
  {
    MR_Word Includes_4;
    MR_Word RevIncludes_5;
    MR_Box conv1_RevIncludes_5;

    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[5]), IncludeMap_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevIncludes_5);
    RevIncludes_5 = ((MR_Word) (conv1_RevIncludes_5));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevIncludes_5, &Includes_4);
    return Includes_4;
  }
}

void MR_CALL 
parse_tree__item_util__acc_include_for_module_and_context_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_RevIncludes_0_9,
  MR_Word * STATE_VARIABLE_RevIncludes_10)
{
  {
    MR_Word Incl_8;

    {
      Incl_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Incl_8, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), Incl_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Incl_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevIncludes_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Incl_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevIncludes_0_9));
    }
  }
}

static void MR_CALL 
parse_tree__item_util__include_map_to_item_includes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_RevIntIncludes_15;
    MR_Word conv0_STATE_VARIABLE_RevImpIncludes_17;

    parse_tree__item_util__include_map_to_item_includes_acc_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_RevIntIncludes_15, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RevImpIncludes_17);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_RevIntIncludes_15));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RevImpIncludes_17));
  }
}

void MR_CALL 
parse_tree__item_util__include_map_to_item_includes_3_p_0(
  MR_Word IncludeMap_4,
  MR_Word * IntIncludes_5,
  MR_Word * ImpIncludes_6)
{
  {
    MR_Word RevIntIncludes_7;
    MR_Word RevImpIncludes_8;
    MR_Box conv3_RevIntIncludes_7;
    MR_Box conv2_RevImpIncludes_8;

    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[4]), IncludeMap_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntIncludes_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpIncludes_8);
    RevIntIncludes_7 = ((MR_Word) (conv3_RevIntIncludes_7));
    RevImpIncludes_8 = ((MR_Word) (conv2_RevImpIncludes_8));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevIntIncludes_7, IntIncludes_5);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevImpIncludes_8, ImpIncludes_6);
  }
}

static void MR_CALL 
parse_tree__item_util__classify_include_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ContextMap_27;
    MR_Word conv7_STATE_VARIABLE_InclMap_29;
    MR_Word conv6_STATE_VARIABLE_Specs_31;

    parse_tree__item_util__classify_include_module_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ContextMap_27, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_InclMap_29, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_Specs_31);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ContextMap_27));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_InclMap_29));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_31));
  }
}

static void MR_CALL 
parse_tree__item_util__classify_include_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ContextMap_27;
    MR_Word conv1_STATE_VARIABLE_InclMap_29;
    MR_Word conv0_STATE_VARIABLE_Specs_31;

    parse_tree__item_util__classify_include_module_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ContextMap_27, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_InclMap_29, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_31);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ContextMap_27));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_InclMap_29));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
  }
}

void MR_CALL 
parse_tree__item_util__classify_include_modules_7_p_0(
  MR_Word IntIncludes_8,
  MR_Word ImpIncludes_9,
  MR_Word * IntInclMap_10,
  MR_Word * ImpInclMap_11,
  MR_Word * STATE_VARIABLE_InclMap_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word STATE_VARIABLE_InclMap_17_17;
    MR_Word Var_19;
    MR_Word STATE_VARIABLE_InclMap_20_20;
    MR_Word STATE_VARIABLE_Specs_21_21;
    MR_Word Var_24;
    MR_Box conv5_IntInclMap_10;
    MR_Box conv4_STATE_VARIABLE_InclMap_20_20;
    MR_Box conv3_STATE_VARIABLE_Specs_21_21;
    MR_Box conv11_ImpInclMap_11;
    MR_Box conv10_STATE_VARIABLE_InclMap_14;
    MR_Box conv9_STATE_VARIABLE_Specs_16;

    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), &STATE_VARIABLE_InclMap_17_17);
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_4[0]), IntIncludes_8, ((MR_Box) (Var_19)), &conv5_IntInclMap_10, ((MR_Box) (STATE_VARIABLE_InclMap_17_17)), &conv4_STATE_VARIABLE_InclMap_20_20, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv3_STATE_VARIABLE_Specs_21_21);
    *IntInclMap_10 = ((MR_Word) (conv5_IntInclMap_10));
    STATE_VARIABLE_InclMap_20_20 = ((MR_Word) (conv4_STATE_VARIABLE_InclMap_20_20));
    STATE_VARIABLE_Specs_21_21 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_21_21));
    Var_24 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[0]), (MR_Word) (&parse_tree__item_util_scalar_common_2[1]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_4[1]), ImpIncludes_9, ((MR_Box) (Var_24)), &conv11_ImpInclMap_11, ((MR_Box) (STATE_VARIABLE_InclMap_20_20)), &conv10_STATE_VARIABLE_InclMap_14, ((MR_Box) (STATE_VARIABLE_Specs_21_21)), &conv9_STATE_VARIABLE_Specs_16);
    *ImpInclMap_11 = ((MR_Word) (conv11_ImpInclMap_11));
    *STATE_VARIABLE_InclMap_14 = ((MR_Word) (conv10_STATE_VARIABLE_InclMap_14));
    *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_16));
  }
}

void MR_CALL 
parse_tree__item_util__get_included_modules_in_item_include_acc_3_p_0(
  MR_Word Incl_4,
  MR_Word STATE_VARIABLE_IncludedModuleNames_0_9,
  MR_Word * STATE_VARIABLE_IncludedModuleNames_10)
{
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incl_4, (MR_Integer) 0))));
    MR_Word Context_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Incl_4, (MR_Integer) 1))));

    mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (Context_7)), STATE_VARIABLE_IncludedModuleNames_0_9, STATE_VARIABLE_IncludedModuleNames_10);
  }
}

MR_bool MR_CALL 
parse_tree__item_util__first_context_in_two_module_names_contexts_3_p_0(
  MR_Word ModuleNamesContextsA_4,
  MR_Word ModuleNamesContextsB_5,
  MR_Word * FirstContext_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__one_or_more_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ModuleNamesContextsA_4);
    if (succeeded)
      succeeded = mercury__one_or_more_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ModuleNamesContextsB_5);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      MR_Word ContextsListsA_7;
      MR_Word ContextsListsB_8;
      MR_Word ContextsA_9;
      MR_Word ContextsB_10;
      MR_Word SortedContexts_11;
      MR_Word Var_13;

      mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ModuleNamesContextsA_4, &ContextsListsA_7);
      mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ModuleNamesContextsB_5, &ContextsListsB_8);
      mercury__one_or_more__condense_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ContextsListsA_7, &ContextsA_9);
      mercury__one_or_more__condense_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ContextsListsB_8, &ContextsB_10);
      Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ContextsA_9, ContextsB_10);
      mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_13, &SortedContexts_11);
      succeeded = (SortedContexts_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *FirstContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_11, (MR_Integer) 0))));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__item_util__first_context_in_module_names_contexts_2_p_0(
  MR_Word ModuleNamesContexts_3,
  MR_Word * FirstContext_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__one_or_more_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ModuleNamesContexts_3);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      MR_Word ContextsLists_5;
      MR_Word Contexts_6;
      MR_Word SortedContexts_7;

      mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), ModuleNamesContexts_3, &ContextsLists_5);
      mercury__one_or_more__condense_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ContextsLists_5, &Contexts_6);
      mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), Contexts_6, &SortedContexts_7);
      succeeded = (SortedContexts_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *FirstContext_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_7, (MR_Integer) 0))));
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____maybe_include_implicit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__item_util____Unify____maybe_include_implicit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__item_util____Compare____maybe_include_implicit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__item_util____Compare____maybe_include_implicit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__item_util__init(void)
{
}

void mercury__parse_tree__item_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_maybe_include_implicit_0);
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
