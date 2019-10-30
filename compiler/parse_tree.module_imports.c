/*
** Automatically generated from `module_imports.m'
** by the Mercury compiler,
** version rotd-2019-10-30
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


// :- module parse_tree.module_imports.
// :- implementation.

/*
INIT mercury__parse_tree__module_imports__init
REQUIRED_INIT mercury__parse_tree__module_imports__required_init
ENDINIT
*/

#include "parse_tree.module_imports.mih"
#include "parse_tree.module_imports.mh"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_0;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_1;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_2;

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_value_ordered_mai_construction_method_0[3];

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_mai_construction_method_0[3];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_construction_method_0[3];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_0_0[27];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_0_0[27];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_mai_fields_0_0[27];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_kinds_0_0[3];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_kinds_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_kinds_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_kinds_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_kinds_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_kinds_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_kinds_0[1];

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_0;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_value_ordered_maybe_accessed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_maybe_accessed_0[2];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_accessed_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[28];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[28];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_and_imports_0_0[28];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1];

static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__712__1_2_p_0(
  MR_Word ForeignIncludeFiles_71,
  MR_Word NewForeignInclFiles_72);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__703__1_4_p_0(
  MR_Word HeadVar__1_99,
  MR_Word HeadVar__2_141,
  MR_Word HeadVar__3_142,
  MR_Word * HeadVar__4_143);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__701__1_4_p_0(
  MR_Word HeadVar__1_97,
  MR_Word HeadVar__2_136,
  MR_Word HeadVar__3_137,
  MR_Word * HeadVar__4_138);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__699__1_4_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_131,
  MR_Word HeadVar__3_132,
  MR_Word * HeadVar__4_133);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__697__1_4_p_0(
  MR_Word HeadVar__1_93,
  MR_Word HeadVar__2_126,
  MR_Word HeadVar__3_127,
  MR_Word * HeadVar__4_128);

static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__685__1_2_p_0(
  MR_Word ContainsForeignExport_26,
  MR_Word NewContainsForeignExport_57);

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__659__1_4_p_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_82,
  MR_Word LambdaHeadVar__2_83,
  MR_Word * LambdaHeadVar__3_84);

static MR_Word MR_CALL 
parse_tree__module_imports__IntroducedFrom__func__make_module_dep_module_and_imports__811__1_1_f_0(
  MR_Word LambdaHeadVar__1_51);

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_accessed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____maybe_accessed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_kinds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_kinds_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_imports____Compare____mai_construction_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_construction_method_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_imports__unlock_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__lock_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__unsafe_set_accesses_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__module_imports__unsafe_get_accesses_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__module_imports__pre_initialise_mutable_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__initialise_mutable_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_LangSet_0_7,
  MR_Word * STATE_VARIABLE_LangSet_8);

static void MR_CALL 
parse_tree__module_imports__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word TypeInfo_for_MS_16,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_LangSet_0_12,
  MR_Word * STATE_VARIABLE_LangSet_13);

static void MR_CALL 
parse_tree__module_imports__write_mai_fields_stats_5_p_0(
  MR_Word Stream_6,
  MR_String Kind_7,
  MR_Word Fields_8);

static MR_String MR_CALL 
parse_tree__module_imports__acc_str_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_imports__rebuild_module_and_imports_for_dep_file_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4);

static MR_bool MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_9(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_Word SourceFileModuleName_11,
  MR_Word NestedModuleNames_12,
  MR_Word Specs_13,
  MR_Word Errors_14,
  MR_Word RawCompUnit_15,
  MR_Word * ModuleAndImports_16);

static void MR_CALL 
parse_tree__module_imports__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_imports__get_foreign_self_imports_from_item_blocks_2_p_0(
  MR_Word TypeInfo_for_MS_8,
  MR_Word ItemBlocks_3,
  MR_Word * Langs_4);

static void MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_construction_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____mai_construction_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_kinds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_kinds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____maybe_accessed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_accessed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[18][2];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[12][3];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[5][5];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[1][11];

static /* final */ const MR_Integer parse_tree__module_imports_scalar_common_6[1][2];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_7[3][7];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_8[3][6];




