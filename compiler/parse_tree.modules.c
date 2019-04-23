/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version rotd-2019-04-23
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


// :- module parse_tree.modules.
// :- implementation.

/*
INIT mercury__parse_tree__modules__init
ENDINIT
*/

#include "parse_tree.modules.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__modules__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_1;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_2;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_import_and_or_use_0[3];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_import_and_or_use_0[3];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_and_or_use_0[3];

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2];

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_import_or_use_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1];

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_include_context_0_0[2];

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_include_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_include_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_include_context_0_0[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_include_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_include_context_0[1];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_include_context_0[1];

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_1;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_2;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_int123_0[3];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_int123_0[3];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_int123_0[3];

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_1;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_maybe_abstract_section_0[2];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_maybe_abstract_section_0[2];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_maybe_abstract_section_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_missing_ancestor_info_0_0[4];

static const MR_ConstString parse_tree__modules__parse_tree__modules__field_names_missing_ancestor_info_0_0[4];

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_missing_ancestor_info_0_0[4];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_ancestor_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_ancestor_info_0_0[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_missing_ancestor_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_missing_ancestor_info_0[1];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_missing_ancestor_info_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__modules__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_missing_where_0_0[1];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_0;

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_1;

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_2;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_where_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_where_0_1[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_missing_where_0[2];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_missing_where_0[3];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_missing_where_0[3];

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0[2];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0[2];

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_1;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_parent_or_ancestor_0[2];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_parent_or_ancestor_0[2];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_parent_or_ancestor_0[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_1[2];

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_process_interface_kind_0_1[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_2[1];

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_process_interface_kind_0_2[1];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_2;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_2[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_process_interface_kind_0[3];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_process_interface_kind_0[3];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_process_interface_kind_0[3];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_parse_tree__modules__type_ctor_info_which_map_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_1;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_2;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_3;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_which_map_0[4];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_which_map_0[4];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_which_map_0[4];

static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__check_imports_accessibility__2069__1_3_p_0(
  MR_Word HeadVar__1_73,
  MR_Word HeadVar__2_74,
  MR_Word * HeadVar__3_75);

static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__check_imports_accessibility__2057__1_3_p_0(
  MR_Word HeadVar__1_63,
  MR_Word HeadVar__2_64,
  MR_Word * HeadVar__3_65);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_interface_general__1845__1_2_p_0(
  MR_Word ModuleName_21,
  MR_Word ParseTreeModuleName_39);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_int0_files_of_ancestor_modules__1585__1_2_p_0(
  MR_Word FirstAncestor_27,
  MR_Word ModuleName_29);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__raw_item_blocks_to_split_src__1171__1_2_p_0(
  MR_Word Section_7,
  MR_Word HeadVar__2_23);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__667__1_2_p_0(
  MR_Word SortedOldSubItems_104,
  MR_Word HeadVar__2_169);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__665__1_2_p_0(
  MR_Word SortedNewImpItems_77,
  MR_Word SortedOldImpItems_103);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__663__1_2_p_0(
  MR_Word SortedNewIntItems_76,
  MR_Word SortedOldIntItems_102);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__662__1_2_p_0(
  MR_Word SortedOldSubAvails_101,
  MR_Word HeadVar__2_159);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__660__1_2_p_0(
  MR_Word SortedNewImpAvails_75,
  MR_Word SortedOldImpAvails_100);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__658__1_2_p_0(
  MR_Word SortedNewIntAvails_74,
  MR_Word SortedOldIntAvails_99);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__657__1_2_p_0(
  MR_Word SortedOldSubIncls_98,
  MR_Word HeadVar__2_149);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__655__1_2_p_0(
  MR_Word SortedNewImpIncls_73,
  MR_Word SortedOldImpIncls_97);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__653__1_2_p_0(
  MR_Word SortedNewIntIncls_72,
  MR_Word SortedOldIntIncls_96);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__620__1_2_p_0(
  MR_Word ImpUsed_28,
  MR_Word NewImpUses_62);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__618__1_2_p_0(
  MR_Word ImpImported_27,
  MR_Word NewImpImports_61);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__616__1_2_p_0(
  MR_Word IntUsed_33,
  MR_Word NewIntUses_66);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__614__1_2_p_0(
  MR_Word IntImported_32,
  MR_Word NewIntImports_65);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__398__1_2_p_0(
  MR_Word SortedOldSpecs_44,
  MR_Word SortedNewSpecs_80);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__395__1_2_p_0(
  MR_Word SortedNewForeignInclFiles_117,
  MR_Word SortedOldForeignInclFiles_146);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__393__1_2_p_0(
  MR_Word SortedNewFactTables_116,
  MR_Word SortedOldFactTables_145);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__390__1_2_p_0(
  MR_Word SortedNewSubItems_115,
  MR_Word SortedOldSubItems_144);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__388__1_2_p_0(
  MR_Word SortedNewImpItems_114,
  MR_Word SortedOldImpItems_143);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__386__1_2_p_0(
  MR_Word SortedNewIntItems_113,
  MR_Word SortedOldIntItems_142);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__384__1_2_p_0(
  MR_Word SortedNewSubAvails_112,
  MR_Word SortedOldSubAvails_141);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__382__1_2_p_0(
  MR_Word SortedNewImpAvails_111,
  MR_Word SortedOldImpAvails_140);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__380__1_2_p_0(
  MR_Word SortedNewIntAvails_110,
  MR_Word SortedOldIntAvails_139);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__378__1_2_p_0(
  MR_Word SortedNewSubIncls_109,
  MR_Word SortedOldSubIncls_138);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__376__1_2_p_0(
  MR_Word SortedNewImpIncls_108,
  MR_Word SortedOldImpIncls_137);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__374__1_2_p_0(
  MR_Word SortedNewIntIncls_107,
  MR_Word SortedOldIntIncls_136);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__330__1_2_p_0(
  MR_Word IntUsedImpImported_49,
  MR_Word NewIntUsedImpImported_79);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__328__1_2_p_0(
  MR_Word ImpUsed_48,
  MR_Word NewImpUses_84);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__326__1_2_p_0(
  MR_Word ImpImported_47,
  MR_Word NewImpImports_83);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__324__1_2_p_0(
  MR_Word IntUsed2_53,
  MR_Word NewIntUses_88);

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__322__1_2_p_0(
  MR_Word IntImported2_52,
  MR_Word NewIntImports_87);

static void MR_CALL 
parse_tree__modules____Compare____which_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_map_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____process_interface_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____process_interface_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____parent_or_ancestor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____missing_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____maybe_abstract_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____int123_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____int123_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____include_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____include_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules____Compare____import_and_or_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__modules__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__modules__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2);

static void MR_CALL 
parse_tree__modules__report_missing_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__modules__report_abstract_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
parse_tree__modules__report_any_missing_includes_for_imports_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_for_imports_6_p_0(
  MR_Word ReadModules_7,
  MR_Word InclMap_8,
  MR_Word ModuleName_9,
  MR_Word IoUCs_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static MR_Word MR_CALL 
parse_tree__modules__wrap_module_name_1_f_0(
  MR_Word Module_3);

static MR_Box MR_CALL 
parse_tree__modules__report_missing_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__report_missing_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MissingWhere_8,
  MR_Word MissingModuleName_9,
  MR_Word SrcIntInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
parse_tree__modules__find_any_missing_ancestor_imports_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__modules__find_any_missing_ancestor_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__modules__find_any_missing_ancestor_imports_7_p_0(
  MR_Word CurrentModule_8,
  MR_Word ParentOrAncestor_9,
  MR_Word ImportUseMap_10,
  MR_Word ImportedModule_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_MissingAncestorMap_0_34,
  MR_Word * STATE_VARIABLE_MissingAncestorMap_35);

static void MR_CALL 
parse_tree__modules__update_iu_and_least_context_5_p_0(
  MR_Word IoUC_6,
  MR_Word STATE_VARIABLE_ImportAndOrUse_0_11,
  MR_Word * STATE_VARIABLE_ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_LeastContext_0_13,
  MR_Word * STATE_VARIABLE_LeastContext_14);

static void MR_CALL 
parse_tree__modules__append_one_or_more_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * AB_6);

static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
  MR_Word ModuleName_3);

static void MR_CALL 
parse_tree__modules__warn_import_for_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word AncestorName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__modules__warn_import_for_self_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__modules__new_warn_import_for_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__new_warn_import_for_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ImportOrUseMap_7,
  MR_Word AncestorModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word RawItemBlocks_7,
  MR_Word AncestorModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static MR_Box MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OptItemBlocks_0_3,
  MR_Word * STATE_VARIABLE_OptItemBlocks_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_Error_0_7,
  MR_Word * STATE_VARIABLE_Error_8);

static MR_Box MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Ancestors_22,
  MR_Word STATE_VARIABLE_DirectImports_0_31,
  MR_Word * STATE_VARIABLE_DirectImports_32,
  MR_Word STATE_VARIABLE_DirectUses_0_33,
  MR_Word * STATE_VARIABLE_DirectUses_34,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_35,
  MR_Word * STATE_VARIABLE_ModuleAndImports_36);

static void MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Module_17,
  MR_Word STATE_VARIABLE_DirectImports_0_33,
  MR_Word * STATE_VARIABLE_DirectImports_34,
  MR_Word STATE_VARIABLE_DirectUses_0_35,
  MR_Word * STATE_VARIABLE_DirectUses_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_54_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word PIKind_16,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_50_49_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_18,
  MR_Word Modules_22,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_53_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word UnusedArgs_1,
  MR_Word StructureReuse_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(
  MR_Word UnusedArgs_1,
  MR_Word StructureReuse_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ItemCord_0_4,
  MR_Word * STATE_VARIABLE_ItemCord_5);

static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0(
  MR_Word Globals_1,
  MR_Word Transitive_2,
  MR_Word HeadVar__3_3,
  MR_Word ModulesProcessed0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_Error_0_9,
  MR_Word * STATE_VARIABLE_Error_10);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word FileType_11,
  MR_String FileName_12,
  MR_Word ModuleSpecs_13,
  MR_Word ModuleErrors_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23,
  MR_Word STATE_VARIABLE_Error_0_24,
  MR_Word * STATE_VARIABLE_Error_25);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_14(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_13(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_12(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_11(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_10(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_18(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_17(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_16(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_15(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_14(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_13(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_12(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_11(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_10(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_51_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word PIKind_16,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_52_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_18,
  MR_Word Modules_22,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_50_52_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_49_50_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43);

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word NewIntSection_19,
  MR_Word NewImpSection_20,
  MR_Word Ancestors_22,
  MR_Word STATE_VARIABLE_DirectImports_0_31,
  MR_Word * STATE_VARIABLE_DirectImports_32,
  MR_Word STATE_VARIABLE_DirectUses_0_33,
  MR_Word * STATE_VARIABLE_DirectUses_34,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_35,
  MR_Word * STATE_VARIABLE_ModuleAndImports_36);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Module_17,
  MR_Word NewIntSection_18,
  MR_Word NewImpSection_19,
  MR_Word STATE_VARIABLE_DirectImports_0_33,
  MR_Word * STATE_VARIABLE_DirectImports_34,
  MR_Word STATE_VARIABLE_DirectUses_0_35,
  MR_Word * STATE_VARIABLE_DirectUses_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Modules_22,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_49_55_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43);

static MR_bool MR_CALL 
parse_tree__modules__process_module_interface_general_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__modules__process_module_interface_general_14_p_0(
  MR_Word TypeInfo_for_MS_84,
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_17,
  MR_Word NewIntSection_18,
  MR_Word NewImpSection_19,
  MR_Word SectionAppend_20,
  MR_Word ModuleName_21,
  MR_Word * IntAvails_22,
  MR_Word * ImpAvails_23,
  MR_Word * ItemBlocks_24,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_54,
  MR_Word * STATE_VARIABLE_ModuleAndImports_55);

static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word NeedQual_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_18,
  MR_Word * STATE_VARIABLE_ModuleAndImports_19);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0(
  MR_Word ReadModules_7,
  MR_Word InclMap_8,
  MR_Word Module_9,
  MR_Word Contexts_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_10_p_0(
  MR_Word ModuleName_11,
  MR_Word SrcItemBlocks_12,
  MR_Word IntItemBlocks_13,
  MR_Word OptItemBlocks_14,
  MR_Word IntForOptItemBlocks_15,
  MR_Word * STATE_VARIABLE_ReadModules_22,
  MR_Word * STATE_VARIABLE_InclMap_23,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_24,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_25,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_26);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_104_111_52_95_95_91_49_93_95_48_13_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_13_p_0(
  MR_Word Ancestors_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_13_p_0(
  MR_Word Ancestors_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_13_p_0(
  MR_Word Ancestors_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13);

static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3);

static void MR_CALL 
parse_tree__modules__record_includes_acc_4_p_0(
  MR_Word Section_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_IntImportedMap_0_23,
  MR_Word * STATE_VARIABLE_IntImportedMap_24,
  MR_Word STATE_VARIABLE_IntUsedMap_0_25,
  MR_Word * STATE_VARIABLE_IntUsedMap_26,
  MR_Word STATE_VARIABLE_ImpImportedMap_0_27,
  MR_Word * STATE_VARIABLE_ImpImportedMap_28,
  MR_Word STATE_VARIABLE_ImpUsedMap_0_29,
  MR_Word * STATE_VARIABLE_ImpUsedMap_30,
  MR_Word * IntUsedImpImported_20,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word Context_9,
  MR_Word ImportedMap_10,
  MR_Word STATE_VARIABLE_UsedMap_0_21,
  MR_Word * STATE_VARIABLE_UsedMap_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_IntImported_0_22,
  MR_Word * STATE_VARIABLE_IntImported_23,
  MR_Word STATE_VARIABLE_IntUsed_0_24,
  MR_Word * STATE_VARIABLE_IntUsed_25,
  MR_Word STATE_VARIABLE_ImpImported_0_26,
  MR_Word * STATE_VARIABLE_ImpImported_27,
  MR_Word STATE_VARIABLE_ImpUsed_0_28,
  MR_Word * STATE_VARIABLE_ImpUsed_29,
  MR_Word * IntUsedImpImported_20,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Imported_0_20,
  MR_Word * STATE_VARIABLE_Imported_21,
  MR_Word STATE_VARIABLE_Used_0_22,
  MR_Word * STATE_VARIABLE_Used_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Ancestors_7,
  MR_Word ImportedOrUsedMap_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word RawItemBlocks_8,
  MR_Word Ancestors_9,
  MR_Word ImportedOrUsed_10,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleName_2,
  MR_Word STATE_VARIABLE_AvailContexts_0_3,
  MR_Word * STATE_VARIABLE_AvailContexts_4);

static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleName_2,
  MR_Word STATE_VARIABLE_AvailContexts_0_3,
  MR_Word * STATE_VARIABLE_AvailContexts_4);

static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
  MR_Word RawCompUnit_4,
  MR_Word * SrcItemBlocks_5,
  MR_Word * PublicChildren_6);

static MR_bool MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevClauses_0_2,
  MR_Word * STATE_VARIABLE_RevClauses_3,
  MR_Word STATE_VARIABLE_RevImpDecls_0_4,
  MR_Word * STATE_VARIABLE_RevImpDecls_5);

static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__modules__get_src_components_10_p_0(
  MR_Word SrcItemBlocks_11,
  MR_Word * STATE_VARIABLE_IntIncls_28,
  MR_Word * STATE_VARIABLE_ImpIncls_29,
  MR_Word * STATE_VARIABLE_SubIncls_30,
  MR_Word * STATE_VARIABLE_IntAvails_31,
  MR_Word * STATE_VARIABLE_ImpAvails_32,
  MR_Word * STATE_VARIABLE_SubAvails_33,
  MR_Word * STATE_VARIABLE_IntItems_34,
  MR_Word * STATE_VARIABLE_ImpItems_35,
  MR_Word * STATE_VARIABLE_SubItems_36);

static void MR_CALL 
parse_tree__modules__get_raw_components_7_p_0(
  MR_Word RawItemBlocks_8,
  MR_Word * STATE_VARIABLE_IntIncls_22,
  MR_Word * STATE_VARIABLE_ImpIncls_23,
  MR_Word * STATE_VARIABLE_IntAvails_24,
  MR_Word * STATE_VARIABLE_ImpAvails_25,
  MR_Word * STATE_VARIABLE_IntItems_26,
  MR_Word * STATE_VARIABLE_ImpItems_27);

static void MR_CALL 
parse_tree__modules__separate_instance_non_instance_4_p_0(
  MR_Word Items_5,
  MR_Word * AbstractInstanceItems_6,
  MR_Word * InstanceItems_7,
  MR_Word * NonInstanceItems_8);

static void MR_CALL 
parse_tree__modules__separate_instance_non_instance_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AbstractInstanceCord_0_2,
  MR_Word * STATE_VARIABLE_AbstractInstanceCord_3,
  MR_Word STATE_VARIABLE_InstanceCord_0_4,
  MR_Word * STATE_VARIABLE_InstanceCord_5,
  MR_Word STATE_VARIABLE_NonInstanceCord_0_6,
  MR_Word * STATE_VARIABLE_NonInstanceCord_7);

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_6_p_0(
  MR_Word IntItems_7,
  MR_Word ImpItems_8,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_13,
  MR_Word * STATE_VARIABLE_ForeignInclFiles_14,
  MR_Word * STATE_VARIABLE_Langs_15,
  MR_Word * STATE_VARIABLE_FactTables_16);

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3,
  MR_Word STATE_VARIABLE_ForeignInclFiles_0_4,
  MR_Word * STATE_VARIABLE_ForeignInclFiles_5,
  MR_Word STATE_VARIABLE_Langs_0_6,
  MR_Word * STATE_VARIABLE_Langs_7,
  MR_Word STATE_VARIABLE_FactTables_0_8,
  MR_Word * STATE_VARIABLE_FactTables_9);

static void MR_CALL 
parse_tree__modules__get_deps_maps_6_p_0(
  MR_Word IntAvails_7,
  MR_Word ImpAvails_8,
  MR_Word * IntImportsMap_9,
  MR_Word * IntUsesMap_10,
  MR_Word * ImpImportsMap_11,
  MR_Word * ImpUsesMap_12);

static void MR_CALL 
parse_tree__modules__accumulate_dependencies_in_avails_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportsMap_0_2,
  MR_Word * STATE_VARIABLE_ImportsMap_3,
  MR_Word STATE_VARIABLE_UsesMap_0_4,
  MR_Word * STATE_VARIABLE_UsesMap_5);

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____int123_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____int123_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__modules____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____process_interface_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____process_interface_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____which_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[77][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[37][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[8][6];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[14][5];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[5][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[13][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[2][9];

static /* final */ const MR_Box parse_tree__modules_scalar_common_9[1][10];

static /* final */ const MR_Box parse_tree__modules_scalar_common_10[6][1];




static /* final */ const MR_Box parse_tree__modules_scalar_common_1[77][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_include_context_0))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imported using both"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is visible only to its other submodules."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 54 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[25])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the absence of an"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "prevents access to the"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for its"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Adding such a declaration would obsolete"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a submodule named"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have a submodule named"))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[37][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[13]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[14]))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 24U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[0])),
    ((MR_Box) (parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[1])),
    ((MR_Box) (parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_7[0])),
    ((MR_Box) (parse_tree__modules__report_any_missing_includes_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[2])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[2])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[3])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[4])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[3])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[4])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[3])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[4])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[4])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[3])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[4])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[3])),
    ((MR_Box) (parse_tree__modules__process_module_int123_file__ho25_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[3])),
    ((MR_Box) (parse_tree__modules__process_module_int123_file__ho25_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[4])),
    ((MR_Box) (parse_tree__modules__process_module_int123_file__ho25_15_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[10])),
    ((MR_Box) (parse_tree__modules__read_optimization_interfaces_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[11])),
    ((MR_Box) (parse_tree__modules__read_optimization_interfaces_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[6])),
    ((MR_Box) (parse_tree__modules__process_module_int123_file__ho22_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[6])),
    ((MR_Box) (parse_tree__modules__process_module_int123_file__ho22_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[7])),
    ((MR_Box) (parse_tree__modules__process_module_int123_file__ho22_15_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[6])),
    ((MR_Box) (parse_tree__modules__process_module_int0_file__ho20_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[6])),
    ((MR_Box) (parse_tree__modules__process_module_int0_file__ho20_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_3[7])),
    ((MR_Box) (parse_tree__modules__process_module_int0_file__ho20_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[12])),
    ((MR_Box) (parse_tree__modules__grab_opt_files_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[10])),
    ((MR_Box) (parse_tree__modules__read_trans_opt_files_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[4])),
    ((MR_Box) (parse_tree__modules__find_any_missing_ancestor_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[4])),
    ((MR_Box) (parse_tree__modules__find_any_missing_ancestor_imports_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__report_missing_ancestor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[13])),
    ((MR_Box) (parse_tree__modules__report_any_missing_includes_for_imports_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[14][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[13][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_include_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_21)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_22)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_23)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_24)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_18)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_where_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_parent_or_ancestor_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__modules__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__modules__type_ctor_info_missing_ancestor_info_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_10[6][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 1 */
  {
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 2U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 4 */
  {
    (MR_Box) (((MR_Unsigned) 2U << 1))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__modules__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_include_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_one_or_more_1__plain_parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__modules__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_0 = {
  (MR_String) "import_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_1 = {
  (MR_String) "use_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_2 = {
  (MR_String) "import_and_use",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_import_and_or_use_0[3] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_import_and_or_use_0[3] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_2,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_and_or_use_0_1
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_and_or_use_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____import_and_or_use_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____import_and_or_use_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "import_and_or_use",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_import_and_or_use_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_import_and_or_use_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_import_and_or_use_0
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_import_or_use_context_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0 = {
  (MR_String) "import_or_use_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0,
  NULL,
  parse_tree__modules__parse_tree__modules__field_locns_import_or_use_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____import_or_use_context_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____import_or_use_context_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "import_or_use_context",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_include_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_maybe_abstract_section_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_include_context_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_include_context_0_0 = {
  (MR_String) "include_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__modules__parse_tree__modules__field_types_include_context_0_0,
  NULL,
  parse_tree__modules__parse_tree__modules__field_locns_include_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_include_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_include_context_0_0
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_include_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_include_context_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_include_context_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_include_context_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_include_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_include_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____include_context_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____include_context_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "include_context",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_include_context_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_include_context_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_include_context_0
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_0 = {
  (MR_String) "int123_1",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_1 = {
  (MR_String) "int123_2",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_2 = {
  (MR_String) "int123_3",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_int123_0[3] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_int123_0[3] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_int123_0_2
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_int123_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_int123_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____int123_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____int123_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "int123",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_int123_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_int123_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_int123_0
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_int_section_maker_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____int_section_maker_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____int_section_maker_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "int_section_maker",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_0 = {
  (MR_String) "non_abstract_section",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_1 = {
  (MR_String) "abstract_section",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_maybe_abstract_section_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_maybe_abstract_section_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_maybe_abstract_section_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_maybe_abstract_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_maybe_abstract_section_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____maybe_abstract_section_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____maybe_abstract_section_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "maybe_abstract_section",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_maybe_abstract_section_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_maybe_abstract_section_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_maybe_abstract_section_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_missing_ancestor_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_parent_or_ancestor_0),
  (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString parse_tree__modules__parse_tree__modules__field_names_missing_ancestor_info_0_0[4] = {
  (MR_String) "mai_modules",
  (MR_String) "mai_max_depth",
  (MR_String) "mai_import_use",
  (MR_String) "mai_least_context"
};

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_missing_ancestor_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_ancestor_info_0_0 = {
  (MR_String) "missing_ancestor_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__modules__parse_tree__modules__field_types_missing_ancestor_info_0_0,
  parse_tree__modules__parse_tree__modules__field_names_missing_ancestor_info_0_0,
  parse_tree__modules__parse_tree__modules__field_locns_missing_ancestor_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_ancestor_info_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_ancestor_info_0_0
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_missing_ancestor_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_ancestor_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_missing_ancestor_info_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_ancestor_info_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_missing_ancestor_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____missing_ancestor_info_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____missing_ancestor_info_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "missing_ancestor_info",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_missing_ancestor_info_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_missing_ancestor_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_missing_ancestor_info_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__modules__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____missing_ancestor_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____missing_ancestor_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "missing_ancestor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__modules__type_ctor_info_missing_ancestor_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_missing_where_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0)
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_0 = {
  (MR_String) "missing_in_src_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__modules__parse_tree__modules__field_types_missing_where_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_1 = {
  (MR_String) "missing_in_src_imp",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_2 = {
  (MR_String) "missing_in_non_src",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_where_0_0[2] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_1,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_2
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_where_0_1[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_0
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_missing_where_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_where_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_missing_where_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_missing_where_0[3] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_2,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_1,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_missing_where_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_missing_where_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_missing_where_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____missing_where_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____missing_where_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "missing_where",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_missing_where_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_missing_where_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_missing_where_0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_import_or_use_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_import_or_use_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_import_or_use_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_inclusion_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_inclusion_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_inclusion_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_include_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_opt_file_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____opt_file_type_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____opt_file_type_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "opt_file_type",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_0 = {
  (MR_String) "poa_parent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_1 = {
  (MR_String) "poa_ancestor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_parent_or_ancestor_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_parent_or_ancestor_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_parent_or_ancestor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____parent_or_ancestor_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____parent_or_ancestor_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "parent_or_ancestor",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_parent_or_ancestor_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_parent_or_ancestor_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_parent_or_ancestor_0
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0 = {
  (MR_String) "pik_int0",
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

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_int123_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_process_interface_kind_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1 = {
  (MR_String) "pik_direct",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_1,
  NULL,
  parse_tree__modules__parse_tree__modules__field_locns_process_interface_kind_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_int123_0)
};

static const MR_DuArgLocn parse_tree__modules__parse_tree__modules__field_locns_process_interface_kind_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_2 = {
  (MR_String) "pik_indirect",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_2,
  NULL,
  parse_tree__modules__parse_tree__modules__field_locns_process_interface_kind_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_1[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_2[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_2
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_process_interface_kind_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_process_interface_kind_0[3] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_2,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_process_interface_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_process_interface_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____process_interface_kind_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____process_interface_kind_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "process_interface_kind",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_process_interface_kind_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_process_interface_kind_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_process_interface_kind_0
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_section_appender_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____section_appender_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____section_appender_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "section_appender",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_parse_tree__modules__type_ctor_info_which_map_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__modules__parse_tree__modules__type_ctor_info_which_map_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_section_visibility_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____section_visibility_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____section_visibility_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "section_visibility",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__modules____vpti_func_2__pseudo_1__plain_parse_tree__modules__type_ctor_info_which_map_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_0 = {
  (MR_String) "src_int",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_1 = {
  (MR_String) "src_imp",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_2 = {
  (MR_String) "non_src_non_abstract",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_3 = {
  (MR_String) "non_src_abstract",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_which_map_0[4] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_2,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_which_map_0[4] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_3,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_2,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_which_map_0_0
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_which_map_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_which_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____which_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____which_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "which_map",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_which_map_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_which_map_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__modules__parse_tree__modules__functor_number_map_which_map_0
};

static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__check_imports_accessibility__2069__1_3_p_0(
  MR_Word HeadVar__1_73,
  MR_Word HeadVar__2_74,
  MR_Word * HeadVar__3_75)
{
  {
    parse_tree__modules__append_one_or_more_3_p_0((MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0), HeadVar__1_73, HeadVar__2_74, HeadVar__3_75);
  }
}

static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__check_imports_accessibility__2057__1_3_p_0(
  MR_Word HeadVar__1_63,
  MR_Word HeadVar__2_64,
  MR_Word * HeadVar__3_65)
{
  {
    parse_tree__modules__append_one_or_more_3_p_0((MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0), HeadVar__1_63, HeadVar__2_64, HeadVar__3_65);
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_interface_general__1845__1_2_p_0(
  MR_Word ModuleName_21,
  MR_Word ParseTreeModuleName_39)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_21, ParseTreeModuleName_39);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_int0_files_of_ancestor_modules__1585__1_2_p_0(
  MR_Word FirstAncestor_27,
  MR_Word ModuleName_29)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstAncestor_27, ModuleName_29);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__raw_item_blocks_to_split_src__1171__1_2_p_0(
  MR_Word Section_7,
  MR_Word HeadVar__2_23)
{
  {
    MR_bool succeeded = (Section_7 == HeadVar__2_23);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__667__1_2_p_0(
  MR_Word SortedOldSubItems_104,
  MR_Word HeadVar__2_169)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[3]), ((MR_Box) (SortedOldSubItems_104)), ((MR_Box) (HeadVar__2_169)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__665__1_2_p_0(
  MR_Word SortedNewImpItems_77,
  MR_Word SortedOldImpItems_103)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[3]), ((MR_Box) (SortedOldImpItems_103)), ((MR_Box) (SortedNewImpItems_77)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__663__1_2_p_0(
  MR_Word SortedNewIntItems_76,
  MR_Word SortedOldIntItems_102)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[3]), ((MR_Box) (SortedOldIntItems_102)), ((MR_Box) (SortedNewIntItems_76)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__662__1_2_p_0(
  MR_Word SortedOldSubAvails_101,
  MR_Word HeadVar__2_159)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[2]), ((MR_Box) (SortedOldSubAvails_101)), ((MR_Box) (HeadVar__2_159)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__660__1_2_p_0(
  MR_Word SortedNewImpAvails_75,
  MR_Word SortedOldImpAvails_100)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[2]), ((MR_Box) (SortedOldImpAvails_100)), ((MR_Box) (SortedNewImpAvails_75)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__658__1_2_p_0(
  MR_Word SortedNewIntAvails_74,
  MR_Word SortedOldIntAvails_99)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[2]), ((MR_Box) (SortedOldIntAvails_99)), ((MR_Box) (SortedNewIntAvails_74)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__657__1_2_p_0(
  MR_Word SortedOldSubIncls_98,
  MR_Word HeadVar__2_149)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[1]), ((MR_Box) (SortedOldSubIncls_98)), ((MR_Box) (HeadVar__2_149)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__655__1_2_p_0(
  MR_Word SortedNewImpIncls_73,
  MR_Word SortedOldImpIncls_97)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[1]), ((MR_Box) (SortedOldImpIncls_97)), ((MR_Box) (SortedNewImpIncls_73)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__653__1_2_p_0(
  MR_Word SortedNewIntIncls_72,
  MR_Word SortedOldIntIncls_96)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[1]), ((MR_Box) (SortedOldIntIncls_96)), ((MR_Box) (SortedNewIntIncls_72)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__620__1_2_p_0(
  MR_Word ImpUsed_28,
  MR_Word NewImpUses_62)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUsed_28, NewImpUses_62);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__618__1_2_p_0(
  MR_Word ImpImported_27,
  MR_Word NewImpImports_61)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImported_27, NewImpImports_61);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__616__1_2_p_0(
  MR_Word IntUsed_33,
  MR_Word NewIntUses_66)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsed_33, NewIntUses_66);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__614__1_2_p_0(
  MR_Word IntImported_32,
  MR_Word NewIntImports_65)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImported_32, NewIntImports_65);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__398__1_2_p_0(
  MR_Word SortedOldSpecs_44,
  MR_Word SortedNewSpecs_80)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[6]), ((MR_Box) (SortedOldSpecs_44)), ((MR_Box) (SortedNewSpecs_80)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__395__1_2_p_0(
  MR_Word SortedNewForeignInclFiles_117,
  MR_Word SortedOldForeignInclFiles_146)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[5]), ((MR_Box) (SortedOldForeignInclFiles_146)), ((MR_Box) (SortedNewForeignInclFiles_117)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__393__1_2_p_0(
  MR_Word SortedNewFactTables_116,
  MR_Word SortedOldFactTables_145)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[4]), ((MR_Box) (SortedOldFactTables_145)), ((MR_Box) (SortedNewFactTables_116)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__390__1_2_p_0(
  MR_Word SortedNewSubItems_115,
  MR_Word SortedOldSubItems_144)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[3]), ((MR_Box) (SortedOldSubItems_144)), ((MR_Box) (SortedNewSubItems_115)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__388__1_2_p_0(
  MR_Word SortedNewImpItems_114,
  MR_Word SortedOldImpItems_143)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[3]), ((MR_Box) (SortedOldImpItems_143)), ((MR_Box) (SortedNewImpItems_114)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__386__1_2_p_0(
  MR_Word SortedNewIntItems_113,
  MR_Word SortedOldIntItems_142)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[3]), ((MR_Box) (SortedOldIntItems_142)), ((MR_Box) (SortedNewIntItems_113)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__384__1_2_p_0(
  MR_Word SortedNewSubAvails_112,
  MR_Word SortedOldSubAvails_141)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[2]), ((MR_Box) (SortedOldSubAvails_141)), ((MR_Box) (SortedNewSubAvails_112)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__382__1_2_p_0(
  MR_Word SortedNewImpAvails_111,
  MR_Word SortedOldImpAvails_140)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[2]), ((MR_Box) (SortedOldImpAvails_140)), ((MR_Box) (SortedNewImpAvails_111)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__380__1_2_p_0(
  MR_Word SortedNewIntAvails_110,
  MR_Word SortedOldIntAvails_139)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[2]), ((MR_Box) (SortedOldIntAvails_139)), ((MR_Box) (SortedNewIntAvails_110)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__378__1_2_p_0(
  MR_Word SortedNewSubIncls_109,
  MR_Word SortedOldSubIncls_138)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[1]), ((MR_Box) (SortedOldSubIncls_138)), ((MR_Box) (SortedNewSubIncls_109)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__376__1_2_p_0(
  MR_Word SortedNewImpIncls_108,
  MR_Word SortedOldImpIncls_137)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[1]), ((MR_Box) (SortedOldImpIncls_137)), ((MR_Box) (SortedNewImpIncls_108)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__374__1_2_p_0(
  MR_Word SortedNewIntIncls_107,
  MR_Word SortedOldIntIncls_136)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[1]), ((MR_Box) (SortedOldIntIncls_136)), ((MR_Box) (SortedNewIntIncls_107)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__330__1_2_p_0(
  MR_Word IntUsedImpImported_49,
  MR_Word NewIntUsedImpImported_79)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsedImpImported_49, NewIntUsedImpImported_79);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__328__1_2_p_0(
  MR_Word ImpUsed_48,
  MR_Word NewImpUses_84)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUsed_48, NewImpUses_84);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__326__1_2_p_0(
  MR_Word ImpImported_47,
  MR_Word NewImpImports_83)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImported_47, NewImpImports_83);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__324__1_2_p_0(
  MR_Word IntUsed2_53,
  MR_Word NewIntUses_88)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsed2_53, NewIntUses_88);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__322__1_2_p_0(
  MR_Word IntImported2_52,
  MR_Word NewIntImports_87)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImported2_52, NewIntImports_87);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____which_map_0_0(
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

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_map_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____process_interface_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
                  MR_Word ArgY2_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word SubResult1_11;
                  MR_Integer Var_31 = (MR_Integer) (Var_29);
                  MR_Integer Var_32 = (MR_Integer) (ArgY1_10);

                  succeeded = (Var_31 < Var_32);
                  if (succeeded)
                  {
                    SubResult1_11 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_31 > Var_32);
                    if (succeeded)
                    {
                      SubResult1_11 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_11 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_11;
                  else
                  {
                    MR_Integer Var_33 = (MR_Integer) (Var_28);
                    MR_Integer Var_34 = (MR_Integer) (ArgY2_13);

                    succeeded = (Var_33 < Var_34);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_33 > Var_34);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

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
                  MR_Word ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Integer Var_35 = (MR_Integer) (Var_30);
                  MR_Integer Var_36 = (MR_Integer) (ArgY1_22);

                  succeeded = (Var_35 < Var_36);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_35 > Var_36);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
parse_tree__modules____Unify____process_interface_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
              ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_5 == ArgY1_6);
              if (succeeded)
                succeeded = (ArgX2_7 == ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____parent_or_ancestor_0_0(
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

static MR_bool MR_CALL 
parse_tree__modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0(
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

static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____missing_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_5)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_where_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&parse_tree__modules_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_23 < Var_24);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_23 > Var_24);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = mercury__term____Unify____context_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____maybe_abstract_section_0_0(
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

static MR_bool MR_CALL 
parse_tree__modules____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____int123_0_0(
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

static MR_bool MR_CALL 
parse_tree__modules____Unify____int123_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____include_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
        mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____include_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
        mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____import_and_or_use_0_0(
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

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__modules__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Context_4;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2)
{
  {
    MR_bool succeeded;
    MR_Word MaybeAbstractInclude_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IncludeContext_2, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = (MaybeAbstractInclude_3 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__report_missing_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ParentModule_6));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SubModule_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[40])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static void MR_CALL 
parse_tree__modules__report_abstract_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ParentModule_6));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SubModule_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[48])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[75])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__modules__report_any_missing_includes_for_imports_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Context_4;

    conv0_Context_4 = parse_tree__modules__project_out_import_or_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Context_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_for_imports_6_p_0(
  MR_Word ReadModules_7,
  MR_Word InclMap_8,
  MR_Word ModuleName_9,
  MR_Word IoUCs_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word HeadIoUC_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_10, (MR_Integer) 0))));
    MR_Word TailIoUCs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_10, (MR_Integer) 1))));
    MR_Word Contexts_14;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (HeadIoUC_12));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (TailIoUCs_13));
    }
    Contexts_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_2[36]), Var_18);
    parse_tree__modules__report_any_missing_includes_6_p_0(ReadModules_7, InclMap_8, ModuleName_9, Contexts_14, STATE_VARIABLE_Specs_0_15, STATE_VARIABLE_Specs_16);
  }
}

