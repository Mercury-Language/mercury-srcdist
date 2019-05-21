/*
** Automatically generated from `split_parse_tree_src.m'
** by the Mercury compiler,
** version rotd-2017-08-07
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.split_parse_tree_src. */
/* :- implementation. */

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
  MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_33);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__214__1_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_28);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_error_implementation_in_interface_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_5,
  MR_Word parse_tree__split_parse_tree_src__Context_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
  MR_Box parse_tree__split_parse_tree_src__closure_arg);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
  MR_Box parse_tree__split_parse_tree_src__closure_arg);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(
  MR_Word parse_tree__split_parse_tree_src__Component_11,
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_12,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_4,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word parse_tree__split_parse_tree_src__ParseTree_9,
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_48,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_50,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_51,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_52,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);

static void MR_CALL 
parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_4,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_5,
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_3,
  MR_Word * parse_tree__split_parse_tree_src__MaybeProblemAncestor_4);

static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__Context_9,
  MR_Word parse_tree__split_parse_tree_src__DupSection_10,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_11,
  MR_Word parse_tree__split_parse_tree_src__OldEntry_12,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_9,
  MR_Word parse_tree__split_parse_tree_src__OldIntContext_10,
  MR_Word parse_tree__split_parse_tree_src__OldImpContext_11,
  MR_Word * parse_tree__split_parse_tree_src__Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_5,
  MR_Word parse_tree__split_parse_tree_src__Context_6,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_7,
  MR_Word * parse_tree__split_parse_tree_src__Spec_8);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_Word parse_tree__split_parse_tree_src__Section_9,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__SplitNested_11,
  MR_Word * parse_tree__split_parse_tree_src__Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_String parse_tree__split_parse_tree_src__SectionWord_9,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__OldContext_11,
  MR_Word * parse_tree__split_parse_tree_src__Spec_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__Context_9,
  MR_Word parse_tree__split_parse_tree_src__EmptyContext_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_17,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__Context_7,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_5,
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word parse_tree__split_parse_tree_src__SplitNested_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1(
  MR_Box parse_tree__split_parse_tree_src__closure_arg,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_3,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_4,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_5,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_6,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_7,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_8,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_9);

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_29,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_30,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_31,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_32,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_34,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is missing its interface section."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for itself."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not have an"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location of the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not have its name reused."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location of the reuse."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is empty."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "duplicates an empty submodule."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location of the empty submodule,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was previously declared to be a separate submodule."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a duplicate"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has the same name as its ancestor module."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was also declarated here."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its both its interface and its implementation"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "were also declarated here."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was also declarated here,"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[48])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a nested submodule."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs in interface section of parent module."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for submodule"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Submodule"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: submodule"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 96 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: submodule"))
  },
  /* row 108 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the empty nested submodule"))
  },
  /* row 110 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The top level module"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This implementation section for module"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs in"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the interface section of"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__split_parse_tree_src__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__split_parse_tree_src__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_section_ancestors_0
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
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_1
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
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__split_parse_tree_src__cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0
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
  {     (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0cord__ti_cord_1mdbcomp__sym_name__type_ctor_info_sym_name_0 },
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
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_module_ancestors_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0
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
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__split_parse_tree_src__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0,
  (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0
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
  MR_FUNCTOR_SUBTYPE_NONE
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
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_1
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
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0
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
  {     (MR_PseudoTypeInfo) &parse_tree__split_parse_tree_src__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2 = {
  (MR_String) "split_nested_only_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3 = {
  (MR_String) "split_nested_only_imp",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_4 = {
  (MR_String) "split_nested_int_imp",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3
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
  MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_33)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14)), ((MR_Box) (parse_tree__split_parse_tree_src__HeadVar__2_33)));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__214__1_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_28)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13)), ((MR_Box) (parse_tree__split_parse_tree_src__HeadVar__2_28)));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = parse_tree__split_parse_tree_src__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_3 = parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_4)));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_17 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__CastY_18 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_17 == parse_tree__split_parse_tree_src__CastY_18);
    if (parse_tree__split_parse_tree_src__succeeded)
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__split_parse_tree_src__Var_22 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);

      if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__split_parse_tree_src__ArgY1_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 0);

        mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_22, parse_tree__split_parse_tree_src__ArgY1_5);
      }
      else
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word parse_tree__split_parse_tree_src__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__Var_16;

        parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&parse_tree__split_parse_tree_src__Var_16, parse_tree__split_parse_tree_src__Var_24, parse_tree__split_parse_tree_src__ArgY1_13);
        parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__Var_16 == (MR_Integer) 0);
        parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
        if (parse_tree__split_parse_tree_src__succeeded)
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__Var_16;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[4], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Var_23)), ((MR_Box) (parse_tree__split_parse_tree_src__ArgY2_15)));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_65 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__CastY_66 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_65 == parse_tree__split_parse_tree_src__CastY_66);
    if (parse_tree__split_parse_tree_src__succeeded)
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__Var_78 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__split_parse_tree_src__ArgY1_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 0);

                  mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_78, parse_tree__split_parse_tree_src__ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__split_parse_tree_src__Var_73 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__split_parse_tree_src__ArgY1_18 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 1);

                  mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_73, parse_tree__split_parse_tree_src__ArgY1_18);
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__split_parse_tree_src__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__split_parse_tree_src__ArgY1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_77, parse_tree__split_parse_tree_src__ArgY1_31);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__split_parse_tree_src__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__split_parse_tree_src__ArgY1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_76, parse_tree__split_parse_tree_src__ArgY1_44);
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__split_parse_tree_src__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word parse_tree__split_parse_tree_src__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__split_parse_tree_src__ArgY1_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__split_parse_tree_src__ArgY2_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word parse_tree__split_parse_tree_src__Var_64;

                          mercury__term____Compare____context_0_0(&parse_tree__split_parse_tree_src__Var_64, parse_tree__split_parse_tree_src__Var_75, parse_tree__split_parse_tree_src__ArgY1_61);
                          parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__Var_64 == (MR_Integer) 0);
                          parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
                          if (parse_tree__split_parse_tree_src__succeeded)
                            *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__Var_64;
                          else
                            mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_74, parse_tree__split_parse_tree_src__ArgY2_63);
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
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_9 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Integer parse_tree__split_parse_tree_src__CastY_10 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_9 == parse_tree__split_parse_tree_src__CastY_10);
    if (parse_tree__split_parse_tree_src__succeeded)
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__split_parse_tree_src__ArgX1_3 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 0);
      MR_Word parse_tree__split_parse_tree_src__ArgY1_4;

      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__ArgY1_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);
        parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX1_3, parse_tree__split_parse_tree_src__ArgY1_4);
      }
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__TypeInfo_12_12;
      MR_Word parse_tree__split_parse_tree_src__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ArgY1_6;
      MR_Word parse_tree__split_parse_tree_src__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__ArgY2_8;

      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
        parse_tree__split_parse_tree_src__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
        parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(parse_tree__split_parse_tree_src__ArgX1_5, parse_tree__split_parse_tree_src__ArgY1_6);
        if (parse_tree__split_parse_tree_src__succeeded)
        {
          parse_tree__split_parse_tree_src__TypeInfo_12_12 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[4];
          parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0(parse_tree__split_parse_tree_src__TypeInfo_12_12, ((MR_Box) (parse_tree__split_parse_tree_src__ArgX2_7)), ((MR_Box) (parse_tree__split_parse_tree_src__ArgY2_8)));
        }
      }
    }
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_15 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Integer parse_tree__split_parse_tree_src__CastY_16 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_15 == parse_tree__split_parse_tree_src__CastY_16);
    if (parse_tree__split_parse_tree_src__succeeded)
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__ArgX1_3 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 0);
            MR_Word parse_tree__split_parse_tree_src__ArgY1_4;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__split_parse_tree_src__succeeded)
            {
              parse_tree__split_parse_tree_src__ArgY1_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);
              parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX1_3, parse_tree__split_parse_tree_src__ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__split_parse_tree_src__ArgX1_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 1);
            MR_Word parse_tree__split_parse_tree_src__ArgY1_6;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__split_parse_tree_src__succeeded)
            {
              parse_tree__split_parse_tree_src__ArgY1_6 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 1);
              parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX1_5, parse_tree__split_parse_tree_src__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__split_parse_tree_src__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__split_parse_tree_src__ArgY1_8;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__split_parse_tree_src__succeeded)
            {
              parse_tree__split_parse_tree_src__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
              parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX1_7, parse_tree__split_parse_tree_src__ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__split_parse_tree_src__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__split_parse_tree_src__ArgY1_10;

                parse_tree__split_parse_tree_src__succeeded = ((((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX1_9, parse_tree__split_parse_tree_src__ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__split_parse_tree_src__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__split_parse_tree_src__ArgY1_12;
                MR_Word parse_tree__split_parse_tree_src__ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__split_parse_tree_src__ArgY2_14;

                parse_tree__split_parse_tree_src__succeeded = ((((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
                  parse_tree__split_parse_tree_src__ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX1_11, parse_tree__split_parse_tree_src__ArgY1_12);
                  if (parse_tree__split_parse_tree_src__succeeded)
                    parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX2_13, parse_tree__split_parse_tree_src__ArgY2_14);
                }
              }
              break;
          }
          break;
      }
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Cast_HeadVar1_4, parse_tree__split_parse_tree_src__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__HeadVar__2_1 == parse_tree__split_parse_tree_src__HeadVar__2_2);

    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = parse_tree__split_parse_tree_src__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_3 = parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_4)));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_9 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__CastY_10 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_9 == parse_tree__split_parse_tree_src__CastY_10);
    if (parse_tree__split_parse_tree_src__succeeded)
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word parse_tree__split_parse_tree_src__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Var_8;

      mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__split_parse_tree_src__Var_8, parse_tree__split_parse_tree_src__ArgX1_4, parse_tree__split_parse_tree_src__ArgY1_5);
      parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__Var_8 == (MR_Integer) 0);
      parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
      if (parse_tree__split_parse_tree_src__succeeded)
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__Var_8;
      else
        parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__ArgX2_6, parse_tree__split_parse_tree_src__ArgY2_7);
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_18 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__CastY_19 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_18 == parse_tree__split_parse_tree_src__CastY_19);
    if (parse_tree__split_parse_tree_src__succeeded)
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__split_parse_tree_src__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__split_parse_tree_src__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word parse_tree__split_parse_tree_src__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

      if ((parse_tree__split_parse_tree_src__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word parse_tree__split_parse_tree_src__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__ArgY2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__ArgY3_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__split_parse_tree_src__Var_16;
        MR_Integer parse_tree__split_parse_tree_src__Var_26 = (MR_Integer) parse_tree__split_parse_tree_src__Var_25;
        MR_Integer parse_tree__split_parse_tree_src__Var_27 = (MR_Integer) parse_tree__split_parse_tree_src__ArgY1_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__split_parse_tree_src__Var_16, parse_tree__split_parse_tree_src__Var_26, parse_tree__split_parse_tree_src__Var_27);
        parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__Var_16 == (MR_Integer) 0);
        parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
        if (parse_tree__split_parse_tree_src__succeeded)
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__Var_16;
        else
        {
          MR_Word parse_tree__split_parse_tree_src__Var_17;

          mercury__term____Compare____context_0_0(&parse_tree__split_parse_tree_src__Var_17, parse_tree__split_parse_tree_src__Var_24, parse_tree__split_parse_tree_src__ArgY2_13);
          parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__Var_17 == (MR_Integer) 0);
          parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
          if (parse_tree__split_parse_tree_src__succeeded)
            *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__Var_17;
          else
            parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Var_23, parse_tree__split_parse_tree_src__ArgY3_15);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_7 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Integer parse_tree__split_parse_tree_src__CastY_8 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_7 == parse_tree__split_parse_tree_src__CastY_8);
    if (parse_tree__split_parse_tree_src__succeeded)
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
    else
    {
      MR_Word parse_tree__split_parse_tree_src__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));

      parse_tree__split_parse_tree_src__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__split_parse_tree_src__ArgX1_3, parse_tree__split_parse_tree_src__ArgY1_4);
      if (parse_tree__split_parse_tree_src__succeeded)
        parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(parse_tree__split_parse_tree_src__ArgX2_5, parse_tree__split_parse_tree_src__ArgY2_6);
    }
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_11 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Integer parse_tree__split_parse_tree_src__CastY_12 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_11 == parse_tree__split_parse_tree_src__CastY_12);
    if (parse_tree__split_parse_tree_src__succeeded)
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
    else
    if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer parse_tree__split_parse_tree_src__CastX_3 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
      MR_Integer parse_tree__split_parse_tree_src__CastY_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

      parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastY_4 == parse_tree__split_parse_tree_src__CastX_3);
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ArgY1_6;
      MR_Word parse_tree__split_parse_tree_src__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__ArgY2_8;
      MR_Word parse_tree__split_parse_tree_src__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__ArgY3_10;

      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
        parse_tree__split_parse_tree_src__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
        parse_tree__split_parse_tree_src__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
        parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__ArgX1_5 == parse_tree__split_parse_tree_src__ArgY1_6);
        if (parse_tree__split_parse_tree_src__succeeded)
        {
          parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__ArgX2_7, parse_tree__split_parse_tree_src__ArgY2_8);
          if (parse_tree__split_parse_tree_src__succeeded)
            parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(parse_tree__split_parse_tree_src__ArgX3_9, parse_tree__split_parse_tree_src__ArgY3_10);
        }
      }
    }
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Cast_HeadVar1_4, parse_tree__split_parse_tree_src__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__HeadVar__2_1 == parse_tree__split_parse_tree_src__HeadVar__2_2);

    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_error_implementation_in_interface_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_5,
  MR_Word parse_tree__split_parse_tree_src__Context_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17)
{
  {
    MR_Word parse_tree__split_parse_tree_src__ParentModule_10;
    MR_String parse_tree__split_parse_tree_src__ChildModule_11;
    MR_Word parse_tree__split_parse_tree_src__Pieces_13;
    MR_Word parse_tree__split_parse_tree_src__Msg_14;
    MR_Word parse_tree__split_parse_tree_src__Spec_15;
    MR_Word parse_tree__split_parse_tree_src__Var_23;
    MR_Word parse_tree__split_parse_tree_src__Var_24;
    MR_Word parse_tree__split_parse_tree_src__Var_25;
    MR_Word parse_tree__split_parse_tree_src__Var_28;
    MR_Word parse_tree__split_parse_tree_src__Var_30;
    MR_Word parse_tree__split_parse_tree_src__Var_33;
    MR_Word parse_tree__split_parse_tree_src__Var_34;
    MR_Word parse_tree__split_parse_tree_src__Var_55;
    MR_Word parse_tree__split_parse_tree_src__Var_56;
    MR_Word parse_tree__split_parse_tree_src__Var_60;

    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__ModuleName_5)) == (MR_mktag((MR_Integer) 1))))
    {
      parse_tree__split_parse_tree_src__ParentModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleName_5, (MR_Integer) 0)));
      parse_tree__split_parse_tree_src__ChildModule_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleName_5, (MR_Integer) 1)));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.report_error_implementation_in_interface\'/4", (MR_String) "unqualified module name");
        return;
      }
    }
    {
      parse_tree__split_parse_tree_src__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModule_10));
    }
    {
      parse_tree__split_parse_tree_src__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ChildModule_11));
    }
    {
      parse_tree__split_parse_tree_src__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_34));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[86])));
    }
    {
      parse_tree__split_parse_tree_src__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[116])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_33));
    }
    {
      parse_tree__split_parse_tree_src__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_28, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_30));
    }
    {
      parse_tree__split_parse_tree_src__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_25, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_28));
    }
    {
      parse_tree__split_parse_tree_src__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_24));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_25));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[115])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_23));
    }
    {
      parse_tree__split_parse_tree_src__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
    }
    {
      parse_tree__split_parse_tree_src__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_55, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_56));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_14, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_6));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_55));
    }
    {
      parse_tree__split_parse_tree_src__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_14));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_15, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_60));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
  MR_Box parse_tree__split_parse_tree_src__closure_arg)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__216__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 4))));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
  MR_Box parse_tree__split_parse_tree_src__closure_arg)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__214__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 4))));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

void MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ParseTreeSrc_5,
  MR_Word * parse_tree__split_parse_tree_src__RawCompUnits_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_34_34 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0;
    MR_Word parse_tree__split_parse_tree_src__TypeInfo_36_36;
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_37_37;
    MR_Word parse_tree__split_parse_tree_src__SplitModuleMap_8;
    MR_Word parse_tree__split_parse_tree_src__SubModulesMap_9;
    MR_Word parse_tree__split_parse_tree_src__TopModuleName_10;
    MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13;
    MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14;
    MR_Word parse_tree__split_parse_tree_src__RawCompUnitCord_15;
    MR_Word parse_tree__split_parse_tree_src__Var_19;
    MR_Word parse_tree__split_parse_tree_src__Var_20;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21;
    MR_Word parse_tree__split_parse_tree_src__Var_22;
    MR_Word parse_tree__split_parse_tree_src__Var_24;
    MR_Word parse_tree__split_parse_tree_src__Var_28;
    MR_Word parse_tree__split_parse_tree_src__Var_29;
    MR_Word parse_tree__split_parse_tree_src__Var_33;
    MR_Word parse_tree__split_parse_tree_src__Var_11;
    MR_Word parse_tree__split_parse_tree_src__Var_12;

    parse_tree__split_parse_tree_src__Var_19 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeCtorInfo_35_35);
    parse_tree__split_parse_tree_src__TypeInfo_36_36 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0];
    parse_tree__split_parse_tree_src__Var_20 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeInfo_36_36);
    parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__split_parse_tree_src__Var_19, &parse_tree__split_parse_tree_src__SplitModuleMap_8, parse_tree__split_parse_tree_src__Var_20, &parse_tree__split_parse_tree_src__SubModulesMap_9, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21);
    parse_tree__split_parse_tree_src__TopModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 0)));
    parse_tree__split_parse_tree_src__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 1)));
    parse_tree__split_parse_tree_src__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 2)));
    parse_tree__split_parse_tree_src__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    parse_tree__split_parse_tree_src__Var_22 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_37_37);
    parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(parse_tree__split_parse_tree_src__TopModuleName_10, parse_tree__split_parse_tree_src__SplitModuleMap_8, &parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13, parse_tree__split_parse_tree_src__SubModulesMap_9, &parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14, parse_tree__split_parse_tree_src__Var_22, &parse_tree__split_parse_tree_src__RawCompUnitCord_15, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17);
    parse_tree__split_parse_tree_src__Var_28 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeCtorInfo_35_35);
    {
      parse_tree__split_parse_tree_src__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_24, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_24, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_24, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_28));
    }
    mercury__require__expect_4_p_0(parse_tree__split_parse_tree_src__Var_24, (MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSplitModuleMap != map.init");
    parse_tree__split_parse_tree_src__Var_33 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeInfo_36_36);
    {
      parse_tree__split_parse_tree_src__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_29, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_29, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_29, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_33));
    }
    mercury__require__expect_4_p_0(parse_tree__split_parse_tree_src__Var_29, (MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSubModulesMap != map.init");
    *parse_tree__split_parse_tree_src__RawCompUnits_6 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_37_37, parse_tree__split_parse_tree_src__RawCompUnitCord_15);
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(
  MR_Word parse_tree__split_parse_tree_src__Component_11,
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_12,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Component_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word parse_tree__split_parse_tree_src__NestedModuleParseTree_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__NestedModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedModuleParseTree_41, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__NestedModuleContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedModuleParseTree_41, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__NestedIncludeItem_45;
      MR_Word parse_tree__split_parse_tree_src__NestedModuleAncestors_46;
      MR_Word parse_tree__split_parse_tree_src__Var_56;
      MR_Word parse_tree__split_parse_tree_src__SectionKind_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__SectionContext_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__RawItemBlock_105;
      MR_Word parse_tree__split_parse_tree_src___NestedModuleComponents_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedModuleParseTree_41, (MR_Integer) 2)));

      {
        parse_tree__split_parse_tree_src__NestedIncludeItem_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedIncludeItem_45, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedModuleName_42));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedIncludeItem_45, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedModuleContext_43));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__NestedIncludeItem_45, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        parse_tree__split_parse_tree_src__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedIncludeItem_45));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__RawItemBlock_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_103));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_104));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_56));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlock_105)));
      {
        parse_tree__split_parse_tree_src__NestedModuleAncestors_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_103));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_104));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionAncestors_12));
      }
      parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(parse_tree__split_parse_tree_src__NestedModuleParseTree_41, parse_tree__split_parse_tree_src__NestedModuleAncestors_46, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54);
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
      MR_Word parse_tree__split_parse_tree_src__SectionKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__SectionContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__IncludesCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__AvailsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 3)));
      MR_Word parse_tree__split_parse_tree_src__ItemsCord_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Component_11, (MR_Integer) 4)));
      MR_Word parse_tree__split_parse_tree_src__Includes_22;
      MR_Word parse_tree__split_parse_tree_src__Avails_23;
      MR_Word parse_tree__split_parse_tree_src__Items_24;
      MR_Word parse_tree__split_parse_tree_src__OKIncludesCord_25;
      MR_Word parse_tree__split_parse_tree_src__OKIncludes_26;
      MR_Word parse_tree__split_parse_tree_src__RawItemBlock_27;
      MR_Word parse_tree__split_parse_tree_src__Var_64;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;

      parse_tree__split_parse_tree_src__Includes_22 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106, parse_tree__split_parse_tree_src__IncludesCord_19);
      parse_tree__split_parse_tree_src__Avails_23 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__split_parse_tree_src__AvailsCord_20);
      parse_tree__split_parse_tree_src__Items_24 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__split_parse_tree_src__ItemsCord_21);
      parse_tree__split_parse_tree_src__Var_64 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106);
      parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(parse_tree__split_parse_tree_src__Includes_22, parse_tree__split_parse_tree_src__SectionAncestors_12, parse_tree__split_parse_tree_src__Var_64, &parse_tree__split_parse_tree_src__OKIncludesCord_25, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67);
      parse_tree__split_parse_tree_src__OKIncludes_26 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106, parse_tree__split_parse_tree_src__OKIncludesCord_25);
      {
        parse_tree__split_parse_tree_src__RawItemBlock_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_17));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_18));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__OKIncludes_26));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__Avails_23));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__Items_24));
      }
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlock_27)));
      switch (parse_tree__split_parse_tree_src__SectionKind_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__split_parse_tree_src__MaybeProblemAncestor_28;

            parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(parse_tree__split_parse_tree_src__SectionAncestors_12, &parse_tree__split_parse_tree_src__MaybeProblemAncestor_28);
            if ((parse_tree__split_parse_tree_src__MaybeProblemAncestor_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;
            else
            {
              MR_Word parse_tree__split_parse_tree_src__ProblemAncestor_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__MaybeProblemAncestor_28, (MR_Integer) 0)));
              MR_Word parse_tree__split_parse_tree_src__CurModuleName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_12, (MR_Integer) 0)));
              MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_12, (MR_Integer) 1)));
              MR_String parse_tree__split_parse_tree_src__PorA_37;
              MR_Word parse_tree__split_parse_tree_src__Pieces_38;
              MR_Word parse_tree__split_parse_tree_src__Msg_39;
              MR_Word parse_tree__split_parse_tree_src__Spec_40;
              MR_Word parse_tree__split_parse_tree_src__Var_74;
              MR_Word parse_tree__split_parse_tree_src__Var_75;
              MR_Word parse_tree__split_parse_tree_src__Var_76;
              MR_Word parse_tree__split_parse_tree_src__Var_79;
              MR_Word parse_tree__split_parse_tree_src__Var_82;
              MR_Word parse_tree__split_parse_tree_src__Var_83;
              MR_Word parse_tree__split_parse_tree_src__Var_84;
              MR_Word parse_tree__split_parse_tree_src__Var_87;
              MR_Word parse_tree__split_parse_tree_src__Var_88;
              MR_Word parse_tree__split_parse_tree_src__Var_95;
              MR_Word parse_tree__split_parse_tree_src__Var_96;
              MR_Word parse_tree__split_parse_tree_src__Var_100;

              if ((parse_tree__split_parse_tree_src__ModuleAncestors_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_component_discover_submodules\'/10", (MR_String) "in interface section of nonexistent ancestor");
                  return;
                }
              }
              else
              {
                MR_Word parse_tree__split_parse_tree_src__ModuleSectionAncestor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 2)));
                MR_Word parse_tree__split_parse_tree_src__ModuleParent_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ModuleSectionAncestor_34, (MR_Integer) 0)));
                MR_Word parse_tree__split_parse_tree_src__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 0)));
                MR_Word parse_tree__split_parse_tree_src__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 1)));
                MR_Word parse_tree__split_parse_tree_src__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ModuleSectionAncestor_34, (MR_Integer) 1)));

                parse_tree__split_parse_tree_src__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__split_parse_tree_src__ModuleParent_35, parse_tree__split_parse_tree_src__ProblemAncestor_29);
                if (parse_tree__split_parse_tree_src__succeeded)
                  parse_tree__split_parse_tree_src__PorA_37 = (MR_String) "parent";
                else
                  parse_tree__split_parse_tree_src__PorA_37 = (MR_String) "ancestor";
              }
              {
                parse_tree__split_parse_tree_src__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_75, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__CurModuleName_30));
              }
              {
                parse_tree__split_parse_tree_src__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_83, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__PorA_37));
              }
              {
                parse_tree__split_parse_tree_src__Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_88, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ProblemAncestor_29));
              }
              {
                parse_tree__split_parse_tree_src__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_87, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_88));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[64])));
              }
              {
                parse_tree__split_parse_tree_src__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_84, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_87));
              }
              {
                parse_tree__split_parse_tree_src__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_82, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_83));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_82, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_84));
              }
              {
                parse_tree__split_parse_tree_src__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[114])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_79, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_82));
              }
              {
                parse_tree__split_parse_tree_src__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[113])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_76, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_79));
              }
              {
                parse_tree__split_parse_tree_src__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_74, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_75));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_74, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_76));
              }
              {
                parse_tree__split_parse_tree_src__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[112])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_74));
              }
              {
                parse_tree__split_parse_tree_src__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_96, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_38));
              }
              {
                parse_tree__split_parse_tree_src__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_95, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_96));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__split_parse_tree_src__Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_18));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_95));
              }
              {
                parse_tree__split_parse_tree_src__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_100, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_39));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__split_parse_tree_src__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_100));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_40));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_4,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_8 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7;
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_6 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5;
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3;
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__Component_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__Components_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42;

      parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(parse_tree__split_parse_tree_src__Component_24, parse_tree__split_parse_tree_src__SectionAncestors_2, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7, &parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42);
      /* direct tailcall eliminated */
      {
        MR_Word parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1 = parse_tree__split_parse_tree_src__Components_25;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SplitModuleMap_0_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SubModulesMap_0_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_RawItemBlockCord_0_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42;

        parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SplitModuleMap_0_3;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SubModulesMap_0_5;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_RawItemBlockCord_0_7;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_9;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word parse_tree__split_parse_tree_src__ParseTree_9,
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_48,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_50,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_51,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_52,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__TypeInfo_240_240;
    MR_Word parse_tree__split_parse_tree_src__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 0)));
    MR_Word parse_tree__split_parse_tree_src__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 1)));
    MR_Word parse_tree__split_parse_tree_src__ModuleComponentsCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 2)));
    MR_Word parse_tree__split_parse_tree_src__ModuleComponents_17;
    MR_Word parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18;
    MR_Word parse_tree__split_parse_tree_src__ItemBlockCord0_19;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_54_54;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55;
    MR_Word parse_tree__split_parse_tree_src__Var_57;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;

    parse_tree__split_parse_tree_src__ModuleComponents_17 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__split_parse_tree_src__ModuleComponentsCord_16);
    parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(parse_tree__split_parse_tree_src__ModuleAncestors_10, parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_50, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_54_54);
    {
      parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleAncestors_10));
    }
    parse_tree__split_parse_tree_src__TypeInfo_240_240 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1];
    parse_tree__split_parse_tree_src__Var_57 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeInfo_240_240);
    parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(parse_tree__split_parse_tree_src__ModuleComponents_17, parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_48, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_54_54, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_51, parse_tree__split_parse_tree_src__Var_57, &parse_tree__split_parse_tree_src__ItemBlockCord0_19, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_52, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58);
    if ((parse_tree__split_parse_tree_src__ModuleAncestors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word parse_tree__split_parse_tree_src__OldEntry_20;
      MR_Box parse_tree__split_parse_tree_src__conv0_OldEntry_20;

      parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv0_OldEntry_20);
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__OldEntry_20 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_OldEntry_20);
        parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
      }
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        MR_Word parse_tree__split_parse_tree_src__OldContext_21;
        MR_Word parse_tree__split_parse_tree_src__Pieces_22;
        MR_Word parse_tree__split_parse_tree_src__OldPieces_23;
        MR_Word parse_tree__split_parse_tree_src__Msg_26;
        MR_Word parse_tree__split_parse_tree_src__OldMsg_27;
        MR_Word parse_tree__split_parse_tree_src__Spec_28;
        MR_Word parse_tree__split_parse_tree_src__Var_126;
        MR_Word parse_tree__split_parse_tree_src__Var_127;
        MR_Word parse_tree__split_parse_tree_src__Var_129;
        MR_Word parse_tree__split_parse_tree_src__Var_130;
        MR_Word parse_tree__split_parse_tree_src__Var_134;
        MR_Word parse_tree__split_parse_tree_src__Var_135;

        if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_20)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word parse_tree__split_parse_tree_src__Var_101;
          MR_Word parse_tree__split_parse_tree_src__Var_102;

          parse_tree__split_parse_tree_src__OldContext_21 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_20), (MR_Integer) 0);
          {
            parse_tree__split_parse_tree_src__Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_102, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
          }
          {
            parse_tree__split_parse_tree_src__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_101, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_102));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[13])));
          }
          {
            parse_tree__split_parse_tree_src__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[111])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_101));
          }
          parse_tree__split_parse_tree_src__OldPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[18]);
        }
        else
        {
          MR_Word parse_tree__split_parse_tree_src__SplitNested_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_20, (MR_Integer) 0)));
          MR_Word parse_tree__split_parse_tree_src__Var_86;
          MR_Word parse_tree__split_parse_tree_src__Var_87;
          MR_Word parse_tree__split_parse_tree_src__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_20, (MR_Integer) 1)));

          parse_tree__split_parse_tree_src__OldContext_21 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__SplitNested_24);
          {
            parse_tree__split_parse_tree_src__Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_87, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
          }
          {
            parse_tree__split_parse_tree_src__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_86, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_87));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[20])));
          }
          {
            parse_tree__split_parse_tree_src__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[111])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_86));
          }
          parse_tree__split_parse_tree_src__OldPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[22]);
        }
        {
          parse_tree__split_parse_tree_src__Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_127, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_22));
        }
        {
          parse_tree__split_parse_tree_src__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_126, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_127));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_26, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_126));
        }
        {
          parse_tree__split_parse_tree_src__Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_130, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldPieces_23));
        }
        {
          parse_tree__split_parse_tree_src__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_129, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_130));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__OldMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_27, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_21));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_27, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_129));
        }
        {
          parse_tree__split_parse_tree_src__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_135, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_27));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_134, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_26));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_134, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_135));
        }
        {
          parse_tree__split_parse_tree_src__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_134));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58));
        }
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55;
      }
      else
      {
        MR_Word parse_tree__split_parse_tree_src__Entry_29;
        MR_Word parse_tree__split_parse_tree_src__Var_138 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__split_parse_tree_src__Context_15);

        {
          parse_tree__split_parse_tree_src__Entry_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_138));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord0_19));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_29)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;
      }
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__SectionAncestors_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_10, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__ParentModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_32, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ItemBlocks_35;
      MR_Word parse_tree__split_parse_tree_src__SeenInt_36;
      MR_Word parse_tree__split_parse_tree_src__SeenImp_37;
      MR_Word parse_tree__split_parse_tree_src__ItemBlockCord_38;
      MR_Word parse_tree__split_parse_tree_src___SectionKind_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_10, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src___SectionContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_10, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_32, (MR_Integer) 1)));

      parse_tree__split_parse_tree_src__ItemBlocks_35 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeInfo_240_240, parse_tree__split_parse_tree_src__ItemBlockCord0_19);
      parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(parse_tree__split_parse_tree_src__ItemBlocks_35, (MR_Integer) 0, &parse_tree__split_parse_tree_src__SeenInt_36, (MR_Integer) 0, &parse_tree__split_parse_tree_src__SeenImp_37);
      parse_tree__split_parse_tree_src__ItemBlockCord_38 = mercury__cord__from_list_1_f_0(parse_tree__split_parse_tree_src__TypeInfo_240_240, parse_tree__split_parse_tree_src__ItemBlocks_35);
      switch (parse_tree__split_parse_tree_src__SeenInt_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (parse_tree__split_parse_tree_src__SeenImp_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_80_80;
                MR_Word parse_tree__split_parse_tree_src__OldEntry_142;
                MR_Box parse_tree__split_parse_tree_src__conv1_OldEntry_142;

                parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_80_80);
                parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv1_OldEntry_142);
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__OldEntry_142 = ((MR_Word) parse_tree__split_parse_tree_src__conv1_OldEntry_142);
                  parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                }
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_142, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_80_80, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55;
                }
                else
                {
                  MR_Word parse_tree__split_parse_tree_src__SplitNested_140 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__split_parse_tree_src__Context_15);
                  MR_Word parse_tree__split_parse_tree_src__Entry_141;

                  {
                    parse_tree__split_parse_tree_src__Entry_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_141, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_140));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_141, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_141)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_80_80;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__split_parse_tree_src__OldEntry_187;
                MR_Box parse_tree__split_parse_tree_src__conv2_OldEntry_187;

                parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv2_OldEntry_187);
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__OldEntry_187 = ((MR_Word) parse_tree__split_parse_tree_src__conv2_OldEntry_187);
                  parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                }
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  MR_Word parse_tree__split_parse_tree_src__IntContext_47;
                  MR_Word parse_tree__split_parse_tree_src__OldItemBlockCord_179;
                  MR_Word parse_tree__split_parse_tree_src__OldSplitNested_163;

                  parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_187)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    parse_tree__split_parse_tree_src__OldSplitNested_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_187, (MR_Integer) 0)));
                    parse_tree__split_parse_tree_src__OldItemBlockCord_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_187, (MR_Integer) 1)));
                    parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_163)) == (MR_mktag((MR_Integer) 2)));
                    if (parse_tree__split_parse_tree_src__succeeded)
                      parse_tree__split_parse_tree_src__IntContext_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__OldSplitNested_163, (MR_Integer) 0)));
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    MR_Word parse_tree__split_parse_tree_src__NewSplitNested_164;
                    MR_Word parse_tree__split_parse_tree_src__NewItemBlockCord_165;
                    MR_Word parse_tree__split_parse_tree_src__NewEntry_166;

                    {
                      parse_tree__split_parse_tree_src__NewSplitNested_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_164, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__IntContext_47));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_164, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                    }
                    parse_tree__split_parse_tree_src__NewItemBlockCord_165 = mercury__cord__f_43_43_2_f_0(parse_tree__split_parse_tree_src__TypeInfo_240_240, parse_tree__split_parse_tree_src__OldItemBlockCord_179, parse_tree__split_parse_tree_src__ItemBlockCord_38);
                    {
                      parse_tree__split_parse_tree_src__NewEntry_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_166, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NewSplitNested_164));
                      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_166, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NewItemBlockCord_165));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_166)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                    *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;
                  }
                  else
                  {
                    MR_Word parse_tree__split_parse_tree_src__EmptyContext_176;
                    MR_Word parse_tree__split_parse_tree_src__OldSplitNested_168;
                    MR_Word parse_tree__split_parse_tree_src___OldItemBlockCord_167;

                    parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_187)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      parse_tree__split_parse_tree_src__OldSplitNested_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_187, (MR_Integer) 0)));
                      parse_tree__split_parse_tree_src___OldItemBlockCord_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_187, (MR_Integer) 1)));
                      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_168)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__split_parse_tree_src__succeeded)
                        parse_tree__split_parse_tree_src__EmptyContext_176 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_168), (MR_Integer) 1);
                    }
                    if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_170;
                      MR_Word parse_tree__split_parse_tree_src__NewEntry_171;

                      parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__Context_15, parse_tree__split_parse_tree_src__EmptyContext_176, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                      {
                        parse_tree__split_parse_tree_src__SplitNested_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_170, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                      }
                      {
                        parse_tree__split_parse_tree_src__NewEntry_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_171, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_170));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_171, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_171)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                    }
                    else
                    {
                      parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 2, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_187, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55;
                    }
                  }
                }
                else
                {
                  MR_Word parse_tree__split_parse_tree_src__SplitNested_185;
                  MR_Word parse_tree__split_parse_tree_src__Entry_186;

                  {
                    parse_tree__split_parse_tree_src__SplitNested_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_185, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                  }
                  {
                    parse_tree__split_parse_tree_src__Entry_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_186, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_185));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_186, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_186)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (parse_tree__split_parse_tree_src__SeenImp_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__split_parse_tree_src__OldEntry_157;
                MR_Box parse_tree__split_parse_tree_src__conv3_OldEntry_157;

                parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv3_OldEntry_157);
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__OldEntry_157 = ((MR_Word) parse_tree__split_parse_tree_src__conv3_OldEntry_157);
                  parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                }
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  MR_Word parse_tree__split_parse_tree_src__OldItemBlockCord_40;
                  MR_Word parse_tree__split_parse_tree_src__ImpContext_41;
                  MR_Word parse_tree__split_parse_tree_src__OldSplitNested_39;

                  parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_157)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    parse_tree__split_parse_tree_src__OldSplitNested_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_157, (MR_Integer) 0)));
                    parse_tree__split_parse_tree_src__OldItemBlockCord_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_157, (MR_Integer) 1)));
                    parse_tree__split_parse_tree_src__succeeded = ((((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__OldSplitNested_39, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (parse_tree__split_parse_tree_src__succeeded)
                      parse_tree__split_parse_tree_src__ImpContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__OldSplitNested_39, (MR_Integer) 1)));
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    MR_Word parse_tree__split_parse_tree_src__NewSplitNested_42;
                    MR_Word parse_tree__split_parse_tree_src__NewItemBlockCord_43;
                    MR_Word parse_tree__split_parse_tree_src__NewEntry_44;

                    {
                      parse_tree__split_parse_tree_src__NewSplitNested_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__ImpContext_41));
                    }
                    parse_tree__split_parse_tree_src__NewItemBlockCord_43 = mercury__cord__f_43_43_2_f_0(parse_tree__split_parse_tree_src__TypeInfo_240_240, parse_tree__split_parse_tree_src__ItemBlockCord_38, parse_tree__split_parse_tree_src__OldItemBlockCord_40);
                    {
                      parse_tree__split_parse_tree_src__NewEntry_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_44, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NewSplitNested_42));
                      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_44, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NewItemBlockCord_43));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_44)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                    *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;
                  }
                  else
                  {
                    MR_Word parse_tree__split_parse_tree_src__EmptyContext_46;
                    MR_Word parse_tree__split_parse_tree_src__OldSplitNested_148;
                    MR_Word parse_tree__split_parse_tree_src___OldItemBlockCord_45;

                    parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_157)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      parse_tree__split_parse_tree_src__OldSplitNested_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_157, (MR_Integer) 0)));
                      parse_tree__split_parse_tree_src___OldItemBlockCord_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_157, (MR_Integer) 1)));
                      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_148)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__split_parse_tree_src__succeeded)
                        parse_tree__split_parse_tree_src__EmptyContext_46 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_148), (MR_Integer) 1);
                    }
                    if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_149;
                      MR_Word parse_tree__split_parse_tree_src__NewEntry_150;

                      parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__Context_15, parse_tree__split_parse_tree_src__EmptyContext_46, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                      {
                        parse_tree__split_parse_tree_src__SplitNested_149 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__SplitNested_149, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                      }
                      {
                        parse_tree__split_parse_tree_src__NewEntry_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_150, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_149));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_150, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_150)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                    }
                    else
                    {
                      parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_157, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55;
                    }
                  }
                }
                else
                {
                  MR_Word parse_tree__split_parse_tree_src__SplitNested_155;
                  MR_Word parse_tree__split_parse_tree_src__Entry_156;

                  {
                    parse_tree__split_parse_tree_src__SplitNested_155 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__SplitNested_155, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                  }
                  {
                    parse_tree__split_parse_tree_src__Entry_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_156, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_155));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_156, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_156)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__split_parse_tree_src__OldEntry_219;
                MR_Box parse_tree__split_parse_tree_src__conv4_OldEntry_219;

                parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv4_OldEntry_219);
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  parse_tree__split_parse_tree_src__OldEntry_219 = ((MR_Word) parse_tree__split_parse_tree_src__conv4_OldEntry_219);
                  parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                }
                if (parse_tree__split_parse_tree_src__succeeded)
                {
                  MR_Word parse_tree__split_parse_tree_src__EmptyContext_216;
                  MR_Word parse_tree__split_parse_tree_src__OldSplitNested_208;
                  MR_Word parse_tree__split_parse_tree_src___OldItemBlockCord_207;

                  parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_219)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    parse_tree__split_parse_tree_src__OldSplitNested_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_219, (MR_Integer) 0)));
                    parse_tree__split_parse_tree_src___OldItemBlockCord_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_219, (MR_Integer) 1)));
                    parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_208)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__split_parse_tree_src__succeeded)
                      parse_tree__split_parse_tree_src__EmptyContext_216 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_208), (MR_Integer) 1);
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    MR_Word parse_tree__split_parse_tree_src__SplitNested_210;
                    MR_Word parse_tree__split_parse_tree_src__NewEntry_211;

                    parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__Context_15, parse_tree__split_parse_tree_src__EmptyContext_216, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                    {
                      parse_tree__split_parse_tree_src__SplitNested_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_210, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_210, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_210, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                    }
                    {
                      parse_tree__split_parse_tree_src__NewEntry_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_211, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_210));
                      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_211, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_211)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                  }
                  else
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 3, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_219, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53);
                    *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55;
                  }
                }
                else
                {
                  MR_Word parse_tree__split_parse_tree_src__SplitNested_217;
                  MR_Word parse_tree__split_parse_tree_src__Entry_218;

                  {
                    parse_tree__split_parse_tree_src__SplitNested_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_217, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_217, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                  }
                  {
                    parse_tree__split_parse_tree_src__Entry_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_218, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_217));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_218, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_218)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_55_55, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_49);
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_53 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_58_58;
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
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_2,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_4,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__split_parse_tree_src__succeeded;

      if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_10 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_8 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_6 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3;
      }
      else
      {
        MR_Word parse_tree__split_parse_tree_src__Include_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__Includes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__InclModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Include_24, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Include_24, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112;
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113;
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114;
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115;
        MR_Integer parse_tree__split_parse_tree_src___SeqNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Include_24, (MR_Integer) 2)));
        MR_Word parse_tree__split_parse_tree_src__OldEntry_34;
        MR_Box parse_tree__split_parse_tree_src__conv0_OldEntry_34;

        parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5, ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31)), &parse_tree__split_parse_tree_src__conv0_OldEntry_34);
        if (parse_tree__split_parse_tree_src__succeeded)
        {
          parse_tree__split_parse_tree_src__OldEntry_34 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_OldEntry_34);
          parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
        }
        if (parse_tree__split_parse_tree_src__succeeded)
        {
          MR_Word parse_tree__split_parse_tree_src__ParentModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_2, (MR_Integer) 0)));
          MR_Word parse_tree__split_parse_tree_src__Pieces1_37;
          MR_Word parse_tree__split_parse_tree_src__OldContext_40;
          MR_Word parse_tree__split_parse_tree_src__Pieces2_41;
          MR_Word parse_tree__split_parse_tree_src__Msg_43;
          MR_Word parse_tree__split_parse_tree_src__OldMsg_44;
          MR_Word parse_tree__split_parse_tree_src__Spec_45;
          MR_Word parse_tree__split_parse_tree_src__Var_57;
          MR_Word parse_tree__split_parse_tree_src__Var_58;
          MR_Word parse_tree__split_parse_tree_src__Var_59;
          MR_Word parse_tree__split_parse_tree_src__Var_62;
          MR_Word parse_tree__split_parse_tree_src__Var_64;
          MR_Word parse_tree__split_parse_tree_src__Var_67;
          MR_Word parse_tree__split_parse_tree_src__Var_68;
          MR_Word parse_tree__split_parse_tree_src__Var_100;
          MR_Word parse_tree__split_parse_tree_src__Var_101;
          MR_Word parse_tree__split_parse_tree_src__Var_102;
          MR_Word parse_tree__split_parse_tree_src__Var_109;
          MR_Word parse_tree__split_parse_tree_src__Var_110;
          MR_Word parse_tree__split_parse_tree_src__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_2, (MR_Integer) 1)));

          {
            parse_tree__split_parse_tree_src__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_58, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_35));
          }
          {
            parse_tree__split_parse_tree_src__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_68, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31));
          }
          {
            parse_tree__split_parse_tree_src__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_67, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_68));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[67])));
          }
          {
            parse_tree__split_parse_tree_src__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[107])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_64, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_67));
          }
          {
            parse_tree__split_parse_tree_src__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_62, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_64));
          }
          {
            parse_tree__split_parse_tree_src__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_59, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_62));
          }
          {
            parse_tree__split_parse_tree_src__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_57, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_58));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_57, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_59));
          }
          {
            parse_tree__split_parse_tree_src__Pieces1_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_37, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_57));
          }
          if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_34)) == (MR_mktag((MR_Integer) 0))))
          {
            parse_tree__split_parse_tree_src__OldContext_40 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_34), (MR_Integer) 0);
            parse_tree__split_parse_tree_src__Pieces2_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[71]);
          }
          else
          {
            MR_Word parse_tree__split_parse_tree_src__OldSplitNested_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_34, (MR_Integer) 0)));
            MR_Word parse_tree__split_parse_tree_src__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_34, (MR_Integer) 1)));

            parse_tree__split_parse_tree_src__OldContext_40 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__OldSplitNested_38);
            parse_tree__split_parse_tree_src__Pieces2_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[75]);
          }
          parse_tree__split_parse_tree_src__Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__split_parse_tree_src__Pieces1_37, parse_tree__split_parse_tree_src__Pieces2_41);
          {
            parse_tree__split_parse_tree_src__Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_101, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_102));
          }
          {
            parse_tree__split_parse_tree_src__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_100, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_101));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__split_parse_tree_src__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_43, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_32));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_43, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_100));
          }
          {
            parse_tree__split_parse_tree_src__OldMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_44, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_40));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[108])));
          }
          {
            parse_tree__split_parse_tree_src__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_110, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_44));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__split_parse_tree_src__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_109, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_43));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_109, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_110));
          }
          {
            parse_tree__split_parse_tree_src__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_109));
          }
          {
            parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_45));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9));
          }
          parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3;
        }
        else
        {
          MR_Word parse_tree__split_parse_tree_src__Entry_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__split_parse_tree_src__Context_32);

          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_46)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113);
          parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(parse_tree__split_parse_tree_src__SectionAncestors_2, parse_tree__split_parse_tree_src__InclModuleName_31, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114);
          parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3, ((MR_Box) (parse_tree__split_parse_tree_src__Include_24)));
          parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
        }
        /* direct tailcall eliminated */
        {
          MR_Word parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1 = parse_tree__split_parse_tree_src__Includes_25;
          MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_OKIncludesCord_0_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115;
          MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SplitModuleMap_0_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113;
          MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SubModulesMap_0_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114;
          MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112;

          parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_OKIncludesCord_0_3;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SplitModuleMap_0_5;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SubModulesMap_0_7;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_9;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_5,
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_5, (MR_Integer) 0)));
    MR_Word parse_tree__split_parse_tree_src__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_5, (MR_Integer) 1)));
    MR_Word parse_tree__split_parse_tree_src__SiblingModules0_10;
    MR_Box parse_tree__split_parse_tree_src__conv0_SiblingModules0_10;

    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), &parse_tree__split_parse_tree_src__conv0_SiblingModules0_10);
    if (parse_tree__split_parse_tree_src__succeeded)
    {
      parse_tree__split_parse_tree_src__SiblingModules0_10 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_SiblingModules0_10);
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
    }
    if (parse_tree__split_parse_tree_src__succeeded)
    {
      MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      MR_Word parse_tree__split_parse_tree_src__SiblingModules_11;

      parse_tree__split_parse_tree_src__SiblingModules_11 = mercury__cord__snoc_2_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_19, parse_tree__split_parse_tree_src__SiblingModules0_10, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
      mercury__map__det_update_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_19, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_11)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      MR_Word parse_tree__split_parse_tree_src__SiblingModules_16;

      parse_tree__split_parse_tree_src__SiblingModules_16 = mercury__cord__singleton_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_21, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
      mercury__map__det_insert_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_21, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_16)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_3,
  MR_Word * parse_tree__split_parse_tree_src__MaybeProblemAncestor_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_3, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_3, (MR_Integer) 0)));

      if ((parse_tree__split_parse_tree_src__ModuleAncestors_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__split_parse_tree_src__MaybeProblemAncestor_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__split_parse_tree_src__SectionKind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_6, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__SectionParentAncestors_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_6, (MR_Integer) 2)));
        MR_Word parse_tree__split_parse_tree_src___SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_6, (MR_Integer) 1)));

        switch (parse_tree__split_parse_tree_src__SectionKind_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__split_parse_tree_src__next_value_of_SectionAncestors_3 = parse_tree__split_parse_tree_src__SectionParentAncestors_9;

                parse_tree__split_parse_tree_src__SectionAncestors_3 = parse_tree__split_parse_tree_src__next_value_of_SectionAncestors_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__split_parse_tree_src__ProblemAncestor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionParentAncestors_9, (MR_Integer) 0)));
              MR_Word parse_tree__split_parse_tree_src__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionParentAncestors_9, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__split_parse_tree_src__MaybeProblemAncestor_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ProblemAncestor_10));
              }
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4;
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2;
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__SectionKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26;
      MR_Word parse_tree__split_parse_tree_src__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 3)));
      MR_Word parse_tree__split_parse_tree_src__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 4)));

      switch (parse_tree__split_parse_tree_src__SectionKind_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25 = (MR_Integer) 1;
            parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2;
          }
          break;
        case (MR_Integer) 0:
          {
            parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26 = (MR_Integer) 1;
            parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4;
          }
          break;
      }
      /* direct tailcall eliminated */
      {
        MR_Word parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1 = parse_tree__split_parse_tree_src__ItemBlocks_13;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SeenInt_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SeenImp_0_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25;

        parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SeenInt_0_2;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_SeenImp_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__Context_9,
  MR_Word parse_tree__split_parse_tree_src__DupSection_10,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_11,
  MR_Word parse_tree__split_parse_tree_src__OldEntry_12,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Spec_19;

    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_12)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word parse_tree__split_parse_tree_src__OldContext_14 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_12), (MR_Integer) 0);
      MR_Word parse_tree__split_parse_tree_src__Pieces_15;
      MR_Word parse_tree__split_parse_tree_src__Msg_17;
      MR_Word parse_tree__split_parse_tree_src__OldMsg_18;
      MR_Word parse_tree__split_parse_tree_src__Var_74;
      MR_Word parse_tree__split_parse_tree_src__Var_75;
      MR_Word parse_tree__split_parse_tree_src__Var_76;
      MR_Word parse_tree__split_parse_tree_src__Var_79;
      MR_Word parse_tree__split_parse_tree_src__Var_81;
      MR_Word parse_tree__split_parse_tree_src__Var_84;
      MR_Word parse_tree__split_parse_tree_src__Var_85;
      MR_Word parse_tree__split_parse_tree_src__Var_106;
      MR_Word parse_tree__split_parse_tree_src__Var_107;
      MR_Word parse_tree__split_parse_tree_src__Var_114;
      MR_Word parse_tree__split_parse_tree_src__Var_115;

      {
        parse_tree__split_parse_tree_src__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_75, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_11));
      }
      {
        parse_tree__split_parse_tree_src__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_85, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_8));
      }
      {
        parse_tree__split_parse_tree_src__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_84, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_85));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[34])));
      }
      {
        parse_tree__split_parse_tree_src__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[107])));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_81, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_84));
      }
      {
        parse_tree__split_parse_tree_src__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_79, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_81));
      }
      {
        parse_tree__split_parse_tree_src__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_76, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_79));
      }
      {
        parse_tree__split_parse_tree_src__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_74, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_75));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_74, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_76));
      }
      {
        parse_tree__split_parse_tree_src__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_74));
      }
      {
        parse_tree__split_parse_tree_src__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_107, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_15));
      }
      {
        parse_tree__split_parse_tree_src__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_106, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_107));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_17, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_17, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_106));
      }
      {
        parse_tree__split_parse_tree_src__OldMsg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_18, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_14));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[108])));
      }
      {
        parse_tree__split_parse_tree_src__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_115, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_18));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_114, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_17));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_114, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_115));
      }
      {
        parse_tree__split_parse_tree_src__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_114));
      }
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__SplitNested_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_12, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_12, (MR_Integer) 1)));

      switch (parse_tree__split_parse_tree_src__DupSection_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__Var_35;
            MR_Word parse_tree__split_parse_tree_src__Var_36;
            MR_Word parse_tree__split_parse_tree_src__Var_37;
            MR_Word parse_tree__split_parse_tree_src__Var_40;
            MR_Word parse_tree__split_parse_tree_src__Var_42;
            MR_Word parse_tree__split_parse_tree_src__Var_45;
            MR_Word parse_tree__split_parse_tree_src__Var_46;
            MR_Word parse_tree__split_parse_tree_src__Var_61;
            MR_Word parse_tree__split_parse_tree_src__Var_62;
            MR_Word parse_tree__split_parse_tree_src__Var_69;
            MR_Word parse_tree__split_parse_tree_src__Var_70;
            MR_Word parse_tree__split_parse_tree_src__OldContext_118;
            MR_Word parse_tree__split_parse_tree_src__Pieces_119;
            MR_Word parse_tree__split_parse_tree_src__Msg_121;
            MR_Word parse_tree__split_parse_tree_src__OldMsg_122;

            parse_tree__split_parse_tree_src__OldContext_118 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__SplitNested_20);
            {
              parse_tree__split_parse_tree_src__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_36, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_11));
            }
            {
              parse_tree__split_parse_tree_src__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_46, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_8));
            }
            {
              parse_tree__split_parse_tree_src__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_45, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_46));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[42])));
            }
            {
              parse_tree__split_parse_tree_src__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[109])));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_42, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_45));
            }
            {
              parse_tree__split_parse_tree_src__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_42));
            }
            {
              parse_tree__split_parse_tree_src__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_37, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_40));
            }
            {
              parse_tree__split_parse_tree_src__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_35, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_36));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_35, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_37));
            }
            {
              parse_tree__split_parse_tree_src__Pieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_119, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_35));
            }
            {
              parse_tree__split_parse_tree_src__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_62, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_119));
            }
            {
              parse_tree__split_parse_tree_src__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_62));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__split_parse_tree_src__Msg_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_121, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_121, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_61));
            }
            {
              parse_tree__split_parse_tree_src__OldMsg_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_122, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_118));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[110])));
            }
            {
              parse_tree__split_parse_tree_src__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_70, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_122));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__split_parse_tree_src__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_69, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_121));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_69, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_70));
            }
            {
              parse_tree__split_parse_tree_src__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_69));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
          }
          break;
        case (MR_Integer) 3:
          switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, parse_tree__split_parse_tree_src__ParentModuleName_11, &parse_tree__split_parse_tree_src__Spec_19);
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
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__split_parse_tree_src__IntContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 1)));
                    MR_Word parse_tree__split_parse_tree_src__ImpContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 2)));

                    parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__IntContext_23, parse_tree__split_parse_tree_src__ImpContext_24, &parse_tree__split_parse_tree_src__Spec_19);
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
          }
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_9,
  MR_Word parse_tree__split_parse_tree_src__OldIntContext_10,
  MR_Word parse_tree__split_parse_tree_src__OldImpContext_11,
  MR_Word * parse_tree__split_parse_tree_src__Spec_12)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Pieces_13;
    MR_Word parse_tree__split_parse_tree_src__Var_23;
    MR_Word parse_tree__split_parse_tree_src__Var_24;
    MR_Word parse_tree__split_parse_tree_src__Var_25;
    MR_Word parse_tree__split_parse_tree_src__Var_28;
    MR_Word parse_tree__split_parse_tree_src__Var_30;
    MR_Word parse_tree__split_parse_tree_src__Var_33;
    MR_Word parse_tree__split_parse_tree_src__Var_34;

    {
      parse_tree__split_parse_tree_src__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_9));
    }
    {
      parse_tree__split_parse_tree_src__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_34));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[52])));
    }
    {
      parse_tree__split_parse_tree_src__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_33));
    }
    {
      parse_tree__split_parse_tree_src__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_28, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_30));
    }
    {
      parse_tree__split_parse_tree_src__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_25, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_28));
    }
    {
      parse_tree__split_parse_tree_src__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_24));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_25));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_23));
    }
    parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__OldIntContext_10, parse_tree__split_parse_tree_src__OldImpContext_11);
    if (parse_tree__split_parse_tree_src__succeeded)
    {
      MR_Word parse_tree__split_parse_tree_src__Msg_15;
      MR_Word parse_tree__split_parse_tree_src__OldMsg_16;
      MR_Word parse_tree__split_parse_tree_src__Var_52;
      MR_Word parse_tree__split_parse_tree_src__Var_53;
      MR_Word parse_tree__split_parse_tree_src__Var_60;
      MR_Word parse_tree__split_parse_tree_src__Var_61;

      {
        parse_tree__split_parse_tree_src__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
      }
      {
        parse_tree__split_parse_tree_src__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_52, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_53));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_52));
      }
      {
        parse_tree__split_parse_tree_src__OldMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntContext_10));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[104])));
      }
      {
        parse_tree__split_parse_tree_src__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_16));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_15));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_60, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_61));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__split_parse_tree_src__Spec_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_60));
      }
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__OldIntMsg_19;
      MR_Word parse_tree__split_parse_tree_src__OldImpMsg_20;
      MR_Word parse_tree__split_parse_tree_src__Var_79;
      MR_Word parse_tree__split_parse_tree_src__Var_80;
      MR_Word parse_tree__split_parse_tree_src__Var_90;
      MR_Word parse_tree__split_parse_tree_src__Var_91;
      MR_Word parse_tree__split_parse_tree_src__Var_92;
      MR_Word parse_tree__split_parse_tree_src__Msg_94;

      {
        parse_tree__split_parse_tree_src__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_80, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
      }
      {
        parse_tree__split_parse_tree_src__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_79, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_80));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__Msg_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_94, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_94, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_79));
      }
      {
        parse_tree__split_parse_tree_src__OldIntMsg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldIntMsg_19, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntContext_10));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldIntMsg_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[105])));
      }
      {
        parse_tree__split_parse_tree_src__OldImpMsg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldImpMsg_20, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldImpContext_11));
        MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldImpMsg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[106])));
      }
      {
        parse_tree__split_parse_tree_src__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_92, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldImpMsg_20));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__split_parse_tree_src__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_91, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntMsg_19));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_91, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_92));
      }
      {
        parse_tree__split_parse_tree_src__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_90, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_94));
        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_90, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_91));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__split_parse_tree_src__Spec_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_90));
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_5,
  MR_Word parse_tree__split_parse_tree_src__Context_6,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_7,
  MR_Word * parse_tree__split_parse_tree_src__Spec_8)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Pieces_9;
    MR_Word parse_tree__split_parse_tree_src__Msg_10;
    MR_Word parse_tree__split_parse_tree_src__Var_13;
    MR_Word parse_tree__split_parse_tree_src__Var_14;
    MR_Word parse_tree__split_parse_tree_src__Var_15;
    MR_Word parse_tree__split_parse_tree_src__Var_18;
    MR_Word parse_tree__split_parse_tree_src__Var_20;
    MR_Word parse_tree__split_parse_tree_src__Var_23;
    MR_Word parse_tree__split_parse_tree_src__Var_24;
    MR_Word parse_tree__split_parse_tree_src__Var_31;
    MR_Word parse_tree__split_parse_tree_src__Var_32;
    MR_Word parse_tree__split_parse_tree_src__Var_36;

    {
      parse_tree__split_parse_tree_src__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_5));
    }
    {
      parse_tree__split_parse_tree_src__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_24));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[46])));
    }
    {
      parse_tree__split_parse_tree_src__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_20, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_23));
    }
    {
      parse_tree__split_parse_tree_src__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_20));
    }
    {
      parse_tree__split_parse_tree_src__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_18));
    }
    {
      parse_tree__split_parse_tree_src__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_13, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_14));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_15));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_9, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_13));
    }
    {
      parse_tree__split_parse_tree_src__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_32, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_9));
    }
    {
      parse_tree__split_parse_tree_src__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_31, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_32));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_10, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_6));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_10, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_31));
    }
    {
      parse_tree__split_parse_tree_src__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_36, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_10));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__split_parse_tree_src__Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_36));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_Word parse_tree__split_parse_tree_src__Section_9,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__SplitNested_11,
  MR_Word * parse_tree__split_parse_tree_src__Spec_12)
{
  switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word parse_tree__split_parse_tree_src__Pieces_38;
        MR_Word parse_tree__split_parse_tree_src__Msg_39;
        MR_Word parse_tree__split_parse_tree_src__Var_42;
        MR_Word parse_tree__split_parse_tree_src__Var_43;
        MR_Word parse_tree__split_parse_tree_src__Var_44;
        MR_Word parse_tree__split_parse_tree_src__Var_47;
        MR_Word parse_tree__split_parse_tree_src__Var_49;
        MR_Word parse_tree__split_parse_tree_src__Var_52;
        MR_Word parse_tree__split_parse_tree_src__Var_53;
        MR_Word parse_tree__split_parse_tree_src__Var_60;
        MR_Word parse_tree__split_parse_tree_src__Var_61;
        MR_Word parse_tree__split_parse_tree_src__Var_65;

        {
          parse_tree__split_parse_tree_src__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_43, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_10));
        }
        {
          parse_tree__split_parse_tree_src__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_53, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
        }
        {
          parse_tree__split_parse_tree_src__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_52, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_53));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[46])));
        }
        {
          parse_tree__split_parse_tree_src__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_49, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_52));
        }
        {
          parse_tree__split_parse_tree_src__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_47, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_49));
        }
        {
          parse_tree__split_parse_tree_src__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_44, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_47));
        }
        {
          parse_tree__split_parse_tree_src__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_42, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_43));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_42, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_44));
        }
        {
          parse_tree__split_parse_tree_src__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_42));
        }
        {
          parse_tree__split_parse_tree_src__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_38));
        }
        {
          parse_tree__split_parse_tree_src__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_61));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_60));
        }
        {
          parse_tree__split_parse_tree_src__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_65, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_39));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__split_parse_tree_src__Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_65));
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
        MR_Word parse_tree__split_parse_tree_src__IntContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 0)));
        MR_String parse_tree__split_parse_tree_src__SectionWord_15;
        MR_Word parse_tree__split_parse_tree_src__OldContext_16;

        switch (parse_tree__split_parse_tree_src__Section_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate int without duplication");
                return;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              parse_tree__split_parse_tree_src__SectionWord_15 = (MR_String) "interface";
              parse_tree__split_parse_tree_src__OldContext_16 = parse_tree__split_parse_tree_src__IntContext_14;
            }
            break;
        }
        parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_15, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_16, parse_tree__split_parse_tree_src__Spec_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__ImpContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 1)));
            MR_String parse_tree__split_parse_tree_src__SectionWord_28;
            MR_Word parse_tree__split_parse_tree_src__OldContext_29;

            switch (parse_tree__split_parse_tree_src__Section_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  parse_tree__split_parse_tree_src__SectionWord_28 = (MR_String) "implementation";
                  parse_tree__split_parse_tree_src__OldContext_29 = parse_tree__split_parse_tree_src__ImpContext_17;
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.report_duplicate_submodule_one_section\'/6", (MR_String) "duplicate imp without duplication");
                    return;
                  }
                }
                break;
            }
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_28, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_29, parse_tree__split_parse_tree_src__Spec_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__split_parse_tree_src__IntContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 1)));
            MR_String parse_tree__split_parse_tree_src__SectionWord_31;
            MR_Word parse_tree__split_parse_tree_src__OldContext_32;
            MR_Word parse_tree__split_parse_tree_src__ImpContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 2)));

            switch (parse_tree__split_parse_tree_src__Section_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  parse_tree__split_parse_tree_src__SectionWord_31 = (MR_String) "implementation";
                  parse_tree__split_parse_tree_src__OldContext_32 = parse_tree__split_parse_tree_src__ImpContext_33;
                }
                break;
              case (MR_Integer) 0:
                {
                  parse_tree__split_parse_tree_src__SectionWord_31 = (MR_String) "interface";
                  parse_tree__split_parse_tree_src__OldContext_32 = parse_tree__split_parse_tree_src__IntContext_30;
                }
                break;
            }
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_31, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_32, parse_tree__split_parse_tree_src__Spec_12);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_String parse_tree__split_parse_tree_src__SectionWord_9,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__OldContext_11,
  MR_Word * parse_tree__split_parse_tree_src__Spec_12)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Pieces_13;
    MR_Word parse_tree__split_parse_tree_src__OldPieces_14;
    MR_Word parse_tree__split_parse_tree_src__Msg_15;
    MR_Word parse_tree__split_parse_tree_src__OldMsg_16;
    MR_Word parse_tree__split_parse_tree_src__Var_19;
    MR_Word parse_tree__split_parse_tree_src__Var_20;
    MR_Word parse_tree__split_parse_tree_src__Var_21;
    MR_Word parse_tree__split_parse_tree_src__Var_24;
    MR_Word parse_tree__split_parse_tree_src__Var_26;
    MR_Word parse_tree__split_parse_tree_src__Var_29;
    MR_Word parse_tree__split_parse_tree_src__Var_30;
    MR_Word parse_tree__split_parse_tree_src__Var_31;
    MR_Word parse_tree__split_parse_tree_src__Var_34;
    MR_Word parse_tree__split_parse_tree_src__Var_35;
    MR_Word parse_tree__split_parse_tree_src__Var_42;
    MR_Word parse_tree__split_parse_tree_src__Var_50;
    MR_Word parse_tree__split_parse_tree_src__Var_51;
    MR_Word parse_tree__split_parse_tree_src__Var_53;
    MR_Word parse_tree__split_parse_tree_src__Var_54;
    MR_Word parse_tree__split_parse_tree_src__Var_58;
    MR_Word parse_tree__split_parse_tree_src__Var_59;

    {
      parse_tree__split_parse_tree_src__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_20, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_10));
    }
    {
      parse_tree__split_parse_tree_src__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__Var_35, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionWord_9));
    }
    {
      parse_tree__split_parse_tree_src__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_34, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_35));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[102])));
    }
    {
      parse_tree__split_parse_tree_src__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[100])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_31, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_34));
    }
    {
      parse_tree__split_parse_tree_src__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_30));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_31));
    }
    {
      parse_tree__split_parse_tree_src__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[99])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_29));
    }
    {
      parse_tree__split_parse_tree_src__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_26));
    }
    {
      parse_tree__split_parse_tree_src__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_21, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_24));
    }
    {
      parse_tree__split_parse_tree_src__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_19, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_20));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_19, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_21));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_19));
    }
    {
      parse_tree__split_parse_tree_src__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_42, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_35));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[48])));
    }
    {
      parse_tree__split_parse_tree_src__OldPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[103])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldPieces_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_42));
    }
    {
      parse_tree__split_parse_tree_src__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_51, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
    }
    {
      parse_tree__split_parse_tree_src__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_50, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_51));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_50));
    }
    {
      parse_tree__split_parse_tree_src__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_54, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldPieces_14));
    }
    {
      parse_tree__split_parse_tree_src__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_54));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__OldMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_11));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_53));
    }
    {
      parse_tree__split_parse_tree_src__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_59, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_16));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_58, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_15));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_58, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__split_parse_tree_src__Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_58));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_duplicate_of_empty_submodule_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__Context_9,
  MR_Word parse_tree__split_parse_tree_src__EmptyContext_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_17,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_18)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Pieces1_12;
    MR_Word parse_tree__split_parse_tree_src__Msg1_13;
    MR_Word parse_tree__split_parse_tree_src__Msg2_15;
    MR_Word parse_tree__split_parse_tree_src__Spec_16;
    MR_Word parse_tree__split_parse_tree_src__Var_21;
    MR_Word parse_tree__split_parse_tree_src__Var_22;
    MR_Word parse_tree__split_parse_tree_src__Var_23;
    MR_Word parse_tree__split_parse_tree_src__Var_26;
    MR_Word parse_tree__split_parse_tree_src__Var_29;
    MR_Word parse_tree__split_parse_tree_src__Var_30;
    MR_Word parse_tree__split_parse_tree_src__Var_37;
    MR_Word parse_tree__split_parse_tree_src__Var_38;
    MR_Word parse_tree__split_parse_tree_src__Var_50;
    MR_Word parse_tree__split_parse_tree_src__Var_51;

    {
      parse_tree__split_parse_tree_src__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8));
    }
    {
      parse_tree__split_parse_tree_src__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_30));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[26])));
    }
    {
      parse_tree__split_parse_tree_src__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_29));
    }
    {
      parse_tree__split_parse_tree_src__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_26));
    }
    {
      parse_tree__split_parse_tree_src__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_21, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_22));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_21, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_23));
    }
    {
      parse_tree__split_parse_tree_src__Pieces1_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_12, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_21));
    }
    {
      parse_tree__split_parse_tree_src__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces1_12));
    }
    {
      parse_tree__split_parse_tree_src__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_37, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_38));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg1_13, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg1_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_37));
    }
    {
      parse_tree__split_parse_tree_src__Msg2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg2_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__EmptyContext_10));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg2_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[96])));
    }
    {
      parse_tree__split_parse_tree_src__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_51, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg2_15));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_50, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg1_13));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_50, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_51));
    }
    {
      parse_tree__split_parse_tree_src__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_16, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__Context_7,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Pieces_10;
    MR_Word parse_tree__split_parse_tree_src__Msg_11;
    MR_Word parse_tree__split_parse_tree_src__Spec_12;
    MR_Word parse_tree__split_parse_tree_src__Var_17;
    MR_Word parse_tree__split_parse_tree_src__Var_18;
    MR_Word parse_tree__split_parse_tree_src__Var_19;
    MR_Word parse_tree__split_parse_tree_src__Var_22;
    MR_Word parse_tree__split_parse_tree_src__Var_25;
    MR_Word parse_tree__split_parse_tree_src__Var_26;
    MR_Word parse_tree__split_parse_tree_src__Var_33;
    MR_Word parse_tree__split_parse_tree_src__Var_34;
    MR_Word parse_tree__split_parse_tree_src__Var_38;

    {
      parse_tree__split_parse_tree_src__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6));
    }
    {
      parse_tree__split_parse_tree_src__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8));
    }
    {
      parse_tree__split_parse_tree_src__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_25, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_26));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[24])));
    }
    {
      parse_tree__split_parse_tree_src__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_25));
    }
    {
      parse_tree__split_parse_tree_src__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_19, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_22));
    }
    {
      parse_tree__split_parse_tree_src__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_17, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_18));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_17, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_19));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_10, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_17));
    }
    {
      parse_tree__split_parse_tree_src__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_34, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_10));
    }
    {
      parse_tree__split_parse_tree_src__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_34));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_11, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_7));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_11, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_33));
    }
    {
      parse_tree__split_parse_tree_src__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_11));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_5,
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    if ((parse_tree__split_parse_tree_src__ModuleAncestors_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11;
    else
    {
      MR_Word parse_tree__split_parse_tree_src__SectionAncestors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_5, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src__ParentModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_10, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src___SectionKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_5, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src___SectionContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_5, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_10, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__SiblingModules0_21;
      MR_Box parse_tree__split_parse_tree_src__conv0_SiblingModules0_21;

      parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), &parse_tree__split_parse_tree_src__conv0_SiblingModules0_21);
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__SiblingModules0_21 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_SiblingModules0_21);
        parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
      }
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_19_28 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word parse_tree__split_parse_tree_src__SiblingModules_22;

        parse_tree__split_parse_tree_src__SiblingModules_22 = mercury__cord__snoc_2_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_28, parse_tree__split_parse_tree_src__SiblingModules0_21, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
        mercury__map__det_update_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_28, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_22)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);
      }
      else
      {
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_21_30 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word parse_tree__split_parse_tree_src__SiblingModules_25;

        parse_tree__split_parse_tree_src__SiblingModules_25 = mercury__cord__singleton_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_30, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
        mercury__map__det_insert_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_30, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_25)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word parse_tree__split_parse_tree_src__SplitNested_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__Context_4;

    switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__split_parse_tree_src__Context_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3), (MR_Integer) 0);
        break;
      case (MR_Integer) 1:
        parse_tree__split_parse_tree_src__Context_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3), (MR_Integer) 1);
        break;
      case (MR_Integer) 2:
        parse_tree__split_parse_tree_src__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 0)));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__split_parse_tree_src__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 1)));
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__split_parse_tree_src__Var_5;

              parse_tree__split_parse_tree_src__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 1)));
              parse_tree__split_parse_tree_src__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 2)));
            }
            break;
        }
        break;
    }
    return parse_tree__split_parse_tree_src__Context_4;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0_1(
  MR_Box parse_tree__split_parse_tree_src__closure_arg,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_3,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_4,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_5,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_6,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_7,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_8,
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_9)
{
  {
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;
    MR_Word parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_30;
    MR_Word parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_32;
    MR_Word parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_34;
    MR_Word parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_36;

    parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), &parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_30, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_4), &parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_32, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_6), &parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_34, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_8), &parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_36);
    *parse_tree__split_parse_tree_src__wrapper_arg_3 = ((MR_Box) (parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_30));
    *parse_tree__split_parse_tree_src__wrapper_arg_5 = ((MR_Box) (parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_32));
    *parse_tree__split_parse_tree_src__wrapper_arg_7 = ((MR_Box) (parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_34));
    *parse_tree__split_parse_tree_src__wrapper_arg_9 = ((MR_Box) (parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_36));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_29,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_30,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_31,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_32,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_34,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_36)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_67_67 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__split_parse_tree_src__Entry_15;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_37_37;
    MR_Box parse_tree__split_parse_tree_src__conv0_Entry_15;

    mercury__map__det_remove_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_67_67, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), &parse_tree__split_parse_tree_src__conv0_Entry_15, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_29, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_37_37);
    parse_tree__split_parse_tree_src__Entry_15 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_Entry_15);
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Entry_15)) == (MR_mktag((MR_Integer) 0))))
    {
      mercury__map__delete_3_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_67_67, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_31, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_32);
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_30 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_37_37;
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_34 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33;
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_36 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word parse_tree__split_parse_tree_src__NestedInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_15, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__RawItemBlockCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_15, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57;
      MR_Word parse_tree__split_parse_tree_src__SubModulesCord_27;
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_58_58;
      MR_Box parse_tree__split_parse_tree_src__conv1_SubModulesCord_27;

      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__Context_91 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 0);
            MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_92;
            MR_Word parse_tree__split_parse_tree_src__RawCompUnit_93;

            parse_tree__split_parse_tree_src__RawItemBlocks_92 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
            parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_92, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56);
            {
              parse_tree__split_parse_tree_src__RawCompUnit_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_93, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_93, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_91));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_93, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_92));
            }
            parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_93)));
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33;
            parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__split_parse_tree_src__Context_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 0)));
            MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_87;
            MR_Word parse_tree__split_parse_tree_src__RawCompUnit_88;

            parse_tree__split_parse_tree_src__RawItemBlocks_87 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
            parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_87, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56);
            {
              parse_tree__split_parse_tree_src__RawCompUnit_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_88, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_88, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_86));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_88, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_87));
            }
            parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_88)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__split_parse_tree_src__Pieces_24;
                MR_Word parse_tree__split_parse_tree_src__Msg_25;
                MR_Word parse_tree__split_parse_tree_src__Spec_26;
                MR_Word parse_tree__split_parse_tree_src__Var_40;
                MR_Word parse_tree__split_parse_tree_src__Var_41;
                MR_Word parse_tree__split_parse_tree_src__Var_48;
                MR_Word parse_tree__split_parse_tree_src__Var_49;
                MR_Word parse_tree__split_parse_tree_src__Var_53;
                MR_Word parse_tree__split_parse_tree_src__Context_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 1)));

                {
                  parse_tree__split_parse_tree_src__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Var_41, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
                }
                {
                  parse_tree__split_parse_tree_src__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_40, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_41));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])));
                }
                {
                  parse_tree__split_parse_tree_src__Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[92])));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_40));
                }
                {
                  parse_tree__split_parse_tree_src__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Var_49, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_24));
                }
                {
                  parse_tree__split_parse_tree_src__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_48, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_49));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__split_parse_tree_src__Msg_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_25, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_66));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_25, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_48));
                }
                {
                  parse_tree__split_parse_tree_src__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_25));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__split_parse_tree_src__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_26, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_53));
                }
                {
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_26));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35));
                }
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__split_parse_tree_src__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 1)));
                MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_21;
                MR_Word parse_tree__split_parse_tree_src__RawCompUnit_22;
                MR_Word parse_tree__split_parse_tree_src__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 2)));

                parse_tree__split_parse_tree_src__RawItemBlocks_21 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_21, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_35, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56);
                {
                  parse_tree__split_parse_tree_src__RawCompUnit_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_19));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_21));
                }
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_33, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_22)));
              }
              break;
          }
          break;
      }
      parse_tree__split_parse_tree_src__succeeded = mercury__map__remove_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_67_67, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), &parse_tree__split_parse_tree_src__conv1_SubModulesCord_27, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_31, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_58_58);
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__SubModulesCord_27 = ((MR_Word) parse_tree__split_parse_tree_src__conv1_SubModulesCord_27);
        parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
      }
      if (parse_tree__split_parse_tree_src__succeeded)
      {
        MR_Word parse_tree__split_parse_tree_src__SubModules_28;
        MR_Word parse_tree__split_parse_tree_src__Var_59;
        MR_Box parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_30;
        MR_Box parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_32;
        MR_Box parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_34;
        MR_Box parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_36;

        parse_tree__split_parse_tree_src__Var_59 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_67_67, parse_tree__split_parse_tree_src__SubModulesCord_27);
        mercury__list__sort_and_remove_dups_2_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_67_67, parse_tree__split_parse_tree_src__Var_59, &parse_tree__split_parse_tree_src__SubModules_28);
        mercury__list__foldl4_10_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_67_67, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[2], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[3], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[2], parse_tree__split_parse_tree_src__SubModules_28, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_37_37)), &parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_30, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_58_58)), &parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_32, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57)), &parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_34, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56)), &parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_36);
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_30 = ((MR_Word) parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_30);
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_32 = ((MR_Word) parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_32);
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_34 = ((MR_Word) parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_34);
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_36 = ((MR_Word) parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_36);
      }
      else
      {
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_36 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_34 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_57_57;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_32 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_31;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_30 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_37_37;
      }
    }
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
    else
    {
      MR_Word parse_tree__split_parse_tree_src__RawItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src__Section_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 0)));
      MR_Word parse_tree__split_parse_tree_src__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 4)));
      MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17;
      MR_Word parse_tree__split_parse_tree_src___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 1)));
      MR_Word parse_tree__split_parse_tree_src___Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 2)));
      MR_Word parse_tree__split_parse_tree_src___Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_7, (MR_Integer) 3)));

      switch (parse_tree__split_parse_tree_src__Section_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
          break;
        case (MR_Integer) 0:
          parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__Items_14, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17);
          break;
      }
      /* direct tailcall eliminated */
      {
        MR_Word parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1 = parse_tree__split_parse_tree_src__RawItemBlocks_8;
        MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17;

        parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1;
        parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__split_parse_tree_src__succeeded;

      if ((parse_tree__split_parse_tree_src__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
      else
      {
        MR_Word parse_tree__split_parse_tree_src__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15;
        MR_Word parse_tree__split_parse_tree_src__ItemInstance_10;
        MR_Word parse_tree__split_parse_tree_src__Var_14;
        MR_Word parse_tree__split_parse_tree_src__Var_17;
        MR_Word parse_tree__split_parse_tree_src__Var_18;
        MR_Word parse_tree__split_parse_tree_src__Var_19;
        MR_Word parse_tree__split_parse_tree_src__Var_20;
        MR_Word parse_tree__split_parse_tree_src__Var_21;
        MR_Word parse_tree__split_parse_tree_src__Var_22;
        MR_Word parse_tree__split_parse_tree_src__Var_23;
        MR_Integer parse_tree__split_parse_tree_src__Var_24;

        parse_tree__split_parse_tree_src__succeeded = ((((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Item_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (parse_tree__split_parse_tree_src__succeeded)
        {
          parse_tree__split_parse_tree_src__ItemInstance_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Item_7, (MR_Integer) 1)));
          parse_tree__split_parse_tree_src__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 0)));
          parse_tree__split_parse_tree_src__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 1)));
          parse_tree__split_parse_tree_src__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 2)));
          parse_tree__split_parse_tree_src__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 3)));
          parse_tree__split_parse_tree_src__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 4)));
          parse_tree__split_parse_tree_src__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 5)));
          parse_tree__split_parse_tree_src__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 6)));
          parse_tree__split_parse_tree_src__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 7)));
          parse_tree__split_parse_tree_src__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 8)));
          parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
        }
        if (parse_tree__split_parse_tree_src__succeeded)
        {
          MR_Word parse_tree__split_parse_tree_src__InstanceContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 7)));
          MR_Word parse_tree__split_parse_tree_src__Msg_38;
          MR_Word parse_tree__split_parse_tree_src__Spec_39;
          MR_Word parse_tree__split_parse_tree_src__Var_53;
          MR_Word parse_tree__split_parse_tree_src__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 0)));
          MR_Word parse_tree__split_parse_tree_src__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 1)));
          MR_Word parse_tree__split_parse_tree_src__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 2)));
          MR_Word parse_tree__split_parse_tree_src__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 3)));
          MR_Word parse_tree__split_parse_tree_src__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 4)));
          MR_Word parse_tree__split_parse_tree_src__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 5)));
          MR_Word parse_tree__split_parse_tree_src__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 6)));
          MR_Integer parse_tree__split_parse_tree_src__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 8)));

          {
            parse_tree__split_parse_tree_src__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__InstanceContext_11));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[91])));
          }
          {
            parse_tree__split_parse_tree_src__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_38));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__split_parse_tree_src__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__Var_53));
          }
          {
            parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_39));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2));
          }
        }
        else
          parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2;
        /* direct tailcall eliminated */
        {
          MR_Word parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1 = parse_tree__split_parse_tree_src__Items_8;
          MR_Word parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15;

          parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__next_value_of_HeadVar__1_1;
          parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__next_value_of_STATE_VARIABLE_Specs_0_2;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_map_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_module_map_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001(
  MR_Box * parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_3)
{
  {
    MR_Word parse_tree__split_parse_tree_src__conv0_HeadVar__1_1;

    parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
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

/* :- end_module parse_tree.split_parse_tree_src. */