static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[0]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[3]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[4]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[5]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_2[3]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_4[3])),
    ((MR_Box) (parse_tree__module_imports__rebuild_module_and_imports_for_dep_file_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_4[4])),
    ((MR_Box) (parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_imports__accumulate_foreign_import_langs_in_item_block_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0])),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0])),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 26)) | (((((MR_Unsigned) 0U << 25)) | (((((MR_Unsigned) 0U << 24)) | (((((MR_Unsigned) 0U << 23)) | (((((MR_Unsigned) 0U << 22)) | (((((MR_Unsigned) 0U << 21)) | (((((MR_Unsigned) 0U << 20)) | (((((MR_Unsigned) 0U << 19)) | (((((MR_Unsigned) 0U << 18)) | (((((MR_Unsigned) 0U << 17)) | (((((MR_Unsigned) 0U << 16)) | (((((MR_Unsigned) 0U << 15)) | (((((MR_Unsigned) 0U << 14)) | (((((MR_Unsigned) 0U << 13)) | (((((MR_Unsigned) 0U << 12)) | (((((MR_Unsigned) 0U << 11)) | (((((MR_Unsigned) 0U << 10)) | (((((MR_Unsigned) 0U << 9)) | (((((MR_Unsigned) 0U << 8)) | (((((MR_Unsigned) 0U << 7)) | (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))))))))))))))))))))))))))))))))))))))))))))))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_imports__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&parse_tree__module_imports__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Integer parse_tree__module_imports_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__module_imports_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_8[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "parse_tree.module_imports.mh"
#line 1817 "module_imports.m"
MR_Word parse_tree__module_imports__mutable_variable_accesses;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__module_imports__mutable_variable_accesses_lock;
#endif


#line 1817 "module_imports.m"
void 
parse_tree__module_imports__user_init_pred_0(void)
#line 1817 "module_imports.m"
{
#line 1817 "module_imports.m"
	parse_tree__module_imports__initialise_mutable_accesses_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_imports__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_0 = {
  (MR_String) "mcm_init",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_1 = {
  (MR_String) "mcm_make",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_2 = {
  (MR_String) "mcm_read",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_value_ordered_mai_construction_method_0[3] = {
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_0,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_mai_construction_method_0[3] = {
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_0,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_mai_construction_method_0_2
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_construction_method_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_construction_method_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_imports____Unify____mai_construction_method_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____mai_construction_method_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "mai_construction_method",
  {     parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_mai_construction_method_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__enum_value_ordered_mai_construction_method_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_construction_method_0
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_0_0[27] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_0_0[27] = {
  (MR_String) "mf_source_file_name",
  (MR_String) "mf_module_dir",
  (MR_String) "mf_source_file_module_name",
  (MR_String) "mf_module_name",
  (MR_String) "mf_module_name_context",
  (MR_String) "mf_ancestors",
  (MR_String) "mf_children",
  (MR_String) "mf_public_children",
  (MR_String) "mf_nested_children",
  (MR_String) "mf_int_deps_map",
  (MR_String) "mf_imp_deps_map",
  (MR_String) "mf_indirect_deps",
  (MR_String) "mf_fact_table_deps",
  (MR_String) "mf_foreign_import_modules",
  (MR_String) "mf_foreign_include_files",
  (MR_String) "mf_contains_foreign_code",
  (MR_String) "mf_contains_foreign_export",
  (MR_String) "mf_has_main",
  (MR_String) "mf_src_blocks",
  (MR_String) "mf_direct_int_blocks",
  (MR_String) "mf_indirect_int_blocks",
  (MR_String) "mf_opt_blocks",
  (MR_String) "mf_int_for_opt_blocks",
  (MR_String) "mf_version_numbers_map",
  (MR_String) "mf_maybe_timestamp_map",
  (MR_String) "mf_specs",
  (MR_String) "mf_errors"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_mai_fields_0_0[27] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 26,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 25,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 24,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 23,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 22,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 21,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 20,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 19,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 18,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 17,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 16,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_0_0 = {
  (MR_String) "mai_fields",
  INT16_C(27),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_mai_fields_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____mai_fields_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____mai_fields_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "mai_fields",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_0
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_kinds_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_kinds_0_0[3] = {
  (MR_String) "mfk_init",
  (MR_String) "mfk_make",
  (MR_String) "mfk_read"
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_kinds_0_0 = {
  (MR_String) "mai_fields_kinds",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_kinds_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_kinds_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_kinds_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_kinds_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_kinds_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_kinds_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_kinds_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_kinds_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_kinds_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_kinds_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____mai_fields_kinds_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____mai_fields_kinds_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "mai_fields_kinds",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_kinds_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_kinds_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_kinds_0
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_0 = {
  (MR_String) "not_accessed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_1 = {
  (MR_String) "accessed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_value_ordered_maybe_accessed_0[2] = {
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_0,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_maybe_accessed_0[2] = {
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_accessed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_imports____Unify____maybe_accessed_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____maybe_accessed_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "maybe_accessed",
  {     parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_maybe_accessed_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__enum_value_ordered_maybe_accessed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_accessed_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_imports__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_version_numbers_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[28] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_code_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_src_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_opt_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__cord__ti_cord_1parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_construction_method_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[28] = {
  (MR_String) "mai_source_file_name",
  (MR_String) "mai_module_dir",
  (MR_String) "mai_source_file_module_name",
  (MR_String) "mai_module_name",
  (MR_String) "mai_module_name_context",
  (MR_String) "mai_ancestors",
  (MR_String) "mai_children",
  (MR_String) "mai_public_children",
  (MR_String) "mai_nested_children",
  (MR_String) "mai_int_deps_map",
  (MR_String) "mai_imp_deps_map",
  (MR_String) "mai_indirect_deps",
  (MR_String) "mai_fact_table_deps",
  (MR_String) "mai_foreign_import_modules",
  (MR_String) "mai_foreign_include_files",
  (MR_String) "mai_contains_foreign_code",
  (MR_String) "mai_contains_foreign_export",
  (MR_String) "mai_has_main",
  (MR_String) "mai_src_blocks",
  (MR_String) "mai_direct_int_blocks_cord",
  (MR_String) "mai_indirect_int_blocks_cord",
  (MR_String) "mai_opt_blocks_cord",
  (MR_String) "mai_int_for_opt_blocks_cord",
  (MR_String) "mai_version_numbers_map",
  (MR_String) "mai_maybe_timestamp_map",
  (MR_String) "mai_specs",
  (MR_String) "mai_errors",
  (MR_String) "mai_construction_method"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_and_imports_0_0[28] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 18,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 19,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 20,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 21,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 22,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 23,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 24,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 25,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 26,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0 = {
  (MR_String) "module_and_imports",
  INT16_C(28),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_module_and_imports_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_and_imports",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0),
  (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3] = {
  (MR_String) "mts_file_kind",
  (MR_String) "mts_timestamp",
  (MR_String) "mts_need_qualifier"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0 = {
  (MR_String) "module_timestamp",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__712__1_2_p_0(
  MR_Word ForeignIncludeFiles_71,
  MR_Word NewForeignInclFiles_72)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[6]), ((MR_Box) (ForeignIncludeFiles_71)), ((MR_Box) (NewForeignInclFiles_72)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__703__1_4_p_0(
  MR_Word HeadVar__1_99,
  MR_Word HeadVar__2_141,
  MR_Word HeadVar__3_142,
  MR_Word * HeadVar__4_143)
{
  mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_99)), ((MR_Box) (HeadVar__2_141)), HeadVar__3_142, HeadVar__4_143);
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__701__1_4_p_0(
  MR_Word HeadVar__1_97,
  MR_Word HeadVar__2_136,
  MR_Word HeadVar__3_137,
  MR_Word * HeadVar__4_138)
{
  mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_97)), ((MR_Box) (HeadVar__2_136)), HeadVar__3_137, HeadVar__4_138);
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__699__1_4_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_131,
  MR_Word HeadVar__3_132,
  MR_Word * HeadVar__4_133)
{
  mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_95)), ((MR_Box) (HeadVar__2_131)), HeadVar__3_132, HeadVar__4_133);
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__697__1_4_p_0(
  MR_Word HeadVar__1_93,
  MR_Word HeadVar__2_126,
  MR_Word HeadVar__3_127,
  MR_Word * HeadVar__4_128)
{
  mercury__multi_map__reverse_set_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__1_93)), ((MR_Box) (HeadVar__2_126)), HeadVar__3_127, HeadVar__4_128);
}

static MR_bool MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__685__1_2_p_0(
  MR_Word ContainsForeignExport_26,
  MR_Word NewContainsForeignExport_57)
{
  {
    MR_bool succeeded = (ContainsForeignExport_26 == NewContainsForeignExport_57);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__659__1_4_p_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_82,
  MR_Word LambdaHeadVar__2_83,
  MR_Word * LambdaHeadVar__3_84)
{
  parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(LambdaHeadVar__1_82, ModuleName_17, LambdaHeadVar__2_83, LambdaHeadVar__3_84);
}

static MR_Word MR_CALL 
parse_tree__module_imports__IntroducedFrom__func__make_module_dep_module_and_imports__811__1_1_f_0(
  MR_Word LambdaHeadVar__1_51)
{
  {
    MR_Word LambdaHeadVar__2_52;
    MR_Word Var_53;
    MR_Word Var_54;

    Var_54 = mercury__term__context_init_0_f_0();
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LambdaHeadVar__2_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_52, 0) = ((MR_Box) (LambdaHeadVar__1_51));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_52, 1) = ((MR_Box) (Var_53));
    }
    return LambdaHeadVar__2_52;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      parse_tree__file_kind____Compare____file_kind_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        libs__timestamp____Compare____timestamp_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_17 < Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > Var_18);
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

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = parse_tree__file_kind____Unify____file_kind_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = libs__timestamp____Unify____timestamp_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_87 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_88 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_87 == CastY_88);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX18_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgY18_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
      MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
      MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
      MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22))));
      MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23))));
      MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24))));
      MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25))));
      MR_Word ArgX28_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))) & (MR_Integer) 3);
      MR_Word ArgY28_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 26))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
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
        {
          MR_Word SubResult3_12;

          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__term____Compare____context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[8]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[8]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[9]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                              succeeded = (SubResult13_42 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&SubResult14_45, ArgX14_43, ArgY14_44);
                                succeeded = (SubResult14_45 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[10]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                  succeeded = (SubResult15_48 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;

                                    parse_tree__prog_item____Compare____contains_foreign_code_0_0(&SubResult16_51, ArgX16_49, ArgY16_50);
                                    succeeded = (SubResult16_51 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                    {
                                      MR_Word SubResult17_54;
                                      MR_Integer Var_117 = (MR_Integer) (ArgX17_52);
                                      MR_Integer Var_118 = (MR_Integer) (ArgY17_53);

                                      succeeded = (Var_117 < Var_118);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_117 > Var_118);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult17_54 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult17_54;
                                      else
                                      {
                                        MR_Word SubResult18_57;
                                        MR_Integer Var_119 = (MR_Integer) (ArgX18_55);
                                        MR_Integer Var_120 = (MR_Integer) (ArgY18_56);

                                        succeeded = (Var_119 < Var_120);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_119 > Var_120);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult18_57 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult18_57;
                                        else
                                        {
                                          MR_Word SubResult19_60;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[11]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                          succeeded = (SubResult19_60 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult19_60;
                                          else
                                          {
                                            MR_Word SubResult20_63;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[12]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                            succeeded = (SubResult20_63 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult20_63;
                                            else
                                            {
                                              MR_Word SubResult21_66;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[12]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                              succeeded = (SubResult21_66 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult21_66;
                                              else
                                              {
                                                MR_Word SubResult22_69;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[13]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                                succeeded = (SubResult22_69 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult22_69;
                                                else
                                                {
                                                  MR_Word SubResult23_72;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[14]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                  succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult23_72;
                                                  else
                                                  {
                                                    MR_Word SubResult24_75;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[2]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                    succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult24_75;
                                                    else
                                                    {
                                                      MR_Word SubResult25_78;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[15]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                      succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult25_78;
                                                      else
                                                      {
                                                        MR_Word SubResult26_81;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[16]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                        succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult26_81;
                                                        else
                                                        {
                                                          MR_Word SubResult27_84;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[17]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                          succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult27_84;
                                                          else
                                                          {
                                                            MR_Integer Var_121 = (MR_Integer) (ArgX28_85);
                                                            MR_Integer Var_122 = (MR_Integer) (ArgY28_86);

                                                            succeeded = (Var_121 < Var_122);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = (MR_Integer) 1;
                                                            else
                                                            {
                                                              succeeded = (Var_121 > Var_122);
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
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_59 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_60 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_59 == CastY_60);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_64_64;
      MR_Word TypeInfo_65_65;
      MR_Word TypeInfo_66_66;
      MR_Word TypeInfo_67_67;
      MR_Word TypeInfo_68_68;
      MR_Word TypeInfo_69_69;
      MR_Word TypeInfo_70_70;
      MR_Word TypeInfo_71_71;
      MR_Word TypeInfo_73_73;
      MR_Word TypeInfo_75_75;
      MR_Word TypeInfo_76_76;
      MR_Word TypeInfo_77_77;
      MR_Word TypeInfo_78_78;
      MR_Word TypeInfo_79_79;
      MR_Word TypeInfo_80_80;
      MR_Word TypeInfo_81_81;
      MR_Word TypeInfo_82_82;
      MR_Word TypeInfo_83_83;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX18_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgY18_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))) & (MR_Integer) 1);
      MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
      MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
      MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
      MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22))));
      MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23))));
      MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24))));
      MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25))));
      MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgX28_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 26))) & (MR_Integer) 3);
      MR_Word ArgY28_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))) & (MR_Integer) 3);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_64_64 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_65_65 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_66_66 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_67_67 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[8]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_68_68 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_69_69 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_70_70 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[8]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_70_70, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_71_71 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[9]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(ArgX14_29, ArgY14_30);
                                if (succeeded)
                                {
                                  TypeInfo_73_73 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[10]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                  if (succeeded)
                                  {
                                    succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(ArgX16_33, ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          TypeInfo_75_75 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[11]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                          if (succeeded)
                                          {
                                            TypeInfo_76_76 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[12]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                            if (succeeded)
                                            {
                                              TypeInfo_77_77 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[12]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                              if (succeeded)
                                              {
                                                TypeInfo_78_78 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[13]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_79_79 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[14]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_80_80 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[2]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_81_81 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[15]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_82_82 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[16]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_83_83 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[17]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_83_83, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                          if (succeeded)
                                                            succeeded = (ArgX28_57 == ArgY28_58);
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_accessed_0_0(
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
parse_tree__module_imports____Unify____maybe_accessed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_kinds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      parse_tree__module_imports____Compare____mai_fields_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__module_imports____Compare____mai_fields_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__module_imports____Compare____mai_fields_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_kinds_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = parse_tree__module_imports____Unify____mai_fields_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__module_imports____Unify____mai_fields_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__module_imports____Unify____mai_fields_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_84 == CastY_85);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX23_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY23_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX24_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY24_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX25_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY25_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX26_79 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY26_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX27_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY27_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_113 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_114 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_113 < Var_114);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_113 > Var_114);
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
        MR_Integer Var_115 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_116 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_115 < Var_116);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_115 > Var_116);
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
          MR_Integer Var_117 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_118 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_117 < Var_118);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_117 > Var_118);
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
          {
            MR_Word SubResult4_15;
            MR_Integer Var_119 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_120 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_119 < Var_120);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_119 > Var_120);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_121 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_122 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_121 < Var_122);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_121 > Var_122);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_123 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_124 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_123 < Var_124);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_123 > Var_124);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;
                  MR_Integer Var_125 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_126 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_125 < Var_126);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_125 > Var_126);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_127 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_128 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_127 < Var_128);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_127 > Var_128);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_129 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_130 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_129 < Var_130);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_129 > Var_130);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;
                        MR_Integer Var_131 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_132 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_131 < Var_132);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_131 > Var_132);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult10_33 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;
                          MR_Integer Var_133 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_134 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_133 < Var_134);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_133 > Var_134);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult11_36 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;
                            MR_Integer Var_135 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_136 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_135 < Var_136);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_135 > Var_136);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult12_39 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;
                              MR_Integer Var_137 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_138 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_137 < Var_138);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_137 > Var_138);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult13_42 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;
                                MR_Integer Var_139 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_140 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_139 < Var_140);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_139 > Var_140);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;
                                  MR_Integer Var_141 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_142 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_141 < Var_142);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_141 > Var_142);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult15_48 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;
                                    MR_Integer Var_143 = (MR_Integer) (ArgX16_49);
                                    MR_Integer Var_144 = (MR_Integer) (ArgY16_50);

                                    succeeded = (Var_143 < Var_144);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_143 > Var_144);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult16_51 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                    {
                                      MR_Word SubResult17_54;
                                      MR_Integer Var_145 = (MR_Integer) (ArgX17_52);
                                      MR_Integer Var_146 = (MR_Integer) (ArgY17_53);

                                      succeeded = (Var_145 < Var_146);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_145 > Var_146);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult17_54 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult17_54;
                                      else
                                      {
                                        MR_Word SubResult18_57;
                                        MR_Integer Var_147 = (MR_Integer) (ArgX18_55);
                                        MR_Integer Var_148 = (MR_Integer) (ArgY18_56);

                                        succeeded = (Var_147 < Var_148);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_147 > Var_148);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult18_57 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult18_57;
                                        else
                                        {
                                          MR_Word SubResult19_60;
                                          MR_Integer Var_149 = (MR_Integer) (ArgX19_58);
                                          MR_Integer Var_150 = (MR_Integer) (ArgY19_59);

                                          succeeded = (Var_149 < Var_150);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_149 > Var_150);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult19_60 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult19_60;
                                          else
                                          {
                                            MR_Word SubResult20_63;
                                            MR_Integer Var_151 = (MR_Integer) (ArgX20_61);
                                            MR_Integer Var_152 = (MR_Integer) (ArgY20_62);

                                            succeeded = (Var_151 < Var_152);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_151 > Var_152);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult20_63 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult20_63;
                                            else
                                            {
                                              MR_Word SubResult21_66;
                                              MR_Integer Var_153 = (MR_Integer) (ArgX21_64);
                                              MR_Integer Var_154 = (MR_Integer) (ArgY21_65);

                                              succeeded = (Var_153 < Var_154);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_153 > Var_154);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult21_66 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult21_66;
                                              else
                                              {
                                                MR_Word SubResult22_69;
                                                MR_Integer Var_155 = (MR_Integer) (ArgX22_67);
                                                MR_Integer Var_156 = (MR_Integer) (ArgY22_68);

                                                succeeded = (Var_155 < Var_156);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_155 > Var_156);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult22_69 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult22_69;
                                                else
                                                {
                                                  MR_Word SubResult23_72;
                                                  MR_Integer Var_157 = (MR_Integer) (ArgX23_70);
                                                  MR_Integer Var_158 = (MR_Integer) (ArgY23_71);

                                                  succeeded = (Var_157 < Var_158);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (Var_157 > Var_158);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = MR_TRUE;
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                      {
                                                        SubResult23_72 = (MR_Integer) 0;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult23_72;
                                                  else
                                                  {
                                                    MR_Word SubResult24_75;
                                                    MR_Integer Var_159 = (MR_Integer) (ArgX24_73);
                                                    MR_Integer Var_160 = (MR_Integer) (ArgY24_74);

                                                    succeeded = (Var_159 < Var_160);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = (Var_159 > Var_160);
                                                      if (succeeded)
                                                      {
                                                        SubResult24_75 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = MR_TRUE;
                                                        succeeded = !(succeeded);
                                                        if (succeeded)
                                                        {
                                                          SubResult24_75 = (MR_Integer) 0;
                                                          succeeded = MR_TRUE;
                                                        }
                                                      }
                                                    }
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult24_75;
                                                    else
                                                    {
                                                      MR_Word SubResult25_78;
                                                      MR_Integer Var_161 = (MR_Integer) (ArgX25_76);
                                                      MR_Integer Var_162 = (MR_Integer) (ArgY25_77);

                                                      succeeded = (Var_161 < Var_162);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 1;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = (Var_161 > Var_162);
                                                        if (succeeded)
                                                        {
                                                          SubResult25_78 = (MR_Integer) 2;
                                                          succeeded = MR_TRUE;
                                                        }
                                                        else
                                                        {
                                                          succeeded = MR_TRUE;
                                                          succeeded = !(succeeded);
                                                          if (succeeded)
                                                          {
                                                            SubResult25_78 = (MR_Integer) 0;
                                                            succeeded = MR_TRUE;
                                                          }
                                                        }
                                                      }
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult25_78;
                                                      else
                                                      {
                                                        MR_Word SubResult26_81;
                                                        MR_Integer Var_163 = (MR_Integer) (ArgX26_79);
                                                        MR_Integer Var_164 = (MR_Integer) (ArgY26_80);

                                                        succeeded = (Var_163 < Var_164);
                                                        if (succeeded)
                                                        {
                                                          SubResult26_81 = (MR_Integer) 1;
                                                          succeeded = MR_TRUE;
                                                        }
                                                        else
                                                        {
                                                          succeeded = (Var_163 > Var_164);
                                                          if (succeeded)
                                                          {
                                                            SubResult26_81 = (MR_Integer) 2;
                                                            succeeded = MR_TRUE;
                                                          }
                                                          else
                                                          {
                                                            succeeded = MR_TRUE;
                                                            succeeded = !(succeeded);
                                                            if (succeeded)
                                                            {
                                                              SubResult26_81 = (MR_Integer) 0;
                                                              succeeded = MR_TRUE;
                                                            }
                                                          }
                                                        }
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult26_81;
                                                        else
                                                        {
                                                          MR_Integer Var_165 = (MR_Integer) (ArgX27_82);
                                                          MR_Integer Var_166 = (MR_Integer) (ArgY27_83);

                                                          succeeded = (Var_165 < Var_166);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = (MR_Integer) 1;
                                                          else
                                                          {
                                                            succeeded = (Var_165 > Var_166);
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
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_57 == CastY_58);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX23_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY23_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX24_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY24_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX25_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY25_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX26_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY26_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX27_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY27_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX19_39 == ArgY19_40);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX20_41 == ArgY20_42);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX21_43 == ArgY21_44);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX22_45 == ArgY22_46);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX23_47 == ArgY23_48);
                                                  if (succeeded)
                                                  {
                                                    succeeded = (ArgX24_49 == ArgY24_50);
                                                    if (succeeded)
                                                    {
                                                      succeeded = (ArgX25_51 == ArgY25_52);
                                                      if (succeeded)
                                                      {
                                                        succeeded = (ArgX26_53 == ArgY26_54);
                                                        if (succeeded)
                                                          succeeded = (ArgX27_55 == ArgY27_56);
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____mai_construction_method_0_0(
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
parse_tree__module_imports____Unify____mai_construction_method_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__unlock_accesses_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__module_imports__unlock_accesses_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__module_imports__mutable_variable_accesses_lock,
                    "parse_tree__module_imports__mutable_variable_accesses_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__module_imports__lock_accesses_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__module_imports__lock_accesses_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__module_imports__mutable_variable_accesses_lock,
                    "parse_tree__module_imports__mutable_variable_accesses_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__module_imports__unsafe_set_accesses_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL parse_tree__module_imports__unsafe_set_accesses_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
parse_tree__module_imports__mutable_variable_accesses = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__module_imports__unsafe_get_accesses_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL parse_tree__module_imports__unsafe_get_accesses_1_p_0

	MR_Word X;

		{
X = parse_tree__module_imports__mutable_variable_accesses;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
parse_tree__module_imports__pre_initialise_mutable_accesses_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__module_imports__pre_initialise_mutable_accesses_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__module_imports__mutable_variable_accesses_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__module_imports__initialise_mutable_accesses_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__module_imports__initialise_mutable_accesses_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__module_imports__mutable_variable_accesses_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__module_imports__initialise_mutable_accesses_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__module_imports__mutable_variable_accesses_lock,
                    "parse_tree__module_imports__mutable_variable_accesses_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__module_imports__initialise_mutable_accesses_0_p_0

	MR_Word X;

	X =  (MR_Word) (&parse_tree__module_imports_scalar_common_2[11]) ;
		{
parse_tree__module_imports__mutable_variable_accesses = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__module_imports__initialise_mutable_accesses_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__module_imports__mutable_variable_accesses_lock,
                    "parse_tree__module_imports__mutable_variable_accesses_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__module_imports__accumulate_foreign_import_langs_in_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_LangSet_0_7,
  MR_Word * STATE_VARIABLE_LangSet_8)
{
  {
    MR_Word Langs_6;

    Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(Item_4);
    mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_6, STATE_VARIABLE_LangSet_0_7, STATE_VARIABLE_LangSet_8);
  }
}

static void MR_CALL 
parse_tree__module_imports__accumulate_foreign_import_langs_in_item_block_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_8;

    parse_tree__module_imports__accumulate_foreign_import_langs_in_item_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_8));
  }
}