static MR_Word MR_CALL 
parse_tree__modules__wrap_module_name_1_f_0(
  MR_Word Module_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Module_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__report_missing_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__modules__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__modules__report_missing_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MissingWhere_8,
  MR_Word MissingModuleName_9,
  MR_Word SrcIntInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_bool succeeded;
    MR_Word DescendantModuleNamesSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcIntInfo_10, (MR_Integer) 0))));
    MR_Word MaxDepth_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SrcIntInfo_10, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ImportAndOrUse_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SrcIntInfo_10, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word LeastContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcIntInfo_10, (MR_Integer) 2))));
    MR_Word DescendantModuleNames_16;
    MR_String ChildOrDescendant_17;
    MR_Word DeclPieces_18;
    MR_Word InTheInterface_20;
    MR_Word DescendantPieces_21;
    MR_String ModuleS_22;
    MR_String DeclarationS_23;
    MR_Word MainPieces_24;
    MR_Word MainMsg_25;
    MR_Word Msgs_35;
    MR_Word Spec_36;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Box conv1_ModuleS_22;
    MR_Box conv2_DeclarationS_23;
    MR_Word IoUCs_27;
    MR_Word TypeInfo_156_156;
    MR_Word SrcImpImportUseMap_26;
    MR_Box conv3_IoUCs_27;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DescendantModuleNamesSet_12, &DescendantModuleNames_16);
    switch (MaxDepth_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ChildOrDescendant_17 = (MR_String) "descendant";
        break;
      case (MR_Integer) 0:
        ChildOrDescendant_17 = (MR_String) "child";
        break;
    }
    switch (ImportAndOrUse_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[38]));
        break;
      case (MR_Integer) 0:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[57]));
        break;
      case (MR_Integer) 1:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[59]));
        break;
    }
    switch (MR_tag((MR_Word) MissingWhere_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InTheInterface_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        InTheInterface_20 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[61]));
        break;
    }
    DescendantPieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__modules_scalar_common_2[35]), DescendantModuleNames_16);
    conv1_ModuleS_22 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DescendantModuleNames_16, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
    ModuleS_22 = ((MR_String) (conv1_ModuleS_22));
    conv2_DeclarationS_23 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DescendantModuleNames_16, ((MR_Box) ((MR_String) "declaration")), ((MR_Box) ((MR_String) "declarations")));
    DeclarationS_23 = ((MR_String) (conv2_DeclarationS_23));
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (MissingModuleName_9));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[58])));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (DeclarationS_23));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (ChildOrDescendant_17));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (ModuleS_22));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[70])));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
    }
    Var_115 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", DescendantPieces_21);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[40])));
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_106, Var_114);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InTheInterface_20, Var_105);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_101, Var_104);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DeclPieces_18, Var_100);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[69])), Var_99);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InTheInterface_20, Var_94);
    MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, Var_93);
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (MainPieces_24));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MainMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_25, 0) = ((MR_Box) (LeastContext_15));
      MR_hl_field(MR_mktag(0), MainMsg_25, 1) = ((MR_Box) (Var_123));
    }
    succeeded = ((MR_tag((MR_Word) MissingWhere_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      SrcImpImportUseMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MissingWhere_8, (MR_Integer) 0))));
      TypeInfo_156_156 = (MR_Word) (&parse_tree__modules_scalar_common_1[13]);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_156_156, SrcImpImportUseMap_26, ((MR_Box) (MissingModuleName_9)), &conv3_IoUCs_27);
      if (succeeded)
      {
        IoUCs_27 = ((MR_Word) (conv3_IoUCs_27));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word HeadIoUC_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_27, (MR_Integer) 0))));
      MR_Word ImportOrUse_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadIoUC_28, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ImpContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadIoUC_28, (MR_Integer) 1))));
      MR_String ImportOrUseDecl_32;
      MR_Word ImpPieces_33;
      MR_Word ImpMsg_34;
      MR_Word Var_128;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_145;

      switch (ImportOrUse_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ImportOrUseDecl_32 = (MR_String) "import_module";
          break;
        case (MR_Integer) 1:
          ImportOrUseDecl_32 = (MR_String) "use_module";
          break;
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (ImportOrUseDecl_32));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[44])));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[72])));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_131));
      }
      {
        ImpPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[71])));
        MR_hl_field(MR_mktag(1), ImpPieces_33, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (ImpPieces_33));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ImpMsg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpMsg_34, 0) = ((MR_Box) (ImpContext_31));
        MR_hl_field(MR_mktag(0), ImpMsg_34, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (ImpMsg_34));
        MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msgs_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_35, 0) = ((MR_Box) (MainMsg_25));
        MR_hl_field(MR_mktag(1), Msgs_35, 1) = ((MR_Box) (Var_145));
      }
    }
    else
    {
      {
        Msgs_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_35, 0) = ((MR_Box) (MainMsg_25));
        MR_hl_field(MR_mktag(1), Msgs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Msgs_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
    }
  }
}

static void MR_CALL 
parse_tree__modules__find_any_missing_ancestor_imports_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ImportAndOrUse_12;
    MR_Word conv6_STATE_VARIABLE_LeastContext_14;

    parse_tree__modules__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_LeastContext_14);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ImportAndOrUse_12));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_LeastContext_14));
  }
}

static void MR_CALL 
parse_tree__modules__find_any_missing_ancestor_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ImportAndOrUse_12;
    MR_Word conv2_STATE_VARIABLE_LeastContext_14;

    parse_tree__modules__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_LeastContext_14);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ImportAndOrUse_12));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_LeastContext_14));
  }
}

static void MR_CALL 
parse_tree__modules__find_any_missing_ancestor_imports_7_p_0(
  MR_Word CurrentModule_8,
  MR_Word ParentOrAncestor_9,
  MR_Word ImportUseMap_10,
  MR_Word ImportedModule_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_MissingAncestorMap_0_34,
  MR_Word * STATE_VARIABLE_MissingAncestorMap_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) ImportedModule_11)) == (MR_Integer) 1))
    {
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportedModule_11, (MR_Integer) 0))));

      {
        MR_Box conv0__ParentIoUCs_16;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), ImportUseMap_10, ((MR_Box) (ParentModule_14)), &conv0__ParentIoUCs_16);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (!(succeeded))
        succeeded = mdbcomp__sym_name__is_submodule_2_p_0(CurrentModule_8, ParentModule_14);
      if (succeeded)
        *STATE_VARIABLE_MissingAncestorMap_35 = STATE_VARIABLE_MissingAncestorMap_0_34;
      else
      {
        MR_Word HeadIoUC_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_12, (MR_Integer) 0))));
        MR_Word TailIoUCs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_12, (MR_Integer) 1))));
        MR_Word MissingAncestorInfo0_19;
        MR_Box conv1_MissingAncestorInfo0_19;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), STATE_VARIABLE_MissingAncestorMap_0_34, ((MR_Box) (ParentModule_14)), &conv1_MissingAncestorInfo0_19);
        if (succeeded)
        {
          MissingAncestorInfo0_19 = ((MR_Word) (conv1_MissingAncestorInfo0_19));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ChildModules0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingAncestorInfo0_19, (MR_Integer) 0))));
          MR_Word PoA0_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MissingAncestorInfo0_19, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          MR_Word ImportAndOrUse0_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MissingAncestorInfo0_19, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Word LeastContext0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingAncestorInfo0_19, (MR_Integer) 2))));
          MR_Word ChildModules_24;
          MR_Word PoA_25;
          MR_Word ImportAndOrUse1_26;
          MR_Word LeastContext1_27;
          MR_Word ImportAndOrUse_28;
          MR_Word LeastContext_29;
          MR_Word MissingAncestorInfo_30;
          MR_Box conv5_ImportAndOrUse_28;
          MR_Box conv4_LeastContext_29;

          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ImportedModule_11)), ChildModules0_20, &ChildModules_24);
          succeeded = (PoA0_21 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ParentOrAncestor_9 == (MR_Integer) 1);
          if (succeeded)
            PoA_25 = (MR_Integer) 1;
          else
            PoA_25 = PoA0_21;
          parse_tree__modules__update_iu_and_least_context_5_p_0(HeadIoUC_17, ImportAndOrUse0_22, &ImportAndOrUse1_26, LeastContext0_23, &LeastContext1_27);
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_2[33]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse1_26)), &conv5_ImportAndOrUse_28, ((MR_Box) (LeastContext1_27)), &conv4_LeastContext_29);
          ImportAndOrUse_28 = ((MR_Word) (conv5_ImportAndOrUse_28));
          LeastContext_29 = ((MR_Word) (conv4_LeastContext_29));
          {
            MissingAncestorInfo_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_30, 0) = ((MR_Box) (ChildModules_24));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_30, 1) = (MR_Box) (((((MR_Unsigned) (PoA_25) << 2)) | (MR_Unsigned) (ImportAndOrUse_28)));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_30, 2) = ((MR_Box) (LeastContext_29));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_30)), STATE_VARIABLE_MissingAncestorMap_0_34, STATE_VARIABLE_MissingAncestorMap_35);
        }
        else
        {
          MR_Word HeadImportOrUse_31;
          MR_Word HeadContext_32;
          MR_Word STATE_VARIABLE_MissingAncestorMap_39_39;
          MR_Word ImportAndOrUse0_42;
          MR_Word ChildModules_43;
          MR_Word ImportAndOrUse_44;
          MR_Word LeastContext_45;
          MR_Word MissingAncestorInfo_46;
          MR_Box conv9_ImportAndOrUse_44;
          MR_Box conv8_LeastContext_45;
          MR_Word next_value_of_ImportedModule_11;
          MR_Word next_value_of_STATE_VARIABLE_MissingAncestorMap_0_34;

          ChildModules_43 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ImportedModule_11)));
          HeadImportOrUse_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadIoUC_17, (MR_Integer) 0))) & (MR_Integer) 1);
          HeadContext_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadIoUC_17, (MR_Integer) 1))));
          switch (HeadImportOrUse_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ImportAndOrUse0_42 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ImportAndOrUse0_42 = (MR_Integer) 1;
              break;
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_2[34]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse0_42)), &conv9_ImportAndOrUse_44, ((MR_Box) (HeadContext_32)), &conv8_LeastContext_45);
          ImportAndOrUse_44 = ((MR_Word) (conv9_ImportAndOrUse_44));
          LeastContext_45 = ((MR_Word) (conv8_LeastContext_45));
          {
            MissingAncestorInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_46, 0) = ((MR_Box) (ChildModules_43));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_46, 1) = (MR_Box) (((((MR_Unsigned) (ParentOrAncestor_9) << 2)) | (MR_Unsigned) (ImportAndOrUse_44)));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_46, 2) = ((MR_Box) (LeastContext_45));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_46)), STATE_VARIABLE_MissingAncestorMap_0_34, &STATE_VARIABLE_MissingAncestorMap_39_39);
          // direct tailcall eliminated
          ;
          next_value_of_ImportedModule_11 = ParentModule_14;
          next_value_of_STATE_VARIABLE_MissingAncestorMap_0_34 = STATE_VARIABLE_MissingAncestorMap_39_39;
          ParentOrAncestor_9 = (MR_Integer) 1;
          ImportedModule_11 = next_value_of_ImportedModule_11;
          STATE_VARIABLE_MissingAncestorMap_0_34 = next_value_of_STATE_VARIABLE_MissingAncestorMap_0_34;
          continue;
        }
      }
    }
    else
      *STATE_VARIABLE_MissingAncestorMap_35 = STATE_VARIABLE_MissingAncestorMap_0_34;
    break;
  }
}

static void MR_CALL 
parse_tree__modules__update_iu_and_least_context_5_p_0(
  MR_Word IoUC_6,
  MR_Word STATE_VARIABLE_ImportAndOrUse_0_11,
  MR_Word * STATE_VARIABLE_ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_LeastContext_0_13,
  MR_Word * STATE_VARIABLE_LeastContext_14)
{
  {
    MR_bool succeeded;
    MR_Word ImportOrUse_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IoUC_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUC_6, (MR_Integer) 1))));
    MR_Word Var_20;
    MR_Word Var_21;

    switch (ImportOrUse_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (STATE_VARIABLE_ImportAndOrUse_0_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            *STATE_VARIABLE_ImportAndOrUse_12 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_ImportAndOrUse_12 = STATE_VARIABLE_ImportAndOrUse_0_11;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (STATE_VARIABLE_ImportAndOrUse_0_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            *STATE_VARIABLE_ImportAndOrUse_12 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ImportAndOrUse_12 = STATE_VARIABLE_ImportAndOrUse_0_11;
            break;
        }
        break;
    }
    mercury__term____Compare____context_0_0(&Var_20, Context_10, STATE_VARIABLE_LeastContext_0_13);
    succeeded = ((MR_Integer) 1 == Var_20);
    if (succeeded)
    {
      Var_21 = mercury__term__context_init_0_f_0();
      succeeded = mercury__term____Unify____context_0_0(Context_10, Var_21);
      succeeded = !(succeeded);
    }
    if (succeeded)
      *STATE_VARIABLE_LeastContext_14 = Context_10;
    else
      *STATE_VARIABLE_LeastContext_14 = STATE_VARIABLE_LeastContext_0_13;
  }
}

static void MR_CALL 
parse_tree__modules__append_one_or_more_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * AB_6)
{
  {
    MR_Box HeadA_7 = (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0));
    MR_Word TailA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1))));
    MR_Box HeadB_9 = (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0));
    MR_Word TailB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = HeadB_9;
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (TailB_10));
    }
    Var_11 = mercury__list__f_43_43_2_f_0(TypeInfo_for_T_13, TailA_8, Var_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *AB_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = HeadA_7;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (ModuleName_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__modules__warn_import_for_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word AncestorName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word MainPieces_10;
    MR_Word Msg_12;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_59;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (AncestorName_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[19])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      MainPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), MainPieces_10, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (MainPieces_10));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[55])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 24) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[3])));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__modules__warn_import_for_self_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word Pieces_8;
    MR_Word Msg_9;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_37;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ModuleName_5));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[17])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Pieces_8));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 24) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_9, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_9, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Msg_9));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[3])));
      MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static void MR_CALL 
parse_tree__modules__new_warn_import_for_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_16;

    parse_tree__modules__warn_import_for_ancestor_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__modules__new_warn_import_for_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ImportOrUseMap_7,
  MR_Word AncestorModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_Word Contexts_10;
    MR_Word Var_13;
    MR_Box conv1_STATE_VARIABLE_Specs_12;

    mercury__multi_map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImportOrUseMap_7, ((MR_Box) (AncestorModuleName_8)), &Contexts_10);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__modules__new_warn_import_for_ancestor_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (AncestorModuleName_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_13, Contexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv1_STATE_VARIABLE_Specs_12);
    *STATE_VARIABLE_Specs_12 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_12));
  }
}

static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_16;

    parse_tree__modules__warn_import_for_ancestor_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word RawItemBlocks_7,
  MR_Word AncestorModuleName_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_Word AvailContexts_10;
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_Specs_12;

    parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(RawItemBlocks_7, AncestorModuleName_8, (MR_Word) ((MR_Unsigned) 0U), &AvailContexts_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (AncestorModuleName_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_14, AvailContexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv1_STATE_VARIABLE_Specs_12);
    *STATE_VARIABLE_Specs_12 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_12));
  }
}

void MR_CALL 
parse_tree__modules__grab_trans_opt_files_7_p_0(
  MR_Word Globals_8,
  MR_Word TransOptDeps_9,
  MR_Word STATE_VARIABLE_Module_0_17,
  MR_Word * STATE_VARIABLE_Module_18,
  MR_Word * FoundError_11)
{
  {
    MR_Word Verbose_13;
    MR_Word OptItemBlocksCord_14;
    MR_Word OptSpecs_15;
    MR_Word OptItemBlocks_16;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Module_29_29;
    MR_Word STATE_VARIABLE_Module_30_30;
    MR_Word Var_31;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 60, &Verbose_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% Reading .trans_opt files..\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_13);
    Var_25 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]));
    parse_tree__modules__read_trans_opt_files_10_p_0(Globals_8, TransOptDeps_9, Var_25, &OptItemBlocksCord_14, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs_15, (MR_Integer) 0, FoundError_11);
    OptItemBlocks_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]), OptItemBlocksCord_14);
    parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(OptItemBlocks_16, STATE_VARIABLE_Module_0_17, &STATE_VARIABLE_Module_29_29);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(OptSpecs_15, STATE_VARIABLE_Module_29_29, &STATE_VARIABLE_Module_30_30);
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
    parse_tree__module_imports__module_and_imports_set_errors_3_p_0(Var_31, STATE_VARIABLE_Module_30_30, STATE_VARIABLE_Module_18);
    libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% Done.\n");
  }
}

