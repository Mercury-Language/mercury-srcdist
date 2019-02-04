/*
** Automatically generated from `split_parse_tree_src.m'
** by the Mercury compiler,
** version rotd-2018-09-11
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_0;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2;

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3;

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_duplicated_section_0[4];

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

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_parent_module_context_0[3];

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

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[2];

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

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__216__1_2_p_0(
  MR_Word LeftOverSubModulesMap_14,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__214__1_2_p_0(
  MR_Word LeftOverSplitModuleMap_13,
  MR_Word HeadVar__2_27);

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
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_error_implementation_in_interface_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SectionAncestors_2,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_3,
  MR_Word * STATE_VARIABLE_SplitModuleMap_4,
  MR_Word STATE_VARIABLE_SubModulesMap_0_5,
  MR_Word * STATE_VARIABLE_SubModulesMap_6,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_7,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(
  MR_Word Component_11,
  MR_Word SectionAncestors_12,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_47,
  MR_Word * STATE_VARIABLE_SplitModuleMap_48,
  MR_Word STATE_VARIABLE_SubModulesMap_0_49,
  MR_Word * STATE_VARIABLE_SubModulesMap_50,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_51,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word ParseTree_9,
  MR_Word ModuleAncestors_10,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_48,
  MR_Word * STATE_VARIABLE_SplitModuleMap_49,
  MR_Word STATE_VARIABLE_SubModulesMap_0_50,
  MR_Word * STATE_VARIABLE_SubModulesMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

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
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word SectionAncestors_3,
  MR_Word * MaybeProblemAncestor_4);

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
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word ParentModuleName_9,
  MR_Word OldIntContext_10,
  MR_Word OldImpContext_11,
  MR_Word * Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word ParentModuleName_7,
  MR_Word * Spec_8);

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
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

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
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1(
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
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_29,
  MR_Word * STATE_VARIABLE_SplitModuleMap_30,
  MR_Word STATE_VARIABLE_SubModulesMap_0_31,
  MR_Word * STATE_VARIABLE_SubModulesMap_32,
  MR_Word STATE_VARIABLE_RawCompUnitsCord_0_33,
  MR_Word * STATE_VARIABLE_RawCompUnitsCord_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Specs_0_2,
  MR_Word * STATE_VARIABLE_Specs_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Specs_0_2,
  MR_Word * STATE_VARIABLE_Specs_3);

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


static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[117][2];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[7][1];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][12];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[2][5];




static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[117][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is missing its interface section."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for itself."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have an"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not have its name reused."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the reuse."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is empty."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "duplicates an empty submodule."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the empty submodule,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was previously declared to be a separate submodule."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a duplicate"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the same name as its ancestor module."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was also declarated here."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its both its interface and its implementation"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "were also declarated here."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was also declarated here,"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[48])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a nested submodule."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs in interface section of parent module."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for submodule"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Submodule"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: submodule"))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 96 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: submodule"))
  },
  /* row 108 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the empty nested submodule"))
  },
  /* row 110 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The top level module"))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This implementation section for module"))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs in"))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the interface section of"))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in definition of submodule"))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_4[0])),
    ((MR_Box) (parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[90])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[28])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[56])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[60])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[62])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[38])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[44])))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)
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
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_1 = {
  (MR_String) "dup_int_only",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_2 = {
  (MR_String) "dup_imp_only",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_duplicated_section_0_3 = {
  (MR_String) "dup_int_imp",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_duplicated_section_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "duplicated_section",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_duplicated_section_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_duplicated_section_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_duplicated_section_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_module_ancestors_0_0 = {
  (MR_String) "ma_no_parent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "module_ancestors",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_module_ancestors_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_module_ancestors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_module_ancestors_0
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "module_to_submodules_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_0 = {
  (MR_String) "no_parent_top_level",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_1 = {
  (MR_String) "in_parent_interface",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_functor_desc_parent_module_context_0_2 = {
  (MR_String) "in_parent_implementation",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_parent_module_context_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "parent_module_context",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_name_ordered_parent_module_context_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__enum_value_ordered_parent_module_context_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_parent_module_context_0
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0 = {
  (MR_String) "sa_parent",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "section_ancestors",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_section_ancestors_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_section_ancestors_0
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_0 = {
  (MR_String) "split_included",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_module_entry_0_1 = {
  (MR_String) "split_nested",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_module_entry",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_module_entry_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_module_entry_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_module_entry_0
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0 = {
  (MR_String) "split_nested_top_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1 = {
  (MR_String) "split_nested_empty",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2 = {
  (MR_String) "split_nested_only_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3 = {
  (MR_String) "split_nested_only_imp",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_4 = {
  (MR_String) "split_nested_int_imp",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
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
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_nested_info",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0
};

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__216__1_2_p_0(
  MR_Word LeftOverSubModulesMap_14,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), ((MR_Box) (LeftOverSubModulesMap_14)), ((MR_Box) (HeadVar__2_31)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__214__1_2_p_0(
  MR_Word LeftOverSplitModuleMap_13,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), ((MR_Box) (LeftOverSplitModuleMap_13)), ((MR_Box) (HeadVar__2_27)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

        mercury__term____Compare____context_0_0(HeadVar__1_1, Var_22, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_16;

        parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&Var_16, Var_24, ArgY1_13);
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_15)));
        }
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
            MR_Word Var_78 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

                  mercury__term____Compare____context_0_0(HeadVar__1_1, Var_78, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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

                  mercury__term____Compare____context_0_0(HeadVar__1_1, Var_73, ArgY1_18);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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

                  mercury__term____Compare____context_0_0(HeadVar__1_1, Var_77, ArgY1_31);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__term____Compare____context_0_0(HeadVar__1_1, Var_76, ArgY1_44);
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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word Var_64;

                          mercury__term____Compare____context_0_0(&Var_64, Var_75, ArgY1_61);
                          succeeded = (Var_64 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_64;
                          else
                            mercury__term____Compare____context_0_0(HeadVar__1_1, Var_74, ArgY2_63);
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
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
        succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
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
              succeeded = mercury__term____Unify____context_0_0(ArgX1_5, ArgY1_6);
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
              succeeded = mercury__term____Unify____context_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_9, ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;
                MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_11, ArgY1_12);
                  if (succeeded)
                    succeeded = mercury__term____Unify____context_0_0(ArgX2_13, ArgY2_14);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_1_HeadVar__2_2,
  MR_Word tscc_proc_1_input_2_HeadVar__3_3)
{
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
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

        if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
          HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          MR_Word ArgY3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
          MR_Word Var_16;
          MR_Integer Var_26 = (MR_Integer) (Var_25);
          MR_Integer Var_27 = (MR_Integer) (ArgY1_11);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_26, Var_27);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__term____Compare____context_0_0(&Var_17, Var_24, ArgY2_13);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              HeadVar__1_1 = Var_17;
            else
            {
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_23;
              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_15;

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
        MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_8;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_8, ArgX1_4, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          HeadVar__1_1 = Var_8;
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__2_2 = ArgX2_6;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__3_3 = ArgY2_7;

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
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_2_HeadVar__3_3)
{
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
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

        if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
          HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          MR_Word ArgY3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
          MR_Word Var_16;
          MR_Integer Var_26 = (MR_Integer) (Var_25);
          MR_Integer Var_27 = (MR_Integer) (ArgY1_11);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_26, Var_27);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__term____Compare____context_0_0(&Var_17, Var_24, ArgY2_13);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              HeadVar__1_1 = Var_17;
            else
            {
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_23;
              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_15;

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
        MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_8;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_8, ArgX1_4, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          HeadVar__1_1 = Var_8;
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__2_2 = ArgX2_6;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__3_3 = ArgY2_7;

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
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2)
{
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
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Unsigned packed_word_1;
        MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
        MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

        succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
        if (succeeded)
        {
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
          ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
          ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          succeeded = (ArgX1_5 == ArgY1_6);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX2_7, ArgY2_8);
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
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2)
{
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
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Unsigned packed_word_1;
        MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
        MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

        succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
        if (succeeded)
        {
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
          ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
          ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          succeeded = (ArgX1_5 == ArgY1_6);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX2_7, ArgY2_8);
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
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_error_implementation_in_interface_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_Word ParentModule_10;
    MR_String ChildModule_11;
    MR_Word Pieces_13;
    MR_Word Msg_14;
    MR_Word Spec_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_59;

    if (((MR_tag((MR_Word) ModuleName_5)) == (MR_Integer) 1))
    {
      ParentModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleName_5, (MR_Integer) 0))));
      ChildModule_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_5, (MR_Integer) 1))));
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_error_implementation_in_interface\'/4", (MR_String) "unqualified module name");
        return;
      }
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (ParentModule_10));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (ChildModule_11));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[86])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[116])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[115])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_14, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_14, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Msg_14));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__216__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__214__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(
  MR_Word ParseTreeSrc_5,
  MR_Word * RawCompUnits_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word SplitModuleMap_8;
    MR_Word SubModulesMap_9;
    MR_Word TopModuleName_10;
    MR_Word LeftOverSplitModuleMap_13;
    MR_Word LeftOverSubModulesMap_14;
    MR_Word RawCompUnitCord_15;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_Specs_21_21;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;

    Var_19 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0));
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]));
    parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(ParseTreeSrc_5, (MR_Word) ((MR_Unsigned) 0U), Var_19, &SplitModuleMap_8, Var_20, &SubModulesMap_9, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_21_21);
    TopModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc_5, (MR_Integer) 0))));
    Var_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0));
    parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(TopModuleName_10, SplitModuleMap_8, &LeftOverSplitModuleMap_13, SubModulesMap_9, &LeftOverSubModulesMap_14, Var_22, &RawCompUnitCord_15, STATE_VARIABLE_Specs_21_21, STATE_VARIABLE_Specs_17);
    Var_27 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0));
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (LeftOverSplitModuleMap_13));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Var_27));
    }
    mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSplitModuleMap != map.init");
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (LeftOverSubModulesMap_14));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (Var_31));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSubModulesMap != map.init");
    *RawCompUnits_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), RawCompUnitCord_15);
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SectionAncestors_2,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_3,
  MR_Word * STATE_VARIABLE_SplitModuleMap_4,
  MR_Word STATE_VARIABLE_SubModulesMap_0_5,
  MR_Word * STATE_VARIABLE_SubModulesMap_6,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_7,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_RawItemBlockCord_8 = STATE_VARIABLE_RawItemBlockCord_0_7;
      *STATE_VARIABLE_SubModulesMap_6 = STATE_VARIABLE_SubModulesMap_0_5;
      *STATE_VARIABLE_SplitModuleMap_4 = STATE_VARIABLE_SplitModuleMap_0_3;
    }
    else
    {
      MR_Word Component_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Components_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_SplitModuleMap_39_39;
      MR_Word STATE_VARIABLE_SubModulesMap_40_40;
      MR_Word STATE_VARIABLE_RawItemBlockCord_41_41;
      MR_Word STATE_VARIABLE_Specs_42_42;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SplitModuleMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SubModulesMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RawItemBlockCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(Component_24, SectionAncestors_2, STATE_VARIABLE_SplitModuleMap_0_3, &STATE_VARIABLE_SplitModuleMap_39_39, STATE_VARIABLE_SubModulesMap_0_5, &STATE_VARIABLE_SubModulesMap_40_40, STATE_VARIABLE_RawItemBlockCord_0_7, &STATE_VARIABLE_RawItemBlockCord_41_41, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_42_42);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Components_25;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_3 = STATE_VARIABLE_SplitModuleMap_39_39;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_5 = STATE_VARIABLE_SubModulesMap_40_40;
      next_value_of_STATE_VARIABLE_RawItemBlockCord_0_7 = STATE_VARIABLE_RawItemBlockCord_41_41;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_42_42;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SplitModuleMap_0_3 = next_value_of_STATE_VARIABLE_SplitModuleMap_0_3;
      STATE_VARIABLE_SubModulesMap_0_5 = next_value_of_STATE_VARIABLE_SubModulesMap_0_5;
      STATE_VARIABLE_RawItemBlockCord_0_7 = next_value_of_STATE_VARIABLE_RawItemBlockCord_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(
  MR_Word Component_11,
  MR_Word SectionAncestors_12,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_47,
  MR_Word * STATE_VARIABLE_SplitModuleMap_48,
  MR_Word STATE_VARIABLE_SubModulesMap_0_49,
  MR_Word * STATE_VARIABLE_SubModulesMap_50,
  MR_Word STATE_VARIABLE_RawItemBlockCord_0_51,
  MR_Word * STATE_VARIABLE_RawItemBlockCord_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Component_11)) == (MR_Integer) 1))
    {
      MR_Word NestedModuleParseTree_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_11, (MR_Integer) 2))));
      MR_Word NestedModuleName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NestedModuleParseTree_41, (MR_Integer) 0))));
      MR_Word NestedModuleContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NestedModuleParseTree_41, (MR_Integer) 1))));
      MR_Word NestedIncludeItem_45;
      MR_Word NestedModuleAncestors_46;
      MR_Word Var_56;
      MR_Word SectionKind_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Component_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SectionContext_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_11, (MR_Integer) 1))));
      MR_Word RawItemBlock_104;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Component_11, (MR_Integer) 0)));

      {
        NestedIncludeItem_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NestedIncludeItem_45, 0) = ((MR_Box) (NestedModuleName_42));
        MR_hl_field(MR_mktag(0), NestedIncludeItem_45, 1) = ((MR_Box) (NestedModuleContext_43));
        MR_hl_field(MR_mktag(0), NestedIncludeItem_45, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (NestedIncludeItem_45));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        RawItemBlock_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RawItemBlock_104, 0) = ((MR_Box) (SectionKind_102));
        MR_hl_field(MR_mktag(0), RawItemBlock_104, 1) = ((MR_Box) (SectionContext_103));
        MR_hl_field(MR_mktag(0), RawItemBlock_104, 2) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), RawItemBlock_104, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RawItemBlock_104, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (RawItemBlock_104)));
      {
        NestedModuleAncestors_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NestedModuleAncestors_46, 0) = (MR_Box) ((MR_Unsigned) (SectionKind_102));
        MR_hl_field(MR_mktag(1), NestedModuleAncestors_46, 1) = ((MR_Box) (SectionContext_103));
        MR_hl_field(MR_mktag(1), NestedModuleAncestors_46, 2) = ((MR_Box) (SectionAncestors_12));
      }
      parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(NestedModuleParseTree_41, NestedModuleAncestors_46, STATE_VARIABLE_SplitModuleMap_0_47, STATE_VARIABLE_SplitModuleMap_48, STATE_VARIABLE_SubModulesMap_0_49, STATE_VARIABLE_SubModulesMap_50, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
    }
    else
    {
      MR_Word SectionKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Component_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SectionContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_11, (MR_Integer) 1))));
      MR_Word IncludesCord_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_11, (MR_Integer) 2))));
      MR_Word AvailsCord_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_11, (MR_Integer) 3))));
      MR_Word ItemsCord_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_11, (MR_Integer) 4))));
      MR_Word Includes_22;
      MR_Word Avails_23;
      MR_Word Items_24;
      MR_Word OKIncludesCord_25;
      MR_Word OKIncludes_26;
      MR_Word RawItemBlock_27;
      MR_Word Var_64;
      MR_Word STATE_VARIABLE_Specs_67_67;
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Component_11, (MR_Integer) 0)));

      Includes_22 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IncludesCord_19);
      Avails_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), AvailsCord_20);
      Items_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemsCord_21);
      Var_64 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
      parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(Includes_22, SectionAncestors_12, Var_64, &OKIncludesCord_25, STATE_VARIABLE_SplitModuleMap_0_47, STATE_VARIABLE_SplitModuleMap_48, STATE_VARIABLE_SubModulesMap_0_49, STATE_VARIABLE_SubModulesMap_50, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_67_67);
      OKIncludes_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OKIncludesCord_25);
      {
        RawItemBlock_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RawItemBlock_27, 0) = ((MR_Box) (SectionKind_17));
        MR_hl_field(MR_mktag(0), RawItemBlock_27, 1) = ((MR_Box) (SectionContext_18));
        MR_hl_field(MR_mktag(0), RawItemBlock_27, 2) = ((MR_Box) (OKIncludes_26));
        MR_hl_field(MR_mktag(0), RawItemBlock_27, 3) = ((MR_Box) (Avails_23));
        MR_hl_field(MR_mktag(0), RawItemBlock_27, 4) = ((MR_Box) (Items_24));
      }
      *STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (RawItemBlock_27)));
      switch (SectionKind_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word MaybeProblemAncestor_28;

            parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(SectionAncestors_12, &MaybeProblemAncestor_28);
            if ((MaybeProblemAncestor_28 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_67_67;
            else
            {
              MR_Word ProblemAncestor_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProblemAncestor_28, (MR_Integer) 0))));
              MR_Word CurModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_12, (MR_Integer) 0))));
              MR_Word ModuleAncestors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_12, (MR_Integer) 1))));
              MR_String PorA_37;
              MR_Word Pieces_38;
              MR_Word Msg_39;
              MR_Word Spec_40;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_78;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_99;

              if ((ModuleAncestors_31 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/10", (MR_String) "in interface section of nonexistent ancestor");
                  return;
                }
              }
              else
              {
                MR_Word ModuleSectionAncestor_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_31, (MR_Integer) 2))));
                MR_Word ModuleParent_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleSectionAncestor_34, (MR_Integer) 0))));
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleAncestors_31, (MR_Integer) 0)));

                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleParent_35, ProblemAncestor_29);
                if (succeeded)
                  PorA_37 = (MR_String) "parent";
                else
                  PorA_37 = (MR_String) "ancestor";
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (CurModuleName_30));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (PorA_37));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ProblemAncestor_29));
              }
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[64])));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[114])));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[113])));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
              }
              {
                Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[112])));
                MR_hl_field(MR_mktag(1), Pieces_38, 1) = ((MR_Box) (Var_73));
              }
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Pieces_38));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Msg_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_39, 0) = ((MR_Box) (SectionContext_18));
                MR_hl_field(MR_mktag(0), Msg_39, 1) = ((MR_Box) (Var_94));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_39));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_99));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_40));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_67_67));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_67_67;
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word ParseTree_9,
  MR_Word ModuleAncestors_10,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_48,
  MR_Word * STATE_VARIABLE_SplitModuleMap_49,
  MR_Word STATE_VARIABLE_SubModulesMap_0_50,
  MR_Word * STATE_VARIABLE_SubModulesMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_9, (MR_Integer) 0))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_9, (MR_Integer) 1))));
    MR_Word ModuleComponentsCord_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_9, (MR_Integer) 2))));
    MR_Word ModuleComponents_17;
    MR_Word SubModuleSectionAncestors_18;
    MR_Word ItemBlockCord0_19;
    MR_Word STATE_VARIABLE_SubModulesMap_54_54;
    MR_Word STATE_VARIABLE_SplitModuleMap_55_55;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_Specs_58_58;

    ModuleComponents_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0), ModuleComponentsCord_16);
    parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(ModuleAncestors_10, ModuleName_14, STATE_VARIABLE_SubModulesMap_0_50, &STATE_VARIABLE_SubModulesMap_54_54);
    {
      SubModuleSectionAncestors_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubModuleSectionAncestors_18, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), SubModuleSectionAncestors_18, 1) = ((MR_Box) (ModuleAncestors_10));
    }
    Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]));
    parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(ModuleComponents_17, SubModuleSectionAncestors_18, STATE_VARIABLE_SplitModuleMap_0_48, &STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SubModulesMap_54_54, STATE_VARIABLE_SubModulesMap_51, Var_57, &ItemBlockCord0_19, STATE_VARIABLE_Specs_0_52, &STATE_VARIABLE_Specs_58_58);
    if ((ModuleAncestors_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OldEntry_20;
      MR_Box conv0_OldEntry_20;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (ModuleName_14)), &conv0_OldEntry_20);
      if (succeeded)
      {
        OldEntry_20 = ((MR_Word) (conv0_OldEntry_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldContext_21;
        MR_Word Pieces_22;
        MR_Word OldPieces_23;
        MR_Word Msg_26;
        MR_Word OldMsg_27;
        MR_Word Spec_28;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_134;
        MR_Word Var_135;

        if (((MR_tag((MR_Word) OldEntry_20)) == (MR_Integer) 0))
        {
          MR_Word Var_101;
          MR_Word Var_102;

          OldContext_21 = (MR_Word) (MR_body((MR_Word) (OldEntry_20), (MR_Integer) 0));
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (ModuleName_14));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[13])));
          }
          {
            Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[111])));
            MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_101));
          }
          OldPieces_23 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[18]));
        }
        else
        {
          MR_Word SplitNested_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_20, (MR_Integer) 0))));
          MR_Word Var_86;
          MR_Word Var_87;

          OldContext_21 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(SplitNested_24);
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ModuleName_14));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[20])));
          }
          {
            Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[111])));
            MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_86));
          }
          OldPieces_23 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[22]));
        }
        {
          Var_127 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (Pieces_22));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_26, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Msg_26, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (OldPieces_23));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          OldMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OldMsg_27, 0) = ((MR_Box) (OldContext_21));
          MR_hl_field(MR_mktag(0), OldMsg_27, 1) = ((MR_Box) (Var_129));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (OldMsg_27));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Msg_26));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
        }
        {
          Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_134));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_53 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
        }
        *STATE_VARIABLE_SplitModuleMap_49 = STATE_VARIABLE_SplitModuleMap_55_55;
      }
      else
      {
        MR_Word Entry_29;
        MR_Word Var_138 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Context_15)));

        {
          Entry_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Entry_29, 0) = ((MR_Box) (Var_138));
          MR_hl_field(MR_mktag(1), Entry_29, 1) = ((MR_Box) (ItemBlockCord0_19));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_29)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
        *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_58_58;
      }
    }
    else
    {
      MR_Word SectionAncestors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_10, (MR_Integer) 2))));
      MR_Word ParentModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_32, (MR_Integer) 0))));
      MR_Word ItemBlocks_35;
      MR_Word SeenInt_36;
      MR_Word SeenImp_37;
      MR_Word ItemBlockCord_38;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleAncestors_10, (MR_Integer) 0)));

      ItemBlocks_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), ItemBlockCord0_19);
      parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(ItemBlocks_35, (MR_Integer) 0, &SeenInt_36, (MR_Integer) 0, &SeenImp_37);
      ItemBlockCord_38 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), ItemBlocks_35);
      switch (SeenInt_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (SeenImp_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Specs_80_80;
                MR_Word OldEntry_142;
                MR_Box conv1_OldEntry_142;

                parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(ModuleName_14, Context_15, ParentModuleName_33, STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Specs_80_80);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (ModuleName_14)), &conv1_OldEntry_142);
                if (succeeded)
                {
                  OldEntry_142 = ((MR_Word) (conv1_OldEntry_142));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 0, ParentModuleName_33, OldEntry_142, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_53);
                  *STATE_VARIABLE_SplitModuleMap_49 = STATE_VARIABLE_SplitModuleMap_55_55;
                }
                else
                {
                  MR_Word SplitNested_140 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Context_15)));
                  MR_Word Entry_141;

                  {
                    Entry_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Entry_141, 0) = ((MR_Box) (SplitNested_140));
                    MR_hl_field(MR_mktag(1), Entry_141, 1) = ((MR_Box) (ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_141)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                  *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_80_80;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word OldEntry_187;
                MR_Box conv2_OldEntry_187;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (ModuleName_14)), &conv2_OldEntry_187);
                if (succeeded)
                {
                  OldEntry_187 = ((MR_Word) (conv2_OldEntry_187));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word IntContext_47;
                  MR_Word OldItemBlockCord_179;
                  MR_Word OldSplitNested_163;

                  succeeded = ((MR_tag((MR_Word) OldEntry_187)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OldSplitNested_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_187, (MR_Integer) 0))));
                    OldItemBlockCord_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_187, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) OldSplitNested_163)) == (MR_Integer) 2);
                    if (succeeded)
                      IntContext_47 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_163), (MR_Integer) 2));
                  }
                  if (succeeded)
                  {
                    MR_Word NewSplitNested_164;
                    MR_Word NewItemBlockCord_165;
                    MR_Word NewEntry_166;

                    {
                      NewSplitNested_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), NewSplitNested_164, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), NewSplitNested_164, 1) = ((MR_Box) (IntContext_47));
                      MR_hl_field(MR_mktag(3), NewSplitNested_164, 2) = ((MR_Box) (Context_15));
                    }
                    NewItemBlockCord_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), OldItemBlockCord_179, ItemBlockCord_38);
                    {
                      NewEntry_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewEntry_166, 0) = ((MR_Box) (NewSplitNested_164));
                      MR_hl_field(MR_mktag(1), NewEntry_166, 1) = ((MR_Box) (NewItemBlockCord_165));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_166)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                    *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_58_58;
                  }
                  else
                  {
                    MR_Word EmptyContext_176;
                    MR_Word OldSplitNested_168;

                    succeeded = ((MR_tag((MR_Word) OldEntry_187)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      OldSplitNested_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_187, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) OldSplitNested_168)) == (MR_Integer) 1);
                      if (succeeded)
                        EmptyContext_176 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_168), (MR_Integer) 1));
                    }
                    if (succeeded)
                    {
                      MR_Word SplitNested_170;
                      MR_Word NewEntry_171;

                      parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_33, Context_15, EmptyContext_176, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_53);
                      {
                        SplitNested_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), SplitNested_170, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), SplitNested_170, 1) = ((MR_Box) (Context_15));
                      }
                      {
                        NewEntry_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), NewEntry_171, 0) = ((MR_Box) (SplitNested_170));
                        MR_hl_field(MR_mktag(1), NewEntry_171, 1) = ((MR_Box) (ItemBlockCord_38));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_171)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                    }
                    else
                    {
                      parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 2, ParentModuleName_33, OldEntry_187, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_53);
                      *STATE_VARIABLE_SplitModuleMap_49 = STATE_VARIABLE_SplitModuleMap_55_55;
                    }
                  }
                }
                else
                {
                  MR_Word SplitNested_185;
                  MR_Word Entry_186;

                  {
                    SplitNested_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SplitNested_185, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), SplitNested_185, 1) = ((MR_Box) (Context_15));
                  }
                  {
                    Entry_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Entry_186, 0) = ((MR_Box) (SplitNested_185));
                    MR_hl_field(MR_mktag(1), Entry_186, 1) = ((MR_Box) (ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_186)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                  *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_58_58;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (SeenImp_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word OldEntry_157;
                MR_Box conv3_OldEntry_157;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (ModuleName_14)), &conv3_OldEntry_157);
                if (succeeded)
                {
                  OldEntry_157 = ((MR_Word) (conv3_OldEntry_157));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word OldItemBlockCord_40;
                  MR_Word ImpContext_41;
                  MR_Word OldSplitNested_39;

                  succeeded = ((MR_tag((MR_Word) OldEntry_157)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OldSplitNested_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_157, (MR_Integer) 0))));
                    OldItemBlockCord_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_157, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) OldSplitNested_39)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OldSplitNested_39, (MR_Integer) 0))) == (MR_Integer) 0)));
                    if (succeeded)
                      ImpContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldSplitNested_39, (MR_Integer) 1))));
                  }
                  if (succeeded)
                  {
                    MR_Word NewSplitNested_42;
                    MR_Word NewItemBlockCord_43;
                    MR_Word NewEntry_44;

                    {
                      NewSplitNested_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), NewSplitNested_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), NewSplitNested_42, 1) = ((MR_Box) (Context_15));
                      MR_hl_field(MR_mktag(3), NewSplitNested_42, 2) = ((MR_Box) (ImpContext_41));
                    }
                    NewItemBlockCord_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), ItemBlockCord_38, OldItemBlockCord_40);
                    {
                      NewEntry_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewEntry_44, 0) = ((MR_Box) (NewSplitNested_42));
                      MR_hl_field(MR_mktag(1), NewEntry_44, 1) = ((MR_Box) (NewItemBlockCord_43));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_44)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                    *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_58_58;
                  }
                  else
                  {
                    MR_Word EmptyContext_46;
                    MR_Word OldSplitNested_148;

                    succeeded = ((MR_tag((MR_Word) OldEntry_157)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      OldSplitNested_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_157, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) OldSplitNested_148)) == (MR_Integer) 1);
                      if (succeeded)
                        EmptyContext_46 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_148), (MR_Integer) 1));
                    }
                    if (succeeded)
                    {
                      MR_Word SplitNested_149;
                      MR_Word NewEntry_150;

                      parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_33, Context_15, EmptyContext_46, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_53);
                      SplitNested_149 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Context_15)));
                      {
                        NewEntry_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), NewEntry_150, 0) = ((MR_Box) (SplitNested_149));
                        MR_hl_field(MR_mktag(1), NewEntry_150, 1) = ((MR_Box) (ItemBlockCord_38));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_150)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                    }
                    else
                    {
                      parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 1, ParentModuleName_33, OldEntry_157, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_53);
                      *STATE_VARIABLE_SplitModuleMap_49 = STATE_VARIABLE_SplitModuleMap_55_55;
                    }
                  }
                }
                else
                {
                  MR_Word SplitNested_155 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Context_15)));
                  MR_Word Entry_156;

                  {
                    Entry_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Entry_156, 0) = ((MR_Box) (SplitNested_155));
                    MR_hl_field(MR_mktag(1), Entry_156, 1) = ((MR_Box) (ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_156)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                  *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_58_58;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word OldEntry_219;
                MR_Box conv4_OldEntry_219;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (ModuleName_14)), &conv4_OldEntry_219);
                if (succeeded)
                {
                  OldEntry_219 = ((MR_Word) (conv4_OldEntry_219));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word EmptyContext_216;
                  MR_Word OldSplitNested_208;

                  succeeded = ((MR_tag((MR_Word) OldEntry_219)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    OldSplitNested_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_219, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) OldSplitNested_208)) == (MR_Integer) 1);
                    if (succeeded)
                      EmptyContext_216 = (MR_Word) (MR_body((MR_Word) (OldSplitNested_208), (MR_Integer) 1));
                  }
                  if (succeeded)
                  {
                    MR_Word SplitNested_210;
                    MR_Word NewEntry_211;

                    parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(ModuleName_14, ParentModuleName_33, Context_15, EmptyContext_216, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_53);
                    {
                      SplitNested_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SplitNested_210, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SplitNested_210, 1) = ((MR_Box) (Context_15));
                      MR_hl_field(MR_mktag(3), SplitNested_210, 2) = ((MR_Box) (Context_15));
                    }
                    {
                      NewEntry_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewEntry_211, 0) = ((MR_Box) (SplitNested_210));
                      MR_hl_field(MR_mktag(1), NewEntry_211, 1) = ((MR_Box) (ItemBlockCord_38));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (NewEntry_211)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                  }
                  else
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(ModuleName_14, Context_15, (MR_Integer) 3, ParentModuleName_33, OldEntry_219, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_53);
                    *STATE_VARIABLE_SplitModuleMap_49 = STATE_VARIABLE_SplitModuleMap_55_55;
                  }
                }
                else
                {
                  MR_Word SplitNested_217;
                  MR_Word Entry_218;

                  {
                    SplitNested_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SplitNested_217, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), SplitNested_217, 1) = ((MR_Box) (Context_15));
                    MR_hl_field(MR_mktag(3), SplitNested_217, 2) = ((MR_Box) (Context_15));
                  }
                  {
                    Entry_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Entry_218, 0) = ((MR_Box) (SplitNested_217));
                    MR_hl_field(MR_mktag(1), Entry_218, 1) = ((MR_Box) (ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (Entry_218)), STATE_VARIABLE_SplitModuleMap_55_55, STATE_VARIABLE_SplitModuleMap_49);
                  *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_58_58;
                }
              }
              break;
          }
          break;
      }
    }
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
      MR_Word STATE_VARIABLE_Specs_112_112;
      MR_Word STATE_VARIABLE_SplitModuleMap_113_113;
      MR_Word STATE_VARIABLE_SubModulesMap_114_114;
      MR_Word STATE_VARIABLE_OKIncludesCord_115_115;
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
        MR_Word OldContext_40;
        MR_Word Pieces2_41;
        MR_Word Msg_43;
        MR_Word OldMsg_44;
        MR_Word Spec_45;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_109;
        MR_Word Var_110;

        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ParentModuleName_35));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (InclModuleName_31));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[67])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[107])));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
        }
        {
          Pieces1_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
          MR_hl_field(MR_mktag(1), Pieces1_37, 1) = ((MR_Box) (Var_57));
        }
        if (((MR_tag((MR_Word) OldEntry_34)) == (MR_Integer) 0))
        {
          OldContext_40 = (MR_Word) (MR_body((MR_Word) (OldEntry_34), (MR_Integer) 0));
          Pieces2_41 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[71]));
        }
        else
        {
          MR_Word OldSplitNested_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_34, (MR_Integer) 0))));

          OldContext_40 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(OldSplitNested_38);
          Pieces2_41 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[75]));
        }
        Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_37, Pieces2_41);
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (Var_102));
        }
        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_43, 0) = ((MR_Box) (Context_32));
          MR_hl_field(MR_mktag(0), Msg_43, 1) = ((MR_Box) (Var_100));
        }
        {
          OldMsg_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OldMsg_44, 0) = ((MR_Box) (OldContext_40));
          MR_hl_field(MR_mktag(0), OldMsg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[108])));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (OldMsg_44));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Msg_43));
          MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
        }
        {
          Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_109));
        }
        {
          STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (Spec_45));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
        }
        STATE_VARIABLE_SubModulesMap_114_114 = STATE_VARIABLE_SubModulesMap_0_7;
        STATE_VARIABLE_SplitModuleMap_113_113 = STATE_VARIABLE_SplitModuleMap_0_5;
        STATE_VARIABLE_OKIncludesCord_115_115 = STATE_VARIABLE_OKIncludesCord_0_3;
      }
      else
      {
        MR_Word Entry_46 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Context_32)));

        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (InclModuleName_31)), ((MR_Box) (Entry_46)), STATE_VARIABLE_SplitModuleMap_0_5, &STATE_VARIABLE_SplitModuleMap_113_113);
        parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(SectionAncestors_2, InclModuleName_31, STATE_VARIABLE_SubModulesMap_0_7, &STATE_VARIABLE_SubModulesMap_114_114);
        STATE_VARIABLE_OKIncludesCord_115_115 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), STATE_VARIABLE_OKIncludesCord_0_3, ((MR_Box) (Include_24)));
        STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_9;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Includes_25;
      next_value_of_STATE_VARIABLE_OKIncludesCord_0_3 = STATE_VARIABLE_OKIncludesCord_115_115;
      next_value_of_STATE_VARIABLE_SplitModuleMap_0_5 = STATE_VARIABLE_SplitModuleMap_113_113;
      next_value_of_STATE_VARIABLE_SubModulesMap_0_7 = STATE_VARIABLE_SubModulesMap_114_114;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_112_112;
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
  {
    MR_bool succeeded;
    MR_Word ParentModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_5, (MR_Integer) 0))));
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
}

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word SectionAncestors_3,
  MR_Word * MaybeProblemAncestor_4)
{
  while (MR_TRUE)
  {
    MR_Word ModuleAncestors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_3, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ModuleAncestors_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeProblemAncestor_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SectionKind_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleAncestors_6, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SectionParentAncestors_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_6, (MR_Integer) 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleAncestors_6, (MR_Integer) 0)));

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
            MR_Word ProblemAncestor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionParentAncestors_9, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeProblemAncestor_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProblemAncestor_10));
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
      MR_Word SectionKind_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_12, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_SeenImp_25_25;
      MR_Word STATE_VARIABLE_SeenInt_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SeenInt_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SeenImp_0_4;

      switch (SectionKind_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_SeenImp_25_25 = (MR_Integer) 1;
            STATE_VARIABLE_SeenInt_26_26 = STATE_VARIABLE_SeenInt_0_2;
          }
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_SeenInt_26_26 = (MR_Integer) 1;
            STATE_VARIABLE_SeenImp_25_25 = STATE_VARIABLE_SeenImp_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_13;
      next_value_of_STATE_VARIABLE_SeenInt_0_2 = STATE_VARIABLE_SeenInt_26_26;
      next_value_of_STATE_VARIABLE_SeenImp_0_4 = STATE_VARIABLE_SeenImp_25_25;
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
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word Spec_19;

    if (((MR_tag((MR_Word) OldEntry_12)) == (MR_Integer) 0))
    {
      MR_Word OldContext_14 = (MR_Word) (MR_body((MR_Word) (OldEntry_12), (MR_Integer) 0));
      MR_Word Pieces_15;
      MR_Word Msg_17;
      MR_Word OldMsg_18;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_114;
      MR_Word Var_115;

      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (ParentModuleName_11));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (ModuleName_8));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[34])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[107])));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (Pieces_15));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_106));
      }
      {
        OldMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_18, 0) = ((MR_Box) (OldContext_14));
        MR_hl_field(MR_mktag(0), OldMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[108])));
      }
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (OldMsg_18));
        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Msg_17));
        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
      }
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_114));
      }
    }
    else
    {
      MR_Word SplitNested_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldEntry_12, (MR_Integer) 0))));

      switch (DupSection_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_40;
            MR_Word Var_42;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word OldContext_118;
            MR_Word Pieces_119;
            MR_Word Msg_121;
            MR_Word OldMsg_122;

            OldContext_118 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(SplitNested_20);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ParentModuleName_11));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (ModuleName_8));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[42])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[109])));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
            }
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
            }
            {
              Pieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
              MR_hl_field(MR_mktag(1), Pieces_119, 1) = ((MR_Box) (Var_35));
            }
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Pieces_119));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_121, 0) = ((MR_Box) (Context_9));
              MR_hl_field(MR_mktag(0), Msg_121, 1) = ((MR_Box) (Var_61));
            }
            {
              OldMsg_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OldMsg_122, 0) = ((MR_Box) (OldContext_118));
              MR_hl_field(MR_mktag(0), OldMsg_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[110])));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (OldMsg_122));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Msg_121));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
            }
            {
              Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_69));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 1, ParentModuleName_11, SplitNested_20, &Spec_19);
          }
          break;
        case (MR_Integer) 3:
          switch (MR_tag((MR_Word) SplitNested_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(ModuleName_8, Context_9, ParentModuleName_11, &Spec_19);
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule\'/7", (MR_String) "split_nested_empty duplicates a section");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 0, ParentModuleName_11, SplitNested_20, &Spec_19);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 1, ParentModuleName_11, SplitNested_20, &Spec_19);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 1))));
                    MR_Word ImpContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SplitNested_20, (MR_Integer) 2))));

                    parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(ModuleName_8, Context_9, ParentModuleName_11, IntContext_23, ImpContext_24, &Spec_19);
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(ModuleName_8, Context_9, (MR_Integer) 0, ParentModuleName_11, SplitNested_20, &Spec_19);
          }
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
    }
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
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[52])));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_23));
    }
    succeeded = mercury__term____Unify____context_0_0(OldIntContext_10, OldImpContext_11);
    if (succeeded)
    {
      MR_Word Msg_15;
      MR_Word OldMsg_16;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_60;
      MR_Word Var_61;

      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Pieces_13));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_52));
      }
      {
        OldMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_16, 0) = ((MR_Box) (OldIntContext_10));
        MR_hl_field(MR_mktag(0), OldMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[104])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (OldMsg_16));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Msg_15));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Spec_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_60));
      }
    }
    else
    {
      MR_Word OldIntMsg_19;
      MR_Word OldImpMsg_20;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Msg_94;

      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_13));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_94, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Msg_94, 1) = ((MR_Box) (Var_79));
      }
      {
        OldIntMsg_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldIntMsg_19, 0) = ((MR_Box) (OldIntContext_10));
        MR_hl_field(MR_mktag(0), OldIntMsg_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[105])));
      }
      {
        OldImpMsg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldImpMsg_20, 0) = ((MR_Box) (OldImpContext_11));
        MR_hl_field(MR_mktag(0), OldImpMsg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[106])));
      }
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (OldImpMsg_20));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (OldIntMsg_19));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Msg_94));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Spec_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_90));
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word ParentModuleName_7,
  MR_Word * Spec_8)
{
  {
    MR_Word Pieces_9;
    MR_Word Msg_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_36;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (ParentModuleName_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (ModuleName_5));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[46])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_10, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_10, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Msg_10));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
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
        MR_Word Pieces_36;
        MR_Word Msg_37;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_63;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ParentModuleName_10));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ModuleName_7));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[46])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
        }
        {
          Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
          MR_hl_field(MR_mktag(1), Pieces_36, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces_36));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_37, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), Msg_37, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Msg_37));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_63));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "split_nested_empty duplicates a section");
          return;
        }
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
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate int without duplication");
                return;
              }
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SplitNested_11, (MR_Integer) 0)))) {
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
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate imp without duplication");
                    return;
                  }
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
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_58;
    MR_Word Var_59;

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
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[102])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[100])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[48])));
    }
    {
      OldPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OldPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[103])));
      MR_hl_field(MR_mktag(1), OldPieces_14, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (OldPieces_14));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OldMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OldMsg_16, 0) = ((MR_Box) (OldContext_11));
      MR_hl_field(MR_mktag(0), OldMsg_16, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (OldMsg_16));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_58));
    }
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
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_50;
    MR_Word Var_51;

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
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[26])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Pieces1_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Pieces1_12, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Pieces1_12));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg1_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg1_13, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg1_13, 1) = ((MR_Box) (Var_37));
    }
    {
      Msg2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg2_15, 0) = ((MR_Box) (EmptyContext_10));
      MR_hl_field(MR_mktag(0), Msg2_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[96])));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg2_15));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Msg1_13));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Context_7,
  MR_Word ParentModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Pieces_10;
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (ParentModuleName_8));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[24])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word ModuleAncestors_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * STATE_VARIABLE_SubModulesMap_12)
{
  {
    MR_bool succeeded;

    if ((ModuleAncestors_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SubModulesMap_12 = STATE_VARIABLE_SubModulesMap_0_11;
    else
    {
      MR_Word SectionAncestors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleAncestors_5, (MR_Integer) 2))));
      MR_Word ParentModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionAncestors_10, (MR_Integer) 0))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModuleAncestors_5, (MR_Integer) 0)));
      MR_Word SiblingModules0_21;
      MR_Box conv0_SiblingModules0_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), STATE_VARIABLE_SubModulesMap_0_11, ((MR_Box) (ParentModuleName_19)), &conv0_SiblingModules0_21);
      if (succeeded)
      {
        SiblingModules0_21 = ((MR_Word) (conv0_SiblingModules0_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word SiblingModules_22;

        SiblingModules_22 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SiblingModules0_21, ((MR_Box) (ModuleName_6)));
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_19)), ((MR_Box) (SiblingModules_22)), STATE_VARIABLE_SubModulesMap_0_11, STATE_VARIABLE_SubModulesMap_12);
      }
      else
      {
        MR_Word SiblingModules_25;

        SiblingModules_25 = mercury__cord__singleton_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_6)));
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ParentModuleName_19)), ((MR_Box) (SiblingModules_25)), STATE_VARIABLE_SubModulesMap_0_11, STATE_VARIABLE_SubModulesMap_12);
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word SplitNested_3)
{
  {
    MR_Word Context_4;

    switch (MR_tag((MR_Word) SplitNested_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Context_4 = (MR_Word) (MR_body((MR_Word) (SplitNested_3), (MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        Context_4 = (MR_Word) (MR_body((MR_Word) (SplitNested_3), (MR_Integer) 1));
        break;
      case (MR_Integer) 2:
        Context_4 = (MR_Word) (MR_body((MR_Word) (SplitNested_3), (MR_Integer) 2));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SplitNested_3, (MR_Integer) 0)))) {
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
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_SplitModuleMap_30;
    MR_Word conv4_STATE_VARIABLE_SubModulesMap_32;
    MR_Word conv3_STATE_VARIABLE_RawCompUnitsCord_34;
    MR_Word conv2_STATE_VARIABLE_Specs_36;

    parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_SplitModuleMap_30, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_SubModulesMap_32, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_RawCompUnitsCord_34, ((MR_Word) (wrapper_arg_8)), &conv2_STATE_VARIABLE_Specs_36);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_SplitModuleMap_30));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_SubModulesMap_32));
    *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_RawCompUnitsCord_34));
    *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_36));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_SplitModuleMap_0_29,
  MR_Word * STATE_VARIABLE_SplitModuleMap_30,
  MR_Word STATE_VARIABLE_SubModulesMap_0_31,
  MR_Word * STATE_VARIABLE_SubModulesMap_32,
  MR_Word STATE_VARIABLE_RawCompUnitsCord_0_33,
  MR_Word * STATE_VARIABLE_RawCompUnitsCord_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    MR_Word Entry_15;
    MR_Word STATE_VARIABLE_SplitModuleMap_37_37;
    MR_Box conv0_Entry_15;

    mercury__map__det_remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0), ((MR_Box) (ModuleName_10)), &conv0_Entry_15, STATE_VARIABLE_SplitModuleMap_0_29, &STATE_VARIABLE_SplitModuleMap_37_37);
    Entry_15 = ((MR_Word) (conv0_Entry_15));
    if (((MR_tag((MR_Word) Entry_15)) == (MR_Integer) 0))
    {
      mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_10)), STATE_VARIABLE_SubModulesMap_0_31, STATE_VARIABLE_SubModulesMap_32);
      *STATE_VARIABLE_SplitModuleMap_30 = STATE_VARIABLE_SplitModuleMap_37_37;
      *STATE_VARIABLE_RawCompUnitsCord_34 = STATE_VARIABLE_RawCompUnitsCord_0_33;
      *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word NestedInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Entry_15, (MR_Integer) 0))));
      MR_Word RawItemBlockCord_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Entry_15, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_56_56;
      MR_Word STATE_VARIABLE_RawCompUnitsCord_57_57;
      MR_Word SubModulesCord_27;
      MR_Word STATE_VARIABLE_SubModulesMap_58_58;
      MR_Box conv1_SubModulesCord_27;

      switch (MR_tag((MR_Word) NestedInfo_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_91 = (MR_Word) (MR_body((MR_Word) (NestedInfo_17), (MR_Integer) 0));
            MR_Word RawItemBlocks_92;
            MR_Word RawCompUnit_93;

            RawItemBlocks_92 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), RawItemBlockCord_18);
            parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(RawItemBlocks_92, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_56_56);
            {
              RawCompUnit_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RawCompUnit_93, 0) = ((MR_Box) (ModuleName_10));
              MR_hl_field(MR_mktag(0), RawCompUnit_93, 1) = ((MR_Box) (Context_91));
              MR_hl_field(MR_mktag(0), RawCompUnit_93, 2) = ((MR_Box) (RawItemBlocks_92));
            }
            STATE_VARIABLE_RawCompUnitsCord_57_57 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), STATE_VARIABLE_RawCompUnitsCord_0_33, ((MR_Box) (RawCompUnit_93)));
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RawCompUnitsCord_57_57 = STATE_VARIABLE_RawCompUnitsCord_0_33;
            STATE_VARIABLE_Specs_56_56 = STATE_VARIABLE_Specs_0_35;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Context_86 = (MR_Word) (MR_body((MR_Word) (NestedInfo_17), (MR_Integer) 2));
            MR_Word RawItemBlocks_87;
            MR_Word RawCompUnit_88;

            RawItemBlocks_87 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), RawItemBlockCord_18);
            parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(RawItemBlocks_87, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_56_56);
            {
              RawCompUnit_88 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RawCompUnit_88, 0) = ((MR_Box) (ModuleName_10));
              MR_hl_field(MR_mktag(0), RawCompUnit_88, 1) = ((MR_Box) (Context_86));
              MR_hl_field(MR_mktag(0), RawCompUnit_88, 2) = ((MR_Box) (RawItemBlocks_87));
            }
            STATE_VARIABLE_RawCompUnitsCord_57_57 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), STATE_VARIABLE_RawCompUnitsCord_0_33, ((MR_Box) (RawCompUnit_88)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NestedInfo_17, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Pieces_24;
                MR_Word Msg_25;
                MR_Word Spec_26;
                MR_Word Var_40;
                MR_Word Var_41;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_53;
                MR_Word Context_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NestedInfo_17, (MR_Integer) 1))));

                {
                  Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ModuleName_10));
                }
                {
                  Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
                  MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])));
                }
                {
                  Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[92])));
                  MR_hl_field(MR_mktag(1), Pieces_24, 1) = ((MR_Box) (Var_40));
                }
                {
                  Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_24));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Msg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Msg_25, 0) = ((MR_Box) (Context_66));
                  MR_hl_field(MR_mktag(0), Msg_25, 1) = ((MR_Box) (Var_48));
                }
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Msg_25));
                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_53));
                }
                {
                  STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (Spec_26));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
                }
                STATE_VARIABLE_RawCompUnitsCord_57_57 = STATE_VARIABLE_RawCompUnitsCord_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NestedInfo_17, (MR_Integer) 1))));
                MR_Word RawItemBlocks_21;
                MR_Word RawCompUnit_22;

                RawItemBlocks_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[1]), RawItemBlockCord_18);
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(RawItemBlocks_21, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_56_56);
                {
                  RawCompUnit_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RawCompUnit_22, 0) = ((MR_Box) (ModuleName_10));
                  MR_hl_field(MR_mktag(0), RawCompUnit_22, 1) = ((MR_Box) (Context_19));
                  MR_hl_field(MR_mktag(0), RawCompUnit_22, 2) = ((MR_Box) (RawItemBlocks_21));
                }
                STATE_VARIABLE_RawCompUnitsCord_57_57 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), STATE_VARIABLE_RawCompUnitsCord_0_33, ((MR_Box) (RawCompUnit_22)));
              }
              break;
          }
          break;
      }
      succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[0]), ((MR_Box) (ModuleName_10)), &conv1_SubModulesCord_27, STATE_VARIABLE_SubModulesMap_0_31, &STATE_VARIABLE_SubModulesMap_58_58);
      if (succeeded)
      {
        SubModulesCord_27 = ((MR_Word) (conv1_SubModulesCord_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word SubModules_28;
        MR_Word Var_59;
        MR_Box conv9_STATE_VARIABLE_SplitModuleMap_30;
        MR_Box conv8_STATE_VARIABLE_SubModulesMap_32;
        MR_Box conv7_STATE_VARIABLE_RawCompUnitsCord_34;
        MR_Box conv6_STATE_VARIABLE_Specs_36;

        Var_59 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SubModulesCord_27);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_59, &SubModules_28);
        mercury__list__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[0]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[1]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[2]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_1[3]), (MR_Word) (&parse_tree__split_parse_tree_src_scalar_common_2[2]), SubModules_28, ((MR_Box) (STATE_VARIABLE_SplitModuleMap_37_37)), &conv9_STATE_VARIABLE_SplitModuleMap_30, ((MR_Box) (STATE_VARIABLE_SubModulesMap_58_58)), &conv8_STATE_VARIABLE_SubModulesMap_32, ((MR_Box) (STATE_VARIABLE_RawCompUnitsCord_57_57)), &conv7_STATE_VARIABLE_RawCompUnitsCord_34, ((MR_Box) (STATE_VARIABLE_Specs_56_56)), &conv6_STATE_VARIABLE_Specs_36);
        *STATE_VARIABLE_SplitModuleMap_30 = ((MR_Word) (conv9_STATE_VARIABLE_SplitModuleMap_30));
        *STATE_VARIABLE_SubModulesMap_32 = ((MR_Word) (conv8_STATE_VARIABLE_SubModulesMap_32));
        *STATE_VARIABLE_RawCompUnitsCord_34 = ((MR_Word) (conv7_STATE_VARIABLE_RawCompUnitsCord_34));
        *STATE_VARIABLE_Specs_36 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_36));
      }
      else
      {
        *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_56_56;
        *STATE_VARIABLE_RawCompUnitsCord_34 = STATE_VARIABLE_RawCompUnitsCord_57_57;
        *STATE_VARIABLE_SubModulesMap_32 = STATE_VARIABLE_SubModulesMap_0_31;
        *STATE_VARIABLE_SplitModuleMap_30 = STATE_VARIABLE_SplitModuleMap_37_37;
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Specs_0_2,
  MR_Word * STATE_VARIABLE_Specs_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_3 = STATE_VARIABLE_Specs_0_2;
    else
    {
      MR_Word RawItemBlock_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 0))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_Specs_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_2;

      switch (Section_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_17_17 = STATE_VARIABLE_Specs_0_2;
          break;
        case (MR_Integer) 0:
          parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(Items_14, STATE_VARIABLE_Specs_0_2, &STATE_VARIABLE_Specs_17_17);
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_8;
      next_value_of_STATE_VARIABLE_Specs_0_2 = STATE_VARIABLE_Specs_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_2 = next_value_of_STATE_VARIABLE_Specs_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Specs_0_2,
  MR_Word * STATE_VARIABLE_Specs_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_3 = STATE_VARIABLE_Specs_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_15_15;
      MR_Word ItemInstance_10;
      MR_Word Var_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))) == (MR_Integer) 6)));
      if (succeeded)
      {
        ItemInstance_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 4))));
        succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word InstanceContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_10, (MR_Integer) 7))));
        MR_Word Msg_38;
        MR_Word Spec_39;
        MR_Word Var_53;

        {
          Msg_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_38, 0) = ((MR_Box) (InstanceContext_11));
          MR_hl_field(MR_mktag(0), Msg_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[91])));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Msg_38));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_39, 2) = ((MR_Box) (Var_53));
        }
        {
          STATE_VARIABLE_Specs_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_15_15, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_15_15, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_2));
        }
      }
      else
        STATE_VARIABLE_Specs_15_15 = STATE_VARIABLE_Specs_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_Specs_0_2 = STATE_VARIABLE_Specs_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_2 = next_value_of_STATE_VARIABLE_Specs_0_2;
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
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