static void MR_CALL 
parse_tree__module_imports__accumulate_foreign_import_langs_in_item_block_3_p_0(
  MR_Word TypeInfo_for_MS_16,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_LangSet_0_12,
  MR_Word * STATE_VARIABLE_LangSet_13)
{
  {
    MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_4, (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_LangSet_13;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[7]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[10]), Items_11, ((MR_Box) (STATE_VARIABLE_LangSet_0_12)), &conv1_STATE_VARIABLE_LangSet_13);
    *STATE_VARIABLE_LangSet_13 = ((MR_Word) (conv1_STATE_VARIABLE_LangSet_13));
  }
}

void MR_CALL 
parse_tree__module_imports__write_mai_stats_3_p_0(
  MR_Word Stream_4)
{
  {
    MR_Word Accesses_6;
    MR_Word Init_7;
    MR_Word Make_8;
    MR_Word Read_9;

{
#define MR_PROC_LABEL parse_tree__module_imports__write_mai_stats_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__module_imports__mutable_variable_accesses_lock,
                    "parse_tree__module_imports__mutable_variable_accesses_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__module_imports__write_mai_stats_3_p_0

	MR_Word X;

		{
X = parse_tree__module_imports__mutable_variable_accesses;


		;}
#undef MR_PROC_LABEL
	 Accesses_6  = X;
}
{
#define MR_PROC_LABEL parse_tree__module_imports__write_mai_stats_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__module_imports__mutable_variable_accesses_lock,
                    "parse_tree__module_imports__mutable_variable_accesses_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    Init_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Accesses_6, (MR_Integer) 0))));
    Make_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Accesses_6, (MR_Integer) 1))));
    Read_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Accesses_6, (MR_Integer) 2))));
    parse_tree__module_imports__write_mai_fields_stats_5_p_0(Stream_4, (MR_String) "INIT", Init_7);
    parse_tree__module_imports__write_mai_fields_stats_5_p_0(Stream_4, (MR_String) "MAKE", Make_8);
    parse_tree__module_imports__write_mai_fields_stats_5_p_0(Stream_4, (MR_String) "READ", Read_9);
  }
}