static MR_Box MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OptItemBlocks_0_3,
  MR_Word * STATE_VARIABLE_OptItemBlocks_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6,
  MR_Word STATE_VARIABLE_Error_0_7,
  MR_Word * STATE_VARIABLE_Error_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Error_8 = STATE_VARIABLE_Error_0_7;
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_OptItemBlocks_4 = STATE_VARIABLE_OptItemBlocks_0_3;
    }
    else
    {
      MR_Word Import_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Imports_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word VeryVerbose_31;
      MR_String ImportString_32;
      MR_String FileName_33;
      MR_Word ParseTreeOpt_34;
      MR_Word OptSpecs_35;
      MR_Word OptError_36;
      MR_Word OptModuleName_37;
      MR_Word OptUses_40;
      MR_Word OptItems_41;
      MR_Word OptSection_42;
      MR_Word OptAvails_43;
      MR_Word OptItemBlock_44;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word STATE_VARIABLE_Specs_71_71;
      MR_Word STATE_VARIABLE_Specs_73_73;
      MR_Word STATE_VARIABLE_Error_74_74;
      MR_Word STATE_VARIABLE_Specs_75_75;
      MR_Word STATE_VARIABLE_OptItemBlocks_80_80;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OptItemBlocks_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_7;

      libs__globals__lookup_bool_option_3_p_0(Globals_1, (MR_Integer) 61, &VeryVerbose_31);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_31, Globals_1, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_54_54);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) "% Reading transitive optimization interface for module");
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) " \140");
      ImportString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Import_25);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, ImportString_32);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) "\'... ");
      libs__file_util__maybe_flush_output_3_p_0(VeryVerbose_31);
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_1, (MR_String) ".trans_opt", Import_25, &FileName_33);
      parse_tree__parse_module__actually_read_module_opt_10_p_0((MR_Integer) 1, Globals_1, FileName_33, Import_25, (MR_Word) ((MR_Unsigned) 0U), &ParseTreeOpt_34, &OptSpecs_35, &OptError_36);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) " done.\n");
      STATE_VARIABLE_Specs_71_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptSpecs_35, STATE_VARIABLE_Specs_54_54);
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 1, FileName_33, OptSpecs_35, OptError_36, STATE_VARIABLE_Specs_71_71, &STATE_VARIABLE_Specs_73_73, STATE_VARIABLE_Error_0_7, &STATE_VARIABLE_Error_74_74);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_31, Globals_1, STATE_VARIABLE_Specs_73_73, &STATE_VARIABLE_Specs_75_75);
      OptModuleName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 0))));
      OptUses_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 3))));
      OptItems_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 4))));
      {
        OptSection_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptSection_42, 0) = ((MR_Box) (OptModuleName_37));
        MR_hl_field(MR_mktag(0), OptSection_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      OptAvails_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__modules_scalar_common_2[32]), OptUses_40);
      {
        OptItemBlock_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 0) = ((MR_Box) (OptModuleName_37));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 1) = ((MR_Box) (OptSection_42));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 3) = ((MR_Box) (OptAvails_43));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 4) = ((MR_Box) (OptItems_41));
      }
      STATE_VARIABLE_OptItemBlocks_80_80 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]), STATE_VARIABLE_OptItemBlocks_0_3, ((MR_Box) (OptItemBlock_44)));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Imports_26;
      next_value_of_STATE_VARIABLE_OptItemBlocks_0_3 = STATE_VARIABLE_OptItemBlocks_80_80;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_75_75;
      next_value_of_STATE_VARIABLE_Error_0_7 = STATE_VARIABLE_Error_74_74;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_OptItemBlocks_0_3 = next_value_of_STATE_VARIABLE_OptItemBlocks_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      STATE_VARIABLE_Error_0_7 = next_value_of_STATE_VARIABLE_Error_0_7;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0(
  MR_Word Globals_7,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_44,
  MR_Word * STATE_VARIABLE_ModuleAndImports_45,
  MR_Word * FoundError_9)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_11;
    MR_Word Ancestors0_12;
    MR_Word IntDeps0_13;
    MR_Word ImpDeps0_14;
    MR_Word OptFiles_15;
    MR_Word Transitive_16;
    MR_Word ModulesProcessed_17;
    MR_Word OptItemBlocksCord_18;
    MR_Word OptSpecs_19;
    MR_Word OptError_20;
    MR_Word OptItemBlocks_21;
    MR_Word UnusedArgs_22;
    MR_Word StructureReuse_23;
    MR_Word UA_SR_Error_26;
    MR_Word HaveReadModuleMapInt_29;
    MR_Word OptFileAncestors_30;
    MR_Word Int0Files_31;
    MR_Word AncestorImports1_32;
    MR_Word AncestorImports2_33;
    MR_Word NewImportDepsMap0_34;
    MR_Word NewUseDepsMap0_35;
    MR_Word NewImplicitImportDeps0_36;
    MR_Word NewImplicitUseDeps0_37;
    MR_Word NewUseDeps0_38;
    MR_Word NewImportDeps0_39;
    MR_Word NewDeps_40;
    MR_Word NewIndirectDeps_41;
    MR_Word NewImplIndirectDeps_42;
    MR_Word ModuleErrors_43;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ModuleAndImports_58_58;
    MR_Word STATE_VARIABLE_ModuleAndImports_59_59;
    MR_Word STATE_VARIABLE_ModuleAndImports_71_71;
    MR_Word Var_72;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word STATE_VARIABLE_ModuleAndImports_80_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_ModuleAndImports_98_98;
    MR_Word Var_107;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_44, &ModuleName_11);
    parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_44, &Ancestors0_12);
    parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(STATE_VARIABLE_ModuleAndImports_0_44, &IntDeps0_13);
    parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(STATE_VARIABLE_ModuleAndImports_0_44, &ImpDeps0_14);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ImpDeps0_14));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (IntDeps0_13));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Ancestors0_12));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
    }
    OptFiles_15 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 348, &Transitive_16);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), OptFiles_15, &ModulesProcessed_17);
    Var_53 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptFiles_15);
    Var_54 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]));
    parse_tree__modules__read_optimization_interfaces_12_p_0(Globals_7, Transitive_16, Var_53, ModulesProcessed_17, Var_54, &OptItemBlocksCord_18, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs_19, (MR_Integer) 0, &OptError_20);
    OptItemBlocks_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]), OptItemBlocksCord_18);
    parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(OptItemBlocks_21, STATE_VARIABLE_ModuleAndImports_0_44, &STATE_VARIABLE_ModuleAndImports_58_58);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(OptSpecs_19, STATE_VARIABLE_ModuleAndImports_58_58, &STATE_VARIABLE_ModuleAndImports_59_59);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 374, &UnusedArgs_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 432, &StructureReuse_23);
    succeeded = (UnusedArgs_22 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (StructureReuse_23 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word LocalItemBlocksCord_24;
      MR_Word LocalSpecs_25;
      MR_Word LocalItemBlocks_27;
      MR_Word FilteredItemBlocks_28;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word STATE_VARIABLE_ModuleAndImports_70_70;

      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_64 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      Var_65 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]));
      parse_tree__modules__read_optimization_interfaces_12_p_0(Globals_7, (MR_Integer) 0, Var_63, Var_64, Var_65, &LocalItemBlocksCord_24, (MR_Word) ((MR_Unsigned) 0U), &LocalSpecs_25, (MR_Integer) 0, &UA_SR_Error_26);
      LocalItemBlocks_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]), LocalItemBlocksCord_24);
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(UnusedArgs_22, StructureReuse_23, LocalItemBlocks_27, &FilteredItemBlocks_28);
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(FilteredItemBlocks_28, STATE_VARIABLE_ModuleAndImports_59_59, &STATE_VARIABLE_ModuleAndImports_70_70);
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(LocalSpecs_25, STATE_VARIABLE_ModuleAndImports_70_70, &STATE_VARIABLE_ModuleAndImports_71_71);
    }
    else
    {
      UA_SR_Error_26 = (MR_Integer) 0;
      STATE_VARIABLE_ModuleAndImports_71_71 = STATE_VARIABLE_ModuleAndImports_59_59;
    }
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[7]), (MR_Word) (&parse_tree__modules_scalar_common_1[8]), &HaveReadModuleMapInt_29);
    Var_72 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[10]), (MR_Word) (&parse_tree__modules_scalar_common_2[31]), OptFiles_15);
    OptFileAncestors_30 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_72);
    Int0Files_31 = mercury__set__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptFileAncestors_30, ((MR_Box) (ModuleName_11)));
    Var_78 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_79 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0(Globals_7, HaveReadModuleMapInt_29, Int0Files_31, Var_78, &AncestorImports1_32, Var_79, &AncestorImports2_33, STATE_VARIABLE_ModuleAndImports_71_71, &STATE_VARIABLE_ModuleAndImports_80_80);
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0), OptItemBlocks_21, &NewImportDepsMap0_34, &NewUseDepsMap0_35);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0), Globals_7, OptItemBlocks_21, &NewImplicitImportDeps0_36, &NewImplicitUseDeps0_37);
    Var_82 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewUseDepsMap0_35);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_82, &NewUseDeps0_38);
    Var_83 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewImportDepsMap0_34);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_83, &NewImportDeps0_39);
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (AncestorImports2_33));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (AncestorImports1_32));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (NewImplicitUseDeps0_37));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (NewImplicitImportDeps0_36));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (NewUseDeps0_38));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (NewImportDeps0_39));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
    }
    NewDeps_40 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_84);
    Var_96 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_97 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_53_95_95_91_51_93_95_48_16_p_0(Globals_7, HaveReadModuleMapInt_29, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_10[1])), NewDeps_40, Var_96, &NewIndirectDeps_41, Var_97, &NewImplIndirectDeps_42, STATE_VARIABLE_ModuleAndImports_80_80, &STATE_VARIABLE_ModuleAndImports_98_98);
    Var_107 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIndirectDeps_41, NewImplIndirectDeps_42);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_54_95_95_91_51_93_95_48_12_p_0(Globals_7, HaveReadModuleMapInt_29, (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_10[2])), Var_107, STATE_VARIABLE_ModuleAndImports_98_98, STATE_VARIABLE_ModuleAndImports_45);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(*STATE_VARIABLE_ModuleAndImports_45, &ModuleErrors_43);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_43);
    if (!(succeeded))
    {
      succeeded = (OptError_20 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UA_SR_Error_26 == (MR_Integer) 1);
    }
    if (succeeded)
      *FoundError_9 = (MR_Integer) 1;
    else
      *FoundError_9 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__process_int0_files_of_ancestor_modules__1585__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Ancestors_22,
  MR_Word STATE_VARIABLE_DirectImports_0_31,
  MR_Word * STATE_VARIABLE_DirectImports_32,
  MR_Word STATE_VARIABLE_DirectUses_0_33,
  MR_Word * STATE_VARIABLE_DirectUses_34,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_35,
  MR_Word * STATE_VARIABLE_ModuleAndImports_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstAncestor_27;
    MR_Word LaterAncestors_28;
    MR_Box conv0_FirstAncestor_27;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstAncestor_27, Ancestors_22, &LaterAncestors_28);
    if (succeeded)
    {
      FirstAncestor_27 = ((MR_Word) (conv0_FirstAncestor_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_29;
      MR_Word ModAncestors0_30;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_DirectImports_48_48;
      MR_Word STATE_VARIABLE_DirectUses_49_49;
      MR_Word STATE_VARIABLE_ModuleAndImports_50_50;
      MR_Word next_value_of_Ancestors_22;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_31;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_35;

      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_35, &ModuleName_29);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (FirstAncestor_27));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ModuleName_29));
      }
      mercury__require__expect_not_3_p_0(Var_39, (MR_String) "predicate \140parse_tree.modules.process_int0_files_of_ancestor_modules\'/15", (MR_String) "module is its own ancestor\?");
      parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_35, &ModAncestors0_30);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstAncestor_27)), ModAncestors0_30);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_50_50 = STATE_VARIABLE_ModuleAndImports_0_35;
        STATE_VARIABLE_DirectUses_49_49 = STATE_VARIABLE_DirectUses_0_33;
        STATE_VARIABLE_DirectImports_48_48 = STATE_VARIABLE_DirectImports_0_31;
      }
      else
        parse_tree__modules__process_module_int0_file__ho20_14_p_0(Globals_16, HaveReadModuleMapInt_17, FirstAncestor_27, STATE_VARIABLE_DirectImports_0_31, &STATE_VARIABLE_DirectImports_48_48, STATE_VARIABLE_DirectUses_0_33, &STATE_VARIABLE_DirectUses_49_49, STATE_VARIABLE_ModuleAndImports_0_35, &STATE_VARIABLE_ModuleAndImports_50_50);
      // direct tailcall eliminated
      ;
      next_value_of_Ancestors_22 = LaterAncestors_28;
      next_value_of_STATE_VARIABLE_DirectImports_0_31 = STATE_VARIABLE_DirectImports_48_48;
      next_value_of_STATE_VARIABLE_DirectUses_0_33 = STATE_VARIABLE_DirectUses_49_49;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_35 = STATE_VARIABLE_ModuleAndImports_50_50;
      Ancestors_22 = next_value_of_Ancestors_22;
      STATE_VARIABLE_DirectImports_0_31 = next_value_of_STATE_VARIABLE_DirectImports_0_31;
      STATE_VARIABLE_DirectUses_0_33 = next_value_of_STATE_VARIABLE_DirectUses_0_33;
      STATE_VARIABLE_ModuleAndImports_0_35 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_35;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_36 = STATE_VARIABLE_ModuleAndImports_0_35;
      *STATE_VARIABLE_DirectUses_34 = STATE_VARIABLE_DirectUses_0_33;
      *STATE_VARIABLE_DirectImports_32 = STATE_VARIABLE_DirectImports_0_31;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_int0_file__ho20_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Module_17,
  MR_Word STATE_VARIABLE_DirectImports_0_33,
  MR_Word * STATE_VARIABLE_DirectImports_34,
  MR_Word STATE_VARIABLE_DirectUses_0_35,
  MR_Word * STATE_VARIABLE_DirectUses_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38)
{
  {
    MR_Word ItemBlocks_28;
    MR_Word AncDirectImportsMap_29;
    MR_Word AncDirectUsesMap_30;
    MR_Word AncDirectImports_31;
    MR_Word AncDirectUses_32;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word _IntAvails_26;
    MR_Word _ImpAvails_27;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0), Globals_15, HaveReadModuleMapInt_16, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&parse_tree__modules_scalar_common_2[28]), (MR_Word) (&parse_tree__modules_scalar_common_2[29]), (MR_Word) (&parse_tree__modules_scalar_common_2[30]), Module_17, &_IntAvails_26, &_ImpAvails_27, &ItemBlocks_28, STATE_VARIABLE_ModuleAndImports_0_37, STATE_VARIABLE_ModuleAndImports_38);
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0), ItemBlocks_28, &AncDirectImportsMap_29, &AncDirectUsesMap_30);
    Var_43 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), AncDirectImportsMap_29);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_43, &AncDirectImports_31);
    Var_44 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), AncDirectUsesMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_44, &AncDirectUses_32);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncDirectImports_31, STATE_VARIABLE_DirectImports_0_33, STATE_VARIABLE_DirectImports_34);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncDirectUses_32, STATE_VARIABLE_DirectUses_0_35, STATE_VARIABLE_DirectUses_36);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_54_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word PIKind_16,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpIndirectImports_23;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_ModuleAndImports_29_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_28 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_50_49_95_95_91_51_93_95_48_14_p_0(Globals_13, HaveReadModuleMapInt_14, PIKind_16, Modules_20, Var_28, &ImpIndirectImports_23, STATE_VARIABLE_ModuleAndImports_0_24, &STATE_VARIABLE_ModuleAndImports_29_29);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_23);
    if (succeeded)
      *STATE_VARIABLE_ModuleAndImports_25 = STATE_VARIABLE_ModuleAndImports_29_29;
    else
    {
      MR_Word next_value_of_Modules_20 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_24 = STATE_VARIABLE_ModuleAndImports_29_29;

      // direct tailcall eliminated
      ;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_ModuleAndImports_0_24 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_50_49_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_18,
  MR_Word Modules_22,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_26;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ImpIndirectImports_34_34;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_53_95_95_91_51_93_95_48_16_p_0(Globals_15, HaveReadModuleMapInt_16, PIKind_18, Modules_22, Var_33, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_34_34, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_35_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_30 = STATE_VARIABLE_ModuleAndImports_35_35;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_22 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_34_34;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_29 = STATE_VARIABLE_ModuleAndImports_35_35;

      // direct tailcall eliminated
      ;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_ModuleAndImports_0_29 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_53_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstModule_29, Modules_24, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) (conv0_FirstModule_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IntIndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word next_value_of_Modules_24;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;

      {
        MR_Word ModuleName_31;

        parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ModuleName_31);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, ModuleName_31);
      }
      if (!(succeeded))
      {
        {
          MR_Word Ancestors_32;

          parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &Ancestors_32);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstModule_29)), Ancestors_32);
        }
        if (!(succeeded))
        {
          {
            MR_Word IntDeps_33;
            MR_Box conv1_Var_34;

            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IntDeps_33);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntDeps_33, ((MR_Box) (FirstModule_29)), &conv1_Var_34);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          if (!(succeeded))
          {
            {
              MR_Word ImpDeps_35;
              MR_Box conv2_Var_36;

              parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ImpDeps_35);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpDeps_35, ((MR_Box) (FirstModule_29)), &conv2_Var_36);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word IndirectDeps_38;

              succeeded = ((MR_tag((MR_Word) PIKind_20)) == (MR_Integer) 2);
              if (succeeded)
              {
                parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IndirectDeps_38);
                TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (FirstModule_29)), IndirectDeps_38);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_43;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_41;
        STATE_VARIABLE_IntIndirectImports_51_51 = STATE_VARIABLE_IntIndirectImports_0_39;
      }
      else
        parse_tree__modules__process_module_int123_file__ho22_15_p_0(Globals_17, HaveReadModuleMapInt_18, PIKind_20, FirstModule_29, STATE_VARIABLE_IntIndirectImports_0_39, &STATE_VARIABLE_IntIndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_41, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_43, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_Modules_24 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_39 = STATE_VARIABLE_IntIndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_43 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_24 = next_value_of_Modules_24;
      STATE_VARIABLE_IntIndirectImports_0_39 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      STATE_VARIABLE_ImpIndirectImports_0_41 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      STATE_VARIABLE_ModuleAndImports_0_43 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_44 = STATE_VARIABLE_ModuleAndImports_0_43;
      *STATE_VARIABLE_ImpIndirectImports_42 = STATE_VARIABLE_ImpIndirectImports_0_41;
      *STATE_VARIABLE_IntIndirectImports_40 = STATE_VARIABLE_IntIndirectImports_0_39;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho22_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43)
{
  {
    MR_Word IntAvails_27;
    MR_Word ImpAvails_28;
    MR_Word IntImportsMap_30;
    MR_Word IntUsesMap_31;
    MR_Word ImpImportsMap_32;
    MR_Word ImpUsesMap_33;
    MR_Word IntImports_34;
    MR_Word IntUses_35;
    MR_Word ImpImports_36;
    MR_Word ImpUses_37;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word _ItemBlocks_29;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0), Globals_16, HaveReadModuleMapInt_17, PIKind_18, (MR_Word) (&parse_tree__modules_scalar_common_2[25]), (MR_Word) (&parse_tree__modules_scalar_common_2[26]), (MR_Word) (&parse_tree__modules_scalar_common_2[27]), Module_22, &IntAvails_27, &ImpAvails_28, &_ItemBlocks_29, STATE_VARIABLE_ModuleAndImports_0_42, STATE_VARIABLE_ModuleAndImports_43);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_27, &IntImportsMap_30, &IntUsesMap_31);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_28, &ImpImportsMap_32, &ImpUsesMap_33);
    Var_48 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportsMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48, &IntImports_34);
    Var_49 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsesMap_31);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, &IntUses_35);
    Var_50 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportsMap_32);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_50, &ImpImports_36);
    Var_51 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsesMap_33);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, &ImpUses_37);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntUses_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntImports_34));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    *STATE_VARIABLE_IntImportsUses_39 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpUses_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ImpImports_36));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_40));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    *STATE_VARIABLE_ImpImportsUses_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word UnusedArgs_1,
  MR_Word StructureReuse_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemBlock0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ItemBlocks0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ItemBlock_11;
    MR_Word ItemBlocks_12;
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 0))));
    MR_Box Section_14 = (MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 1));
    MR_Word Items0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 4))));
    MR_Word ItemCord_20;
    MR_Word Items_21;
    MR_Word Var_22;

    Var_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(UnusedArgs_1, StructureReuse_2, Items0_17, Var_22, &ItemCord_20);
    Items_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), ItemCord_20);
    {
      ItemBlock_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemBlock_11, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(0), ItemBlock_11, 1) = Section_14;
      MR_hl_field(MR_mktag(0), ItemBlock_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ItemBlock_11, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ItemBlock_11, 4) = ((MR_Box) (Items_21));
    }
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(UnusedArgs_1, StructureReuse_2, ItemBlocks0_10, &ItemBlocks_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemBlock_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ItemBlocks_12));
    }
  }
}

