/*
** Automatically generated from `split_parse_tree_src.m'
** by the Mercury compiler,
** version rotd-2024-07-29
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

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
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__553__1_2_p_0(
  MR_Word ModuleName_14,
  MR_Word ComponentModuleName_134);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__91__1_1_p_0(
  MR_Word LeftOverSubModulesMap_16);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__89__1_1_p_0(
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
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_3(
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
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0(
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
  MR_Word STATE_VARIABLE_SplitModuleMap_0_68,
  MR_Word * STATE_VARIABLE_SplitModuleMap_69,
  MR_Word STATE_VARIABLE_SubModulesMap_0_70,
  MR_Word * STATE_VARIABLE_SubModulesMap_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73);

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
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word ParentModuleName_7,
  MR_Word * Spec_8);

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

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word SplitNested_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word ModuleAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * STATE_VARIABLE_SubModulesMap_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word SectionAncestors_3,
  MR_Word * MaybeInterfaceAncestor_4);

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
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
  MR_Word SectionAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_12,
  MR_Word * STATE_VARIABLE_SubModulesMap_13);

static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenInt_0_2,
  MR_Word * STATE_VARIABLE_SeenInt_3,
  MR_Word STATE_VARIABLE_SeenImp_0_4,
  MR_Word * STATE_VARIABLE_SeenImp_5);

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


static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[127][2];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[1][6];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_7[1][13];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_8[2][4];




static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[127][2] = {
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the top level module"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for itself."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should not have an"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is the location of the"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should not have its name reused."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is the location of the reuse."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "implementation section"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occurs in the"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "interface section"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "submodule"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be a nested submodule."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was previously declared"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: submodule"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "missing its interface section."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "empty."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicates"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an empty submodule."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is the location of the empty submodule,"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a separate submodule."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the empty nested"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declared"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "also declared"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has both its interface and its implementation"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[101])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "were also declared"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[111]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was also declared"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "here,"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[116])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has the same name"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as its ancestor module."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])))
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
    ((MR_Box) (parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[1])),
    ((MR_Box) (parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[1][6] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[2][5] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[1][8] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_6[1][11] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_7[1][13] = {
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
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0) }
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
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0 };

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_1 };

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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0 };

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0[1] = { (MR_Integer) 0 };

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

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

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
  { (MR_TypeInfo) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0) }
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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0 };

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1 };

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

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

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

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

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

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

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

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0 };

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1 };

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2 };

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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_submodule_include_info_0_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_submodule_include_info_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_submodule_include_info_0[1] = { &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_submodule_include_info_0_0 };

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_submodule_include_info_0[1] = { (MR_Integer) 0 };

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
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__553__1_2_p_0(
  MR_Word ModuleName_14,
  MR_Word ComponentModuleName_134)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_14, ComponentModuleName_134);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__91__1_1_p_0(
  MR_Word LeftOverSubModulesMap_16)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), LeftOverSubModulesMap_16);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__89__1_1_p_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_8;

    parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[5]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
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
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

              mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
              MR_Word ArgY1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

              mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_14;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
                      succeeded = (SubResult1_14 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_14;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_15, ArgY2_16);
                    }
                    break;
                }
                break;
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__1_1 = (MR_Integer) 0;
      else
        HeadVar__1_1 = (MR_Integer) 1;
    else
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = ArgX3_10;
          MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_11;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
          tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
          goto top_of_proc_2;
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__1_1 = (MR_Integer) 0;
      else
        HeadVar__1_1 = (MR_Integer) 1;
    else
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = ArgX3_10;
          MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_11;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
          tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
          goto top_of_proc_2;
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
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
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
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
  MR_Word SectionKind_15 = ((MR_Unsigned) ((MR_hl_field(0, SubInclInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, SubInclInfo_12, (MR_Integer) 1))));
  MR_Word Incl_17;

  {
    Incl_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Incl_17, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Incl_17, 1) = ((MR_Box) (Context_16));
    MR_hl_field(0, Incl_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevImpIncludes_21 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Incl_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevImpIncludes_0_20));
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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevIntIncludes_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Incl_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevIntIncludes_0_18));
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
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, RawItemBlock_6, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Incls_11 = ((MR_Word) ((MR_hl_field(0, RawItemBlock_6, (MR_Integer) 2))));
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
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__91__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__89__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0(
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
  TopModuleName_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_7, (MR_Integer) 0))));
  Var_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0));
  parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0(Globals_6, TopModuleName_12, SplitModuleMap_10, &LeftOverSplitModuleMap_15, SubModulesMap_11, &LeftOverSubModulesMap_16, Var_24, &ParseTreeModuleSrcCord_17, STATE_VARIABLE_Specs_23_23, STATE_VARIABLE_Specs_19);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_8[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (LeftOverSplitModuleMap_15));
  }
  mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_component_modules_perform_checks\'/5", (MR_String) "LeftOverSplitModuleMap is not empty");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_8[1]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0_2));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (LeftOverSubModulesMap_16));
  }
  mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_component_modules_perform_checks\'/5", (MR_String) "LeftOverSubModulesMap is not empty");
  *ParseTreeModuleSrcs_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ParseTreeModuleSrcCord_17);
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_3(
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

  parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_SplitModuleMap_33, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_SubModulesMap_35, ((MR_Word) (wrapper_arg_6)), &conv11_STATE_VARIABLE_ParseTreeModuleSrcCord_37, ((MR_Word) (wrapper_arg_8)), &conv10_STATE_VARIABLE_Specs_39);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_SplitModuleMap_33));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_SubModulesMap_35));
  *wrapper_arg_7 = ((MR_Box) (conv11_STATE_VARIABLE_ParseTreeModuleSrcCord_37));
  *wrapper_arg_9 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_39));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_2(
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

  parse_tree__split_parse_tree_src__submodule_include_info_map_to_item_includes_acc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_RevIntIncludes_19, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_RevImpIncludes_21);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_RevIntIncludes_19));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_RevImpIncludes_21));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_1(
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
parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0(
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
    MR_Word NestedInfo_19 = ((MR_Word) ((MR_hl_field(1, Entry_17, (MR_Integer) 0))));
    MR_Word RawItemBlockCord0_20 = ((MR_Word) ((MR_hl_field(1, Entry_17, (MR_Integer) 1))));
    MR_Word SubInclInfoMap_21 = ((MR_Word) ((MR_hl_field(1, Entry_17, (MR_Integer) 2))));
    MR_Word RawItemBlockCord_22;
    MR_Word RawItemBlocks_23;
    MR_Word Context_24;
    MR_Word RawCompUnit_28;
    MR_Word ParseTreeModuleSrc_29;
    MR_Word STATE_VARIABLE_Specs_68_68;
    MR_Word STATE_VARIABLE_Specs_69_69;
    MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_70_70;
    MR_Word IntMods_94;
    MR_Word ImpMods_95;
    MR_Word RevIntIncludes_96;
    MR_Word RevImpIncludes_97;
    MR_Word IntIncludes_98;
    MR_Word ImpIncludes_99;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_RawItemBlockCord_33_111;
    MR_Box conv4_IntMods_94;
    MR_Box conv3_ImpMods_95;
    MR_Box conv8_RevIntIncludes_96;
    MR_Box conv7_RevImpIncludes_97;
    MR_Word SubModulesCord_30;
    MR_Word STATE_VARIABLE_SubModulesMap_71_71;
    MR_Box conv9_SubModulesCord_30;

    Var_103 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord0_20);
    Var_104 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_105 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[3]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[3]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[5]), Var_103, ((MR_Box) (Var_104)), &conv4_IntMods_94, ((MR_Box) (Var_105)), &conv3_ImpMods_95);
    IntMods_94 = ((MR_Word) (conv4_IntMods_94));
    ImpMods_95 = ((MR_Word) (conv3_ImpMods_95));
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_106, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_6[0]));
      MR_hl_field(0, Var_106, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_2));
      MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_106, 3) = ((MR_Box) (IntMods_94));
      MR_hl_field(0, Var_106, 4) = ((MR_Box) (ImpMods_95));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), Var_106, SubInclInfoMap_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_RevIntIncludes_96, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_RevImpIncludes_97);
    RevIntIncludes_96 = ((MR_Word) (conv8_RevIntIncludes_96));
    RevImpIncludes_97 = ((MR_Word) (conv7_RevImpIncludes_97));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevIntIncludes_96, &IntIncludes_98);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevImpIncludes_97, &ImpIncludes_99);
    if ((IntIncludes_98 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_RawItemBlockCord_33_111 = RawItemBlockCord0_20;
    else
    {
      MR_Word IntItemBlock_100;

      {
        IntItemBlock_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, IntItemBlock_100, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(0, IntItemBlock_100, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, IntItemBlock_100, 2) = ((MR_Box) (IntIncludes_98));
        MR_hl_field(0, IntItemBlock_100, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, IntItemBlock_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, IntItemBlock_100, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_RawItemBlockCord_33_111 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord0_20, ((MR_Box) (IntItemBlock_100)));
    }
    if ((ImpIncludes_99 == (MR_Word) ((MR_Unsigned) 0U)))
      RawItemBlockCord_22 = STATE_VARIABLE_RawItemBlockCord_33_111;
    else
    {
      MR_Word ImpItemBlock_101;

      {
        ImpItemBlock_101 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ImpItemBlock_101, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(0, ImpItemBlock_101, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, ImpItemBlock_101, 2) = ((MR_Box) (ImpIncludes_99));
        MR_hl_field(0, ImpItemBlock_101, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ImpItemBlock_101, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ImpItemBlock_101, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      RawItemBlockCord_22 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), STATE_VARIABLE_RawItemBlockCord_33_111, ((MR_Box) (ImpItemBlock_101)));
    }
    RawItemBlocks_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord_22);
    switch (MR_tag((MR_Word) NestedInfo_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Context_24 = (MR_Word) ((MR_Word) (NestedInfo_19));
          STATE_VARIABLE_Specs_68_68 = STATE_VARIABLE_Specs_0_38;
        }
        break;
      case (MR_Integer) 1:
        {
          Context_24 = (MR_Word) (MR_body((MR_Word) (NestedInfo_19), (MR_Integer) 1));
          STATE_VARIABLE_Specs_68_68 = STATE_VARIABLE_Specs_0_38;
        }
        break;
      case (MR_Integer) 2:
        {
          Context_24 = (MR_Word) (MR_body((MR_Word) (NestedInfo_19), (MR_Integer) 2));
          STATE_VARIABLE_Specs_68_68 = STATE_VARIABLE_Specs_0_38;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, NestedInfo_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_26;
              MR_Word Spec_27;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_51;
              MR_Word Var_56;
              MR_Word Var_57;

              Context_24 = ((MR_Word) ((MR_hl_field(3, NestedInfo_19, (MR_Integer) 1))));
              {
                Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, Var_49, 1) = ((MR_Box) (ModuleName_12));
              }
              {
                Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
                MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_47 = parse_tree__error_spec__color_as_subject_1_f_0(Var_48);
              Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[65])));
              Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
              Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[63])), Var_56);
              Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_51);
              Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[61])), Var_46);
              {
                Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.create_component_modules_depth_first\'/10"));
                MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_27, 3) = ((MR_Box) (Context_24));
                MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_26));
              }
              {
                STATE_VARIABLE_Specs_68_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_68_68, 0) = ((MR_Box) (Spec_27));
                MR_hl_field(1, STATE_VARIABLE_Specs_68_68, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              Context_24 = ((MR_Word) ((MR_hl_field(3, NestedInfo_19, (MR_Integer) 1))));
              STATE_VARIABLE_Specs_68_68 = STATE_VARIABLE_Specs_0_38;
            }
            break;
        }
        break;
    }
    {
      RawCompUnit_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RawCompUnit_28, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(0, RawCompUnit_28, 1) = ((MR_Box) (Context_24));
      MR_hl_field(0, RawCompUnit_28, 2) = ((MR_Box) (RawItemBlocks_23));
    }
    parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(Globals_11, RawCompUnit_28, &ParseTreeModuleSrc_29, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_69_69);
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ParseTreeModuleSrc_29)), STATE_VARIABLE_ParseTreeModuleSrcCord_0_36, &STATE_VARIABLE_ParseTreeModuleSrcCord_70_70);
    succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_12)), &conv9_SubModulesCord_30, STATE_VARIABLE_SubModulesMap_0_34, &STATE_VARIABLE_SubModulesMap_71_71);
    if (succeeded)
    {
      SubModulesCord_30 = ((MR_Word) (conv9_SubModulesCord_30));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SubModules_31;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Box conv17_STATE_VARIABLE_SplitModuleMap_33;
      MR_Box conv16_STATE_VARIABLE_SubModulesMap_35;
      MR_Box conv15_STATE_VARIABLE_ParseTreeModuleSrcCord_37;
      MR_Box conv14_STATE_VARIABLE_Specs_39;

      Var_72 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SubModulesCord_30);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_72, &SubModules_31);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_7[0]));
        MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__create_component_modules_depth_first_10_p_0_3));
        MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_73, 3) = ((MR_Box) (Globals_11));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[2]), Var_73, SubModules_31, ((MR_Box) (STATE_VARIABLE_SplitModuleMap_40_40)), &conv17_STATE_VARIABLE_SplitModuleMap_33, ((MR_Box) (STATE_VARIABLE_SubModulesMap_71_71)), &conv16_STATE_VARIABLE_SubModulesMap_35, ((MR_Box) (STATE_VARIABLE_ParseTreeModuleSrcCord_70_70)), &conv15_STATE_VARIABLE_ParseTreeModuleSrcCord_37, ((MR_Box) (STATE_VARIABLE_Specs_69_69)), &conv14_STATE_VARIABLE_Specs_39);
      *STATE_VARIABLE_SplitModuleMap_33 = ((MR_Word) (conv17_STATE_VARIABLE_SplitModuleMap_33));
      *STATE_VARIABLE_SubModulesMap_35 = ((MR_Word) (conv16_STATE_VARIABLE_SubModulesMap_35));
      *STATE_VARIABLE_ParseTreeModuleSrcCord_37 = ((MR_Word) (conv15_STATE_VARIABLE_ParseTreeModuleSrcCord_37));
      *STATE_VARIABLE_Specs_39 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_39));
    }
    else
    {
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_69_69;
      *STATE_VARIABLE_ParseTreeModuleSrcCord_37 = STATE_VARIABLE_ParseTreeModuleSrcCord_70_70;
      *STATE_VARIABLE_SubModulesMap_35 = STATE_VARIABLE_SubModulesMap_0_34;
      *STATE_VARIABLE_SplitModuleMap_33 = STATE_VARIABLE_SplitModuleMap_40_40;
    }
  }
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
      MR_Word Component_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Components_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__553__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
    MR_Word NestedModuleParseTree_48 = ((MR_Word) ((MR_hl_field(1, Component_15, (MR_Integer) 3))));
    MR_Word NestedModuleName_49 = ((MR_Word) ((MR_hl_field(0, NestedModuleParseTree_48, (MR_Integer) 0))));
    MR_Word NestedModuleContext_50 = ((MR_Word) ((MR_hl_field(0, NestedModuleParseTree_48, (MR_Integer) 1))));
    MR_Word NewEntry_53;
    MR_Word NestedModuleAncestors_56;
    MR_Word Var_124;
    MR_Word ComponentModuleName_134 = ((MR_Word) ((MR_hl_field(1, Component_15, (MR_Integer) 0))));
    MR_Word SectionKind_135 = ((MR_Unsigned) ((MR_hl_field(1, Component_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SectionContext_136 = ((MR_Word) ((MR_hl_field(1, Component_15, (MR_Integer) 2))));
    MR_Word Var_150;
    MR_Word OldEntry_54;
    MR_Box conv0_OldEntry_54;

    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_124, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[0]));
      MR_hl_field(0, Var_124, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_component_discover_submodules_13_p_0_1));
      MR_hl_field(0, Var_124, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_124, 3) = ((MR_Box) (ModuleName_14));
      MR_hl_field(0, Var_124, 4) = ((MR_Box) (ComponentModuleName_134));
    }
    mercury__require__expect_3_p_0(Var_124, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13", (MR_String) "ModuleName != ComponentModuleName");
    succeeded = ((MR_tag((MR_Word) NestedModuleName_49)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_150 = ((MR_Word) ((MR_hl_field(1, NestedModuleName_49, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ComponentModuleName_134, Var_150);
    }
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13", (MR_String) "ComponentModuleName is not NestedModuleName\'s parent");
        return;
      }
    {
      NewEntry_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewEntry_53, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_135));
      MR_hl_field(0, NewEntry_53, 1) = ((MR_Box) (NestedModuleContext_50));
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
      NestedModuleAncestors_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NestedModuleAncestors_56, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_135));
      MR_hl_field(1, NestedModuleAncestors_56, 1) = ((MR_Box) (SectionContext_136));
      MR_hl_field(1, NestedModuleAncestors_56, 2) = ((MR_Box) (SectionAncestors_16));
    }
    parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(NestedModuleParseTree_48, NestedModuleAncestors_56, STATE_VARIABLE_SplitModuleMap_0_57, STATE_VARIABLE_SplitModuleMap_58, STATE_VARIABLE_SubModulesMap_0_59, STATE_VARIABLE_SubModulesMap_60, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
    *STATE_VARIABLE_RawItemBlockCord_64 = STATE_VARIABLE_RawItemBlockCord_0_63;
  }
  else
  {
    MR_Word ComponentModuleName_22 = ((MR_Word) ((MR_hl_field(0, Component_15, (MR_Integer) 0))));
    MR_Word SectionKind_23 = ((MR_Unsigned) ((MR_hl_field(0, Component_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SectionContext_24 = ((MR_Word) ((MR_hl_field(0, Component_15, (MR_Integer) 2))));
    MR_Word IncludesCord_25 = ((MR_Word) ((MR_hl_field(0, Component_15, (MR_Integer) 3))));
    MR_Word AvailsCord_26 = ((MR_Word) ((MR_hl_field(0, Component_15, (MR_Integer) 4))));
    MR_Word FIMsCord_27 = ((MR_Word) ((MR_hl_field(0, Component_15, (MR_Integer) 5))));
    MR_Word ItemsCord_28 = ((MR_Word) ((MR_hl_field(0, Component_15, (MR_Integer) 6))));
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
      MR_hl_field(0, RawItemBlock_35, 0) = ((MR_Box) (ComponentModuleName_22));
      MR_hl_field(0, RawItemBlock_35, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_23));
      MR_hl_field(0, RawItemBlock_35, 2) = ((MR_Box) (OKIncludes_34));
      MR_hl_field(0, RawItemBlock_35, 3) = ((MR_Box) (Avails_30));
      MR_hl_field(0, RawItemBlock_35, 4) = ((MR_Box) (FIMs_32));
      MR_hl_field(0, RawItemBlock_35, 5) = ((MR_Box) (Items_31));
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
            MR_Word InterfaceAncestor_37 = ((MR_Word) ((MR_hl_field(1, MaybeInterfaceAncestor_36, (MR_Integer) 0))));
            MR_Word CurModuleName_38 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_16, (MR_Integer) 0))));
            MR_Word ModuleAncestors_39 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_16, (MR_Integer) 1))));
            MR_String PorA_45;
            MR_Word Pieces_46;
            MR_Word Spec_47;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_91;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_111;
            MR_Word Var_112;

            if ((ModuleAncestors_39 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13", (MR_String) "in interface section of nonexistent ancestor");
                return;
              }
            else
            {
              MR_Word ModuleSectionAncestor_42 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_39, (MR_Integer) 2))));
              MR_Word ModuleParent_43 = ((MR_Word) ((MR_hl_field(0, ModuleSectionAncestor_42, (MR_Integer) 0))));

              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleParent_43, InterfaceAncestor_37);
              if (succeeded)
                PorA_45 = (MR_String) "parent";
              else
                PorA_45 = (MR_String) "ancestor";
            }
            Var_79 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[27])));
            {
              Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_89, 1) = ((MR_Box) (CurModuleName_38));
            }
            {
              Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
              MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[28])));
              MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
            }
            Var_97 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[32])));
            {
              Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_107, 1) = ((MR_Box) (PorA_45));
            }
            {
              Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_112, 1) = ((MR_Box) (InterfaceAncestor_37));
            }
            {
              Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
              MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[36])));
            }
            {
              Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[34])));
              MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
            }
            {
              Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
              MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
            }
            {
              Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[33])));
              MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
            }
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
            Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_102);
            Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[30])), Var_96);
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_91);
            Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_84);
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[25])), Var_78);
            {
              Spec_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/13"));
              MR_hl_field(0, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_47, 3) = ((MR_Box) (SectionContext_24));
              MR_hl_field(0, Spec_47, 4) = ((MR_Box) (Pieces_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_66 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_47));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_70_70));
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
  MR_Word STATE_VARIABLE_SplitModuleMap_0_68,
  MR_Word * STATE_VARIABLE_SplitModuleMap_69,
  MR_Word STATE_VARIABLE_SubModulesMap_0_70,
  MR_Word * STATE_VARIABLE_SubModulesMap_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
{
  MR_bool succeeded;
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, ParseTree_9, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ParseTree_9, (MR_Integer) 1))));
  MR_Word ModuleComponentsCord_16 = ((MR_Word) ((MR_hl_field(0, ParseTree_9, (MR_Integer) 2))));
  MR_Word ModuleComponents_17;
  MR_Word SubModuleSectionAncestors_18;
  MR_Word SubInclInfoMap0_19;
  MR_Word ItemBlockCord0_20;
  MR_Word STATE_VARIABLE_SubModulesMap_74_74;
  MR_Word STATE_VARIABLE_SplitModuleMap_75_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_Specs_79_79;

  ModuleComponents_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_16);
  parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(ModuleAncestors_10, ModuleName_14, STATE_VARIABLE_SubModulesMap_0_70, &STATE_VARIABLE_SubModulesMap_74_74);
  {
    SubModuleSectionAncestors_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubModuleSectionAncestors_18, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(0, SubModuleSectionAncestors_18, 1) = ((MR_Box) (ModuleAncestors_10));
  }
  Var_77 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0));
  Var_78 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0));
  parse_tree__split_parse_tree_src__split_components_discover_submodules_13_p_0(ModuleName_14, ModuleComponents_17, SubModuleSectionAncestors_18, STATE_VARIABLE_SplitModuleMap_0_68, &STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SubModulesMap_74_74, STATE_VARIABLE_SubModulesMap_71, Var_77, &SubInclInfoMap0_19, Var_78, &ItemBlockCord0_20, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_79_79);
  if ((ModuleAncestors_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OldEntry_21;
    MR_Box conv0_OldEntry_21;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_75_75, ((MR_Box) (ModuleName_14)), &conv0_OldEntry_21);
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
      MR_Word Var_141;
      MR_Word Var_142;

      if (((MR_tag((MR_Word) OldEntry_21)) == (MR_Integer) 0))
      {
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;

        OldContext_22 = (MR_Word) ((MR_Word) (OldEntry_21));
        {
          Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_87, 1) = ((MR_Box) (ModuleName_14));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_85 = parse_tree__error_spec__color_as_subject_1_f_0(Var_86);
        Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[13])));
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_89);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[7])), Var_84);
        OldPieces_24 = (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[19]));
      }
      else
      {
        MR_Word SplitNested_25 = ((MR_Word) ((MR_hl_field(1, OldEntry_21, (MR_Integer) 0))));
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_124;
        MR_Word Var_125;

        OldContext_22 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(SplitNested_25);
        {
          Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_122, 1) = ((MR_Box) (ModuleName_14));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_120 = parse_tree__error_spec__color_as_subject_1_f_0(Var_121);
        Var_125 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[21])));
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
        Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_120, Var_124);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[7])), Var_119);
        OldPieces_24 = (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[23]));
      }
      {
        Msg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Msg_28, 0) = ((MR_Box) (Context_15));
        MR_hl_field(0, Msg_28, 1) = ((MR_Box) (Pieces_23));
      }
      {
        OldMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OldMsg_29, 0) = ((MR_Box) (OldContext_22));
        MR_hl_field(0, OldMsg_29, 1) = ((MR_Box) (OldPieces_24));
      }
      {
        Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_142, 0) = ((MR_Box) (OldMsg_29));
        MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_141, 0) = ((MR_Box) (Msg_28));
        MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
      }
      {
        Spec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_parse_tree_discover_submodules\'/8"));
        MR_hl_field(2, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(2, Spec_30, 3) = ((MR_Box) (Var_141));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_73 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_79_79));
      }
      *STATE_VARIABLE_SplitModuleMap_69 = STATE_VARIABLE_SplitModuleMap_75_75;
    }
    else
    {
      MR_Word Entry_31;
      MR_Word Var_145 = (MR_Word) ((MR_Word) (Context_15));

      {
        Entry_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Entry_31, 0) = ((MR_Box) (Var_145));
        MR_hl_field(1, Entry_31, 1) = ((MR_Box) (ItemBlockCord0_20));
        MR_hl_field(1, Entry_31, 2) = ((MR_Box) (SubInclInfoMap0_19));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_31)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
      *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_79_79;
    }
  }
  else
  {
    MR_Word SectionAncestors_34 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_10, (MR_Integer) 2))));
    MR_Word ParentModuleName_35 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_34, (MR_Integer) 0))));
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
              MR_Word STATE_VARIABLE_Specs_149_149;
              MR_Word OldEntry_186;
              MR_Box conv1_OldEntry_186;

              parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(ModuleName_14, Context_15, ParentModuleName_35, STATE_VARIABLE_Specs_79_79, &STATE_VARIABLE_Specs_149_149);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_75_75, ((MR_Box) (ModuleName_14)), &conv1_OldEntry_186);
              if (succeeded)
              {
                OldEntry_186 = ((MR_Word) (conv1_OldEntry_186));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 0, ParentModuleName_35, OldEntry_186, STATE_VARIABLE_Specs_149_149, STATE_VARIABLE_Specs_73);
                *STATE_VARIABLE_SplitModuleMap_69 = STATE_VARIABLE_SplitModuleMap_75_75;
              }
              else
              {
                MR_Word SplitNested_184 = (MR_Word) (MR_mkword(1, (MR_Word) (Context_15)));
                MR_Word Entry_185;

                {
                  Entry_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Entry_185, 0) = ((MR_Box) (SplitNested_184));
                  MR_hl_field(1, Entry_185, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(1, Entry_185, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_185)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_149_149;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldEntry_232;
              MR_Box conv2_OldEntry_232;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_75_75, ((MR_Box) (ModuleName_14)), &conv2_OldEntry_232);
              if (succeeded)
              {
                OldEntry_232 = ((MR_Word) (conv2_OldEntry_232));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                if (((MR_tag((MR_Word) OldEntry_232)) == (MR_Integer) 0))
                {
                  MR_Word NewSplitNested_220;
                  MR_Word NewEntry_221;

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_35, OldEntry_232, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                  {
                    NewSplitNested_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, NewSplitNested_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, NewSplitNested_220, 1) = ((MR_Box) (Context_15));
                  }
                  {
                    NewEntry_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewEntry_221, 0) = ((MR_Box) (NewSplitNested_220));
                    MR_hl_field(1, NewEntry_221, 1) = ((MR_Box) (ItemBlockCord0_20));
                    MR_hl_field(1, NewEntry_221, 2) = ((MR_Box) (SubInclInfoMap0_19));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_221)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                }
                else
                {
                  MR_Word OldSplitNested_212 = ((MR_Word) ((MR_hl_field(1, OldEntry_232, (MR_Integer) 0))));
                  MR_Word OldItemBlockCord_213 = ((MR_Word) ((MR_hl_field(1, OldEntry_232, (MR_Integer) 1))));
                  MR_Word OldSubInclInfoMap_214 = ((MR_Word) ((MR_hl_field(1, OldEntry_232, (MR_Integer) 2))));

                  switch (MR_tag((MR_Word) OldSplitNested_212)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 3:
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 2, ParentModuleName_35, OldEntry_232, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                        *STATE_VARIABLE_SplitModuleMap_69 = STATE_VARIABLE_SplitModuleMap_75_75;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word NewSplitNested_204;
                        MR_Word NewEntry_205;
                        MR_Word EmptyContext_206 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_212), (MR_Integer) 1));

                        parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_35, Context_15, EmptyContext_206, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                        {
                          NewSplitNested_204 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, NewSplitNested_204, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, NewSplitNested_204, 1) = ((MR_Box) (Context_15));
                        }
                        {
                          NewEntry_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_205, 0) = ((MR_Box) (NewSplitNested_204));
                          MR_hl_field(1, NewEntry_205, 1) = ((MR_Box) (ItemBlockCord0_20));
                          MR_hl_field(1, NewEntry_205, 2) = ((MR_Box) (SubInclInfoMap0_19));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_205)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word IntContext_54 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_212), (MR_Integer) 2));
                        MR_Word NewSplitNested_200;
                        MR_Word NewItemBlockCord_201;
                        MR_Word NewSubInclInfoMap_202;
                        MR_Word NewEntry_203;

                        {
                          NewSplitNested_200 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, NewSplitNested_200, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, NewSplitNested_200, 1) = ((MR_Box) (IntContext_54));
                          MR_hl_field(3, NewSplitNested_200, 2) = ((MR_Box) (Context_15));
                        }
                        NewItemBlockCord_201 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), OldItemBlockCord_213, ItemBlockCord0_20);
                        mercury__map__union_4_p_1((MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[3]), SubInclInfoMap0_19, OldSubInclInfoMap_214, &NewSubInclInfoMap_202);
                        {
                          NewEntry_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_203, 0) = ((MR_Box) (NewSplitNested_200));
                          MR_hl_field(1, NewEntry_203, 1) = ((MR_Box) (NewItemBlockCord_201));
                          MR_hl_field(1, NewEntry_203, 2) = ((MR_Box) (NewSubInclInfoMap_202));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_203)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                        *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_79_79;
                      }
                      break;
                  }
                }
              else
              {
                MR_Word NewSplitNested_230;
                MR_Word NewEntry_231;

                {
                  NewSplitNested_230 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, NewSplitNested_230, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, NewSplitNested_230, 1) = ((MR_Box) (Context_15));
                }
                {
                  NewEntry_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewEntry_231, 0) = ((MR_Box) (NewSplitNested_230));
                  MR_hl_field(1, NewEntry_231, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(1, NewEntry_231, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_231)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_79_79;
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
              MR_Word OldEntry_198;
              MR_Box conv4_OldEntry_198;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_75_75, ((MR_Box) (ModuleName_14)), &conv4_OldEntry_198);
              if (succeeded)
              {
                OldEntry_198 = ((MR_Word) (conv4_OldEntry_198));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                if (((MR_tag((MR_Word) OldEntry_198)) == (MR_Integer) 0))
                {
                  MR_Word NewSplitNested_194;
                  MR_Word NewEntry_195;

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_35, OldEntry_198, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                  NewSplitNested_194 = (MR_Word) (MR_mkword(2, (MR_Word) (Context_15)));
                  {
                    NewEntry_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewEntry_195, 0) = ((MR_Box) (NewSplitNested_194));
                    MR_hl_field(1, NewEntry_195, 1) = ((MR_Box) (ItemBlockCord0_20));
                    MR_hl_field(1, NewEntry_195, 2) = ((MR_Box) (SubInclInfoMap0_19));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_195)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                }
                else
                {
                  MR_Word OldSplitNested_40 = ((MR_Word) ((MR_hl_field(1, OldEntry_198, (MR_Integer) 0))));
                  MR_Word OldItemBlockCord_41 = ((MR_Word) ((MR_hl_field(1, OldEntry_198, (MR_Integer) 1))));
                  MR_Word OldSubInclInfoMap_42 = ((MR_Word) ((MR_hl_field(1, OldEntry_198, (MR_Integer) 2))));

                  switch (MR_tag((MR_Word) OldSplitNested_40)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_35, OldEntry_198, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                        *STATE_VARIABLE_SplitModuleMap_69 = STATE_VARIABLE_SplitModuleMap_75_75;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word EmptyContext_48 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_40), (MR_Integer) 1));
                        MR_Word NewSplitNested_192;
                        MR_Word NewEntry_193;

                        parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_35, Context_15, EmptyContext_48, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                        NewSplitNested_192 = (MR_Word) (MR_mkword(2, (MR_Word) (Context_15)));
                        {
                          NewEntry_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_193, 0) = ((MR_Box) (NewSplitNested_192));
                          MR_hl_field(1, NewEntry_193, 1) = ((MR_Box) (ItemBlockCord0_20));
                          MR_hl_field(1, NewEntry_193, 2) = ((MR_Box) (SubInclInfoMap0_19));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_193)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, OldSplitNested_40, (MR_Integer) 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ImpContext_43 = ((MR_Word) ((MR_hl_field(3, OldSplitNested_40, (MR_Integer) 1))));
                            MR_Word NewSplitNested_44;
                            MR_Word NewItemBlockCord_45;
                            MR_Word NewSubInclInfoMap_46;
                            MR_Word NewEntry_47;

                            {
                              NewSplitNested_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, NewSplitNested_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(3, NewSplitNested_44, 1) = ((MR_Box) (Context_15));
                              MR_hl_field(3, NewSplitNested_44, 2) = ((MR_Box) (ImpContext_43));
                            }
                            NewItemBlockCord_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ItemBlockCord0_20, OldItemBlockCord_41);
                            mercury__map__union_4_p_1((MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[4]), SubInclInfoMap0_19, OldSubInclInfoMap_42, &NewSubInclInfoMap_46);
                            {
                              NewEntry_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, NewEntry_47, 0) = ((MR_Box) (NewSplitNested_44));
                              MR_hl_field(1, NewEntry_47, 1) = ((MR_Box) (NewItemBlockCord_45));
                              MR_hl_field(1, NewEntry_47, 2) = ((MR_Box) (NewSubInclInfoMap_46));
                            }
                            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_47)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                            *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_79_79;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_35, OldEntry_198, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                            *STATE_VARIABLE_SplitModuleMap_69 = STATE_VARIABLE_SplitModuleMap_75_75;
                          }
                          break;
                      }
                      break;
                  }
                }
              else
              {
                MR_Word NewSplitNested_196 = (MR_Word) (MR_mkword(2, (MR_Word) (Context_15)));
                MR_Word NewEntry_197;

                {
                  NewEntry_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewEntry_197, 0) = ((MR_Box) (NewSplitNested_196));
                  MR_hl_field(1, NewEntry_197, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(1, NewEntry_197, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_197)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_79_79;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldEntry_268;
              MR_Box conv6_OldEntry_268;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_75_75, ((MR_Box) (ModuleName_14)), &conv6_OldEntry_268);
              if (succeeded)
              {
                OldEntry_268 = ((MR_Word) (conv6_OldEntry_268));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                if (((MR_tag((MR_Word) OldEntry_268)) == (MR_Integer) 0))
                {
                  MR_Word NewSplitNested_260;
                  MR_Word NewEntry_261;

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_35, OldEntry_268, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                  {
                    NewSplitNested_260 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, NewSplitNested_260, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, NewSplitNested_260, 1) = ((MR_Box) (Context_15));
                    MR_hl_field(3, NewSplitNested_260, 2) = ((MR_Box) (Context_15));
                  }
                  {
                    NewEntry_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewEntry_261, 0) = ((MR_Box) (NewSplitNested_260));
                    MR_hl_field(1, NewEntry_261, 1) = ((MR_Box) (ItemBlockCord0_20));
                    MR_hl_field(1, NewEntry_261, 2) = ((MR_Box) (SubInclInfoMap0_19));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_261)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                }
                else
                {
                  MR_Word OldSplitNested_256 = ((MR_Word) ((MR_hl_field(1, OldEntry_268, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) OldSplitNested_256)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 3, ParentModuleName_35, OldEntry_268, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                        *STATE_VARIABLE_SplitModuleMap_69 = STATE_VARIABLE_SplitModuleMap_75_75;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word NewSplitNested_250;
                        MR_Word NewEntry_251;
                        MR_Word EmptyContext_252 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_256), (MR_Integer) 1));

                        parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_35, Context_15, EmptyContext_252, STATE_VARIABLE_Specs_79_79, STATE_VARIABLE_Specs_73);
                        {
                          NewSplitNested_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, NewSplitNested_250, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, NewSplitNested_250, 1) = ((MR_Box) (Context_15));
                          MR_hl_field(3, NewSplitNested_250, 2) = ((MR_Box) (Context_15));
                        }
                        {
                          NewEntry_251 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_251, 0) = ((MR_Box) (NewSplitNested_250));
                          MR_hl_field(1, NewEntry_251, 1) = ((MR_Box) (ItemBlockCord0_20));
                          MR_hl_field(1, NewEntry_251, 2) = ((MR_Box) (SubInclInfoMap0_19));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_251)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                      }
                      break;
                  }
                }
              else
              {
                MR_Word NewSplitNested_266;
                MR_Word NewEntry_267;

                {
                  NewSplitNested_266 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, NewSplitNested_266, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, NewSplitNested_266, 1) = ((MR_Box) (Context_15));
                  MR_hl_field(3, NewSplitNested_266, 2) = ((MR_Box) (Context_15));
                }
                {
                  NewEntry_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewEntry_267, 0) = ((MR_Box) (NewSplitNested_266));
                  MR_hl_field(1, NewEntry_267, 1) = ((MR_Box) (ItemBlockCord0_20));
                  MR_hl_field(1, NewEntry_267, 2) = ((MR_Box) (SubInclInfoMap0_19));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_267)), STATE_VARIABLE_SplitModuleMap_75_75, STATE_VARIABLE_SplitModuleMap_69);
                *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_79_79;
              }
            }
            break;
        }
        break;
    }
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
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_53;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_81;
    MR_Word Var_82;

    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (ParentModuleName_11));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[42])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (ModuleName_8));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[45])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
    Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[81])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[77])), Var_58);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_53);
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_42);
    {
      Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_17, 0) = ((MR_Box) (Context_9));
      MR_hl_field(0, Msg_17, 1) = ((MR_Box) (Pieces_15));
    }
    {
      OldMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldMsg_18, 0) = ((MR_Box) (OldContext_14));
      MR_hl_field(0, OldMsg_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[59])));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (OldMsg_18));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Msg_17));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Spec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule\'/7"));
      MR_hl_field(2, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_81));
    }
  }
  else
  {
    MR_Word SplitNested_20 = ((MR_Word) ((MR_hl_field(1, OldEntry_12, (MR_Integer) 0))));

    switch (DupSection_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_84;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_109;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word OldContext_144;
          MR_Word Pieces_145;
          MR_Word Msg_147;
          MR_Word OldMsg_148;

          OldContext_144 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(SplitNested_20);
          {
            Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_88, 1) = ((MR_Box) (ParentModuleName_11));
          }
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[86])));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (ModuleName_8));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
          }
          Var_102 = parse_tree__error_spec__color_as_subject_1_f_0(Var_103);
          Var_115 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[90])));
          Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[92])));
          Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[88])), Var_114);
          Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, Var_109);
          Pieces_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_101);
          {
            Msg_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Msg_147, 0) = ((MR_Box) (Context_9));
            MR_hl_field(0, Msg_147, 1) = ((MR_Box) (Pieces_145));
          }
          {
            OldMsg_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OldMsg_148, 0) = ((MR_Box) (OldContext_144));
            MR_hl_field(0, OldMsg_148, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[94])));
          }
          {
            Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_135, 0) = ((MR_Box) (OldMsg_148));
            MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_134, 0) = ((MR_Box) (Msg_147));
            MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
          }
          {
            Spec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule\'/7"));
            MR_hl_field(2, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_134));
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
            parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(ModuleName_8, Context_9, ParentModuleName_11, &Spec_19);
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
            switch (((MR_Integer) ((MR_hl_field(3, SplitNested_20, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 1, ParentModuleName_11, SplitNested_20, &Spec_19);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_24 = ((MR_Word) ((MR_hl_field(3, SplitNested_20, (MR_Integer) 1))));
                  MR_Word ImpContext_25 = ((MR_Word) ((MR_hl_field(3, SplitNested_20, (MR_Integer) 2))));

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
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_27 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word ParentModuleName_7,
  MR_Word * Spec_8)
{
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;

  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (ParentModuleName_7));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[98])));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (ModuleName_5));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[124])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[126])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_vs_top\'/4"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_9));
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
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_48;
  MR_Word Var_49;

  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (ParentModuleName_9));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[98])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(Var_37);
  Var_49 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[103])));
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[110])), Var_48);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_40);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_35);
  succeeded = mercury__term_context____Unify____term_context_0_0(OldIntContext_10, OldImpContext_11);
  if (succeeded)
  {
    MR_Word OldPieces_14;
    MR_Word Msg_15;
    MR_Word OldMsg_16;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_76;
    MR_Word Var_77;

    Var_65 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[103])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
    OldPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[114])), Var_64);
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_15, 0) = ((MR_Box) (Context_8));
      MR_hl_field(0, Msg_15, 1) = ((MR_Box) (Pieces_13));
    }
    {
      OldMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldMsg_16, 0) = ((MR_Box) (OldIntContext_10));
      MR_hl_field(0, OldMsg_16, 1) = ((MR_Box) (OldPieces_14));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (OldMsg_16));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Spec_12 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_both_sections\'/6"));
      MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, base, 3) = ((MR_Box) (Var_76));
    }
  }
  else
  {
    MR_Word OldIntPieces_17;
    MR_Word OldImpPieces_18;
    MR_Word OldIntMsg_19;
    MR_Word OldImpMsg_20;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Msg_118;

    Var_87 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[120])));
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
    OldIntPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[118])), Var_86);
    Var_103 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[103])));
    Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
    OldImpPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[122])), Var_102);
    {
      Msg_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_118, 0) = ((MR_Box) (Context_8));
      MR_hl_field(0, Msg_118, 1) = ((MR_Box) (Pieces_13));
    }
    {
      OldIntMsg_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldIntMsg_19, 0) = ((MR_Box) (OldIntContext_10));
      MR_hl_field(0, OldIntMsg_19, 1) = ((MR_Box) (OldIntPieces_17));
    }
    {
      OldImpMsg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldImpMsg_20, 0) = ((MR_Box) (OldImpContext_11));
      MR_hl_field(0, OldImpMsg_20, 1) = ((MR_Box) (OldImpPieces_18));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (OldImpMsg_20));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_115, 0) = ((MR_Box) (OldIntMsg_19));
      MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (Msg_118));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Spec_12 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_both_sections\'/6"));
      MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, base, 3) = ((MR_Box) (Var_114));
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
        MR_Word Pieces_32;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_45;

        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (ParentModuleName_10));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[98])));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (ModuleName_7));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_40 = parse_tree__error_spec__color_as_subject_1_f_0(Var_41);
        Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[124])));
        Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[126])));
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_44);
        Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Spec_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_vs_top\'/4"));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, base, 3) = ((MR_Box) (Context_8));
          MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_32));
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
      switch (((MR_Integer) ((MR_hl_field(3, SplitNested_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ImpContext_17 = ((MR_Word) ((MR_hl_field(3, SplitNested_11, (MR_Integer) 1))));
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
            MR_Word IntContext_28 = ((MR_Word) ((MR_hl_field(3, SplitNested_11, (MR_Integer) 1))));
            MR_String SectionWord_29;
            MR_Word OldContext_30;
            MR_Word ImpContext_31 = ((MR_Word) ((MR_hl_field(3, SplitNested_11, (MR_Integer) 2))));

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
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(ModuleName_7, Context_8, SectionWord_29, ParentModuleName_10, OldContext_30, Spec_12);
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
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_79;
  MR_Word Var_80;

  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (ParentModuleName_10));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[98])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
  {
    Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_41, 0) = ((MR_Box) (SectionWord_9));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[101])));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[99])));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
  }
  Var_47 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[103])));
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_46);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_36);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_31);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[108])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[104])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  Var_68 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[103])));
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
  OldPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_67);
  {
    Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg_15, 0) = ((MR_Box) (Context_8));
    MR_hl_field(0, Msg_15, 1) = ((MR_Box) (Pieces_13));
  }
  {
    OldMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OldMsg_16, 0) = ((MR_Box) (OldContext_11));
    MR_hl_field(0, OldMsg_16, 1) = ((MR_Box) (OldPieces_14));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (OldMsg_16));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Msg_15));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Spec_12 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section_2\'/6"));
    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, base, 3) = ((MR_Box) (Var_79));
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
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_61;
  MR_Word Var_62;

  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (ParentModuleName_8));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[34])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[33])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[71])));
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[73])));
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_41);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_31);
  Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[67])), Var_23);
  {
    Msg1_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg1_13, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, Msg1_13, 1) = ((MR_Box) (Pieces1_12));
  }
  {
    Msg2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg2_15, 0) = ((MR_Box) (EmptyContext_10));
    MR_hl_field(0, Msg2_15, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[75])));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Msg2_15));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Msg1_13));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.warn_duplicate_of_empty_submodule\'/6"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_61));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
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
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_Word Var_40;

  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (ModuleName_6));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Var_19 = parse_tree__error_spec__color_as_subject_1_f_0(Var_20);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ParentModuleName_8));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[63])));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[34])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[33])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[69])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_39);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_26);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[67])), Var_18);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.warn_empty_submodule\'/5"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
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
      switch (((MR_Integer) ((MR_hl_field(3, SplitNested_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Context_4 = ((MR_Word) ((MR_hl_field(3, SplitNested_3, (MR_Integer) 1))));
          break;
        case (MR_Integer) 1:
          Context_4 = ((MR_Word) ((MR_hl_field(3, SplitNested_3, (MR_Integer) 1))));
          break;
      }
      break;
  }
  return Context_4;
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
    MR_Word SectionAncestors_10 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_5, (MR_Integer) 2))));
    MR_Word ParentModuleName_13 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_10, (MR_Integer) 0))));
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

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word SectionAncestors_3,
  MR_Word * MaybeInterfaceAncestor_4)
{
  while (MR_TRUE)
  {
    MR_Word ModuleAncestors_6 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_3, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ModuleAncestors_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeInterfaceAncestor_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SectionKind_7 = ((MR_Unsigned) ((MR_hl_field(1, ModuleAncestors_6, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SectionParentAncestors_9 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_6, (MR_Integer) 2))));

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
            MR_Word InterfaceAncestor_10 = ((MR_Word) ((MR_hl_field(0, SectionParentAncestors_9, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInterfaceAncestor_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (InterfaceAncestor_10));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(
  MR_Word EntryA_4,
  MR_Word EntryB_5,
  MR_Word * Entry_6)
{
  MR_Word SectionA_7 = ((MR_Unsigned) ((MR_hl_field(0, EntryA_4, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ContextA_8 = ((MR_Word) ((MR_hl_field(0, EntryA_4, (MR_Integer) 1))));
  MR_Word SectionB_9 = ((MR_Unsigned) ((MR_hl_field(0, EntryB_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ContextB_10 = ((MR_Word) ((MR_hl_field(0, EntryB_5, (MR_Integer) 1))));

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
      MR_Word Include_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Includes_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InclModuleName_31 = ((MR_Word) ((MR_hl_field(0, Include_24, (MR_Integer) 0))));
      MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, Include_24, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_122_122;
      MR_Word STATE_VARIABLE_SplitModuleMap_123_123;
      MR_Word STATE_VARIABLE_SubModulesMap_124_124;
      MR_Word STATE_VARIABLE_OKIncludesCord_125_125;
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
        MR_Word ParentModuleName_35 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_2, (MR_Integer) 0))));
        MR_Word Pieces1_37;
        MR_Word OldContext_41;
        MR_Word Pieces2_42;
        MR_Word Msg_44;
        MR_Word OldMsg_45;
        MR_Word Spec_46;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_115;
        MR_Word Var_119;
        MR_Word Var_120;

        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (ParentModuleName_35));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[42])));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (InclModuleName_31));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[45])));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
        }
        Var_71 = parse_tree__error_spec__color_as_subject_1_f_0(Var_72);
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[47])));
        Pieces1_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_70);
        if (((MR_tag((MR_Word) OldEntry_34)) == (MR_Integer) 0))
        {
          MR_Word Var_96;

          OldContext_41 = (MR_Word) ((MR_Word) (OldEntry_34));
          Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[51])));
          Pieces2_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
        }
        else
        {
          MR_Word OldSplitNested_38 = ((MR_Word) ((MR_hl_field(1, OldEntry_34, (MR_Integer) 0))));
          MR_Word Var_85;

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
              switch (((MR_Integer) ((MR_hl_field(3, OldSplitNested_38, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  OldContext_41 = ((MR_Word) ((MR_hl_field(3, OldSplitNested_38, (MR_Integer) 1))));
                  break;
                case (MR_Integer) 1:
                  OldContext_41 = ((MR_Word) ((MR_hl_field(3, OldSplitNested_38, (MR_Integer) 1))));
                  break;
              }
              break;
          }
          Var_85 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[55])));
          Pieces2_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
        }
        Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_37, Pieces2_42);
        {
          Msg_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Msg_44, 0) = ((MR_Box) (Context_32));
          MR_hl_field(0, Msg_44, 1) = ((MR_Box) (Var_115));
        }
        {
          OldMsg_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OldMsg_45, 0) = ((MR_Box) (OldContext_41));
          MR_hl_field(0, OldMsg_45, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[59])));
        }
        {
          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_120, 0) = ((MR_Box) (OldMsg_45));
          MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (Msg_44));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
        }
        {
          Spec_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_46, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.discover_included_submodules\'/10"));
          MR_hl_field(2, Spec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_46, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(2, Spec_46, 3) = ((MR_Box) (Var_119));
        }
        {
          STATE_VARIABLE_Specs_122_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_122_122, 0) = ((MR_Box) (Spec_46));
          MR_hl_field(1, STATE_VARIABLE_Specs_122_122, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
        }
        STATE_VARIABLE_SubModulesMap_124_124 = STATE_VARIABLE_SubModulesMap_0_7;
        STATE_VARIABLE_SplitModuleMap_123_123 = STATE_VARIABLE_SplitModuleMap_0_5;
        STATE_VARIABLE_OKIncludesCord_125_125 = STATE_VARIABLE_OKIncludesCord_0_3;
      }
      else
      {
        MR_Word Entry_47 = (MR_Word) ((MR_Word) (Context_32));

        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (InclModuleName_31)), ((MR_Box) (Entry_47)), STATE_VARIABLE_SplitModuleMap_0_5, &STATE_VARIABLE_SplitModuleMap_123_123);
        parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(SectionAncestors_2, InclModuleName_31, STATE_VARIABLE_SubModulesMap_0_7, &STATE_VARIABLE_SubModulesMap_124_124);
        STATE_VARIABLE_OKIncludesCord_125_125 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_OKIncludesCord_0_3, ((MR_Box) (Include_24)));
        STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_0_9;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Includes_25;
      next_value_of_STATE_VARIABLE_OKIncludesCord_0_3 = STATE_VARIABLE_OKIncludesCord_125_125;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_5 = STATE_VARIABLE_SplitModuleMap_123_123;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_7 = STATE_VARIABLE_SubModulesMap_124_124;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_122_122;
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
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
  MR_Word SectionAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_12,
  MR_Word * STATE_VARIABLE_SubModulesMap_13)
{
  MR_bool succeeded;
  MR_Word ParentModuleName_8 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_5, (MR_Integer) 0))));
  MR_Word SiblingModules0_10;
  MR_Box conv0_SiblingModules0_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), STATE_VARIABLE_SubModulesMap_0_12, ((MR_Box) (ParentModuleName_8)), &conv0_SiblingModules0_10);
  if (succeeded)
  {
    SiblingModules0_10 = ((MR_Word) (conv0_SiblingModules0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SiblingModules_11;

    SiblingModules_11 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SiblingModules0_10, ((MR_Box) (ModuleName_6)));
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_8)), ((MR_Box) (SiblingModules_11)), STATE_VARIABLE_SubModulesMap_0_12, STATE_VARIABLE_SubModulesMap_13);
  }
  else
  {
    MR_Word SiblingModules_16;

    SiblingModules_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_6)));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_8)), ((MR_Box) (SiblingModules_16)), STATE_VARIABLE_SubModulesMap_0_12, STATE_VARIABLE_SubModulesMap_13);
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
      MR_Word ItemBlock_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SectionKind_17 = ((MR_Unsigned) ((MR_hl_field(0, ItemBlock_12, (MR_Integer) 1))) & (MR_Integer) 1);
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