static void MR_CALL 
parse_tree__module_imports__write_mai_fields_stats_5_p_0(
  MR_Word Stream_6,
  MR_String Kind_7,
  MR_Word Fields_8)
{
  {
    MR_Word SrcFileName_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
    MR_Word ModuleDir_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
    MR_Word SrcFileModuleName_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
    MR_Word ModuleName_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
    MR_Word ModuleNameContext_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
    MR_Word Ancestors_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
    MR_Word Children_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
    MR_Word PublicChildren_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
    MR_Word NestedChildren_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
    MR_Word IntDepsMap_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
    MR_Word ImpDepsMap_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
    MR_Word IndirectDeps_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    MR_Word FactTableDeps_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
    MR_Word FIMs_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
    MR_Word ForeignIncludeFiles_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
    MR_Word HasForeignCode_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
    MR_Word HasForeignExport_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
    MR_Word HasMain_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
    MR_Word SrcBlocks_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    MR_Word DirectIntBlocks_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    MR_Word IndirectIntBlocks_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word OptBlocks_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word IntForOptBlocks_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word VersionNumbersMap_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word MaybeTimestamMap_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Specs_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Errors_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String Var_47;
    MR_String Var_50;
    MR_String Var_53;
    MR_String Var_56;
    MR_String Var_59;
    MR_String Var_62;
    MR_String Var_65;
    MR_String Var_68;
    MR_String Var_71;
    MR_String Var_74;
    MR_String Var_77;
    MR_String Var_80;
    MR_String Var_83;
    MR_String Var_86;
    MR_String Var_89;
    MR_String Var_92;
    MR_String Var_95;
    MR_String Var_98;
    MR_String Var_101;
    MR_String Var_104;
    MR_String Var_107;
    MR_String Var_110;
    MR_String Var_113;
    MR_String Var_116;
    MR_String Var_119;
    MR_String Var_122;
    MR_String Var_125;

    Var_47 = parse_tree__module_imports__acc_str_1_f_0(SrcFileName_10);
    Var_50 = parse_tree__module_imports__acc_str_1_f_0(ModuleDir_11);
    Var_53 = parse_tree__module_imports__acc_str_1_f_0(SrcFileModuleName_12);
    Var_56 = parse_tree__module_imports__acc_str_1_f_0(ModuleName_13);
    Var_59 = parse_tree__module_imports__acc_str_1_f_0(ModuleNameContext_14);
    Var_62 = parse_tree__module_imports__acc_str_1_f_0(Ancestors_15);
    Var_65 = parse_tree__module_imports__acc_str_1_f_0(Children_16);
    Var_68 = parse_tree__module_imports__acc_str_1_f_0(PublicChildren_17);
    Var_71 = parse_tree__module_imports__acc_str_1_f_0(NestedChildren_18);
    Var_74 = parse_tree__module_imports__acc_str_1_f_0(IntDepsMap_19);
    Var_77 = parse_tree__module_imports__acc_str_1_f_0(ImpDepsMap_20);
    Var_80 = parse_tree__module_imports__acc_str_1_f_0(IndirectDeps_21);
    Var_83 = parse_tree__module_imports__acc_str_1_f_0(FactTableDeps_22);
    Var_86 = parse_tree__module_imports__acc_str_1_f_0(FIMs_23);
    Var_89 = parse_tree__module_imports__acc_str_1_f_0(ForeignIncludeFiles_24);
    Var_92 = parse_tree__module_imports__acc_str_1_f_0(HasForeignCode_25);
    Var_95 = parse_tree__module_imports__acc_str_1_f_0(HasForeignExport_26);
    Var_98 = parse_tree__module_imports__acc_str_1_f_0(HasMain_27);
    Var_101 = parse_tree__module_imports__acc_str_1_f_0(SrcBlocks_28);
    Var_104 = parse_tree__module_imports__acc_str_1_f_0(DirectIntBlocks_29);
    Var_107 = parse_tree__module_imports__acc_str_1_f_0(IndirectIntBlocks_30);
    Var_110 = parse_tree__module_imports__acc_str_1_f_0(OptBlocks_31);
    Var_113 = parse_tree__module_imports__acc_str_1_f_0(IntForOptBlocks_32);
    Var_116 = parse_tree__module_imports__acc_str_1_f_0(VersionNumbersMap_33);
    Var_119 = parse_tree__module_imports__acc_str_1_f_0(MaybeTimestamMap_34);
    Var_122 = parse_tree__module_imports__acc_str_1_f_0(Specs_35);
    Var_125 = parse_tree__module_imports__acc_str_1_f_0(Errors_36);
    mercury__io__write_string_4_p_0(Stream_6, Kind_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_47);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_50);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_53);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_56);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_59);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_62);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_65);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_68);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_71);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_74);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_77);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_80);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_83);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_86);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_89);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_92);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_95);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_98);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_101);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_104);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_107);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_110);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_113);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_116);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_119);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_122);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Var_125);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static MR_String MR_CALL 