static void MR_CALL 
parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(
  MR_Word UnusedArgs_1,
  MR_Word StructureReuse_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ItemCord_0_4,
  MR_Word * STATE_VARIABLE_ItemCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ItemCord_5 = STATE_VARIABLE_ItemCord_0_4;
    else
    {
      MR_Word Item0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Items0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemCord_25_25;
      MR_Word ItemPragma0_16;
      MR_Word Pragma0_17;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ItemCord_0_4;

      succeeded = ((((MR_tag((MR_Word) Item0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item0_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        ItemPragma0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_13, (MR_Integer) 1))));
        Pragma0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_16, (MR_Integer) 0))));
        if (((((MR_tag((MR_Word) Pragma0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 28))))
          succeeded = (StructureReuse_2 == (MR_Integer) 1);
        else
        if (((((MR_tag((MR_Word) Pragma0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
          succeeded = (UnusedArgs_1 == (MR_Integer) 1);
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        STATE_VARIABLE_ItemCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_ItemCord_0_4, ((MR_Box) (Item0_13)));
      }
      else
        STATE_VARIABLE_ItemCord_25_25 = STATE_VARIABLE_ItemCord_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Items0_14;
      next_value_of_STATE_VARIABLE_ItemCord_0_4 = STATE_VARIABLE_ItemCord_25_25;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ItemCord_0_4 = next_value_of_STATE_VARIABLE_ItemCord_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__prog_item__avail_use_info_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0(
  MR_Word Globals_1,
  MR_Word Transitive_2,
  MR_Word HeadVar__3_3,
  MR_Word ModulesProcessed0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_Error_0_9,
  MR_Word * STATE_VARIABLE_Error_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Error_10 = STATE_VARIABLE_Error_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word ModuleToRead_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModulesToRead_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word VeryVerbose_37;
      MR_String ModuleToReadString_38;
      MR_String FileName_39;
      MR_Word ParseTreeOpt_40;
      MR_Word OptSpecs_41;
      MR_Word OptError_42;
      MR_Word OptModuleName_43;
      MR_Word OptFileKind_44;
      MR_Word OptUses_46;
      MR_Word OptItems_47;
      MR_Word OptSection_48;
      MR_Word OptAvails_49;
      MR_Word OptItemBlock_50;
      MR_Word ModulesProcessed_56;
      MR_Word NewDeps_57;
      MR_Word STATE_VARIABLE_Specs_67_67;
      MR_Word STATE_VARIABLE_OptItemBlocksCord_84_84;
      MR_Word STATE_VARIABLE_Specs_86_86;
      MR_Word STATE_VARIABLE_Error_87_87;
      MR_Word STATE_VARIABLE_Specs_88_88;
      MR_Word Var_98;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_ModulesProcessed0_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_9;

      libs__globals__lookup_bool_option_3_p_0(Globals_1, (MR_Integer) 61, &VeryVerbose_37);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_37, Globals_1, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_67_67);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) "% Reading optimization interface for module");
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) " \140");
      ModuleToReadString_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleToRead_30);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, ModuleToReadString_38);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) "\'...\n");
      libs__file_util__maybe_flush_output_3_p_0(VeryVerbose_37);
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_1, (MR_String) ".opt", ModuleToRead_30, &FileName_39);
      parse_tree__parse_module__actually_read_module_opt_10_p_0((MR_Integer) 0, Globals_1, FileName_39, ModuleToRead_30, (MR_Word) ((MR_Unsigned) 0U), &ParseTreeOpt_40, &OptSpecs_41, &OptError_42);
      OptModuleName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 0))));
      OptFileKind_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 1))) & (MR_Integer) 1);
      OptUses_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 3))));
      OptItems_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 4))));
      {
        OptSection_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptSection_48, 0) = ((MR_Box) (OptModuleName_43));
        MR_hl_field(MR_mktag(0), OptSection_48, 1) = (MR_Box) ((MR_Unsigned) (OptFileKind_44));
      }
      OptAvails_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&parse_tree__modules_scalar_common_2[23]), OptUses_46);
      {
        OptItemBlock_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 0) = ((MR_Box) (OptModuleName_43));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 1) = ((MR_Box) (OptSection_48));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 3) = ((MR_Box) (OptAvails_49));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 4) = ((MR_Box) (OptItems_47));
      }
      STATE_VARIABLE_OptItemBlocksCord_84_84 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[9]), HeadVar__5_5, ((MR_Box) (OptItemBlock_50)));
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, FileName_39, OptSpecs_41, OptError_42, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Error_0_9, &STATE_VARIABLE_Error_87_87);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_37, Globals_1, STATE_VARIABLE_Specs_86_86, &STATE_VARIABLE_Specs_88_88);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) "% done.\n");
      switch (Transitive_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ModulesProcessed_56 = ModulesProcessed0_4;
            NewDeps_57 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewUseDeps0_51;
            MR_Word NewImplicitImportDeps0_52;
            MR_Word NewImplicitUseDeps0_53;
            MR_Word NewDepsSet0_54;
            MR_Word NewDepsSet_55;
            MR_Word Var_92;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;

            Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_2[24]), OptUses_46);
            NewUseDeps0_51 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_92);
            parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(Globals_1, OptItems_47, &NewImplicitImportDeps0_52, &NewImplicitUseDeps0_53);
            {
              Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (NewImplicitUseDeps0_53));
              MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (NewImplicitImportDeps0_52));
              MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (NewUseDeps0_51));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
            }
            NewDepsSet0_54 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_94);
            mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDepsSet0_54, ModulesProcessed0_4, &NewDepsSet_55);
            mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesProcessed0_4, NewDepsSet_55, &ModulesProcessed_56);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDepsSet_55, &NewDeps_57);
          }
          break;
      }
      Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_57, ModulesToRead_31);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Var_98;
      next_value_of_ModulesProcessed0_4 = ModulesProcessed_56;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_OptItemBlocksCord_84_84;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_88_88;
      next_value_of_STATE_VARIABLE_Error_0_9 = STATE_VARIABLE_Error_87_87;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      ModulesProcessed0_4 = next_value_of_ModulesProcessed0_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      STATE_VARIABLE_Error_0_9 = next_value_of_STATE_VARIABLE_Error_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word FileType_11,
  MR_String FileName_12,
  MR_Word ModuleSpecs_13,
  MR_Word ModuleErrors_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23,
  MR_Word STATE_VARIABLE_Error_0_24,
  MR_Word * STATE_VARIABLE_Error_25)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Error_25 = STATE_VARIABLE_Error_0_24;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
    else
    {
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_14, ((MR_Box) ((MR_Integer) 0)));
      if (succeeded)
      {
        MR_Word WarningOption_17;
        MR_Word Severity_18;
        MR_Word Pieces_19;
        MR_Word Msg_20;
        MR_Word Spec_21;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_51;

        switch (FileType_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            WarningOption_17 = (MR_Integer) 14;
            break;
          case (MR_Integer) 1:
            WarningOption_17 = (MR_Integer) 15;
            break;
        }
        {
          Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Severity_18, 0) = (MR_Box) (((((MR_Unsigned) (WarningOption_17) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(1), Severity_18, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Severity_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (FileName_12));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[40])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = (MR_Box) (((((MR_Unsigned) (WarningOption_17) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Msg_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Msg_20, 3) = ((MR_Box) (Pieces_19));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_20));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) (Severity_18));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
        }
        *STATE_VARIABLE_Error_25 = STATE_VARIABLE_Error_0_24;
      }
      else
      {
        *STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModuleSpecs_13, STATE_VARIABLE_Specs_0_22);
        *STATE_VARIABLE_Error_25 = (MR_Integer) 1;
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__4_4;

    conv6_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_4;

    conv5_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    conv4_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    conv3_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    conv2_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_14(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__667__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_13(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__665__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_12(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__663__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_11(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__662__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_10(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__660__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__658__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__657__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__655__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__653__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__620__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__618__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__616__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_unqual_imported_modules_make_int__614__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word RawCompUnit_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_116)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_11, (MR_Integer) 0))));
    MR_Word ModuleNameContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_11, (MR_Integer) 1))));
    MR_Word RawItemBlocks_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_11, (MR_Integer) 2))));
    MR_Word SrcItemBlocks_19;
    MR_Word SrcItemBlocksWithFIMs_20;
    MR_Word IntImportedMap_21;
    MR_Word IntUsedMap_22;
    MR_Word ImpImportedMap_23;
    MR_Word ImpUsedMap_24;
    MR_Word IntImported0_25;
    MR_Word IntUsed0_26;
    MR_Word ImpImported_27;
    MR_Word ImpUsed_28;
    MR_Word HaveReadModuleMapInt_29;
    MR_Word ImplicitIntImported_30;
    MR_Word ImplicitIntUsed_31;
    MR_Word IntImported_32;
    MR_Word IntUsed_33;
    MR_Word PublicChildren_34;
    MR_Word NestedChildren_35;
    MR_Word ForeignIncludeFiles_37;
    MR_Word NewIntInclsCord_39;
    MR_Word NewImpInclsCord_40;
    MR_Word NewIntAvailsCord_41;
    MR_Word NewImpAvailsCord_42;
    MR_Word NewIntItemsCord_43;
    MR_Word NewImpItemsCord_44;
    MR_Word NewIntIncls_45;
    MR_Word NewImpIncls_46;
    MR_Word NewIntAvails_47;
    MR_Word NewImpAvails_48;
    MR_Word NewIntItems_49;
    MR_Word NewImpItems_50;
    MR_Word NewIntImportsMap0_51;
    MR_Word NewIntUsesMap0_52;
    MR_Word NewImpImportsMap0_53;
    MR_Word NewImpUsesMap0_54;
    MR_Word NewImplicitImportNeeds_55;
    MR_Word NewLangSet_57;
    MR_Word NewIntImports0_59;
    MR_Word NewIntUses0_60;
    MR_Word NewImpImports_61;
    MR_Word NewImpUses_62;
    MR_Word NewImplicitIntImports_63;
    MR_Word NewImplicitIntUses_64;
    MR_Word NewIntImports_65;
    MR_Word NewIntUses_66;
    MR_Word NewLangs_67;
    MR_Word NewIntItemsWithFIMs_68;
    MR_Word SortedNewIntIncls_72;
    MR_Word SortedNewImpIncls_73;
    MR_Word SortedNewIntAvails_74;
    MR_Word SortedNewImpAvails_75;
    MR_Word SortedNewIntItems_76;
    MR_Word SortedNewImpItems_77;
    MR_Word OldIntInclsCord_78;
    MR_Word OldImpInclsCord_79;
    MR_Word OldSubInclsCord_80;
    MR_Word OldIntAvailsCord_81;
    MR_Word OldImpAvailsCord_82;
    MR_Word OldSubAvailsCord_83;
    MR_Word OldIntItemsCord_84;
    MR_Word OldImpItemsCord_85;
    MR_Word OldSubItemsCord_86;
    MR_Word OldIntIncls_87;
    MR_Word OldImpIncls_88;
    MR_Word OldSubIncls_89;
    MR_Word OldIntAvails_90;
    MR_Word OldImpAvails_91;
    MR_Word OldSubAvails_92;
    MR_Word OldIntItems_93;
    MR_Word OldImpItems_94;
    MR_Word OldSubItems_95;
    MR_Word SortedOldIntIncls_96;
    MR_Word SortedOldImpIncls_97;
    MR_Word SortedOldSubIncls_98;
    MR_Word SortedOldIntAvails_99;
    MR_Word SortedOldImpAvails_100;
    MR_Word SortedOldSubAvails_101;
    MR_Word SortedOldIntItems_102;
    MR_Word SortedOldImpItems_103;
    MR_Word SortedOldSubItems_104;
    MR_Word Ancestors_105;
    MR_Word ParentImported_106;
    MR_Word ParentUsed_107;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_131;
    MR_Word Var_134;
    MR_Word Var_137;
    MR_Word Var_140;
    MR_Word Var_143;
    MR_Word Var_146;
    MR_Word Var_150;
    MR_Word Var_153;
    MR_Word Var_156;
    MR_Word Var_160;
    MR_Word Var_163;
    MR_Word Var_166;
    MR_Word STATE_VARIABLE_ModuleAndImports_170_170;
    MR_Word Var_171;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word STATE_VARIABLE_ModuleAndImports_178_178;
    MR_Word STATE_VARIABLE_IntIndirectImported_182_182;
    MR_Word STATE_VARIABLE_ImpIndirectImported_183_183;
    MR_Word Var_185;
    MR_Word STATE_VARIABLE_IntIndirectImported_189_189;
    MR_Word Var_190;
    MR_Word STATE_VARIABLE_ModuleAndImports_191_191;
    MR_Word STATE_VARIABLE_IntIndirectImported_201_201;
    MR_Word Var_202;
    MR_Word STATE_VARIABLE_ModuleAndImports_203_203;
    MR_Word STATE_VARIABLE_ImpIndirectImported_213_213;
    MR_Word Var_214;
    MR_Word STATE_VARIABLE_ModuleAndImports_215_215;
    MR_Word STATE_VARIABLE_IntIndirectImported_225_225;
    MR_Word Var_226;
    MR_Word STATE_VARIABLE_ModuleAndImports_227_227;
    MR_Word Var_233;
    MR_Word STATE_VARIABLE_IntIndirectImported_237_237;
    MR_Word Var_238;
    MR_Word STATE_VARIABLE_ModuleAndImports_239_239;
    MR_Word STATE_VARIABLE_ImpIndirectImported_249_249;
    MR_Word Var_250;
    MR_Word STATE_VARIABLE_ModuleAndImports_251_251;
    MR_Word Var_257;
    MR_Word Var_261;
    MR_Word STATE_VARIABLE_ModuleAndImports_262_262;
    MR_Word Var_271;
    MR_Word _NewForeignInclFiles_56;
    MR_Word _NewFactTables_58;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;

    parse_tree__modules__raw_item_blocks_to_src_2_p_0(RawItemBlocks_18, &SrcItemBlocks_19);
    parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_src_item_blocks_3_p_0(ModuleName_16, SrcItemBlocks_19, &SrcItemBlocksWithFIMs_20);
    parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(RawItemBlocks_18, &IntImportedMap_21, &IntUsedMap_22, &ImpImportedMap_23, &ImpUsedMap_24);
    Var_119 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportedMap_21);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_119, &IntImported0_25);
    Var_120 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsedMap_22);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_120, &IntUsed0_26);
    Var_121 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportedMap_23);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_121, &ImpImported_27);
    Var_122 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsedMap_24);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_122, &ImpUsed_28);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__modules_scalar_common_1[7]), (MR_Word) (&parse_tree__modules_scalar_common_1[8]), &HaveReadModuleMapInt_29);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Globals_8, RawItemBlocks_18, &ImplicitIntImported_30, &ImplicitIntUsed_31);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplicitIntImported_30, IntImported0_25, &IntImported_32);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplicitIntUsed_31, IntUsed0_26, &IntUsed_33);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), &PublicChildren_34);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &NestedChildren_35);
    ForeignIncludeFiles_37 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
    parse_tree__modules__get_raw_components_7_p_0(RawItemBlocks_18, &NewIntInclsCord_39, &NewImpInclsCord_40, &NewIntAvailsCord_41, &NewImpAvailsCord_42, &NewIntItemsCord_43, &NewImpItemsCord_44);
    NewIntIncls_45 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), NewIntInclsCord_39);
    NewImpIncls_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), NewImpInclsCord_40);
    NewIntAvails_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), NewIntAvailsCord_41);
    NewImpAvails_48 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), NewImpAvailsCord_42);
    NewIntItems_49 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewIntItemsCord_43);
    NewImpItems_50 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewImpItemsCord_44);
    parse_tree__modules__get_deps_maps_6_p_0(NewIntAvails_47, NewImpAvails_48, &NewIntImportsMap0_51, &NewIntUsesMap0_52, &NewImpImportsMap0_53, &NewImpUsesMap0_54);
    parse_tree__modules__get_implicits_foreigns_fact_tables_6_p_0(NewIntItems_49, NewImpItems_50, &NewImplicitImportNeeds_55, &_NewForeignInclFiles_56, &NewLangSet_57, &_NewFactTables_58);
    Var_123 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewIntImportsMap0_51);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_123, &NewIntImports0_59);
    Var_124 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewIntUsesMap0_52);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_124, &NewIntUses0_60);
    Var_125 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewImpImportsMap0_53);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_125, &NewImpImports_61);
    Var_126 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewImpUsesMap0_54);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_126, &NewImpUses_62);
    parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(Globals_8, NewImplicitImportNeeds_55, &NewImplicitIntImports_63, &NewImplicitIntUses_64);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewImplicitIntImports_63, NewIntImports0_59, &NewIntImports_65);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewImplicitIntUses_64, NewIntUses0_60, &NewIntUses_66);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NewLangSet_57, &NewLangs_67);
    if ((NewLangs_67 == (MR_Word) ((MR_Unsigned) 0U)))
      NewIntItemsWithFIMs_68 = NewIntItems_49;
    else
    {
      MR_Word FIMItems_71;
      MR_Word Var_127;

      {
        Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_3[5]));
        MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (ModuleName_16));
      }
      FIMItems_71 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_127, NewLangs_67);
      NewIntItemsWithFIMs_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), FIMItems_71, NewIntItems_49);
    }
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (IntImported_32));
      MR_hl_field(MR_mktag(0), Var_128, 4) = ((MR_Box) (NewIntImports_65));
    }
    mercury__require__expect_3_p_0(Var_128, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad IntImport");
    {
      Var_131 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_131, 3) = ((MR_Box) (IntUsed_33));
      MR_hl_field(MR_mktag(0), Var_131, 4) = ((MR_Box) (NewIntUses_66));
    }
    mercury__require__expect_3_p_0(Var_131, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad IntUses");
    {
      Var_134 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_4));
      MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (ImpImported_27));
      MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) (NewImpImports_61));
    }
    mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad ImpImport");
    {
      Var_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_5));
      MR_hl_field(MR_mktag(0), Var_137, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_137, 3) = ((MR_Box) (ImpUsed_28));
      MR_hl_field(MR_mktag(0), Var_137, 4) = ((MR_Box) (NewImpUses_62));
    }
    mercury__require__expect_3_p_0(Var_137, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad ImpUses");
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), NewIntIncls_45, &SortedNewIntIncls_72);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), NewImpIncls_46, &SortedNewImpIncls_73);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), NewIntAvails_47, &SortedNewIntAvails_74);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), NewImpAvails_48, &SortedNewImpAvails_75);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewIntItemsWithFIMs_68, &SortedNewIntItems_76);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewImpItems_50, &SortedNewImpItems_77);
    parse_tree__modules__get_src_components_10_p_0(SrcItemBlocksWithFIMs_20, &OldIntInclsCord_78, &OldImpInclsCord_79, &OldSubInclsCord_80, &OldIntAvailsCord_81, &OldImpAvailsCord_82, &OldSubAvailsCord_83, &OldIntItemsCord_84, &OldImpItemsCord_85, &OldSubItemsCord_86);
    OldIntIncls_87 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldIntInclsCord_78);
    OldImpIncls_88 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldImpInclsCord_79);
    OldSubIncls_89 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldSubInclsCord_80);
    OldIntAvails_90 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldIntAvailsCord_81);
    OldImpAvails_91 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldImpAvailsCord_82);
    OldSubAvails_92 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldSubAvailsCord_83);
    OldIntItems_93 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldIntItemsCord_84);
    OldImpItems_94 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldImpItemsCord_85);
    OldSubItems_95 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldSubItemsCord_86);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldIntIncls_87, &SortedOldIntIncls_96);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldImpIncls_88, &SortedOldImpIncls_97);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldSubIncls_89, &SortedOldSubIncls_98);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldIntAvails_90, &SortedOldIntAvails_99);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldImpAvails_91, &SortedOldImpAvails_100);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldSubAvails_92, &SortedOldSubAvails_101);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldIntItems_93, &SortedOldIntItems_102);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldImpItems_94, &SortedOldImpItems_103);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldSubItems_95, &SortedOldSubItems_104);
    {
      Var_140 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_6));
      MR_hl_field(MR_mktag(0), Var_140, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_140, 3) = ((MR_Box) (SortedNewIntIncls_72));
      MR_hl_field(MR_mktag(0), Var_140, 4) = ((MR_Box) (SortedOldIntIncls_96));
    }
    mercury__require__expect_3_p_0(Var_140, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad IntIncls");
    {
      Var_143 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_7));
      MR_hl_field(MR_mktag(0), Var_143, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_143, 3) = ((MR_Box) (SortedNewImpIncls_73));
      MR_hl_field(MR_mktag(0), Var_143, 4) = ((MR_Box) (SortedOldImpIncls_97));
    }
    mercury__require__expect_3_p_0(Var_143, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad ImpIncls");
    {
      Var_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_8));
      MR_hl_field(MR_mktag(0), Var_146, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_146, 3) = ((MR_Box) (SortedOldSubIncls_98));
      MR_hl_field(MR_mktag(0), Var_146, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_146, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad SubIncls");
    {
      Var_150 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_9));
      MR_hl_field(MR_mktag(0), Var_150, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_150, 3) = ((MR_Box) (SortedNewIntAvails_74));
      MR_hl_field(MR_mktag(0), Var_150, 4) = ((MR_Box) (SortedOldIntAvails_99));
    }
    mercury__require__expect_3_p_0(Var_150, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad IntAvails");
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_10));
      MR_hl_field(MR_mktag(0), Var_153, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_153, 3) = ((MR_Box) (SortedNewImpAvails_75));
      MR_hl_field(MR_mktag(0), Var_153, 4) = ((MR_Box) (SortedOldImpAvails_100));
    }
    mercury__require__expect_3_p_0(Var_153, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad ImpAvails");
    {
      Var_156 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_156, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_11));
      MR_hl_field(MR_mktag(0), Var_156, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_156, 3) = ((MR_Box) (SortedOldSubAvails_101));
      MR_hl_field(MR_mktag(0), Var_156, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_156, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad SubAvails");
    {
      Var_160 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_12));
      MR_hl_field(MR_mktag(0), Var_160, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_160, 3) = ((MR_Box) (SortedNewIntItems_76));
      MR_hl_field(MR_mktag(0), Var_160, 4) = ((MR_Box) (SortedOldIntItems_102));
    }
    mercury__require__expect_3_p_0(Var_160, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad IntItems");
    {
      Var_163 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_13));
      MR_hl_field(MR_mktag(0), Var_163, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_163, 3) = ((MR_Box) (SortedNewImpItems_77));
      MR_hl_field(MR_mktag(0), Var_163, 4) = ((MR_Box) (SortedOldImpItems_103));
    }
    mercury__require__expect_3_p_0(Var_163, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad ImpItems");
    {
      Var_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0_14));
      MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (SortedOldSubItems_104));
      MR_hl_field(MR_mktag(0), Var_166, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_166, (MR_String) "predicate \140parse_tree.modules.grab_unqual_imported_modules_make_int\'/7", (MR_String) "bad SubItems");
    parse_tree__module_imports__make_module_and_imports_11_p_0(SourceFileName_9, SourceFileModuleName_10, ModuleName_16, ModuleNameContext_17, SrcItemBlocksWithFIMs_20, PublicChildren_34, NestedChildren_35, (MR_Word) ((MR_Unsigned) 0U), ForeignIncludeFiles_37, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ModuleAndImports_170_170);
    Var_171 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_16);
    Ancestors_105 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_171);
    Var_176 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_177 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Word) (&parse_tree__modules_scalar_common_7[7]), (MR_Word) (&parse_tree__modules_scalar_common_7[8]), Ancestors_105, Var_176, &ParentImported_106, Var_177, &ParentUsed_107, STATE_VARIABLE_ModuleAndImports_170_170, &STATE_VARIABLE_ModuleAndImports_178_178);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_182_182);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_183_183);
    Var_185 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_10[3]));
    Var_190 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_8, HaveReadModuleMapInt_29, Var_185, (MR_Word) (&parse_tree__modules_scalar_common_7[9]), ParentImported_106, STATE_VARIABLE_IntIndirectImported_182_182, &STATE_VARIABLE_IntIndirectImported_189_189, Var_190, &Var_108, STATE_VARIABLE_ModuleAndImports_178_178, &STATE_VARIABLE_ModuleAndImports_191_191);
    Var_202 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_8, HaveReadModuleMapInt_29, Var_185, (MR_Word) (&parse_tree__modules_scalar_common_7[7]), IntImported_32, STATE_VARIABLE_IntIndirectImported_189_189, &STATE_VARIABLE_IntIndirectImported_201_201, Var_202, &Var_109, STATE_VARIABLE_ModuleAndImports_191_191, &STATE_VARIABLE_ModuleAndImports_203_203);
    Var_214 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_8, HaveReadModuleMapInt_29, Var_185, (MR_Word) (&parse_tree__modules_scalar_common_7[10]), ImpImported_27, STATE_VARIABLE_ImpIndirectImported_183_183, &STATE_VARIABLE_ImpIndirectImported_213_213, Var_214, &Var_110, STATE_VARIABLE_ModuleAndImports_203_203, &STATE_VARIABLE_ModuleAndImports_215_215);
    Var_226 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_8, HaveReadModuleMapInt_29, Var_185, (MR_Word) (&parse_tree__modules_scalar_common_7[9]), ParentUsed_107, STATE_VARIABLE_IntIndirectImported_201_201, &STATE_VARIABLE_IntIndirectImported_225_225, Var_226, &Var_111, STATE_VARIABLE_ModuleAndImports_215_215, &STATE_VARIABLE_ModuleAndImports_227_227);
    Var_233 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_10[4]));
    Var_238 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_8, HaveReadModuleMapInt_29, Var_233, (MR_Word) (&parse_tree__modules_scalar_common_7[11]), IntUsed_33, STATE_VARIABLE_IntIndirectImported_225_225, &STATE_VARIABLE_IntIndirectImported_237_237, Var_238, &Var_112, STATE_VARIABLE_ModuleAndImports_227_227, &STATE_VARIABLE_ModuleAndImports_239_239);
    Var_250 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_8, HaveReadModuleMapInt_29, Var_233, (MR_Word) (&parse_tree__modules_scalar_common_7[12]), ImpUsed_28, STATE_VARIABLE_ImpIndirectImported_213_213, &STATE_VARIABLE_ImpIndirectImported_249_249, Var_250, &Var_113, STATE_VARIABLE_ModuleAndImports_239_239, &STATE_VARIABLE_ModuleAndImports_251_251);
    Var_257 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_10[5]));
    Var_261 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_8, HaveReadModuleMapInt_29, Var_257, (MR_Word) (&parse_tree__modules_scalar_common_7[11]), STATE_VARIABLE_IntIndirectImported_237_237, Var_261, &Var_114, STATE_VARIABLE_ModuleAndImports_251_251, &STATE_VARIABLE_ModuleAndImports_262_262);
    Var_271 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_8, HaveReadModuleMapInt_29, Var_257, (MR_Word) (&parse_tree__modules_scalar_common_7[12]), STATE_VARIABLE_ImpIndirectImported_249_249, Var_271, &Var_115, STATE_VARIABLE_ModuleAndImports_262_262, STATE_VARIABLE_ModuleAndImports_116);
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__4_4;

    conv6_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_and_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_4;

    conv5_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    conv4_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    conv3_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    conv2_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_18(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__398__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_17(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__395__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_16(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__393__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_15(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__390__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_14(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__388__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_13(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__386__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_12(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__384__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_11(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__382__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_10(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__380__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__378__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__376__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__374__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__330__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__328__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__326__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__324__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__grab_imported_modules_augment__322__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__comp_unit_interface__make_foreign_import_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__modules__grab_imported_modules_augment_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_Word SourceFileModuleName_13,
  MR_Word MaybeTimestamp_14,
  MR_Word NestedChildren_15,
  MR_Word RawCompUnit_16,
  MR_Word HaveReadModuleMaps_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_154)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 0))));
    MR_Word ModuleNameContext_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 1))));
    MR_Word RawItemBlocks_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 2))));
    MR_Word SrcItemBlocks_28;
    MR_Word PublicChildren_29;
    MR_Word FactDeps_30;
    MR_Word ForeignIncludeFiles_31;
    MR_Word SrcItemBlocksWithFIMs_32;
    MR_Word MaybeTimestampMap_34;
    MR_Word IntImportedMap_35;
    MR_Word IntUsedMap_36;
    MR_Word ImpImportedMap_37;
    MR_Word ImpUsedMap_38;
    MR_Word IntImported0_39;
    MR_Word IntUsed0_40;
    MR_Word ImpImported0_41;
    MR_Word ImpUsed0_42;
    MR_Word Ancestors_43;
    MR_Word SortedOldSpecs_44;
    MR_Word IntImported1_45;
    MR_Word IntUsed1_46;
    MR_Word ImpImported_47;
    MR_Word ImpUsed_48;
    MR_Word IntUsedImpImported_49;
    MR_Word ImplicitIntImported_50;
    MR_Word ImplicitIntUsed_51;
    MR_Word IntImported2_52;
    MR_Word IntUsed2_53;
    MR_Word NewIntInclsCord_54;
    MR_Word NewImpInclsCord_55;
    MR_Word NewIntAvailsCord_56;
    MR_Word NewImpAvailsCord_57;
    MR_Word NewIntItemsCord_58;
    MR_Word NewImpItemsCord_59;
    MR_Word NewImpIncls_61;
    MR_Word NewImpAvails_63;
    MR_Word NewIntItems_64;
    MR_Word NewImpItems_65;
    MR_Word NewIntImportsMap0_66;
    MR_Word NewIntUsesMap0_67;
    MR_Word NewImpImportsMap0_68;
    MR_Word NewImpUsesMap0_69;
    MR_Word NewImplicitImportNeeds_70;
    MR_Word NewForeignInclFiles_71;
    MR_Word NewLangSet_72;
    MR_Word NewFactTables_73;
    MR_Word NewIntImportsMap1_75;
    MR_Word NewIntUsesMap1_76;
    MR_Word NewImpImportsMap_77;
    MR_Word NewImpUsesMap_78;
    MR_Word NewIntUsedImpImported_79;
    MR_Word SortedNewSpecs_80;
    MR_Word NewIntImports1_81;
    MR_Word NewIntUses1_82;
    MR_Word NewImpImports_83;
    MR_Word NewImpUses_84;
    MR_Word NewImplicitIntImports_85;
    MR_Word NewImplicitIntUses_86;
    MR_Word NewIntImports_87;
    MR_Word NewIntUses_88;
    MR_Word NewLangs_89;
    MR_Word FIMItems_90;
    MR_Word SrcNewIntIncls_91;
    MR_Word SrcNewIntAvails_92;
    MR_Word SrcNewImpIncls_93;
    MR_Word SrcNewSubIncls_94;
    MR_Word SrcNewImpAvails_95;
    MR_Word SrcNewSubAvails_96;
    MR_Word SrcNewIntItems_97;
    MR_Word SrcNewImpItems_98;
    MR_Word SrcNewSubItems_99;
    MR_Word SortedNewIntIncls_107;
    MR_Word SortedNewImpIncls_108;
    MR_Word SortedNewSubIncls_109;
    MR_Word SortedNewIntAvails_110;
    MR_Word SortedNewImpAvails_111;
    MR_Word SortedNewSubAvails_112;
    MR_Word SortedNewIntItems_113;
    MR_Word SortedNewImpItems_114;
    MR_Word SortedNewSubItems_115;
    MR_Word SortedNewFactTables_116;
    MR_Word SortedNewForeignInclFiles_117;
    MR_Word OldIntInclsCord_118;
    MR_Word OldImpInclsCord_119;
    MR_Word OldSubInclsCord_120;
    MR_Word OldIntAvailsCord_121;
    MR_Word OldImpAvailsCord_122;
    MR_Word OldSubAvailsCord_123;
    MR_Word OldIntItemsCord_124;
    MR_Word OldImpItemsCord_125;
    MR_Word OldSubItemsCord_126;
    MR_Word OldIntIncls_127;
    MR_Word OldImpIncls_128;
    MR_Word OldSubIncls_129;
    MR_Word OldIntAvails_130;
    MR_Word OldImpAvails_131;
    MR_Word OldSubAvails_132;
    MR_Word OldIntItems_133;
    MR_Word OldImpItems_134;
    MR_Word OldSubItems_135;
    MR_Word SortedOldIntIncls_136;
    MR_Word SortedOldImpIncls_137;
    MR_Word SortedOldSubIncls_138;
    MR_Word SortedOldIntAvails_139;
    MR_Word SortedOldImpAvails_140;
    MR_Word SortedOldSubAvails_141;
    MR_Word SortedOldIntItems_142;
    MR_Word SortedOldImpItems_143;
    MR_Word SortedOldSubItems_144;
    MR_Word SortedOldFactTables_145;
    MR_Word SortedOldForeignInclFiles_146;
    MR_Word HaveReadModuleMapInt_147;
    MR_Word IntImported_148;
    MR_Word IntUsed_149;
    MR_Word AugCompUnit_150;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word STATE_VARIABLE_Specs_167_167;
    MR_Word STATE_VARIABLE_Specs_168_168;
    MR_Word STATE_VARIABLE_Specs_169_169;
    MR_Word STATE_VARIABLE_Specs_170_170;
    MR_Word STATE_VARIABLE_Specs_171_171;
    MR_Word STATE_VARIABLE_NewSpecs_173_173;
    MR_Word STATE_VARIABLE_NewSpecs_174_174;
    MR_Word STATE_VARIABLE_NewSpecs_175_175;
    MR_Word STATE_VARIABLE_NewSpecs_176_176;
    MR_Word STATE_VARIABLE_Specs_177_177;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_186;
    MR_Word Var_189;
    MR_Word Var_192;
    MR_Word Var_195;
    MR_Word Var_198;
    MR_Word Var_201;
    MR_Word Var_202;
    MR_Word Var_203;
    MR_Word Var_206;
    MR_Word Var_209;
    MR_Word Var_212;
    MR_Word Var_215;
    MR_Word Var_218;
    MR_Word Var_221;
    MR_Word Var_224;
    MR_Word Var_227;
    MR_Word Var_230;
    MR_Word Var_233;
    MR_Word Var_236;
    MR_Word STATE_VARIABLE_ModuleAndImports_239_239;
    MR_Word STATE_VARIABLE_ModuleAndImports_244_244;
    MR_Word STATE_VARIABLE_IntIndirectImported_248_248;
    MR_Word STATE_VARIABLE_ImpIndirectImported_249_249;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_250_250;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_251_251;
    MR_Word Var_253;
    MR_Word STATE_VARIABLE_IntIndirectImported_257_257;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_258_258;
    MR_Word STATE_VARIABLE_ModuleAndImports_259_259;
    MR_Word STATE_VARIABLE_ImpIndirectImported_269_269;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_270_270;
    MR_Word STATE_VARIABLE_ModuleAndImports_271_271;
    MR_Word Var_277;
    MR_Word STATE_VARIABLE_IntIndirectImported_281_281;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_282_282;
    MR_Word STATE_VARIABLE_ModuleAndImports_283_283;
    MR_Word STATE_VARIABLE_ImpIndirectImported_293_293;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_294_294;
    MR_Word STATE_VARIABLE_ModuleAndImports_295_295;
    MR_Word STATE_VARIABLE_IntIndirectImported_305_305;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_306_306;
    MR_Word STATE_VARIABLE_ModuleAndImports_307_307;
    MR_Word Var_313;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_317_317;
    MR_Word STATE_VARIABLE_ModuleAndImports_318_318;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_327_327;
    MR_Word STATE_VARIABLE_ModuleAndImports_328_328;
    MR_Word STATE_VARIABLE_ModuleAndImports_337_337;
    MR_Word STATE_VARIABLE_ModuleAndImports_345_345;
    MR_Word Var_348;
    MR_Word Var_349;
    MR_Word Var_350;
    MR_Word Var_351;
    MR_Word Var_352;
    MR_Word STATE_VARIABLE_Specs_354_354;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word AllImportedOrUsed_153;

    parse_tree__modules__get_src_item_blocks_public_children_3_p_0(RawCompUnit_16, &SrcItemBlocks_28, &PublicChildren_29);
    parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_27, &FactDeps_30);
    parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_27, &ForeignIncludeFiles_31);
    parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_src_item_blocks_3_p_0(ModuleName_25, SrcItemBlocks_28, &SrcItemBlocksWithFIMs_32);
    if ((MaybeTimestamp_14 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeTimestampMap_34 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Timestamp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_14, (MR_Integer) 0))));
      MR_Word Var_157;
      MR_Word Var_158;

      {
        Var_158 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (Timestamp_33));
        MR_hl_field(MR_mktag(0), Var_158, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      Var_157 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_25)), ((MR_Box) (Var_158)));
      {
        MaybeTimestampMap_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTimestampMap_34, 0) = ((MR_Box) (Var_157));
      }
    }
    parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(RawItemBlocks_27, &IntImportedMap_35, &IntUsedMap_36, &ImpImportedMap_37, &ImpUsedMap_38);
    Var_161 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportedMap_35);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_161, &IntImported0_39);
    Var_162 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsedMap_36);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_162, &IntUsed0_40);
    Var_163 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportedMap_37);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_163, &ImpImported0_41);
    Var_164 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsedMap_38);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_164, &ImpUsed0_42);
    Var_165 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_25);
    Ancestors_43 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_165);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_25, RawItemBlocks_27, Ancestors_43, IntImported0_39, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_167_167);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_25, RawItemBlocks_27, Ancestors_43, IntUsed0_40, STATE_VARIABLE_Specs_167_167, &STATE_VARIABLE_Specs_168_168);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_25, RawItemBlocks_27, Ancestors_43, ImpImported0_41, STATE_VARIABLE_Specs_168_168, &STATE_VARIABLE_Specs_169_169);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_25, RawItemBlocks_27, Ancestors_43, ImpUsed0_42, STATE_VARIABLE_Specs_169_169, &STATE_VARIABLE_Specs_170_170);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_170_170, &SortedOldSpecs_44);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(ModuleNameContext_26, IntImported0_39, &IntImported1_45, IntUsed0_40, &IntUsed1_46, ImpImported0_41, &ImpImported_47, ImpUsed0_42, &ImpUsed_48, &IntUsedImpImported_49, STATE_VARIABLE_Specs_170_170, &STATE_VARIABLE_Specs_171_171);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0), Globals_11, SrcItemBlocks_28, &ImplicitIntImported_50, &ImplicitIntUsed_51);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplicitIntImported_50, IntImported1_45, &IntImported2_52);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplicitIntUsed_51, IntUsed1_46, &IntUsed2_53);
    parse_tree__modules__get_raw_components_7_p_0(RawItemBlocks_27, &NewIntInclsCord_54, &NewImpInclsCord_55, &NewIntAvailsCord_56, &NewImpAvailsCord_57, &NewIntItemsCord_58, &NewImpItemsCord_59);
    SrcNewIntIncls_91 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), NewIntInclsCord_54);
    NewImpIncls_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), NewImpInclsCord_55);
    SrcNewIntAvails_92 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), NewIntAvailsCord_56);
    NewImpAvails_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), NewImpAvailsCord_57);
    NewIntItems_64 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewIntItemsCord_58);
    NewImpItems_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewImpItemsCord_59);
    parse_tree__modules__get_deps_maps_6_p_0(SrcNewIntAvails_92, NewImpAvails_63, &NewIntImportsMap0_66, &NewIntUsesMap0_67, &NewImpImportsMap0_68, &NewImpUsesMap0_69);
    parse_tree__modules__get_implicits_foreigns_fact_tables_6_p_0(NewIntItems_64, NewImpItems_65, &NewImplicitImportNeeds_70, &NewForeignInclFiles_71, &NewLangSet_72, &NewFactTables_73);
    parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0(ModuleName_25, Ancestors_43, NewIntImportsMap0_66, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_NewSpecs_173_173);
    parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0(ModuleName_25, Ancestors_43, NewImpUsesMap0_69, STATE_VARIABLE_NewSpecs_173_173, &STATE_VARIABLE_NewSpecs_174_174);
    parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0(ModuleName_25, Ancestors_43, NewImpImportsMap0_68, STATE_VARIABLE_NewSpecs_174_174, &STATE_VARIABLE_NewSpecs_175_175);
    parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0(ModuleName_25, Ancestors_43, NewImpUsesMap0_69, STATE_VARIABLE_NewSpecs_175_175, &STATE_VARIABLE_NewSpecs_176_176);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(ModuleNameContext_26, NewIntImportsMap0_66, &NewIntImportsMap1_75, NewIntUsesMap0_67, &NewIntUsesMap1_76, NewImpImportsMap0_68, &NewImpImportsMap_77, NewImpUsesMap0_69, &NewImpUsesMap_78, &NewIntUsedImpImported_79, STATE_VARIABLE_Specs_171_171, &STATE_VARIABLE_Specs_177_177);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_NewSpecs_176_176, &SortedNewSpecs_80);
    Var_178 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewIntImportsMap1_75);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_178, &NewIntImports1_81);
    Var_179 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewIntUsesMap1_76);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_179, &NewIntUses1_82);
    Var_180 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewImpImportsMap_77);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_180, &NewImpImports_83);
    Var_181 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), NewImpUsesMap_78);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_181, &NewImpUses_84);
    parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(Globals_11, NewImplicitImportNeeds_70, &NewImplicitIntImports_85, &NewImplicitIntUses_86);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewImplicitIntImports_85, NewIntImports1_81, &NewIntImports_87);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewImplicitIntUses_86, NewIntUses1_82, &NewIntUses_88);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NewLangSet_72, &NewLangs_89);
    {
      Var_182 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_182, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_182, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_182, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_182, 3) = ((MR_Box) (ModuleName_25));
    }
    FIMItems_90 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_182, NewLangs_89);
    succeeded = (SrcNewIntIncls_91 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (NewImpIncls_61 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SrcNewImpIncls_93 = NewImpIncls_61;
      SrcNewSubIncls_94 = (MR_Word) ((MR_Unsigned) 0U);
      SrcNewImpAvails_95 = NewImpAvails_63;
      SrcNewSubAvails_96 = (MR_Word) ((MR_Unsigned) 0U);
      SrcNewIntItems_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), FIMItems_90, NewIntItems_64);
      SrcNewImpItems_98 = NewImpItems_65;
      SrcNewSubItems_99 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word NewIntAbstractInstanceItems_100;
      MR_Word NewIntInstanceItems_101;
      MR_Word NewIntNonInstanceItems_102;
      MR_Word RevNewImpClauseItems_103;
      MR_Word RevNewImpDeclItems_104;
      MR_Word NewImpDeclItems_106;
      MR_Word Var_185;

      SrcNewImpIncls_93 = (MR_Word) ((MR_Unsigned) 0U);
      SrcNewSubIncls_94 = NewImpIncls_61;
      SrcNewImpAvails_95 = (MR_Word) ((MR_Unsigned) 0U);
      SrcNewSubAvails_96 = NewImpAvails_63;
      parse_tree__modules__separate_instance_non_instance_4_p_0(NewIntItems_64, &NewIntAbstractInstanceItems_100, &NewIntInstanceItems_101, &NewIntNonInstanceItems_102);
      parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(NewImpItems_65, (MR_Word) ((MR_Unsigned) 0U), &RevNewImpClauseItems_103, (MR_Word) ((MR_Unsigned) 0U), &RevNewImpDeclItems_104);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevNewImpClauseItems_103, &SrcNewImpItems_98);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevNewImpDeclItems_104, &NewImpDeclItems_106);
      Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewIntAbstractInstanceItems_100, NewIntNonInstanceItems_102);
      SrcNewIntItems_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), FIMItems_90, Var_185);
      SrcNewSubItems_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NewIntInstanceItems_101, NewImpDeclItems_106);
    }
    {
      Var_186 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_186, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_186, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_186, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_186, 3) = ((MR_Box) (IntImported2_52));
      MR_hl_field(MR_mktag(0), Var_186, 4) = ((MR_Box) (NewIntImports_87));
    }
    mercury__require__expect_3_p_0(Var_186, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad IntImport");
    {
      Var_189 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_189, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_189, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_189, 3) = ((MR_Box) (IntUsed2_53));
      MR_hl_field(MR_mktag(0), Var_189, 4) = ((MR_Box) (NewIntUses_88));
    }
    mercury__require__expect_3_p_0(Var_189, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad IntUses");
    {
      Var_192 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_192, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_192, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_4));
      MR_hl_field(MR_mktag(0), Var_192, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_192, 3) = ((MR_Box) (ImpImported_47));
      MR_hl_field(MR_mktag(0), Var_192, 4) = ((MR_Box) (NewImpImports_83));
    }
    mercury__require__expect_3_p_0(Var_192, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad ImpImport");
    {
      Var_195 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_195, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_195, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_5));
      MR_hl_field(MR_mktag(0), Var_195, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_195, 3) = ((MR_Box) (ImpUsed_48));
      MR_hl_field(MR_mktag(0), Var_195, 4) = ((MR_Box) (NewImpUses_84));
    }
    mercury__require__expect_3_p_0(Var_195, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad ImpUses");
    {
      Var_198 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_198, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_198, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_6));
      MR_hl_field(MR_mktag(0), Var_198, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_198, 3) = ((MR_Box) (IntUsedImpImported_49));
      MR_hl_field(MR_mktag(0), Var_198, 4) = ((MR_Box) (NewIntUsedImpImported_79));
    }
    mercury__require__expect_3_p_0(Var_198, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad IntUsedImpImported");
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), SrcNewIntIncls_91, &SortedNewIntIncls_107);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), SrcNewImpIncls_93, &SortedNewImpIncls_108);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), SrcNewSubIncls_94, &SortedNewSubIncls_109);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), SrcNewIntAvails_92, &SortedNewIntAvails_110);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), SrcNewImpAvails_95, &SortedNewImpAvails_111);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), SrcNewSubAvails_96, &SortedNewSubAvails_112);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), SrcNewIntItems_97, &SortedNewIntItems_113);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), SrcNewImpItems_98, &SortedNewImpItems_114);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), SrcNewSubItems_99, &SortedNewSubItems_115);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NewFactTables_73, &SortedNewFactTables_116);
    Var_201 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), NewForeignInclFiles_71);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), Var_201, &SortedNewForeignInclFiles_117);
    parse_tree__modules__get_src_components_10_p_0(SrcItemBlocksWithFIMs_32, &OldIntInclsCord_118, &OldImpInclsCord_119, &OldSubInclsCord_120, &OldIntAvailsCord_121, &OldImpAvailsCord_122, &OldSubAvailsCord_123, &OldIntItemsCord_124, &OldImpItemsCord_125, &OldSubItemsCord_126);
    OldIntIncls_127 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldIntInclsCord_118);
    OldImpIncls_128 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldImpInclsCord_119);
    OldSubIncls_129 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldSubInclsCord_120);
    OldIntAvails_130 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldIntAvailsCord_121);
    OldImpAvails_131 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldImpAvailsCord_122);
    OldSubAvails_132 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldSubAvailsCord_123);
    OldIntItems_133 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldIntItemsCord_124);
    OldImpItems_134 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldImpItemsCord_125);
    OldSubItems_135 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldSubItemsCord_126);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldIntIncls_127, &SortedOldIntIncls_136);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldImpIncls_128, &SortedOldImpIncls_137);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), OldSubIncls_129, &SortedOldSubIncls_138);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldIntAvails_130, &SortedOldIntAvails_139);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldImpAvails_131, &SortedOldImpAvails_140);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), OldSubAvails_132, &SortedOldSubAvails_141);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldIntItems_133, &SortedOldIntItems_142);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldImpItems_134, &SortedOldImpItems_143);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), OldSubItems_135, &SortedOldSubItems_144);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactDeps_30, &SortedOldFactTables_145);
    Var_202 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_31);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), Var_202, &SortedOldForeignInclFiles_146);
    {
      Var_203 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_203, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_203, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_7));
      MR_hl_field(MR_mktag(0), Var_203, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_203, 3) = ((MR_Box) (SortedNewIntIncls_107));
      MR_hl_field(MR_mktag(0), Var_203, 4) = ((MR_Box) (SortedOldIntIncls_136));
    }
    mercury__require__expect_3_p_0(Var_203, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad IntIncls");
    {
      Var_206 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_206, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_8));
      MR_hl_field(MR_mktag(0), Var_206, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_206, 3) = ((MR_Box) (SortedNewImpIncls_108));
      MR_hl_field(MR_mktag(0), Var_206, 4) = ((MR_Box) (SortedOldImpIncls_137));
    }
    mercury__require__expect_3_p_0(Var_206, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad ImpIncls");
    {
      Var_209 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_209, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_209, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_9));
      MR_hl_field(MR_mktag(0), Var_209, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_209, 3) = ((MR_Box) (SortedNewSubIncls_109));
      MR_hl_field(MR_mktag(0), Var_209, 4) = ((MR_Box) (SortedOldSubIncls_138));
    }
    mercury__require__expect_3_p_0(Var_209, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad SubIncls");
    {
      Var_212 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_212, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_212, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_10));
      MR_hl_field(MR_mktag(0), Var_212, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_212, 3) = ((MR_Box) (SortedNewIntAvails_110));
      MR_hl_field(MR_mktag(0), Var_212, 4) = ((MR_Box) (SortedOldIntAvails_139));
    }
    mercury__require__expect_3_p_0(Var_212, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad IntAvails");
    {
      Var_215 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_215, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_11));
      MR_hl_field(MR_mktag(0), Var_215, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_215, 3) = ((MR_Box) (SortedNewImpAvails_111));
      MR_hl_field(MR_mktag(0), Var_215, 4) = ((MR_Box) (SortedOldImpAvails_140));
    }
    mercury__require__expect_3_p_0(Var_215, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad ImpAvails");
    {
      Var_218 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_218, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_12));
      MR_hl_field(MR_mktag(0), Var_218, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_218, 3) = ((MR_Box) (SortedNewSubAvails_112));
      MR_hl_field(MR_mktag(0), Var_218, 4) = ((MR_Box) (SortedOldSubAvails_141));
    }
    mercury__require__expect_3_p_0(Var_218, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad SubAvails");
    {
      Var_221 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_221, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_221, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_13));
      MR_hl_field(MR_mktag(0), Var_221, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_221, 3) = ((MR_Box) (SortedNewIntItems_113));
      MR_hl_field(MR_mktag(0), Var_221, 4) = ((MR_Box) (SortedOldIntItems_142));
    }
    mercury__require__expect_3_p_0(Var_221, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad IntItems");
    {
      Var_224 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_224, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_224, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_14));
      MR_hl_field(MR_mktag(0), Var_224, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_224, 3) = ((MR_Box) (SortedNewImpItems_114));
      MR_hl_field(MR_mktag(0), Var_224, 4) = ((MR_Box) (SortedOldImpItems_143));
    }
    mercury__require__expect_3_p_0(Var_224, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad ImpItems");
    {
      Var_227 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_227, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_227, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_15));
      MR_hl_field(MR_mktag(0), Var_227, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_227, 3) = ((MR_Box) (SortedNewSubItems_115));
      MR_hl_field(MR_mktag(0), Var_227, 4) = ((MR_Box) (SortedOldSubItems_144));
    }
    mercury__require__expect_3_p_0(Var_227, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad SubItems");
    {
      Var_230 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_230, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_230, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_16));
      MR_hl_field(MR_mktag(0), Var_230, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_230, 3) = ((MR_Box) (SortedNewFactTables_116));
      MR_hl_field(MR_mktag(0), Var_230, 4) = ((MR_Box) (SortedOldFactTables_145));
    }
    mercury__require__expect_3_p_0(Var_230, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad FactTables");
    {
      Var_233 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_233, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_233, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_17));
      MR_hl_field(MR_mktag(0), Var_233, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_233, 3) = ((MR_Box) (SortedNewForeignInclFiles_117));
      MR_hl_field(MR_mktag(0), Var_233, 4) = ((MR_Box) (SortedOldForeignInclFiles_146));
    }
    mercury__require__expect_3_p_0(Var_233, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad ForeignInclFiles");
    {
      Var_236 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_236, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_236, 1) = ((MR_Box) (parse_tree__modules__grab_imported_modules_augment_10_p_0_18));
      MR_hl_field(MR_mktag(0), Var_236, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_236, 3) = ((MR_Box) (SortedOldSpecs_44));
      MR_hl_field(MR_mktag(0), Var_236, 4) = ((MR_Box) (SortedNewSpecs_80));
    }
    mercury__require__expect_3_p_0(Var_236, (MR_String) "predicate \140parse_tree.modules.grab_imported_modules_augment\'/10", (MR_String) "bad Specs");
    parse_tree__module_imports__make_module_and_imports_11_p_0(SourceFileName_12, SourceFileModuleName_13, ModuleName_25, ModuleNameContext_26, SrcItemBlocksWithFIMs_32, PublicChildren_29, NestedChildren_15, FactDeps_30, ForeignIncludeFiles_31, MaybeTimestampMap_34, &STATE_VARIABLE_ModuleAndImports_239_239);
    HaveReadModuleMapInt_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_17, (MR_Integer) 1))));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(Globals_11, HaveReadModuleMapInt_147, (MR_Word) (&parse_tree__modules_scalar_common_7[1]), (MR_Word) (&parse_tree__modules_scalar_common_7[2]), Ancestors_43, IntImported2_52, &IntImported_148, IntUsed2_53, &IntUsed_149, STATE_VARIABLE_ModuleAndImports_239_239, &STATE_VARIABLE_ModuleAndImports_244_244);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_248_248);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_249_249);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_250_250);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_251_251);
    Var_253 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_10[0]));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_11, HaveReadModuleMapInt_147, Var_253, (MR_Word) (&parse_tree__modules_scalar_common_7[1]), IntImported_148, STATE_VARIABLE_IntIndirectImported_248_248, &STATE_VARIABLE_IntIndirectImported_257_257, STATE_VARIABLE_IntImpIndirectImported_250_250, &STATE_VARIABLE_IntImpIndirectImported_258_258, STATE_VARIABLE_ModuleAndImports_244_244, &STATE_VARIABLE_ModuleAndImports_259_259);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_11, HaveReadModuleMapInt_147, Var_253, (MR_Word) (&parse_tree__modules_scalar_common_7[3]), ImpImported_47, STATE_VARIABLE_ImpIndirectImported_249_249, &STATE_VARIABLE_ImpIndirectImported_269_269, STATE_VARIABLE_ImpImpIndirectImported_251_251, &STATE_VARIABLE_ImpImpIndirectImported_270_270, STATE_VARIABLE_ModuleAndImports_259_259, &STATE_VARIABLE_ModuleAndImports_271_271);
    Var_277 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_10[1]));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_11, HaveReadModuleMapInt_147, Var_277, (MR_Word) (&parse_tree__modules_scalar_common_7[4]), IntUsed_149, STATE_VARIABLE_IntIndirectImported_257_257, &STATE_VARIABLE_IntIndirectImported_281_281, STATE_VARIABLE_IntImpIndirectImported_258_258, &STATE_VARIABLE_IntImpIndirectImported_282_282, STATE_VARIABLE_ModuleAndImports_271_271, &STATE_VARIABLE_ModuleAndImports_283_283);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_11, HaveReadModuleMapInt_147, Var_277, (MR_Word) (&parse_tree__modules_scalar_common_7[5]), ImpUsed_48, STATE_VARIABLE_ImpIndirectImported_269_269, &STATE_VARIABLE_ImpIndirectImported_293_293, STATE_VARIABLE_ImpImpIndirectImported_270_270, &STATE_VARIABLE_ImpImpIndirectImported_294_294, STATE_VARIABLE_ModuleAndImports_283_283, &STATE_VARIABLE_ModuleAndImports_295_295);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_49_50_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_11, HaveReadModuleMapInt_147, Var_253, (MR_Word) (&parse_tree__modules_scalar_common_7[6]), IntUsedImpImported_49, STATE_VARIABLE_IntIndirectImported_281_281, &STATE_VARIABLE_IntIndirectImported_305_305, STATE_VARIABLE_IntImpIndirectImported_282_282, &STATE_VARIABLE_IntImpIndirectImported_306_306, STATE_VARIABLE_ModuleAndImports_295_295, &STATE_VARIABLE_ModuleAndImports_307_307);
    Var_313 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_10[2]));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_11, HaveReadModuleMapInt_147, Var_313, (MR_Word) (&parse_tree__modules_scalar_common_7[4]), STATE_VARIABLE_IntIndirectImported_305_305, STATE_VARIABLE_IntImpIndirectImported_306_306, &STATE_VARIABLE_IntImpIndirectImported_317_317, STATE_VARIABLE_ModuleAndImports_307_307, &STATE_VARIABLE_ModuleAndImports_318_318);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_11, HaveReadModuleMapInt_147, Var_313, (MR_Word) (&parse_tree__modules_scalar_common_7[5]), STATE_VARIABLE_ImpIndirectImported_293_293, STATE_VARIABLE_ImpImpIndirectImported_294_294, &STATE_VARIABLE_ImpImpIndirectImported_327_327, STATE_VARIABLE_ModuleAndImports_318_318, &STATE_VARIABLE_ModuleAndImports_328_328);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_51_95_95_91_51_93_95_48_12_p_0(Globals_11, HaveReadModuleMapInt_147, Var_313, STATE_VARIABLE_IntImpIndirectImported_317_317, STATE_VARIABLE_ModuleAndImports_328_328, &STATE_VARIABLE_ModuleAndImports_337_337);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_51_95_95_91_51_93_95_48_12_p_0(Globals_11, HaveReadModuleMapInt_147, Var_313, STATE_VARIABLE_ImpImpIndirectImported_327_327, STATE_VARIABLE_ModuleAndImports_337_337, &STATE_VARIABLE_ModuleAndImports_345_345);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(STATE_VARIABLE_ModuleAndImports_345_345, &AugCompUnit_150, &Var_151, &Var_152);
    {
      Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_352, 0) = ((MR_Box) (IntUsedImpImported_49));
      MR_hl_field(MR_mktag(1), Var_352, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_351, 0) = ((MR_Box) (ImpUsed_48));
      MR_hl_field(MR_mktag(1), Var_351, 1) = ((MR_Box) (Var_352));
    }
    {
      Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_350, 0) = ((MR_Box) (ImpImported_47));
      MR_hl_field(MR_mktag(1), Var_350, 1) = ((MR_Box) (Var_351));
    }
    {
      Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (IntUsed_149));
      MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) (Var_350));
    }
    {
      Var_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_348, 0) = ((MR_Box) (IntImported_148));
      MR_hl_field(MR_mktag(1), Var_348, 1) = ((MR_Box) (Var_349));
    }
    AllImportedOrUsed_153 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_348);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0(AugCompUnit_150, STATE_VARIABLE_Specs_177_177, &STATE_VARIABLE_Specs_354_354);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(STATE_VARIABLE_Specs_354_354, STATE_VARIABLE_ModuleAndImports_345_345, STATE_VARIABLE_ModuleAndImports_154);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_51_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word PIKind_16,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpIndirectImports_23;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_ModuleAndImports_29_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_28 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_52_95_95_91_51_93_95_48_14_p_0(Globals_13, HaveReadModuleMapInt_14, PIKind_16, Modules_20, Var_28, &ImpIndirectImports_23, STATE_VARIABLE_ModuleAndImports_0_24, &STATE_VARIABLE_ModuleAndImports_29_29);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_23);
    if (succeeded)
      *STATE_VARIABLE_ModuleAndImports_25 = STATE_VARIABLE_ModuleAndImports_29_29;
    else
    {
      MR_Word next_value_of_Modules_20 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_24 = STATE_VARIABLE_ModuleAndImports_29_29;

      // direct tailcall eliminated
      ;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_ModuleAndImports_0_24 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_52_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_18,
  MR_Word Modules_22,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_26;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ImpIndirectImports_34_34;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_50_52_95_95_91_51_93_95_48_16_p_0(Globals_15, HaveReadModuleMapInt_16, PIKind_18, Modules_22, Var_33, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_34_34, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_35_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_30 = STATE_VARIABLE_ModuleAndImports_35_35;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_22 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_34_34;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_29 = STATE_VARIABLE_ModuleAndImports_35_35;

      // direct tailcall eliminated
      ;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_ModuleAndImports_0_29 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_50_52_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstModule_29, Modules_24, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) (conv0_FirstModule_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IntIndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word next_value_of_Modules_24;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;

      {
        MR_Word ModuleName_31;

        parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ModuleName_31);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, ModuleName_31);
      }
      if (!(succeeded))
      {
        {
          MR_Word Ancestors_32;

          parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &Ancestors_32);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstModule_29)), Ancestors_32);
        }
        if (!(succeeded))
        {
          {
            MR_Word IntDeps_33;
            MR_Box conv1_Var_34;

            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IntDeps_33);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntDeps_33, ((MR_Box) (FirstModule_29)), &conv1_Var_34);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          if (!(succeeded))
          {
            {
              MR_Word ImpDeps_35;
              MR_Box conv2_Var_36;

              parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ImpDeps_35);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpDeps_35, ((MR_Box) (FirstModule_29)), &conv2_Var_36);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word IndirectDeps_38;

              succeeded = ((MR_tag((MR_Word) PIKind_20)) == (MR_Integer) 2);
              if (succeeded)
              {
                parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IndirectDeps_38);
                TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (FirstModule_29)), IndirectDeps_38);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_43;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_41;
        STATE_VARIABLE_IntIndirectImports_51_51 = STATE_VARIABLE_IntIndirectImports_0_39;
      }
      else
        parse_tree__modules__process_module_int123_file__ho25_15_p_0(Globals_17, HaveReadModuleMapInt_18, PIKind_20, FirstModule_29, STATE_VARIABLE_IntIndirectImports_0_39, &STATE_VARIABLE_IntIndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_41, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_43, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_Modules_24 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_39 = STATE_VARIABLE_IntIndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_43 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_24 = next_value_of_Modules_24;
      STATE_VARIABLE_IntIndirectImports_0_39 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      STATE_VARIABLE_ImpIndirectImports_0_41 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      STATE_VARIABLE_ModuleAndImports_0_43 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_44 = STATE_VARIABLE_ModuleAndImports_0_43;
      *STATE_VARIABLE_ImpIndirectImports_42 = STATE_VARIABLE_ImpIndirectImports_0_41;
      *STATE_VARIABLE_IntIndirectImports_40 = STATE_VARIABLE_IntIndirectImports_0_39;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_int123_file__ho25_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43)
{
  {
    MR_Word IntAvails_27;
    MR_Word ImpAvails_28;
    MR_Word IntImportsMap_30;
    MR_Word IntUsesMap_31;
    MR_Word ImpImportsMap_32;
    MR_Word ImpUsesMap_33;
    MR_Word IntImports_34;
    MR_Word IntUses_35;
    MR_Word ImpImports_36;
    MR_Word ImpUses_37;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word _ItemBlocks_29;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_16, HaveReadModuleMapInt_17, PIKind_18, (MR_Word) (&parse_tree__modules_scalar_common_2[20]), (MR_Word) (&parse_tree__modules_scalar_common_2[21]), (MR_Word) (&parse_tree__modules_scalar_common_2[22]), Module_22, &IntAvails_27, &ImpAvails_28, &_ItemBlocks_29, STATE_VARIABLE_ModuleAndImports_0_42, STATE_VARIABLE_ModuleAndImports_43);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_27, &IntImportsMap_30, &IntUsesMap_31);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_28, &ImpImportsMap_32, &ImpUsesMap_33);
    Var_48 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportsMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48, &IntImports_34);
    Var_49 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsesMap_31);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, &IntUses_35);
    Var_50 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportsMap_32);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_50, &ImpImports_36);
    Var_51 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsesMap_33);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, &ImpUses_37);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntUses_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntImports_34));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    *STATE_VARIABLE_IntImportsUses_39 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpUses_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ImpImports_36));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_40));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    *STATE_VARIABLE_ImpImportsUses_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_49_50_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstModule_29, Modules_24, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) (conv0_FirstModule_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IntIndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word next_value_of_Modules_24;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;

      {
        MR_Word ModuleName_31;

        parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ModuleName_31);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, ModuleName_31);
      }
      if (!(succeeded))
      {
        {
          MR_Word Ancestors_32;

          parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &Ancestors_32);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstModule_29)), Ancestors_32);
        }
        if (!(succeeded))
        {
          {
            MR_Word IntDeps_33;
            MR_Box conv1_Var_34;

            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IntDeps_33);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntDeps_33, ((MR_Box) (FirstModule_29)), &conv1_Var_34);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          if (!(succeeded))
          {
            {
              MR_Word ImpDeps_35;
              MR_Box conv2_Var_36;

              parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ImpDeps_35);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpDeps_35, ((MR_Box) (FirstModule_29)), &conv2_Var_36);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word IndirectDeps_38;

              succeeded = ((MR_tag((MR_Word) PIKind_20)) == (MR_Integer) 2);
              if (succeeded)
              {
                parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IndirectDeps_38);
                TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (FirstModule_29)), IndirectDeps_38);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_43;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_41;
        STATE_VARIABLE_IntIndirectImports_51_51 = STATE_VARIABLE_IntIndirectImports_0_39;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0(Globals_17, HaveReadModuleMapInt_18, PIKind_20, NewIntSection_21, FirstModule_29, STATE_VARIABLE_IntIndirectImports_0_39, &STATE_VARIABLE_IntIndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_41, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_43, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_Modules_24 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_39 = STATE_VARIABLE_IntIndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_43 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_24 = next_value_of_Modules_24;
      STATE_VARIABLE_IntIndirectImports_0_39 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      STATE_VARIABLE_ImpIndirectImports_0_41 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      STATE_VARIABLE_ModuleAndImports_0_43 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_44 = STATE_VARIABLE_ModuleAndImports_0_43;
      *STATE_VARIABLE_ImpIndirectImports_42 = STATE_VARIABLE_ImpIndirectImports_0_41;
      *STATE_VARIABLE_IntIndirectImports_40 = STATE_VARIABLE_IntIndirectImports_0_39;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_53_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43)
{
  {
    MR_Word IntAvails_27;
    MR_Word ImpAvails_28;
    MR_Word IntImportsMap_30;
    MR_Word IntUsesMap_31;
    MR_Word ImpImportsMap_32;
    MR_Word ImpUsesMap_33;
    MR_Word IntImports_34;
    MR_Word IntUses_35;
    MR_Word ImpImports_36;
    MR_Word ImpUses_37;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word _ItemBlocks_29;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_16, HaveReadModuleMapInt_17, PIKind_18, NewIntSection_19, (MR_Word) (&parse_tree__modules_scalar_common_2[18]), (MR_Word) (&parse_tree__modules_scalar_common_2[19]), Module_22, &IntAvails_27, &ImpAvails_28, &_ItemBlocks_29, STATE_VARIABLE_ModuleAndImports_0_42, STATE_VARIABLE_ModuleAndImports_43);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_27, &IntImportsMap_30, &IntUsesMap_31);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_28, &ImpImportsMap_32, &ImpUsesMap_33);
    Var_48 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportsMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48, &IntImports_34);
    Var_49 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsesMap_31);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, &IntUses_35);
    Var_50 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportsMap_32);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_50, &ImpImports_36);
    Var_51 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsesMap_33);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, &ImpUses_37);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntUses_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntImports_34));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    *STATE_VARIABLE_IntImportsUses_39 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpUses_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ImpImports_36));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_40));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    *STATE_VARIABLE_ImpImportsUses_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__process_int0_files_of_ancestor_modules__1585__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word NewIntSection_19,
  MR_Word NewImpSection_20,
  MR_Word Ancestors_22,
  MR_Word STATE_VARIABLE_DirectImports_0_31,
  MR_Word * STATE_VARIABLE_DirectImports_32,
  MR_Word STATE_VARIABLE_DirectUses_0_33,
  MR_Word * STATE_VARIABLE_DirectUses_34,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_35,
  MR_Word * STATE_VARIABLE_ModuleAndImports_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstAncestor_27;
    MR_Word LaterAncestors_28;
    MR_Box conv0_FirstAncestor_27;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstAncestor_27, Ancestors_22, &LaterAncestors_28);
    if (succeeded)
    {
      FirstAncestor_27 = ((MR_Word) (conv0_FirstAncestor_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_29;
      MR_Word ModAncestors0_30;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_DirectImports_48_48;
      MR_Word STATE_VARIABLE_DirectUses_49_49;
      MR_Word STATE_VARIABLE_ModuleAndImports_50_50;
      MR_Word next_value_of_Ancestors_22;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_31;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_35;

      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_35, &ModuleName_29);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_105_110_116_48_95_102_105_108_101_115_95_111_102_95_97_110_99_101_115_116_111_114_95_109_111_100_117_108_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (FirstAncestor_27));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ModuleName_29));
      }
      mercury__require__expect_not_3_p_0(Var_39, (MR_String) "predicate \140parse_tree.modules.process_int0_files_of_ancestor_modules\'/15", (MR_String) "module is its own ancestor\?");
      parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_35, &ModAncestors0_30);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstAncestor_27)), ModAncestors0_30);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_50_50 = STATE_VARIABLE_ModuleAndImports_0_35;
        STATE_VARIABLE_DirectUses_49_49 = STATE_VARIABLE_DirectUses_0_33;
        STATE_VARIABLE_DirectImports_48_48 = STATE_VARIABLE_DirectImports_0_31;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0(Globals_16, HaveReadModuleMapInt_17, FirstAncestor_27, NewIntSection_19, NewImpSection_20, STATE_VARIABLE_DirectImports_0_31, &STATE_VARIABLE_DirectImports_48_48, STATE_VARIABLE_DirectUses_0_33, &STATE_VARIABLE_DirectUses_49_49, STATE_VARIABLE_ModuleAndImports_0_35, &STATE_VARIABLE_ModuleAndImports_50_50);
      // direct tailcall eliminated
      ;
      next_value_of_Ancestors_22 = LaterAncestors_28;
      next_value_of_STATE_VARIABLE_DirectImports_0_31 = STATE_VARIABLE_DirectImports_48_48;
      next_value_of_STATE_VARIABLE_DirectUses_0_33 = STATE_VARIABLE_DirectUses_49_49;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_35 = STATE_VARIABLE_ModuleAndImports_50_50;
      Ancestors_22 = next_value_of_Ancestors_22;
      STATE_VARIABLE_DirectImports_0_31 = next_value_of_STATE_VARIABLE_DirectImports_0_31;
      STATE_VARIABLE_DirectUses_0_33 = next_value_of_STATE_VARIABLE_DirectUses_0_33;
      STATE_VARIABLE_ModuleAndImports_0_35 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_35;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_36 = STATE_VARIABLE_ModuleAndImports_0_35;
      *STATE_VARIABLE_DirectUses_34 = STATE_VARIABLE_DirectUses_0_33;
      *STATE_VARIABLE_DirectImports_32 = STATE_VARIABLE_DirectImports_0_31;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Module_17,
  MR_Word NewIntSection_18,
  MR_Word NewImpSection_19,
  MR_Word STATE_VARIABLE_DirectImports_0_33,
  MR_Word * STATE_VARIABLE_DirectImports_34,
  MR_Word STATE_VARIABLE_DirectUses_0_35,
  MR_Word * STATE_VARIABLE_DirectUses_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38)
{
  {
    MR_Word ItemBlocks_28;
    MR_Word AncDirectImportsMap_29;
    MR_Word AncDirectUsesMap_30;
    MR_Word AncDirectImports_31;
    MR_Word AncDirectUses_32;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word _IntAvails_26;
    MR_Word _ImpAvails_27;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_15, HaveReadModuleMapInt_16, (MR_Word) ((MR_Unsigned) 0U), NewIntSection_18, NewImpSection_19, (MR_Word) (&parse_tree__modules_scalar_common_2[17]), Module_17, &_IntAvails_26, &_ImpAvails_27, &ItemBlocks_28, STATE_VARIABLE_ModuleAndImports_0_37, STATE_VARIABLE_ModuleAndImports_38);
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), ItemBlocks_28, &AncDirectImportsMap_29, &AncDirectUsesMap_30);
    Var_43 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), AncDirectImportsMap_29);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_43, &AncDirectImports_31);
    Var_44 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), AncDirectUsesMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_44, &AncDirectUses_32);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncDirectImports_31, STATE_VARIABLE_DirectImports_0_33, STATE_VARIABLE_DirectImports_34);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncDirectUses_32, STATE_VARIABLE_DirectUses_0_35, STATE_VARIABLE_DirectUses_36);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_100_105_114_101_99_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Modules_22,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_26;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ImpIndirectImports_34_34;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_49_55_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_15, HaveReadModuleMapInt_16, PIKind_18, NewIntSection_19, Modules_22, Var_33, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_34_34, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_35_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_30 = STATE_VARIABLE_ModuleAndImports_35_35;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_22 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_34_34;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_29 = STATE_VARIABLE_ModuleAndImports_35_35;

      // direct tailcall eliminated
      ;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_ModuleAndImports_0_29 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_49_55_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstModule_29, Modules_24, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) (conv0_FirstModule_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IntIndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word next_value_of_Modules_24;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;

      {
        MR_Word ModuleName_31;

        parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ModuleName_31);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, ModuleName_31);
      }
      if (!(succeeded))
      {
        {
          MR_Word Ancestors_32;

          parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &Ancestors_32);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstModule_29)), Ancestors_32);
        }
        if (!(succeeded))
        {
          {
            MR_Word IntDeps_33;
            MR_Box conv1_Var_34;

            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IntDeps_33);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntDeps_33, ((MR_Box) (FirstModule_29)), &conv1_Var_34);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          if (!(succeeded))
          {
            {
              MR_Word ImpDeps_35;
              MR_Box conv2_Var_36;

              parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ImpDeps_35);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpDeps_35, ((MR_Box) (FirstModule_29)), &conv2_Var_36);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word IndirectDeps_38;

              succeeded = ((MR_tag((MR_Word) PIKind_20)) == (MR_Integer) 2);
              if (succeeded)
              {
                parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IndirectDeps_38);
                TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (FirstModule_29)), IndirectDeps_38);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_43;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_41;
        STATE_VARIABLE_IntIndirectImports_51_51 = STATE_VARIABLE_IntIndirectImports_0_39;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0(Globals_17, HaveReadModuleMapInt_18, PIKind_20, NewIntSection_21, FirstModule_29, STATE_VARIABLE_IntIndirectImports_0_39, &STATE_VARIABLE_IntIndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_41, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_43, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_Modules_24 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_39 = STATE_VARIABLE_IntIndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_43 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_24 = next_value_of_Modules_24;
      STATE_VARIABLE_IntIndirectImports_0_39 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      STATE_VARIABLE_ImpIndirectImports_0_41 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      STATE_VARIABLE_ModuleAndImports_0_43 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_44 = STATE_VARIABLE_ModuleAndImports_0_43;
      *STATE_VARIABLE_ImpIndirectImports_42 = STATE_VARIABLE_ImpIndirectImports_0_41;
      *STATE_VARIABLE_IntIndirectImports_40 = STATE_VARIABLE_IntIndirectImports_0_39;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_50_51_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43)
{
  {
    MR_Word IntAvails_27;
    MR_Word ImpAvails_28;
    MR_Word IntImportsMap_30;
    MR_Word IntUsesMap_31;
    MR_Word ImpImportsMap_32;
    MR_Word ImpUsesMap_33;
    MR_Word IntImports_34;
    MR_Word IntUses_35;
    MR_Word ImpImports_36;
    MR_Word ImpUses_37;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word _ItemBlocks_29;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_16, HaveReadModuleMapInt_17, PIKind_18, NewIntSection_19, (MR_Word) (&parse_tree__modules_scalar_common_2[15]), (MR_Word) (&parse_tree__modules_scalar_common_2[16]), Module_22, &IntAvails_27, &ImpAvails_28, &_ItemBlocks_29, STATE_VARIABLE_ModuleAndImports_0_42, STATE_VARIABLE_ModuleAndImports_43);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_27, &IntImportsMap_30, &IntUsesMap_31);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_28, &ImpImportsMap_32, &ImpUsesMap_33);
    Var_48 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportsMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48, &IntImports_34);
    Var_49 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsesMap_31);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, &IntUses_35);
    Var_50 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportsMap_32);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_50, &ImpImports_36);
    Var_51 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsesMap_33);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, &ImpUses_37);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntUses_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntImports_34));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    *STATE_VARIABLE_IntImportsUses_39 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpUses_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ImpImports_36));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_40));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    *STATE_VARIABLE_ImpImportsUses_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstModule_29, Modules_24, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) (conv0_FirstModule_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IntIndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word next_value_of_Modules_24;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;

      {
        MR_Word ModuleName_31;

        parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ModuleName_31);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, ModuleName_31);
      }
      if (!(succeeded))
      {
        {
          MR_Word Ancestors_32;

          parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &Ancestors_32);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstModule_29)), Ancestors_32);
        }
        if (!(succeeded))
        {
          {
            MR_Word IntDeps_33;
            MR_Box conv1_Var_34;

            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IntDeps_33);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntDeps_33, ((MR_Box) (FirstModule_29)), &conv1_Var_34);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          if (!(succeeded))
          {
            {
              MR_Word ImpDeps_35;
              MR_Box conv2_Var_36;

              parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ImpDeps_35);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpDeps_35, ((MR_Box) (FirstModule_29)), &conv2_Var_36);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word IndirectDeps_38;

              succeeded = ((MR_tag((MR_Word) PIKind_20)) == (MR_Integer) 2);
              if (succeeded)
              {
                parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IndirectDeps_38);
                TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (FirstModule_29)), IndirectDeps_38);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_43;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_41;
        STATE_VARIABLE_IntIndirectImports_51_51 = STATE_VARIABLE_IntIndirectImports_0_39;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0(Globals_17, HaveReadModuleMapInt_18, PIKind_20, NewIntSection_21, FirstModule_29, STATE_VARIABLE_IntIndirectImports_0_39, &STATE_VARIABLE_IntIndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_41, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_43, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_Modules_24 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_39 = STATE_VARIABLE_IntIndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_43 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_24 = next_value_of_Modules_24;
      STATE_VARIABLE_IntIndirectImports_0_39 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      STATE_VARIABLE_ImpIndirectImports_0_41 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      STATE_VARIABLE_ModuleAndImports_0_43 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_44 = STATE_VARIABLE_ModuleAndImports_0_43;
      *STATE_VARIABLE_ImpIndirectImports_42 = STATE_VARIABLE_ImpIndirectImports_0_41;
      *STATE_VARIABLE_IntIndirectImports_40 = STATE_VARIABLE_IntIndirectImports_0_39;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_56_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43)
{
  {
    MR_Word IntAvails_27;
    MR_Word ImpAvails_28;
    MR_Word IntImportsMap_30;
    MR_Word IntUsesMap_31;
    MR_Word ImpImportsMap_32;
    MR_Word ImpUsesMap_33;
    MR_Word IntImports_34;
    MR_Word IntUses_35;
    MR_Word ImpImports_36;
    MR_Word ImpUses_37;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word _ItemBlocks_29;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_16, HaveReadModuleMapInt_17, PIKind_18, NewIntSection_19, (MR_Word) (&parse_tree__modules_scalar_common_2[13]), (MR_Word) (&parse_tree__modules_scalar_common_2[14]), Module_22, &IntAvails_27, &ImpAvails_28, &_ItemBlocks_29, STATE_VARIABLE_ModuleAndImports_0_42, STATE_VARIABLE_ModuleAndImports_43);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_27, &IntImportsMap_30, &IntUsesMap_31);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_28, &ImpImportsMap_32, &ImpUsesMap_33);
    Var_48 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportsMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48, &IntImports_34);
    Var_49 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsesMap_31);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, &IntUses_35);
    Var_50 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportsMap_32);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_50, &ImpImports_36);
    Var_51 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsesMap_33);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, &ImpUses_37);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntUses_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntImports_34));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    *STATE_VARIABLE_IntImportsUses_39 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpUses_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ImpImports_36));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_40));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    *STATE_VARIABLE_ImpImportsUses_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_115_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word PIKind_20,
  MR_Word NewIntSection_21,
  MR_Word Modules_24,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_39,
  MR_Word * STATE_VARIABLE_IntIndirectImports_40,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_41,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &conv0_FirstModule_29, Modules_24, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) (conv0_FirstModule_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IntIndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word next_value_of_Modules_24;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;

      {
        MR_Word ModuleName_31;

        parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ModuleName_31);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, ModuleName_31);
      }
      if (!(succeeded))
      {
        {
          MR_Word Ancestors_32;

          parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &Ancestors_32);
          succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (FirstModule_29)), Ancestors_32);
        }
        if (!(succeeded))
        {
          {
            MR_Word IntDeps_33;
            MR_Box conv1_Var_34;

            parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IntDeps_33);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntDeps_33, ((MR_Box) (FirstModule_29)), &conv1_Var_34);
            if (succeeded)
              succeeded = MR_TRUE;
          }
          if (!(succeeded))
          {
            {
              MR_Word ImpDeps_35;
              MR_Box conv2_Var_36;

              parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &ImpDeps_35);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpDeps_35, ((MR_Box) (FirstModule_29)), &conv2_Var_36);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word IndirectDeps_38;

              succeeded = ((MR_tag((MR_Word) PIKind_20)) == (MR_Integer) 2);
              if (succeeded)
              {
                parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_43, &IndirectDeps_38);
                TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (FirstModule_29)), IndirectDeps_38);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_43;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_41;
        STATE_VARIABLE_IntIndirectImports_51_51 = STATE_VARIABLE_IntIndirectImports_0_39;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0(Globals_17, HaveReadModuleMapInt_18, PIKind_20, NewIntSection_21, FirstModule_29, STATE_VARIABLE_IntIndirectImports_0_39, &STATE_VARIABLE_IntIndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_41, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_43, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      ;
      next_value_of_Modules_24 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_39 = STATE_VARIABLE_IntIndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_43 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_24 = next_value_of_Modules_24;
      STATE_VARIABLE_IntIndirectImports_0_39 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_39;
      STATE_VARIABLE_ImpIndirectImports_0_41 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_41;
      STATE_VARIABLE_ModuleAndImports_0_43 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_43;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_44 = STATE_VARIABLE_ModuleAndImports_0_43;
      *STATE_VARIABLE_ImpIndirectImports_42 = STATE_VARIABLE_ImpIndirectImports_0_41;
      *STATE_VARIABLE_IntIndirectImports_40 = STATE_VARIABLE_IntIndirectImports_0_39;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_105_110_116_49_50_51_95_102_105_108_101_95_95_104_111_49_57_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word PIKind_18,
  MR_Word NewIntSection_19,
  MR_Word Module_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_38,
  MR_Word * STATE_VARIABLE_IntImportsUses_39,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_40,
  MR_Word * STATE_VARIABLE_ImpImportsUses_41,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_42,
  MR_Word * STATE_VARIABLE_ModuleAndImports_43)
{
  {
    MR_Word IntAvails_27;
    MR_Word ImpAvails_28;
    MR_Word IntImportsMap_30;
    MR_Word IntUsesMap_31;
    MR_Word ImpImportsMap_32;
    MR_Word ImpUsesMap_33;
    MR_Word IntImports_34;
    MR_Word IntUses_35;
    MR_Word ImpImports_36;
    MR_Word ImpUses_37;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word _ItemBlocks_29;

    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_16, HaveReadModuleMapInt_17, PIKind_18, NewIntSection_19, (MR_Word) (&parse_tree__modules_scalar_common_2[11]), (MR_Word) (&parse_tree__modules_scalar_common_2[12]), Module_22, &IntAvails_27, &ImpAvails_28, &_ItemBlocks_29, STATE_VARIABLE_ModuleAndImports_0_42, STATE_VARIABLE_ModuleAndImports_43);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_27, &IntImportsMap_30, &IntUsesMap_31);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_28, &ImpImportsMap_32, &ImpUsesMap_33);
    Var_48 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntImportsMap_30);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_48, &IntImports_34);
    Var_49 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsesMap_31);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, &IntUses_35);
    Var_50 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpImportsMap_32);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_50, &ImpImports_36);
    Var_51 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImpUsesMap_33);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, &ImpUses_37);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntUses_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntImports_34));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    *STATE_VARIABLE_IntImportsUses_39 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpUses_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ImpImports_36));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_40));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    *STATE_VARIABLE_ImpImportsUses_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58);
  }
}

