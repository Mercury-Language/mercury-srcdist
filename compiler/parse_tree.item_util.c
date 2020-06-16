/*
** Automatically generated from `item_util.m'
** by the Mercury compiler,
** version rotd-2020-06-16
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_0;

static const MR_EnumFunctorDesc parse_tree__item_util__parse_tree__item_util__enum_functor_desc_maybe_include_implicit_0_1;

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_maybe_include_implicit_0[2];

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_name_ordered_maybe_include_implicit_0[2];

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_maybe_include_implicit_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_PseudoTypeInfo parse_tree__item_util__parse_tree__item_util__field_types_module_foreign_info_0_0[5];

static const MR_ConstString parse_tree__item_util__parse_tree__item_util__field_names_module_foreign_info_0_0[5];

static const MR_DuArgLocn parse_tree__item_util__parse_tree__item_util__field_locns_module_foreign_info_0_0[5];

static const MR_DuFunctorDesc parse_tree__item_util__parse_tree__item_util__du_functor_desc_module_foreign_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__item_util__parse_tree__item_util__du_stag_ordered_module_foreign_info_0_0[1];

static const MR_DuPtagLayout parse_tree__item_util__parse_tree__item_util__du_ptag_ordered_module_foreign_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__item_util__parse_tree__item_util__du_name_ordered_module_foreign_info_0[1];

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_module_foreign_info_0[1];

static void MR_CALL 
parse_tree__item_util____Compare____module_foreign_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__item_util____Unify____module_foreign_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_4_p_0(
  MR_Word Globals_5,
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
parse_tree__item_util__get_impl_pragma_foreign_code_4_p_0(
  MR_Word Globals_5,
  MR_Word Pragma_6,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
parse_tree__item_util__do_get_item_foreign_include_file_4_p_0(
  MR_Word Lang_5,
  MR_Word LiteralOrInclude_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_fim_4_p_0(
  MR_Word Globals_5,
  MR_Word FIM_6,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0(
  MR_Word TypeInfo_for_MS_20,
  MR_Word Globals_5,
  MR_Word ItemBlock_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

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
  MR_Word * Context_12,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

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
parse_tree__item_util__get_foreign_code_indicators_from_item_blocks_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static MR_bool MR_CALL 
parse_tree__item_util____Unify____module_foreign_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__item_util____Compare____module_foreign_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[164][2];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[14][3];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_3[1][11];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_4[2][4];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_5[3][9];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_6[5][7];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_7[3][10];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_8[5][5];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_9[1][15];

static /* final */ const MR_Box parse_tree__item_util_scalar_common_10[2][8];

static /* final */ const MR_Integer parse_tree__item_util_scalar_common_11[1][2];


/* sealed */ struct parse_tree__item_util__vector_common_type_12_0_s {
  const MR_Word parse_tree__item_util__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct parse_tree__item_util__vector_common_type_12_0_s parse_tree__item_util_vector_common_12[4];



static /* final */ const MR_Box parse_tree__item_util_scalar_common_1[164][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "type_repn"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "check_termination"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "obsolete_proc"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "structure_reuse"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "structure_sharing"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "terminates"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "termination2_info"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "termination_info"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "consider_used"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "external_func"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "external_pred"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_decl"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "mode_check_clauses"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "no_determinism_warning"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "promise_equivalent_clauses"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "promise_pure"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "promise_semipure"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "require_feature_set"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "loop_check"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "memo"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "minimal_model"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "exceptions"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "mm_tabling_info"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "trailing_info"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_String) "unused_args"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[7])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous inclusion was here."))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous declaration is here."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the same module in the same section."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface section is redundant, given the"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the same module in the interface section."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant, given the"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[108])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[90])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[125]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst definition"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance declaration"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[129]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[131]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode definition"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function declaration"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate declaration"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[137]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exclusivity promise"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[139]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exclusivity and exhaustivity promise"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[141]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "exhaustivity promise"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[143]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type definition"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[147]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "typeclass declaration"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[149]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate inclusion of submodule"))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate"))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this"))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section is redundant, given the"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[158]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 161 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 162 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[123])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__item_util_scalar_common_1[162]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__item_util_scalar_common_2[14][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__item_util__include_map_to_item_includes_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[0])),
    ((MR_Box) (parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_5[1])),
    ((MR_Box) (parse_tree__item_util__classify_int_imp_import_use_modules_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_8[4])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_section_to_maybe_implicit_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_9[0])),
    ((MR_Box) (parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__item_util_scalar_common_6[2])),
    ((MR_Box) (parse_tree__item_util__use_map_to_item_avails_1_f_0_1)),
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