parse_tree__module_imports__acc_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "a";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "n";
        break;
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_d_file_19_p_0(
  MR_Word ModuleAndImports_20,
  MR_String * SourceFileName_21,
  MR_Word * SourceFileModuleName_22,
  MR_Word * ModuleName_23,
  MR_Word * Ancestors_24,
  MR_Word * PublicChildrenMap_25,
  MR_Word * NestedChildren_26,
  MR_Word * IntDepsMap_27,
  MR_Word * ImpDepsMap_28,
  MR_Word * IndirectDeps_29,
  MR_Word * FactDeps_30,
  MR_Word * ForeignImportModules_31,
  MR_Word * ForeignIncludeFilesCord_32,
  MR_Word * ContainsForeignCode_33,
  MR_Word * SrcItemBlocks_34,
  MR_Word * DirectIntItemBlocksCord_35,
  MR_Word * IndirectIntItemBlocksCord_36,
  MR_Word * OptItemBlocksCord_37,
  MR_Word * IntForOptItemBlocksCord_38)
{
  {
    parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports_20, SourceFileName_21);
    parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(ModuleAndImports_20, SourceFileModuleName_22);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_20, ModuleName_23);
    parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports_20, Ancestors_24);
    parse_tree__module_imports__module_and_imports_get_public_children_map_2_p_0(ModuleAndImports_20, PublicChildrenMap_25);
    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports_20, NestedChildren_26);
    parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(ModuleAndImports_20, IntDepsMap_27);
    parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(ModuleAndImports_20, ImpDepsMap_28);
    parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(ModuleAndImports_20, IndirectDeps_29);
    parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(ModuleAndImports_20, FactDeps_30);
    parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(ModuleAndImports_20, ForeignImportModules_31);
    parse_tree__module_imports__module_and_imports_get_foreign_include_files_2_p_0(ModuleAndImports_20, ForeignIncludeFilesCord_32);
    parse_tree__module_imports__module_and_imports_get_contains_foreign_code_2_p_0(ModuleAndImports_20, ContainsForeignCode_33);
    parse_tree__module_imports__module_and_imports_get_src_blocks_2_p_0(ModuleAndImports_20, SrcItemBlocks_34);
    parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(ModuleAndImports_20, DirectIntItemBlocksCord_35);
    parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(ModuleAndImports_20, IndirectIntItemBlocksCord_36);
    parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(ModuleAndImports_20, OptItemBlocksCord_37);
    parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(ModuleAndImports_20, IntForOptItemBlocksCord_38);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(
  MR_Word NewSpecs_5,
  MR_Word NewErrors_6,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_12,
  MR_Word * STATE_VARIABLE_ModuleAndImports_13)
{
  {
    MR_Word Specs0_8;
    MR_Word Errors0_9;
    MR_Word Specs_10;
    MR_Word Errors_11;
    MR_String Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_specs_2_p_0(STATE_VARIABLE_ModuleAndImports_0_12, &Specs0_8);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_12, &Errors0_9);
    Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_5, Specs0_8);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors0_9, NewErrors_6, &Errors_11);
    Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0))));
    Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23))));
    Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Specs_10));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_11));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_50));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(
  MR_Word InterfaceErrors_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word Errors0_6;
    MR_Word Errors_7;
    MR_String Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &Errors0_6);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors0_6, InterfaceErrors_4, &Errors_7);
    Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_7));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word Specs0_6;
    MR_Word Specs_7;
    MR_String Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_specs_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &Specs0_6);
    Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_4, Specs0_6);
    Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12)
{
  if ((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModuleAndImports_12 = STATE_VARIABLE_ModuleAndImports_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9;
    MR_Word ModuleVersionNumbersMap_10;
    MR_String Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_11, &ModuleVersionNumbersMap0_9);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0))));
    Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25))));
    Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ModuleVersionNumbersMap_10));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_48));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(
  MR_Word NewIntItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word IntItemBlocks0_6;
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &IntItemBlocks0_6);
    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]), NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]), IntItemBlocks0_6, Var_10);
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_45));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(
  MR_Word NewOptItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word OptItemBlocks0_6;
    MR_Word OptItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &OptItemBlocks0_6);
    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), NewOptItemBlocks_4);
    OptItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), OptItemBlocks0_6, Var_10);
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (OptItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_45));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(
  MR_Word NewIntItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word IntItemBlocks0_6;
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &IntItemBlocks0_6);
    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), IntItemBlocks0_6, Var_10);
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_45));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(
  MR_Word NewIntItemBlocks_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word IntItemBlocks0_6;
    MR_Word IntItemBlocks_7;
    MR_Word Var_10;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &IntItemBlocks0_6);
    Var_10 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), NewIntItemBlocks_4);
    IntItemBlocks_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), IntItemBlocks0_6, Var_10);
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntItemBlocks_7));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_45));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_indirect_dep_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word IndirectDeps0_6;
    MR_Word IndirectDeps_7;
    MR_String Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &IndirectDeps0_6);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), IndirectDeps0_6, &IndirectDeps_7);
    Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_7));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_imp_dep_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_10,
  MR_Word * STATE_VARIABLE_ModuleAndImports_11)
{
  {
    MR_Word ImpDepsMap0_8;
    MR_Word ImpDepsMap_9;
    MR_String Var_20;
    MR_String Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(STATE_VARIABLE_ModuleAndImports_0_10, &ImpDepsMap0_8);
    mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Context_6)), ImpDepsMap0_8, &ImpDepsMap_9);
    Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 0))));
    Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 1))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 2))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 3))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 4))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 5))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 6))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 7))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 8))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 9))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 11))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 12))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 13))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 14))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 16)));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 17))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 18))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 19))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 20))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 21))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 22))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 23))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 24))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 25))));
    Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDepsMap_9));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_47));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_ancestor_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_8,
  MR_Word * STATE_VARIABLE_ModuleAndImports_9)
{
  {
    MR_Word Ancestors0_6;
    MR_Word Ancestors_7;
    MR_String Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned packed_word_0;

    parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_8, &Ancestors0_6);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), Ancestors0_6, &Ancestors_7);
    Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 6))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 7))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 8))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 9))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 10))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 11))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 12))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 13))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 14))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 15))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 16)));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 17))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 18))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 19))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 20))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 21))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 22))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 23))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 24))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 25))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_8, (MR_Integer) 26))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Ancestors_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * ImpDeps_4)
{
  {
    MR_Word ImpDepsMap_5;
    MR_Word Var_6;

    parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(ModuleAndImports_3, &ImpDepsMap_5);
    Var_6 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDepsMap_5);
    *ImpDeps_4 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * ImpDeps_4)
{
  {
    MR_Word ImpDepsMap_5;

    parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(ModuleAndImports_3, &ImpDepsMap_5);
    *ImpDeps_4 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDepsMap_5);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * IntDeps_4)
{
  {
    MR_Word IntDepsMap_5;
    MR_Word Var_6;

    parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(ModuleAndImports_3, &IntDepsMap_5);
    Var_6 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_5);
    *IntDeps_4 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * IntDeps_4)
{
  {
    MR_Word IntDepsMap_5;

    parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(ModuleAndImports_3, &IntDepsMap_5);
    *IntDeps_4 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_5);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * Children_4)
{
  {
    MR_Word ChildrenMap_5;
    MR_Word Var_6;

    parse_tree__module_imports__module_and_imports_get_children_map_2_p_0(ModuleAndImports_3, &ChildrenMap_5);
    Var_6 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ChildrenMap_5);
    *Children_4 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * Children_4)
{
  {
    MR_Word ChildrenMap_5;

    parse_tree__module_imports__module_and_imports_get_children_map_2_p_0(ModuleAndImports_3, &ChildrenMap_5);
    *Children_4 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ChildrenMap_5);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_maybe_timestamp_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_foreign_import_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_imp_deps_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_deps_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_set_ancestors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_String Var_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_String Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 15))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 17))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 18))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 19))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 20))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 21))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 22))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 23))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 24))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 25))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 26))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 16)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 23))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_has_main_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16))) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_contains_foreign_export_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 16))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_contains_foreign_code_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 15))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_foreign_include_files_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 14))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 13))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 12))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_indirect_deps_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 11))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_imp_deps_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 10))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_deps_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 9))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_public_children_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_dir_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_String * X_4)
{
  *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1))));
}