static MR_bool MR_CALL 
parse_tree__modules__process_module_interface_general_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_interface_general__1845__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_interface_general_14_p_0(
  MR_Word TypeInfo_for_MS_84,
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word PIKind_17,
  MR_Word NewIntSection_18,
  MR_Word NewImpSection_19,
  MR_Word SectionAppend_20,
  MR_Word ModuleName_21,
  MR_Word * IntAvails_22,
  MR_Word * ImpAvails_23,
  MR_Word * ItemBlocks_24,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_54,
  MR_Word * STATE_VARIABLE_ModuleAndImports_55)
{
  {
    MR_bool succeeded;
    MR_Word IntFileKind_27;
    MR_String IFKStr_30;
    MR_String MsgPrefix_31;
    MR_Word MaybeTimestampMap_32;
    MR_Word ReturnTimestamp_33;
    MR_Word MaybeTimestamp_35;
    MR_Word ParseTree_36;
    MR_Word Specs_37;
    MR_Word Errors_38;
    MR_Word ParseTreeModuleName_39;
    MR_Word IntKind_40;
    MR_Word MaybeVersionNumbers_42;
    MR_Word IntIncls_43;
    MR_Word ImpIncls_44;
    MR_Word IntItems_45;
    MR_Word ImpItems_46;
    MR_Word Statistics_47;
    MR_String Var_59;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_ModuleAndImports_66_66;
    MR_Box Var_67;
    MR_Box Var_68;
    MR_Word STATE_VARIABLE_ModuleAndImports_69_69;
    MR_Word STATE_VARIABLE_ModuleAndImports_70_70;
    MR_String _FileName_34;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_ModuleAndImports_69_69;

    switch (MR_tag((MR_Word) PIKind_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IntFileKind_27 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Int123_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PIKind_17, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

          switch (Int123_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IntFileKind_27 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              IntFileKind_27 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              IntFileKind_27 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Int123_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), PIKind_17, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (Int123_89) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IntFileKind_27 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              IntFileKind_27 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              IntFileKind_27 = (MR_Integer) 1;
              break;
          }
        }
        break;
    }
    IFKStr_30 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_27);
    Var_59 = mercury__string__f_43_43_2_f_0(IFKStr_30, (MR_String) " interface for module");
    MsgPrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "Reading ", Var_59);
    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_54, &MaybeTimestampMap_32);
    if ((MaybeTimestampMap_32 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnTimestamp_33 = (MR_Integer) 1;
    else
      ReturnTimestamp_33 = (MR_Integer) 0;
    parse_tree__read_modules__maybe_read_module_int_14_p_0(Globals_15, HaveReadModuleMapInt_16, MsgPrefix_31, (MR_Integer) 0, ModuleName_21, IntFileKind_27, &_FileName_34, ReturnTimestamp_33, &MaybeTimestamp_35, &ParseTree_36, &Specs_37, &Errors_38);
    ParseTreeModuleName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 0))));
    IntKind_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 1))) & (MR_Integer) 3);
    MaybeVersionNumbers_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 3))));
    IntIncls_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 4))));
    ImpIncls_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 5))));
    *IntAvails_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 6))));
    *ImpAvails_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 7))));
    IntItems_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 8))));
    ImpItems_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTree_36, (MR_Integer) 9))));
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__modules__process_module_interface_general_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleName_21));
      MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (ParseTreeModuleName_39));
    }
    mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140parse_tree.modules.process_module_interface_general\'/14", (MR_String) "ModuleName != ParseTreeModuleName");
    parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_21, MaybeVersionNumbers_42, STATE_VARIABLE_ModuleAndImports_0_54, &STATE_VARIABLE_ModuleAndImports_66_66);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), NewIntSection_18, (MR_Integer) 1))));
    Var_67 = func_0(((MR_Box) (NewIntSection_18)), ((MR_Box) (ModuleName_21)), ((MR_Box) (IntKind_40)));
    func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), NewImpSection_19, (MR_Integer) 1))));
    Var_68 = func_1(((MR_Box) (NewImpSection_19)), ((MR_Box) (ModuleName_21)), ((MR_Box) (IntKind_40)));
    parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(TypeInfo_for_MS_84, ModuleName_21, Var_67, Var_68, IntIncls_43, ImpIncls_44, *IntAvails_22, *ImpAvails_23, IntItems_45, ImpItems_46, ItemBlocks_24);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), SectionAppend_20, (MR_Integer) 1))));
    func_2(((MR_Box) (SectionAppend_20)), ((MR_Box) (*ItemBlocks_24)), ((MR_Box) (STATE_VARIABLE_ModuleAndImports_66_66)), &conv3_STATE_VARIABLE_ModuleAndImports_69_69);
    STATE_VARIABLE_ModuleAndImports_69_69 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleAndImports_69_69));
    parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_37, Errors_38, STATE_VARIABLE_ModuleAndImports_69_69, &STATE_VARIABLE_ModuleAndImports_70_70);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 71, &Statistics_47);
    libs__file_util__maybe_report_stats_3_p_0(Statistics_47);
    switch (MR_tag((MR_Word) PIKind_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FatalErrors_48;
          MR_Word STATE_VARIABLE_ModuleAndImports_81_81;
          MR_Word Var_82;

          parse_tree__modules__maybe_record_timestamp_6_p_0(ModuleName_21, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_35, STATE_VARIABLE_ModuleAndImports_70_70, &STATE_VARIABLE_ModuleAndImports_81_81);
          Var_82 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
          mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_38, Var_82, &FatalErrors_48);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_48);
          if (succeeded)
            parse_tree__module_imports__module_and_imports_add_ancestor_3_p_0(ModuleName_21, STATE_VARIABLE_ModuleAndImports_81_81, STATE_VARIABLE_ModuleAndImports_55);
          else
            *STATE_VARIABLE_ModuleAndImports_55 = STATE_VARIABLE_ModuleAndImports_81_81;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NeedQual_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PIKind_17, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word FatalIntErrors_52;
          MR_Word Var_73;

          Var_73 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
          mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_38, Var_73, &FatalIntErrors_52);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalIntErrors_52);
          if (succeeded)
          {
            MR_Word Context_53;
            MR_Word STATE_VARIABLE_ModuleAndImports_74_74;

            parse_tree__modules__maybe_record_timestamp_6_p_0(ModuleName_21, IntFileKind_27, NeedQual_51, MaybeTimestamp_35, STATE_VARIABLE_ModuleAndImports_70_70, &STATE_VARIABLE_ModuleAndImports_74_74);
            Context_53 = mercury__term__context_init_0_f_0();
            parse_tree__module_imports__module_and_imports_add_imp_dep_4_p_0(ModuleName_21, Context_53, STATE_VARIABLE_ModuleAndImports_74_74, STATE_VARIABLE_ModuleAndImports_55);
          }
          else
            *STATE_VARIABLE_ModuleAndImports_55 = STATE_VARIABLE_ModuleAndImports_70_70;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_ModuleAndImports_77_77;

          parse_tree__modules__maybe_record_timestamp_6_p_0(ModuleName_21, IntFileKind_27, (MR_Integer) 0, MaybeTimestamp_35, STATE_VARIABLE_ModuleAndImports_70_70, &STATE_VARIABLE_ModuleAndImports_77_77);
          parse_tree__module_imports__module_and_imports_add_indirect_dep_3_p_0(ModuleName_21, STATE_VARIABLE_ModuleAndImports_77_77, STATE_VARIABLE_ModuleAndImports_55);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word NeedQual_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_18,
  MR_Word * STATE_VARIABLE_ModuleAndImports_19)
{
  {
    MR_Word MaybeTimestampMap_12;

    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_18, &MaybeTimestampMap_12);
    if ((MaybeTimestampMap_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleAndImports_19 = STATE_VARIABLE_ModuleAndImports_0_18;
    else
    {
      MR_Word TimestampMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_12, (MR_Integer) 0))));

      if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ModuleAndImports_19 = STATE_VARIABLE_ModuleAndImports_0_18;
      else
      {
        MR_Word Timestamp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_10, (MR_Integer) 0))));
        MR_Word FileKind_15;
        MR_Word TimestampInfo_16;
        MR_Word TimestampMap_17;
        MR_Word Var_20;

        {
          FileKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileKind_15, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_8));
        }
        {
          TimestampInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 0) = ((MR_Box) (FileKind_15));
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 1) = ((MR_Box) (Timestamp_14));
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 2) = (MR_Box) ((MR_Unsigned) (NeedQual_9));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (TimestampInfo_16)), TimestampMap0_13, &TimestampMap_17);
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (TimestampMap_17));
        }
        parse_tree__module_imports__module_and_imports_set_maybe_timestamp_map_3_p_0(Var_20, STATE_VARIABLE_ModuleAndImports_0_18, STATE_VARIABLE_ModuleAndImports_19);
      }
    }
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Specs_38;

    parse_tree__modules__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Specs_38);
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Specs_38;

    parse_tree__modules__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Specs_38);
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_MissingAncestorMap_35;

    parse_tree__modules__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_MissingAncestorMap_35);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MissingAncestorMap_35));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_75;

    parse_tree__modules__IntroducedFrom__pred__check_imports_accessibility__2069__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_75);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_75));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_MissingAncestorMap_35;

    parse_tree__modules__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_MissingAncestorMap_35);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_MissingAncestorMap_35));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_65;

    parse_tree__modules__IntroducedFrom__pred__check_imports_accessibility__2057__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_65);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_65));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_16;

    parse_tree__modules__report_any_missing_includes_for_imports_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 0))));
    MR_Word ModuleNameContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word DirectIntItemBlocks_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 4))));
    MR_Word IndirectIntItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 5))));
    MR_Word OptItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 6))));
    MR_Word IntForOptItemBlocks_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 7))));
    MR_Word IntItemBlocks_16;
    MR_Word ReadModules_17;
    MR_Word InclMap_18;
    MR_Word SrcIntImportUseMap_19;
    MR_Word SrcImpImportUseMap_20;
    MR_Word AncestorImportUseMap_21;
    MR_Word SrcIntAncImportUseMap_22;
    MR_Word SrcIntMissingAncestorMap_23;
    MR_Word SrcIntImpImportUseMap_24;
    MR_Word SrcImpMissingAncestorMap0_25;
    MR_Word SrcIntMissingAncestors_26;
    MR_Word SrcImpMissingAncestorMap_27;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Specs_31_31;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_Specs_46_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Box conv1_STATE_VARIABLE_Specs_34_34;
    MR_Box conv2_STATE_VARIABLE_Specs_36_36;
    MR_Box conv5_SrcIntMissingAncestorMap_23;
    MR_Box conv8_SrcImpMissingAncestorMap0_25;
    MR_Box conv10_STATE_VARIABLE_Specs_46_46;
    MR_Box conv12_STATE_VARIABLE_Specs_29;

    IntItemBlocks_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[12]), DirectIntItemBlocks_12, IndirectIntItemBlocks_13);
    parse_tree__modules__record_includes_imports_uses_10_p_0(ModuleName_8, SrcItemBlocks_11, IntItemBlocks_16, OptItemBlocks_14, IntForOptItemBlocks_15, &ReadModules_17, &InclMap_18, &SrcIntImportUseMap_19, &SrcImpImportUseMap_20, &AncestorImportUseMap_21);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (ModuleNameContext_9));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__modules__report_any_missing_includes_6_p_0(ReadModules_17, InclMap_18, ModuleName_8, Var_30, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_31_31);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ReadModules_17));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (InclMap_18));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_33, SrcIntImportUseMap_19, ((MR_Box) (STATE_VARIABLE_Specs_31_31)), &conv1_STATE_VARIABLE_Specs_34_34);
    STATE_VARIABLE_Specs_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_34_34));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_33, SrcImpImportUseMap_20, ((MR_Box) (STATE_VARIABLE_Specs_34_34)), &conv2_STATE_VARIABLE_Specs_36_36);
    STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_36_36));
    mercury__map__union_4_p_1((MR_Word) (&parse_tree__modules_scalar_common_1[13]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_2[9]), SrcIntImportUseMap_19, AncestorImportUseMap_21, &SrcIntAncImportUseMap_22);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (SrcIntAncImportUseMap_22));
    }
    Var_39 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), (MR_Word) (&parse_tree__modules_scalar_common_2[0]), Var_38, SrcIntImportUseMap_19, ((MR_Box) (Var_39)), &conv5_SrcIntMissingAncestorMap_23);
    SrcIntMissingAncestorMap_23 = ((MR_Word) (conv5_SrcIntMissingAncestorMap_23));
    mercury__map__union_4_p_1((MR_Word) (&parse_tree__modules_scalar_common_1[13]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_2[10]), SrcIntAncImportUseMap_22, SrcImpImportUseMap_20, &SrcIntImpImportUseMap_24);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (SrcIntImpImportUseMap_24));
    }
    Var_43 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), (MR_Word) (&parse_tree__modules_scalar_common_2[0]), Var_42, SrcImpImportUseMap_20, ((MR_Box) (Var_43)), &conv8_SrcImpMissingAncestorMap0_25);
    SrcImpMissingAncestorMap0_25 = ((MR_Word) (conv8_SrcImpMissingAncestorMap0_25));
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestorMap_23, &SrcIntMissingAncestors_26);
    mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestors_26, SrcImpMissingAncestorMap0_25, &SrcImpMissingAncestorMap_27);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SrcImpImportUseMap_20));
    }
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Var_47));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_45, SrcIntMissingAncestorMap_23, ((MR_Box) (STATE_VARIABLE_Specs_36_36)), &conv10_STATE_VARIABLE_Specs_46_46);
    STATE_VARIABLE_Specs_46_46 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_46_46));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_48, SrcImpMissingAncestorMap_27, ((MR_Box) (STATE_VARIABLE_Specs_46_46)), &conv12_STATE_VARIABLE_Specs_29);
    *STATE_VARIABLE_Specs_29 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_13;

    parse_tree__modules__report_missing_include_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Specs_13;

    parse_tree__modules__report_abstract_include_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_13));
  }
}