static /* final */ const MR_Box parse_tree__item_util_scalar_common_6[5][7] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0))
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

static /* final */ const MR_Box parse_tree__item_util_scalar_common_9[1][15] = {
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

static /* final */ const MR_Box parse_tree__item_util_scalar_common_10[2][8] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__item_util_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0)),
    ((MR_Box) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0))
  },
};

static /* final */ const MR_Integer parse_tree__item_util_scalar_common_11[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};


static /* final */ const struct parse_tree__item_util__vector_common_type_12_0_s parse_tree__item_util_vector_common_12[4] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[140])) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[144])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[142])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[146])) },
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__item_util__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
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

static const MR_EnumFunctorDescPtr parse_tree__item_util__parse_tree__item_util__enum_value_ordered_maybe_include_implicit_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__item_util____Unify____maybe_include_implicit_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____maybe_include_implicit_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "maybe_include_implicit",
  {     parse_tree__item_util__parse_tree__item_util__enum_name_ordered_maybe_include_implicit_0 },
  {     parse_tree__item_util__parse_tree__item_util__enum_value_ordered_maybe_include_implicit_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_maybe_include_implicit_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__item_util__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__item_util__parse_tree__item_util__field_types_module_foreign_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__item_util__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__item_util__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_c_j_cs_e_fims_0),
  (MR_PseudoTypeInfo) (&parse_tree__item_util__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0)
};

static const MR_ConstString parse_tree__item_util__parse_tree__item_util__field_names_module_foreign_info_0_0[5] = {
  (MR_String) "used_foreign_languages",
  (MR_String) "foreign_proc_languages",
  (MR_String) "all_foreign_import_modules",
  (MR_String) "all_foreign_include_files",
  (MR_String) "module_has_foreign_export"
};

static const MR_DuArgLocn parse_tree__item_util__parse_tree__item_util__field_locns_module_foreign_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__item_util__parse_tree__item_util__du_functor_desc_module_foreign_info_0_0 = {
  (MR_String) "module_foreign_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__item_util__parse_tree__item_util__field_types_module_foreign_info_0_0,
  parse_tree__item_util__parse_tree__item_util__field_names_module_foreign_info_0_0,
  parse_tree__item_util__parse_tree__item_util__field_locns_module_foreign_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__item_util__parse_tree__item_util__du_stag_ordered_module_foreign_info_0_0[1] = {
  &parse_tree__item_util__parse_tree__item_util__du_functor_desc_module_foreign_info_0_0
};

static const MR_DuPtagLayout parse_tree__item_util__parse_tree__item_util__du_ptag_ordered_module_foreign_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__item_util__parse_tree__item_util__du_stag_ordered_module_foreign_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__item_util__parse_tree__item_util__du_name_ordered_module_foreign_info_0[1] = {
  &parse_tree__item_util__parse_tree__item_util__du_functor_desc_module_foreign_info_0_0
};

static const MR_Integer parse_tree__item_util__parse_tree__item_util__functor_number_map_module_foreign_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__item_util____Unify____module_foreign_info_0_0_10001)),
  ((MR_Box) (parse_tree__item_util____Compare____module_foreign_info_0_0_10001)),
  (MR_String) "parse_tree.item_util",
  (MR_String) "module_foreign_info",
  {     parse_tree__item_util__parse_tree__item_util__du_name_ordered_module_foreign_info_0 },
  {     parse_tree__item_util__parse_tree__item_util__du_ptag_ordered_module_foreign_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__item_util__parse_tree__item_util__functor_number_map_module_foreign_info_0
};

