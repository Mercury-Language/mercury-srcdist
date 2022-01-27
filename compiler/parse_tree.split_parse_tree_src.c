/*
** Automatically generated from `split_parse_tree_src.m'
** by the Mercury compiler,
** version 2016-10-30
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

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[2];

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3;

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3[1];

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0[4];

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0[4];

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0[4];

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

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__210__1_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_33);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__208__1_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_28);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

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

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2);

static void MR_CALL 
parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(
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
parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(
  MR_Word * parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__3_3);

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
parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_3,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_5);

static void MR_CALL 
parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_7,
  MR_Word parse_tree__split_parse_tree_src__Context_8,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_9,
  MR_Word parse_tree__split_parse_tree_src__OldIntContext_10,
  MR_Word parse_tree__split_parse_tree_src__OldImpContext_11,
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
parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__Context_9,
  MR_Word parse_tree__split_parse_tree_src__DupSection_10,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_11,
  MR_Word parse_tree__split_parse_tree_src__OldEntry_12,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_25,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__Context_7,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word parse_tree__split_parse_tree_src__ParseTree_9,
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_46,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_48,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_49,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_50,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3);

static void MR_CALL 
parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_3);

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
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_28,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35);

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_5,
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);

static void MR_CALL 
parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_5,
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);

static void MR_CALL 
parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__SectionAncestors_3,
  MR_Word * parse_tree__split_parse_tree_src__MaybeProblemAncestor_4);

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word parse_tree__split_parse_tree_src__SplitNested_3);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
  MR_Box parse_tree__split_parse_tree_src__closure_arg);

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1(
  MR_Box parse_tree__split_parse_tree_src__closure_arg);


static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[99][2];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_4[1][12];

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[6][1];




static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_1[99][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
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
    ((MR_Box) ((MR_String) "was previously declared to be a separate submodule."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here as a nested submodule,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that previous declaration."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a previous declaration of that module."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a duplicate"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "That previous declaration was here."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has the same name as its ancestor module."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was also declarated here."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its both its interface and its implementation"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "were also declarated here."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its interface and implementation"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was also declarated here,"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its interface"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and its implementation"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[44])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "included here as separate submodule,"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to be a separate submodule."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has already been declared"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a nested submodule."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[5])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was previously declared to be"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Submodule"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The top level module"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: submodule"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: submodule"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the empty nested submodule"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: nested submodule"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declared here."))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, its"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_5[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This implementation section for module"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs in"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the interface section of"))
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_3[2][5] = {
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

static /* final */ const MR_Box parse_tree__split_parse_tree_src_scalar_common_5[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[75])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[34])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[40])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[52])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[56])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[58])))
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_module_ancestors_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_module_ancestors_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_section_ancestors_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_section_ancestors_0_0[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_section_ancestors_0_0
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_section_ancestors_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_module_entry_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_module_entry_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1 = {
  (MR_String) "split_nested_only_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2 = {
  (MR_String) "split_nested_only_imp",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3 = {
  (MR_String) "split_nested_int_imp",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__field_types_split_nested_info_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3[1] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3
};

static const MR_DuPtagLayout parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_stag_ordered_split_nested_info_0_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0[4] = {
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_3,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_2,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_1,
  &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_functor_desc_split_nested_info_0_0
};

static const MR_Integer parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_nested_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0_10001)),
  ((MR_Box) (parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0_10001)),
  (MR_String) "parse_tree.split_parse_tree_src",
  (MR_String) "split_nested_info",
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_name_ordered_split_nested_info_0 },
  {     parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__du_ptag_ordered_split_nested_info_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__functor_number_map_split_nested_info_0
};

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0_10001(
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_1,
  MR_Box parse_tree__split_parse_tree_src__wrapper_arg_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____duplicated_section_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____duplicated_section_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_to_submodules_map_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____module_to_submodules_map_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____parent_module_context_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____parent_module_context_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_module_entry_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____split_module_entry_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_module_map_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____split_module_map_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2));
    }
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

    {
      parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&parse_tree__split_parse_tree_src__conv0_HeadVar__1_1, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_3));
    }
    *parse_tree__split_parse_tree_src__wrapper_arg_1 = ((MR_Box) (parse_tree__split_parse_tree_src__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__210__1_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_33)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    {
      parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14)), ((MR_Box) (parse_tree__split_parse_tree_src__HeadVar__2_33)));
    }
    return parse_tree__split_parse_tree_src__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__208__1_2_p_0(
  MR_Word parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_28)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    {
      parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13)), ((MR_Box) (parse_tree__split_parse_tree_src__HeadVar__2_28)));
    }
    return parse_tree__split_parse_tree_src__succeeded;
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
    MR_Integer parse_tree__split_parse_tree_src__CastX_45 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__CastY_46 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_45 == parse_tree__split_parse_tree_src__CastY_46);
    if (parse_tree__split_parse_tree_src__succeeded)
      *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__split_parse_tree_src__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 0);

                  {
                    mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_56_56, parse_tree__split_parse_tree_src__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__split_parse_tree_src__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__split_parse_tree_src__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 1);

                  {
                    mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_55_55, parse_tree__split_parse_tree_src__V_16_16);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__split_parse_tree_src__V_54_54 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 2);

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
                  MR_Word parse_tree__split_parse_tree_src__V_27_27 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 2);

                  {
                    mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_54_54, parse_tree__split_parse_tree_src__V_27_27);
                  }
                }
                break;
              case (MR_Integer) 3:
                *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__split_parse_tree_src__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__split_parse_tree_src__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

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
                {
                  MR_Word parse_tree__split_parse_tree_src__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__split_parse_tree_src__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word parse_tree__split_parse_tree_src__V_44_44;

                  {
                    mercury__term____Compare____context_0_0(&parse_tree__split_parse_tree_src__V_44_44, parse_tree__split_parse_tree_src__V_53_53, parse_tree__split_parse_tree_src__V_42_42);
                  }
                  parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_44_44 == (MR_Integer) 0);
                  parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
                  if (parse_tree__split_parse_tree_src__succeeded)
                    *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_44_44;
                  else
                    {
                      mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_52_52, parse_tree__split_parse_tree_src__V_43_43);
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(
  MR_Word parse_tree__split_parse_tree_src__HeadVar__1_1,
  MR_Word parse_tree__split_parse_tree_src__HeadVar__2_2)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__CastX_13 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__1_1;
    MR_Integer parse_tree__split_parse_tree_src__CastY_14 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;

    parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__CastX_13 == parse_tree__split_parse_tree_src__CastY_14);
    if (parse_tree__split_parse_tree_src__succeeded)
      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__split_parse_tree_src__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 0);
            MR_Word parse_tree__split_parse_tree_src__V_4_4;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                parse_tree__split_parse_tree_src__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);
                {
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_3_3, parse_tree__split_parse_tree_src__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__split_parse_tree_src__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 1);
            MR_Word parse_tree__split_parse_tree_src__V_6_6;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                parse_tree__split_parse_tree_src__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 1);
                {
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_5_5, parse_tree__split_parse_tree_src__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__split_parse_tree_src__V_7_7 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 2);
            MR_Word parse_tree__split_parse_tree_src__V_8_8;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                parse_tree__split_parse_tree_src__V_8_8 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 2);
                {
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_7_7, parse_tree__split_parse_tree_src__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__split_parse_tree_src__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__split_parse_tree_src__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__split_parse_tree_src__V_11_11;
            MR_Word parse_tree__split_parse_tree_src__V_12_12;

            parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                parse_tree__split_parse_tree_src__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__split_parse_tree_src__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
                {
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_9_9, parse_tree__split_parse_tree_src__V_11_11);
                }
                if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_10_10, parse_tree__split_parse_tree_src__V_12_12);
                  }
              }
          }
          break;
      }
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = parse_tree__split_parse_tree_src__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_5)));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_4)));
    }
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
        MR_Word parse_tree__split_parse_tree_src__V_22_22 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);

        if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__split_parse_tree_src__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3), (MR_Integer) 0);

            {
              mercury__term____Compare____context_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_22_22, parse_tree__split_parse_tree_src__V_5_5);
            }
          }
        else
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word parse_tree__split_parse_tree_src__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__split_parse_tree_src__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__split_parse_tree_src__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__split_parse_tree_src__V_16_16;

            {
              parse_tree__split_parse_tree_src____Compare____split_nested_info_0_0(&parse_tree__split_parse_tree_src__V_16_16, parse_tree__split_parse_tree_src__V_24_24, parse_tree__split_parse_tree_src__V_14_14);
            }
            parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_16_16 == (MR_Integer) 0);
            parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
            if (parse_tree__split_parse_tree_src__succeeded)
              *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_16_16;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[4], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__V_23_23)), ((MR_Box) (parse_tree__split_parse_tree_src__V_15_15)));
                }
              }
          }
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
        MR_Word parse_tree__split_parse_tree_src__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__1_1), (MR_Integer) 0);
        MR_Word parse_tree__split_parse_tree_src__V_4_4;

        parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            parse_tree__split_parse_tree_src__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2), (MR_Integer) 0);
            {
              parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_3_3, parse_tree__split_parse_tree_src__V_4_4);
            }
          }
      }
    else
      {
        MR_Word parse_tree__split_parse_tree_src__TypeInfo_12_12;
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_7_7;
        MR_Word parse_tree__split_parse_tree_src__V_8_8;

        parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            parse_tree__split_parse_tree_src__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__split_parse_tree_src__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
            {
              parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____split_nested_info_0_0(parse_tree__split_parse_tree_src__V_5_5, parse_tree__split_parse_tree_src__V_7_7);
            }
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                parse_tree__split_parse_tree_src__TypeInfo_12_12 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[4];
                {
                  parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0(parse_tree__split_parse_tree_src__TypeInfo_12_12, ((MR_Box) (parse_tree__split_parse_tree_src__V_6_6)), ((MR_Box) (parse_tree__split_parse_tree_src__V_8_8)));
                }
              }
          }
      }
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
        MR_Word parse_tree__split_parse_tree_src__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_8_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__split_parse_tree_src__V_8_8, parse_tree__split_parse_tree_src__V_4_4, parse_tree__split_parse_tree_src__V_6_6);
        }
        parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_8_8 == (MR_Integer) 0);
        parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
        if (parse_tree__split_parse_tree_src__succeeded)
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_8_8;
        else
          {
            parse_tree__split_parse_tree_src____Compare____module_ancestors_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_5_5, parse_tree__split_parse_tree_src__V_7_7);
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
        MR_Word parse_tree__split_parse_tree_src__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__split_parse_tree_src__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__split_parse_tree_src__V_3_3, parse_tree__split_parse_tree_src__V_5_5);
        }
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____module_ancestors_0_0(parse_tree__split_parse_tree_src__V_4_4, parse_tree__split_parse_tree_src__V_6_6);
          }
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Cast_HeadVar1_4, parse_tree__split_parse_tree_src__Cast_HeadVar2_5);
    }
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Word parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = parse_tree__split_parse_tree_src__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], parse_tree__split_parse_tree_src__HeadVar__1_1, ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_5)));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__split_parse_tree_src__Cast_HeadVar2_4)));
    }
    return parse_tree__split_parse_tree_src__succeeded;
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
        MR_Word parse_tree__split_parse_tree_src__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__split_parse_tree_src__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__split_parse_tree_src__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__split_parse_tree_src__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__split_parse_tree_src__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__split_parse_tree_src__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word parse_tree__split_parse_tree_src__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word parse_tree__split_parse_tree_src__V_16_16;
            MR_Integer parse_tree__split_parse_tree_src__V_26_26 = (MR_Integer) parse_tree__split_parse_tree_src__V_25_25;
            MR_Integer parse_tree__split_parse_tree_src__V_27_27 = (MR_Integer) parse_tree__split_parse_tree_src__V_13_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__split_parse_tree_src__V_16_16, parse_tree__split_parse_tree_src__V_26_26, parse_tree__split_parse_tree_src__V_27_27);
            }
            parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_16_16 == (MR_Integer) 0);
            parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
            if (parse_tree__split_parse_tree_src__succeeded)
              *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_16_16;
            else
              {
                MR_Word parse_tree__split_parse_tree_src__V_17_17;

                {
                  mercury__term____Compare____context_0_0(&parse_tree__split_parse_tree_src__V_17_17, parse_tree__split_parse_tree_src__V_24_24, parse_tree__split_parse_tree_src__V_14_14);
                }
                parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_17_17 == (MR_Integer) 0);
                parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
                if (parse_tree__split_parse_tree_src__succeeded)
                  *parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__V_17_17;
                else
                  {
                    parse_tree__split_parse_tree_src____Compare____section_ancestors_0_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__V_23_23, parse_tree__split_parse_tree_src__V_15_15);
                  }
              }
          }
      }
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
        MR_Word parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__split_parse_tree_src__V_8_8;
        MR_Word parse_tree__split_parse_tree_src__V_9_9;
        MR_Word parse_tree__split_parse_tree_src__V_10_10;

        parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            parse_tree__split_parse_tree_src__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__split_parse_tree_src__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 1)));
            parse_tree__split_parse_tree_src__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__HeadVar__2_2, (MR_Integer) 2)));
            parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_5_5 == parse_tree__split_parse_tree_src__V_8_8);
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                {
                  parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__V_6_6, parse_tree__split_parse_tree_src__V_9_9);
                }
                if (parse_tree__split_parse_tree_src__succeeded)
                  {
                    parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src____Unify____section_ancestors_0_0(parse_tree__split_parse_tree_src__V_7_7, parse_tree__split_parse_tree_src__V_10_10);
                  }
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar1_4 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__2_2;
    MR_Integer parse_tree__split_parse_tree_src__Cast_HeadVar2_5 = (MR_Integer) parse_tree__split_parse_tree_src__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__split_parse_tree_src__HeadVar__1_1, parse_tree__split_parse_tree_src__Cast_HeadVar1_4, parse_tree__split_parse_tree_src__Cast_HeadVar2_5);
    }
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

            {
              parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5, ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31)), &parse_tree__split_parse_tree_src__conv0_OldEntry_34);
            }
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
                MR_Word parse_tree__split_parse_tree_src__V_57_57;
                MR_Word parse_tree__split_parse_tree_src__V_58_58;
                MR_Word parse_tree__split_parse_tree_src__V_59_59;
                MR_Word parse_tree__split_parse_tree_src__V_62_62;
                MR_Word parse_tree__split_parse_tree_src__V_64_64;
                MR_Word parse_tree__split_parse_tree_src__V_67_67;
                MR_Word parse_tree__split_parse_tree_src__V_68_68;
                MR_Word parse_tree__split_parse_tree_src__V_100_100;
                MR_Word parse_tree__split_parse_tree_src__V_101_101;
                MR_Word parse_tree__split_parse_tree_src__V_102_102;
                MR_Word parse_tree__split_parse_tree_src__V_109_109;
                MR_Word parse_tree__split_parse_tree_src__V_110_110;
                MR_Word parse_tree__split_parse_tree_src__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_2, (MR_Integer) 1)));

                {
                  parse_tree__split_parse_tree_src__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_58_58, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_35));
                }
                {
                  parse_tree__split_parse_tree_src__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_68_68, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31));
                }
                {
                  parse_tree__split_parse_tree_src__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_68_68));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[63])));
                }
                {
                  parse_tree__split_parse_tree_src__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[84])));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_64_64, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_67_67));
                }
                {
                  parse_tree__split_parse_tree_src__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_62_62, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_64_64));
                }
                {
                  parse_tree__split_parse_tree_src__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_62_62));
                }
                {
                  parse_tree__split_parse_tree_src__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_57_57, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_58_58));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_57_57, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_59_59));
                }
                {
                  parse_tree__split_parse_tree_src__Pieces1_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces1_37, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_57_57));
                }
                if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_34)) == (MR_mktag((MR_Integer) 0))))
                  {
                    parse_tree__split_parse_tree_src__OldContext_40 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_34), (MR_Integer) 0);
                    parse_tree__split_parse_tree_src__Pieces2_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[67]);
                  }
                else
                  {
                    MR_Word parse_tree__split_parse_tree_src__OldSplitNested_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_34, (MR_Integer) 0)));
                    MR_Word parse_tree__split_parse_tree_src__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_34, (MR_Integer) 1)));

                    {
                      parse_tree__split_parse_tree_src__OldContext_40 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__OldSplitNested_38);
                    }
                    parse_tree__split_parse_tree_src__Pieces2_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[71]);
                  }
                {
                  parse_tree__split_parse_tree_src__V_102_102 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__split_parse_tree_src__Pieces1_37, parse_tree__split_parse_tree_src__Pieces2_41);
                }
                {
                  parse_tree__split_parse_tree_src__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_101_101, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_102_102));
                }
                {
                  parse_tree__split_parse_tree_src__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_101_101));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__split_parse_tree_src__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_43, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_32));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_43, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_100_100));
                }
                {
                  parse_tree__split_parse_tree_src__OldMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_44, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_40));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[85])));
                }
                {
                  parse_tree__split_parse_tree_src__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_110_110, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_44));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__split_parse_tree_src__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_109_109, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_43));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_109_109, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_110_110));
                }
                {
                  parse_tree__split_parse_tree_src__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_45, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_109_109));
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

                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__InclModuleName_31)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_46)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113);
                }
                {
                  parse_tree__split_parse_tree_src__add_new_submodule_to_map_4_p_0(parse_tree__split_parse_tree_src__SectionAncestors_2, parse_tree__split_parse_tree_src__InclModuleName_31, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114);
                }
                {
                  parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3, ((MR_Box) (parse_tree__split_parse_tree_src__Include_24)));
                }
                parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__Includes_25;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0__tmp_copy_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_115_115;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_113_113;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_114_114;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_112_112;

              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_7;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_5;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_OKIncludesCord_0__tmp_copy_3;
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
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
        MR_Word parse_tree__split_parse_tree_src__V_56_56;
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
          parse_tree__split_parse_tree_src__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NestedIncludeItem_45));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__RawItemBlock_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_103));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_104));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_56_56));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlock_105)));
        }
        {
          parse_tree__split_parse_tree_src__NestedModuleAncestors_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_103));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_104));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NestedModuleAncestors_46, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionAncestors_12));
        }
        {
          parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(parse_tree__split_parse_tree_src__NestedModuleParseTree_41, parse_tree__split_parse_tree_src__NestedModuleAncestors_46, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_54);
        }
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
        MR_Word parse_tree__split_parse_tree_src__V_64_64;
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67;

        {
          parse_tree__split_parse_tree_src__Includes_22 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106, parse_tree__split_parse_tree_src__IncludesCord_19);
        }
        {
          parse_tree__split_parse_tree_src__Avails_23 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__split_parse_tree_src__AvailsCord_20);
        }
        {
          parse_tree__split_parse_tree_src__Items_24 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__split_parse_tree_src__ItemsCord_21);
        }
        {
          parse_tree__split_parse_tree_src__V_64_64 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106);
        }
        {
          parse_tree__split_parse_tree_src__discover_included_submodules_10_p_0(parse_tree__split_parse_tree_src__Includes_22, parse_tree__split_parse_tree_src__SectionAncestors_12, parse_tree__split_parse_tree_src__V_64_64, &parse_tree__split_parse_tree_src__OKIncludesCord_25, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_47, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_48, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_49, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_50, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_53, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_67_67);
        }
        {
          parse_tree__split_parse_tree_src__OKIncludes_26 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_106_106, parse_tree__split_parse_tree_src__OKIncludesCord_25);
        }
        {
          parse_tree__split_parse_tree_src__RawItemBlock_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionKind_17));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_18));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__OKIncludes_26));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__Avails_23));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawItemBlock_27, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__Items_24));
        }
        {
          *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_52 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_51, ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlock_27)));
        }
        switch (parse_tree__split_parse_tree_src__SectionKind_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__split_parse_tree_src__MaybeProblemAncestor_28;

              {
                parse_tree__split_parse_tree_src__section_has_some_ancestor_in_interface_2_p_0(parse_tree__split_parse_tree_src__SectionAncestors_12, &parse_tree__split_parse_tree_src__MaybeProblemAncestor_28);
              }
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
                  MR_Word parse_tree__split_parse_tree_src__V_74_74;
                  MR_Word parse_tree__split_parse_tree_src__V_75_75;
                  MR_Word parse_tree__split_parse_tree_src__V_76_76;
                  MR_Word parse_tree__split_parse_tree_src__V_79_79;
                  MR_Word parse_tree__split_parse_tree_src__V_82_82;
                  MR_Word parse_tree__split_parse_tree_src__V_83_83;
                  MR_Word parse_tree__split_parse_tree_src__V_84_84;
                  MR_Word parse_tree__split_parse_tree_src__V_87_87;
                  MR_Word parse_tree__split_parse_tree_src__V_88_88;
                  MR_Word parse_tree__split_parse_tree_src__V_95_95;
                  MR_Word parse_tree__split_parse_tree_src__V_96_96;
                  MR_Word parse_tree__split_parse_tree_src__V_100_100;

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
                      MR_Word parse_tree__split_parse_tree_src__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 0)));
                      MR_Word parse_tree__split_parse_tree_src__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__ModuleAncestors_31, (MR_Integer) 1)));
                      MR_Word parse_tree__split_parse_tree_src__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ModuleSectionAncestor_34, (MR_Integer) 1)));

                      {
                        parse_tree__split_parse_tree_src__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__split_parse_tree_src__ModuleParent_35, parse_tree__split_parse_tree_src__ProblemAncestor_29);
                      }
                      if (parse_tree__split_parse_tree_src__succeeded)
                        parse_tree__split_parse_tree_src__PorA_37 = (MR_String) "parent";
                      else
                        parse_tree__split_parse_tree_src__PorA_37 = (MR_String) "ancestor";
                    }
                  {
                    parse_tree__split_parse_tree_src__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_75_75, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__CurModuleName_30));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__PorA_37));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_88_88, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ProblemAncestor_29));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_87_87, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_88_88));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[60])));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[81])));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_84_84, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_87_87));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_83_83));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_84_84));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[98])));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_82_82));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[97])));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_79_79));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_75_75));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_76_76));
                  }
                  {
                    parse_tree__split_parse_tree_src__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[96])));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_74_74));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_96_96, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_38));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_95_95, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_96_96));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__split_parse_tree_src__Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionContext_18));
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_39, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_95_95));
                  }
                  {
                    parse_tree__split_parse_tree_src__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_39));
                    MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__split_parse_tree_src__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_40, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_100_100));
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
      {
        MR_bool parse_tree__split_parse_tree_src__succeeded;

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

            {
              parse_tree__split_parse_tree_src__split_component_discover_submodules_10_p_0(parse_tree__split_parse_tree_src__Component_24, parse_tree__split_parse_tree_src__SectionAncestors_2, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7, &parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__Components_25;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_39_39;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_40_40;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0__tmp_copy_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_41_41;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_42_42;

              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_9 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_9;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0_7 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawItemBlockCord_0__tmp_copy_7;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_5 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0__tmp_copy_5;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_3 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0__tmp_copy_3;
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
            }
            continue;
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
      {
        MR_bool parse_tree__split_parse_tree_src__succeeded;

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
            MR_Word parse_tree__split_parse_tree_src__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 1)));
            MR_Word parse_tree__split_parse_tree_src__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 2)));
            MR_Word parse_tree__split_parse_tree_src__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 3)));
            MR_Word parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemBlock_12, (MR_Integer) 4)));

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
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__ItemBlocks_13;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0__tmp_copy_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_26_26;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0__tmp_copy_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_25_25;

              parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0_4 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenImp_0__tmp_copy_4;
              parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SeenInt_0__tmp_copy_2;
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
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
    MR_Word parse_tree__split_parse_tree_src__V_23_23;
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
    MR_Word parse_tree__split_parse_tree_src__V_25_25;
    MR_Word parse_tree__split_parse_tree_src__V_28_28;
    MR_Word parse_tree__split_parse_tree_src__V_30_30;
    MR_Word parse_tree__split_parse_tree_src__V_33_33;
    MR_Word parse_tree__split_parse_tree_src__V_34_34;

    {
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_9));
    }
    {
      parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[48])));
    }
    {
      parse_tree__split_parse_tree_src__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_30_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
    }
    {
      parse_tree__split_parse_tree_src__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_28_28, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_30_30));
    }
    {
      parse_tree__split_parse_tree_src__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_28_28));
    }
    {
      parse_tree__split_parse_tree_src__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_24_24));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_25_25));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_23_23));
    }
    {
      parse_tree__split_parse_tree_src__succeeded = mercury__term____Unify____context_0_0(parse_tree__split_parse_tree_src__OldIntContext_10, parse_tree__split_parse_tree_src__OldImpContext_11);
    }
    if (parse_tree__split_parse_tree_src__succeeded)
      {
        MR_Word parse_tree__split_parse_tree_src__Msg_15;
        MR_Word parse_tree__split_parse_tree_src__OldMsg_16;
        MR_Word parse_tree__split_parse_tree_src__V_52_52;
        MR_Word parse_tree__split_parse_tree_src__V_53_53;
        MR_Word parse_tree__split_parse_tree_src__V_60_60;
        MR_Word parse_tree__split_parse_tree_src__V_61_61;

        {
          parse_tree__split_parse_tree_src__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_53_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
        }
        {
          parse_tree__split_parse_tree_src__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_53_53));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_52_52));
        }
        {
          parse_tree__split_parse_tree_src__OldMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntContext_10));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[93])));
        }
        {
          parse_tree__split_parse_tree_src__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_16));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_60_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_15));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_60_60, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_61_61));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__split_parse_tree_src__Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_60_60));
        }
      }
    else
      {
        MR_Word parse_tree__split_parse_tree_src__OldIntMsg_19;
        MR_Word parse_tree__split_parse_tree_src__OldImpMsg_20;
        MR_Word parse_tree__split_parse_tree_src__V_79_79;
        MR_Word parse_tree__split_parse_tree_src__V_80_80;
        MR_Word parse_tree__split_parse_tree_src__V_90_90;
        MR_Word parse_tree__split_parse_tree_src__V_91_91;
        MR_Word parse_tree__split_parse_tree_src__V_92_92;
        MR_Word parse_tree__split_parse_tree_src__Msg_94;

        {
          parse_tree__split_parse_tree_src__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_80_80, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
        }
        {
          parse_tree__split_parse_tree_src__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_80_80));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__Msg_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_94, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_94, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_79_79));
        }
        {
          parse_tree__split_parse_tree_src__OldIntMsg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldIntMsg_19, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntContext_10));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldIntMsg_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[94])));
        }
        {
          parse_tree__split_parse_tree_src__OldImpMsg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldImpMsg_20, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldImpContext_11));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldImpMsg_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[95])));
        }
        {
          parse_tree__split_parse_tree_src__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_92_92, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldImpMsg_20));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldIntMsg_19));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_92_92));
        }
        {
          parse_tree__split_parse_tree_src__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_90_90, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_94));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_90_90, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_91_91));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__split_parse_tree_src__Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_90_90));
        }
      }
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Pieces_13;
    MR_Word parse_tree__split_parse_tree_src__OldPieces_14;
    MR_Word parse_tree__split_parse_tree_src__Msg_15;
    MR_Word parse_tree__split_parse_tree_src__OldMsg_16;
    MR_Word parse_tree__split_parse_tree_src__V_19_19;
    MR_Word parse_tree__split_parse_tree_src__V_20_20;
    MR_Word parse_tree__split_parse_tree_src__V_21_21;
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
    MR_Word parse_tree__split_parse_tree_src__V_26_26;
    MR_Word parse_tree__split_parse_tree_src__V_29_29;
    MR_Word parse_tree__split_parse_tree_src__V_30_30;
    MR_Word parse_tree__split_parse_tree_src__V_31_31;
    MR_Word parse_tree__split_parse_tree_src__V_34_34;
    MR_Word parse_tree__split_parse_tree_src__V_35_35;
    MR_Word parse_tree__split_parse_tree_src__V_42_42;
    MR_Word parse_tree__split_parse_tree_src__V_50_50;
    MR_Word parse_tree__split_parse_tree_src__V_51_51;
    MR_Word parse_tree__split_parse_tree_src__V_53_53;
    MR_Word parse_tree__split_parse_tree_src__V_54_54;
    MR_Word parse_tree__split_parse_tree_src__V_58_58;
    MR_Word parse_tree__split_parse_tree_src__V_59_59;

    {
      parse_tree__split_parse_tree_src__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_20_20, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_10));
    }
    {
      parse_tree__split_parse_tree_src__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_30_30, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__split_parse_tree_src__V_35_35, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SectionWord_9));
    }
    {
      parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_35_35));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[91])));
    }
    {
      parse_tree__split_parse_tree_src__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[89])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
    }
    {
      parse_tree__split_parse_tree_src__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_29_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_30_30));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_29_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_31_31));
    }
    {
      parse_tree__split_parse_tree_src__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_26_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_29_29));
    }
    {
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_26_26));
    }
    {
      parse_tree__split_parse_tree_src__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_21_21, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_24_24));
    }
    {
      parse_tree__split_parse_tree_src__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_20_20));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_21_21));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_19_19));
    }
    {
      parse_tree__split_parse_tree_src__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_42_42, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_35_35));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[44])));
    }
    {
      parse_tree__split_parse_tree_src__OldPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldPieces_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_42_42));
    }
    {
      parse_tree__split_parse_tree_src__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_51_51, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_13));
    }
    {
      parse_tree__split_parse_tree_src__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_50_50, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_51_51));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_50_50));
    }
    {
      parse_tree__split_parse_tree_src__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_54_54, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldPieces_14));
    }
    {
      parse_tree__split_parse_tree_src__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_53_53, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_54_54));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__OldMsg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_11));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_16, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_53_53));
    }
    {
      parse_tree__split_parse_tree_src__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_16));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_58_58, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_15));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_58_58, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_59_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__split_parse_tree_src__Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_58_58));
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Pieces_9;
    MR_Word parse_tree__split_parse_tree_src__Msg_10;
    MR_Word parse_tree__split_parse_tree_src__V_13_13;
    MR_Word parse_tree__split_parse_tree_src__V_14_14;
    MR_Word parse_tree__split_parse_tree_src__V_15_15;
    MR_Word parse_tree__split_parse_tree_src__V_18_18;
    MR_Word parse_tree__split_parse_tree_src__V_20_20;
    MR_Word parse_tree__split_parse_tree_src__V_23_23;
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
    MR_Word parse_tree__split_parse_tree_src__V_31_31;
    MR_Word parse_tree__split_parse_tree_src__V_32_32;
    MR_Word parse_tree__split_parse_tree_src__V_36_36;

    {
      parse_tree__split_parse_tree_src__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_14_14, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_7));
    }
    {
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_5));
    }
    {
      parse_tree__split_parse_tree_src__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_24_24));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[42])));
    }
    {
      parse_tree__split_parse_tree_src__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_20_20, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_23_23));
    }
    {
      parse_tree__split_parse_tree_src__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_18_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_20_20));
    }
    {
      parse_tree__split_parse_tree_src__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_15_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_18_18));
    }
    {
      parse_tree__split_parse_tree_src__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_13_13, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_14_14));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_13_13, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_15_15));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_9, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_13_13));
    }
    {
      parse_tree__split_parse_tree_src__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_32_32, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_9));
    }
    {
      parse_tree__split_parse_tree_src__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_32_32));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_10, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_6));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_10, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_31_31));
    }
    {
      parse_tree__split_parse_tree_src__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_36_36, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_10));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__split_parse_tree_src__Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_36_36));
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
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;

    switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__split_parse_tree_src__Pieces_34;
          MR_Word parse_tree__split_parse_tree_src__Msg_35;
          MR_Word parse_tree__split_parse_tree_src__V_38_38;
          MR_Word parse_tree__split_parse_tree_src__V_39_39;
          MR_Word parse_tree__split_parse_tree_src__V_40_40;
          MR_Word parse_tree__split_parse_tree_src__V_43_43;
          MR_Word parse_tree__split_parse_tree_src__V_45_45;
          MR_Word parse_tree__split_parse_tree_src__V_48_48;
          MR_Word parse_tree__split_parse_tree_src__V_49_49;
          MR_Word parse_tree__split_parse_tree_src__V_56_56;
          MR_Word parse_tree__split_parse_tree_src__V_57_57;
          MR_Word parse_tree__split_parse_tree_src__V_61_61;

          {
            parse_tree__split_parse_tree_src__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_39_39, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_10));
          }
          {
            parse_tree__split_parse_tree_src__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_49_49, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_7));
          }
          {
            parse_tree__split_parse_tree_src__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_48_48, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_49_49));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[42])));
          }
          {
            parse_tree__split_parse_tree_src__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[88])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_45_45, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_48_48));
          }
          {
            parse_tree__split_parse_tree_src__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_45_45));
          }
          {
            parse_tree__split_parse_tree_src__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_43_43));
          }
          {
            parse_tree__split_parse_tree_src__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_39_39));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_40_40));
          }
          {
            parse_tree__split_parse_tree_src__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_38_38));
          }
          {
            parse_tree__split_parse_tree_src__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_57_57, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_34));
          }
          {
            parse_tree__split_parse_tree_src__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_57_57));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__split_parse_tree_src__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_35, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_8));
            MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_35, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_56_56));
          }
          {
            parse_tree__split_parse_tree_src__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_35));
            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__split_parse_tree_src__Spec_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_61_61));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__split_parse_tree_src__IntContext_14 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11), (MR_Integer) 1);
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
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_15, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_16, parse_tree__split_parse_tree_src__Spec_12);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__split_parse_tree_src__ImpContext_17 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_11), (MR_Integer) 2);
          MR_String parse_tree__split_parse_tree_src__SectionWord_24;
          MR_Word parse_tree__split_parse_tree_src__OldContext_25;

          switch (parse_tree__split_parse_tree_src__Section_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                parse_tree__split_parse_tree_src__SectionWord_24 = (MR_String) "implementation";
                parse_tree__split_parse_tree_src__OldContext_25 = parse_tree__split_parse_tree_src__ImpContext_17;
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
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_24, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_25, parse_tree__split_parse_tree_src__Spec_12);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word parse_tree__split_parse_tree_src__IntContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 0)));
          MR_String parse_tree__split_parse_tree_src__SectionWord_27;
          MR_Word parse_tree__split_parse_tree_src__OldContext_28;
          MR_Word parse_tree__split_parse_tree_src__ImpContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_11, (MR_Integer) 1)));

          switch (parse_tree__split_parse_tree_src__Section_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                parse_tree__split_parse_tree_src__SectionWord_27 = (MR_String) "implementation";
                parse_tree__split_parse_tree_src__OldContext_28 = parse_tree__split_parse_tree_src__ImpContext_29;
              }
              break;
            case (MR_Integer) 0:
              {
                parse_tree__split_parse_tree_src__SectionWord_27 = (MR_String) "interface";
                parse_tree__split_parse_tree_src__OldContext_28 = parse_tree__split_parse_tree_src__IntContext_26;
              }
              break;
          }
          {
            parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_2_6_p_0(parse_tree__split_parse_tree_src__ModuleName_7, parse_tree__split_parse_tree_src__Context_8, parse_tree__split_parse_tree_src__SectionWord_27, parse_tree__split_parse_tree_src__ParentModuleName_10, parse_tree__split_parse_tree_src__OldContext_28, parse_tree__split_parse_tree_src__Spec_12);
          }
        }
        break;
    }
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
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Spec_19;

    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_12)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__split_parse_tree_src__OldContext_14 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_12), (MR_Integer) 0);
        MR_Word parse_tree__split_parse_tree_src__Pieces_15;
        MR_Word parse_tree__split_parse_tree_src__Msg_17;
        MR_Word parse_tree__split_parse_tree_src__OldMsg_18;
        MR_Word parse_tree__split_parse_tree_src__V_72_72;
        MR_Word parse_tree__split_parse_tree_src__V_73_73;
        MR_Word parse_tree__split_parse_tree_src__V_74_74;
        MR_Word parse_tree__split_parse_tree_src__V_77_77;
        MR_Word parse_tree__split_parse_tree_src__V_79_79;
        MR_Word parse_tree__split_parse_tree_src__V_82_82;
        MR_Word parse_tree__split_parse_tree_src__V_83_83;
        MR_Word parse_tree__split_parse_tree_src__V_104_104;
        MR_Word parse_tree__split_parse_tree_src__V_105_105;
        MR_Word parse_tree__split_parse_tree_src__V_112_112;
        MR_Word parse_tree__split_parse_tree_src__V_113_113;

        {
          parse_tree__split_parse_tree_src__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_73_73, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_11));
        }
        {
          parse_tree__split_parse_tree_src__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_83_83, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_8));
        }
        {
          parse_tree__split_parse_tree_src__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_83_83));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[30])));
        }
        {
          parse_tree__split_parse_tree_src__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[84])));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_79_79, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_82_82));
        }
        {
          parse_tree__split_parse_tree_src__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_77_77, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_79_79));
        }
        {
          parse_tree__split_parse_tree_src__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_74_74, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_77_77));
        }
        {
          parse_tree__split_parse_tree_src__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_72_72, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_73_73));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_72_72, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_74_74));
        }
        {
          parse_tree__split_parse_tree_src__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_15, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_72_72));
        }
        {
          parse_tree__split_parse_tree_src__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_105_105, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_15));
        }
        {
          parse_tree__split_parse_tree_src__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_104_104, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_105_105));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_17, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_17, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_104_104));
        }
        {
          parse_tree__split_parse_tree_src__OldMsg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_18, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_14));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[85])));
        }
        {
          parse_tree__split_parse_tree_src__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_113_113, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_18));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__split_parse_tree_src__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_112_112, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_17));
          MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_112_112, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_113_113));
        }
        {
          parse_tree__split_parse_tree_src__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_112_112));
        }
      }
    else
      {
        MR_Word parse_tree__split_parse_tree_src__SplitNested_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_12, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_12, (MR_Integer) 1)));

        switch (parse_tree__split_parse_tree_src__DupSection_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__split_parse_tree_src__V_33_33;
              MR_Word parse_tree__split_parse_tree_src__V_34_34;
              MR_Word parse_tree__split_parse_tree_src__V_35_35;
              MR_Word parse_tree__split_parse_tree_src__V_38_38;
              MR_Word parse_tree__split_parse_tree_src__V_40_40;
              MR_Word parse_tree__split_parse_tree_src__V_43_43;
              MR_Word parse_tree__split_parse_tree_src__V_44_44;
              MR_Word parse_tree__split_parse_tree_src__V_59_59;
              MR_Word parse_tree__split_parse_tree_src__V_60_60;
              MR_Word parse_tree__split_parse_tree_src__V_67_67;
              MR_Word parse_tree__split_parse_tree_src__V_68_68;
              MR_Word parse_tree__split_parse_tree_src__OldContext_116;
              MR_Word parse_tree__split_parse_tree_src__Pieces_117;
              MR_Word parse_tree__split_parse_tree_src__Msg_119;
              MR_Word parse_tree__split_parse_tree_src__OldMsg_120;

              {
                parse_tree__split_parse_tree_src__OldContext_116 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__SplitNested_20);
              }
              {
                parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_34_34, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_11));
              }
              {
                parse_tree__split_parse_tree_src__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_44_44, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_8));
              }
              {
                parse_tree__split_parse_tree_src__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_44_44));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[38])));
              }
              {
                parse_tree__split_parse_tree_src__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[86])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_40_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_43_43));
              }
              {
                parse_tree__split_parse_tree_src__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_40_40));
              }
              {
                parse_tree__split_parse_tree_src__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[83])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_35_35, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_38_38));
              }
              {
                parse_tree__split_parse_tree_src__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_35_35));
              }
              {
                parse_tree__split_parse_tree_src__Pieces_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[82])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_117, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
              }
              {
                parse_tree__split_parse_tree_src__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_60_60, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_117));
              }
              {
                parse_tree__split_parse_tree_src__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_60_60));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__split_parse_tree_src__Msg_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_119, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_9));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_119, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_59_59));
              }
              {
                parse_tree__split_parse_tree_src__OldMsg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_120, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_116));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[87])));
              }
              {
                parse_tree__split_parse_tree_src__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_68_68, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_120));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__split_parse_tree_src__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_119));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_67_67, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_68_68));
              }
              {
                parse_tree__split_parse_tree_src__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_19, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_67_67));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__SplitNested_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  parse_tree__split_parse_tree_src__report_duplicate_submodule_vs_top_4_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, parse_tree__split_parse_tree_src__ParentModuleName_11, &parse_tree__split_parse_tree_src__Spec_19);
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__split_parse_tree_src__IntContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 0)));
                  MR_Word parse_tree__split_parse_tree_src__ImpContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_20, (MR_Integer) 1)));

                  {
                    parse_tree__split_parse_tree_src__report_duplicate_submodule_both_sections_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__IntContext_23, parse_tree__split_parse_tree_src__ImpContext_24, &parse_tree__split_parse_tree_src__Spec_19);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__split_parse_tree_src__report_duplicate_submodule_one_section_6_p_0(parse_tree__split_parse_tree_src__ModuleName_8, parse_tree__split_parse_tree_src__Context_9, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_11, parse_tree__split_parse_tree_src__SplitNested_20, &parse_tree__split_parse_tree_src__Spec_19);
              }
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
parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_6,
  MR_Word parse_tree__split_parse_tree_src__Context_7,
  MR_Word parse_tree__split_parse_tree_src__ParentModuleName_8,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_13,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__Pieces_10;
    MR_Word parse_tree__split_parse_tree_src__Msg_11;
    MR_Word parse_tree__split_parse_tree_src__Spec_12;
    MR_Word parse_tree__split_parse_tree_src__V_17_17;
    MR_Word parse_tree__split_parse_tree_src__V_18_18;
    MR_Word parse_tree__split_parse_tree_src__V_19_19;
    MR_Word parse_tree__split_parse_tree_src__V_22_22;
    MR_Word parse_tree__split_parse_tree_src__V_25_25;
    MR_Word parse_tree__split_parse_tree_src__V_26_26;
    MR_Word parse_tree__split_parse_tree_src__V_33_33;
    MR_Word parse_tree__split_parse_tree_src__V_34_34;
    MR_Word parse_tree__split_parse_tree_src__V_38_38;

    {
      parse_tree__split_parse_tree_src__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_18_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6));
    }
    {
      parse_tree__split_parse_tree_src__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_26_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8));
    }
    {
      parse_tree__split_parse_tree_src__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_26_26));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[24])));
    }
    {
      parse_tree__split_parse_tree_src__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_22_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_25_25));
    }
    {
      parse_tree__split_parse_tree_src__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_19_19, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_22_22));
    }
    {
      parse_tree__split_parse_tree_src__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_17_17, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_18_18));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_17_17, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_19_19));
    }
    {
      parse_tree__split_parse_tree_src__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[79])));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_10, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_17_17));
    }
    {
      parse_tree__split_parse_tree_src__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_34_34, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_10));
    }
    {
      parse_tree__split_parse_tree_src__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_34_34));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_11, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_7));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_11, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
    }
    {
      parse_tree__split_parse_tree_src__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_11));
      MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__split_parse_tree_src__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_12, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_38_38));
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
parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(
  MR_Word parse_tree__split_parse_tree_src__ParseTree_9,
  MR_Word parse_tree__split_parse_tree_src__ModuleAncestors_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_46,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_48,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_49,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_50,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__TypeInfo_182_182;
    MR_Word parse_tree__split_parse_tree_src__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 0)));
    MR_Word parse_tree__split_parse_tree_src__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 1)));
    MR_Word parse_tree__split_parse_tree_src__ModuleComponentsCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTree_9, (MR_Integer) 2)));
    MR_Word parse_tree__split_parse_tree_src__ModuleComponents_17;
    MR_Word parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18;
    MR_Word parse_tree__split_parse_tree_src__ItemBlockCord0_19;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_52_52;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
    MR_Word parse_tree__split_parse_tree_src__V_55_55;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;

    {
      parse_tree__split_parse_tree_src__add_new_module_maybe_submodule_to_map_4_p_0(parse_tree__split_parse_tree_src__ModuleAncestors_10, parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_48, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_52_52);
    }
    {
      parse_tree__split_parse_tree_src__ModuleComponents_17 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__split_parse_tree_src__ModuleComponentsCord_16);
    }
    {
      parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleAncestors_10));
    }
    parse_tree__split_parse_tree_src__TypeInfo_182_182 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1];
    {
      parse_tree__split_parse_tree_src__V_55_55 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182);
    }
    {
      parse_tree__split_parse_tree_src__split_components_discover_submodules_10_p_0(parse_tree__split_parse_tree_src__ModuleComponents_17, parse_tree__split_parse_tree_src__SubModuleSectionAncestors_18, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_46, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_52_52, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_49, parse_tree__split_parse_tree_src__V_55_55, &parse_tree__split_parse_tree_src__ItemBlockCord0_19, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_50, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56);
    }
    if ((parse_tree__split_parse_tree_src__ModuleAncestors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__split_parse_tree_src__OldEntry_20;
        MR_Box parse_tree__split_parse_tree_src__conv0_OldEntry_20;

        {
          parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv0_OldEntry_20);
        }
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
            MR_Word parse_tree__split_parse_tree_src__V_116_116;
            MR_Word parse_tree__split_parse_tree_src__V_117_117;
            MR_Word parse_tree__split_parse_tree_src__V_119_119;
            MR_Word parse_tree__split_parse_tree_src__V_120_120;
            MR_Word parse_tree__split_parse_tree_src__V_124_124;
            MR_Word parse_tree__split_parse_tree_src__V_125_125;

            if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_20)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__split_parse_tree_src__V_91_91;
                MR_Word parse_tree__split_parse_tree_src__V_92_92;

                parse_tree__split_parse_tree_src__OldContext_21 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldEntry_20), (MR_Integer) 0);
                {
                  parse_tree__split_parse_tree_src__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_92_92, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
                }
                {
                  parse_tree__split_parse_tree_src__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_92_92));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[13])));
                }
                {
                  parse_tree__split_parse_tree_src__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78])));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_91_91));
                }
                parse_tree__split_parse_tree_src__OldPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[18]);
              }
            else
              {
                MR_Word parse_tree__split_parse_tree_src__SplitNested_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_20, (MR_Integer) 0)));
                MR_Word parse_tree__split_parse_tree_src__V_76_76;
                MR_Word parse_tree__split_parse_tree_src__V_77_77;
                MR_Word parse_tree__split_parse_tree_src__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_20, (MR_Integer) 1)));

                {
                  parse_tree__split_parse_tree_src__OldContext_21 = parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(parse_tree__split_parse_tree_src__SplitNested_24);
                }
                {
                  parse_tree__split_parse_tree_src__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_77_77, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14));
                }
                {
                  parse_tree__split_parse_tree_src__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_77_77));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[20])));
                }
                {
                  parse_tree__split_parse_tree_src__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[78])));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_76_76));
                }
                parse_tree__split_parse_tree_src__OldPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[22]);
              }
            {
              parse_tree__split_parse_tree_src__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_117_117, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_22));
            }
            {
              parse_tree__split_parse_tree_src__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_116_116, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_117_117));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__split_parse_tree_src__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_26, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_26, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_116_116));
            }
            {
              parse_tree__split_parse_tree_src__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_120_120, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldPieces_23));
            }
            {
              parse_tree__split_parse_tree_src__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_119_119, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_120_120));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__split_parse_tree_src__OldMsg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_27, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldContext_21));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__OldMsg_27, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_119_119));
            }
            {
              parse_tree__split_parse_tree_src__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_125_125, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__OldMsg_27));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__split_parse_tree_src__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_124_124, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_26));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_124_124, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_125_125));
            }
            {
              parse_tree__split_parse_tree_src__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_28, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_124_124));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56));
            }
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
          }
        else
          {
            MR_Word parse_tree__split_parse_tree_src__Entry_29;
            MR_Word parse_tree__split_parse_tree_src__V_128_128 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__split_parse_tree_src__Context_15);

            {
              parse_tree__split_parse_tree_src__Entry_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_29, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_128_128));
              MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord0_19));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_29)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
            }
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
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
        MR_Word parse_tree__split_parse_tree_src__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_32, (MR_Integer) 1)));

        {
          parse_tree__split_parse_tree_src__ItemBlocks_35 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__ItemBlockCord0_19);
        }
        {
          parse_tree__split_parse_tree_src__get_raw_item_block_section_kinds_5_p_0(parse_tree__split_parse_tree_src__ItemBlocks_35, (MR_Integer) 0, &parse_tree__split_parse_tree_src__SeenInt_36, (MR_Integer) 0, &parse_tree__split_parse_tree_src__SeenImp_37);
        }
        {
          parse_tree__split_parse_tree_src__ItemBlockCord_38 = mercury__cord__from_list_1_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__ItemBlocks_35);
        }
        switch (parse_tree__split_parse_tree_src__SeenInt_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (parse_tree__split_parse_tree_src__SeenImp_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71;
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_130;
                  MR_Box parse_tree__split_parse_tree_src__conv1_OldEntry_130;

                  {
                    parse_tree__split_parse_tree_src__warn_empty_submodule_5_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71);
                  }
                  {
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv1_OldEntry_130);
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      parse_tree__split_parse_tree_src__OldEntry_130 = ((MR_Word) parse_tree__split_parse_tree_src__conv1_OldEntry_130);
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                    }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 0, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_130, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                      }
                    }
                  else
                    *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_71_71;
                  *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_151;
                  MR_Box parse_tree__split_parse_tree_src__conv2_OldEntry_151;

                  {
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv2_OldEntry_151);
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      parse_tree__split_parse_tree_src__OldEntry_151 = ((MR_Word) parse_tree__split_parse_tree_src__conv2_OldEntry_151);
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                    }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      MR_Word parse_tree__split_parse_tree_src__IntContext_45;
                      MR_Word parse_tree__split_parse_tree_src__OldItemBlockCord_145;
                      MR_Word parse_tree__split_parse_tree_src__OldSplitNested_140;

                      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_151)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__split_parse_tree_src__succeeded)
                        {
                          parse_tree__split_parse_tree_src__OldSplitNested_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_151, (MR_Integer) 0)));
                          parse_tree__split_parse_tree_src__OldItemBlockCord_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_151, (MR_Integer) 1)));
                          parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_140)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__split_parse_tree_src__succeeded)
                            parse_tree__split_parse_tree_src__IntContext_45 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_140), (MR_Integer) 1);
                        }
                      if (parse_tree__split_parse_tree_src__succeeded)
                        {
                          MR_Word parse_tree__split_parse_tree_src__NewSplitNested_141;
                          MR_Word parse_tree__split_parse_tree_src__NewItemBlockCord_142;
                          MR_Word parse_tree__split_parse_tree_src__NewEntry_143;

                          {
                            parse_tree__split_parse_tree_src__NewSplitNested_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_141, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__IntContext_45));
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_141, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                          }
                          {
                            parse_tree__split_parse_tree_src__NewItemBlockCord_142 = mercury__cord__f_43_43_2_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__OldItemBlockCord_145, parse_tree__split_parse_tree_src__ItemBlockCord_38);
                          }
                          {
                            parse_tree__split_parse_tree_src__NewEntry_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_143, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NewSplitNested_141));
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_143, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NewItemBlockCord_142));
                          }
                          {
                            mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_143)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                          }
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
                        }
                      else
                        {
                          {
                            parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 2, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_151, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                          }
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
                        }
                    }
                  else
                    {
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_149 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__split_parse_tree_src__Context_15);
                      MR_Word parse_tree__split_parse_tree_src__Entry_150;

                      {
                        parse_tree__split_parse_tree_src__Entry_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_150, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_149));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_150, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                      }
                      {
                        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_150)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                      }
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
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
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_134;
                  MR_Box parse_tree__split_parse_tree_src__conv3_OldEntry_134;

                  {
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv3_OldEntry_134);
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      parse_tree__split_parse_tree_src__OldEntry_134 = ((MR_Word) parse_tree__split_parse_tree_src__conv3_OldEntry_134);
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                    }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      MR_Word parse_tree__split_parse_tree_src__OldItemBlockCord_40;
                      MR_Word parse_tree__split_parse_tree_src__ImpContext_41;
                      MR_Word parse_tree__split_parse_tree_src__OldSplitNested_39;

                      parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldEntry_134)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__split_parse_tree_src__succeeded)
                        {
                          parse_tree__split_parse_tree_src__OldSplitNested_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_134, (MR_Integer) 0)));
                          parse_tree__split_parse_tree_src__OldItemBlockCord_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__OldEntry_134, (MR_Integer) 1)));
                          parse_tree__split_parse_tree_src__succeeded = ((MR_tag((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_39)) == (MR_mktag((MR_Integer) 2)));
                          if (parse_tree__split_parse_tree_src__succeeded)
                            parse_tree__split_parse_tree_src__ImpContext_41 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__OldSplitNested_39), (MR_Integer) 2);
                        }
                      if (parse_tree__split_parse_tree_src__succeeded)
                        {
                          MR_Word parse_tree__split_parse_tree_src__NewSplitNested_42;
                          MR_Word parse_tree__split_parse_tree_src__NewItemBlockCord_43;
                          MR_Word parse_tree__split_parse_tree_src__NewEntry_44;

                          {
                            parse_tree__split_parse_tree_src__NewSplitNested_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                            MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NewSplitNested_42, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ImpContext_41));
                          }
                          {
                            parse_tree__split_parse_tree_src__NewItemBlockCord_43 = mercury__cord__f_43_43_2_f_0(parse_tree__split_parse_tree_src__TypeInfo_182_182, parse_tree__split_parse_tree_src__ItemBlockCord_38, parse_tree__split_parse_tree_src__OldItemBlockCord_40);
                          }
                          {
                            parse_tree__split_parse_tree_src__NewEntry_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_44, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__NewSplitNested_42));
                            MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__NewEntry_44, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__NewItemBlockCord_43));
                          }
                          {
                            mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__NewEntry_44)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                          }
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
                        }
                      else
                        {
                          {
                            parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 1, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_134, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                          }
                          *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
                        }
                    }
                  else
                    {
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_132 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__split_parse_tree_src__Context_15);
                      MR_Word parse_tree__split_parse_tree_src__Entry_133;

                      {
                        parse_tree__split_parse_tree_src__Entry_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_133, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_132));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_133, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                      }
                      {
                        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_133)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                      }
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__split_parse_tree_src__OldEntry_169;
                  MR_Box parse_tree__split_parse_tree_src__conv4_OldEntry_169;

                  {
                    parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), &parse_tree__split_parse_tree_src__conv4_OldEntry_169);
                  }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      parse_tree__split_parse_tree_src__OldEntry_169 = ((MR_Word) parse_tree__split_parse_tree_src__conv4_OldEntry_169);
                      parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
                    }
                  if (parse_tree__split_parse_tree_src__succeeded)
                    {
                      {
                        parse_tree__split_parse_tree_src__report_duplicate_submodule_7_p_0(parse_tree__split_parse_tree_src__ModuleName_14, parse_tree__split_parse_tree_src__Context_15, (MR_Integer) 3, parse_tree__split_parse_tree_src__ParentModuleName_33, parse_tree__split_parse_tree_src__OldEntry_169, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51);
                      }
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53;
                    }
                  else
                    {
                      MR_Word parse_tree__split_parse_tree_src__SplitNested_167;
                      MR_Word parse_tree__split_parse_tree_src__Entry_168;

                      {
                        parse_tree__split_parse_tree_src__SplitNested_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_167, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                        MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_167, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_15));
                      }
                      {
                        parse_tree__split_parse_tree_src__Entry_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_168, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__SplitNested_167));
                        MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_168, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ItemBlockCord_38));
                      }
                      {
                        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_14)), ((MR_Box) (parse_tree__split_parse_tree_src__Entry_168)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_53_53, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_47);
                      }
                      *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_51 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_56_56;
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
            MR_Word parse_tree__split_parse_tree_src__V_14_14;
            MR_Word parse_tree__split_parse_tree_src__V_17_17;
            MR_Word parse_tree__split_parse_tree_src__V_18_18;
            MR_Word parse_tree__split_parse_tree_src__V_19_19;
            MR_Word parse_tree__split_parse_tree_src__V_20_20;
            MR_Word parse_tree__split_parse_tree_src__V_21_21;
            MR_Word parse_tree__split_parse_tree_src__V_22_22;
            MR_Word parse_tree__split_parse_tree_src__V_23_23;
            MR_Integer parse_tree__split_parse_tree_src__V_24_24;

            parse_tree__split_parse_tree_src__succeeded = ((((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Item_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                parse_tree__split_parse_tree_src__ItemInstance_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__Item_7, (MR_Integer) 1)));
                parse_tree__split_parse_tree_src__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 0)));
                parse_tree__split_parse_tree_src__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 1)));
                parse_tree__split_parse_tree_src__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 2)));
                parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 3)));
                parse_tree__split_parse_tree_src__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 4)));
                parse_tree__split_parse_tree_src__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 5)));
                parse_tree__split_parse_tree_src__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 6)));
                parse_tree__split_parse_tree_src__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 7)));
                parse_tree__split_parse_tree_src__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 8)));
                parse_tree__split_parse_tree_src__succeeded = (parse_tree__split_parse_tree_src__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                parse_tree__split_parse_tree_src__succeeded = !(parse_tree__split_parse_tree_src__succeeded);
              }
            if (parse_tree__split_parse_tree_src__succeeded)
              {
                MR_Word parse_tree__split_parse_tree_src__InstanceContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 7)));
                MR_Word parse_tree__split_parse_tree_src__Msg_38;
                MR_Word parse_tree__split_parse_tree_src__Spec_39;
                MR_Word parse_tree__split_parse_tree_src__V_51_51;
                MR_Word parse_tree__split_parse_tree_src__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 0)));
                MR_Word parse_tree__split_parse_tree_src__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 1)));
                MR_Word parse_tree__split_parse_tree_src__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 2)));
                MR_Word parse_tree__split_parse_tree_src__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 3)));
                MR_Word parse_tree__split_parse_tree_src__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 4)));
                MR_Word parse_tree__split_parse_tree_src__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 5)));
                MR_Word parse_tree__split_parse_tree_src__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 6)));
                MR_Integer parse_tree__split_parse_tree_src__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ItemInstance_10, (MR_Integer) 8)));

                {
                  parse_tree__split_parse_tree_src__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_38, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__InstanceContext_11));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[77])));
                }
                {
                  parse_tree__split_parse_tree_src__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_51_51, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_38));
                  MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__split_parse_tree_src__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_39, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_51_51));
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
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__Items_8;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_15_15;

              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2;
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
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
      {
        MR_bool parse_tree__split_parse_tree_src__succeeded;

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
                {
                  parse_tree__split_parse_tree_src__check_interface_items_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__Items_14, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17);
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1 = parse_tree__split_parse_tree_src__RawItemBlocks_8;
              MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17_17;

              parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_2 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0__tmp_copy_2;
              parse_tree__split_parse_tree_src__HeadVar__1_1 = parse_tree__split_parse_tree_src__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
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
    MR_Word parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_29;
    MR_Word parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_31;
    MR_Word parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_33;
    MR_Word parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_35;

    {
      parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_1), ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_2), &parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_29, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_4), &parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_31, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_6), &parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_33, ((MR_Word) parse_tree__split_parse_tree_src__wrapper_arg_8), &parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_35);
    }
    *parse_tree__split_parse_tree_src__wrapper_arg_3 = ((MR_Box) (parse_tree__split_parse_tree_src__conv5_STATE_VARIABLE_SplitModuleMap_29));
    *parse_tree__split_parse_tree_src__wrapper_arg_5 = ((MR_Box) (parse_tree__split_parse_tree_src__conv4_STATE_VARIABLE_SubModulesMap_31));
    *parse_tree__split_parse_tree_src__wrapper_arg_7 = ((MR_Box) (parse_tree__split_parse_tree_src__conv3_STATE_VARIABLE_RawCompUnitsCord_33));
    *parse_tree__split_parse_tree_src__wrapper_arg_9 = ((MR_Box) (parse_tree__split_parse_tree_src__conv2_STATE_VARIABLE_Specs_35));
  }
}