static MR_bool MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__is_non_abstract_include_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__report_any_missing_includes_6_p_0(
  MR_Word ReadModules_7,
  MR_Word InclMap_8,
  MR_Word Module_9,
  MR_Word Contexts_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Module_9)) == (MR_Integer) 1))
    {
      MR_Word ParentModule_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Module_9, (MR_Integer) 0))));
      MR_String SubModule_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Module_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word IncludeContexts_14;
      MR_Box conv0_IncludeContexts_14;
      MR_Word next_value_of_Module_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_19;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[14]), InclMap_8, ((MR_Box) (Module_9)), &conv0_IncludeContexts_14);
      if (succeeded)
      {
        IncludeContexts_14 = ((MR_Word) (conv0_IncludeContexts_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIncludeContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IncludeContexts_14, (MR_Integer) 0))));
        MR_Word TailIncludeContexts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IncludeContexts_14, (MR_Integer) 1))));
        MR_Word IncludeContextsList_17;

        {
          IncludeContextsList_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IncludeContextsList_17, 0) = ((MR_Box) (HeadIncludeContext_15));
          MR_hl_field(MR_mktag(1), IncludeContextsList_17, 1) = ((MR_Box) (TailIncludeContexts_16));
        }
        succeeded = mercury__list__any_true_2_p_0((MR_Word) (&parse_tree__modules__parse_tree__modules__type_ctor_info_include_context_0), (MR_Word) (&parse_tree__modules_scalar_common_2[8]), IncludeContextsList_17);
        if (succeeded)
          STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_19;
        else
        {
          MR_Word Var_22;
          MR_Box conv2_STATE_VARIABLE_Specs_23_23;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__modules__report_any_missing_includes_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ParentModule_12));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (SubModule_13));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_22, Contexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_23_23);
          STATE_VARIABLE_Specs_23_23 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_23_23));
        }
      }
      else
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReadModules_7, ((MR_Box) (ParentModule_12)));
        if (succeeded)
        {
          MR_Word Var_24;
          MR_Box conv4_STATE_VARIABLE_Specs_23_23;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__modules__report_any_missing_includes_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ParentModule_12));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (SubModule_13));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_24, Contexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv4_STATE_VARIABLE_Specs_23_23);
          STATE_VARIABLE_Specs_23_23 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_23_23));
        }
        else
          STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_19;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Module_9 = ParentModule_12;
      next_value_of_STATE_VARIABLE_Specs_0_19 = STATE_VARIABLE_Specs_23_23;
      Module_9 = next_value_of_Module_9;
      STATE_VARIABLE_Specs_0_19 = next_value_of_STATE_VARIABLE_Specs_0_19;
      continue;
    }
    else
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_10_p_0(
  MR_Word ModuleName_11,
  MR_Word SrcItemBlocks_12,
  MR_Word IntItemBlocks_13,
  MR_Word OptItemBlocks_14,
  MR_Word IntForOptItemBlocks_15,
  MR_Word * STATE_VARIABLE_ReadModules_22,
  MR_Word * STATE_VARIABLE_InclMap_23,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_24,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_25,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_26)
{
  {
    MR_Word Ancestors_21;
    MR_Word STATE_VARIABLE_ReadModules_27_27;
    MR_Word STATE_VARIABLE_InclMap_28_28;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_29_29;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_30_30;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_31_31;
    MR_Word STATE_VARIABLE_ReadModules_33_33;
    MR_Word STATE_VARIABLE_InclMap_34_34;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_35_35;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_36_36;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_37_37;
    MR_Word STATE_VARIABLE_ReadModules_39_39;
    MR_Word STATE_VARIABLE_InclMap_40_40;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_41_41;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_42_42;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_43_43;
    MR_Word STATE_VARIABLE_ReadModules_45_45;
    MR_Word STATE_VARIABLE_InclMap_46_46;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_47_47;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_48_48;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_49_49;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ReadModules_27_27);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[14]), &STATE_VARIABLE_InclMap_28_28);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), &STATE_VARIABLE_SrcIntImportUseMap_29_29);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), &STATE_VARIABLE_SrcImpImportUseMap_30_30);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), &STATE_VARIABLE_AncestorImportUseMap_31_31);
    Ancestors_21 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_11);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_104_111_52_95_95_91_49_93_95_48_13_p_0(SrcItemBlocks_12, STATE_VARIABLE_ReadModules_27_27, &STATE_VARIABLE_ReadModules_33_33, STATE_VARIABLE_InclMap_28_28, &STATE_VARIABLE_InclMap_34_34, STATE_VARIABLE_SrcIntImportUseMap_29_29, &STATE_VARIABLE_SrcIntImportUseMap_35_35, STATE_VARIABLE_SrcImpImportUseMap_30_30, &STATE_VARIABLE_SrcImpImportUseMap_36_36, STATE_VARIABLE_AncestorImportUseMap_31_31, &STATE_VARIABLE_AncestorImportUseMap_37_37);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_13_p_0(Ancestors_21, IntItemBlocks_13, STATE_VARIABLE_ReadModules_33_33, &STATE_VARIABLE_ReadModules_39_39, STATE_VARIABLE_InclMap_34_34, &STATE_VARIABLE_InclMap_40_40, STATE_VARIABLE_SrcIntImportUseMap_35_35, &STATE_VARIABLE_SrcIntImportUseMap_41_41, STATE_VARIABLE_SrcImpImportUseMap_36_36, &STATE_VARIABLE_SrcImpImportUseMap_42_42, STATE_VARIABLE_AncestorImportUseMap_37_37, &STATE_VARIABLE_AncestorImportUseMap_43_43);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_13_p_0(Ancestors_21, OptItemBlocks_14, STATE_VARIABLE_ReadModules_39_39, &STATE_VARIABLE_ReadModules_45_45, STATE_VARIABLE_InclMap_40_40, &STATE_VARIABLE_InclMap_46_46, STATE_VARIABLE_SrcIntImportUseMap_41_41, &STATE_VARIABLE_SrcIntImportUseMap_47_47, STATE_VARIABLE_SrcImpImportUseMap_42_42, &STATE_VARIABLE_SrcImpImportUseMap_48_48, STATE_VARIABLE_AncestorImportUseMap_43_43, &STATE_VARIABLE_AncestorImportUseMap_49_49);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_13_p_0(Ancestors_21, IntForOptItemBlocks_15, STATE_VARIABLE_ReadModules_45_45, STATE_VARIABLE_ReadModules_22, STATE_VARIABLE_InclMap_46_46, STATE_VARIABLE_InclMap_23, STATE_VARIABLE_SrcIntImportUseMap_47_47, STATE_VARIABLE_SrcIntImportUseMap_24, STATE_VARIABLE_SrcImpImportUseMap_48_48, STATE_VARIABLE_SrcImpImportUseMap_25, STATE_VARIABLE_AncestorImportUseMap_49_49, STATE_VARIABLE_AncestorImportUseMap_26);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_104_111_52_95_95_91_49_93_95_48_13_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AncestorImportUseMap_13 = STATE_VARIABLE_AncestorImportUseMap_0_12;
      *STATE_VARIABLE_SrcImpImportUseMap_11 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
      *STATE_VARIABLE_SrcIntImportUseMap_9 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
      *STATE_VARIABLE_InclMap_7 = STATE_VARIABLE_InclMap_0_6;
      *STATE_VARIABLE_ReadModules_5 = STATE_VARIABLE_ReadModules_0_4;
    }
    else
    {
      MR_Word ItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 0))));
      MR_Word Section_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_ReadModules_56_56;
      MR_Word STATE_VARIABLE_AncestorImportUseMap_61_61;
      MR_Word STATE_VARIABLE_SrcImpImportUseMap_64_64;
      MR_Word STATE_VARIABLE_InclMap_66_66;
      MR_Word STATE_VARIABLE_SrcIntImportUseMap_67_67;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ReadModules_0_4;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_SrcIntImportUseMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_SrcImpImportUseMap_0_10;
      MR_Word next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_40)), STATE_VARIABLE_ReadModules_0_4, &STATE_VARIABLE_ReadModules_56_56);
      switch (Section_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 0, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
            parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_SrcImpImportUseMap_0_10, &STATE_VARIABLE_SrcImpImportUseMap_64_64);
            STATE_VARIABLE_SrcIntImportUseMap_67_67 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
            STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 0, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
            parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_SrcImpImportUseMap_0_10, &STATE_VARIABLE_SrcImpImportUseMap_64_64);
            STATE_VARIABLE_SrcIntImportUseMap_67_67 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
            STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
          }
          break;
        case (MR_Integer) 0:
          {
            parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 0, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
            parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_SrcIntImportUseMap_0_8, &STATE_VARIABLE_SrcIntImportUseMap_67_67);
            STATE_VARIABLE_SrcImpImportUseMap_64_64 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
            STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_33;
      next_value_of_STATE_VARIABLE_ReadModules_0_4 = STATE_VARIABLE_ReadModules_56_56;
      next_value_of_STATE_VARIABLE_InclMap_0_6 = STATE_VARIABLE_InclMap_66_66;
      next_value_of_STATE_VARIABLE_SrcIntImportUseMap_0_8 = STATE_VARIABLE_SrcIntImportUseMap_67_67;
      next_value_of_STATE_VARIABLE_SrcImpImportUseMap_0_10 = STATE_VARIABLE_SrcImpImportUseMap_64_64;
      next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12 = STATE_VARIABLE_AncestorImportUseMap_61_61;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ReadModules_0_4 = next_value_of_STATE_VARIABLE_ReadModules_0_4;
      STATE_VARIABLE_InclMap_0_6 = next_value_of_STATE_VARIABLE_InclMap_0_6;
      STATE_VARIABLE_SrcIntImportUseMap_0_8 = next_value_of_STATE_VARIABLE_SrcIntImportUseMap_0_8;
      STATE_VARIABLE_SrcImpImportUseMap_0_10 = next_value_of_STATE_VARIABLE_SrcImpImportUseMap_0_10;
      STATE_VARIABLE_AncestorImportUseMap_0_12 = next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_13_p_0(
  MR_Word Ancestors_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AncestorImportUseMap_13 = STATE_VARIABLE_AncestorImportUseMap_0_12;
      *STATE_VARIABLE_SrcImpImportUseMap_11 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
      *STATE_VARIABLE_SrcIntImportUseMap_9 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
      *STATE_VARIABLE_InclMap_7 = STATE_VARIABLE_InclMap_0_6;
      *STATE_VARIABLE_ReadModules_5 = STATE_VARIABLE_ReadModules_0_4;
    }
    else
    {
      MR_Word ItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 0))));
      MR_Word Section_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_ReadModules_56_56;
      MR_Word STATE_VARIABLE_AncestorImportUseMap_61_61;
      MR_Word STATE_VARIABLE_SrcImpImportUseMap_64_64;
      MR_Word STATE_VARIABLE_InclMap_66_66;
      MR_Word STATE_VARIABLE_SrcIntImportUseMap_67_67;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ReadModules_0_4;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_SrcIntImportUseMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_SrcImpImportUseMap_0_10;
      MR_Word next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_40)), STATE_VARIABLE_ReadModules_0_4, &STATE_VARIABLE_ReadModules_56_56);
      if (((MR_tag((MR_Word) Section_41)) == (MR_Integer) 1))
      {
        parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 1, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_1, ((MR_Box) (ModuleName_40)));
        if (succeeded)
          parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_AncestorImportUseMap_0_12, &STATE_VARIABLE_AncestorImportUseMap_61_61);
        else
          STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
        STATE_VARIABLE_SrcIntImportUseMap_67_67 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
        STATE_VARIABLE_SrcImpImportUseMap_64_64 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
      }
      else
      {
        parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 0, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_1, ((MR_Box) (ModuleName_40)));
        if (succeeded)
          parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_AncestorImportUseMap_0_12, &STATE_VARIABLE_AncestorImportUseMap_61_61);
        else
          STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
        STATE_VARIABLE_SrcIntImportUseMap_67_67 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
        STATE_VARIABLE_SrcImpImportUseMap_64_64 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_33;
      next_value_of_STATE_VARIABLE_ReadModules_0_4 = STATE_VARIABLE_ReadModules_56_56;
      next_value_of_STATE_VARIABLE_InclMap_0_6 = STATE_VARIABLE_InclMap_66_66;
      next_value_of_STATE_VARIABLE_SrcIntImportUseMap_0_8 = STATE_VARIABLE_SrcIntImportUseMap_67_67;
      next_value_of_STATE_VARIABLE_SrcImpImportUseMap_0_10 = STATE_VARIABLE_SrcImpImportUseMap_64_64;
      next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12 = STATE_VARIABLE_AncestorImportUseMap_61_61;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ReadModules_0_4 = next_value_of_STATE_VARIABLE_ReadModules_0_4;
      STATE_VARIABLE_InclMap_0_6 = next_value_of_STATE_VARIABLE_InclMap_0_6;
      STATE_VARIABLE_SrcIntImportUseMap_0_8 = next_value_of_STATE_VARIABLE_SrcIntImportUseMap_0_8;
      STATE_VARIABLE_SrcImpImportUseMap_0_10 = next_value_of_STATE_VARIABLE_SrcImpImportUseMap_0_10;
      STATE_VARIABLE_AncestorImportUseMap_0_12 = next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_13_p_0(
  MR_Word Ancestors_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AncestorImportUseMap_13 = STATE_VARIABLE_AncestorImportUseMap_0_12;
      *STATE_VARIABLE_SrcImpImportUseMap_11 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
      *STATE_VARIABLE_SrcIntImportUseMap_9 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
      *STATE_VARIABLE_InclMap_7 = STATE_VARIABLE_InclMap_0_6;
      *STATE_VARIABLE_ReadModules_5 = STATE_VARIABLE_ReadModules_0_4;
    }
    else
    {
      MR_Word ItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 0))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_ReadModules_56_56;
      MR_Word STATE_VARIABLE_AncestorImportUseMap_61_61;
      MR_Word STATE_VARIABLE_InclMap_66_66;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ReadModules_0_4;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_40)), STATE_VARIABLE_ReadModules_0_4, &STATE_VARIABLE_ReadModules_56_56);
      parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 0, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_1, ((MR_Box) (ModuleName_40)));
      if (succeeded)
        parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_AncestorImportUseMap_0_12, &STATE_VARIABLE_AncestorImportUseMap_61_61);
      else
        STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_33;
      next_value_of_STATE_VARIABLE_ReadModules_0_4 = STATE_VARIABLE_ReadModules_56_56;
      next_value_of_STATE_VARIABLE_InclMap_0_6 = STATE_VARIABLE_InclMap_66_66;
      next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12 = STATE_VARIABLE_AncestorImportUseMap_61_61;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ReadModules_0_4 = next_value_of_STATE_VARIABLE_ReadModules_0_4;
      STATE_VARIABLE_InclMap_0_6 = next_value_of_STATE_VARIABLE_InclMap_0_6;
      STATE_VARIABLE_AncestorImportUseMap_0_12 = next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_13_p_0(
  MR_Word Ancestors_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ReadModules_0_4,
  MR_Word * STATE_VARIABLE_ReadModules_5,
  MR_Word STATE_VARIABLE_InclMap_0_6,
  MR_Word * STATE_VARIABLE_InclMap_7,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_8,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_9,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_10,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_11,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_12,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AncestorImportUseMap_13 = STATE_VARIABLE_AncestorImportUseMap_0_12;
      *STATE_VARIABLE_SrcImpImportUseMap_11 = STATE_VARIABLE_SrcImpImportUseMap_0_10;
      *STATE_VARIABLE_SrcIntImportUseMap_9 = STATE_VARIABLE_SrcIntImportUseMap_0_8;
      *STATE_VARIABLE_InclMap_7 = STATE_VARIABLE_InclMap_0_6;
      *STATE_VARIABLE_ReadModules_5 = STATE_VARIABLE_ReadModules_0_4;
    }
    else
    {
      MR_Word ItemBlock_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 0))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_32, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_ReadModules_56_56;
      MR_Word STATE_VARIABLE_AncestorImportUseMap_61_61;
      MR_Word STATE_VARIABLE_InclMap_66_66;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ReadModules_0_4;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_40)), STATE_VARIABLE_ReadModules_0_4, &STATE_VARIABLE_ReadModules_56_56);
      parse_tree__modules__record_includes_acc_4_p_0((MR_Integer) 0, Incls_42, STATE_VARIABLE_InclMap_0_6, &STATE_VARIABLE_InclMap_66_66);
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_1, ((MR_Box) (ModuleName_40)));
      if (succeeded)
        parse_tree__modules__record_avails_acc_3_p_0(Avails_43, STATE_VARIABLE_AncestorImportUseMap_0_12, &STATE_VARIABLE_AncestorImportUseMap_61_61);
      else
        STATE_VARIABLE_AncestorImportUseMap_61_61 = STATE_VARIABLE_AncestorImportUseMap_0_12;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_33;
      next_value_of_STATE_VARIABLE_ReadModules_0_4 = STATE_VARIABLE_ReadModules_56_56;
      next_value_of_STATE_VARIABLE_InclMap_0_6 = STATE_VARIABLE_InclMap_66_66;
      next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12 = STATE_VARIABLE_AncestorImportUseMap_61_61;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ReadModules_0_4 = next_value_of_STATE_VARIABLE_ReadModules_0_4;
      STATE_VARIABLE_InclMap_0_6 = next_value_of_STATE_VARIABLE_InclMap_0_6;
      STATE_VARIABLE_AncestorImportUseMap_0_12 = next_value_of_STATE_VARIABLE_AncestorImportUseMap_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImportUseMap_3 = STATE_VARIABLE_ImportUseMap_0_2;
    else
    {
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_10;
      MR_Word Context_11;
      MR_Word ImportOrUse_13;
      MR_Word IoUC_14;
      MR_Word STATE_VARIABLE_ImportUseMap_24_24;
      MR_Word OneOrMore0_15;
      MR_Box conv0_OneOrMore0_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_Integer) 0))
      {
        MR_Word Var_22 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
        ImportOrUse_13 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_21 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
        ImportOrUse_13 = (MR_Integer) 1;
      }
      {
        IoUC_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IoUC_14, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_13));
        MR_hl_field(MR_mktag(0), IoUC_14, 1) = ((MR_Box) (Context_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_15);
      if (succeeded)
      {
        OneOrMore0_15 = ((MR_Word) (conv0_OneOrMore0_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIoUC_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMore0_15, (MR_Integer) 0))));
        MR_Word TailIoUCs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMore0_15, (MR_Integer) 1))));
        MR_Word OneOrMore_18;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (HeadIoUC_16));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (TailIoUCs_17));
        }
        {
          OneOrMore_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_18, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(MR_mktag(0), OneOrMore_18, 1) = ((MR_Box) (Var_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_18)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_30;

        {
          OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_30, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(MR_mktag(0), OneOrMore_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[13]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_30)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_8;
      next_value_of_STATE_VARIABLE_ImportUseMap_0_2 = STATE_VARIABLE_ImportUseMap_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportUseMap_0_2 = next_value_of_STATE_VARIABLE_ImportUseMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_acc_4_p_0(
  MR_Word Section_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InclMap_4 = STATE_VARIABLE_InclMap_0_3;
    else
    {
      MR_Word Include_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Includes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Include_10, (MR_Integer) 0))));
      MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Include_10, (MR_Integer) 1))));
      MR_Word IncludeContext_16;
      MR_Word STATE_VARIABLE_InclMap_24_24;
      MR_Word OneOrMore0_17;
      MR_Box conv0_OneOrMore0_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_3;

      {
        IncludeContext_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IncludeContext_16, 0) = (MR_Box) ((MR_Unsigned) (Section_1));
        MR_hl_field(MR_mktag(0), IncludeContext_16, 1) = ((MR_Box) (Context_14));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[14]), STATE_VARIABLE_InclMap_0_3, ((MR_Box) (ModuleName_13)), &conv0_OneOrMore0_17);
      if (succeeded)
      {
        OneOrMore0_17 = ((MR_Word) (conv0_OneOrMore0_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMore0_17, (MR_Integer) 0))));
        MR_Word TailContexts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMore0_17, (MR_Integer) 1))));
        MR_Word OneOrMore_20;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (HeadContext_18));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (TailContexts_19));
        }
        {
          OneOrMore_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_20, 0) = ((MR_Box) (IncludeContext_16));
          MR_hl_field(MR_mktag(0), OneOrMore_20, 1) = ((MR_Box) (Var_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[14]), ((MR_Box) (ModuleName_13)), ((MR_Box) (OneOrMore_20)), STATE_VARIABLE_InclMap_0_3, &STATE_VARIABLE_InclMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_28;

        {
          OneOrMore_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_28, 0) = ((MR_Box) (IncludeContext_16));
          MR_hl_field(MR_mktag(0), OneOrMore_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[14]), ((MR_Box) (ModuleName_13)), ((MR_Box) (OneOrMore_28)), STATE_VARIABLE_InclMap_0_3, &STATE_VARIABLE_InclMap_24_24);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Includes_11;
      next_value_of_STATE_VARIABLE_InclMap_0_3 = STATE_VARIABLE_InclMap_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InclMap_0_3 = next_value_of_STATE_VARIABLE_InclMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_IntImportedMap_0_23,
  MR_Word * STATE_VARIABLE_IntImportedMap_24,
  MR_Word STATE_VARIABLE_IntUsedMap_0_25,
  MR_Word * STATE_VARIABLE_IntUsedMap_26,
  MR_Word STATE_VARIABLE_ImpImportedMap_0_27,
  MR_Word * STATE_VARIABLE_ImpImportedMap_28,
  MR_Word STATE_VARIABLE_ImpUsedMap_0_29,
  MR_Word * STATE_VARIABLE_ImpUsedMap_30,
  MR_Word * IntUsedImpImported_20,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_IntUsedMap_33_33;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Word STATE_VARIABLE_ImpUsedMap_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;

    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0(Context_15, STATE_VARIABLE_IntImportedMap_0_23, STATE_VARIABLE_IntUsedMap_0_25, &STATE_VARIABLE_IntUsedMap_33_33, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_34_34);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0(Context_15, STATE_VARIABLE_IntImportedMap_0_23, STATE_VARIABLE_ImpUsedMap_0_29, &STATE_VARIABLE_ImpUsedMap_35_35, STATE_VARIABLE_Specs_34_34, &STATE_VARIABLE_Specs_36_36);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0(Context_15, STATE_VARIABLE_ImpImportedMap_0_27, STATE_VARIABLE_ImpUsedMap_35_35, STATE_VARIABLE_ImpUsedMap_30, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_32);
    Var_40 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), STATE_VARIABLE_ImpImportedMap_0_27);
    Var_39 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_40);
    Var_42 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), STATE_VARIABLE_IntUsedMap_33_33);
    Var_41 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_42);
    *IntUsedImpImported_20 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_39, Var_41);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), *IntUsedImpImported_20);
    if (succeeded)
    {
      *STATE_VARIABLE_ImpImportedMap_28 = STATE_VARIABLE_ImpImportedMap_0_27;
      *STATE_VARIABLE_IntUsedMap_26 = STATE_VARIABLE_IntUsedMap_33_33;
    }
    else
    {
      MR_Word IntUsedImpImportedList_22;

      IntUsedImpImportedList_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), *IntUsedImpImported_20);
      mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsedImpImportedList_22, STATE_VARIABLE_IntUsedMap_33_33, STATE_VARIABLE_IntUsedMap_26);
      mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), IntUsedImpImportedList_22, STATE_VARIABLE_ImpImportedMap_0_27, STATE_VARIABLE_ImpImportedMap_28);
    }
    *STATE_VARIABLE_IntImportedMap_24 = STATE_VARIABLE_IntImportedMap_0_23;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_119_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word Context_9,
  MR_Word ImportedMap_10,
  MR_Word STATE_VARIABLE_UsedMap_0_21,
  MR_Word * STATE_VARIABLE_UsedMap_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;
    MR_Word Imported_13;
    MR_Word Used0_14;
    MR_Word ImportedAndUsed_15;
    MR_Word Var_25;
    MR_Word Var_26;

    Var_25 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), ImportedMap_10);
    Imported_13 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_25);
    Var_26 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), STATE_VARIABLE_UsedMap_0_21);
    Used0_14 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_26);
    mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Imported_13, Used0_14, &ImportedAndUsed_15);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedAndUsed_15);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
      *STATE_VARIABLE_UsedMap_22 = STATE_VARIABLE_UsedMap_0_21;
    }
    else
    {
      MR_Word ImportedAndUsedList_16;
      MR_Word Pieces_17;
      MR_Word Msg_18;
      MR_Word Spec_20;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_String Var_32;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_String Var_43;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Box conv0_Var_32;
      MR_Box conv2_Var_43;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedAndUsed_15, &ImportedAndUsedList_16);
      conv0_Var_32 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ImportedAndUsedList_16, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
      Var_32 = ((MR_String) (conv0_Var_32));
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      Var_39 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__modules_scalar_common_2[7]), ImportedAndUsedList_16);
      Var_37 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_39);
      conv2_Var_43 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ImportedAndUsedList_16, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
      Var_43 = ((MR_String) (conv2_Var_43));
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[35])));
      }
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37, Var_41);
      Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_27, Var_36);
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Pieces_17));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 24) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_18, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_18, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Msg_18));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[3])));
        MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_77));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
      }
      Var_80 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedAndUsed_15);
      mercury__map__delete_sorted_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), Var_80, STATE_VARIABLE_UsedMap_0_21, STATE_VARIABLE_UsedMap_22);
    }
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_IntImported_0_22,
  MR_Word * STATE_VARIABLE_IntImported_23,
  MR_Word STATE_VARIABLE_IntUsed_0_24,
  MR_Word * STATE_VARIABLE_IntUsed_25,
  MR_Word STATE_VARIABLE_ImpImported_0_26,
  MR_Word * STATE_VARIABLE_ImpImported_27,
  MR_Word STATE_VARIABLE_ImpUsed_0_28,
  MR_Word * STATE_VARIABLE_ImpUsed_29,
  MR_Word * IntUsedImpImported_20,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_IntImported_32_32;
    MR_Word STATE_VARIABLE_IntUsed_33_33;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Word STATE_VARIABLE_ImpUsed_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_ImpImported_38_38;

    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(Context_15, STATE_VARIABLE_IntImported_0_22, &STATE_VARIABLE_IntImported_32_32, STATE_VARIABLE_IntUsed_0_24, &STATE_VARIABLE_IntUsed_33_33, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_34_34);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(Context_15, STATE_VARIABLE_IntImported_32_32, STATE_VARIABLE_IntImported_23, STATE_VARIABLE_ImpUsed_0_28, &STATE_VARIABLE_ImpUsed_36_36, STATE_VARIABLE_Specs_34_34, &STATE_VARIABLE_Specs_37_37);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(Context_15, STATE_VARIABLE_ImpImported_0_26, &STATE_VARIABLE_ImpImported_38_38, STATE_VARIABLE_ImpUsed_36_36, STATE_VARIABLE_ImpUsed_29, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_31);
    *IntUsedImpImported_20 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_ImpImported_38_38, STATE_VARIABLE_IntUsed_33_33);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), *IntUsedImpImported_20);
    if (succeeded)
    {
      *STATE_VARIABLE_ImpImported_27 = STATE_VARIABLE_ImpImported_38_38;
      *STATE_VARIABLE_IntUsed_25 = STATE_VARIABLE_IntUsed_33_33;
    }
    else
    {
      *STATE_VARIABLE_IntUsed_25 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_IntUsed_33_33, *IntUsedImpImported_20);
      *STATE_VARIABLE_ImpImported_27 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_ImpImported_38_38, *IntUsedImpImported_20);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Imported_0_20,
  MR_Word * STATE_VARIABLE_Imported_21,
  MR_Word STATE_VARIABLE_Used_0_22,
  MR_Word * STATE_VARIABLE_Used_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word ImportedAndUsed_14;

    mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Imported_0_20, STATE_VARIABLE_Used_0_22, &ImportedAndUsed_14);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedAndUsed_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      *STATE_VARIABLE_Used_23 = STATE_VARIABLE_Used_0_22;
    }
    else
    {
      MR_Word ImportedAndUsedList_15;
      MR_Word Pieces_16;
      MR_Word Msg_17;
      MR_Word Spec_19;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_String Var_31;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_String Var_42;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_76;
      MR_Box conv0_Var_31;
      MR_Box conv2_Var_42;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedAndUsed_14, &ImportedAndUsedList_15);
      conv0_Var_31 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ImportedAndUsedList_15, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
      Var_31 = ((MR_String) (conv0_Var_31));
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      Var_38 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__modules_scalar_common_2[6]), ImportedAndUsedList_15);
      Var_36 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_38);
      conv2_Var_42 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ImportedAndUsedList_15, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
      Var_42 = ((MR_String) (conv2_Var_42));
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[35])));
      }
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_36, Var_40);
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, Var_35);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_16));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 24) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_17));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[3])));
        MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_76));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
      mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_Used_0_22, ImportedAndUsed_14, STATE_VARIABLE_Used_23);
    }
    *STATE_VARIABLE_Imported_21 = STATE_VARIABLE_Imported_0_20;
  }
}