static void MR_CALL 
parse_tree__item_util____Compare____module_foreign_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          parse_tree__prog_data_foreign____Compare____c_j_cs_e_fims_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_25 < Var_26);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_25 > Var_26);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__item_util____Unify____module_foreign_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__item_util_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&parse_tree__item_util_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data_foreign____Unify____c_j_cs_e_fims_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__item_util_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

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
parse_tree__item_util__get_foreign_code_indicators_from_item_4_p_0(
  MR_Word Globals_5,
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  switch (MR_tag((MR_Word) Item_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            MR_Word Var_33;
            MR_Word UsedForeignLanguages0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
            MR_Word UsedForeignLanguages_41;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;

            Var_33 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_33, UsedForeignLanguages0_40, &UsedForeignLanguages_41);
            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
            Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))));
            Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_32 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UsedForeignLanguages_41));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_57));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word UsedForeignLanguages0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
            MR_Word UsedForeignLanguages_14;
            MR_Word Var_37;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;

            Var_37 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_37, UsedForeignLanguages0_13, &UsedForeignLanguages_14);
            Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
            Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))));
            Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
            Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 4))) & (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_32 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UsedForeignLanguages_14));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_50));
            }
          }
          break;
        case (MR_Integer) 10:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 11:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemImplPragma_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));
            MR_Word ImplPragma_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_8, (MR_Integer) 0))));

            parse_tree__item_util__get_impl_pragma_foreign_code_4_p_0(Globals_5, ImplPragma_9, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
          }
          break;
        case (MR_Integer) 13:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
        case (MR_Integer) 14:
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__item_util__get_impl_pragma_foreign_code_4_p_0(
  MR_Word Globals_5,
  MR_Word Pragma_6,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_bool succeeded;
    MR_Word BackendLangs_8;
    MR_Word Target_9;

    libs__globals__get_backend_foreign_languages_2_p_0(Globals_5, &BackendLangs_8);
    libs__globals__get_target_2_p_0(Globals_5, &Target_9);
    switch (MR_tag((MR_Word) Pragma_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FDInfo_10 = (MR_Word) ((MR_Word) (Pragma_6));
          MR_Word Lang_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          MR_Word LiteralOrInclude_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_10, (MR_Integer) 1))));

          parse_tree__item_util__do_get_item_foreign_include_file_4_p_0(Lang_11, LiteralOrInclude_13, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FCInfo_14 = (MR_Word) (MR_body((MR_Word) (Pragma_6), (MR_Integer) 1));
          MR_Word STATE_VARIABLE_Info_60_60;
          MR_Word Lang_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word LiteralOrInclude_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_14, (MR_Integer) 1))));

          succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_63)), BackendLangs_8);
          if (succeeded)
          {
            MR_Word Langs0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 0))));
            MR_Word Langs_16;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;

            mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_63)), Langs0_15, &Langs_16);
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 1))));
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 2))));
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 3))));
            Var_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 4))) & (MR_Integer) 1);
            {
              STATE_VARIABLE_Info_60_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 0) = ((MR_Box) (Langs_16));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 1) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 2) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 3) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 4) = (MR_Box) ((MR_Unsigned) (Var_76));
            }
          }
          else
            STATE_VARIABLE_Info_60_60 = STATE_VARIABLE_Info_0_47;
          parse_tree__item_util__do_get_item_foreign_include_file_4_p_0(Lang_63, LiteralOrInclude_64, STATE_VARIABLE_Info_60_60, STATE_VARIABLE_Info_48);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo_17 = (MR_Word) (MR_body((MR_Word) (Pragma_6), (MR_Integer) 2));
          MR_Word Attrs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_17, (MR_Integer) 0))));
          MR_Word Name_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_17, (MR_Integer) 1))));
          MR_Word NewLang_25;
          MR_Word FPLangs0_26;
          MR_Word OldLang_27;
          MR_Box conv0_OldLang_27;

          NewLang_25 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_18);
          FPLangs0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 1))));
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), FPLangs0_26, ((MR_Box) (Name_19)), &conv0_OldLang_27);
          if (succeeded)
          {
            OldLang_27 = ((MR_Word) (conv0_OldLang_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word PreferNew_28;

            PreferNew_28 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(Globals_5, Target_9, OldLang_27, NewLang_25);
            switch (PreferNew_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word FPLangs_29;
                  MR_Word Var_81;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;

                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Name_19)), ((MR_Box) (NewLang_25)), FPLangs0_26, &FPLangs_29);
                  Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 0))));
                  Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 2))));
                  Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 3))));
                  Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 4))) & (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_48 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FPLangs_29));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_84));
                    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_85));
                  }
                }
                break;
            }
          }
          else
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (NewLang_25)), BackendLangs_8);
            if (succeeded)
            {
              MR_Word FPLangs_65;
              MR_Word Var_86;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word Var_90;

              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Name_19)), ((MR_Box) (NewLang_25)), FPLangs0_26, &FPLangs_65);
              Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 0))));
              Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 2))));
              Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 3))));
              Var_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 4))) & (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_48 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FPLangs_65));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_90));
              }
            }
            else
              *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FPEInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_6, (MR_Integer) 1))));
              MR_Word Lang_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_30, (MR_Integer) 1))) & (MR_Integer) 3);

              succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_67)), BackendLangs_8);
              if (succeeded)
              {
                MR_Word Var_54;
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 0))));
                MR_Word Var_96;
                MR_Word Var_97;
                MR_Word Var_98;

                Var_54 = mercury__set__insert_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_55, ((MR_Box) (Lang_67)));
                Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 1))));
                Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 2))));
                Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 3))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_48 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_97));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_98));
                  MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
              }
              else
                *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 2:
            switch (Target_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_50;
                  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 0))));
                  MR_Word Var_110;
                  MR_Word Var_111;
                  MR_Word Var_112;
                  MR_Word Var_113;

                  Var_50 = mercury__set__insert_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_51, ((MR_Box) ((MR_Integer) 0)));
                  Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 1))));
                  Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 2))));
                  Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 3))));
                  Var_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_47, (MR_Integer) 4))) & (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_48 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_110));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_111));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_112));
                    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_113));
                  }
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
                break;
              case (MR_Integer) 3:
                *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
                break;
            }
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 5:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 10:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 11:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 12:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
          case (MR_Integer) 13:
            *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__item_util__do_get_item_foreign_include_file_4_p_0(
  MR_Word Lang_5,
  MR_Word LiteralOrInclude_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  if (((MR_tag((MR_Word) LiteralOrInclude_6)) == (MR_Integer) 1))
  {
    MR_String FileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_6, (MR_Integer) 0))));
    MR_Word IncludeFile_10;
    MR_Word IncludeFilesCord0_11;
    MR_Word IncludeFilesCord_12;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_24;

    {
      IncludeFile_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IncludeFile_10, 0) = (MR_Box) ((MR_Unsigned) (Lang_5));
      MR_hl_field(MR_mktag(0), IncludeFile_10, 1) = ((MR_Box) (FileName_9));
    }
    IncludeFilesCord0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
    IncludeFilesCord_12 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), IncludeFilesCord0_11, ((MR_Box) (IncludeFile_10)));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IncludeFilesCord_12));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_24));
    }
  }
  else
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_fim_4_p_0(
  MR_Word Globals_5,
  MR_Word FIM_6,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_bool succeeded;
    MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIM_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ImportedModule_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIM_6, (MR_Integer) 1))));
    MR_Word BackendLangs_12;

    libs__globals__get_backend_foreign_languages_2_p_0(Globals_5, &BackendLangs_12);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_8)), BackendLangs_12);
    if (succeeded)
    {
      MR_Word ForeignImportModules0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
      MR_Word ForeignImportModules_14;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_25;
      MR_Word Var_26;

      parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(Lang_8, ImportedModule_9, ForeignImportModules0_13, &ForeignImportModules_14);
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3))));
      Var_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 4))) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ForeignImportModules_14));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_26));
      }
    }
    else
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
  }
}

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_32;

    parse_tree__item_util__get_foreign_code_indicators_from_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_32);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_32));
  }
}

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    parse_tree__item_util__get_foreign_code_indicators_from_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0(
  MR_Word TypeInfo_for_MS_20,
  MR_Word Globals_5,
  MR_Word ItemBlock_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word FIMs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_6, (MR_Integer) 4))));
    MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_6, (MR_Integer) 5))));
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Info_17_17;
    MR_Word Var_18;
    MR_Box conv1_STATE_VARIABLE_Info_17_17;
    MR_Box conv3_STATE_VARIABLE_Info_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Globals_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0), Var_16, FIMs_12, ((MR_Box) (STATE_VARIABLE_Info_0_14)), &conv1_STATE_VARIABLE_Info_17_17);
    STATE_VARIABLE_Info_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_Info_17_17));
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Globals_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0), Var_18, Items_13, ((MR_Box) (STATE_VARIABLE_Info_17_17)), &conv3_STATE_VARIABLE_Info_15);
    *STATE_VARIABLE_Info_15 = ((MR_Word) (conv3_STATE_VARIABLE_Info_15));
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
            MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) -1));
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
            MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) -1));
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
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) -1));
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
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) -1));
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
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Avail_31 = (MR_Word) ((MR_Word) (Var_22));
        *IntAvails_7 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ImpAvails_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            Avail_33 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_20)));
            *IntAvails_7 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ImpAvails_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_33));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            IntAvail_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_16)));
            {
              Var_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ModuleName_5));
              MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ImpContext_13));
              MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) -1));
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
            MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) -1));
          }
          Avail_21 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_14)));
          *IntAvails_7 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ImpAvails_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Avail_21));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) -1));
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
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) -1));
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
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[117])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[161])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
      }
      {
        MainPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[160])));
        MR_hl_field(MR_mktag(1), MainPieces_13, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (MainPieces_13));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[163])));
      }
      {
        Msg_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_15, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Msg_15, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Msg_15));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.warn_if_import_for_ancestor\'/6"));
        MR_hl_field(MR_mktag(2), Spec_16, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 26) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(2), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(2), Spec_16, 3) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(2), Spec_16, 4) = ((MR_Box) (Var_59));
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
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[109]));
                }
                break;
              case (MR_Integer) 1:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_11, (MR_Integer) 0))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[113]));
                }
                break;
              case (MR_Integer) 2:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldEntry_11, (MR_Integer) 0))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[103]));
                }
                break;
              case (MR_Integer) 3:
                {
                  PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldEntry_11, (MR_Integer) 1))));
                  OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[113]));
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
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[159])));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[153])));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[156])));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[155])));
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
              MR_hl_field(MR_mktag(0), PrevMsg_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[98])));
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
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[109]));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_11, (MR_Integer) 0))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[113]));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldEntry_11, (MR_Integer) 0))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[103]));
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      PrevContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldEntry_11, (MR_Integer) 1))));
                      OldPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[113]));
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
                  MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[159])));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[153])));
                  MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[156])));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[155])));
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
                  MR_hl_field(MR_mktag(0), PrevMsg_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[98])));
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
                  MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[111])));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[153])));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[157])));
              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
            }
            {
              DupPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[155])));
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
              MR_hl_field(MR_mktag(0), PrevMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[98])));
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
              MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[105])));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[153])));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[156])));
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
            }
            {
              DupPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[155])));
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
              MR_hl_field(MR_mktag(0), PrevMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[98])));
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
              MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 19U));
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
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[96])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[154])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[153])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      DupPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DupPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[152])));
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
      MR_hl_field(MR_mktag(0), PrevMsg_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[98])));
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
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
  MR_Word * Context_12,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word DuplicateContexts_14;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_Specs_16;

    *Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMContexts_11, (MR_Integer) 0))));
    DuplicateContexts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMContexts_11, (MR_Integer) 1))));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Section_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (DeclName_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (*Context_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), Var_17, DuplicateContexts_14, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv1_STATE_VARIABLE_Specs_16);
    *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16));
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
      MR_hl_field(MR_mktag(0), Include_10, 2) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), Include_13, 2) = ((MR_Box) ((MR_Integer) -1));
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
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[92])));
      }
      {
        MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[151])));
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
        MR_hl_field(MR_mktag(0), PrevMsg_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[94])));
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
        MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