static void MR_CALL 
parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(
  MR_Word parse_tree__split_parse_tree_src__ModuleName_10,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_28,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33,
  MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34,
  MR_Word * parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__split_parse_tree_src__Entry_15;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36;
    MR_Box parse_tree__split_parse_tree_src__conv0_Entry_15;

    {
      mercury__map__det_remove_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src__parse_tree__split_parse_tree_src__type_ctor_info_split_module_entry_0, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), &parse_tree__split_parse_tree_src__conv0_Entry_15, parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_0_28, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36);
    }
    parse_tree__split_parse_tree_src__Entry_15 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_Entry_15);
    if (((MR_tag((MR_Word) parse_tree__split_parse_tree_src__Entry_15)) == (MR_mktag((MR_Integer) 0))))
      {
        {
          mercury__map__delete_3_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31);
        }
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32;
        *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34;
      }
    else
      {
        MR_Word parse_tree__split_parse_tree_src__NestedInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_15, (MR_Integer) 0)));
        MR_Word parse_tree__split_parse_tree_src__RawItemBlockCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Entry_15, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55;
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56;
        MR_Word parse_tree__split_parse_tree_src__SubModulesCord_26;
        MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_57_57;
        MR_Box parse_tree__split_parse_tree_src__conv1_SubModulesCord_26;

        switch (MR_tag((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__split_parse_tree_src__Context_90 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 0);
              MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_91;
              MR_Word parse_tree__split_parse_tree_src__RawCompUnit_92;

              {
                parse_tree__split_parse_tree_src__RawItemBlocks_91 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
              }
              {
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_91, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55);
              }
              {
                parse_tree__split_parse_tree_src__RawCompUnit_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_92, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_92, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_90));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_92, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_91));
              }
              {
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_92)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__split_parse_tree_src__Context_85 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 1);
              MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_86;
              MR_Word parse_tree__split_parse_tree_src__RawCompUnit_87;

              {
                parse_tree__split_parse_tree_src__RawItemBlocks_86 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
              }
              {
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_86, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55);
              }
              {
                parse_tree__split_parse_tree_src__RawCompUnit_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_87, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_87, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_85));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_87, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_86));
              }
              {
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_87)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__split_parse_tree_src__Pieces_23;
              MR_Word parse_tree__split_parse_tree_src__Msg_24;
              MR_Word parse_tree__split_parse_tree_src__Spec_25;
              MR_Word parse_tree__split_parse_tree_src__V_39_39;
              MR_Word parse_tree__split_parse_tree_src__V_40_40;
              MR_Word parse_tree__split_parse_tree_src__V_47_47;
              MR_Word parse_tree__split_parse_tree_src__V_48_48;
              MR_Word parse_tree__split_parse_tree_src__V_52_52;
              MR_Word parse_tree__split_parse_tree_src__Context_65 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__NestedInfo_17), (MR_Integer) 2);

              {
                parse_tree__split_parse_tree_src__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__V_40_40, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
              }
              {
                parse_tree__split_parse_tree_src__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_39_39, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_40_40));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__split_parse_tree_src_scalar_common_1[7])));
              }
              {
                parse_tree__split_parse_tree_src__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__split_parse_tree_src_scalar_common_1[76])));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__Pieces_23, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_39_39));
              }
              {
                parse_tree__split_parse_tree_src__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_48_48, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Pieces_23));
              }
              {
                parse_tree__split_parse_tree_src__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_47_47, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__V_48_48));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__split_parse_tree_src__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_24, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_65));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Msg_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__V_47_47));
              }
              {
                parse_tree__split_parse_tree_src__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Msg_24));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__split_parse_tree_src__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__Spec_25, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__V_52_52));
              }
              {
                parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__Spec_25));
                MR_hl_field(MR_mktag(1), parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34));
              }
              parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__split_parse_tree_src__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 0)));
              MR_Word parse_tree__split_parse_tree_src__RawItemBlocks_21;
              MR_Word parse_tree__split_parse_tree_src__RawCompUnit_22;
              MR_Word parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__NestedInfo_17, (MR_Integer) 1)));

              {
                parse_tree__split_parse_tree_src__RawItemBlocks_21 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[1], parse_tree__split_parse_tree_src__RawItemBlockCord_18);
              }
              {
                parse_tree__split_parse_tree_src__check_interface_blocks_for_abstract_instances_3_p_0(parse_tree__split_parse_tree_src__RawItemBlocks_21, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_34, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55);
              }
              {
                parse_tree__split_parse_tree_src__RawCompUnit_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 0) = ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__Context_19));
                MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__RawCompUnit_22, 2) = ((MR_Box) (parse_tree__split_parse_tree_src__RawItemBlocks_21));
              }
              {
                parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_0_32, ((MR_Box) (parse_tree__split_parse_tree_src__RawCompUnit_22)));
              }
            }
            break;
        }
        {
          parse_tree__split_parse_tree_src__succeeded = mercury__map__remove_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_10)), &parse_tree__split_parse_tree_src__conv1_SubModulesCord_26, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30, &parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_57_57);
        }
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            parse_tree__split_parse_tree_src__SubModulesCord_26 = ((MR_Word) parse_tree__split_parse_tree_src__conv1_SubModulesCord_26);
            parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
          }
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            MR_Word parse_tree__split_parse_tree_src__SubModules_27;
            MR_Word parse_tree__split_parse_tree_src__V_58_58;
            MR_Box parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_29;
            MR_Box parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_31;
            MR_Box parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_33;
            MR_Box parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_35;

            {
              parse_tree__split_parse_tree_src__V_58_58 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, parse_tree__split_parse_tree_src__SubModulesCord_26);
            }
            {
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, parse_tree__split_parse_tree_src__V_58_58, &parse_tree__split_parse_tree_src__SubModules_27);
            }
            {
              mercury__list__foldl4_10_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_66_66, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[0], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[1], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[2], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[3], (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_2[2], parse_tree__split_parse_tree_src__SubModules_27, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36)), &parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_29, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_57_57)), &parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_31, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56)), &parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_33, ((MR_Box) (parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55)), &parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_35);
            }
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29 = ((MR_Word) parse_tree__split_parse_tree_src__conv9_STATE_VARIABLE_SplitModuleMap_29);
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31 = ((MR_Word) parse_tree__split_parse_tree_src__conv8_STATE_VARIABLE_SubModulesMap_31);
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33 = ((MR_Word) parse_tree__split_parse_tree_src__conv7_STATE_VARIABLE_RawCompUnitsCord_33);
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35 = ((MR_Word) parse_tree__split_parse_tree_src__conv6_STATE_VARIABLE_Specs_35);
          }
        else
          {
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_35 = parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_55_55;
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_33 = parse_tree__split_parse_tree_src__STATE_VARIABLE_RawCompUnitsCord_56_56;
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_31 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_30;
            *parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_29 = parse_tree__split_parse_tree_src__STATE_VARIABLE_SplitModuleMap_36_36;
          }
      }
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
    MR_Word parse_tree__split_parse_tree_src__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_5, (MR_Integer) 1)));
    MR_Word parse_tree__split_parse_tree_src__SiblingModules0_10;
    MR_Box parse_tree__split_parse_tree_src__conv0_SiblingModules0_10;

    {
      parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), &parse_tree__split_parse_tree_src__conv0_SiblingModules0_10);
    }
    if (parse_tree__split_parse_tree_src__succeeded)
      {
        parse_tree__split_parse_tree_src__SiblingModules0_10 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_SiblingModules0_10);
        parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
      }
    if (parse_tree__split_parse_tree_src__succeeded)
      {
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word parse_tree__split_parse_tree_src__SiblingModules_11;

        {
          parse_tree__split_parse_tree_src__SiblingModules_11 = mercury__cord__snoc_2_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_19, parse_tree__split_parse_tree_src__SiblingModules0_10, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
        }
        {
          mercury__map__det_update_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_19, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_11)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);
        }
      }
    else
      {
        MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word parse_tree__split_parse_tree_src__SiblingModules_16;

        {
          parse_tree__split_parse_tree_src__SiblingModules_16 = mercury__cord__singleton_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_21, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
        }
        {
          mercury__map__det_insert_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_21, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_8)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_16)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_12, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_13);
        }
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
        MR_Word parse_tree__split_parse_tree_src__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionAncestors_10, (MR_Integer) 1)));
        MR_Word parse_tree__split_parse_tree_src__SiblingModules0_21;
        MR_Box parse_tree__split_parse_tree_src__conv0_SiblingModules0_21;

        {
          parse_tree__split_parse_tree_src__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), &parse_tree__split_parse_tree_src__conv0_SiblingModules0_21);
        }
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            parse_tree__split_parse_tree_src__SiblingModules0_21 = ((MR_Word) parse_tree__split_parse_tree_src__conv0_SiblingModules0_21);
            parse_tree__split_parse_tree_src__succeeded = MR_TRUE;
          }
        if (parse_tree__split_parse_tree_src__succeeded)
          {
            MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_19_28 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word parse_tree__split_parse_tree_src__SiblingModules_22;

            {
              parse_tree__split_parse_tree_src__SiblingModules_22 = mercury__cord__snoc_2_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_28, parse_tree__split_parse_tree_src__SiblingModules0_21, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
            }
            {
              mercury__map__det_update_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_19_28, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_22)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);
            }
          }
        else
          {
            MR_Word parse_tree__split_parse_tree_src__TypeCtorInfo_21_30 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word parse_tree__split_parse_tree_src__SiblingModules_25;

            {
              parse_tree__split_parse_tree_src__SiblingModules_25 = mercury__cord__singleton_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_30, ((MR_Box) (parse_tree__split_parse_tree_src__ModuleName_6)));
            }
            {
              mercury__map__det_insert_4_p_0(parse_tree__split_parse_tree_src__TypeCtorInfo_21_30, (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0], ((MR_Box) (parse_tree__split_parse_tree_src__ParentModuleName_19)), ((MR_Box) (parse_tree__split_parse_tree_src__SiblingModules_25)), parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_0_11, parse_tree__split_parse_tree_src__STATE_VARIABLE_SubModulesMap_12);
            }
          }
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
        MR_bool parse_tree__split_parse_tree_src__succeeded;
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
                    MR_Word parse_tree__split_parse_tree_src__SectionAncestors__tmp_copy_3 = parse_tree__split_parse_tree_src__SectionParentAncestors_9;

                    parse_tree__split_parse_tree_src__SectionAncestors_3 = parse_tree__split_parse_tree_src__SectionAncestors__tmp_copy_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__split_parse_tree_src__ProblemAncestor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionParentAncestors_9, (MR_Integer) 0)));
                  MR_Word parse_tree__split_parse_tree_src__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__SectionParentAncestors_9, (MR_Integer) 1)));

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