static void MR_CALL 
parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_13;

    parse_tree__modules__warn_import_for_self_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_12;

    parse_tree__modules__new_warn_import_for_ancestor_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_12));
  }
}

static void MR_CALL 
parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Ancestors_7,
  MR_Word ImportedOrUsedMap_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_bool succeeded;
    MR_Word ImportedOrUsed_10;
    MR_Word ImportedOrUsedAncestors_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Specs_16_16;
    MR_Box conv1_STATE_VARIABLE_Specs_16_16;

    Var_14 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImportedOrUsedMap_8);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_14, &ImportedOrUsed_10);
    mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_7, ImportedOrUsed_10, &ImportedOrUsedAncestors_11);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (ImportedOrUsedMap_8));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_15, ImportedOrUsedAncestors_11, ((MR_Box) (STATE_VARIABLE_Specs_0_12)), &conv1_STATE_VARIABLE_Specs_16_16);
    STATE_VARIABLE_Specs_16_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16_16));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_6)), ImportedOrUsed_10);
    if (succeeded)
    {
      MR_Word Contexts_29;
      MR_Word Var_30;
      MR_Box conv3_STATE_VARIABLE_Specs_13;

      mercury__multi_map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImportedOrUsedMap_8, ((MR_Box) (ModuleName_6)), &Contexts_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__modules__new_warn_if_import_for_self_or_ancestor_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleName_6));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_30, Contexts_29, ((MR_Box) (STATE_VARIABLE_Specs_16_16)), &conv3_STATE_VARIABLE_Specs_13);
      *STATE_VARIABLE_Specs_13 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_13));
    }
    else
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_16_16;
  }
}

static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_13;

    parse_tree__modules__warn_import_for_self_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_12;

    parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_12));
  }
}

static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word RawItemBlocks_8,
  MR_Word Ancestors_9,
  MR_Word ImportedOrUsed_10,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_bool succeeded;
    MR_Word ImportedOrUsedAncestors_12;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Specs_16_16;
    MR_Box conv1_STATE_VARIABLE_Specs_16_16;

    mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_9, ImportedOrUsed_10, &ImportedOrUsedAncestors_12);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (RawItemBlocks_8));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_15, ImportedOrUsedAncestors_12, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv1_STATE_VARIABLE_Specs_16_16);
    STATE_VARIABLE_Specs_16_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16_16));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), ImportedOrUsed_10);
    if (succeeded)
    {
      MR_Word AvailContexts_28;
      MR_Word Var_30;
      MR_Box conv3_STATE_VARIABLE_Specs_14;

      parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(RawItemBlocks_8, ModuleName_7, (MR_Word) ((MR_Unsigned) 0U), &AvailContexts_28);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleName_7));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__modules_scalar_common_1[6]), Var_30, AvailContexts_28, ((MR_Box) (STATE_VARIABLE_Specs_16_16)), &conv3_STATE_VARIABLE_Specs_14);
      *STATE_VARIABLE_Specs_14 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_14));
    }
    else
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_16_16;
  }
}

static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleName_2,
  MR_Word STATE_VARIABLE_AvailContexts_0_3,
  MR_Word * STATE_VARIABLE_AvailContexts_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AvailContexts_4 = STATE_VARIABLE_AvailContexts_0_3;
    else
    {
      MR_Word ItemBlock_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Avails_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_9, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_AvailContexts_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailContexts_0_3;

      parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(Avails_16, ModuleName_2, STATE_VARIABLE_AvailContexts_0_3, &STATE_VARIABLE_AvailContexts_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_10;
      next_value_of_STATE_VARIABLE_AvailContexts_0_3 = STATE_VARIABLE_AvailContexts_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AvailContexts_0_3 = next_value_of_STATE_VARIABLE_AvailContexts_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleName_2,
  MR_Word STATE_VARIABLE_AvailContexts_0_3,
  MR_Word * STATE_VARIABLE_AvailContexts_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AvailContexts_4 = STATE_VARIABLE_AvailContexts_0_3;
    else
    {
      MR_Word Avail_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word AvailModuleName_14;
      MR_Word Context_15;
      MR_Word STATE_VARIABLE_AvailContexts_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailContexts_0_3;

      if (((MR_tag((MR_Word) Avail_9)) == (MR_Integer) 0))
      {
        MR_Word Import_13 = (MR_Word) ((MR_Word) (Avail_9));

        AvailModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Import_13, (MR_Integer) 0))));
        Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Import_13, (MR_Integer) 1))));
      }
      else
      {
        MR_Word Use_17 = (MR_Word) (MR_body((MR_Word) (Avail_9), (MR_Integer) 1));

        AvailModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 0))));
        Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 1))));
      }
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_2, AvailModuleName_14);
      if (succeeded)
        {
          STATE_VARIABLE_AvailContexts_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AvailContexts_20_20, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AvailContexts_20_20, 1) = ((MR_Box) (STATE_VARIABLE_AvailContexts_0_3));
        }
      else
        STATE_VARIABLE_AvailContexts_20_20 = STATE_VARIABLE_AvailContexts_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_10;
      next_value_of_STATE_VARIABLE_AvailContexts_0_3 = STATE_VARIABLE_AvailContexts_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AvailContexts_0_3 = next_value_of_STATE_VARIABLE_AvailContexts_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
  MR_Word RawCompUnit_4,
  MR_Word * SrcItemBlocks_5,
  MR_Word * PublicChildren_6)
{
  {
    MR_bool succeeded;
    MR_Word RawItemBlocks_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_4, (MR_Integer) 2))));
    MR_Word Children_10;

    parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_9, &Children_10);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), Children_10);
    if (succeeded)
    {
      parse_tree__modules__raw_item_blocks_to_src_2_p_0(RawItemBlocks_9, SrcItemBlocks_5);
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__modules_scalar_common_1[0]), PublicChildren_6);
    }
    else
    {
      MR_Word IFileItemBlocks_11;
      MR_Word NoIFileItemBlocks_12;
      MR_Word IFileSrcItemBlocks_13;
      MR_Word NoIFileSrcItemBlocks_14;

      parse_tree__comp_unit_interface__get_int_and_imp_3_p_0(RawCompUnit_4, &IFileItemBlocks_11, &NoIFileItemBlocks_12);
      parse_tree__modules__raw_item_blocks_to_src_2_p_0(IFileItemBlocks_11, &IFileSrcItemBlocks_13);
      parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(NoIFileItemBlocks_12, &NoIFileSrcItemBlocks_14);
      *SrcItemBlocks_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__modules_scalar_common_1[11]), IFileSrcItemBlocks_13, NoIFileSrcItemBlocks_14);
      parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), IFileItemBlocks_11, PublicChildren_6);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__raw_item_blocks_to_split_src__1171__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RawItemBlock_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_6;
      MR_Word Section_7;
      MR_Word Incls_8;
      MR_Word Avails_9;
      MR_Word Items_10;
      MR_Word RevClauses_11;
      MR_Word RevImpDecls_12;
      MR_Word STATE_VARIABLE_SrcItemBlocks_19_19;
      MR_Word Var_20;
      MR_Word STATE_VARIABLE_SrcItemBlocks_29_29;

      parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(RawItemBlocks_4, &STATE_VARIABLE_SrcItemBlocks_19_19);
      ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 0))));
      Section_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 1))));
      Incls_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 2))));
      Avails_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 3))));
      Items_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 4))));
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__modules__raw_item_blocks_to_split_src_2_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Section_7));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140parse_tree.modules.raw_item_blocks_to_split_src\'/2", (MR_String) "Section != ms_implementation");
      parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(Items_10, (MR_Word) ((MR_Unsigned) 0U), &RevClauses_11, (MR_Word) ((MR_Unsigned) 0U), &RevImpDecls_12);
      succeeded = (RevClauses_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        STATE_VARIABLE_SrcItemBlocks_29_29 = STATE_VARIABLE_SrcItemBlocks_19_19;
      else
      {
        MR_Word Clauses_13;
        MR_Word ClauseItemBlock_14;

        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevClauses_11, &Clauses_13);
        {
          ClauseItemBlock_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 0) = ((MR_Box) (ModuleName_6));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 4) = ((MR_Box) (Clauses_13));
        }
        {
          STATE_VARIABLE_SrcItemBlocks_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_SrcItemBlocks_29_29, 0) = ((MR_Box) (ClauseItemBlock_14));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_SrcItemBlocks_29_29, 1) = ((MR_Box) (STATE_VARIABLE_SrcItemBlocks_19_19));
        }
      }
      succeeded = (Incls_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Avails_9 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (RevImpDecls_12 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        *HeadVar__2_2 = STATE_VARIABLE_SrcItemBlocks_29_29;
      else
      {
        MR_Word ImpDecls_16;
        MR_Word ImpDeclItemBlock_17;

        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevImpDecls_12, &ImpDecls_16);
        {
          ImpDeclItemBlock_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_17, 0) = ((MR_Box) (ModuleName_6));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_17, 1) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_17, 2) = ((MR_Box) (Incls_8));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_17, 3) = ((MR_Box) (Avails_9));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_17, 4) = ((MR_Box) (ImpDecls_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpDeclItemBlock_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SrcItemBlocks_29_29));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevClauses_0_2,
  MR_Word * STATE_VARIABLE_RevClauses_3,
  MR_Word STATE_VARIABLE_RevImpDecls_0_4,
  MR_Word * STATE_VARIABLE_RevImpDecls_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevImpDecls_5 = STATE_VARIABLE_RevImpDecls_0_4;
      *STATE_VARIABLE_RevClauses_3 = STATE_VARIABLE_RevClauses_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevImpDecls_41_41;
      MR_Word STATE_VARIABLE_RevClauses_43_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevImpDecls_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (Item_12));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_2));
            }
            STATE_VARIABLE_RevImpDecls_41_41 = STATE_VARIABLE_RevImpDecls_0_4;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              STATE_VARIABLE_RevImpDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 0) = ((MR_Box) (Item_12));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevImpDecls_0_4));
            }
            STATE_VARIABLE_RevClauses_43_43 = STATE_VARIABLE_RevClauses_0_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                {
                  STATE_VARIABLE_RevImpDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 0) = ((MR_Box) (Item_12));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevImpDecls_0_4));
                }
                STATE_VARIABLE_RevClauses_43_43 = STATE_VARIABLE_RevClauses_0_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Pragma_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 0))));
                MR_Word AllowedInInterface_24;

                AllowedInInterface_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_20);
                switch (AllowedInInterface_24) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (Item_12));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_2));
                      }
                      STATE_VARIABLE_RevImpDecls_41_41 = STATE_VARIABLE_RevImpDecls_0_4;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_RevImpDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 0) = ((MR_Box) (Item_12));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevImpDecls_0_4));
                      }
                      STATE_VARIABLE_RevClauses_43_43 = STATE_VARIABLE_RevClauses_0_2;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
            case (MR_Integer) 8:
              {
                {
                  STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (Item_12));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_2));
                }
                STATE_VARIABLE_RevImpDecls_41_41 = STATE_VARIABLE_RevImpDecls_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_RevClauses_0_2 = STATE_VARIABLE_RevClauses_43_43;
      next_value_of_STATE_VARIABLE_RevImpDecls_0_4 = STATE_VARIABLE_RevImpDecls_41_41;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevClauses_0_2 = next_value_of_STATE_VARIABLE_RevClauses_0_2;
      STATE_VARIABLE_RevImpDecls_0_4 = next_value_of_STATE_VARIABLE_RevImpDecls_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word RawItemBlock_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word RawItemBlocks_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word SrcItemBlock_5;
    MR_Word SrcItemBlocks_6;
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 0))));
    MR_Word Section_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 1))));
    MR_Word Incls_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 2))));
    MR_Word Avails_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 3))));
    MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 4))));
    MR_Word SrcSection_12;

    switch (Section_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        SrcSection_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        SrcSection_12 = (MR_Integer) 0;
        break;
    }
    {
      SrcItemBlock_5 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 1) = ((MR_Box) (SrcSection_12));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 2) = ((MR_Box) (Incls_9));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 3) = ((MR_Box) (Avails_10));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 4) = ((MR_Box) (Items_11));
    }
    parse_tree__modules__raw_item_blocks_to_src_2_p_0(RawItemBlocks_4, &SrcItemBlocks_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SrcItemBlock_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcItemBlocks_6));
    }
  }
}