static void MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__prog_data_foreign__add_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_52;

    conv0_LambdaHeadVar__2_52 = parse_tree__module_imports__IntroducedFrom__func__make_module_dep_module_and_imports__811__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0(
  MR_String SourceFileName_17,
  MR_String ModuleDir_18,
  MR_Word SourceFileModuleName_19,
  MR_Word ModuleName_20,
  MR_Word Ancestors_21,
  MR_Word Children_22,
  MR_Word NestedChildren_23,
  MR_Word IntDeps_24,
  MR_Word ImpDeps_25,
  MR_Word FactDeps_26,
  MR_Word ForeignImports_27,
  MR_Word ForeignIncludes_28,
  MR_Word ContainsForeignCode_29,
  MR_Word ContainsForeignExport_30,
  MR_Word HasMain_31,
  MR_Word * ModuleAndImports_32)
{
  {
    MR_Word ModuleNameContext_33;
    MR_Word IntDepsContexts_36;
    MR_Word ImpDepsContexts_37;
    MR_Word IndirectDeps_38;
    MR_Word ChildrenContexts_39;
    MR_Word PublicChildrenContexts_40;
    MR_Word ForeignImportModules_41;
    MR_Word DirectIntItemBlocksCord_43;
    MR_Word IndirectIntItemBlocksCord_44;
    MR_Word OptItemBlocksCord_45;
    MR_Word IntForOptItemBlocksCord_46;
    MR_Word ModuleVersionNumbers_47;
    MR_Word Errors_49;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Box conv2_ForeignImportModules_41;

    ModuleNameContext_33 = mercury__term__context_init_0_f_0();
    Var_56 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[8]), IntDeps_24);
    mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_56, &IntDepsContexts_36);
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[8]), ImpDeps_25);
    mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_57, &ImpDepsContexts_37);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_38);
    Var_58 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[8]), Children_22);
    mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_58, &ChildrenContexts_39);
    mercury__multi_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &PublicChildrenContexts_40);
    Var_60 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[9]), ForeignImports_27, ((MR_Box) (Var_60)), &conv2_ForeignImportModules_41);
    ForeignImportModules_41 = ((MR_Word) (conv2_ForeignImportModules_41));
    DirectIntItemBlocksCord_43 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    IndirectIntItemBlocksCord_44 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    OptItemBlocksCord_45 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]));
    IntForOptItemBlocksCord_46 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]));
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &ModuleVersionNumbers_47);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_49);
    Var_61 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_21);
    Var_62 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildren_23);
    Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludes_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleDir_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleNameContext_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ChildrenContexts_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PublicChildrenContexts_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntDepsContexts_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDepsContexts_37));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_38));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (FactDeps_26));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignImportModules_41));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ContainsForeignCode_29));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (((((MR_Unsigned) (ContainsForeignExport_30) << 1)) | (MR_Unsigned) (HasMain_31)));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (DirectIntItemBlocksCord_43));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IndirectIntItemBlocksCord_44));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (OptItemBlocksCord_45));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntForOptItemBlocksCord_46));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ModuleVersionNumbers_47));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_49));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__make_module_and_imports_14_p_0(
  MR_Word Globals_15,
  MR_String SourceFileName_16,
  MR_Word SourceFileModuleName_17,
  MR_Word ModuleName_18,
  MR_Word ModuleNameContext_19,
  MR_Word SrcItemBlocks_20,
  MR_Word PublicChildrenMap_21,
  MR_Word NestedChildren_22,
  MR_Word FactDeps_23,
  MR_Word ForeignIncludeFiles_24,
  MR_Word ForeignExportLangs_25,
  MR_Word HasMain_26,
  MR_Word MaybeTimestampMap_27,
  MR_Word * ModuleAndImports_28)
{
  {
    MR_bool succeeded;
    MR_Word Ancestors_29;
    MR_Word IntDeps_30;
    MR_Word ImpDeps_31;
    MR_Word IndirectDeps_32;
    MR_Word ChildrenMap_33;
    MR_Word ForeignImports_34;
    MR_Word VersionNumbers_35;
    MR_Word BackendLangs_36;
    MR_Word BackendFELangs_37;
    MR_Word ContainsForeignExport_38;
    MR_Word Errors_40;
    MR_Word Var_41;
    MR_String Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Ancestors_29);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), &IntDeps_30);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), &ImpDeps_31);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_32);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), &ChildrenMap_33);
    ForeignImports_34 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &VersionNumbers_35);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_15, &BackendLangs_36);
    Var_41 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_36);
    mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_41, ForeignExportLangs_25, &BackendFELangs_37);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendFELangs_37);
    if (succeeded)
      ContainsForeignExport_38 = (MR_Integer) 1;
    else
      ContainsForeignExport_38 = (MR_Integer) 0;
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_40);
    Var_42 = mercury__dir__this_directory_0_f_0();
    Var_44 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]));
    Var_47 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleNameContext_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Ancestors_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ChildrenMap_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PublicChildrenMap_21));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (NestedChildren_22));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntDeps_30));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpDeps_31));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_32));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (FactDeps_23));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignImports_34));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ForeignIncludeFiles_24));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (((((MR_Unsigned) (ContainsForeignExport_38) << 1)) | (MR_Unsigned) (HasMain_26)));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (SrcItemBlocks_20));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (VersionNumbers_35));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (MaybeTimestampMap_27));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_40));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
  }
}

