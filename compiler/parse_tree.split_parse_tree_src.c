/*
** Automatically generated from `split_parse_tree_src.m'
** by the Mercury compiler,
** version rotd-2022-09-19
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


// :- module parse_tree.split_parse_tree_src.
// :- implementation.

/*
INIT mercury__parse_tree__split_parse_tree_src__init
ENDINIT
*/

#include "parse_tree.split_parse_tree_src.mih"


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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3;

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_ordinal_ordered_duplicated_section_0[4];

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0[4];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0[4];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1[3];

static const MR_DuArgLocn parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_locns_module_ancestors_0_1[3];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1;

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1[1];

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0[2];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0[2];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2;

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_ordinal_ordered_parent_module_context_0[3];

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0[3];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0[3];

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0[2];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0;

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1];

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0[1];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0[1];

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0[1];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[3];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1;

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1[1];

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0[2];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0[2];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[1];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_4[2];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_4;

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3[2];

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0[4];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0[5];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0[5];

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_submodule_include_info_0_0[2];

static const MR_DuArgLocn parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_locns_submodule_include_info_0_0[2];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_submodule_include_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_submodule_include_info_0_0[1];

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_submodule_include_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_submodule_include_info_0[1];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_submodule_include_info_0[1];

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__787__1_2_p_0(
  MR_Word ModuleName_14,
  MR_Word ComponentModuleName_111);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__230__1_1_p_0(
  MR_Word LeftOverSubModulesMap_16);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__228__1_1_p_0(
  MR_Word LeftOverSplitModuleMap_15);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_1_HeadVar__2_2,
  MR_Word tscc_proc_1_input_2_HeadVar__3_3);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_2_HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src__submodule_include_info_map_to_item_includes_acc_8_p_0(
  MR_Word IntMods_9,
  MR_Word ImpMods_10,
  MR_Word ModuleName_11,
  MR_Word SubInclInfo_12,
  MR_Word STATE_VARIABLE_RevIntIncludes_0_18,
  MR_Word * STATE_VARIABLE_RevIntIncludes_19,
  MR_Word STATE_VARIABLE_RevImpIncludes_0_20,
  MR_Word * STATE_VARIABLE_RevImpIncludes_21);

static MR_Box MR_CALL 
parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0(
  MR_Word RawItemBlock_6,
  MR_Word STATE_VARIABLE_IntMods_0_16,
  MR_Word * STATE_VARIABLE_IntMods_17,
  MR_Word STATE_VARIABLE_ImpMods_0_18,
  MR_Word * STATE_VARIABLE_ImpMods_19);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_13_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word SectionAncestors_3,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_4,
  MR_Word * STATE_VARIABLE_SplitModuleMap_5,
  MR_Word STATE_VARIABLE_SubModulesMap_0_6,
  MR_Word * STATE_VARIABLE_SubModulesMap_7,
  MR_Word STATE_VARIABLE_SubInclInfoMap_0_8,
  MR_Word * STATE_VARIABLE_SubInclInfoMap_9,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_10,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0(
  MR_Word ModuleName_14,
  MR_Word Component_15,
  MR_Word SectionAncestors_16,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_57,
  MR_Word * STATE_VARIABLE_SplitModuleMap_58,
  MR_Word STATE_VARIABLE_SubModulesMap_0_59,
  MR_Word * STATE_VARIABLE_SubModulesMap_60,
  MR_Word STATE_VARIABLE_SubInclInfoMap_0_61,
  MR_Word * STATE_VARIABLE_SubInclInfoMap_62,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_63,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word ParseTree_9,
  MR_Word ModuleAncestors_10,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_52,
  MR_Word * STATE_VARIABLE_SplitModuleMap_53,
  MR_Word STATE_VARIABLE_SubModulesMap_0_54,
  MR_Word * STATE_VARIABLE_SubModulesMap_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

static void MR_CALL 
parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(
  MR_Word EntryA_4,
  MR_Word EntryB_5,
  MR_Word * Entry_6);

static void MR_CALL 
parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SectionAncestors_2,
  MR_Word STATE_VARIABLE_OKIncludesCord_0_3,
  MR_Word * STATE_VARIABLE_OKIncludesCord_4,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_5,
  MR_Word * STATE_VARIABLE_SplitModuleMap_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_7,
  MR_Word * STATE_VARIABLE_SubModulesMap_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word SectionAncestors_3,
  MR_Word * MaybeInterfaceAncestor_4);

static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenInt_0_2,
  MR_Word * STATE_VARIABLE_SeenInt_3,
  MR_Word STATE_VARIABLE_SeenImp_0_4,
  MR_Word * STATE_VARIABLE_SeenImp_5);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
  MR_Word ModuleName_8,
  MR_Word Context_9,
  MR_Word DupSection_10,
  MR_Word ParentModuleName_11,
  MR_Word OldEntry_12,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word ParentModuleName_9,
  MR_Word OldIntContext_10,
  MR_Word OldImpContext_11,
  MR_Word * Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word Section_9,
  MR_Word ParentModuleName_10,
  MR_Word SplitNested_11,
  MR_Word * Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_String SectionWord_9,
  MR_Word ParentModuleName_10,
  MR_Word OldContext_11,
  MR_Word * Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ParentModuleName_8,
  MR_Word Context_9,
  MR_Word EmptyContext_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Context_7,
  MR_Word ParentModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word ModuleAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * STATE_VARIABLE_SubModulesMap_12);

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word SplitNested_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_32,
  MR_Word * STATE_VARIABLE_SplitModuleMap_33,
  MR_Word STATE_VARIABLE_SubModulesMap_0_34,
  MR_Word * STATE_VARIABLE_SubModulesMap_35,
  MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_0_36,
  MR_Word * STATE_VARIABLE_ParseTreeModuleSrcCord_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[93][2];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][11];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[1][13];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_6[1][6];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_7[2][5];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_8[2][4];