static void MR_CALL 
parse_tree__modules__get_src_components_10_p_0(
  MR_Word SrcItemBlocks_11,
  MR_Word * STATE_VARIABLE_IntIncls_28,
  MR_Word * STATE_VARIABLE_ImpIncls_29,
  MR_Word * STATE_VARIABLE_SubIncls_30,
  MR_Word * STATE_VARIABLE_IntAvails_31,
  MR_Word * STATE_VARIABLE_ImpAvails_32,
  MR_Word * STATE_VARIABLE_SubAvails_33,
  MR_Word * STATE_VARIABLE_IntItems_34,
  MR_Word * STATE_VARIABLE_ImpItems_35,
  MR_Word * STATE_VARIABLE_SubItems_36)
{
  if ((SrcItemBlocks_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_IntIncls_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    *STATE_VARIABLE_ImpIncls_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    *STATE_VARIABLE_SubIncls_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    *STATE_VARIABLE_IntAvails_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    *STATE_VARIABLE_ImpAvails_32 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    *STATE_VARIABLE_SubAvails_33 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    *STATE_VARIABLE_IntItems_34 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    *STATE_VARIABLE_ImpItems_35 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    *STATE_VARIABLE_SubItems_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
  }
  else
  {
    MR_Word HeadSrcItemBlock_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SrcItemBlocks_11, (MR_Integer) 0))));
    MR_Word TailSrcItemBlocks_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SrcItemBlocks_11, (MR_Integer) 1))));
    MR_Word Section_24;
    MR_Word Incls_25;
    MR_Word Avails_26;
    MR_Word Items_27;
    MR_Word STATE_VARIABLE_IntIncls_37_37;
    MR_Word STATE_VARIABLE_ImpIncls_38_38;
    MR_Word STATE_VARIABLE_SubIncls_39_39;
    MR_Word STATE_VARIABLE_IntAvails_40_40;
    MR_Word STATE_VARIABLE_ImpAvails_41_41;
    MR_Word STATE_VARIABLE_SubAvails_42_42;
    MR_Word STATE_VARIABLE_IntItems_43_43;
    MR_Word STATE_VARIABLE_ImpItems_44_44;
    MR_Word STATE_VARIABLE_SubItems_45_45;

    parse_tree__modules__get_src_components_10_p_0(TailSrcItemBlocks_22, &STATE_VARIABLE_IntIncls_37_37, &STATE_VARIABLE_ImpIncls_38_38, &STATE_VARIABLE_SubIncls_39_39, &STATE_VARIABLE_IntAvails_40_40, &STATE_VARIABLE_ImpAvails_41_41, &STATE_VARIABLE_SubAvails_42_42, &STATE_VARIABLE_IntItems_43_43, &STATE_VARIABLE_ImpItems_44_44, &STATE_VARIABLE_SubItems_45_45);
    Section_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadSrcItemBlock_21, (MR_Integer) 1))));
    Incls_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadSrcItemBlock_21, (MR_Integer) 2))));
    Avails_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadSrcItemBlock_21, (MR_Integer) 3))));
    Items_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadSrcItemBlock_21, (MR_Integer) 4))));
    switch (Section_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word Var_51;

          Var_47 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_25);
          *STATE_VARIABLE_SubIncls_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_47, STATE_VARIABLE_SubIncls_39_39);
          Var_49 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_26);
          *STATE_VARIABLE_SubAvails_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_49, STATE_VARIABLE_SubAvails_42_42);
          Var_51 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_27);
          *STATE_VARIABLE_SubItems_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_51, STATE_VARIABLE_SubItems_45_45);
          *STATE_VARIABLE_IntIncls_28 = STATE_VARIABLE_IntIncls_37_37;
          *STATE_VARIABLE_ImpIncls_29 = STATE_VARIABLE_ImpIncls_38_38;
          *STATE_VARIABLE_IntAvails_31 = STATE_VARIABLE_IntAvails_40_40;
          *STATE_VARIABLE_ImpAvails_32 = STATE_VARIABLE_ImpAvails_41_41;
          *STATE_VARIABLE_IntItems_34 = STATE_VARIABLE_IntItems_43_43;
          *STATE_VARIABLE_ImpItems_35 = STATE_VARIABLE_ImpItems_44_44;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_57;

          Var_53 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_25);
          *STATE_VARIABLE_ImpIncls_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_53, STATE_VARIABLE_ImpIncls_38_38);
          Var_55 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_26);
          *STATE_VARIABLE_ImpAvails_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_55, STATE_VARIABLE_ImpAvails_41_41);
          Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_27);
          *STATE_VARIABLE_ImpItems_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_57, STATE_VARIABLE_ImpItems_44_44);
          *STATE_VARIABLE_IntIncls_28 = STATE_VARIABLE_IntIncls_37_37;
          *STATE_VARIABLE_SubIncls_30 = STATE_VARIABLE_SubIncls_39_39;
          *STATE_VARIABLE_IntAvails_31 = STATE_VARIABLE_IntAvails_40_40;
          *STATE_VARIABLE_SubAvails_33 = STATE_VARIABLE_SubAvails_42_42;
          *STATE_VARIABLE_IntItems_34 = STATE_VARIABLE_IntItems_43_43;
          *STATE_VARIABLE_SubItems_36 = STATE_VARIABLE_SubItems_45_45;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_63;

          Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_25);
          *STATE_VARIABLE_IntIncls_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_59, STATE_VARIABLE_IntIncls_37_37);
          Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_26);
          *STATE_VARIABLE_IntAvails_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_61, STATE_VARIABLE_IntAvails_40_40);
          Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_27);
          *STATE_VARIABLE_IntItems_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_63, STATE_VARIABLE_IntItems_43_43);
          *STATE_VARIABLE_ImpIncls_29 = STATE_VARIABLE_ImpIncls_38_38;
          *STATE_VARIABLE_SubIncls_30 = STATE_VARIABLE_SubIncls_39_39;
          *STATE_VARIABLE_ImpAvails_32 = STATE_VARIABLE_ImpAvails_41_41;
          *STATE_VARIABLE_SubAvails_33 = STATE_VARIABLE_SubAvails_42_42;
          *STATE_VARIABLE_ImpItems_35 = STATE_VARIABLE_ImpItems_44_44;
          *STATE_VARIABLE_SubItems_36 = STATE_VARIABLE_SubItems_45_45;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__modules__get_raw_components_7_p_0(
  MR_Word RawItemBlocks_8,
  MR_Word * STATE_VARIABLE_IntIncls_22,
  MR_Word * STATE_VARIABLE_ImpIncls_23,
  MR_Word * STATE_VARIABLE_IntAvails_24,
  MR_Word * STATE_VARIABLE_ImpAvails_25,
  MR_Word * STATE_VARIABLE_IntItems_26,
  MR_Word * STATE_VARIABLE_ImpItems_27)
{
  if ((RawItemBlocks_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_IntIncls_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    *STATE_VARIABLE_ImpIncls_23 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0));
    *STATE_VARIABLE_IntAvails_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    *STATE_VARIABLE_ImpAvails_25 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0));
    *STATE_VARIABLE_IntItems_26 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    *STATE_VARIABLE_ImpItems_27 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
  }
  else
  {
    MR_Word HeadRawItemBlock_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawItemBlocks_8, (MR_Integer) 0))));
    MR_Word TailRawItemBlocks_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RawItemBlocks_8, (MR_Integer) 1))));
    MR_Word Section_18;
    MR_Word Incls_19;
    MR_Word Avails_20;
    MR_Word Items_21;
    MR_Word STATE_VARIABLE_IntIncls_28_28;
    MR_Word STATE_VARIABLE_ImpIncls_29_29;
    MR_Word STATE_VARIABLE_IntAvails_30_30;
    MR_Word STATE_VARIABLE_ImpAvails_31_31;
    MR_Word STATE_VARIABLE_IntItems_32_32;
    MR_Word STATE_VARIABLE_ImpItems_33_33;

    parse_tree__modules__get_raw_components_7_p_0(TailRawItemBlocks_16, &STATE_VARIABLE_IntIncls_28_28, &STATE_VARIABLE_ImpIncls_29_29, &STATE_VARIABLE_IntAvails_30_30, &STATE_VARIABLE_ImpAvails_31_31, &STATE_VARIABLE_IntItems_32_32, &STATE_VARIABLE_ImpItems_33_33);
    Section_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_15, (MR_Integer) 1))));
    Incls_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_15, (MR_Integer) 2))));
    Avails_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_15, (MR_Integer) 3))));
    Items_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadRawItemBlock_15, (MR_Integer) 4))));
    switch (Section_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word Var_39;

          Var_35 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_19);
          *STATE_VARIABLE_ImpIncls_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_35, STATE_VARIABLE_ImpIncls_29_29);
          Var_37 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_20);
          *STATE_VARIABLE_ImpAvails_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_37, STATE_VARIABLE_ImpAvails_31_31);
          Var_39 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_21);
          *STATE_VARIABLE_ImpItems_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_39, STATE_VARIABLE_ImpItems_33_33);
          *STATE_VARIABLE_IntIncls_22 = STATE_VARIABLE_IntIncls_28_28;
          *STATE_VARIABLE_IntAvails_24 = STATE_VARIABLE_IntAvails_30_30;
          *STATE_VARIABLE_IntItems_26 = STATE_VARIABLE_IntItems_32_32;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_45;

          Var_41 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Incls_19);
          *STATE_VARIABLE_IntIncls_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), Var_41, STATE_VARIABLE_IntIncls_28_28);
          Var_43 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Avails_20);
          *STATE_VARIABLE_IntAvails_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), Var_43, STATE_VARIABLE_IntAvails_30_30);
          Var_45 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Items_21);
          *STATE_VARIABLE_IntItems_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), Var_45, STATE_VARIABLE_IntItems_32_32);
          *STATE_VARIABLE_ImpIncls_23 = STATE_VARIABLE_ImpIncls_29_29;
          *STATE_VARIABLE_ImpAvails_25 = STATE_VARIABLE_ImpAvails_31_31;
          *STATE_VARIABLE_ImpItems_27 = STATE_VARIABLE_ImpItems_33_33;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__modules__separate_instance_non_instance_4_p_0(
  MR_Word Items_5,
  MR_Word * AbstractInstanceItems_6,
  MR_Word * InstanceItems_7,
  MR_Word * NonInstanceItems_8)
{
  {
    MR_Word AbstractInstanceCord_9;
    MR_Word InstanceCord_10;
    MR_Word NonInstanceCord_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_12 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_13 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    Var_14 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0));
    parse_tree__modules__separate_instance_non_instance_loop_7_p_0(Items_5, Var_12, &AbstractInstanceCord_9, Var_13, &InstanceCord_10, Var_14, &NonInstanceCord_11);
    *AbstractInstanceItems_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), AbstractInstanceCord_9);
    *InstanceItems_7 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), InstanceCord_10);
    *NonInstanceItems_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), NonInstanceCord_11);
  }
}

static void MR_CALL 
parse_tree__modules__separate_instance_non_instance_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AbstractInstanceCord_0_2,
  MR_Word * STATE_VARIABLE_AbstractInstanceCord_3,
  MR_Word STATE_VARIABLE_InstanceCord_0_4,
  MR_Word * STATE_VARIABLE_InstanceCord_5,
  MR_Word STATE_VARIABLE_NonInstanceCord_0_6,
  MR_Word * STATE_VARIABLE_NonInstanceCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonInstanceCord_7 = STATE_VARIABLE_NonInstanceCord_0_6;
      *STATE_VARIABLE_InstanceCord_5 = STATE_VARIABLE_InstanceCord_0_4;
      *STATE_VARIABLE_AbstractInstanceCord_3 = STATE_VARIABLE_AbstractInstanceCord_0_2;
    }
    else
    {
      MR_Word Item_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_AbstractInstanceCord_32_32;
      MR_Word STATE_VARIABLE_InstanceCord_33_33;
      MR_Word STATE_VARIABLE_NonInstanceCord_34_34;
      MR_Word ItemInstance_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AbstractInstanceCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstanceCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_NonInstanceCord_0_6;

      succeeded = ((((MR_tag((MR_Word) Item_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        ItemInstance_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_17, (MR_Integer) 1))));
        {
          MR_Word AbstractItemInstance_23;
          MR_Word AbstractItem_24;
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 0))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 1))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 3))));
          MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 5))));
          MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 6))));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 7))));
          MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstance_22, (MR_Integer) 8))));

          {
            AbstractItemInstance_23 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 1) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 2) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 3) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 5) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 6) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 7) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), AbstractItemInstance_23, 8) = ((MR_Box) (Var_46));
          }
          {
            AbstractItem_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AbstractItem_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), AbstractItem_24, 1) = ((MR_Box) (AbstractItemInstance_23));
          }
          STATE_VARIABLE_AbstractInstanceCord_32_32 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_AbstractInstanceCord_0_2, ((MR_Box) (AbstractItem_24)));
          STATE_VARIABLE_InstanceCord_33_33 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_InstanceCord_0_4, ((MR_Box) (Item_17)));
          STATE_VARIABLE_NonInstanceCord_34_34 = STATE_VARIABLE_NonInstanceCord_0_6;
        }
      }
      else
      {
        STATE_VARIABLE_NonInstanceCord_34_34 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), STATE_VARIABLE_NonInstanceCord_0_6, ((MR_Box) (Item_17)));
        STATE_VARIABLE_InstanceCord_33_33 = STATE_VARIABLE_InstanceCord_0_4;
        STATE_VARIABLE_AbstractInstanceCord_32_32 = STATE_VARIABLE_AbstractInstanceCord_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_18;
      next_value_of_STATE_VARIABLE_AbstractInstanceCord_0_2 = STATE_VARIABLE_AbstractInstanceCord_32_32;
      next_value_of_STATE_VARIABLE_InstanceCord_0_4 = STATE_VARIABLE_InstanceCord_33_33;
      next_value_of_STATE_VARIABLE_NonInstanceCord_0_6 = STATE_VARIABLE_NonInstanceCord_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AbstractInstanceCord_0_2 = next_value_of_STATE_VARIABLE_AbstractInstanceCord_0_2;
      STATE_VARIABLE_InstanceCord_0_4 = next_value_of_STATE_VARIABLE_InstanceCord_0_4;
      STATE_VARIABLE_NonInstanceCord_0_6 = next_value_of_STATE_VARIABLE_NonInstanceCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_6_p_0(
  MR_Word IntItems_7,
  MR_Word ImpItems_8,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_13,
  MR_Word * STATE_VARIABLE_ForeignInclFiles_14,
  MR_Word * STATE_VARIABLE_Langs_15,
  MR_Word * STATE_VARIABLE_FactTables_16)
{
  {
    MR_Word STATE_VARIABLE_ImplicitImportNeeds_17_17;
    MR_Word STATE_VARIABLE_ForeignInclFiles_18_18;
    MR_Word STATE_VARIABLE_Langs_19_19;
    MR_Word STATE_VARIABLE_FactTables_20_20;
    MR_Word STATE_VARIABLE_ImplicitImportNeeds_21_21;
    MR_Word STATE_VARIABLE_ForeignInclFiles_22_22;
    MR_Word STATE_VARIABLE_Langs_23_23;
    MR_Word STATE_VARIABLE_FactTables_24_24;

    STATE_VARIABLE_ImplicitImportNeeds_17_17 = parse_tree__get_dependencies__init_implicit_import_needs_0_f_0();
    STATE_VARIABLE_ForeignInclFiles_18_18 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &STATE_VARIABLE_Langs_19_19);
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &STATE_VARIABLE_FactTables_20_20);
    parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0(IntItems_7, STATE_VARIABLE_ImplicitImportNeeds_17_17, &STATE_VARIABLE_ImplicitImportNeeds_21_21, STATE_VARIABLE_ForeignInclFiles_18_18, &STATE_VARIABLE_ForeignInclFiles_22_22, STATE_VARIABLE_Langs_19_19, &STATE_VARIABLE_Langs_23_23, STATE_VARIABLE_FactTables_20_20, &STATE_VARIABLE_FactTables_24_24);
    parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0(ImpItems_8, STATE_VARIABLE_ImplicitImportNeeds_21_21, STATE_VARIABLE_ImplicitImportNeeds_13, STATE_VARIABLE_ForeignInclFiles_22_22, STATE_VARIABLE_ForeignInclFiles_14, STATE_VARIABLE_Langs_23_23, STATE_VARIABLE_Langs_15, STATE_VARIABLE_FactTables_24_24, STATE_VARIABLE_FactTables_16);
  }
}

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__modules__get_implicits_foreigns_fact_tables_acc_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3,
  MR_Word STATE_VARIABLE_ForeignInclFiles_0_4,
  MR_Word * STATE_VARIABLE_ForeignInclFiles_5,
  MR_Word STATE_VARIABLE_Langs_0_6,
  MR_Word * STATE_VARIABLE_Langs_7,
  MR_Word STATE_VARIABLE_FactTables_0_8,
  MR_Word * STATE_VARIABLE_FactTables_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FactTables_9 = STATE_VARIABLE_FactTables_0_8;
      *STATE_VARIABLE_Langs_7 = STATE_VARIABLE_Langs_0_6;
      *STATE_VARIABLE_ForeignInclFiles_5 = STATE_VARIABLE_ForeignInclFiles_0_4;
      *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
    }
    else
    {
      MR_Word Item_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FactTables_156_156;
      MR_Word STATE_VARIABLE_ForeignInclFiles_160_160;
      MR_Word STATE_VARIABLE_Langs_163_163;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_165_165;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ForeignInclFiles_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Langs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_FactTables_0_8;

      switch (MR_tag((MR_Word) Item_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_120 = (MR_Word) ((MR_Word) (Item_22));

            parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(ItemClause_120, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_165_165);
            STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
            STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
            STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_28 = (MR_Word) (MR_body((MR_Word) (Item_22), (MR_Integer) 1));
            MR_Word TypeDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_28, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) TypeDefn_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                  STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word DetailsSolver_35 = (MR_Word) (MR_body((MR_Word) (TypeDefn_31), (MR_Integer) 1));
                  MR_Word SolverTypeDetails_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_35, (MR_Integer) 0))));
                  MR_Word MutableItems_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_36, (MR_Integer) 3))));
                  MR_Box conv3_STATE_VARIABLE_ImplicitImportNeeds_165_165;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0), (MR_Word) (&parse_tree__modules_scalar_common_2[5]), MutableItems_41, ((MR_Box) (STATE_VARIABLE_ImplicitImportNeeds_0_2)), &conv3_STATE_VARIABLE_ImplicitImportNeeds_165_165);
                  STATE_VARIABLE_ImplicitImportNeeds_165_165 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitImportNeeds_165_165));
                  STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word DetailsForeign_42 = (MR_Word) (MR_body((MR_Word) (TypeDefn_31), (MR_Integer) 2));
                  MR_Word ForeignType_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_42, (MR_Integer) 0))));
                  MR_Word Var_162;

                  Var_162 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_43);
                  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_162)), STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                  STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_31, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                    }
                    break;
                }
                break;
            }
            STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
            STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
            STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
            STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
            STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));
                MR_Word Pragma_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_49, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) Pragma_50)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_54 = (MR_Word) ((MR_Word) (Pragma_50));
                      MR_Word Lang_225 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_54, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
                      MR_Word LiteralOrInclude_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_54, (MR_Integer) 1))));

                      if (((MR_tag((MR_Word) LiteralOrInclude_226)) == (MR_Integer) 1))
                      {
                        MR_String FileName_216 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_226, (MR_Integer) 0))));
                        MR_Word InclFile_217;

                        {
                          InclFile_217 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_217, 0) = (MR_Box) ((MR_Unsigned) (Lang_225));
                          MR_hl_field(MR_mktag(0), InclFile_217, 1) = ((MR_Box) (FileName_216));
                        }
                        STATE_VARIABLE_ForeignInclFiles_160_160 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), STATE_VARIABLE_ForeignInclFiles_0_4, ((MR_Box) (InclFile_217)));
                      }
                      else
                        STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_225)), STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                      STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Lang_55;
                      MR_Word LiteralOrInclude_57;
                      MR_Word FCInfo_58 = (MR_Word) (MR_body((MR_Word) (Pragma_50), (MR_Integer) 1));

                      Lang_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_58, (MR_Integer) 0))) & (MR_Integer) 3);
                      LiteralOrInclude_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_58, (MR_Integer) 1))));
                      if (((MR_tag((MR_Word) LiteralOrInclude_57)) == (MR_Integer) 1))
                      {
                        MR_String FileName_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_57, (MR_Integer) 0))));
                        MR_Word InclFile_61;

                        {
                          InclFile_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_61, 0) = (MR_Box) ((MR_Unsigned) (Lang_55));
                          MR_hl_field(MR_mktag(0), InclFile_61, 1) = ((MR_Box) (FileName_60));
                        }
                        STATE_VARIABLE_ForeignInclFiles_160_160 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), STATE_VARIABLE_ForeignInclFiles_0_4, ((MR_Box) (InclFile_61)));
                      }
                      else
                        STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_55)), STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                      STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPInfo_68 = (MR_Word) (MR_body((MR_Word) (Pragma_50), (MR_Integer) 2));
                      MR_Word Attrs_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_68, (MR_Integer) 0))));
                      MR_Word Var_157;

                      Var_157 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_69);
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_157)), STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                      STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                      STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_50, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word FPEInfo_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_50, (MR_Integer) 1))));
                          MR_Word Lang_232 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_65, (MR_Integer) 0))) & (MR_Integer) 3);

                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_232)), STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word FEInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_50, (MR_Integer) 1))));
                          MR_Word Lang_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_62, (MR_Integer) 0))) & (MR_Integer) 3);

                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_170)), STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          MR_Word TableInfo_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_50, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_78, (MR_Integer) 3))));
                          MR_Word STATE_VARIABLE_ImplicitImportNeeds_152_152;
                          MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitImportNeeds_152_152 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_152_152, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_82 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_152_152;
                          else
                          {
                            MR_Word Attributes_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_82, (MR_Integer) 0))));
                            MR_Word StatsAttr_84 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_83, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);

                            switch (StatsAttr_84) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_152_152;
                                break;
                              case (MR_Integer) 0:
                                {
                                  {
                                    STATE_VARIABLE_ImplicitImportNeeds_165_165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_165_165, 0) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                  }
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          MR_Word FactTableInfo_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_50, (MR_Integer) 1))));
                          MR_String FileName_171 = ((MR_String) ((MR_hl_field(MR_mktag(0), FactTableInfo_76, (MR_Integer) 1))));

                          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FileName_171)), STATE_VARIABLE_FactTables_0_8, &STATE_VARIABLE_FactTables_156_156);
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                        }
                        break;
                      case (MR_Integer) 17:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 19:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 21:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 22:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 24:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 25:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 26:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 27:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 28:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                      case (MR_Integer) 29:
                        {
                          STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                          STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                          STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));
                MR_Word Goal_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_121, (MR_Integer) 1))));

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Goal_123, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_165_165);
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));
                MR_Word InstanceBody_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_111, (MR_Integer) 4))));

                if ((InstanceBody_116 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                else
                {
                  MR_Word InstanceMethods_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_116, (MR_Integer) 0))));
                  MR_Box conv1_STATE_VARIABLE_ImplicitImportNeeds_165_165;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0), (MR_Word) (&parse_tree__modules_scalar_common_2[4]), InstanceMethods_119, ((MR_Box) (STATE_VARIABLE_ImplicitImportNeeds_0_2)), &conv1_STATE_VARIABLE_ImplicitImportNeeds_165_165);
                  STATE_VARIABLE_ImplicitImportNeeds_165_165 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitImportNeeds_165_165));
                }
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 7:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 8:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutable_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_22, (MR_Integer) 1))));
                MR_Word Var_145;

                Var_145 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_145, STATE_VARIABLE_Langs_0_6, &STATE_VARIABLE_Langs_163_163);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(ItemMutable_125, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_165_165);
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 10:
              {
                STATE_VARIABLE_ImplicitImportNeeds_165_165 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                STATE_VARIABLE_ForeignInclFiles_160_160 = STATE_VARIABLE_ForeignInclFiles_0_4;
                STATE_VARIABLE_Langs_163_163 = STATE_VARIABLE_Langs_0_6;
                STATE_VARIABLE_FactTables_156_156 = STATE_VARIABLE_FactTables_0_8;
              }
              break;
            case (MR_Integer) 11:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.modules.get_implicits_foreigns_fact_tables_acc\'/9", (MR_String) "item_type_repn");
                  return;
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_23;
      next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_165_165;
      next_value_of_STATE_VARIABLE_ForeignInclFiles_0_4 = STATE_VARIABLE_ForeignInclFiles_160_160;
      next_value_of_STATE_VARIABLE_Langs_0_6 = STATE_VARIABLE_Langs_163_163;
      next_value_of_STATE_VARIABLE_FactTables_0_8 = STATE_VARIABLE_FactTables_156_156;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      STATE_VARIABLE_ForeignInclFiles_0_4 = next_value_of_STATE_VARIABLE_ForeignInclFiles_0_4;
      STATE_VARIABLE_Langs_0_6 = next_value_of_STATE_VARIABLE_Langs_0_6;
      STATE_VARIABLE_FactTables_0_8 = next_value_of_STATE_VARIABLE_FactTables_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__get_deps_maps_6_p_0(
  MR_Word IntAvails_7,
  MR_Word ImpAvails_8,
  MR_Word * IntImportsMap_9,
  MR_Word * IntUsesMap_10,
  MR_Word * ImpImportsMap_11,
  MR_Word * ImpUsesMap_12)
{
  {
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    Var_13 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_14 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__modules__accumulate_dependencies_in_avails_5_p_0(IntAvails_7, Var_13, IntImportsMap_9, Var_14, IntUsesMap_10);
    Var_15 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_16 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__modules__accumulate_dependencies_in_avails_5_p_0(ImpAvails_8, Var_15, ImpImportsMap_11, Var_16, ImpUsesMap_12);
  }
}

static void MR_CALL 
parse_tree__modules__accumulate_dependencies_in_avails_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportsMap_0_2,
  MR_Word * STATE_VARIABLE_ImportsMap_3,
  MR_Word STATE_VARIABLE_UsesMap_0_4,
  MR_Word * STATE_VARIABLE_UsesMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UsesMap_5 = STATE_VARIABLE_UsesMap_0_4;
      *STATE_VARIABLE_ImportsMap_3 = STATE_VARIABLE_ImportsMap_0_2;
    }
    else
    {
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UsesMap_25_25;
      MR_Word STATE_VARIABLE_ImportsMap_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportsMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_UsesMap_0_4;

      if (((MR_tag((MR_Word) Avail_12)) == (MR_Integer) 0))
      {
        MR_Word ModuleName_16;
        MR_Word Context_17;
        MR_Word Var_26 = (MR_Word) ((MR_Word) (Avail_12));

        ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
        Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
        mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_16)), ((MR_Box) (Context_17)), STATE_VARIABLE_ImportsMap_0_2, &STATE_VARIABLE_ImportsMap_27_27);
        STATE_VARIABLE_UsesMap_25_25 = STATE_VARIABLE_UsesMap_0_4;
      }
      else
      {
        MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (Avail_12), (MR_Integer) 1));
        MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));

        mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_30)), ((MR_Box) (Context_31)), STATE_VARIABLE_UsesMap_0_4, &STATE_VARIABLE_UsesMap_25_25);
        STATE_VARIABLE_ImportsMap_27_27 = STATE_VARIABLE_ImportsMap_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_13;
      next_value_of_STATE_VARIABLE_ImportsMap_0_2 = STATE_VARIABLE_ImportsMap_27_27;
      next_value_of_STATE_VARIABLE_UsesMap_0_4 = STATE_VARIABLE_UsesMap_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportsMap_0_2 = next_value_of_STATE_VARIABLE_ImportsMap_0_2;
      STATE_VARIABLE_UsesMap_0_4 = next_value_of_STATE_VARIABLE_UsesMap_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____import_and_or_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____import_and_or_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____import_or_use_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____import_or_use_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____include_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____include_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____int123_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____int123_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____int123_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____int123_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____int_section_maker_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____int_section_maker_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____maybe_abstract_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____maybe_abstract_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____missing_ancestor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____missing_ancestor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____missing_ancestor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____missing_ancestor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____missing_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____missing_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____module_import_or_use_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____module_import_or_use_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____module_inclusion_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____module_inclusion_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____opt_file_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____opt_file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____parent_or_ancestor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____parent_or_ancestor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____process_interface_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____process_interface_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____process_interface_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____process_interface_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____section_appender_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____section_appender_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____section_visibility_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____section_visibility_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____which_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____which_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____which_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__modules__init(void)
{
}

void mercury__parse_tree__modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_and_or_use_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_include_context_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_int123_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_int_section_maker_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_maybe_abstract_section_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_info_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_ancestor_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_missing_where_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_opt_file_type_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_parent_or_ancestor_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_process_interface_kind_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_section_appender_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_section_visibility_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_which_map_0);
}

void mercury__parse_tree__modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.modules.