static MR_Word MR_CALL 
parse_tree__split_parse_tree_src__split_nested_info_get_context_1_f_0(
  MR_Word parse_tree__split_parse_tree_src__SplitNested_3)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
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
        parse_tree__split_parse_tree_src__Context_4 = (MR_Word) MR_body(((MR_Word) parse_tree__split_parse_tree_src__SplitNested_3), (MR_Integer) 2);
        break;
      case (MR_Integer) 3:
        {
          MR_Word parse_tree__split_parse_tree_src__V_5_5;

          parse_tree__split_parse_tree_src__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 0)));
          parse_tree__split_parse_tree_src__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__split_parse_tree_src__SplitNested_3, (MR_Integer) 1)));
        }
        break;
    }
    return parse_tree__split_parse_tree_src__Context_4;
  }
}

static MR_bool MR_CALL 
parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2(
  MR_Box parse_tree__split_parse_tree_src__closure_arg)
{
  {
    MR_bool parse_tree__split_parse_tree_src__succeeded;
    MR_Box parse_tree__split_parse_tree_src__closure = parse_tree__split_parse_tree_src__closure_arg;

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__210__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 4))));
    }
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

    {
      parse_tree__split_parse_tree_src__succeeded = parse_tree__split_parse_tree_src__IntroducedFrom__pred__split_into_compilation_units_perform_checks__208__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__closure, (MR_Integer) 4))));
    }
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
    MR_Word parse_tree__split_parse_tree_src__V_19_19;
    MR_Word parse_tree__split_parse_tree_src__V_20_20;
    MR_Word parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21;
    MR_Word parse_tree__split_parse_tree_src__V_22_22;
    MR_Word parse_tree__split_parse_tree_src__V_24_24;
    MR_Word parse_tree__split_parse_tree_src__V_28_28;
    MR_Word parse_tree__split_parse_tree_src__V_29_29;
    MR_Word parse_tree__split_parse_tree_src__V_33_33;
    MR_Word parse_tree__split_parse_tree_src__V_11_11;
    MR_Word parse_tree__split_parse_tree_src__V_12_12;

    {
      parse_tree__split_parse_tree_src__V_19_19 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeCtorInfo_35_35);
    }
    parse_tree__split_parse_tree_src__TypeInfo_36_36 = (MR_Word) &parse_tree__split_parse_tree_src_scalar_common_1[0];
    {
      parse_tree__split_parse_tree_src__V_20_20 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeInfo_36_36);
    }
    {
      parse_tree__split_parse_tree_src__split_parse_tree_discover_submodules_8_p_0(parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__split_parse_tree_src__V_19_19, &parse_tree__split_parse_tree_src__SplitModuleMap_8, parse_tree__split_parse_tree_src__V_20_20, &parse_tree__split_parse_tree_src__SubModulesMap_9, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_0_16, &parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21);
    }
    parse_tree__split_parse_tree_src__TopModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 0)));
    parse_tree__split_parse_tree_src__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 1)));
    parse_tree__split_parse_tree_src__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__ParseTreeSrc_5, (MR_Integer) 2)));
    parse_tree__split_parse_tree_src__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    {
      parse_tree__split_parse_tree_src__V_22_22 = mercury__cord__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_37_37);
    }
    {
      parse_tree__split_parse_tree_src__create_split_compilation_units_depth_first_9_p_0(parse_tree__split_parse_tree_src__TopModuleName_10, parse_tree__split_parse_tree_src__SplitModuleMap_8, &parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13, parse_tree__split_parse_tree_src__SubModulesMap_9, &parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14, parse_tree__split_parse_tree_src__V_22_22, &parse_tree__split_parse_tree_src__RawCompUnitCord_15, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_21_21, parse_tree__split_parse_tree_src__STATE_VARIABLE_Specs_17);
    }
    {
      parse_tree__split_parse_tree_src__V_28_28 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeCtorInfo_35_35);
    }
    {
      parse_tree__split_parse_tree_src__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSplitModuleMap_13));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_24_24, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__V_28_28));
    }
    {
      mercury__require__expect_4_p_0(parse_tree__split_parse_tree_src__V_24_24, (MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSplitModuleMap != map.init");
    }
    {
      parse_tree__split_parse_tree_src__V_33_33 = mercury__map__init_0_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_34_34, parse_tree__split_parse_tree_src__TypeInfo_36_36);
    }
    {
      parse_tree__split_parse_tree_src__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 0) = ((MR_Box) (&parse_tree__split_parse_tree_src_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 1) = ((MR_Box) (parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 3) = ((MR_Box) (parse_tree__split_parse_tree_src__LeftOverSubModulesMap_14));
      MR_hl_field(MR_mktag(0), parse_tree__split_parse_tree_src__V_29_29, 4) = ((MR_Box) (parse_tree__split_parse_tree_src__V_33_33));
    }
    {
      mercury__require__expect_4_p_0(parse_tree__split_parse_tree_src__V_29_29, (MR_String) "parse_tree.split_parse_tree_src", (MR_String) "predicate \140parse_tree.split_parse_tree_src.split_into_compilation_units_perform_checks\'/4", (MR_String) "LeftOverSubModulesMap != map.init");
    }
    {
      *parse_tree__split_parse_tree_src__RawCompUnits_6 = mercury__cord__list_1_f_0(parse_tree__split_parse_tree_src__TypeCtorInfo_37_37, parse_tree__split_parse_tree_src__RawCompUnitCord_15);
    }
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