static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[93][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Submodule"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is missing its interface section."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The top level module"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for itself."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have an"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have its name reused."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the reuse."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: submodule"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is empty."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "duplicates an empty submodule."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the empty submodule,"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: submodule"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was previously declared to be a separate submodule."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the empty nested submodule"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a duplicate"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the same name as its ancestor module."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was also declarated here."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its both its interface and its implementation"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "were also declarated here."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was also declarated here,"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[63])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This implementation section for module"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs in"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the interface section of"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a nested submodule."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[90])))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_6[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_6[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_7[1])),
    ((MR_Box) (parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_7[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_8[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0 = {
  (MR_String) "dup_empty",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1 = {
  (MR_String) "dup_int_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2 = {
  (MR_String) "dup_imp_only",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3 = {
  (MR_String) "dup_int_imp",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_ordinal_ordered_duplicated_section_0[4] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0[4] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_duplicated_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "duplicated_section",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_ordinal_ordered_duplicated_section_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0,

};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0 = {
  (MR_String) "ma_no_parent",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0)
};

static const MR_DuArgLocn parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_locns_module_ancestors_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1 = {
  (MR_String) "ma_parent",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1,
  NULL,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_locns_module_ancestors_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0[2] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "module_ancestors",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_to_submodules_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "module_to_submodules_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0 = {
  (MR_String) "no_parent_top_level",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1 = {
  (MR_String) "in_parent_interface",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2 = {
  (MR_String) "in_parent_implementation",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_ordinal_ordered_parent_module_context_0[3] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0[3] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_parent_module_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "parent_module_context",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_ordinal_ordered_parent_module_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0,

};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0 = {
  (MR_String) "sa_parent",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "section_ancestors",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0,

};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0 = {
  (MR_String) "split_included",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0),
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1 = {
  (MR_String) "split_nested",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0[2] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_module_entry",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_module_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0 = {
  (MR_String) "split_nested_top_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1 = {
  (MR_String) "split_nested_empty",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2 = {
  (MR_String) "split_nested_only_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3 = {
  (MR_String) "split_nested_only_imp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_4 = {
  (MR_String) "split_nested_int_imp",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3[2] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_4
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0[5] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_4,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_nested_info",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0,

};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_submodule_include_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuArgLocn parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_locns_submodule_include_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_submodule_include_info_0_0 = {
  (MR_String) "submodule_include_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_submodule_include_info_0_0,
  NULL,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_locns_submodule_include_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_submodule_include_info_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_submodule_include_info_0_0
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_submodule_include_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_submodule_include_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_submodule_include_info_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_submodule_include_info_0_0
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_submodule_include_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____submodule_include_info_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____submodule_include_info_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "submodule_include_info",
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_submodule_include_info_0 },
  { parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_submodule_include_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_submodule_include_info_0,

};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____submodule_include_info_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____submodule_include_info_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "submodule_include_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__787__1_2_p_0(
  MR_Word ModuleName_14,
  MR_Word ComponentModuleName_111)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_14, ComponentModuleName_111);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__230__1_1_p_0(
  MR_Word LeftOverSubModulesMap_16)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), LeftOverSubModulesMap_16);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__228__1_1_p_0(
  MR_Word LeftOverSplitModuleMap_15)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), LeftOverSplitModuleMap_15);
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
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
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_28 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_28, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_16;

      parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&SubResult1_16, Var_31, ArgY1_15);
      succeeded = (SubResult1_16 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_16;
      else
      {
        MR_Word SubResult2_19;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[5]), &SubResult2_19, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_18)));
        succeeded = (SubResult2_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_19;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY3_21)));
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_65 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_66 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_65 == CastY_66);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_78 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_78, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_73 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_18 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_73, ArgY1_18);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_77 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_31 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_77, ArgY1_31);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_76, ArgY1_44);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_62;

                        mercury__term_context____Compare____term_context_0_0(&SubResult1_62, Var_75, ArgY1_61);
                        succeeded = (SubResult1_62 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_62;
                        else
                          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_74, ArgY2_64);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 2));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_11, ArgY1_12);
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_13, ArgY2_14);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
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

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_1_HeadVar__2_2,
  MR_Word tscc_proc_1_input_2_HeadVar__3_3)
{
  MR_Word tscc_proc_2_input_1_HeadVar__2_2;
  MR_Word tscc_proc_2_input_2_HeadVar__3_3;
  MR_Word tscc_output_1_HeadVar__1_1;

  // The code for TSCC PROC 1: pred parse_tree.split_parse_tree_src.compare_for_parse_tree.split_parse_tree_src.module_ancestors_0/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.split_parse_tree_src.compare_for_parse_tree.split_parse_tree_src.module_ancestors_0/3-0
  ;
  // proc 2 in TSCC: pred parse_tree.split_parse_tree_src.compare_for_parse_tree.split_parse_tree_src.section_ancestors_0/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_1_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_1_input_2_HeadVar__3_3;
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__1_1 = (MR_Integer) 0;
      else
        HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;
        MR_Integer Var_26 = (MR_Integer) (Var_25);
        MR_Integer Var_27 = (MR_Integer) (ArgY1_11);

        succeeded = (Var_26 < Var_27);
        if (succeeded)
        {
          SubResult1_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_26 > Var_27);
          if (succeeded)
          {
            SubResult1_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__term_context____Compare____term_context_0_0(&SubResult2_15, Var_24, ArgY2_14);
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            HeadVar__1_1 = SubResult2_15;
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_23;
            MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_17;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
            tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
            goto top_of_proc_2;
          }
        }
      }
    }
    tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_2_input_1_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_2_input_2_HeadVar__3_3;
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__2_2 = ArgX2_7;
        MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__3_3 = ArgY2_8;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_HeadVar__2_2 = next_value_of_tscc_proc_1_input_1_HeadVar__2_2;
        tscc_proc_1_input_2_HeadVar__3_3 = next_value_of_tscc_proc_1_input_2_HeadVar__3_3;
        goto top_of_proc_1;
      }
    }
    tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__1_1 = tscc_output_1_HeadVar__1_1;
  return;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_2_HeadVar__3_3)
{
  MR_Word tscc_proc_1_input_1_HeadVar__2_2;
  MR_Word tscc_proc_1_input_2_HeadVar__3_3;
  MR_Word tscc_output_1_HeadVar__1_1;

  // The code for TSCC PROC 2: pred parse_tree.split_parse_tree_src.compare_for_parse_tree.split_parse_tree_src.section_ancestors_0/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.split_parse_tree_src.compare_for_parse_tree.split_parse_tree_src.module_ancestors_0/3-0
  ;
  // proc 2 in TSCC: pred parse_tree.split_parse_tree_src.compare_for_parse_tree.split_parse_tree_src.section_ancestors_0/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_1_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_1_input_2_HeadVar__3_3;
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__1_1 = (MR_Integer) 0;
      else
        HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;
        MR_Integer Var_26 = (MR_Integer) (Var_25);
        MR_Integer Var_27 = (MR_Integer) (ArgY1_11);

        succeeded = (Var_26 < Var_27);
        if (succeeded)
        {
          SubResult1_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_26 > Var_27);
          if (succeeded)
          {
            SubResult1_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__term_context____Compare____term_context_0_0(&SubResult2_15, Var_24, ArgY2_14);
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            HeadVar__1_1 = SubResult2_15;
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_23;
            MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_17;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
            tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
            goto top_of_proc_2;
          }
        }
      }
    }
    tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_2_input_1_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_2_input_2_HeadVar__3_3;
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__2_2 = ArgX2_7;
        MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__3_3 = ArgY2_8;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_HeadVar__2_2 = next_value_of_tscc_proc_1_input_1_HeadVar__2_2;
        tscc_proc_1_input_2_HeadVar__3_3 = next_value_of_tscc_proc_1_input_2_HeadVar__3_3;
        goto top_of_proc_1;
      }
    }
    tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__1_1 = tscc_output_1_HeadVar__1_1;
  return;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2)
{
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Word tscc_proc_2_input_2_HeadVar__2_2;
  MR_bool tscc_output_succeeded;

  // The code for TSCC PROC 1: pred parse_tree.split_parse_tree_src.unify_for_parse_tree.split_parse_tree_src.module_ancestors_0/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.split_parse_tree_src.unify_for_parse_tree.split_parse_tree_src.module_ancestors_0/2-0
  ;
  // proc 2 in TSCC: pred parse_tree.split_parse_tree_src.unify_for_parse_tree.split_parse_tree_src.section_ancestors_0/2-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_bool succeeded = MR_TRUE;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX3_9;
            next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY3_10;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
            goto top_of_proc_2;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
    MR_bool succeeded = MR_TRUE;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = ArgX2_5;
        next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = ArgY2_6;
        tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
        tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
        goto top_of_proc_1;
      }
    }
    tscc_output_succeeded = succeeded;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_proc_1_input_2_HeadVar__2_2;
  MR_bool tscc_output_succeeded;

  // The code for TSCC PROC 2: pred parse_tree.split_parse_tree_src.unify_for_parse_tree.split_parse_tree_src.section_ancestors_0/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.split_parse_tree_src.unify_for_parse_tree.split_parse_tree_src.module_ancestors_0/2-0
  ;
  // proc 2 in TSCC: pred parse_tree.split_parse_tree_src.unify_for_parse_tree.split_parse_tree_src.section_ancestors_0/2-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_bool succeeded = MR_TRUE;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX3_9;
            next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY3_10;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
            goto top_of_proc_2;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
    MR_bool succeeded = MR_TRUE;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = ArgX2_5;
        next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = ArgY2_6;
        tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
        tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
        goto top_of_proc_1;
      }
    }
    tscc_output_succeeded = succeeded;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
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

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src__submodule_include_info_map_to_item_includes_acc_8_p_0(
  MR_Word IntMods_9,
  MR_Word ImpMods_10,
  MR_Word ModuleName_11,
  MR_Word SubInclInfo_12,
  MR_Word STATE_VARIABLE_RevIntIncludes_0_18,
  MR_Word * STATE_VARIABLE_RevIntIncludes_19,
  MR_Word STATE_VARIABLE_RevImpIncludes_0_20,
  MR_Word * STATE_VARIABLE_RevImpIncludes_21)
{
  MR_bool succeeded;
  MR_Word SectionKind_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SubInclInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubInclInfo_12, (MR_Integer) 1))));
  MR_Word Incl_17;

  {
    Incl_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Incl_17, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(MR_mktag(0), Incl_17, 1) = ((MR_Box) (Context_16));
    MR_hl_field(MR_mktag(0), Incl_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  switch (SectionKind_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpMods_10, ((MR_Box) (ModuleName_11)));
        if (succeeded)
          *STATE_VARIABLE_RevImpIncludes_21 = STATE_VARIABLE_RevImpIncludes_0_20;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevImpIncludes_21 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Incl_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevImpIncludes_0_20));
          }
        *STATE_VARIABLE_RevIntIncludes_19 = STATE_VARIABLE_RevIntIncludes_0_18;
      }
      break;
    case (MR_Integer) 0:
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMods_9, ((MR_Box) (ModuleName_11)));
        if (succeeded)
          *STATE_VARIABLE_RevIntIncludes_19 = STATE_VARIABLE_RevIntIncludes_0_18;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevIntIncludes_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Incl_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevIntIncludes_0_18));
          }
        *STATE_VARIABLE_RevImpIncludes_21 = STATE_VARIABLE_RevImpIncludes_0_20;
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__item_include_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0(
  MR_Word RawItemBlock_6,
  MR_Word STATE_VARIABLE_IntMods_0_16,
  MR_Word * STATE_VARIABLE_IntMods_17,
  MR_Word STATE_VARIABLE_ImpMods_0_18,
  MR_Word * STATE_VARIABLE_ImpMods_19)
{
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Incls_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_6, (MR_Integer) 2))));
  MR_Word Modules_15;

  Modules_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[6]), Incls_11);
  switch (Section_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_15, STATE_VARIABLE_ImpMods_0_18, STATE_VARIABLE_ImpMods_19);
        *STATE_VARIABLE_IntMods_17 = STATE_VARIABLE_IntMods_0_16;
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_15, STATE_VARIABLE_IntMods_0_16, STATE_VARIABLE_IntMods_17);
        *STATE_VARIABLE_ImpMods_19 = STATE_VARIABLE_ImpMods_0_18;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__230__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__228__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(
  MR_Word Globals_6,
  MR_Word ParseTreeSrc_7,
  MR_Word * ParseTreeModuleSrcs_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word SplitModuleMap_10;
  MR_Word SubModulesMap_11;
  MR_Word TopModuleName_12;
  MR_Word LeftOverSplitModuleMap_15;
  MR_Word LeftOverSubModulesMap_16;
  MR_Word ParseTreeModuleSrcCord_17;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_Specs_23_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;

  Var_21 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0));
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]));
  parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(ParseTreeSrc_7, (MR_Word) ((MR_Unsigned) 0U), Var_21, &SplitModuleMap_10, Var_22, &SubModulesMap_11, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_23_23);
  TopModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc_7, (MR_Integer) 0))));
  Var_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0));
  parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0(Globals_6, TopModuleName_12, SplitModuleMap_10, &LeftOverSplitModuleMap_15, SubModulesMap_11, &LeftOverSubModulesMap_16, Var_24, &ParseTreeModuleSrcCord_17, STATE_VARIABLE_Specs_23_23, STATE_VARIABLE_Specs_19);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (LeftOverSplitModuleMap_15));
  }
  mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/5", (MR_String) "LeftOverSplitModuleMap is not empty");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0_2));
    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (LeftOverSubModulesMap_16));
  }
  mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/5", (MR_String) "LeftOverSubModulesMap is not empty");
  *ParseTreeModuleSrcs_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ParseTreeModuleSrcCord_17);
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_13_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word SectionAncestors_3,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_4,
  MR_Word * STATE_VARIABLE_SplitModuleMap_5,
  MR_Word STATE_VARIABLE_SubModulesMap_0_6,
  MR_Word * STATE_VARIABLE_SubModulesMap_7,
  MR_Word STATE_VARIABLE_SubInclInfoMap_0_8,
  MR_Word * STATE_VARIABLE_SubInclInfoMap_9,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_10,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_RawItemBlockCord_11 = STATE_VARIABLE_RawItemBlockCord_0_10;
      *STATE_VARIABLE_SubInclInfoMap_9 = STATE_VARIABLE_SubInclInfoMap_0_8;
      *STATE_VARIABLE_SubModulesMap_7 = STATE_VARIABLE_SubModulesMap_0_6;
      *STATE_VARIABLE_SplitModuleMap_5 = STATE_VARIABLE_SplitModuleMap_0_4;
    }
    else
    {
      MR_Word Component_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Components_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_SplitModuleMap_50_50;
      MR_Word STATE_VARIABLE_SubModulesMap_51_51;
      MR_Word STATE_VARIABLE_SubInclInfoMap_52_52;
      MR_Word STATE_VARIABLE_RawItemBlockCord_53_53;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_SplitModuleMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_SubModulesMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_SubInclInfoMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RawItemBlockCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0(ModuleName_1, Component_32, SectionAncestors_3, STATE_VARIABLE_SplitModuleMap_0_4, &STATE_VARIABLE_SplitModuleMap_50_50, STATE_VARIABLE_SubModulesMap_0_6, &STATE_VARIABLE_SubModulesMap_51_51, STATE_VARIABLE_SubInclInfoMap_0_8, &STATE_VARIABLE_SubInclInfoMap_52_52, STATE_VARIABLE_RawItemBlockCord_0_10, &STATE_VARIABLE_RawItemBlockCord_53_53, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_54_54);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Components_33;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_4 = STATE_VARIABLE_SplitModuleMap_50_50;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_6 = STATE_VARIABLE_SubModulesMap_51_51;
      next_value_of_STATE_VARIABLE_SubInclInfoMap_0_8 = STATE_VARIABLE_SubInclInfoMap_52_52;
      next_value_of_STATE_VARIABLE_RawItemBlockCord_0_10 = STATE_VARIABLE_RawItemBlockCord_53_53;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_54_54;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_SplitModuleMap_0_4 = next_value_of_STATE_VARIABLE_SplitModuleMap_0_4;
      STATE_VARIABLE_SubModulesMap_0_6 = next_value_of_STATE_VARIABLE_SubModulesMap_0_6;
      STATE_VARIABLE_SubInclInfoMap_0_8 = next_value_of_STATE_VARIABLE_SubInclInfoMap_0_8;
      STATE_VARIABLE_RawItemBlockCord_0_10 = next_value_of_STATE_VARIABLE_RawItemBlockCord_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__787__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0(
  MR_Word ModuleName_14,
  MR_Word Component_15,
  MR_Word SectionAncestors_16,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_57,
  MR_Word * STATE_VARIABLE_SplitModuleMap_58,
  MR_Word STATE_VARIABLE_SubModulesMap_0_59,
  MR_Word * STATE_VARIABLE_SubModulesMap_60,
  MR_Word STATE_VARIABLE_SubInclInfoMap_0_61,
  MR_Word * STATE_VARIABLE_SubInclInfoMap_62,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_63,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Component_15)) == (MR_Integer) 1))
  {
    MR_Word NestedModuleParseTree_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_15, (MR_Integer) 3))));
    MR_Word NestedModuleName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NestedModuleParseTree_48, (MR_Integer) 0))));
    MR_Word NestedModuleContext_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NestedModuleParseTree_48, (MR_Integer) 1))));
    MR_Word NewEntry_53;
    MR_Word NestedModuleAncestors_56;
    MR_Word Var_101;
    MR_Word ComponentModuleName_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_15, (MR_Integer) 0))));
    MR_Word SectionKind_112 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Component_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SectionContext_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_15, (MR_Integer) 2))));
    MR_Word Var_126;
    MR_Word OldEntry_54;
    MR_Box conv0_OldEntry_54;

    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), Var_101, 4) = ((MR_Box) (ComponentModuleName_111));
    }
    mercury__require__expect_3_p_0(Var_101, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13", (MR_String) "ModuleName != ComponentModuleName");
    succeeded = ((MR_tag((MR_Word) NestedModuleName_49)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NestedModuleName_49, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ComponentModuleName_111, Var_126);
    }
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13", (MR_String) "ComponentModuleName is not NestedModuleName\'s parent");
        return;
      }
    {
      NewEntry_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewEntry_53, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_112));
      MR_hl_field(MR_mktag(0), NewEntry_53, 1) = ((MR_Box) (NestedModuleContext_50));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), STATE_VARIABLE_SubInclInfoMap_0_61, ((MR_Box) (NestedModuleName_49)), &conv0_OldEntry_54);
    if (succeeded)
    {
      OldEntry_54 = ((MR_Word) (conv0_OldEntry_54));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Entry_55;

      parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(OldEntry_54, NewEntry_53, &Entry_55);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), ((MR_Box) (NestedModuleName_49)), ((MR_Box) (Entry_55)), STATE_VARIABLE_SubInclInfoMap_0_61, STATE_VARIABLE_SubInclInfoMap_62);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), ((MR_Box) (NestedModuleName_49)), ((MR_Box) (NewEntry_53)), STATE_VARIABLE_SubInclInfoMap_0_61, STATE_VARIABLE_SubInclInfoMap_62);
    {
      NestedModuleAncestors_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NestedModuleAncestors_56, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_112));
      MR_hl_field(MR_mktag(1), NestedModuleAncestors_56, 1) = ((MR_Box) (SectionContext_113));
      MR_hl_field(MR_mktag(1), NestedModuleAncestors_56, 2) = ((MR_Box) (SectionAncestors_16));
    }
    parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(NestedModuleParseTree_48, NestedModuleAncestors_56, STATE_VARIABLE_SplitModuleMap_0_57, STATE_VARIABLE_SplitModuleMap_58, STATE_VARIABLE_SubModulesMap_0_59, STATE_VARIABLE_SubModulesMap_60, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
    *STATE_VARIABLE_RawItemBlockCord_64 = STATE_VARIABLE_RawItemBlockCord_0_63;
  }
  else
  {
    MR_Word ComponentModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 0))));
    MR_Word SectionKind_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SectionContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 2))));
    MR_Word IncludesCord_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 3))));
    MR_Word AvailsCord_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 4))));
    MR_Word FIMsCord_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 5))));
    MR_Word ItemsCord_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_15, (MR_Integer) 6))));
    MR_Word Includes_29;
    MR_Word Avails_30;
    MR_Word Items_31;
    MR_Word FIMs_32;
    MR_Word OKIncludesCord_33;
    MR_Word OKIncludes_34;
    MR_Word RawItemBlock_35;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_Specs_70_70;

    Includes_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IncludesCord_25);
    Avails_30 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_26);
    Items_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_28);
    FIMs_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_27);
    Var_67 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(Includes_29, SectionAncestors_16, Var_67, &OKIncludesCord_33, STATE_VARIABLE_SplitModuleMap_0_57, STATE_VARIABLE_SplitModuleMap_58, STATE_VARIABLE_SubModulesMap_0_59, STATE_VARIABLE_SubModulesMap_60, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_70_70);
    OKIncludes_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OKIncludesCord_33);
    {
      RawItemBlock_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawItemBlock_35, 0) = ((MR_Box) (ComponentModuleName_22));
      MR_hl_field(MR_mktag(0), RawItemBlock_35, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_23));
      MR_hl_field(MR_mktag(0), RawItemBlock_35, 2) = ((MR_Box) (OKIncludes_34));
      MR_hl_field(MR_mktag(0), RawItemBlock_35, 3) = ((MR_Box) (Avails_30));
      MR_hl_field(MR_mktag(0), RawItemBlock_35, 4) = ((MR_Box) (FIMs_32));
      MR_hl_field(MR_mktag(0), RawItemBlock_35, 5) = ((MR_Box) (Items_31));
    }
    *STATE_VARIABLE_RawItemBlockCord_64 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), STATE_VARIABLE_RawItemBlockCord_0_63, ((MR_Box) (RawItemBlock_35)));
    switch (SectionKind_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word MaybeInterfaceAncestor_36;

          parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(SectionAncestors_16, &MaybeInterfaceAncestor_36);
          if ((MaybeInterfaceAncestor_36 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_70_70;
          else
          {
            MR_Word InterfaceAncestor_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInterfaceAncestor_36, (MR_Integer) 0))));
            MR_Word CurModuleName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_16, (MR_Integer) 0))));
            MR_Word ModuleAncestors_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_16, (MR_Integer) 1))));
            MR_String PorA_45;
            MR_Word Pieces_46;
            MR_Word Spec_47;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_81;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_89;
            MR_Word Var_90;

            if ((ModuleAncestors_39 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13", (MR_String) "in interface section of nonexistent ancestor");
                return;
              }
            else
            {
              MR_Word ModuleSectionAncestor_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_39, (MR_Integer) 2))));
              MR_Word ModuleParent_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleSectionAncestor_42, (MR_Integer) 0))));

              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleParent_43, InterfaceAncestor_37);
              if (succeeded)
                PorA_45 = (MR_String) "parent";
              else
                PorA_45 = (MR_String) "ancestor";
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (CurModuleName_38));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (PorA_45));
            }
            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (InterfaceAncestor_37));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[81])));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[28])));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[79])));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78])));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
            }
            {
              Pieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[77])));
              MR_hl_field(MR_mktag(1), Pieces_46, 1) = ((MR_Box) (Var_76));
            }
            {
              Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13"));
              MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (SectionContext_24));
              MR_hl_field(MR_mktag(1), Spec_47, 4) = ((MR_Box) (Pieces_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_66 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_47));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_70_70));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_70_70;
        break;
    }
    *STATE_VARIABLE_SubInclInfoMap_62 = STATE_VARIABLE_SubInclInfoMap_0_61;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Entry_6;

  parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Entry_6);
  *wrapper_arg_3 = ((MR_Box) (conv5_Entry_6));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Entry_6;

  parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Entry_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_Entry_6));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word ParseTree_9,
  MR_Word ModuleAncestors_10,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_52,
  MR_Word * STATE_VARIABLE_SplitModuleMap_53,
  MR_Word STATE_VARIABLE_SubModulesMap_0_54,
  MR_Word * STATE_VARIABLE_SubModulesMap_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_bool succeeded;
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_9, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_9, (MR_Integer) 1))));
  MR_Word ModuleComponentsCord_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_9, (MR_Integer) 2))));
  MR_Word ModuleComponents_17;
  MR_Word SubModuleSectionAncestors_18;
  MR_Word SubInclInfoMap0_19;
  MR_Word ItemBlockCord0_20;
  MR_Word STATE_VARIABLE_SubModulesMap_58_58;
  MR_Word STATE_VARIABLE_SplitModuleMap_59_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_Specs_63_63;

  ModuleComponents_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_16);
  parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(ModuleAncestors_10, ModuleName_14, STATE_VARIABLE_SubModulesMap_0_54, &STATE_VARIABLE_SubModulesMap_58_58);
  {
    SubModuleSectionAncestors_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SubModuleSectionAncestors_18, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(MR_mktag(0), SubModuleSectionAncestors_18, 1) = ((MR_Box) (ModuleAncestors_10));
  }
  Var_61 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0));
  Var_62 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0));
  parse_tree__split_parse_tree_src__split_components_discover_submodules_13_p_0(ModuleName_14, ModuleComponents_17, SubModuleSectionAncestors_18, STATE_VARIABLE_SplitModuleMap_0_52, &STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SubModulesMap_58_58, STATE_VARIABLE_SubModulesMap_55, Var_61, &SubInclInfoMap0_19, Var_62, &ItemBlockCord0_20, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_63_63);
  if ((ModuleAncestors_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OldEntry_21;
    MR_Box conv0_OldEntry_21;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_59_59, ((MR_Box) (ModuleName_14)), &conv0_OldEntry_21);
    if (succeeded)
    {
      OldEntry_21 = ((MR_Word) (conv0_OldEntry_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldContext_22;
      MR_Word Pieces_23;
      MR_Word OldPieces_24;
      MR_Word Msg_28;
      MR_Word OldMsg_29;
      MR_Word Spec_30;
      MR_Word Var_109;
      MR_Word Var_110;

      if (((MR_tag((MR_Word) OldEntry_21)) == (MR_Integer) 0))
      {
        MR_Word Var_66;
        MR_Word Var_67;

        OldContext_22 = (MR_Word) ((MR_Word) (OldEntry_21));
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ModuleName_14));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[16])));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10])));
          MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_66));
        }
        OldPieces_24 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[21]));
      }
      else
      {
        MR_Word SplitNested_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_21, (MR_Integer) 0))));
        MR_Word Var_93;
        MR_Word Var_94;

        OldContext_22 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(SplitNested_25);
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (ModuleName_14));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[23])));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10])));
          MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_93));
        }
        OldPieces_24 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[25]));
      }
      {
        Msg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_28, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Msg_28, 1) = ((MR_Box) (Pieces_23));
      }
      {
        OldMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_29, 0) = ((MR_Box) (OldContext_22));
        MR_hl_field(MR_mktag(0), OldMsg_29, 1) = ((MR_Box) (OldPieces_24));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (OldMsg_29));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Msg_28));
        MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
      }
      {
        Spec_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_parse_tree_discover_submodules\'/8"));
        MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_30, 3) = ((MR_Box) (Var_109));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_57 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_63_63));
      }
      *STATE_VARIABLE_SplitModuleMap_53 = STATE_VARIABLE_SplitModuleMap_59_59;
    }
    else
    {
      MR_Word Entry_31;
      MR_Word Var_113 = (MR_Word) ((MR_Word) (Context_15));

      {
        Entry_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Entry_31, 0) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(1), Entry_31, 1) = ((MR_Box) (ItemBlockCord0_20));
        MR_hl_field(MR_mktag(1), Entry_31, 2) = ((MR_Box) (SubInclInfoMap0_19));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_31)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_63_63;
    }
  }
  else
  {
    MR_Word SectionAncestors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_10, (MR_Integer) 2))));
    MR_Word ParentModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_34, (MR_Integer) 0))));
    MR_Word ItemBlocks_37;
    MR_Word SeenInt_38;
    MR_Word SeenImp_39;

    ItemBlocks_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ItemBlockCord0_20);
    parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(ItemBlocks_37, (MR_Integer) 0, &SeenInt_38, (MR_Integer) 0, &SeenImp_39);
    switch (SeenInt_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (SeenImp_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Specs_117_117;
              MR_Word OldEntry_144;
              MR_Box conv1_OldEntry_144;

              parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(ModuleName_14, Context_15, ParentModuleName_35, STATE_VARIABLE_Specs_63_63, &STATE_VARIABLE_Specs_117_117);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_59_59, ((MR_Box) (ModuleName_14)), &conv1_OldEntry_144);
              if (succeeded)
              {
                OldEntry_144 = ((MR_Word) (conv1_OldEntry_144));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 0, ParentModuleName_35, OldEntry_144, STATE_VARIABLE_Specs_117_117, STATE_VARIABLE_Specs_57);
                *STATE_VARIABLE_SplitModuleMap_53 = STATE_VARIABLE_SplitModuleMap_59_59;
              }
              else
              {
                MR_Word SplitNested_142 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Context_15)));
                MR_Word Entry_143;

                {
                  Entry_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Entry_143, 0) = ((MR_Box) (SplitNested_142));
                  MR_hl_field(MR_mktag(1), Entry_143, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(MR_mktag(1), Entry_143, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_143)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_117_117;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldEntry_190;
              MR_Box conv2_OldEntry_190;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_59_59, ((MR_Box) (ModuleName_14)), &conv2_OldEntry_190);
              if (succeeded)
              {
                OldEntry_190 = ((MR_Word) (conv2_OldEntry_190));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word IntContext_51;
                MR_Word OldItemBlockCord_179;
                MR_Word OldSubInclInfoMap_180;
                MR_Word OldSplitNested_160;

                succeeded = ((MR_tag((MR_Word) OldEntry_190)) == (MR_Integer) 1);
                if (succeeded)
                {
                  OldSplitNested_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_190, (MR_Integer) 0))));
                  OldItemBlockCord_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_190, (MR_Integer) 1))));
                  OldSubInclInfoMap_180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_190, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) OldSplitNested_160)) == (MR_Integer) 2);
                  if (succeeded)
                    IntContext_51 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_160), (MR_Integer) 2));
                }
                if (succeeded)
                {
                  MR_Word NewSplitNested_161;
                  MR_Word NewItemBlockCord_162;
                  MR_Word NewSubInclInfoMap_163;
                  MR_Word NewEntry_164;

                  {
                    NewSplitNested_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), NewSplitNested_161, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), NewSplitNested_161, 1) = ((MR_Box) (IntContext_51));
                    MR_hl_field(MR_mktag(3), NewSplitNested_161, 2) = ((MR_Box) (Context_15));
                  }
                  NewItemBlockCord_162 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), OldItemBlockCord_179, ItemBlockCord0_20);
                  mercury__map__union_4_p_1((MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[4]), SubInclInfoMap0_19, OldSubInclInfoMap_180, &NewSubInclInfoMap_163);
                  {
                    NewEntry_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), NewEntry_164, 0) = ((MR_Box) (NewSplitNested_161));
                    MR_hl_field(MR_mktag(1), NewEntry_164, 1) = ((MR_Box) (NewItemBlockCord_162));
                    MR_hl_field(MR_mktag(1), NewEntry_164, 2) = ((MR_Box) (NewSubInclInfoMap_163));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_164)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                  *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_63_63;
                }
                else
                {
                  MR_Word EmptyContext_177;
                  MR_Word OldSplitNested_167;

                  succeeded = ((MR_tag((MR_Word) OldEntry_190)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OldSplitNested_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_190, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) OldSplitNested_167)) == (MR_Integer) 1);
                    if (succeeded)
                      EmptyContext_177 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_167), (MR_Integer) 1));
                  }
                  if (succeeded)
                  {
                    MR_Word NewSplitNested_170;
                    MR_Word NewEntry_171;

                    parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_35, Context_15, EmptyContext_177, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_57);
                    {
                      NewSplitNested_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), NewSplitNested_170, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), NewSplitNested_170, 1) = ((MR_Box) (Context_15));
                    }
                    {
                      NewEntry_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewEntry_171, 0) = ((MR_Box) (NewSplitNested_170));
                      MR_hl_field(MR_mktag(1), NewEntry_171, 1) = ((MR_Box) (ItemBlockCord0_20));
                      MR_hl_field(MR_mktag(1), NewEntry_171, 2) = ((MR_Box) (SubInclInfoMap0_19));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_171)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                  }
                  else
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 2, ParentModuleName_35, OldEntry_190, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_57);
                    *STATE_VARIABLE_SplitModuleMap_53 = STATE_VARIABLE_SplitModuleMap_59_59;
                  }
                }
              }
              else
              {
                MR_Word NewSplitNested_188;
                MR_Word NewEntry_189;

                {
                  NewSplitNested_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NewSplitNested_188, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), NewSplitNested_188, 1) = ((MR_Box) (Context_15));
                }
                {
                  NewEntry_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewEntry_189, 0) = ((MR_Box) (NewSplitNested_188));
                  MR_hl_field(MR_mktag(1), NewEntry_189, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(MR_mktag(1), NewEntry_189, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_189)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_63_63;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (SeenImp_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OldEntry_158;
              MR_Box conv4_OldEntry_158;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_59_59, ((MR_Box) (ModuleName_14)), &conv4_OldEntry_158);
              if (succeeded)
              {
                OldEntry_158 = ((MR_Word) (conv4_OldEntry_158));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word OldItemBlockCord_41;
                MR_Word OldSubInclInfoMap_42;
                MR_Word ImpContext_43;
                MR_Word OldSplitNested_40;

                succeeded = ((MR_tag((MR_Word) OldEntry_158)) == (MR_Integer) 1);
                if (succeeded)
                {
                  OldSplitNested_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_158, (MR_Integer) 0))));
                  OldItemBlockCord_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_158, (MR_Integer) 1))));
                  OldSubInclInfoMap_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_158, (MR_Integer) 2))));
                  succeeded = ((((MR_tag((MR_Word) OldSplitNested_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldSplitNested_40, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                    ImpContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldSplitNested_40, (MR_Integer) 1))));
                }
                if (succeeded)
                {
                  MR_Word NewSplitNested_44;
                  MR_Word NewItemBlockCord_45;
                  MR_Word NewSubInclInfoMap_46;
                  MR_Word NewEntry_47;

                  {
                    NewSplitNested_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), NewSplitNested_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), NewSplitNested_44, 1) = ((MR_Box) (Context_15));
                    MR_hl_field(MR_mktag(3), NewSplitNested_44, 2) = ((MR_Box) (ImpContext_43));
                  }
                  NewItemBlockCord_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ItemBlockCord0_20, OldItemBlockCord_41);
                  mercury__map__union_4_p_1((MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[5]), SubInclInfoMap0_19, OldSubInclInfoMap_42, &NewSubInclInfoMap_46);
                  {
                    NewEntry_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), NewEntry_47, 0) = ((MR_Box) (NewSplitNested_44));
                    MR_hl_field(MR_mktag(1), NewEntry_47, 1) = ((MR_Box) (NewItemBlockCord_45));
                    MR_hl_field(MR_mktag(1), NewEntry_47, 2) = ((MR_Box) (NewSubInclInfoMap_46));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_47)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                  *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_63_63;
                }
                else
                {
                  MR_Word EmptyContext_50;
                  MR_Word OldSplitNested_150;

                  succeeded = ((MR_tag((MR_Word) OldEntry_158)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OldSplitNested_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_158, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) OldSplitNested_150)) == (MR_Integer) 1);
                    if (succeeded)
                      EmptyContext_50 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_150), (MR_Integer) 1));
                  }
                  if (succeeded)
                  {
                    MR_Word NewSplitNested_151;
                    MR_Word NewEntry_152;

                    parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_35, Context_15, EmptyContext_50, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_57);
                    NewSplitNested_151 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Context_15)));
                    {
                      NewEntry_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewEntry_152, 0) = ((MR_Box) (NewSplitNested_151));
                      MR_hl_field(MR_mktag(1), NewEntry_152, 1) = ((MR_Box) (ItemBlockCord0_20));
                      MR_hl_field(MR_mktag(1), NewEntry_152, 2) = ((MR_Box) (SubInclInfoMap0_19));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_152)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                  }
                  else
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_35, OldEntry_158, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_57);
                    *STATE_VARIABLE_SplitModuleMap_53 = STATE_VARIABLE_SplitModuleMap_59_59;
                  }
                }
              }
              else
              {
                MR_Word NewSplitNested_156 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Context_15)));
                MR_Word NewEntry_157;

                {
                  NewEntry_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewEntry_157, 0) = ((MR_Box) (NewSplitNested_156));
                  MR_hl_field(MR_mktag(1), NewEntry_157, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(MR_mktag(1), NewEntry_157, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_157)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_63_63;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldEntry_227;
              MR_Box conv6_OldEntry_227;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_59_59, ((MR_Box) (ModuleName_14)), &conv6_OldEntry_227);
              if (succeeded)
              {
                OldEntry_227 = ((MR_Word) (conv6_OldEntry_227));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word EmptyContext_224;
                MR_Word OldSplitNested_214;

                succeeded = ((MR_tag((MR_Word) OldEntry_227)) == (MR_Integer) 1);
                if (succeeded)
                {
                  OldSplitNested_214 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_227, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) OldSplitNested_214)) == (MR_Integer) 1);
                  if (succeeded)
                    EmptyContext_224 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_214), (MR_Integer) 1));
                }
                if (succeeded)
                {
                  MR_Word NewSplitNested_217;
                  MR_Word NewEntry_218;

                  parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_35, Context_15, EmptyContext_224, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_57);
                  {
                    NewSplitNested_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), NewSplitNested_217, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), NewSplitNested_217, 1) = ((MR_Box) (Context_15));
                    MR_hl_field(MR_mktag(3), NewSplitNested_217, 2) = ((MR_Box) (Context_15));
                  }
                  {
                    NewEntry_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), NewEntry_218, 0) = ((MR_Box) (NewSplitNested_217));
                    MR_hl_field(MR_mktag(1), NewEntry_218, 1) = ((MR_Box) (ItemBlockCord0_20));
                    MR_hl_field(MR_mktag(1), NewEntry_218, 2) = ((MR_Box) (SubInclInfoMap0_19));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_218)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                }
                else
                {
                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 3, ParentModuleName_35, OldEntry_227, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_57);
                  *STATE_VARIABLE_SplitModuleMap_53 = STATE_VARIABLE_SplitModuleMap_59_59;
                }
              }
              else
              {
                MR_Word NewSplitNested_225;
                MR_Word NewEntry_226;

                {
                  NewSplitNested_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NewSplitNested_225, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), NewSplitNested_225, 1) = ((MR_Box) (Context_15));
                  MR_hl_field(MR_mktag(3), NewSplitNested_225, 2) = ((MR_Box) (Context_15));
                }
                {
                  NewEntry_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewEntry_226, 0) = ((MR_Box) (NewSplitNested_225));
                  MR_hl_field(MR_mktag(1), NewEntry_226, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(MR_mktag(1), NewEntry_226, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_226)), STATE_VARIABLE_SplitModuleMap_59_59, STATE_VARIABLE_SplitModuleMap_53);
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_63_63;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(
  MR_Word EntryA_4,
  MR_Word EntryB_5,
  MR_Word * Entry_6)
{
  MR_Word SectionA_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), EntryA_4, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ContextA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryA_4, (MR_Integer) 1))));
  MR_Word SectionB_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), EntryB_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ContextB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryB_5, (MR_Integer) 1))));

  switch (SectionA_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (SectionB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word CmpResult_11;

            mercury__term_context____Compare____term_context_0_0(&CmpResult_11, ContextA_8, ContextB_10);
            switch (CmpResult_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Entry_6 = EntryA_4;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *Entry_6 = EntryB_5;
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          *Entry_6 = EntryB_5;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (SectionB_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *Entry_6 = EntryA_4;
          break;
        case (MR_Integer) 0:
          {
            MR_Word CmpResult_13;

            mercury__term_context____Compare____term_context_0_0(&CmpResult_13, ContextA_8, ContextB_10);
            switch (CmpResult_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *Entry_6 = EntryA_4;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *Entry_6 = EntryB_5;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SectionAncestors_2,
  MR_Word STATE_VARIABLE_OKIncludesCord_0_3,
  MR_Word * STATE_VARIABLE_OKIncludesCord_4,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_5,
  MR_Word * STATE_VARIABLE_SplitModuleMap_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_7,
  MR_Word * STATE_VARIABLE_SubModulesMap_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_SubModulesMap_8 = STATE_VARIABLE_SubModulesMap_0_7;
      *STATE_VARIABLE_SplitModuleMap_6 = STATE_VARIABLE_SplitModuleMap_0_5;
      *STATE_VARIABLE_OKIncludesCord_4 = STATE_VARIABLE_OKIncludesCord_0_3;
    }
    else
    {
      MR_Word Include_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Includes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InclModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Include_24, (MR_Integer) 0))));
      MR_Word Context_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Include_24, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_108_108;
      MR_Word STATE_VARIABLE_SplitModuleMap_109_109;
      MR_Word STATE_VARIABLE_SubModulesMap_110_110;
      MR_Word STATE_VARIABLE_OKIncludesCord_111_111;
      MR_Word OldEntry_34;
      MR_Box conv0_OldEntry_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_OKIncludesCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SplitModuleMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_SubModulesMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_0_5, ((MR_Box) (InclModuleName_31)), &conv0_OldEntry_34);
      if (succeeded)
      {
        OldEntry_34 = ((MR_Word) (conv0_OldEntry_34));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ParentModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_2, (MR_Integer) 0))));
        MR_Word Pieces1_37;
        MR_Word OldContext_41;
        MR_Word Pieces2_42;
        MR_Word Msg_44;
        MR_Word OldMsg_45;
        MR_Word Spec_46;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_101;
        MR_Word Var_105;
        MR_Word Var_106;

        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ParentModuleName_35));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (InclModuleName_31));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[84])));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
        }
        {
          Pieces1_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Pieces1_37, 1) = ((MR_Box) (Var_58));
        }
        if (((MR_tag((MR_Word) OldEntry_34)) == (MR_Integer) 0))
        {
          OldContext_41 = (MR_Word) ((MR_Word) (OldEntry_34));
          Pieces2_42 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[88]));
        }
        else
        {
          MR_Word OldSplitNested_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_34, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) OldSplitNested_38)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldContext_41 = (MR_Word) ((MR_Word) (OldSplitNested_38));
              break;
            case (MR_Integer) 1:
              OldContext_41 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_38), (MR_Integer) 1));
              break;
            case (MR_Integer) 2:
              OldContext_41 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_38), (MR_Integer) 2));
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OldSplitNested_38, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  OldContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldSplitNested_38, (MR_Integer) 1))));
                  break;
                case (MR_Integer) 1:
                  OldContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldSplitNested_38, (MR_Integer) 1))));
                  break;
              }
              break;
          }
          Pieces2_42 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[92]));
        }
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_37, Pieces2_42);
        {
          Msg_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_44, 0) = ((MR_Box) (Context_32));
          MR_hl_field(MR_mktag(0), Msg_44, 1) = ((MR_Box) (Var_101));
        }
        {
          OldMsg_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OldMsg_45, 0) = ((MR_Box) (OldContext_41));
          MR_hl_field(MR_mktag(0), OldMsg_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[47])));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (OldMsg_45));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Msg_44));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
        }
        {
          Spec_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.discover_included_submodules\'/10"));
          MR_hl_field(MR_mktag(0), Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), Spec_46, 3) = ((MR_Box) (Var_105));
        }
        {
          STATE_VARIABLE_Specs_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_108_108, 0) = ((MR_Box) (Spec_46));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_108_108, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
        }
        STATE_VARIABLE_SubModulesMap_110_110 = STATE_VARIABLE_SubModulesMap_0_7;
        STATE_VARIABLE_SplitModuleMap_109_109 = STATE_VARIABLE_SplitModuleMap_0_5;
        STATE_VARIABLE_OKIncludesCord_111_111 = STATE_VARIABLE_OKIncludesCord_0_3;
      }
      else
      {
        MR_Word Entry_47 = (MR_Word) ((MR_Word) (Context_32));
        MR_Word ParentModuleName_119;
        MR_Word SiblingModules0_121;
        MR_Box conv1_SiblingModules0_121;

        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (InclModuleName_31)), ((MR_Box) (Entry_47)), STATE_VARIABLE_SplitModuleMap_0_5, &STATE_VARIABLE_SplitModuleMap_109_109);
        ParentModuleName_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_2, (MR_Integer) 0))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), STATE_VARIABLE_SubModulesMap_0_7, ((MR_Box) (ParentModuleName_119)), &conv1_SiblingModules0_121);
        if (succeeded)
        {
          SiblingModules0_121 = ((MR_Word) (conv1_SiblingModules0_121));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word SiblingModules_122;

          SiblingModules_122 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SiblingModules0_121, ((MR_Box) (InclModuleName_31)));
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_119)), ((MR_Box) (SiblingModules_122)), STATE_VARIABLE_SubModulesMap_0_7, &STATE_VARIABLE_SubModulesMap_110_110);
        }
        else
        {
          MR_Word SiblingModules_123;

          SiblingModules_123 = mercury__cord__singleton_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (InclModuleName_31)));
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_119)), ((MR_Box) (SiblingModules_123)), STATE_VARIABLE_SubModulesMap_0_7, &STATE_VARIABLE_SubModulesMap_110_110);
        }
        STATE_VARIABLE_OKIncludesCord_111_111 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_OKIncludesCord_0_3, ((MR_Box) (Include_24)));
        STATE_VARIABLE_Specs_108_108 = STATE_VARIABLE_Specs_0_9;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Includes_25;
      next_value_of_STATE_VARIABLE_OKIncludesCord_0_3 = STATE_VARIABLE_OKIncludesCord_111_111;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_5 = STATE_VARIABLE_SplitModuleMap_109_109;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_7 = STATE_VARIABLE_SubModulesMap_110_110;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_108_108;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_OKIncludesCord_0_3 = next_value_of_STATE_VARIABLE_OKIncludesCord_0_3;
      STATE_VARIABLE_SplitModuleMap_0_5 = next_value_of_STATE_VARIABLE_SplitModuleMap_0_5;
      STATE_VARIABLE_SubModulesMap_0_7 = next_value_of_STATE_VARIABLE_SubModulesMap_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word SectionAncestors_3,
  MR_Word * MaybeInterfaceAncestor_4)
{
  while (MR_TRUE)
  {
    MR_Word ModuleAncestors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_3, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ModuleAncestors_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeInterfaceAncestor_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SectionKind_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleAncestors_6, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SectionParentAncestors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_6, (MR_Integer) 2))));

      switch (SectionKind_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_SectionAncestors_3 = SectionParentAncestors_9;

            // direct tailcall eliminated
            ;
            SectionAncestors_3 = next_value_of_SectionAncestors_3;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word InterfaceAncestor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionParentAncestors_9, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInterfaceAncestor_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InterfaceAncestor_10));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenInt_0_2,
  MR_Word * STATE_VARIABLE_SeenInt_3,
  MR_Word STATE_VARIABLE_SeenImp_0_4,
  MR_Word * STATE_VARIABLE_SeenImp_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SeenImp_5 = STATE_VARIABLE_SeenImp_0_4;
      *STATE_VARIABLE_SeenInt_3 = STATE_VARIABLE_SeenInt_0_2;
    }
    else
    {
      MR_Word ItemBlock_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SectionKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemBlock_12, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_SeenInt_26_26;
      MR_Word STATE_VARIABLE_SeenImp_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SeenInt_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SeenImp_0_4;

      switch (SectionKind_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_SeenImp_27_27 = (MR_Integer) 1;
            STATE_VARIABLE_SeenInt_26_26 = STATE_VARIABLE_SeenInt_0_2;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_SeenInt_26_26 = (MR_Integer) 1;
            STATE_VARIABLE_SeenImp_27_27 = STATE_VARIABLE_SeenImp_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_13;
      next_value_of_STATE_VARIABLE_SeenInt_0_2 = STATE_VARIABLE_SeenInt_26_26;
      next_value_of_STATE_VARIABLE_SeenImp_0_4 = STATE_VARIABLE_SeenImp_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SeenInt_0_2 = next_value_of_STATE_VARIABLE_SeenInt_0_2;
      STATE_VARIABLE_SeenImp_0_4 = next_value_of_STATE_VARIABLE_SeenImp_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
  MR_Word ModuleName_8,
  MR_Word Context_9,
  MR_Word DupSection_10,
  MR_Word ParentModuleName_11,
  MR_Word OldEntry_12,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word Spec_19;

  if (((MR_tag((MR_Word) OldEntry_12)) == (MR_Integer) 0))
  {
    MR_Word OldContext_14 = (MR_Word) ((MR_Word) (OldEntry_12));
    MR_Word Pieces_15;
    MR_Word Msg_17;
    MR_Word OldMsg_18;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_65;
    MR_Word Var_66;

    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (ParentModuleName_11));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ModuleName_8));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[43])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_30));
    }
    {
      Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Pieces_15));
    }
    {
      OldMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldMsg_18, 0) = ((MR_Box) (OldContext_14));
      MR_hl_field(MR_mktag(0), OldMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[47])));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (OldMsg_18));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Msg_17));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Spec_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule\'/7"));
      MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), Spec_19, 3) = ((MR_Box) (Var_65));
    }
  }
  else
  {
    MR_Word SplitNested_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_12, (MR_Integer) 0))));

    switch (DupSection_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word OldContext_109;
          MR_Word Pieces_110;
          MR_Word Msg_112;
          MR_Word OldMsg_113;

          switch (MR_tag((MR_Word) SplitNested_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldContext_109 = (MR_Word) ((MR_Word) (SplitNested_20));
              break;
            case (MR_Integer) 1:
              OldContext_109 = (MR_Word) (MR_body((MR_Word) (SplitNested_20), (MR_Integer) 1));
              break;
            case (MR_Integer) 2:
              OldContext_109 = (MR_Word) (MR_body((MR_Word) (SplitNested_20), (MR_Integer) 2));
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  OldContext_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 1))));
                  break;
                case (MR_Integer) 1:
                  OldContext_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 1))));
                  break;
              }
              break;
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (ParentModuleName_11));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ModuleName_8));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[52])));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[48])));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
          }
          {
            Pieces_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
            MR_hl_field(MR_mktag(1), Pieces_110, 1) = ((MR_Box) (Var_70));
          }
          {
            Msg_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_112, 0) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Msg_112, 1) = ((MR_Box) (Pieces_110));
          }
          {
            OldMsg_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OldMsg_113, 0) = ((MR_Box) (OldContext_109));
            MR_hl_field(MR_mktag(0), OldMsg_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[54])));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (OldMsg_113));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_112));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
          }
          {
            Spec_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule\'/7"));
            MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(0), Spec_19, 3) = ((MR_Box) (Var_99));
          }
        }
        break;
      case (MR_Integer) 2:
        parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 1, ParentModuleName_11, SplitNested_20, &Spec_19);
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) SplitNested_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_120;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_128;
              MR_Word Var_130;
              MR_Word Var_133;
              MR_Word Var_134;

              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (ParentModuleName_11));
              }
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (ModuleName_8));
              }
              {
                Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
                MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[57])));
              }
              {
                Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55])));
                MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
              }
              {
                Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
              }
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
                MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
              }
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
                MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_125));
              }
              {
                Pieces_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
                MR_hl_field(MR_mktag(1), Pieces_120, 1) = ((MR_Box) (Var_123));
              }
              {
                Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_vs_top\'/4"));
                MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_9));
                MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_120));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule\'/7", (MR_String) "split_nested_empty duplicates a section");
              return;
            }
            break;
          case (MR_Integer) 2:
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 0, ParentModuleName_11, SplitNested_20, &Spec_19);
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 1, ParentModuleName_11, SplitNested_20, &Spec_19);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 1))));
                  MR_Word ImpContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 2))));

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(ModuleName_8, Context_9, ParentModuleName_11, IntContext_24, ImpContext_25, &Spec_19);
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 0, ParentModuleName_11, SplitNested_20, &Spec_19);
        break;
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_27 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word ParentModuleName_9,
  MR_Word OldIntContext_10,
  MR_Word OldImpContext_11,
  MR_Word * Spec_12)
{
  MR_bool succeeded;
  MR_Word Pieces_13;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;

  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (ParentModuleName_9));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[66])));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55])));
    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
  }
  {
    Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
    MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_23));
  }
  succeeded = mercury__term_context____Unify____term_context_0_0(OldIntContext_10, OldImpContext_11);
  if (succeeded)
  {
    MR_Word Msg_15;
    MR_Word OldMsg_16;
    MR_Word Var_55;
    MR_Word Var_56;

    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Pieces_13));
    }
    {
      OldMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldMsg_16, 0) = ((MR_Box) (OldIntContext_10));
      MR_hl_field(MR_mktag(0), OldMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[70])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (OldMsg_16));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_both_sections\'/6"));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
    }
  }
  else
  {
    MR_Word OldIntMsg_19;
    MR_Word OldImpMsg_20;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Msg_81;

    {
      Msg_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_81, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_81, 1) = ((MR_Box) (Pieces_13));
    }
    {
      OldIntMsg_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldIntMsg_19, 0) = ((MR_Box) (OldIntContext_10));
      MR_hl_field(MR_mktag(0), OldIntMsg_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[74])));
    }
    {
      OldImpMsg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldImpMsg_20, 0) = ((MR_Box) (OldImpContext_11));
      MR_hl_field(MR_mktag(0), OldImpMsg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[76])));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (OldImpMsg_20));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (OldIntMsg_19));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Msg_81));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_both_sections\'/6"));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_77));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word Section_9,
  MR_Word ParentModuleName_10,
  MR_Word SplitNested_11,
  MR_Word * Spec_12)
{
  switch (MR_tag((MR_Word) SplitNested_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Pieces_70;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;

        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (ParentModuleName_10));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (ModuleName_7));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[57])));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
        }
        {
          Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Pieces_70, 1) = ((MR_Box) (Var_73));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Spec_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_vs_top\'/4"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_70));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "split_nested_empty duplicates a section");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word IntContext_14 = (MR_Word) (MR_body((MR_Word) (SplitNested_11), (MR_Integer) 2));
        MR_String SectionWord_15;
        MR_Word OldContext_16;

        switch (Section_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate int without duplication");
              return;
            }
            break;
          case (MR_Integer) 0:
            {
              SectionWord_15 = (MR_String) "interface";
              OldContext_16 = IntContext_14;
            }
            break;
        }
        parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(ModuleName_7, Context_8, SectionWord_15, ParentModuleName_10, OldContext_16, Spec_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SplitNested_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ImpContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_11, (MR_Integer) 1))));
            MR_String SectionWord_26;
            MR_Word OldContext_27;

            switch (Section_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  SectionWord_26 = (MR_String) "implementation";
                  OldContext_27 = ImpContext_17;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate imp without duplication");
                  return;
                }
                break;
            }
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(ModuleName_7, Context_8, SectionWord_26, ParentModuleName_10, OldContext_27, Spec_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_11, (MR_Integer) 1))));
            MR_String SectionWord_29;
            MR_Word OldContext_30;
            MR_Word ImpContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_11, (MR_Integer) 2))));
            MR_Word Pieces_32;
            MR_Word OldPieces_33;
            MR_Word Msg_34;
            MR_Word OldMsg_35;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_43;
            MR_Word Var_45;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_61;
            MR_Word Var_67;
            MR_Word Var_68;

            switch (Section_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  SectionWord_29 = (MR_String) "implementation";
                  OldContext_30 = ImpContext_31;
                }
                break;
              case (MR_Integer) 0:
                {
                  SectionWord_29 = (MR_String) "interface";
                  OldContext_30 = IntContext_28;
                }
                break;
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (ParentModuleName_10));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (ModuleName_7));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (SectionWord_29));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[60])));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[58])));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55])));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            {
              Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
              MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_38));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[63])));
            }
            {
              OldPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), OldPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[61])));
              MR_hl_field(MR_mktag(1), OldPieces_33, 1) = ((MR_Box) (Var_61));
            }
            {
              Msg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_34, 0) = ((MR_Box) (Context_8));
              MR_hl_field(MR_mktag(0), Msg_34, 1) = ((MR_Box) (Pieces_32));
            }
            {
              OldMsg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OldMsg_35, 0) = ((MR_Box) (OldContext_30));
              MR_hl_field(MR_mktag(0), OldMsg_35, 1) = ((MR_Box) (OldPieces_33));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (OldMsg_35));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Msg_34));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *Spec_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section_2\'/6"));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_67));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_String SectionWord_9,
  MR_Word ParentModuleName_10,
  MR_Word OldContext_11,
  MR_Word * Spec_12)
{
  MR_Word Pieces_13;
  MR_Word OldPieces_14;
  MR_Word Msg_15;
  MR_Word OldMsg_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_42;
  MR_Word Var_53;
  MR_Word Var_54;

  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ParentModuleName_10));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (SectionWord_9));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[60])));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[58])));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55])));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[36])));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35])));
    MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[63])));
  }
  {
    OldPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), OldPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[61])));
    MR_hl_field(MR_mktag(1), OldPieces_14, 1) = ((MR_Box) (Var_42));
  }
  {
    Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Pieces_13));
  }
  {
    OldMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), OldMsg_16, 0) = ((MR_Box) (OldContext_11));
    MR_hl_field(MR_mktag(0), OldMsg_16, 1) = ((MR_Box) (OldPieces_14));
  }
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (OldMsg_16));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Msg_15));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Spec_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section_2\'/6"));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_53));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ParentModuleName_8,
  MR_Word Context_9,
  MR_Word EmptyContext_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word Pieces1_12;
  MR_Word Msg1_13;
  MR_Word Msg2_15;
  MR_Word Spec_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_45;
  MR_Word Var_46;

  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ParentModuleName_8));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[32])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[28])));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[27])));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    Pieces1_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces1_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[26])));
    MR_hl_field(MR_mktag(1), Pieces1_12, 1) = ((MR_Box) (Var_21));
  }
  {
    Msg1_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Msg1_13, 0) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(0), Msg1_13, 1) = ((MR_Box) (Pieces1_12));
  }
  {
    Msg2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Msg2_15, 0) = ((MR_Box) (EmptyContext_10));
    MR_hl_field(MR_mktag(0), Msg2_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[34])));
  }
  {
    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Msg2_15));
    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Msg1_13));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
  }
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.warn_duplicate_of_empty_submodule\'/6"));
    MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(0), Spec_16, 3) = ((MR_Box) (Var_45));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Context_7,
  MR_Word ParentModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_25;

  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ModuleName_6));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (ParentModuleName_8));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[30])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[28])));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[27])));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
  }
  {
    Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[26])));
    MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
  }
  {
    Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.warn_empty_submodule\'/5"));
    MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_7));
    MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_13 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word ModuleAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * STATE_VARIABLE_SubModulesMap_12)
{
  MR_bool succeeded;

  if ((ModuleAncestors_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_SubModulesMap_12 = STATE_VARIABLE_SubModulesMap_0_11;
  else
  {
    MR_Word SectionAncestors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_5, (MR_Integer) 2))));
    MR_Word ParentModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_10, (MR_Integer) 0))));
    MR_Word SiblingModules0_15;
    MR_Box conv0_SiblingModules0_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), STATE_VARIABLE_SubModulesMap_0_11, ((MR_Box) (ParentModuleName_13)), &conv0_SiblingModules0_15);
    if (succeeded)
    {
      SiblingModules0_15 = ((MR_Word) (conv0_SiblingModules0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SiblingModules_16;

      SiblingModules_16 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SiblingModules0_15, ((MR_Box) (ModuleName_6)));
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_13)), ((MR_Box) (SiblingModules_16)), STATE_VARIABLE_SubModulesMap_0_11, STATE_VARIABLE_SubModulesMap_12);
    }
    else
    {
      MR_Word SiblingModules_17;

      SiblingModules_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_6)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_13)), ((MR_Box) (SiblingModules_17)), STATE_VARIABLE_SubModulesMap_0_11, STATE_VARIABLE_SubModulesMap_12);
    }
  }
}

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word SplitNested_3)
{
  MR_Word Context_4;

  switch (MR_tag((MR_Word) SplitNested_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Context_4 = (MR_Word) ((MR_Word) (SplitNested_3));
      break;
    case (MR_Integer) 1:
      Context_4 = (MR_Word) (MR_body((MR_Word) (SplitNested_3), (MR_Integer) 1));
      break;
    case (MR_Integer) 2:
      Context_4 = (MR_Word) (MR_body((MR_Word) (SplitNested_3), (MR_Integer) 2));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SplitNested_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_3, (MR_Integer) 1))));
          break;
        case (MR_Integer) 1:
          Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_3, (MR_Integer) 1))));
          break;
      }
      break;
  }
  return Context_4;
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_SplitModuleMap_33;
  MR_Word conv12_STATE_VARIABLE_SubModulesMap_35;
  MR_Word conv11_STATE_VARIABLE_ParseTreeModuleSrcCord_37;
  MR_Word conv10_STATE_VARIABLE_Specs_39;

  parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_SplitModuleMap_33, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_SubModulesMap_35, ((MR_Word) (wrapper_arg_6)), &conv11_STATE_VARIABLE_ParseTreeModuleSrcCord_37, ((MR_Word) (wrapper_arg_8)), &conv10_STATE_VARIABLE_Specs_39);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_SplitModuleMap_33));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_SubModulesMap_35));
  *wrapper_arg_7 = ((MR_Box) (conv11_STATE_VARIABLE_ParseTreeModuleSrcCord_37));
  *wrapper_arg_9 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_39));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_RevIntIncludes_19;
  MR_Word conv5_STATE_VARIABLE_RevImpIncludes_21;

  parse_tree__split_parse_tree_src__submodule_include_info_map_to_item_includes_acc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_RevIntIncludes_19, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_RevImpIncludes_21);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_RevIntIncludes_19));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_RevImpIncludes_21));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_IntMods_17;
  MR_Word conv1_STATE_VARIABLE_ImpMods_19;

  parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntMods_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ImpMods_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntMods_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ImpMods_19));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_32,
  MR_Word * STATE_VARIABLE_SplitModuleMap_33,
  MR_Word STATE_VARIABLE_SubModulesMap_0_34,
  MR_Word * STATE_VARIABLE_SubModulesMap_35,
  MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_0_36,
  MR_Word * STATE_VARIABLE_ParseTreeModuleSrcCord_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  MR_bool succeeded;
  MR_Word Entry_17;
  MR_Word STATE_VARIABLE_SplitModuleMap_40_40;
  MR_Box conv0_Entry_17;

  mercury__map__det_remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_12)), &conv0_Entry_17, STATE_VARIABLE_SplitModuleMap_0_32, &STATE_VARIABLE_SplitModuleMap_40_40);
  Entry_17 = ((MR_Word) (conv0_Entry_17));
  if (((MR_tag((MR_Word) Entry_17)) == (MR_Integer) 0))
  {
    mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_SubModulesMap_0_34, STATE_VARIABLE_SubModulesMap_35);
    *STATE_VARIABLE_SplitModuleMap_33 = STATE_VARIABLE_SplitModuleMap_40_40;
    *STATE_VARIABLE_ParseTreeModuleSrcCord_37 = STATE_VARIABLE_ParseTreeModuleSrcCord_0_36;
    *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
  }
  else
  {
    MR_Word NestedInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Entry_17, (MR_Integer) 0))));
    MR_Word RawItemBlockCord0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Entry_17, (MR_Integer) 1))));
    MR_Word SubInclInfoMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Entry_17, (MR_Integer) 2))));
    MR_Word RawItemBlockCord_22;
    MR_Word RawItemBlocks_23;
    MR_Word STATE_VARIABLE_Specs_42_42;
    MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_43_43;
    MR_Word IntMods_99;
    MR_Word ImpMods_100;
    MR_Word RevIntIncludes_101;
    MR_Word RevImpIncludes_102;
    MR_Word IntIncludes_103;
    MR_Word ImpIncludes_104;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word STATE_VARIABLE_RawItemBlockCord_33_116;
    MR_Box conv4_IntMods_99;
    MR_Box conv3_ImpMods_100;
    MR_Box conv8_RevIntIncludes_101;
    MR_Box conv7_RevImpIncludes_102;
    MR_Word SubModulesCord_30;
    MR_Word STATE_VARIABLE_SubModulesMap_60_60;
    MR_Box conv9_SubModulesCord_30;

    Var_108 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord0_20);
    Var_109 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_110 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[3]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[3]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[3]), Var_108, ((MR_Box) (Var_109)), &conv4_IntMods_99, ((MR_Box) (Var_110)), &conv3_ImpMods_100);
    IntMods_99 = ((MR_Word) (conv4_IntMods_99));
    ImpMods_100 = ((MR_Word) (conv3_ImpMods_100));
    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (IntMods_99));
      MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) (ImpMods_100));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), Var_111, SubInclInfoMap_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_RevIntIncludes_101, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_RevImpIncludes_102);
    RevIntIncludes_101 = ((MR_Word) (conv8_RevIntIncludes_101));
    RevImpIncludes_102 = ((MR_Word) (conv7_RevImpIncludes_102));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevIntIncludes_101, &IntIncludes_103);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevImpIncludes_102, &ImpIncludes_104);
    if ((IntIncludes_103 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_RawItemBlockCord_33_116 = RawItemBlockCord0_20;
    else
    {
      MR_Word IntItemBlock_105;

      {
        IntItemBlock_105 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntItemBlock_105, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), IntItemBlock_105, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), IntItemBlock_105, 2) = ((MR_Box) (IntIncludes_103));
        MR_hl_field(MR_mktag(0), IntItemBlock_105, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntItemBlock_105, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), IntItemBlock_105, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_RawItemBlockCord_33_116 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord0_20, ((MR_Box) (IntItemBlock_105)));
    }
    if ((ImpIncludes_104 == (MR_Word) ((MR_Unsigned) 0U)))
      RawItemBlockCord_22 = STATE_VARIABLE_RawItemBlockCord_33_116;
    else
    {
      MR_Word ImpItemBlock_106;

      {
        ImpItemBlock_106 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpItemBlock_106, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), ImpItemBlock_106, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ImpItemBlock_106, 2) = ((MR_Box) (ImpIncludes_104));
        MR_hl_field(MR_mktag(0), ImpItemBlock_106, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImpItemBlock_106, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ImpItemBlock_106, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      RawItemBlockCord_22 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), STATE_VARIABLE_RawItemBlockCord_33_116, ((MR_Box) (ImpItemBlock_106)));
    }
    RawItemBlocks_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord_22);
    switch (MR_tag((MR_Word) NestedInfo_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_95 = (MR_Word) ((MR_Word) (NestedInfo_19));
          MR_Word RawCompUnit_96;
          MR_Word ParseTreeModuleSrc_97;

          {
            RawCompUnit_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RawCompUnit_96, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(0), RawCompUnit_96, 1) = ((MR_Box) (Context_95));
            MR_hl_field(MR_mktag(0), RawCompUnit_96, 2) = ((MR_Box) (RawItemBlocks_23));
          }
          parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(Globals_11, RawCompUnit_96, &ParseTreeModuleSrc_97, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_42_42);
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ParseTreeModuleSrc_97)), STATE_VARIABLE_ParseTreeModuleSrcCord_0_36, &STATE_VARIABLE_ParseTreeModuleSrcCord_43_43);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_67 = (MR_Word) (MR_body((MR_Word) (NestedInfo_19), (MR_Integer) 1));
          MR_Word RawCompUnit_68;
          MR_Word ParseTreeModuleSrc_69;

          {
            RawCompUnit_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RawCompUnit_68, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(0), RawCompUnit_68, 1) = ((MR_Box) (Context_67));
            MR_hl_field(MR_mktag(0), RawCompUnit_68, 2) = ((MR_Box) (RawItemBlocks_23));
          }
          parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(Globals_11, RawCompUnit_68, &ParseTreeModuleSrc_69, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_42_42);
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ParseTreeModuleSrc_69)), STATE_VARIABLE_ParseTreeModuleSrcCord_0_36, &STATE_VARIABLE_ParseTreeModuleSrcCord_43_43);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_91 = (MR_Word) (MR_body((MR_Word) (NestedInfo_19), (MR_Integer) 2));
          MR_Word RawCompUnit_92;
          MR_Word ParseTreeModuleSrc_93;

          {
            RawCompUnit_92 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RawCompUnit_92, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(0), RawCompUnit_92, 1) = ((MR_Box) (Context_91));
            MR_hl_field(MR_mktag(0), RawCompUnit_92, 2) = ((MR_Box) (RawItemBlocks_23));
          }
          parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(Globals_11, RawCompUnit_92, &ParseTreeModuleSrc_93, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_42_42);
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ParseTreeModuleSrc_93)), STATE_VARIABLE_ParseTreeModuleSrcCord_0_36, &STATE_VARIABLE_ParseTreeModuleSrcCord_43_43);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NestedInfo_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_28;
              MR_Word Spec_29;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Context_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NestedInfo_19, (MR_Integer) 1))));

              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (ModuleName_12));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[9])));
              }
              {
                Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[6])));
                MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_48));
              }
              {
                Spec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.create_split_compilation_units_depth_first\'/10"));
                MR_hl_field(MR_mktag(1), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(1), Spec_29, 3) = ((MR_Box) (Context_70));
                MR_hl_field(MR_mktag(1), Spec_29, 4) = ((MR_Box) (Pieces_28));
              }
              {
                STATE_VARIABLE_Specs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_42_42, 0) = ((MR_Box) (Spec_29));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_42_42, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
              }
              STATE_VARIABLE_ParseTreeModuleSrcCord_43_43 = STATE_VARIABLE_ParseTreeModuleSrcCord_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NestedInfo_19, (MR_Integer) 1))));
              MR_Word RawCompUnit_26;
              MR_Word ParseTreeModuleSrc_27;

              {
                RawCompUnit_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RawCompUnit_26, 0) = ((MR_Box) (ModuleName_12));
                MR_hl_field(MR_mktag(0), RawCompUnit_26, 1) = ((MR_Box) (Context_24));
                MR_hl_field(MR_mktag(0), RawCompUnit_26, 2) = ((MR_Box) (RawItemBlocks_23));
              }
              parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(Globals_11, RawCompUnit_26, &ParseTreeModuleSrc_27, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_42_42);
              mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ParseTreeModuleSrc_27)), STATE_VARIABLE_ParseTreeModuleSrcCord_0_36, &STATE_VARIABLE_ParseTreeModuleSrcCord_43_43);
            }
            break;
        }
        break;
    }
    succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_12)), &conv9_SubModulesCord_30, STATE_VARIABLE_SubModulesMap_0_34, &STATE_VARIABLE_SubModulesMap_60_60);
    if (succeeded)
    {
      SubModulesCord_30 = ((MR_Word) (conv9_SubModulesCord_30));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SubModules_31;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Box conv17_STATE_VARIABLE_SplitModuleMap_33;
      MR_Box conv16_STATE_VARIABLE_SubModulesMap_35;
      MR_Box conv15_STATE_VARIABLE_ParseTreeModuleSrcCord_37;
      MR_Box conv14_STATE_VARIABLE_Specs_39;

      Var_61 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SubModulesCord_30);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, &SubModules_31);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_10_p_0_3));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Globals_11));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[2]), Var_62, SubModules_31, ((MR_Box) (STATE_VARIABLE_SplitModuleMap_40_40)), &conv17_STATE_VARIABLE_SplitModuleMap_33, ((MR_Box) (STATE_VARIABLE_SubModulesMap_60_60)), &conv16_STATE_VARIABLE_SubModulesMap_35, ((MR_Box) (STATE_VARIABLE_ParseTreeModuleSrcCord_43_43)), &conv15_STATE_VARIABLE_ParseTreeModuleSrcCord_37, ((MR_Box) (STATE_VARIABLE_Specs_42_42)), &conv14_STATE_VARIABLE_Specs_39);
      *STATE_VARIABLE_SplitModuleMap_33 = ((MR_Word) (conv17_STATE_VARIABLE_SplitModuleMap_33));
      *STATE_VARIABLE_SubModulesMap_35 = ((MR_Word) (conv16_STATE_VARIABLE_SubModulesMap_35));
      *STATE_VARIABLE_ParseTreeModuleSrcCord_37 = ((MR_Word) (conv15_STATE_VARIABLE_ParseTreeModuleSrcCord_37));
      *STATE_VARIABLE_Specs_39 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_39));
    }
    else
    {
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_42_42;
      *STATE_VARIABLE_ParseTreeModuleSrcCord_37 = STATE_VARIABLE_ParseTreeModuleSrcCord_43_43;
      *STATE_VARIABLE_SubModulesMap_35 = STATE_VARIABLE_SubModulesMap_0_34;
      *STATE_VARIABLE_SplitModuleMap_33 = STATE_VARIABLE_SplitModuleMap_40_40;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____submodule_include_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____submodule_include_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____submodule_include_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__split_parse_tree_src____Unify____submodule_include_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____submodule_include_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__split_parse_tree_src____Compare____submodule_include_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__split_parse_tree_src__init(void)
{
}

void mercury__parse_tree__split_parse_tree_src__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_duplicated_section_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_to_submodules_map_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_parent_module_context_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_map_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0);
	MR_register_type_ctor_info(&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_map_0);
}

void mercury__parse_tree__split_parse_tree_src__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__split_parse_tree_src__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.split_parse_tree_src.
