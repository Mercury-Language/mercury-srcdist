/*
** Automatically generated from `split_parse_tree_src.m'
** by the Mercury compiler,
** version rotd-2026-09-03
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

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
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__562__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word ComponentModuleName_141);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__95__1_1_p_0(
  MR_Word LeftOverSubModulesMap_19);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__93__1_1_p_0(
  MR_Word LeftOverSplitModuleMap_18);

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
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0(
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_37,
  MR_Word * STATE_VARIABLE_SplitModuleMap_38,
  MR_Word STATE_VARIABLE_SubModulesMap_0_39,
  MR_Word * STATE_VARIABLE_SubModulesMap_40,
  MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_0_41,
  MR_Word * STATE_VARIABLE_ParseTreeModuleSrcCord_42,
  MR_Word STATE_VARIABLE_ErrSpecs_0_43,
  MR_Word * STATE_VARIABLE_ErrSpecs_44,
  MR_Word STATE_VARIABLE_WarnSpecs_0_45,
  MR_Word * STATE_VARIABLE_WarnSpecs_46);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_15_p_0(
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_12,
  MR_Word * STATE_VARIABLE_ErrSpecs_13,
  MR_Word STATE_VARIABLE_WarnSpecs_0_14,
  MR_Word * STATE_VARIABLE_WarnSpecs_15);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_15_p_0(
  MR_Word ModuleName_16,
  MR_Word Component_17,
  MR_Word SectionAncestors_18,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_60,
  MR_Word * STATE_VARIABLE_SplitModuleMap_61,
  MR_Word STATE_VARIABLE_SubModulesMap_0_62,
  MR_Word * STATE_VARIABLE_SubModulesMap_63,
  MR_Word STATE_VARIABLE_SubInclInfoMap_0_64,
  MR_Word * STATE_VARIABLE_SubInclInfoMap_65,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_66,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_67,
  MR_Word STATE_VARIABLE_ErrSpecs_0_68,
  MR_Word * STATE_VARIABLE_ErrSpecs_69,
  MR_Word STATE_VARIABLE_WarnSpecs_0_70,
  MR_Word * STATE_VARIABLE_WarnSpecs_71);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0(
  MR_Word ParseTree_11,
  MR_Word ModuleAncestors_12,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_71,
  MR_Word * STATE_VARIABLE_SplitModuleMap_72,
  MR_Word STATE_VARIABLE_SubModulesMap_0_73,
  MR_Word * STATE_VARIABLE_SubModulesMap_74,
  MR_Word STATE_VARIABLE_ErrSpecs_0_75,
  MR_Word * STATE_VARIABLE_ErrSpecs_76,
  MR_Word STATE_VARIABLE_WarnSpecs_0_77,
  MR_Word * STATE_VARIABLE_WarnSpecs_78);

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
parse_tree__split_parse_tree_src__discover_included_submodules_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SectionAncestors_2,
  MR_Word STATE_VARIABLE_OKIncludesCord_0_3,
  MR_Word * STATE_VARIABLE_OKIncludesCord_4,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_5,
  MR_Word * STATE_VARIABLE_SplitModuleMap_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_7,
  MR_Word * STATE_VARIABLE_SubModulesMap_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_9,
  MR_Word * STATE_VARIABLE_ErrSpecs_10,
  MR_Word STATE_VARIABLE_WarnSpecs_0_11,
  MR_Word * STATE_VARIABLE_WarnSpecs_12);

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word SplitNested_3);

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


static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[128][2];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_6[1][8];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_7[1][11];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_8[1][15];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_9[2][4];




static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[128][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the top level module"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for itself."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should not have an"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the location of the"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should not have its name reused."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the location of the reuse."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "implementation section"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs in the"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "interface section"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "submodule"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be a nested submodule."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was previously declared"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: submodule"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "missing its interface section."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "empty."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicates"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an empty submodule."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the location of the empty submodule,"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a separate submodule."))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the empty nested"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declared"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "also declared"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has both its interface and its implementation"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[102])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "were also declared"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was also declared"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[116]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here,"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[117])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has the same name"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[124]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as its ancestor module."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])))
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
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_6[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[1])),
    ((MR_Box) (parse_tree__split_parse_tree_src__acc_included_module_names_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 163U) },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][6] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_6[1][8] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_7[1][11] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_8[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_9[2][4] = {
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0),
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_section_0),
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
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__562__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word ComponentModuleName_141)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, ComponentModuleName_141);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__95__1_1_p_0(
  MR_Word LeftOverSubModulesMap_19)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), LeftOverSubModulesMap_19);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__93__1_1_p_0(
  MR_Word LeftOverSplitModuleMap_18)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), LeftOverSplitModuleMap_18);
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

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
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_8;

    parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[6]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[6]);
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
      MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_10 == CastX_9);
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word ArgY3_8;
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
        ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX3_7;
            next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY3_8;
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
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
      MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_10 == CastX_9);
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word ArgY3_8;
      MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
        ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX3_7;
            next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY3_8;
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
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
  MR_Word SectionKind_15 = ((MR_Unsigned) ((MR_hl_field(0, SubInclInfo_12, 0))) & (MR_Integer) 1);
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, SubInclInfo_12, 1))));
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
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, RawItemBlock_6, 1))) & (MR_Integer) 1);
  MR_Word Incls_11 = ((MR_Word) ((MR_hl_field(0, RawItemBlock_6, 2))));
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
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__95__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_component_modules_perform_checks__93__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0(
  MR_Word Globals_8,
  MR_Word ParseTreeSrc_9,
  MR_Word * ParseTreeModuleSrcs_10,
  MR_Word STATE_VARIABLE_ErrSpecs_0_21,
  MR_Word * STATE_VARIABLE_ErrSpecs_22,
  MR_Word STATE_VARIABLE_WarnSpecs_0_23,
  MR_Word * STATE_VARIABLE_WarnSpecs_24)
{
  MR_bool succeeded;
  MR_Word SplitModuleMap_13;
  MR_Word SubModulesMap_14;
  MR_Word TopModuleName_15;
  MR_Word LeftOverSplitModuleMap_18;
  MR_Word LeftOverSubModulesMap_19;
  MR_Word ParseTreeModuleSrcCord_20;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_ErrSpecs_1_28;
  MR_Word STATE_VARIABLE_WarnSpecs_1_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_36;

  Var_26 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0));
  Var_27 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]));
  parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0(ParseTreeSrc_9, (MR_Word) ((MR_Unsigned) 0U), Var_26, &SplitModuleMap_13, Var_27, &SubModulesMap_14, STATE_VARIABLE_ErrSpecs_0_21, &STATE_VARIABLE_ErrSpecs_1_28, STATE_VARIABLE_WarnSpecs_0_23, &STATE_VARIABLE_WarnSpecs_1_29);
  TopModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_9, 0))));
  Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0));
  parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0(Globals_8, TopModuleName_15, SplitModuleMap_13, &LeftOverSplitModuleMap_18, SubModulesMap_14, &LeftOverSubModulesMap_19, Var_30, &ParseTreeModuleSrcCord_20, STATE_VARIABLE_ErrSpecs_1_28, STATE_VARIABLE_ErrSpecs_22, STATE_VARIABLE_WarnSpecs_1_29, STATE_VARIABLE_WarnSpecs_24);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_9[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (LeftOverSplitModuleMap_18));
  }
  mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_component_modules_perform_checks\'/7", (MR_String) "LeftOverSplitModuleMap is not empty");
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_9[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_7_p_0_2));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (LeftOverSubModulesMap_19));
  }
  mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_component_modules_perform_checks\'/7", (MR_String) "LeftOverSubModulesMap is not empty");
  *ParseTreeModuleSrcs_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), ParseTreeModuleSrcCord_20);
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_SplitModuleMap_38;
  MR_Word conv13_STATE_VARIABLE_SubModulesMap_40;
  MR_Word conv12_STATE_VARIABLE_ParseTreeModuleSrcCord_42;
  MR_Word conv11_STATE_VARIABLE_ErrSpecs_44;
  MR_Word conv10_STATE_VARIABLE_WarnSpecs_46;

  parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_SplitModuleMap_38, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_SubModulesMap_40, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_ParseTreeModuleSrcCord_42, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_ErrSpecs_44, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_WarnSpecs_46);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_SplitModuleMap_38));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_SubModulesMap_40));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_ParseTreeModuleSrcCord_42));
  *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_ErrSpecs_44));
  *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_WarnSpecs_46));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_2(
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

  parse_tree__split_parse_tree_src__submodule_include_info_map_to_item_includes_acc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_RevIntIncludes_19, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_RevImpIncludes_21);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_RevIntIncludes_19));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_RevImpIncludes_21));
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_1(
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
parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0(
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_37,
  MR_Word * STATE_VARIABLE_SplitModuleMap_38,
  MR_Word STATE_VARIABLE_SubModulesMap_0_39,
  MR_Word * STATE_VARIABLE_SubModulesMap_40,
  MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_0_41,
  MR_Word * STATE_VARIABLE_ParseTreeModuleSrcCord_42,
  MR_Word STATE_VARIABLE_ErrSpecs_0_43,
  MR_Word * STATE_VARIABLE_ErrSpecs_44,
  MR_Word STATE_VARIABLE_WarnSpecs_0_45,
  MR_Word * STATE_VARIABLE_WarnSpecs_46)
{
  MR_bool succeeded;
  MR_Word Entry_20;
  MR_Word STATE_VARIABLE_SplitModuleMap_1_47;
  MR_Box conv0_Entry_20;

  mercury__map__det_remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), &conv0_Entry_20, STATE_VARIABLE_SplitModuleMap_0_37, &STATE_VARIABLE_SplitModuleMap_1_47);
  Entry_20 = ((MR_Word) (conv0_Entry_20));
  if (((MR_tag((MR_Word) Entry_20)) == (MR_Integer) 0))
  {
    mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_14)), STATE_VARIABLE_SubModulesMap_0_39, STATE_VARIABLE_SubModulesMap_40);
    *STATE_VARIABLE_SplitModuleMap_38 = STATE_VARIABLE_SplitModuleMap_1_47;
    *STATE_VARIABLE_ParseTreeModuleSrcCord_42 = STATE_VARIABLE_ParseTreeModuleSrcCord_0_41;
    *STATE_VARIABLE_ErrSpecs_44 = STATE_VARIABLE_ErrSpecs_0_43;
    *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_0_45;
  }
  else
  {
    MR_Word NestedInfo_22 = ((MR_Word) ((MR_hl_field(1, Entry_20, 0))));
    MR_Word RawItemBlockCord0_23 = ((MR_Word) ((MR_hl_field(1, Entry_20, 1))));
    MR_Word SubInclInfoMap_24 = ((MR_Word) ((MR_hl_field(1, Entry_20, 2))));
    MR_Word RawItemBlockCord_25;
    MR_Word RawItemBlocks_26;
    MR_Word Context_27;
    MR_Word RawCompUnit_31;
    MR_Word ParseTreeModuleSrc_32;
    MR_Word ConvertErrSpecs_33;
    MR_Word ConvertWarnSpecs_34;
    MR_Word STATE_VARIABLE_ErrSpecs_1_75;
    MR_Word STATE_VARIABLE_ParseTreeModuleSrcCord_1_76;
    MR_Word STATE_VARIABLE_ErrSpecs_2_77;
    MR_Word STATE_VARIABLE_WarnSpecs_1_78;
    MR_Word IntMods_107;
    MR_Word ImpMods_108;
    MR_Word RevIntIncludes_109;
    MR_Word RevImpIncludes_110;
    MR_Word IntIncludes_111;
    MR_Word ImpIncludes_112;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word STATE_VARIABLE_RawItemBlockCord_1_124;
    MR_Box conv4_IntMods_107;
    MR_Box conv3_ImpMods_108;
    MR_Box conv8_RevIntIncludes_109;
    MR_Box conv7_RevImpIncludes_110;
    MR_Word SubModulesCord_35;
    MR_Word STATE_VARIABLE_SubModulesMap_2_79;
    MR_Box conv9_SubModulesCord_35;

    Var_116 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord0_23);
    Var_117 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_118 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[5]), Var_116, ((MR_Box) (Var_117)), &conv4_IntMods_107, ((MR_Box) (Var_118)), &conv3_ImpMods_108);
    IntMods_107 = ((MR_Word) (conv4_IntMods_107));
    ImpMods_108 = ((MR_Word) (conv3_ImpMods_108));
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_119, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_7[0]));
      MR_hl_field(0, Var_119, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_2));
      MR_hl_field(0, Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_119, 3) = ((MR_Box) (IntMods_107));
      MR_hl_field(0, Var_119, 4) = ((MR_Box) (ImpMods_108));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[5]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[5]), Var_119, SubInclInfoMap_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_RevIntIncludes_109, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_RevImpIncludes_110);
    RevIntIncludes_109 = ((MR_Word) (conv8_RevIntIncludes_109));
    RevImpIncludes_110 = ((MR_Word) (conv7_RevImpIncludes_110));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevIntIncludes_109, &IntIncludes_111);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), RevImpIncludes_110, &ImpIncludes_112);
    if ((IntIncludes_111 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_RawItemBlockCord_1_124 = RawItemBlockCord0_23;
    else
    {
      MR_Word IntItemBlock_113;

      {
        IntItemBlock_113 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, IntItemBlock_113, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(0, IntItemBlock_113, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, IntItemBlock_113, 2) = ((MR_Box) (IntIncludes_111));
        MR_hl_field(0, IntItemBlock_113, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, IntItemBlock_113, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, IntItemBlock_113, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ((MR_Box) (IntItemBlock_113)), RawItemBlockCord0_23, &STATE_VARIABLE_RawItemBlockCord_1_124);
    }
    if ((ImpIncludes_112 == (MR_Word) ((MR_Unsigned) 0U)))
      RawItemBlockCord_25 = STATE_VARIABLE_RawItemBlockCord_1_124;
    else
    {
      MR_Word ImpItemBlock_114;

      {
        ImpItemBlock_114 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ImpItemBlock_114, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(0, ImpItemBlock_114, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, ImpItemBlock_114, 2) = ((MR_Box) (ImpIncludes_112));
        MR_hl_field(0, ImpItemBlock_114, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ImpItemBlock_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ImpItemBlock_114, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ((MR_Box) (ImpItemBlock_114)), STATE_VARIABLE_RawItemBlockCord_1_124, &RawItemBlockCord_25);
    }
    RawItemBlocks_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), RawItemBlockCord_25);
    switch (MR_tag((MR_Word) NestedInfo_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Context_27 = (MR_Word) ((MR_Word) (NestedInfo_22));
          STATE_VARIABLE_ErrSpecs_1_75 = STATE_VARIABLE_ErrSpecs_0_43;
        }
        break;
      case (MR_Integer) 1:
        {
          Context_27 = (MR_Word) (MR_body((MR_Word) (NestedInfo_22), (MR_Integer) 1));
          STATE_VARIABLE_ErrSpecs_1_75 = STATE_VARIABLE_ErrSpecs_0_43;
        }
        break;
      case (MR_Integer) 2:
        {
          Context_27 = (MR_Word) (MR_body((MR_Word) (NestedInfo_22), (MR_Integer) 2));
          STATE_VARIABLE_ErrSpecs_1_75 = STATE_VARIABLE_ErrSpecs_0_43;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, NestedInfo_22, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_29;
              MR_Word Spec_30;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_58;
              MR_Word Var_63;
              MR_Word Var_64;

              Context_27 = ((MR_Word) ((MR_hl_field(3, NestedInfo_22, 1))));
              {
                Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Var_56, 1) = ((MR_Box) (ModuleName_14));
              }
              {
                Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
              Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[66])));
              Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
              Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[64])), Var_63);
              Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
              Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[62])), Var_53);
              {
                Spec_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.create_component_modules_depth_first\'/12"));
                MR_hl_field(0, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_30, 3) = ((MR_Box) (Context_27));
                MR_hl_field(0, Spec_30, 4) = ((MR_Box) (Pieces_29));
              }
              {
                STATE_VARIABLE_ErrSpecs_1_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_75, 0) = ((MR_Box) (Spec_30));
                MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_75, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_43));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              Context_27 = ((MR_Word) ((MR_hl_field(3, NestedInfo_22, 1))));
              STATE_VARIABLE_ErrSpecs_1_75 = STATE_VARIABLE_ErrSpecs_0_43;
            }
            break;
        }
        break;
    }
    {
      RawCompUnit_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RawCompUnit_31, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(0, RawCompUnit_31, 1) = ((MR_Box) (Context_27));
      MR_hl_field(0, RawCompUnit_31, 2) = ((MR_Box) (RawItemBlocks_26));
    }
    parse_tree__convert_parse_tree__check_convert_raw_comp_unit_to_module_src_5_p_0(Globals_13, RawCompUnit_31, &ParseTreeModuleSrc_32, &ConvertErrSpecs_33, &ConvertWarnSpecs_34);
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ParseTreeModuleSrc_32)), STATE_VARIABLE_ParseTreeModuleSrcCord_0_41, &STATE_VARIABLE_ParseTreeModuleSrcCord_1_76);
    STATE_VARIABLE_ErrSpecs_2_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ConvertErrSpecs_33, STATE_VARIABLE_ErrSpecs_1_75);
    STATE_VARIABLE_WarnSpecs_1_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), ConvertWarnSpecs_34, STATE_VARIABLE_WarnSpecs_0_45);
    succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_14)), &conv9_SubModulesCord_35, STATE_VARIABLE_SubModulesMap_0_39, &STATE_VARIABLE_SubModulesMap_2_79);
    if (succeeded)
    {
      SubModulesCord_35 = ((MR_Word) (conv9_SubModulesCord_35));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SubModules_36;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Box conv19_STATE_VARIABLE_SplitModuleMap_38;
      MR_Box conv18_STATE_VARIABLE_SubModulesMap_40;
      MR_Box conv17_STATE_VARIABLE_ParseTreeModuleSrcCord_42;
      MR_Box conv16_STATE_VARIABLE_ErrSpecs_44;
      MR_Box conv15_STATE_VARIABLE_WarnSpecs_46;

      Var_80 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SubModulesCord_35);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_80, &SubModules_36);
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_8[0]));
        MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__create_component_modules_depth_first_12_p_0_3));
        MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_81, 3) = ((MR_Box) (Globals_13));
      }
      mercury__list__foldl5_12_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[2]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[3]), Var_81, SubModules_36, ((MR_Box) (STATE_VARIABLE_SplitModuleMap_1_47)), &conv19_STATE_VARIABLE_SplitModuleMap_38, ((MR_Box) (STATE_VARIABLE_SubModulesMap_2_79)), &conv18_STATE_VARIABLE_SubModulesMap_40, ((MR_Box) (STATE_VARIABLE_ParseTreeModuleSrcCord_1_76)), &conv17_STATE_VARIABLE_ParseTreeModuleSrcCord_42, ((MR_Box) (STATE_VARIABLE_ErrSpecs_2_77)), &conv16_STATE_VARIABLE_ErrSpecs_44, ((MR_Box) (STATE_VARIABLE_WarnSpecs_1_78)), &conv15_STATE_VARIABLE_WarnSpecs_46);
      *STATE_VARIABLE_SplitModuleMap_38 = ((MR_Word) (conv19_STATE_VARIABLE_SplitModuleMap_38));
      *STATE_VARIABLE_SubModulesMap_40 = ((MR_Word) (conv18_STATE_VARIABLE_SubModulesMap_40));
      *STATE_VARIABLE_ParseTreeModuleSrcCord_42 = ((MR_Word) (conv17_STATE_VARIABLE_ParseTreeModuleSrcCord_42));
      *STATE_VARIABLE_ErrSpecs_44 = ((MR_Word) (conv16_STATE_VARIABLE_ErrSpecs_44));
      *STATE_VARIABLE_WarnSpecs_46 = ((MR_Word) (conv15_STATE_VARIABLE_WarnSpecs_46));
    }
    else
    {
      *STATE_VARIABLE_WarnSpecs_46 = STATE_VARIABLE_WarnSpecs_1_78;
      *STATE_VARIABLE_ErrSpecs_44 = STATE_VARIABLE_ErrSpecs_2_77;
      *STATE_VARIABLE_ParseTreeModuleSrcCord_42 = STATE_VARIABLE_ParseTreeModuleSrcCord_1_76;
      *STATE_VARIABLE_SubModulesMap_40 = STATE_VARIABLE_SubModulesMap_0_39;
      *STATE_VARIABLE_SplitModuleMap_38 = STATE_VARIABLE_SplitModuleMap_1_47;
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_15_p_0(
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
  MR_Word STATE_VARIABLE_ErrSpecs_0_12,
  MR_Word * STATE_VARIABLE_ErrSpecs_13,
  MR_Word STATE_VARIABLE_WarnSpecs_0_14,
  MR_Word * STATE_VARIABLE_WarnSpecs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_15 = STATE_VARIABLE_WarnSpecs_0_14;
      *STATE_VARIABLE_ErrSpecs_13 = STATE_VARIABLE_ErrSpecs_0_12;
      *STATE_VARIABLE_RawItemBlockCord_11 = STATE_VARIABLE_RawItemBlockCord_0_10;
      *STATE_VARIABLE_SubInclInfoMap_9 = STATE_VARIABLE_SubInclInfoMap_0_8;
      *STATE_VARIABLE_SubModulesMap_7 = STATE_VARIABLE_SubModulesMap_0_6;
      *STATE_VARIABLE_SplitModuleMap_5 = STATE_VARIABLE_SplitModuleMap_0_4;
    }
    else
    {
      MR_Word Component_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Components_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_SplitModuleMap_1_58;
      MR_Word STATE_VARIABLE_SubModulesMap_1_59;
      MR_Word STATE_VARIABLE_SubInclInfoMap_1_60;
      MR_Word STATE_VARIABLE_RawItemBlockCord_1_61;
      MR_Word STATE_VARIABLE_ErrSpecs_1_62;
      MR_Word STATE_VARIABLE_WarnSpecs_1_63;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_SplitModuleMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_SubModulesMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_SubInclInfoMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RawItemBlockCord_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_12;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_14;

      parse_tree__split_parse_tree_src__split_component_discover_submodules_15_p_0(ModuleName_1, Component_37, SectionAncestors_3, STATE_VARIABLE_SplitModuleMap_0_4, &STATE_VARIABLE_SplitModuleMap_1_58, STATE_VARIABLE_SubModulesMap_0_6, &STATE_VARIABLE_SubModulesMap_1_59, STATE_VARIABLE_SubInclInfoMap_0_8, &STATE_VARIABLE_SubInclInfoMap_1_60, STATE_VARIABLE_RawItemBlockCord_0_10, &STATE_VARIABLE_RawItemBlockCord_1_61, STATE_VARIABLE_ErrSpecs_0_12, &STATE_VARIABLE_ErrSpecs_1_62, STATE_VARIABLE_WarnSpecs_0_14, &STATE_VARIABLE_WarnSpecs_1_63);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Components_38;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_4 = STATE_VARIABLE_SplitModuleMap_1_58;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_6 = STATE_VARIABLE_SubModulesMap_1_59;
      next_value_of_STATE_VARIABLE_SubInclInfoMap_0_8 = STATE_VARIABLE_SubInclInfoMap_1_60;
      next_value_of_STATE_VARIABLE_RawItemBlockCord_0_10 = STATE_VARIABLE_RawItemBlockCord_1_61;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_12 = STATE_VARIABLE_ErrSpecs_1_62;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_14 = STATE_VARIABLE_WarnSpecs_1_63;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_SplitModuleMap_0_4 = next_value_of_STATE_VARIABLE_SplitModuleMap_0_4;
      STATE_VARIABLE_SubModulesMap_0_6 = next_value_of_STATE_VARIABLE_SubModulesMap_0_6;
      STATE_VARIABLE_SubInclInfoMap_0_8 = next_value_of_STATE_VARIABLE_SubInclInfoMap_0_8;
      STATE_VARIABLE_RawItemBlockCord_0_10 = next_value_of_STATE_VARIABLE_RawItemBlockCord_0_10;
      STATE_VARIABLE_ErrSpecs_0_12 = next_value_of_STATE_VARIABLE_ErrSpecs_0_12;
      STATE_VARIABLE_WarnSpecs_0_14 = next_value_of_STATE_VARIABLE_WarnSpecs_0_14;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_component_discover_submodules__562__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_15_p_0(
  MR_Word ModuleName_16,
  MR_Word Component_17,
  MR_Word SectionAncestors_18,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_60,
  MR_Word * STATE_VARIABLE_SplitModuleMap_61,
  MR_Word STATE_VARIABLE_SubModulesMap_0_62,
  MR_Word * STATE_VARIABLE_SubModulesMap_63,
  MR_Word STATE_VARIABLE_SubInclInfoMap_0_64,
  MR_Word * STATE_VARIABLE_SubInclInfoMap_65,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_66,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_67,
  MR_Word STATE_VARIABLE_ErrSpecs_0_68,
  MR_Word * STATE_VARIABLE_ErrSpecs_69,
  MR_Word STATE_VARIABLE_WarnSpecs_0_70,
  MR_Word * STATE_VARIABLE_WarnSpecs_71)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Component_17)) == (MR_Integer) 1))
  {
    MR_Word NestedModuleParseTree_51 = ((MR_Word) ((MR_hl_field(1, Component_17, 3))));
    MR_Word NestedModuleName_52 = ((MR_Word) ((MR_hl_field(0, NestedModuleParseTree_51, 0))));
    MR_Word NestedModuleContext_53 = ((MR_Word) ((MR_hl_field(0, NestedModuleParseTree_51, 1))));
    MR_Word NewEntry_56;
    MR_Word NestedModuleAncestors_59;
    MR_Word Var_130;
    MR_Word ComponentModuleName_141 = ((MR_Word) ((MR_hl_field(1, Component_17, 0))));
    MR_Word SectionKind_142 = ((MR_Unsigned) ((MR_hl_field(1, Component_17, 1))) & (MR_Integer) 1);
    MR_Word SectionContext_143 = ((MR_Word) ((MR_hl_field(1, Component_17, 2))));
    MR_Word Var_157;
    MR_Word OldEntry_57;
    MR_Box conv0_OldEntry_57;

    {
      Var_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_130, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0]));
      MR_hl_field(0, Var_130, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_component_discover_submodules_15_p_0_1));
      MR_hl_field(0, Var_130, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_130, 3) = ((MR_Box) (ModuleName_16));
      MR_hl_field(0, Var_130, 4) = ((MR_Box) (ComponentModuleName_141));
    }
    mercury__require__expect_3_p_0(Var_130, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/15", (MR_String) "ModuleName != ComponentModuleName");
    succeeded = ((MR_tag((MR_Word) NestedModuleName_52)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_157 = ((MR_Word) ((MR_hl_field(1, NestedModuleName_52, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ComponentModuleName_141, Var_157);
    }
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/15", (MR_String) "ComponentModuleName is not NestedModuleName\'s parent");
        return;
      }
    {
      NewEntry_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewEntry_56, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_142));
      MR_hl_field(0, NewEntry_56, 1) = ((MR_Box) (NestedModuleContext_53));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), STATE_VARIABLE_SubInclInfoMap_0_64, ((MR_Box) (NestedModuleName_52)), &conv0_OldEntry_57);
    if (succeeded)
    {
      OldEntry_57 = ((MR_Word) (conv0_OldEntry_57));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Entry_58;

      parse_tree__split_parse_tree_src__combine_submodule_include_infos_3_p_0(OldEntry_57, NewEntry_56, &Entry_58);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), ((MR_Box) (NestedModuleName_52)), ((MR_Box) (Entry_58)), STATE_VARIABLE_SubInclInfoMap_0_64, STATE_VARIABLE_SubInclInfoMap_65);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), ((MR_Box) (NestedModuleName_52)), ((MR_Box) (NewEntry_56)), STATE_VARIABLE_SubInclInfoMap_0_64, STATE_VARIABLE_SubInclInfoMap_65);
    {
      NestedModuleAncestors_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NestedModuleAncestors_59, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_142));
      MR_hl_field(1, NestedModuleAncestors_59, 1) = ((MR_Box) (SectionContext_143));
      MR_hl_field(1, NestedModuleAncestors_59, 2) = ((MR_Box) (SectionAncestors_18));
    }
    parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0(NestedModuleParseTree_51, NestedModuleAncestors_59, STATE_VARIABLE_SplitModuleMap_0_60, STATE_VARIABLE_SplitModuleMap_61, STATE_VARIABLE_SubModulesMap_0_62, STATE_VARIABLE_SubModulesMap_63, STATE_VARIABLE_ErrSpecs_0_68, STATE_VARIABLE_ErrSpecs_69, STATE_VARIABLE_WarnSpecs_0_70, STATE_VARIABLE_WarnSpecs_71);
    *STATE_VARIABLE_RawItemBlockCord_67 = STATE_VARIABLE_RawItemBlockCord_0_66;
  }
  else
  {
    MR_Word ComponentModuleName_25 = ((MR_Word) ((MR_hl_field(0, Component_17, 0))));
    MR_Word SectionKind_26 = ((MR_Unsigned) ((MR_hl_field(0, Component_17, 1))) & (MR_Integer) 1);
    MR_Word SectionContext_27 = ((MR_Word) ((MR_hl_field(0, Component_17, 2))));
    MR_Word IncludesCord_28 = ((MR_Word) ((MR_hl_field(0, Component_17, 3))));
    MR_Word AvailsCord_29 = ((MR_Word) ((MR_hl_field(0, Component_17, 4))));
    MR_Word FIMsCord_30 = ((MR_Word) ((MR_hl_field(0, Component_17, 5))));
    MR_Word ItemsCord_31 = ((MR_Word) ((MR_hl_field(0, Component_17, 6))));
    MR_Word Includes_32;
    MR_Word Avails_33;
    MR_Word Items_34;
    MR_Word FIMs_35;
    MR_Word OKIncludesCord_36;
    MR_Word OKIncludes_37;
    MR_Word RawItemBlock_38;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_ErrSpecs_1_75;

    Includes_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IncludesCord_28);
    Avails_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_29);
    Items_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_31);
    FIMs_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_30);
    Var_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    parse_tree__split_parse_tree_src__discover_included_submodules_12_p_0(Includes_32, SectionAncestors_18, Var_72, &OKIncludesCord_36, STATE_VARIABLE_SplitModuleMap_0_60, STATE_VARIABLE_SplitModuleMap_61, STATE_VARIABLE_SubModulesMap_0_62, STATE_VARIABLE_SubModulesMap_63, STATE_VARIABLE_ErrSpecs_0_68, &STATE_VARIABLE_ErrSpecs_1_75, STATE_VARIABLE_WarnSpecs_0_70, STATE_VARIABLE_WarnSpecs_71);
    OKIncludes_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OKIncludesCord_36);
    {
      RawItemBlock_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RawItemBlock_38, 0) = ((MR_Box) (ComponentModuleName_25));
      MR_hl_field(0, RawItemBlock_38, 1) = (MR_Box) ((MR_Unsigned) (SectionKind_26));
      MR_hl_field(0, RawItemBlock_38, 2) = ((MR_Box) (OKIncludes_37));
      MR_hl_field(0, RawItemBlock_38, 3) = ((MR_Box) (Avails_33));
      MR_hl_field(0, RawItemBlock_38, 4) = ((MR_Box) (FIMs_35));
      MR_hl_field(0, RawItemBlock_38, 5) = ((MR_Box) (Items_34));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ((MR_Box) (RawItemBlock_38)), STATE_VARIABLE_RawItemBlockCord_0_66, STATE_VARIABLE_RawItemBlockCord_67);
    switch (SectionKind_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word MaybeInterfaceAncestor_39;

          parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(SectionAncestors_18, &MaybeInterfaceAncestor_39);
          if ((MaybeInterfaceAncestor_39 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ErrSpecs_69 = STATE_VARIABLE_ErrSpecs_1_75;
          else
          {
            MR_Word InterfaceAncestor_40 = ((MR_Word) ((MR_hl_field(1, MaybeInterfaceAncestor_39, 0))));
            MR_Word CurModuleName_41 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_18, 0))));
            MR_Word ModuleAncestors_42 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_18, 1))));
            MR_String PorA_48;
            MR_Word Pieces_49;
            MR_Word Spec_50;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_97;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_117;
            MR_Word Var_118;

            if ((ModuleAncestors_42 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/15", (MR_String) "in interface section of nonexistent ancestor");
                return;
              }
            else
            {
              MR_Word ModuleSectionAncestor_45 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_42, 2))));
              MR_Word ModuleParent_46 = ((MR_Word) ((MR_hl_field(0, ModuleSectionAncestor_45, 0))));

              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleParent_46, InterfaceAncestor_40);
              if (succeeded)
                PorA_48 = (MR_String) "parent";
              else
                PorA_48 = (MR_String) "ancestor";
            }
            Var_85 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[28])));
            {
              Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_95, 1) = ((MR_Box) (CurModuleName_41));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[29])));
              MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
            }
            Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[33])));
            {
              Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_113, 1) = ((MR_Box) (PorA_48));
            }
            {
              Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_118, 1) = ((MR_Box) (InterfaceAncestor_40));
            }
            {
              Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
              MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[37])));
            }
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[35])));
              MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
            }
            {
              Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
              MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_114));
            }
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[34])));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
            }
            Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, Var_108);
            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[31])), Var_102);
            Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_97);
            Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_90);
            Pieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[26])), Var_84);
            {
              Spec_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/15"));
              MR_hl_field(0, Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_50, 3) = ((MR_Box) (SectionContext_27));
              MR_hl_field(0, Spec_50, 4) = ((MR_Box) (Pieces_49));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_ErrSpecs_69 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_50));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_1_75));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ErrSpecs_69 = STATE_VARIABLE_ErrSpecs_1_75;
        break;
    }
    *STATE_VARIABLE_SubInclInfoMap_65 = STATE_VARIABLE_SubInclInfoMap_0_64;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0_2(
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
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0_1(
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
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_10_p_0(
  MR_Word ParseTree_11,
  MR_Word ModuleAncestors_12,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_71,
  MR_Word * STATE_VARIABLE_SplitModuleMap_72,
  MR_Word STATE_VARIABLE_SubModulesMap_0_73,
  MR_Word * STATE_VARIABLE_SubModulesMap_74,
  MR_Word STATE_VARIABLE_ErrSpecs_0_75,
  MR_Word * STATE_VARIABLE_ErrSpecs_76,
  MR_Word STATE_VARIABLE_WarnSpecs_0_77,
  MR_Word * STATE_VARIABLE_WarnSpecs_78)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTree_11, 0))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, ParseTree_11, 1))));
  MR_Word ModuleComponentsCord_19 = ((MR_Word) ((MR_hl_field(0, ParseTree_11, 2))));
  MR_Word ModuleComponents_20;
  MR_Word SubModuleSectionAncestors_21;
  MR_Word SubInclInfoMap0_22;
  MR_Word ItemBlockCord0_23;
  MR_Word STATE_VARIABLE_SubModulesMap_1_79;
  MR_Word STATE_VARIABLE_SplitModuleMap_1_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_ErrSpecs_1_84;
  MR_Word STATE_VARIABLE_WarnSpecs_1_85;

  ModuleComponents_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_module_component_0), ModuleComponentsCord_19);
  parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(ModuleAncestors_12, ModuleName_17, STATE_VARIABLE_SubModulesMap_0_73, &STATE_VARIABLE_SubModulesMap_1_79);
  {
    SubModuleSectionAncestors_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubModuleSectionAncestors_21, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, SubModuleSectionAncestors_21, 1) = ((MR_Box) (ModuleAncestors_12));
  }
  Var_82 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0));
  Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0));
  parse_tree__split_parse_tree_src__split_components_discover_submodules_15_p_0(ModuleName_17, ModuleComponents_20, SubModuleSectionAncestors_21, STATE_VARIABLE_SplitModuleMap_0_71, &STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SubModulesMap_1_79, STATE_VARIABLE_SubModulesMap_74, Var_82, &SubInclInfoMap0_22, Var_83, &ItemBlockCord0_23, STATE_VARIABLE_ErrSpecs_0_75, &STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_WarnSpecs_0_77, &STATE_VARIABLE_WarnSpecs_1_85);
  if ((ModuleAncestors_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OldEntry_24;
    MR_Box conv0_OldEntry_24;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_1_80, ((MR_Box) (ModuleName_17)), &conv0_OldEntry_24);
    if (succeeded)
    {
      OldEntry_24 = ((MR_Word) (conv0_OldEntry_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldContext_25;
      MR_Word Pieces_26;
      MR_Word OldPieces_27;
      MR_Word Msg_31;
      MR_Word OldMsg_32;
      MR_Word Spec_33;
      MR_Word Var_147;
      MR_Word Var_148;

      if (((MR_tag((MR_Word) OldEntry_24)) == (MR_Integer) 0))
      {
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_95;
        MR_Word Var_96;

        OldContext_25 = (MR_Word) ((MR_Word) (OldEntry_24));
        {
          Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_93, 1) = ((MR_Box) (ModuleName_17));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_91 = parse_tree__error_spec__color_as_subject_1_f_0(Var_92);
        Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[14])));
        Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_95);
        Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[8])), Var_90);
        OldPieces_27 = (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[20]));
      }
      else
      {
        MR_Word SplitNested_28 = ((MR_Word) ((MR_hl_field(1, OldEntry_24, 0))));
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_130;
        MR_Word Var_131;

        OldContext_25 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(SplitNested_28);
        {
          Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_128, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_128, 1) = ((MR_Box) (ModuleName_17));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_126 = parse_tree__error_spec__color_as_subject_1_f_0(Var_127);
        Var_131 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[22])));
        Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
        Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, Var_130);
        Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[8])), Var_125);
        OldPieces_27 = (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[24]));
      }
      {
        Msg_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Msg_31, 0) = ((MR_Box) (Context_18));
        MR_hl_field(0, Msg_31, 1) = ((MR_Box) (Pieces_26));
      }
      {
        OldMsg_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OldMsg_32, 0) = ((MR_Box) (OldContext_25));
        MR_hl_field(0, OldMsg_32, 1) = ((MR_Box) (OldPieces_27));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (OldMsg_32));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_147, 0) = ((MR_Box) (Msg_31));
        MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_148));
      }
      {
        Spec_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_parse_tree_discover_submodules\'/10"));
        MR_hl_field(2, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(2, Spec_33, 3) = ((MR_Box) (Var_147));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrSpecs_76 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_1_84));
      }
      *STATE_VARIABLE_SplitModuleMap_72 = STATE_VARIABLE_SplitModuleMap_1_80;
    }
    else
    {
      MR_Word Entry_34;
      MR_Word Var_151 = (MR_Word) ((MR_Word) (Context_18));

      {
        Entry_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Entry_34, 0) = ((MR_Box) (Var_151));
        MR_hl_field(1, Entry_34, 1) = ((MR_Box) (ItemBlockCord0_23));
        MR_hl_field(1, Entry_34, 2) = ((MR_Box) (SubInclInfoMap0_22));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (Entry_34)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
      *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
    }
    *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
  }
  else
  {
    MR_Word SectionAncestors_37 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_12, 2))));
    MR_Word ParentModuleName_38 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_37, 0))));
    MR_Word ItemBlocks_40;
    MR_Word SeenInt_41;
    MR_Word SeenImp_42;

    ItemBlocks_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ItemBlockCord0_23);
    parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(ItemBlocks_40, (MR_Integer) 0, &SeenInt_41, (MR_Integer) 0, &SeenImp_42);
    switch (SeenInt_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (SeenImp_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OldEntry_192;
              MR_Box conv1_OldEntry_192;

              parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(ModuleName_17, Context_18, ParentModuleName_38, STATE_VARIABLE_WarnSpecs_1_85, STATE_VARIABLE_WarnSpecs_78);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_1_80, ((MR_Box) (ModuleName_17)), &conv1_OldEntry_192);
              if (succeeded)
              {
                OldEntry_192 = ((MR_Word) (conv1_OldEntry_192));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 0, ParentModuleName_38, OldEntry_192, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                *STATE_VARIABLE_SplitModuleMap_72 = STATE_VARIABLE_SplitModuleMap_1_80;
              }
              else
              {
                MR_Word SplitNested_190 = (MR_Word) (MR_mkword(1, (MR_Word) (Context_18)));
                MR_Word Entry_191;

                {
                  Entry_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Entry_191, 0) = ((MR_Box) (SplitNested_190));
                  MR_hl_field(1, Entry_191, 1) = ((MR_Box) (ItemBlockCord0_23));
                  MR_hl_field(1, Entry_191, 2) = ((MR_Box) (SubInclInfoMap0_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (Entry_191)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldEntry_238;
              MR_Box conv2_OldEntry_238;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_1_80, ((MR_Box) (ModuleName_17)), &conv2_OldEntry_238);
              if (succeeded)
              {
                OldEntry_238 = ((MR_Word) (conv2_OldEntry_238));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                if (((MR_tag((MR_Word) OldEntry_238)) == (MR_Integer) 0))
                {
                  MR_Word NewSplitNested_226;
                  MR_Word NewEntry_227;

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 1, ParentModuleName_38, OldEntry_238, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                  {
                    NewSplitNested_226 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, NewSplitNested_226, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, NewSplitNested_226, 1) = ((MR_Box) (Context_18));
                  }
                  {
                    NewEntry_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewEntry_227, 0) = ((MR_Box) (NewSplitNested_226));
                    MR_hl_field(1, NewEntry_227, 1) = ((MR_Box) (ItemBlockCord0_23));
                    MR_hl_field(1, NewEntry_227, 2) = ((MR_Box) (SubInclInfoMap0_22));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_227)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                  *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                }
                else
                {
                  MR_Word OldSplitNested_218 = ((MR_Word) ((MR_hl_field(1, OldEntry_238, 0))));
                  MR_Word OldItemBlockCord_219 = ((MR_Word) ((MR_hl_field(1, OldEntry_238, 1))));
                  MR_Word OldSubInclInfoMap_220 = ((MR_Word) ((MR_hl_field(1, OldEntry_238, 2))));

                  switch (MR_tag((MR_Word) OldSplitNested_218)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 3:
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 2, ParentModuleName_38, OldEntry_238, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                        *STATE_VARIABLE_SplitModuleMap_72 = STATE_VARIABLE_SplitModuleMap_1_80;
                        *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word NewSplitNested_210;
                        MR_Word NewEntry_211;
                        MR_Word EmptyContext_212 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_218), (MR_Integer) 1));

                        parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_17, ParentModuleName_38, Context_18, EmptyContext_212, STATE_VARIABLE_WarnSpecs_1_85, STATE_VARIABLE_WarnSpecs_78);
                        {
                          NewSplitNested_210 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, NewSplitNested_210, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, NewSplitNested_210, 1) = ((MR_Box) (Context_18));
                        }
                        {
                          NewEntry_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_211, 0) = ((MR_Box) (NewSplitNested_210));
                          MR_hl_field(1, NewEntry_211, 1) = ((MR_Box) (ItemBlockCord0_23));
                          MR_hl_field(1, NewEntry_211, 2) = ((MR_Box) (SubInclInfoMap0_22));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_211)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                        *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word IntContext_57 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_218), (MR_Integer) 2));
                        MR_Word NewSplitNested_206;
                        MR_Word NewItemBlockCord_207;
                        MR_Word NewSubInclInfoMap_208;
                        MR_Word NewEntry_209;

                        {
                          NewSplitNested_206 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, NewSplitNested_206, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, NewSplitNested_206, 1) = ((MR_Box) (IntContext_57));
                          MR_hl_field(3, NewSplitNested_206, 2) = ((MR_Box) (Context_18));
                        }
                        NewItemBlockCord_207 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), OldItemBlockCord_219, ItemBlockCord0_23);
                        mercury__map__union_4_p_1((MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[3]), SubInclInfoMap0_22, OldSubInclInfoMap_220, &NewSubInclInfoMap_208);
                        {
                          NewEntry_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_209, 0) = ((MR_Box) (NewSplitNested_206));
                          MR_hl_field(1, NewEntry_209, 1) = ((MR_Box) (NewItemBlockCord_207));
                          MR_hl_field(1, NewEntry_209, 2) = ((MR_Box) (NewSubInclInfoMap_208));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_209)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                        *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
                        *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                      }
                      break;
                  }
                }
              else
              {
                MR_Word NewSplitNested_236;
                MR_Word NewEntry_237;

                {
                  NewSplitNested_236 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, NewSplitNested_236, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, NewSplitNested_236, 1) = ((MR_Box) (Context_18));
                }
                {
                  NewEntry_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewEntry_237, 0) = ((MR_Box) (NewSplitNested_236));
                  MR_hl_field(1, NewEntry_237, 1) = ((MR_Box) (ItemBlockCord0_23));
                  MR_hl_field(1, NewEntry_237, 2) = ((MR_Box) (SubInclInfoMap0_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_237)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (SeenImp_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OldEntry_204;
              MR_Box conv4_OldEntry_204;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_1_80, ((MR_Box) (ModuleName_17)), &conv4_OldEntry_204);
              if (succeeded)
              {
                OldEntry_204 = ((MR_Word) (conv4_OldEntry_204));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                if (((MR_tag((MR_Word) OldEntry_204)) == (MR_Integer) 0))
                {
                  MR_Word NewSplitNested_200;
                  MR_Word NewEntry_201;

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 1, ParentModuleName_38, OldEntry_204, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                  NewSplitNested_200 = (MR_Word) (MR_mkword(2, (MR_Word) (Context_18)));
                  {
                    NewEntry_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewEntry_201, 0) = ((MR_Box) (NewSplitNested_200));
                    MR_hl_field(1, NewEntry_201, 1) = ((MR_Box) (ItemBlockCord0_23));
                    MR_hl_field(1, NewEntry_201, 2) = ((MR_Box) (SubInclInfoMap0_22));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_201)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                  *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                }
                else
                {
                  MR_Word OldSplitNested_43 = ((MR_Word) ((MR_hl_field(1, OldEntry_204, 0))));
                  MR_Word OldItemBlockCord_44 = ((MR_Word) ((MR_hl_field(1, OldEntry_204, 1))));
                  MR_Word OldSubInclInfoMap_45 = ((MR_Word) ((MR_hl_field(1, OldEntry_204, 2))));

                  switch (MR_tag((MR_Word) OldSplitNested_43)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 1, ParentModuleName_38, OldEntry_204, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                        *STATE_VARIABLE_SplitModuleMap_72 = STATE_VARIABLE_SplitModuleMap_1_80;
                        *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word EmptyContext_51 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_43), (MR_Integer) 1));
                        MR_Word NewSplitNested_198;
                        MR_Word NewEntry_199;

                        parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_17, ParentModuleName_38, Context_18, EmptyContext_51, STATE_VARIABLE_WarnSpecs_1_85, STATE_VARIABLE_WarnSpecs_78);
                        NewSplitNested_198 = (MR_Word) (MR_mkword(2, (MR_Word) (Context_18)));
                        {
                          NewEntry_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_199, 0) = ((MR_Box) (NewSplitNested_198));
                          MR_hl_field(1, NewEntry_199, 1) = ((MR_Box) (ItemBlockCord0_23));
                          MR_hl_field(1, NewEntry_199, 2) = ((MR_Box) (SubInclInfoMap0_22));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_199)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                        *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, OldSplitNested_43, 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ImpContext_46 = ((MR_Word) ((MR_hl_field(3, OldSplitNested_43, 1))));
                            MR_Word NewSplitNested_47;
                            MR_Word NewItemBlockCord_48;
                            MR_Word NewSubInclInfoMap_49;
                            MR_Word NewEntry_50;

                            {
                              NewSplitNested_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, NewSplitNested_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(3, NewSplitNested_47, 1) = ((MR_Box) (Context_18));
                              MR_hl_field(3, NewSplitNested_47, 2) = ((MR_Box) (ImpContext_46));
                            }
                            NewItemBlockCord_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__convert_parse_tree__parse_tree__convert_parse_tree__type_ctor_info_raw_item_block_0), ItemBlockCord0_23, OldItemBlockCord_44);
                            mercury__map__union_4_p_1((MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_submodule_include_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[4]), SubInclInfoMap0_22, OldSubInclInfoMap_45, &NewSubInclInfoMap_49);
                            {
                              NewEntry_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, NewEntry_50, 0) = ((MR_Box) (NewSplitNested_47));
                              MR_hl_field(1, NewEntry_50, 1) = ((MR_Box) (NewItemBlockCord_48));
                              MR_hl_field(1, NewEntry_50, 2) = ((MR_Box) (NewSubInclInfoMap_49));
                            }
                            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_50)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                            *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
                            *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 1, ParentModuleName_38, OldEntry_204, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                            *STATE_VARIABLE_SplitModuleMap_72 = STATE_VARIABLE_SplitModuleMap_1_80;
                            *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                          }
                          break;
                      }
                      break;
                  }
                }
              else
              {
                MR_Word NewSplitNested_202 = (MR_Word) (MR_mkword(2, (MR_Word) (Context_18)));
                MR_Word NewEntry_203;

                {
                  NewEntry_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewEntry_203, 0) = ((MR_Box) (NewSplitNested_202));
                  MR_hl_field(1, NewEntry_203, 1) = ((MR_Box) (ItemBlockCord0_23));
                  MR_hl_field(1, NewEntry_203, 2) = ((MR_Box) (SubInclInfoMap0_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_203)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word OldEntry_274;
              MR_Box conv6_OldEntry_274;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_1_80, ((MR_Box) (ModuleName_17)), &conv6_OldEntry_274);
              if (succeeded)
              {
                OldEntry_274 = ((MR_Word) (conv6_OldEntry_274));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                if (((MR_tag((MR_Word) OldEntry_274)) == (MR_Integer) 0))
                {
                  MR_Word NewSplitNested_266;
                  MR_Word NewEntry_267;

                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 1, ParentModuleName_38, OldEntry_274, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                  {
                    NewSplitNested_266 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, NewSplitNested_266, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, NewSplitNested_266, 1) = ((MR_Box) (Context_18));
                    MR_hl_field(3, NewSplitNested_266, 2) = ((MR_Box) (Context_18));
                  }
                  {
                    NewEntry_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewEntry_267, 0) = ((MR_Box) (NewSplitNested_266));
                    MR_hl_field(1, NewEntry_267, 1) = ((MR_Box) (ItemBlockCord0_23));
                    MR_hl_field(1, NewEntry_267, 2) = ((MR_Box) (SubInclInfoMap0_22));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_267)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                  *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                }
                else
                {
                  MR_Word OldSplitNested_262 = ((MR_Word) ((MR_hl_field(1, OldEntry_274, 0))));

                  switch (MR_tag((MR_Word) OldSplitNested_262)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_17, Context_18, (MR_Integer) 3, ParentModuleName_38, OldEntry_274, STATE_VARIABLE_ErrSpecs_1_84, STATE_VARIABLE_ErrSpecs_76);
                        *STATE_VARIABLE_SplitModuleMap_72 = STATE_VARIABLE_SplitModuleMap_1_80;
                        *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word NewSplitNested_256;
                        MR_Word NewEntry_257;
                        MR_Word EmptyContext_258 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_262), (MR_Integer) 1));

                        parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_17, ParentModuleName_38, Context_18, EmptyContext_258, STATE_VARIABLE_WarnSpecs_1_85, STATE_VARIABLE_WarnSpecs_78);
                        {
                          NewSplitNested_256 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, NewSplitNested_256, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, NewSplitNested_256, 1) = ((MR_Box) (Context_18));
                          MR_hl_field(3, NewSplitNested_256, 2) = ((MR_Box) (Context_18));
                        }
                        {
                          NewEntry_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, NewEntry_257, 0) = ((MR_Box) (NewSplitNested_256));
                          MR_hl_field(1, NewEntry_257, 1) = ((MR_Box) (ItemBlockCord0_23));
                          MR_hl_field(1, NewEntry_257, 2) = ((MR_Box) (SubInclInfoMap0_22));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_257)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                        *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
                      }
                      break;
                  }
                }
              else
              {
                MR_Word NewSplitNested_272;
                MR_Word NewEntry_273;

                {
                  NewSplitNested_272 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, NewSplitNested_272, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, NewSplitNested_272, 1) = ((MR_Box) (Context_18));
                  MR_hl_field(3, NewSplitNested_272, 2) = ((MR_Box) (Context_18));
                }
                {
                  NewEntry_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewEntry_273, 0) = ((MR_Box) (NewSplitNested_272));
                  MR_hl_field(1, NewEntry_273, 1) = ((MR_Box) (ItemBlockCord0_23));
                  MR_hl_field(1, NewEntry_273, 2) = ((MR_Box) (SubInclInfoMap0_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (NewEntry_273)), STATE_VARIABLE_SplitModuleMap_1_80, STATE_VARIABLE_SplitModuleMap_72);
                *STATE_VARIABLE_WarnSpecs_78 = STATE_VARIABLE_WarnSpecs_1_85;
                *STATE_VARIABLE_ErrSpecs_76 = STATE_VARIABLE_ErrSpecs_1_84;
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
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (ParentModuleName_11));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) (ModuleName_8));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[46])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[44])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
    Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[82])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[78])), Var_58);
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
      MR_hl_field(0, OldMsg_18, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[60])));
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
      MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_81));
    }
  }
  else
  {
    MR_Word SplitNested_20 = ((MR_Word) ((MR_hl_field(1, OldEntry_12, 0))));

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
            MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_88, 1) = ((MR_Box) (ParentModuleName_11));
          }
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[87])));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (ModuleName_8));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[44])));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
          }
          Var_102 = parse_tree__error_spec__color_as_subject_1_f_0(Var_103);
          Var_115 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[91])));
          Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[93])));
          Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[89])), Var_114);
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
            MR_hl_field(0, OldMsg_148, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[95])));
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
            MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
            switch (((MR_Integer) ((MR_hl_field(3, SplitNested_20, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 1, ParentModuleName_11, SplitNested_20, &Spec_19);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_24 = ((MR_Word) ((MR_hl_field(3, SplitNested_20, 1))));
                  MR_Word ImpContext_25 = ((MR_Word) ((MR_hl_field(3, SplitNested_20, 2))));

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
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (ParentModuleName_7));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[99])));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (ModuleName_5));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_25 = parse_tree__error_spec__color_as_subject_1_f_0(Var_26);
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[125])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[127])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_29);
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_vs_top\'/4"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (ParentModuleName_9));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[99])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(Var_37);
  Var_49 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[104])));
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[111])), Var_48);
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

    Var_65 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[104])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
    OldPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[115])), Var_64);
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
      MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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

    Var_87 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[121])));
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
    OldIntPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[119])), Var_86);
    Var_103 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[104])));
    Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
    OldImpPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[123])), Var_102);
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
      MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (ParentModuleName_10));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[99])));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (ModuleName_7));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_40 = parse_tree__error_spec__color_as_subject_1_f_0(Var_41);
        Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[125])));
        Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[127])));
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_44);
        Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Spec_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_vs_top\'/4"));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
      switch (((MR_Integer) ((MR_hl_field(3, SplitNested_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ImpContext_17 = ((MR_Word) ((MR_hl_field(3, SplitNested_11, 1))));
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
            MR_Word IntContext_28 = ((MR_Word) ((MR_hl_field(3, SplitNested_11, 1))));
            MR_String SectionWord_29;
            MR_Word OldContext_30;
            MR_Word ImpContext_31 = ((MR_Word) ((MR_hl_field(3, SplitNested_11, 2))));

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
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (ParentModuleName_10));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[99])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 11U));
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
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[102])));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[100])));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
  }
  Var_47 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[104])));
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_46);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_36);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_31);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[109])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[105])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  Var_68 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[104])));
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
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
    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
  MR_Word Var_62;
  MR_Word Var_63;

  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[44])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (ParentModuleName_8));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[35])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[34])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[72])));
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[74])));
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_41);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_31);
  Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[68])), Var_23);
  {
    Msg1_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg1_13, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, Msg1_13, 1) = ((MR_Box) (Pieces1_12));
  }
  {
    Msg2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg2_15, 0) = ((MR_Box) (EmptyContext_10));
    MR_hl_field(0, Msg2_15, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[76])));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Msg2_15));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Msg1_13));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.warn_duplicate_of_empty_submodule\'/6"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_3[0])));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_62));
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
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (ModuleName_6));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[44])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Var_19 = parse_tree__error_spec__color_as_subject_1_f_0(Var_20);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ParentModuleName_8));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[64])));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[35])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[34])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[70])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_39);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_26);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[68])), Var_18);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.warn_empty_submodule\'/5"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_3[0])));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
    MR_Word SectionAncestors_10 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_5, 2))));
    MR_Word ParentModuleName_13 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_10, 0))));
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

      mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_6)), SiblingModules0_15, &SiblingModules_16);
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
    MR_Word ModuleAncestors_6 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_3, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ModuleAncestors_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeInterfaceAncestor_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SectionKind_7 = ((MR_Unsigned) ((MR_hl_field(1, ModuleAncestors_6, 0))) & (MR_Integer) 1);
      MR_Word SectionParentAncestors_9 = ((MR_Word) ((MR_hl_field(1, ModuleAncestors_6, 2))));

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
            MR_Word InterfaceAncestor_10 = ((MR_Word) ((MR_hl_field(0, SectionParentAncestors_9, 0))));

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
  MR_Word SectionA_7 = ((MR_Unsigned) ((MR_hl_field(0, EntryA_4, 0))) & (MR_Integer) 1);
  MR_Word ContextA_8 = ((MR_Word) ((MR_hl_field(0, EntryA_4, 1))));
  MR_Word SectionB_9 = ((MR_Unsigned) ((MR_hl_field(0, EntryB_5, 0))) & (MR_Integer) 1);
  MR_Word ContextB_10 = ((MR_Word) ((MR_hl_field(0, EntryB_5, 1))));

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
parse_tree__split_parse_tree_src__discover_included_submodules_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SectionAncestors_2,
  MR_Word STATE_VARIABLE_OKIncludesCord_0_3,
  MR_Word * STATE_VARIABLE_OKIncludesCord_4,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_5,
  MR_Word * STATE_VARIABLE_SplitModuleMap_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_7,
  MR_Word * STATE_VARIABLE_SubModulesMap_8,
  MR_Word STATE_VARIABLE_ErrSpecs_0_9,
  MR_Word * STATE_VARIABLE_ErrSpecs_10,
  MR_Word STATE_VARIABLE_WarnSpecs_0_11,
  MR_Word * STATE_VARIABLE_WarnSpecs_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_12 = STATE_VARIABLE_WarnSpecs_0_11;
      *STATE_VARIABLE_ErrSpecs_10 = STATE_VARIABLE_ErrSpecs_0_9;
      *STATE_VARIABLE_SubModulesMap_8 = STATE_VARIABLE_SubModulesMap_0_7;
      *STATE_VARIABLE_SplitModuleMap_6 = STATE_VARIABLE_SplitModuleMap_0_5;
      *STATE_VARIABLE_OKIncludesCord_4 = STATE_VARIABLE_OKIncludesCord_0_3;
    }
    else
    {
      MR_Word Include_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Includes_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word InclModuleName_37 = ((MR_Word) ((MR_hl_field(0, Include_29, 0))));
      MR_Word Context_38 = ((MR_Word) ((MR_hl_field(0, Include_29, 1))));
      MR_Word STATE_VARIABLE_ErrSpecs_1_130;
      MR_Word STATE_VARIABLE_SplitModuleMap_1_131;
      MR_Word STATE_VARIABLE_SubModulesMap_1_132;
      MR_Word STATE_VARIABLE_OKIncludesCord_1_133;
      MR_Word OldEntry_40;
      MR_Box conv0_OldEntry_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_OKIncludesCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SplitModuleMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_SubModulesMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_0_5, ((MR_Box) (InclModuleName_37)), &conv0_OldEntry_40);
      if (succeeded)
      {
        OldEntry_40 = ((MR_Word) (conv0_OldEntry_40));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ParentModuleName_41 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_2, 0))));
        MR_Word Pieces1_43;
        MR_Word OldContext_47;
        MR_Word Pieces2_48;
        MR_Word Msg_50;
        MR_Word OldMsg_51;
        MR_Word Spec_52;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_123;
        MR_Word Var_127;
        MR_Word Var_128;

        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (ParentModuleName_41));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[43])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[38])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_84, 1) = ((MR_Box) (InclModuleName_37));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[46])));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__split_parse_tree_src_scalar_common_1[44])));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
        }
        Var_79 = parse_tree__error_spec__color_as_subject_1_f_0(Var_80);
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[48])));
        Pieces1_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_78);
        if (((MR_tag((MR_Word) OldEntry_40)) == (MR_Integer) 0))
        {
          MR_Word Var_104;

          OldContext_47 = (MR_Word) ((MR_Word) (OldEntry_40));
          Var_104 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[52])));
          Pieces2_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
        }
        else
        {
          MR_Word OldSplitNested_44 = ((MR_Word) ((MR_hl_field(1, OldEntry_40, 0))));
          MR_Word Var_93;

          OldContext_47 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(OldSplitNested_44);
          Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[56])));
          Pieces2_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[15])));
        }
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_43, Pieces2_48);
        {
          Msg_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Msg_50, 0) = ((MR_Box) (Context_38));
          MR_hl_field(0, Msg_50, 1) = ((MR_Box) (Var_123));
        }
        {
          OldMsg_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OldMsg_51, 0) = ((MR_Box) (OldContext_47));
          MR_hl_field(0, OldMsg_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__split_parse_tree_src_scalar_common_1[60])));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (OldMsg_51));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (Msg_50));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
        }
        {
          Spec_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.split_parse_tree_src.discover_included_submodules\'/12"));
          MR_hl_field(2, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(2, Spec_52, 3) = ((MR_Box) (Var_127));
        }
        {
          STATE_VARIABLE_ErrSpecs_1_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_130, 0) = ((MR_Box) (Spec_52));
          MR_hl_field(1, STATE_VARIABLE_ErrSpecs_1_130, 1) = ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_9));
        }
        STATE_VARIABLE_SubModulesMap_1_132 = STATE_VARIABLE_SubModulesMap_0_7;
        STATE_VARIABLE_SplitModuleMap_1_131 = STATE_VARIABLE_SplitModuleMap_0_5;
        STATE_VARIABLE_OKIncludesCord_1_133 = STATE_VARIABLE_OKIncludesCord_0_3;
      }
      else
      {
        MR_Word Entry_53 = (MR_Word) ((MR_Word) (Context_38));

        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (InclModuleName_37)), ((MR_Box) (Entry_53)), STATE_VARIABLE_SplitModuleMap_0_5, &STATE_VARIABLE_SplitModuleMap_1_131);
        parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(SectionAncestors_2, InclModuleName_37, STATE_VARIABLE_SubModulesMap_0_7, &STATE_VARIABLE_SubModulesMap_1_132);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), ((MR_Box) (Include_29)), STATE_VARIABLE_OKIncludesCord_0_3, &STATE_VARIABLE_OKIncludesCord_1_133);
        STATE_VARIABLE_ErrSpecs_1_130 = STATE_VARIABLE_ErrSpecs_0_9;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Includes_30;
      next_value_of_STATE_VARIABLE_OKIncludesCord_0_3 = STATE_VARIABLE_OKIncludesCord_1_133;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_5 = STATE_VARIABLE_SplitModuleMap_1_131;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_7 = STATE_VARIABLE_SubModulesMap_1_132;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_9 = STATE_VARIABLE_ErrSpecs_1_130;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_OKIncludesCord_0_3 = next_value_of_STATE_VARIABLE_OKIncludesCord_0_3;
      STATE_VARIABLE_SplitModuleMap_0_5 = next_value_of_STATE_VARIABLE_SplitModuleMap_0_5;
      STATE_VARIABLE_SubModulesMap_0_7 = next_value_of_STATE_VARIABLE_SubModulesMap_0_7;
      STATE_VARIABLE_ErrSpecs_0_9 = next_value_of_STATE_VARIABLE_ErrSpecs_0_9;
      continue;
    }
    break;
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
      switch (((MR_Integer) ((MR_hl_field(3, SplitNested_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Context_4 = ((MR_Word) ((MR_hl_field(3, SplitNested_3, 1))));
          break;
        case (MR_Integer) 1:
          Context_4 = ((MR_Word) ((MR_hl_field(3, SplitNested_3, 1))));
          break;
      }
      break;
  }
  return Context_4;
}

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
  MR_Word SectionAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_12,
  MR_Word * STATE_VARIABLE_SubModulesMap_13)
{
  MR_bool succeeded;
  MR_Word ParentModuleName_8 = ((MR_Word) ((MR_hl_field(0, SectionAncestors_5, 0))));
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

    mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_6)), SiblingModules0_10, &SiblingModules_11);
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
      MR_Word ItemBlock_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ItemBlocks_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SectionKind_17 = ((MR_Unsigned) ((MR_hl_field(0, ItemBlock_12, 1))) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_SeenInt_1_26;
      MR_Word STATE_VARIABLE_SeenImp_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SeenInt_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SeenImp_0_4;

      switch (SectionKind_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_SeenImp_1_27 = (MR_Integer) 1;
            STATE_VARIABLE_SeenInt_1_26 = STATE_VARIABLE_SeenInt_0_2;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_SeenInt_1_26 = (MR_Integer) 1;
            STATE_VARIABLE_SeenImp_1_27 = STATE_VARIABLE_SeenImp_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_13;
      next_value_of_STATE_VARIABLE_SeenInt_0_2 = STATE_VARIABLE_SeenInt_1_26;
      next_value_of_STATE_VARIABLE_SeenImp_0_4 = STATE_VARIABLE_SeenImp_1_27;
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