parse_tree__item_util__wrap_marker_pragma_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word Item_4;
    MR_Word MarkerInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 1))));
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
    MR_Word SymNameArity_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MarkerInfo_5, (MR_Integer) 0))));
    MR_Word Kind_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MarkerInfo_5, (MR_Integer) 1))) & (MR_Integer) 7);

    switch (Kind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
        {
          MR_Word DeclPragma_12;
          MR_Word Pragma_13;

          {
            DeclPragma_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeclPragma_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), DeclPragma_12, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_13, 0) = ((MR_Box) (DeclPragma_12));
            MR_hl_field(MR_mktag(0), Pragma_13, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_13, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_13));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ImplPragma_10;
          MR_Word Pragma_11;

          {
            ImplPragma_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), ImplPragma_10, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_11, 0) = ((MR_Box) (ImplPragma_10));
            MR_hl_field(MR_mktag(0), Pragma_11, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_11, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_11));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word ImplPragma_14;
          MR_Word Pragma_15;

          {
            ImplPragma_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_14, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), ImplPragma_14, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_15, 0) = ((MR_Box) (ImplPragma_14));
            MR_hl_field(MR_mktag(0), Pragma_15, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_15, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_15));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImplPragma_16;
          MR_Word Pragma_17;

          {
            ImplPragma_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), ImplPragma_16, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_17, 0) = ((MR_Box) (ImplPragma_16));
            MR_hl_field(MR_mktag(0), Pragma_17, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_17, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_17));
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word ImplPragma_18;
          MR_Word Pragma_19;

          {
            ImplPragma_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_18, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), ImplPragma_18, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_19, 0) = ((MR_Box) (ImplPragma_18));
            MR_hl_field(MR_mktag(0), Pragma_19, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_19, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ImplPragma_20;
          MR_Word Pragma_21;

          {
            ImplPragma_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_20, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), ImplPragma_20, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_21, 0) = ((MR_Box) (ImplPragma_20));
            MR_hl_field(MR_mktag(0), Pragma_21, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_21, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_21));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ImplPragma_22;
          MR_Word Pragma_23;

          {
            ImplPragma_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ImplPragma_22, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), ImplPragma_22, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_23, 0) = ((MR_Box) (ImplPragma_22));
            MR_hl_field(MR_mktag(0), Pragma_23, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_23, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_23));
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DeclPragma_24;
          MR_Word Pragma_25;

          {
            DeclPragma_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeclPragma_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), DeclPragma_24, 1) = ((MR_Box) (SymNameArity_8));
          }
          {
            Pragma_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Pragma_25, 0) = ((MR_Box) (DeclPragma_24));
            MR_hl_field(MR_mktag(0), Pragma_25, 1) = ((MR_Box) (Context_6));
            MR_hl_field(MR_mktag(0), Pragma_25, 2) = ((MR_Box) (SeqNum_7));
          }
          {
            Item_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Item_4, 1) = ((MR_Box) (Pragma_25));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
    MR_Integer SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), X_3, (MR_Integer) 2))));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 8U));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 4U));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 3U));
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
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
parse_tree__item_util__wrap_pred_decl_item_1_f_0(
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
parse_tree__item_util__wrap_instance_item_1_f_0(
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
parse_tree__item_util__wrap_typeclass_item_1_f_0(
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
parse_tree__item_util__wrap_mode_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (X_3)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__wrap_inst_defn_item_1_f_0(
  MR_Word X_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (X_3)));

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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 10U));
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
      MR_hl_field(MR_mktag(0), UseInfo_4, 2) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), ImportInfo_4, 2) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), UseInfo_5, 2) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), ImportInfo_5, 2) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), Include_4, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    return Include_4;
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
parse_tree__item_util__aug_compilation_unit_project_name_1_f_0(
  MR_Word AugCompUnit_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 0))));

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
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[126]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[128]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[134]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemPredDecl_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word PorF_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_9, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (PorF_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[136]));
                  break;
                case (MR_Integer) 0:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[138]));
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[132]));
            break;
          case (MR_Integer) 2:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[11]));
            break;
          case (MR_Integer) 3:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[13]));
            break;
          case (MR_Integer) 4:
            {
              MR_Word ItemPromise_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word PromiseType_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_17, (MR_Integer) 0))) & (MR_Integer) 3);

              Pieces_4 = ((&parse_tree__item_util_vector_common_12[0 + PromiseType_18]))->parse_tree__item_util__vector_common_type_12_0__vct_12_f_0;
            }
            break;
          case (MR_Integer) 5:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[150]));
            break;
          case (MR_Integer) 6:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[130]));
            break;
          case (MR_Integer) 7:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[15]));
            break;
          case (MR_Integer) 8:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[9]));
            break;
          case (MR_Integer) 9:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[17]));
            break;
          case (MR_Integer) 10:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[148]));
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
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[19]));
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
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[89]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[83]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[87]));
        break;
      case (MR_Integer) 3:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[85]));
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
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[53]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[51]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[55]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[57]));
            break;
          case (MR_Integer) 1:
            {
              MR_Word External_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 1))));
              MR_Word PorF_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), External_9, (MR_Integer) 2))) & (MR_Integer) 1);

              switch (PorF_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[45]));
                  break;
                case (MR_Integer) 0:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[47]));
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[49]));
            break;
          case (MR_Integer) 3:
            {
              MR_Word Tabled_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 1))));
              MR_Word EvalMethod_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tabled_20, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) EvalMethod_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(EvalMethod_21)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.impl_pragma_desc_pieces\'/1", (MR_String) "eval_normal");
                      break;
                    case (MR_Integer) 1:
                      Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[77]));
                      break;
                    case (MR_Integer) 2:
                      Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[79]));
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.impl_pragma_desc_pieces\'/1", (MR_String) "eval_table_io");
                  break;
                case (MR_Integer) 2:
                  Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[81]));
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[59]));
            break;
          case (MR_Integer) 5:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[65]));
            break;
          case (MR_Integer) 6:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[43]));
            break;
          case (MR_Integer) 7:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[61]));
            break;
          case (MR_Integer) 8:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[63]));
            break;
          case (MR_Integer) 9:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[75]));
            break;
          case (MR_Integer) 10:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[69]));
            break;
          case (MR_Integer) 11:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[71]));
            break;
          case (MR_Integer) 12:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[67]));
            break;
          case (MR_Integer) 13:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[73]));
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
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[25]));
        break;
      case (MR_Integer) 1:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[27]));
        break;
      case (MR_Integer) 2:
        Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[41]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[29]));
            break;
          case (MR_Integer) 1:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[35]));
            break;
          case (MR_Integer) 2:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[23]));
            break;
          case (MR_Integer) 3:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[21]));
            break;
          case (MR_Integer) 4:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[39]));
            break;
          case (MR_Integer) 5:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[37]));
            break;
          case (MR_Integer) 6:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[33]));
            break;
          case (MR_Integer) 7:
            Pieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[31]));
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