static void MR_CALL 
parse_tree__module_imports__rebuild_module_and_imports_for_dep_file_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_item__src_to_raw_item_block_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
parse_tree__module_imports__rebuild_module_and_imports_for_dep_file_3_p_0(
  MR_Word Globals_4,
  MR_Word ModuleAndImports0_5,
  MR_Word * ModuleAndImports_6)
{
  {
    MR_Word AugCompUnit_7;
    MR_Word Specs_8;
    MR_Word ModuleName_10;
    MR_Word ModuleNameContext_11;
    MR_Word SrcItemBlocks_13;
    MR_Word RawItemBlocks_18;
    MR_Word RawCompUnit_19;
    MR_String SourceFileName_20;
    MR_Word SourceFileModuleName_21;
    MR_Word NestedChildren_22;
    MR_Word ReadModuleErrors0_23;
    MR_Word _Errors_9;

    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports0_5, &AugCompUnit_7, &Specs_8, &_Errors_9);
    ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    SrcItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), (MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[7]), SrcItemBlocks_13, &RawItemBlocks_18);
    {
      RawCompUnit_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawCompUnit_19, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), RawCompUnit_19, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), RawCompUnit_19, 2) = ((MR_Box) (RawItemBlocks_18));
    }
    parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports0_5, &SourceFileName_20);
    parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(ModuleAndImports0_5, &SourceFileModuleName_21);
    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports0_5, &NestedChildren_22);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &ReadModuleErrors0_23);
    parse_tree__module_imports__init_module_and_imports_8_p_0(Globals_4, SourceFileName_20, SourceFileModuleName_21, NestedChildren_22, Specs_8, ReadModuleErrors0_23, RawCompUnit_19, ModuleAndImports_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(
  MR_Word ModuleAndImports_5,
  MR_Word * AugCompUnit_6,
  MR_Word * Specs_7,
  MR_Word * Errors_8)
{
  {
    MR_Word ModuleName_9;
    MR_Word ModuleNameContext_10;
    MR_Word ModuleVersionNumbers_11;
    MR_Word SrcItemBlocks_12;
    MR_Word DirectIntItemBlocksCord_13;
    MR_Word IndirectIntItemBlocksCord_14;
    MR_Word OptItemBlocksCord_15;
    MR_Word IntForOptItemBlocksCord_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_5, &ModuleName_9);
    parse_tree__module_imports__module_and_imports_get_module_name_context_2_p_0(ModuleAndImports_5, &ModuleNameContext_10);
    parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(ModuleAndImports_5, &ModuleVersionNumbers_11);
    parse_tree__module_imports__module_and_imports_get_src_blocks_2_p_0(ModuleAndImports_5, &SrcItemBlocks_12);
    parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(ModuleAndImports_5, &DirectIntItemBlocksCord_13);
    parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(ModuleAndImports_5, &IndirectIntItemBlocksCord_14);
    parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(ModuleAndImports_5, &OptItemBlocksCord_15);
    parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(ModuleAndImports_5, &IntForOptItemBlocksCord_16);
    Var_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), DirectIntItemBlocksCord_13);
    Var_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), IndirectIntItemBlocksCord_14);
    Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), OptItemBlocksCord_15);
    Var_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]), IntForOptItemBlocksCord_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *AugCompUnit_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleVersionNumbers_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SrcItemBlocks_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
    }
    parse_tree__module_imports__module_and_imports_get_specs_2_p_0(ModuleAndImports_5, Specs_7);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(ModuleAndImports_5, Errors_8);
  }
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 24))));
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_version_numbers_map_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 22))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_errors_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 25))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_for_opt_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 21))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_opt_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 20))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_indirect_int_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 19))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_direct_int_blocks_cord_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 18))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_src_blocks_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 17))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_context_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_String * X_4)
{
  *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));
}

void MR_CALL 
parse_tree__module_imports__parse_tree_int_to_module_and_imports_5_p_0(
  MR_Word Globals_6,
  MR_String IntFileName_7,
  MR_Word ParseTreeInt_8,
  MR_Word ReadModuleErrors_9,
  MR_Word * ModuleAndImports_10)
{
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 0))));
    MR_Word ModuleContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 2))));
    MR_Word IntIncl_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 4))));
    MR_Word ImpIncls_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 5))));
    MR_Word IntAvails_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 6))));
    MR_Word ImpAvails_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 7))));
    MR_Word IntFIMs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 8))));
    MR_Word ImpFIMs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 9))));
    MR_Word IntItems_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 10))));
    MR_Word ImpItems_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_8, (MR_Integer) 11))));
    MR_Word RawItemBlocks_23;
    MR_Word RawCompUnit_24;
    MR_Word CompUnitModuleNames_25;

    parse_tree__prog_item__int_imp_items_to_item_blocks_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ModuleName_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncl_15, ImpIncls_16, IntAvails_17, ImpAvails_18, IntFIMs_19, ImpFIMs_20, IntItems_21, ImpItems_22, &RawItemBlocks_23);
    {
      RawCompUnit_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawCompUnit_24, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), RawCompUnit_24, 1) = ((MR_Box) (ModuleContext_13));
      MR_hl_field(MR_mktag(0), RawCompUnit_24, 2) = ((MR_Box) (RawItemBlocks_23));
    }
    CompUnitModuleNames_25 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)));
    parse_tree__module_imports__init_module_and_imports_8_p_0(Globals_6, IntFileName_7, ModuleName_11, CompUnitModuleNames_25, (MR_Word) ((MR_Unsigned) 0U), ReadModuleErrors_9, RawCompUnit_24, ModuleAndImports_10);
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__712__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__4_143;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__703__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__4_143);
    *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__4_143));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__4_138;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__701__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__4_138);
    *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__4_138));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__4_133;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__699__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__4_133);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__4_133));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__4_128;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__697__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__4_128);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_128));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__685__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    parse_tree__prog_item__get_included_modules_in_item_include_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__prog_item__get_included_modules_in_item_include_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_84;

    parse_tree__module_imports__IntroducedFrom__pred__init_module_and_imports__659__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_84);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_84));
  }
}