MR_Word MR_CALL 
parse_tree__item_util__make_ioms_opt_imported_2_f_0(
  MR_Word ModuleName_4,
  MR_Word OptFileKind_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_oms_opt_imported_2_f_0(
  MR_Word ModuleName_4,
  MR_Word OptFileKind_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_ims_int3_implementation_2_f_0(
  MR_Word _ModuleName_4,
  MR_Word _IntFileKind_5)
{
  {
    MR_Word HeadVar__3_6;

    HeadVar__3_6 = parse_tree__item_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_105_109_115_95_105_110_116_51_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_6;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_105_109_115_95_105_110_116_51_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    MR_Word HeadVar__3_6;

    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.item_util.make_ims_int3_implementation\'/2", (MR_String) "An .int3 file should not have an implementation section");
    return HeadVar__3_6;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_ims_abstract_imported_2_f_0(
  MR_Word ModuleName_4,
  MR_Word IntFileKind_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (IntFileKind_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_ims_used_and_imported_3_f_0(
  MR_Word ImportLocn_5,
  MR_Word ModuleName_6,
  MR_Word IntFileKind_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = (MR_Box) (((((MR_Unsigned) (IntFileKind_7) << 5)) | (((((MR_Unsigned) (ImportLocn_5) << 2)) | (MR_Unsigned) ((MR_Integer) 2)))));
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_ims_used_3_f_0(
  MR_Word ImportLocn_5,
  MR_Word ModuleName_6,
  MR_Word IntFileKind_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = (MR_Box) (((((MR_Unsigned) (IntFileKind_7) << 5)) | (((((MR_Unsigned) (ImportLocn_5) << 2)) | (MR_Unsigned) ((MR_Integer) 1)))));
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
parse_tree__item_util__make_ims_imported_3_f_0(
  MR_Word ImportLocn_5,
  MR_Word ModuleName_6,
  MR_Word IntFileKind_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = (MR_Box) (((((MR_Unsigned) (IntFileKind_7) << 5)) | (((((MR_Unsigned) (ImportLocn_5) << 2)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_blocks_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_15;

    parse_tree__item_util__get_foreign_code_indicators_from_item_block_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
  }
}

void MR_CALL 
parse_tree__item_util__get_foreign_code_indicators_from_item_blocks_6_p_0(
  MR_Word TypeInfo_for_MS_24,
  MR_Word Globals_7,
  MR_Word ItemBlocks_8,
  MR_Word * LangSet_9,
  MR_Word * ForeignImports_10,
  MR_Word * ForeignIncludeFiles_11,
  MR_Word * ContainsForeignExport_12)
{
  {
    MR_Word TypeInfo_32_32;
    MR_Word Info0_13;
    MR_Word Info_14;
    MR_Word LangSet0_15;
    MR_Word LangMap_16;
    MR_Word ForeignProcLangs_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Box conv1_Info_14;

    Var_18 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_20 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    Var_21 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
    {
      Info0_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_13, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Info0_13, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Info0_13, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Info0_13, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Info0_13, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__item_util__get_foreign_code_indicators_from_item_blocks_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TypeInfo_for_MS_24));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Globals_7));
    }
    {
      TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_MS_24));
    }
    mercury__list__foldl_4_p_0(TypeInfo_32_32, (MR_Word) (&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0), (MR_Word) (Var_23), (MR_Word) (ItemBlocks_8), ((MR_Box) (Info0_13)), &conv1_Info_14);
    Info_14 = ((MR_Word) (conv1_Info_14));
    LangSet0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0))));
    LangMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))));
    *ForeignImports_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 2))));
    *ForeignIncludeFiles_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 3))));
    *ContainsForeignExport_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 4))) & (MR_Integer) 1);
    ForeignProcLangs_17 = mercury__map__values_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangMap_16);
    *LangSet_9 = mercury__set__insert_list_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet0_15, ForeignProcLangs_17);
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
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 11:
          case (MR_Integer) 13:
            Langs_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
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
          case (MR_Integer) 9:
            Langs_4 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
            break;
          case (MR_Integer) 10:
            {
              MR_Word ItemTypeDefn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 1))));
              MR_Word ForeignType_8;
              MR_Word DetailsForeign_7;
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_6, (MR_Integer) 2))));

              succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 0)))) == (MR_Integer) 1)));
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
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), FIM_4, 3) = ((MR_Box) ((MR_Integer) -1));
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
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__item_util_scalar_common_10[0]));
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
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[11]), SectionImportUseMap_3, ImportUseMap_4);
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
    MR_Word conv10_Context_12;
    MR_Word conv9_STATE_VARIABLE_Specs_16;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_Context_12, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv10_Context_12));
    *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_16));
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
    MR_Word conv7_Context_12;
    MR_Word conv6_STATE_VARIABLE_Specs_16;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Context_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv7_Context_12));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_16));
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
    MR_Word conv4_Context_12;
    MR_Word conv3_STATE_VARIABLE_Specs_16;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Context_12, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv4_Context_12));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
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
    MR_Word conv1_Context_12;
    MR_Word conv0_STATE_VARIABLE_Specs_16;

    parse_tree__item_util__report_any_duplicate_avail_contexts_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Context_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_Context_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
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
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[7]), IntImportMap_16, ((MR_Box) (STATE_VARIABLE_ImportUseMap_39_39)), &conv13_STATE_VARIABLE_ImportUseMap_41_41);
    STATE_VARIABLE_ImportUseMap_41_41 = ((MR_Word) (conv13_STATE_VARIABLE_ImportUseMap_41_41));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[8]), IntUseMap_17, ((MR_Box) (STATE_VARIABLE_ImportUseMap_41_41)), &conv17_STATE_VARIABLE_ImportUseMap_43_43, ((MR_Box) (STATE_VARIABLE_Specs_36_36)), &conv16_STATE_VARIABLE_Specs_44_44);
    STATE_VARIABLE_ImportUseMap_43_43 = ((MR_Word) (conv17_STATE_VARIABLE_ImportUseMap_43_43));
    STATE_VARIABLE_Specs_44_44 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_44_44));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[9]), ImpImportMap_18, ((MR_Box) (STATE_VARIABLE_ImportUseMap_43_43)), &conv21_STATE_VARIABLE_ImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_Specs_44_44)), &conv20_STATE_VARIABLE_Specs_47_47);
    STATE_VARIABLE_ImportUseMap_46_46 = ((MR_Word) (conv21_STATE_VARIABLE_ImportUseMap_46_46));
    STATE_VARIABLE_Specs_47_47 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_47_47));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__item_util_scalar_common_2[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[1]), (MR_Word) (&parse_tree__item_util_scalar_common_2[10]), ImpUseMap_19, ((MR_Box) (STATE_VARIABLE_ImportUseMap_46_46)), &conv25_STATE_VARIABLE_ImportUseMap_49_49, ((MR_Box) (STATE_VARIABLE_Specs_47_47)), &conv24_STATE_VARIABLE_Specs_50_50);
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
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__item_util_scalar_common_1[115])));
      }
      {
        Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__item_util_scalar_common_1[124])));
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
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.item_util.warn_if_import_for_self\'/5"));
        MR_hl_field(MR_mktag(2), Spec_13, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 26) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(2), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(2), Spec_13, 3) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(2), Spec_13, 4) = ((MR_Box) (Var_34));
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

    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[0]), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[6]), IncludeMap_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevIncludes_5);
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
      MR_hl_field(MR_mktag(0), Incl_8, 2) = ((MR_Box) ((MR_Integer) -1));
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

    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_1[2]), (MR_Word) (&parse_tree__item_util_scalar_common_2[5]), IncludeMap_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntIncludes_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevImpIncludes_8);
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

static MR_bool MR_CALL 
parse_tree__item_util____Unify____module_foreign_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__item_util____Unify____module_foreign_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__item_util____Compare____module_foreign_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__item_util____Compare____module_foreign_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__item_util__parse_tree__item_util__type_ctor_info_module_foreign_info_0);
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