static void MR_CALL 
parse_tree__module_imports__init_module_and_imports_8_p_0(
  MR_Word Globals_9,
  MR_String FileName_10,
  MR_Word SourceFileModuleName_11,
  MR_Word NestedModuleNames_12,
  MR_Word Specs_13,
  MR_Word Errors_14,
  MR_Word RawCompUnit_15,
  MR_Word * ModuleAndImports_16)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_15, (MR_Integer) 0))));
    MR_Word ModuleNameContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_15, (MR_Integer) 1))));
    MR_Word RawItemBlocks_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_15, (MR_Integer) 2))));
    MR_Word Ancestors_20;
    MR_Word NestedDeps_21;
    MR_Word IndirectDeps_22;
    MR_Word LangSet_23;
    MR_Word ForeignImports0_24;
    MR_Word ForeignIncludeFilesCord_25;
    MR_Word ContainsForeignExport_26;
    MR_Word SelfImportLangs_27;
    MR_Word ForeignImports_31;
    MR_Word IntIncls_32;
    MR_Word ImpIncls_33;
    MR_Word IntAvails_34;
    MR_Word ImpAvails_35;
    MR_Word IntItems_38;
    MR_Word ImpItems_39;
    MR_Word PublicChildrenMap_40;
    MR_Word ChildrenMap_41;
    MR_Word IntImportsMap0_42;
    MR_Word IntUsesMap0_43;
    MR_Word ImpImportsMap0_44;
    MR_Word ImpUsesMap0_45;
    MR_Word IntImplicitImportNeeds_46;
    MR_Word IntImpImplicitImportNeeds_47;
    MR_Word Contents_48;
    MR_Word NewForeignInclFilesCord_49;
    MR_Word FactTables_50;
    MR_Word NewForeignExportLangs_52;
    MR_Word HasMain_53;
    MR_Word SortedFactTables_54;
    MR_Word BackendLangs_55;
    MR_Word NewBackendFELangs_56;
    MR_Word NewContainsForeignExport_57;
    MR_Word ImplicitIntImports_58;
    MR_Word ImplicitIntUses_59;
    MR_Word ImplicitIntImpImports_60;
    MR_Word ImplicitIntImpUses_61;
    MR_Word ImplicitImpImports_62;
    MR_Word ImplicitImpUses_63;
    MR_Word IntImportsMap_64;
    MR_Word IntUsesMap_65;
    MR_Word ImpImportsMap_66;
    MR_Word ImpUsesMap_67;
    MR_Word IntDepsMap_68;
    MR_Word ImpDepsMap_69;
    MR_Word IntImpDepsMap_70;
    MR_Word ForeignIncludeFiles_71;
    MR_Word NewForeignInclFiles_72;
    MR_Word ContainsForeignCode_73;
    MR_Word DirectIntBlocksCord_75;
    MR_Word IndirectIntBlocksCord_76;
    MR_Word OptBlocksCords_77;
    MR_Word IntForOptBlocksCords_78;
    MR_Word VersionNumbers_79;
    MR_Word Var_81;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_String Var_103;
    MR_Word Var_104;
    MR_Box conv1_ForeignImports_31;
    MR_Word _IntFIMs_36;
    MR_Word _ImpFIMs_37;
    MR_Box conv3_PublicChildrenMap_40;
    MR_Box conv5_ChildrenMap_41;
    MR_Box conv7_IntImportsMap_64;
    MR_Box conv9_IntUsesMap_65;
    MR_Box conv11_ImpImportsMap_66;
    MR_Box conv13_ImpUsesMap_67;

    Ancestors_20 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_17);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_17, SourceFileModuleName_11);
    if (succeeded)
      mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)), NestedModuleNames_12, &NestedDeps_21);
    else
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &NestedDeps_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_22);
    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Globals_9, RawItemBlocks_19, &LangSet_23, &ForeignImports0_24, &ForeignIncludeFilesCord_25, &ContainsForeignExport_26);
    parse_tree__module_imports__get_foreign_self_imports_from_item_blocks_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), RawItemBlocks_19, &SelfImportLangs_27);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (ModuleName_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0), Var_81, SelfImportLangs_27, ((MR_Box) (ForeignImports0_24)), &conv1_ForeignImports_31);
    ForeignImports_31 = ((MR_Word) (conv1_ForeignImports_31));
    parse_tree__prog_item__get_raw_components_9_p_0(RawItemBlocks_19, &IntIncls_32, &ImpIncls_33, &IntAvails_34, &ImpAvails_35, &_IntFIMs_36, &_ImpFIMs_37, &IntItems_38, &ImpItems_39);
    Var_86 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[5]), IntIncls_32, ((MR_Box) (Var_86)), &conv3_PublicChildrenMap_40);
    PublicChildrenMap_40 = ((MR_Word) (conv3_PublicChildrenMap_40));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[6]), ImpIncls_33, ((MR_Box) (PublicChildrenMap_40)), &conv5_ChildrenMap_41);
    ChildrenMap_41 = ((MR_Word) (conv5_ChildrenMap_41));
    parse_tree__prog_item__get_imports_uses_maps_3_p_0(IntAvails_34, &IntImportsMap0_42, &IntUsesMap0_43);
    parse_tree__prog_item__get_imports_uses_maps_3_p_0(ImpAvails_35, &ImpImportsMap0_44, &ImpUsesMap0_45);
    parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_5_p_0(IntItems_38, ImpItems_39, &IntImplicitImportNeeds_46, &IntImpImplicitImportNeeds_47, &Contents_48);
    NewForeignInclFilesCord_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_48, (MR_Integer) 0))));
    FactTables_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_48, (MR_Integer) 1))));
    NewForeignExportLangs_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_48, (MR_Integer) 3))));
    HasMain_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Contents_48, (MR_Integer) 4))) & (MR_Integer) 1);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTables_50, &SortedFactTables_54);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &BackendLangs_55);
    Var_88 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_55);
    mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_88, NewForeignExportLangs_52, &NewBackendFELangs_56);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NewBackendFELangs_56);
    if (succeeded)
      NewContainsForeignExport_57 = (MR_Integer) 1;
    else
      NewContainsForeignExport_57 = (MR_Integer) 0;
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_4));
      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (ContainsForeignExport_26));
      MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (NewContainsForeignExport_57));
    }
    mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140parse_tree.module_imports.init_module_and_imports\'/8", (MR_String) "bad ContainsForeignExport");
    parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(Globals_9, IntImplicitImportNeeds_46, &ImplicitIntImports_58, &ImplicitIntUses_59);
    parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(Globals_9, IntImpImplicitImportNeeds_47, &ImplicitIntImpImports_60, &ImplicitIntImpUses_61);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplicitIntImpImports_60, ImplicitIntImports_58, &ImplicitImpImports_62);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImplicitIntImpUses_61, ImplicitIntUses_59, &ImplicitImpUses_63);
    Var_93 = mercury__term__context_init_0_f_0();
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_5));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (Var_93));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), Var_92, ImplicitIntImports_58, ((MR_Box) (IntImportsMap0_42)), &conv7_IntImportsMap_64);
    IntImportsMap_64 = ((MR_Word) (conv7_IntImportsMap_64));
    Var_95 = mercury__term__context_init_0_f_0();
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_6));
      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (Var_95));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), Var_94, ImplicitIntUses_59, ((MR_Box) (IntUsesMap0_43)), &conv9_IntUsesMap_65);
    IntUsesMap_65 = ((MR_Word) (conv9_IntUsesMap_65));
    Var_97 = mercury__term__context_init_0_f_0();
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_7));
      MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (Var_97));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), Var_96, ImplicitImpImports_62, ((MR_Box) (ImpImportsMap0_44)), &conv11_ImpImportsMap_66);
    ImpImportsMap_66 = ((MR_Word) (conv11_ImpImportsMap_66));
    Var_99 = mercury__term__context_init_0_f_0();
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_8));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (Var_99));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), Var_98, ImplicitImpUses_63, ((MR_Box) (ImpUsesMap0_45)), &conv13_ImpUsesMap_67);
    ImpUsesMap_67 = ((MR_Word) (conv13_ImpUsesMap_67));
    mercury__multi_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportsMap_64, IntUsesMap_65, &IntDepsMap_68);
    mercury__multi_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportsMap_66, ImpUsesMap_67, &ImpDepsMap_69);
    mercury__multi_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_68, ImpDepsMap_69, &IntImpDepsMap_70);
    ForeignIncludeFiles_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesCord_25);
    NewForeignInclFiles_72 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), NewForeignInclFilesCord_49);
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (parse_tree__module_imports__init_module_and_imports_8_p_0_9));
      MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (ForeignIncludeFiles_71));
      MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) (NewForeignInclFiles_72));
    }
    mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140parse_tree.module_imports.init_module_and_imports\'/8", (MR_String) "bad ForeignIncludeFiles");
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_23);
    if (succeeded)
      ContainsForeignCode_73 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        ContainsForeignCode_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ContainsForeignCode_73, 0) = ((MR_Box) (LangSet_23));
      }
    DirectIntBlocksCord_75 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    IndirectIntBlocksCord_76 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]));
    OptBlocksCords_77 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]));
    IntForOptBlocksCords_78 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]));
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &VersionNumbers_79);
    Var_103 = mercury__dir__this_directory_0_f_0();
    Var_104 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleNameContext_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ChildrenMap_41));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PublicChildrenMap_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (NestedDeps_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntDepsMap_68));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntImpDepsMap_70));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IndirectDeps_22));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (SortedFactTables_54));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignImports_31));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ForeignIncludeFilesCord_25));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ContainsForeignCode_73));
      MR_hl_field(MR_mktag(0), base, 16) = (MR_Box) (((((MR_Unsigned) (ContainsForeignExport_26) << 1)) | (MR_Unsigned) (HasMain_53)));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (DirectIntBlocksCord_75));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IndirectIntBlocksCord_76));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (OptBlocksCords_77));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntForOptBlocksCords_78));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (VersionNumbers_79));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Specs_13));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Errors_14));
      MR_hl_field(MR_mktag(0), base, 26) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
parse_tree__module_imports__get_foreign_self_imports_from_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_LangSet_13;

    parse_tree__module_imports__accumulate_foreign_import_langs_in_item_block_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LangSet_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LangSet_13));
  }
}

static void MR_CALL 
parse_tree__module_imports__get_foreign_self_imports_from_item_blocks_2_p_0(
  MR_Word TypeInfo_for_MS_8,
  MR_Word ItemBlocks_3,
  MR_Word * Langs_4)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word LangSet_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Box conv1_LangSet_5;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (parse_tree__module_imports__get_foreign_self_imports_from_item_blocks_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_MS_8));
    }
    Var_7 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_MS_8));
    }
    mercury__list__foldl_4_p_0(TypeInfo_14_14, (MR_Word) (&parse_tree__module_imports_scalar_common_1[7]), (MR_Word) (Var_6), (MR_Word) (ItemBlocks_3), ((MR_Box) (Var_7)), &conv1_LangSet_5);
    LangSet_5 = ((MR_Word) (conv1_LangSet_5));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_5, Langs_4);
  }
}

static void MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ModuleAndImports_16;

    parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ModuleAndImports_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_ModuleAndImports_16));
  }
}

static MR_Box MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0(
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ParseTreeSrc_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22,
  MR_Word * RawCompUnits_14,
  MR_Word * ModuleAndImportsList_15)
{
  {
    MR_Word TopModuleName_16;
    MR_Word CompUnitModuleNames_19;
    MR_Word Var_24;
    MR_Word Var_26;

    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_11, RawCompUnits_14, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    TopModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc_11, (MR_Integer) 0))));
    Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[4]), *RawCompUnits_14);
    CompUnitModuleNames_19 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (SourceFileName_10));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (TopModuleName_16));
      MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (CompUnitModuleNames_19));
      MR_hl_field(MR_mktag(0), Var_26, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_26, 8) = ((MR_Box) (ReadModuleErrors_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), Var_26, *RawCompUnits_14, ModuleAndImportsList_15);
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_construction_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____mai_construction_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____mai_construction_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____mai_construction_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____mai_fields_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____mai_fields_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_kinds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____mai_fields_kinds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____mai_fields_kinds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____mai_fields_kinds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____maybe_accessed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____maybe_accessed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_accessed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____maybe_accessed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_and_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_timestamp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_timestamp_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_timestamp_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_timestamp_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_timestamp_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__module_imports__init(void)
{
}

void mercury__parse_tree__module_imports__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_construction_method_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_kinds_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0);
}

void mercury__parse_tree__module_imports__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__module_imports__required_init(void)
{
	parse_tree__module_imports__user_init_pred_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_imports__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_imports.
