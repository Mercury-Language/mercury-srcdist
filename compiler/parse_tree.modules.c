/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version rotd-2018-02-05
** configured for x86_64-pc-linux-gnu.
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1];

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1;

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0;

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0[2];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_1[1];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_2[2];

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

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_which_grab_0_0[2];

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_0;

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_1;

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_which_grab_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_which_grab_0_1[1];

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_which_grab_0[2];

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_which_grab_0[2];

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_which_grab_0[2];

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__844__1_2_p_0(
  MR_Word FirstAncestor_27,
  MR_Word ModuleName_29);

static void MR_CALL 
parse_tree__modules____Compare____which_grab_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_grab_0_0(
  MR_Word HeadVar__1_1,
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
parse_tree__modules____Compare____import_or_use_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclMap_8,
  MR_Word ImportUseMap_9,
  MR_Word ImportedModule_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ParentModule_8,
  MR_String SubModule_9,
  MR_Word ImportOrUseContext_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

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
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Ancestors_19,
  MR_Word STATE_VARIABLE_DirectImports_0_31,
  MR_Word * STATE_VARIABLE_DirectImports_32,
  MR_Word STATE_VARIABLE_DirectUses_0_33,
  MR_Word * STATE_VARIABLE_DirectUses_34,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_35,
  MR_Word * STATE_VARIABLE_ModuleAndImports_36);

static void MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0(
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
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_51_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41);

static void MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word Modules_16,
  MR_Word IntFileKind_17,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_50_50_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Modules_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_50_51_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word Modules_20,
  MR_Word IntFileKind_21,
  MR_Word STATE_VARIABLE_IndirectImports_0_33,
  MR_Word * STATE_VARIABLE_IndirectImports_34,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_35,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38);

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_IntImportsUses_0_39,
  MR_Word * STATE_VARIABLE_IntImportsUses_40,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_41,
  MR_Word * STATE_VARIABLE_ImpImportsUses_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

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
parse_tree__modules__grab_unqual_imported_modules_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word NewIntSection_24,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_50_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word Modules_16,
  MR_Word IntFileKind_17,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_53_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Modules_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_50_53_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word Modules_20,
  MR_Word IntFileKind_21,
  MR_Word STATE_VARIABLE_IndirectImports_0_33,
  MR_Word * STATE_VARIABLE_IndirectImports_34,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_35,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38);

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_IntImportsUses_0_39,
  MR_Word * STATE_VARIABLE_IntImportsUses_40,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_41,
  MR_Word * STATE_VARIABLE_ImpImportsUses_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Ancestors_19,
  MR_Word NewIntSection_20,
  MR_Word NewImpSection_21,
  MR_Word STATE_VARIABLE_DirectImports_0_31,
  MR_Word * STATE_VARIABLE_DirectImports_32,
  MR_Word STATE_VARIABLE_DirectUses_0_33,
  MR_Word * STATE_VARIABLE_DirectUses_34,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_35,
  MR_Word * STATE_VARIABLE_ModuleAndImports_36);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0(
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
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word NewIntSection_24,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word NewIntSection_24,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Modules_18,
  MR_Word IntFileKind_19,
  MR_Word NewIntSection_20,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_57_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word Modules_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IndirectImports_0_33,
  MR_Word * STATE_VARIABLE_IndirectImports_34,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_35,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word IntFileKind_19,
  MR_Word NewIntSection_20,
  MR_Word STATE_VARIABLE_IntImportsUses_0_39,
  MR_Word * STATE_VARIABLE_IntImportsUses_40,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_41,
  MR_Word * STATE_VARIABLE_ImpImportsUses_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44);

static void MR_CALL 
parse_tree__modules__process_module_interface_general_14_p_0(
  MR_Word TypeInfo_for_MS_271,
  MR_Word Globals_15,
  MR_Word ProcessInterfaceKind_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word NewIntSection_19,
  MR_Word NewImpSection_20,
  MR_Word SectionAppend_21,
  MR_Word * IntAvails_22,
  MR_Word * ImpAvails_23,
  MR_Word * ItemBlocks_24,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_57,
  MR_Word * STATE_VARIABLE_ModuleAndImports_58);

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word NeedQual_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_18);

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
parse_tree__modules__check_imports_accessibility_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word ImportedModules_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6);

static void MR_CALL 
parse_tree__modules__record_includes_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_2,
  MR_Word * STATE_VARIABLE_InclMap_3);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6);

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6);

static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3);

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
parse_tree__modules__grab_maybe_qual_imported_modules_12_p_0(
  MR_String SourceFileName_13,
  MR_Word SourceFileModuleName_14,
  MR_Word WhichGrab_15,
  MR_Word RawCompUnit_16,
  MR_Word * SrcItemBlocks_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_35,
  MR_Word * STATE_VARIABLE_IntImported_36,
  MR_Word * STATE_VARIABLE_IntUsed_37,
  MR_Word * STATE_VARIABLE_ImpImported_38,
  MR_Word * STATE_VARIABLE_ImpUsed_39);

static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
  MR_String SourceFileName_13,
  MR_Word SourceFileModuleName_14,
  MR_Word ModuleName_15,
  MR_Word ModuleNameContext_16,
  MR_Word SrcItemBlocks0_17,
  MR_Word Specs_18,
  MR_Word PublicChildren_19,
  MR_Word NestedChildren_20,
  MR_Word FactDeps_21,
  MR_Word ForeignIncludeFiles_22,
  MR_Word MaybeTimestampMap_23,
  MR_Word * Module_24);

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
parse_tree__modules____Unify____which_grab_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__modules____Compare____which_grab_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[59][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[28][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[13][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[2][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][9];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[5][5];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[4][6];




static /* final */ const MR_Box parse_tree__modules_scalar_common_1[59][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[12])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported using both"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is inaccessible."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[12])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[12])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[20])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either there was no prior"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration to import module"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the interface for module"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not contain an"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[28][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[10]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[9]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_7[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__process_module_short_interface__ho26_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__process_module_short_interface__ho26_15_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__process_module_short_interface__ho26_15_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_7[2])),
    ((MR_Box) (parse_tree__modules__read_optimization_interfaces_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_7[3])),
    ((MR_Box) (parse_tree__modules__read_optimization_interfaces_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__process_module_short_interface__ho27_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__process_module_short_interface__ho27_15_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[3])),
    ((MR_Box) (parse_tree__modules__process_module_short_interface__ho27_15_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__process_module_long_interface__ho21_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__process_module_long_interface__ho21_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[3])),
    ((MR_Box) (parse_tree__modules__process_module_long_interface__ho21_16_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__process_module_private_interface__ho20_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__process_module_private_interface__ho20_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[3])),
    ((MR_Box) (parse_tree__modules__process_module_private_interface__ho20_14_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_7[4])),
    ((MR_Box) (parse_tree__modules__grab_opt_files_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_7[2])),
    ((MR_Box) (parse_tree__modules__read_trans_opt_files_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[13][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0 = {
  (MR_String) "import_or_use_context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____import_or_use_context_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____import_or_use_context_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "import_or_use_context",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_int_section_maker_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____int_section_maker_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____int_section_maker_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "int_section_maker",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_import_or_use_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_import_or_use_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_import_or_use_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_inclusion_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_inclusion_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_inclusion_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____opt_file_type_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____opt_file_type_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "opt_file_type",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0 = {
  (MR_String) "pik_private",
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

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1 = {
  (MR_String) "pik_short",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_2 = {
  (MR_String) "pik_long",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__modules__parse_tree__modules__field_types_process_interface_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_process_interface_kind_0_2
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_process_interface_kind_0[3] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_2,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_0,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_process_interface_kind_0_1
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_process_interface_kind_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_process_interface_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____process_interface_kind_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____process_interface_kind_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "process_interface_kind",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_process_interface_kind_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_process_interface_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_process_interface_kind_0
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_section_appender_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____section_appender_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____section_appender_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "section_appender",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_section_visibility_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____section_visibility_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____section_visibility_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "section_visibility",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_which_grab_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &parse_tree__modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_0 = {
  (MR_String) "grab_imported",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__modules__parse_tree__modules__field_types_which_grab_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_1 = {
  (MR_String) "grab_unqual_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_which_grab_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_1
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_which_grab_0_1[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_0
};

static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_which_grab_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_which_grab_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_which_grab_0_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_which_grab_0[2] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_0,
  &parse_tree__modules__parse_tree__modules__du_functor_desc_which_grab_0_1
};

static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_which_grab_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_which_grab_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____which_grab_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____which_grab_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "which_grab",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_which_grab_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_which_grab_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_which_grab_0
};

static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__844__1_2_p_0(
  MR_Word FirstAncestor_27,
  MR_Word ModuleName_29)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstAncestor_27, ModuleName_29);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____which_grab_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[11], &Var_8, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_5)));
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_7)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_grab_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        TypeInfo_11_11 = (MR_Word) &parse_tree__modules_scalar_common_1[11];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &parse_tree__modules_scalar_common_1[4];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
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

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
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

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
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
    MR_Integer CastX_23 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_35 = (MR_Integer) Var_30;
                  MR_Integer Var_36 = (MR_Integer) ArgY1_9;

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_35, Var_36);
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
            MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_22;
                  MR_Integer Var_31 = (MR_Integer) Var_29;
                  MR_Integer Var_32 = (MR_Integer) ArgY1_19;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, Var_31, Var_32);
                  succeeded = (Var_22 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_22;
                  else
                  {
                    MR_Integer Var_33 = (MR_Integer) Var_28;
                    MR_Integer Var_34 = (MR_Integer) ArgY2_21;

                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_33, Var_34);
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
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
      }
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
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
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_20;

    parse_tree__modules__report_inaccessible_module_error_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclMap_8,
  MR_Word ImportUseMap_9,
  MR_Word ImportedModule_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ImportedModule_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ParentModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ImportedModule_10, (MR_Integer) 0)));
      MR_String SubModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ImportedModule_10, (MR_Integer) 1)));
      MR_Word _ImportedInclContexts_14;
      MR_Box conv0__ImportedInclContexts_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], InclMap_8, ((MR_Box) (ImportedModule_10)), &conv0__ImportedInclContexts_14);
      if (succeeded)
      {
        _ImportedInclContexts_14 = ((MR_Word) conv0__ImportedInclContexts_14);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      else
      {
        MR_Word ImportsUses_15;
        MR_Word HeadIU_16;
        MR_Word TailIUs_17;
        MR_Word STATE_VARIABLE_Specs_21_21;
        MR_Word Var_22;
        MR_Box conv1_ImportsUses_15;
        MR_Box conv3_STATE_VARIABLE_Specs_20;

        mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ImportUseMap_9, ((MR_Box) (ImportedModule_10)), &conv1_ImportsUses_15);
        ImportsUses_15 = ((MR_Word) conv1_ImportsUses_15);
        HeadIU_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImportsUses_15, (MR_Integer) 0)));
        TailIUs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImportsUses_15, (MR_Integer) 1)));
        parse_tree__modules__report_inaccessible_module_error_6_p_0(ModuleName_7, ParentModule_12, SubModule_13, HeadIU_16, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_21_21);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleName_7));
          MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (ParentModule_12));
          MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (SubModule_13));
        }
        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[6], Var_22, TailIUs_17, ((MR_Box) (STATE_VARIABLE_Specs_21_21)), &conv3_STATE_VARIABLE_Specs_20);
        *STATE_VARIABLE_Specs_20 = ((MR_Word) conv3_STATE_VARIABLE_Specs_20);
      }
    }
    else
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
}

static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ParentModule_8,
  MR_String SubModule_9,
  MR_Word ImportOrUseContext_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word ImportOrUse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImportOrUseContext_10, (MR_Integer) 0)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImportOrUseContext_10, (MR_Integer) 1)));
    MR_String DeclName_14;
    MR_Word MainPieces_15;
    MR_Word VerbosePieces_16;
    MR_Word Msg_17;
    MR_Word Spec_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_101;

    switch (ImportOrUse_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DeclName_14 = (MR_String) "import_module";
        break;
      case (MR_Integer) 1:
        DeclName_14 = (MR_String) "use_module";
        break;
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (DeclName_14));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ParentModule_8));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (SubModule_9));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[32])));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[46])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ParentModule_8));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (SubModule_9));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[34])));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[58])));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[57])));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[55])));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      VerbosePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), VerbosePieces_16, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (MainPieces_15));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_96, 1) = ((MR_Box) (VerbosePieces_16));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Msg_17));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_101));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
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
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
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
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_55;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (AncestorName_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[41])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      MainPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), MainPieces_10, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (MainPieces_10));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[43])));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ModuleName_5));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Pieces_8));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_9, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_9, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Msg_9));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
      MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
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

    parse_tree__modules__warn_import_for_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_16);
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

    parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(RawItemBlocks_7, AncestorModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &AvailContexts_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (AncestorModuleName_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[6], Var_14, AvailContexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv1_STATE_VARIABLE_Specs_12);
    *STATE_VARIABLE_Specs_12 = ((MR_Word) conv1_STATE_VARIABLE_Specs_12);
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
    MR_Word TypeInfo_35_35;
    MR_Word Verbose_13;
    MR_Word OptItemBlocksCord_14;
    MR_Word OptSpecs_15;
    MR_Word OptItemBlocks_16;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Module_29_29;
    MR_Word STATE_VARIABLE_Module_30_30;
    MR_Word Var_31;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 58, &Verbose_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% Reading .trans_opt files..\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_13);
    TypeInfo_35_35 = (MR_Word) &parse_tree__modules_scalar_common_1[3];
    Var_25 = mercury__cord__empty_0_f_0(TypeInfo_35_35);
    parse_tree__modules__read_trans_opt_files_10_p_0(Globals_8, TransOptDeps_9, Var_25, &OptItemBlocksCord_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &OptSpecs_15, (MR_Integer) 0, FoundError_11);
    OptItemBlocks_16 = mercury__cord__list_1_f_0(TypeInfo_35_35, OptItemBlocksCord_14);
    parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(OptItemBlocks_16, STATE_VARIABLE_Module_0_17, &STATE_VARIABLE_Module_29_29);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(OptSpecs_15, STATE_VARIABLE_Module_29_29, &STATE_VARIABLE_Module_30_30);
    Var_31 = mercury__set__init_0_f_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
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

    conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) wrapper_arg_1));
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Error_8 = STATE_VARIABLE_Error_0_7;
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_OptItemBlocks_4 = STATE_VARIABLE_OptItemBlocks_0_3;
    }
    else
    {
      MR_Word Import_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Imports_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word VeryVerbose_31;
      MR_String ImportString_32;
      MR_String FileName_33;
      MR_Word ParseTreeOpt_34;
      MR_Word OptSpecs_35;
      MR_Word OptError_36;
      MR_Word OptModuleName_37;
      MR_Word OptContext_39;
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
      MR_Word _OptFileKind_38;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OptItemBlocks_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_7;

      libs__globals__lookup_bool_option_3_p_0(Globals_1, (MR_Integer) 59, &VeryVerbose_31);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_31, Globals_1, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_54_54);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) "% Reading transitive optimization interface for module");
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) " \140");
      ImportString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Import_25);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, ImportString_32);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) "\'... ");
      libs__file_util__maybe_flush_output_3_p_0(VeryVerbose_31);
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_1, (MR_String) ".trans_opt", Import_25, &FileName_33);
      parse_tree__parse_module__actually_read_module_opt_10_p_0((MR_Integer) 1, Globals_1, FileName_33, Import_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ParseTreeOpt_34, &OptSpecs_35, &OptError_36);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_31, (MR_String) " done.\n");
      STATE_VARIABLE_Specs_71_71 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, OptSpecs_35, STATE_VARIABLE_Specs_54_54);
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 1, FileName_33, OptSpecs_35, OptError_36, STATE_VARIABLE_Specs_71_71, &STATE_VARIABLE_Specs_73_73, STATE_VARIABLE_Error_0_7, &STATE_VARIABLE_Error_74_74);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_31, Globals_1, STATE_VARIABLE_Specs_73_73, &STATE_VARIABLE_Specs_75_75);
      OptModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 0)));
      _OptFileKind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 1)));
      OptContext_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 2)));
      OptUses_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 3)));
      OptItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_34, (MR_Integer) 4)));
      {
        OptSection_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptSection_42, 0) = ((MR_Box) (OptModuleName_37));
        MR_hl_field(MR_mktag(0), OptSection_42, 1) = ((MR_Box) ((MR_Integer) 1));
      }
      OptAvails_43 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &parse_tree__modules_scalar_common_2[27], OptUses_40);
      {
        OptItemBlock_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 0) = ((MR_Box) (OptSection_42));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 1) = ((MR_Box) (OptContext_39));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 3) = ((MR_Box) (OptAvails_43));
        MR_hl_field(MR_mktag(0), OptItemBlock_44, 4) = ((MR_Box) (OptItems_41));
      }
      STATE_VARIABLE_OptItemBlocks_80_80 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[3], STATE_VARIABLE_OptItemBlocks_0_3, ((MR_Box) (OptItemBlock_44)));
      // direct tailcall eliminated
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

    conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0(
  MR_Word Globals_7,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_48,
  MR_Word * STATE_VARIABLE_ModuleAndImports_49,
  MR_Word * FoundError_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_221_221 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word TypeInfo_222_222 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    MR_Word TypeInfo_223_223;
    MR_Word TypeCtorInfo_240_240;
    MR_Word ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 2)));
    MR_Word Ancestors0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 4)));
    MR_Word IntDepsMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 5)));
    MR_Word ImpDepsMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 6)));
    MR_Word IntDeps0_15;
    MR_Word ImpDeps0_16;
    MR_Word OptFiles_17;
    MR_Word Transitive_18;
    MR_Word ModulesProcessed_19;
    MR_Word OptItemBlocksCord_20;
    MR_Word OptSpecs_21;
    MR_Word OptError_22;
    MR_Word OptItemBlocks_23;
    MR_Word UnusedArgs_24;
    MR_Word StructureReuse_25;
    MR_Word UA_SR_Error_28;
    MR_Word HaveReadModuleMapInt_31;
    MR_Word OptFileAncestors_32;
    MR_Word Int0Files_33;
    MR_Word AncestorImports1_34;
    MR_Word AncestorImports2_35;
    MR_Word NewImportDepsMap0_36;
    MR_Word NewUseDepsMap0_37;
    MR_Word NewImplicitImportDepsMap0_38;
    MR_Word NewImplicitUseDepsMap0_39;
    MR_Word NewUseDeps0_40;
    MR_Word NewImportDeps0_41;
    MR_Word NewImplicitImportDeps0_42;
    MR_Word NewImplicitUseDeps0_43;
    MR_Word NewDeps_44;
    MR_Word NewIndirectDeps_45;
    MR_Word NewImplIndirectDeps_46;
    MR_Word ModuleErrors_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_ModuleAndImports_64_64;
    MR_Word STATE_VARIABLE_ModuleAndImports_65_65;
    MR_Word STATE_VARIABLE_ModuleAndImports_77_77;
    MR_Word Var_78;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_ModuleAndImports_86_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_ModuleAndImports_107_107;
    MR_Word Var_110;
    MR_String Var_117 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 0)));
    MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 1)));
    MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 3)));
    MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 7)));
    MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 8)));
    MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 9)));
    MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 10)));
    MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 11)));
    MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 12)));
    MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 13)));
    MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 14)));
    MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 15)));
    MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 16)));
    MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 17)));
    MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 18)));
    MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 19)));
    MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 20)));
    MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 21)));
    MR_Word Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 22)));
    MR_Word Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 23)));
    MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 24)));
    MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 25)));
    MR_String Var_142 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_48, (MR_Integer) 26)));

    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_221_221, TypeInfo_222_222, IntDepsMap0_13);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_221_221, Var_52, &IntDeps0_15);
    Var_53 = mercury__map__keys_1_f_0(TypeCtorInfo_221_221, TypeInfo_222_222, ImpDepsMap0_14);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_221_221, Var_53, &ImpDeps0_16);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ImpDeps0_16));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntDeps0_15));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Ancestors0_12));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    OptFiles_17 = mercury__set__union_list_1_f_0(TypeCtorInfo_221_221, Var_54);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 335, &Transitive_18);
    mercury__set__insert_3_p_0(TypeCtorInfo_221_221, ((MR_Box) (ModuleName_11)), OptFiles_17, &ModulesProcessed_19);
    Var_59 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_221_221, OptFiles_17);
    TypeInfo_223_223 = (MR_Word) &parse_tree__modules_scalar_common_1[3];
    Var_60 = mercury__cord__empty_0_f_0(TypeInfo_223_223);
    parse_tree__modules__read_optimization_interfaces_12_p_0(Globals_7, Transitive_18, Var_59, ModulesProcessed_19, Var_60, &OptItemBlocksCord_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &OptSpecs_21, (MR_Integer) 0, &OptError_22);
    OptItemBlocks_23 = mercury__cord__list_1_f_0(TypeInfo_223_223, OptItemBlocksCord_20);
    parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(OptItemBlocks_23, STATE_VARIABLE_ModuleAndImports_0_48, &STATE_VARIABLE_ModuleAndImports_64_64);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(OptSpecs_21, STATE_VARIABLE_ModuleAndImports_64_64, &STATE_VARIABLE_ModuleAndImports_65_65);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 361, &UnusedArgs_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 419, &StructureReuse_25);
    succeeded = (UnusedArgs_24 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (StructureReuse_25 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word LocalItemBlocksCord_26;
      MR_Word LocalSpecs_27;
      MR_Word LocalItemBlocks_29;
      MR_Word FilteredItemBlocks_30;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word STATE_VARIABLE_ModuleAndImports_76_76;

      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_70 = mercury__set__init_0_f_0(TypeCtorInfo_221_221);
      Var_71 = mercury__cord__empty_0_f_0(TypeInfo_223_223);
      parse_tree__modules__read_optimization_interfaces_12_p_0(Globals_7, (MR_Integer) 0, Var_69, Var_70, Var_71, &LocalItemBlocksCord_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &LocalSpecs_27, (MR_Integer) 0, &UA_SR_Error_28);
      LocalItemBlocks_29 = mercury__cord__list_1_f_0(TypeInfo_223_223, LocalItemBlocksCord_26);
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(UnusedArgs_24, StructureReuse_25, LocalItemBlocks_29, &FilteredItemBlocks_30);
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(FilteredItemBlocks_30, STATE_VARIABLE_ModuleAndImports_65_65, &STATE_VARIABLE_ModuleAndImports_76_76);
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(LocalSpecs_27, STATE_VARIABLE_ModuleAndImports_76_76, &STATE_VARIABLE_ModuleAndImports_77_77);
    }
    else
    {
      UA_SR_Error_28 = (MR_Integer) 0;
      STATE_VARIABLE_ModuleAndImports_77_77 = STATE_VARIABLE_ModuleAndImports_65_65;
    }
    mercury__map__init_1_p_0((MR_Word) &parse_tree__modules_scalar_common_1[1], (MR_Word) &parse_tree__modules_scalar_common_1[2], &HaveReadModuleMapInt_31);
    Var_78 = mercury__set__map_2_f_0(TypeCtorInfo_221_221, (MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_2[26], OptFiles_17);
    OptFileAncestors_32 = mercury__set__power_union_1_f_0(TypeCtorInfo_221_221, Var_78);
    Int0Files_33 = mercury__set__delete_2_f_0(TypeCtorInfo_221_221, OptFileAncestors_32, ((MR_Box) (ModuleName_11)));
    Var_84 = mercury__set__init_0_f_0(TypeCtorInfo_221_221);
    Var_85 = mercury__set__init_0_f_0(TypeCtorInfo_221_221);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0(Globals_7, HaveReadModuleMapInt_31, Int0Files_33, Var_84, &AncestorImports1_34, Var_85, &AncestorImports2_35, STATE_VARIABLE_ModuleAndImports_77_77, &STATE_VARIABLE_ModuleAndImports_86_86);
    TypeCtorInfo_240_240 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0;
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(TypeCtorInfo_240_240, OptItemBlocks_23, &NewImportDepsMap0_36, &NewUseDepsMap0_37);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(TypeCtorInfo_240_240, Globals_7, OptItemBlocks_23, &NewImplicitImportDepsMap0_38, &NewImplicitUseDepsMap0_39);
    Var_88 = mercury__map__keys_1_f_0(TypeCtorInfo_221_221, TypeInfo_222_222, NewUseDepsMap0_37);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_221_221, Var_88, &NewUseDeps0_40);
    Var_89 = mercury__map__keys_1_f_0(TypeCtorInfo_221_221, TypeInfo_222_222, NewImportDepsMap0_36);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_221_221, Var_89, &NewImportDeps0_41);
    Var_90 = mercury__map__keys_1_f_0(TypeCtorInfo_221_221, TypeInfo_222_222, NewImplicitImportDepsMap0_38);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_221_221, Var_90, &NewImplicitImportDeps0_42);
    Var_91 = mercury__map__keys_1_f_0(TypeCtorInfo_221_221, TypeInfo_222_222, NewImplicitUseDepsMap0_39);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_221_221, Var_91, &NewImplicitUseDeps0_43);
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (AncestorImports2_35));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (AncestorImports1_34));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (NewImplicitUseDeps0_43));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (NewImplicitImportDeps0_42));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (NewUseDeps0_40));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (NewImportDeps0_41));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    NewDeps_44 = mercury__set__union_list_1_f_0(TypeCtorInfo_221_221, Var_92);
    Var_105 = mercury__set__init_0_f_0(TypeCtorInfo_221_221);
    Var_106 = mercury__set__init_0_f_0(TypeCtorInfo_221_221);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_51_93_95_48_17_p_0(Globals_7, HaveReadModuleMapInt_31, (MR_Integer) 0, NewDeps_44, (MR_Integer) 3, Var_105, &NewIndirectDeps_45, Var_106, &NewImplIndirectDeps_46, STATE_VARIABLE_ModuleAndImports_86_86, &STATE_VARIABLE_ModuleAndImports_107_107);
    Var_110 = mercury__set__union_2_f_0(TypeCtorInfo_221_221, NewIndirectDeps_45, NewImplIndirectDeps_46);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_51_93_95_48_12_p_0(Globals_7, HaveReadModuleMapInt_31, Var_110, (MR_Integer) 2, STATE_VARIABLE_ModuleAndImports_107_107, STATE_VARIABLE_ModuleAndImports_49);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(*STATE_VARIABLE_ModuleAndImports_49, &ModuleErrors_47);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, ModuleErrors_47);
    if (!(succeeded))
    {
      succeeded = (OptError_22 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UA_SR_Error_28 == (MR_Integer) 1);
    }
    if (succeeded)
      *FoundError_9 = (MR_Integer) 1;
    else
      *FoundError_9 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__844__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Ancestors_19,
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
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstAncestor_27, Ancestors_19, &LaterAncestors_28);
    if (succeeded)
    {
      FirstAncestor_27 = ((MR_Word) conv0_FirstAncestor_27);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 2)));
      MR_Word ModAncestors0_30;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_DirectImports_51_51;
      MR_Word STATE_VARIABLE_DirectUses_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_String Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 0)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 1)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 3)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 4)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 5)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 6)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 7)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 8)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 9)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 10)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 11)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 12)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 13)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 14)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 15)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 16)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 17)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 18)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 19)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 20)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 21)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 22)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 23)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 24)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 25)));
      MR_String Var_84 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 26)));
      MR_String Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_String Var_110;
      MR_Word next_value_of_Ancestors_19;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_31;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_35;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_51_93_95_48_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (FirstAncestor_27));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ModuleName_29));
      }
      mercury__require__expect_not_4_p_0(Var_39, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/15", (MR_String) "module is its own ancestor\?");
      Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 0)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 1)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 2)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 3)));
      ModAncestors0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 4)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 5)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 6)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 7)));
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 8)));
      Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 9)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 10)));
      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 11)));
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 12)));
      Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 13)));
      Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 14)));
      Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 15)));
      Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 16)));
      Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 17)));
      Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 18)));
      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 19)));
      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 20)));
      Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 21)));
      Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 22)));
      Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 23)));
      Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 24)));
      Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 25)));
      Var_110 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 26)));
      succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstAncestor_27)), ModAncestors0_30);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_35;
        STATE_VARIABLE_DirectUses_52_52 = STATE_VARIABLE_DirectUses_0_33;
        STATE_VARIABLE_DirectImports_51_51 = STATE_VARIABLE_DirectImports_0_31;
      }
      else
        parse_tree__modules__process_module_private_interface__ho20_14_p_0(Globals_16, HaveReadModuleMapInt_17, FirstAncestor_27, STATE_VARIABLE_DirectImports_0_31, &STATE_VARIABLE_DirectImports_51_51, STATE_VARIABLE_DirectUses_0_33, &STATE_VARIABLE_DirectUses_52_52, STATE_VARIABLE_ModuleAndImports_0_35, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      next_value_of_Ancestors_19 = LaterAncestors_28;
      next_value_of_STATE_VARIABLE_DirectImports_0_31 = STATE_VARIABLE_DirectImports_51_51;
      next_value_of_STATE_VARIABLE_DirectUses_0_33 = STATE_VARIABLE_DirectUses_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_35 = STATE_VARIABLE_ModuleAndImports_53_53;
      Ancestors_19 = next_value_of_Ancestors_19;
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
parse_tree__modules__process_module_private_interface__ho20_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_private_interface__ho20_14_p_0(
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
    MR_Word TypeInfo_for_MS_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;
    MR_Word TypeCtorInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word ItemBlocks_28;
    MR_Word AncDirectImportsMap_29;
    MR_Word AncDirectUsesMap_30;
    MR_Word AncDirectImports_31;
    MR_Word AncDirectUses_32;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word _IntAvails_26;
    MR_Word _ImpAvails_27;

    parse_tree__modules__process_module_interface_general_14_p_0(TypeInfo_for_MS_47, Globals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), HaveReadModuleMapInt_16, Module_17, (MR_Word) &parse_tree__modules_scalar_common_2[23], (MR_Word) &parse_tree__modules_scalar_common_2[24], (MR_Word) &parse_tree__modules_scalar_common_2[25], &_IntAvails_26, &_ImpAvails_27, &ItemBlocks_28, STATE_VARIABLE_ModuleAndImports_0_37, STATE_VARIABLE_ModuleAndImports_38);
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(TypeInfo_for_MS_47, ItemBlocks_28, &AncDirectImportsMap_29, &AncDirectUsesMap_30);
    TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_49_49 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_43 = mercury__map__keys_1_f_0(TypeCtorInfo_48_48, TypeInfo_49_49, AncDirectImportsMap_29);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_48_48, Var_43, &AncDirectImports_31);
    Var_44 = mercury__map__keys_1_f_0(TypeCtorInfo_48_48, TypeInfo_49_49, AncDirectUsesMap_30);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_48_48, Var_44, &AncDirectUses_32);
    mercury__set__union_3_p_0(TypeCtorInfo_48_48, AncDirectImports_31, STATE_VARIABLE_DirectImports_0_33, STATE_VARIABLE_DirectImports_34);
    mercury__set__union_3_p_0(TypeCtorInfo_48_48, AncDirectUses_32, STATE_VARIABLE_DirectUses_0_35, STATE_VARIABLE_DirectUses_36);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_51_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_31;
    MR_Word LaterModules_32;
    MR_Box conv0_FirstModule_31;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_31, Modules_22, &LaterModules_32);
    if (succeeded)
    {
      FirstModule_31 = ((MR_Word) conv0_FirstModule_31);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_IndirectImports_53_53;
      MR_Word STATE_VARIABLE_ImpIndirectImports_54_54;
      MR_Word STATE_VARIABLE_ModuleAndImports_55_55;
      MR_String Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
      MR_String Var_86 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
      MR_Word next_value_of_Modules_22;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_31, ModuleName_33);
      if (!(succeeded))
      {
        {
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
          MR_String Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
          MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
          MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
          MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
          MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
          MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
          MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
          MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
          MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
          MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
          MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
          MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
          MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
          MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
          MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
          MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
          MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
          MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
          MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
          MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
          MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
          MR_String Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));

          succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_31)), Var_46);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_String Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_138 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_34;
            MR_Box conv1_Var_34;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_45, ((MR_Box) (FirstModule_31)), &conv1_Var_34);
            if (succeeded)
            {
              Var_34 = ((MR_Word) conv1_Var_34);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_String Var_139 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_164 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_35;
            MR_Box conv2_Var_35;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_44, ((MR_Box) (FirstModule_31)), &conv2_Var_35);
            if (succeeded)
            {
              Var_35 = ((MR_Word) conv2_Var_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_55_55 = STATE_VARIABLE_ModuleAndImports_0_40;
        STATE_VARIABLE_ImpIndirectImports_54_54 = STATE_VARIABLE_ImpIndirectImports_0_38;
        STATE_VARIABLE_IndirectImports_53_53 = STATE_VARIABLE_IndirectImports_0_36;
      }
      else
        parse_tree__modules__process_module_long_interface__ho21_16_p_0(Globals_18, HaveReadModuleMapInt_19, NeedQual_21, FirstModule_31, IntFileKind_23, STATE_VARIABLE_IndirectImports_0_36, &STATE_VARIABLE_IndirectImports_53_53, STATE_VARIABLE_ImpIndirectImports_0_38, &STATE_VARIABLE_ImpIndirectImports_54_54, STATE_VARIABLE_ModuleAndImports_0_40, &STATE_VARIABLE_ModuleAndImports_55_55);
      // direct tailcall eliminated
      next_value_of_Modules_22 = LaterModules_32;
      next_value_of_STATE_VARIABLE_IndirectImports_0_36 = STATE_VARIABLE_IndirectImports_53_53;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38 = STATE_VARIABLE_ImpIndirectImports_54_54;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_40 = STATE_VARIABLE_ModuleAndImports_55_55;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_IndirectImports_0_36 = next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      STATE_VARIABLE_ImpIndirectImports_0_38 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      STATE_VARIABLE_ModuleAndImports_0_40 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_41 = STATE_VARIABLE_ModuleAndImports_0_40;
      *STATE_VARIABLE_ImpIndirectImports_39 = STATE_VARIABLE_ImpIndirectImports_0_38;
      *STATE_VARIABLE_IndirectImports_37 = STATE_VARIABLE_IndirectImports_0_36;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_long_interface__ho21_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46)
{
  {
    MR_Word TypeCtorInfo_66_66;
    MR_Word TypeInfo_67_67;
    MR_Word ProcessInterfaceKind_29;
    MR_Word IntAvails_30;
    MR_Word ImpAvails_31;
    MR_Word IntImportsMap_33;
    MR_Word IntUsesMap_34;
    MR_Word ImpImportsMap_35;
    MR_Word ImpUsesMap_36;
    MR_Word IntImports_37;
    MR_Word IntUses_38;
    MR_Word ImpImports_39;
    MR_Word ImpUses_40;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word _ItemBlocks_32;

    {
      ProcessInterfaceKind_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 0) = ((MR_Box) (IntFileKind_21));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 1) = ((MR_Box) (NeedQual_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, Globals_17, ProcessInterfaceKind_29, HaveReadModuleMapInt_18, Module_20, (MR_Word) &parse_tree__modules_scalar_common_2[20], (MR_Word) &parse_tree__modules_scalar_common_2[21], (MR_Word) &parse_tree__modules_scalar_common_2[22], &IntAvails_30, &ImpAvails_31, &_ItemBlocks_32, STATE_VARIABLE_ModuleAndImports_0_45, STATE_VARIABLE_ModuleAndImports_46);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_30, &IntImportsMap_33, &IntUsesMap_34);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_31, &ImpImportsMap_35, &ImpUsesMap_36);
    TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_67_67 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_51, &IntImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_52, &IntUses_38);
    Var_53 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpImportsMap_35);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_53, &ImpImports_39);
    Var_54 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpUsesMap_36);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_54, &ImpUses_40);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (IntUses_38));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IntImports_37));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    *STATE_VARIABLE_IntImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_56);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ImpUses_40));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ImpImports_39));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_43));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    *STATE_VARIABLE_ImpImportsUses_44 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_61);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word Modules_16,
  MR_Word IntFileKind_17,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_34_34 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ImpIndirectImports_23;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_ModuleAndImports_29_29;

    // setup for model_det tailcalls optimized into a loop
    Var_28 = mercury__set__init_0_f_0(TypeCtorInfo_34_34);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_50_50_95_95_91_51_93_95_48_14_p_0(Globals_13, HaveReadModuleMapInt_14, Modules_16, IntFileKind_17, Var_28, &ImpIndirectImports_23, STATE_VARIABLE_ModuleAndImports_0_24, &STATE_VARIABLE_ModuleAndImports_29_29);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_34_34, ImpIndirectImports_23);
    if (succeeded)
      *STATE_VARIABLE_ModuleAndImports_25 = STATE_VARIABLE_ModuleAndImports_29_29;
    else
    {
      MR_Word next_value_of_Modules_16 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_24 = STATE_VARIABLE_ModuleAndImports_29_29;

      // direct tailcall eliminated
      Modules_16 = next_value_of_Modules_16;
      STATE_VARIABLE_ModuleAndImports_0_24 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_50_50_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Modules_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word IndirectImports_26;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ImpIndirectImports_34_34;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;

    // setup for model_det tailcalls optimized into a loop
    Var_33 = mercury__set__init_0_f_0(TypeCtorInfo_41_41);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_50_51_95_95_91_51_93_95_48_16_p_0(Globals_15, HaveReadModuleMapInt_16, Modules_18, IntFileKind_19, Var_33, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_34_34, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_35_35);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_41_41, IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_30 = STATE_VARIABLE_ModuleAndImports_35_35;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_34_34;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_29 = STATE_VARIABLE_ModuleAndImports_35_35;

      // direct tailcall eliminated
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_ModuleAndImports_0_29 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_50_51_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word Modules_20,
  MR_Word IntFileKind_21,
  MR_Word STATE_VARIABLE_IndirectImports_0_33,
  MR_Word * STATE_VARIABLE_IndirectImports_34,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_35,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_29, Modules_20, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) conv0_FirstModule_29);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 7)));
      MR_Word Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 6)));
      MR_Word Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 5)));
      MR_Word Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 4)));
      MR_Word Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 2)));
      MR_String Var_198 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 26)));
      MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 25)));
      MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 24)));
      MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 23)));
      MR_Word Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 22)));
      MR_Word Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 21)));
      MR_Word Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 20)));
      MR_Word Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 19)));
      MR_Word Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 18)));
      MR_Word Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 17)));
      MR_Word Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 16)));
      MR_Word Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 15)));
      MR_Word Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 14)));
      MR_Word Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 13)));
      MR_Word Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 12)));
      MR_Word Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 11)));
      MR_Word Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 10)));
      MR_Word Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 9)));
      MR_Word Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 8)));
      MR_Word Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 3)));
      MR_Word Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 1)));
      MR_String Var_224 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 0)));
      MR_Word next_value_of_Modules_20;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_37;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, Var_222);
      if (!(succeeded))
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_29)), Var_220);
        if (!(succeeded))
        {
          {
            MR_Word Var_31;
            MR_Box conv1_Var_31;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_219, ((MR_Box) (FirstModule_29)), &conv1_Var_31);
            if (succeeded)
            {
              Var_31 = ((MR_Word) conv1_Var_31);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            {
              MR_Word Var_32;
              MR_Box conv2_Var_32;

              succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_218, ((MR_Box) (FirstModule_29)), &conv2_Var_32);
              if (succeeded)
              {
                Var_32 = ((MR_Word) conv2_Var_32);
                succeeded = MR_TRUE;
              }
            }
            if (!(succeeded))
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_29)), Var_217);
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_37;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_35;
        STATE_VARIABLE_IndirectImports_51_51 = STATE_VARIABLE_IndirectImports_0_33;
      }
      else
        parse_tree__modules__process_module_short_interface__ho27_15_p_0(Globals_17, HaveReadModuleMapInt_18, FirstModule_29, IntFileKind_21, STATE_VARIABLE_IndirectImports_0_33, &STATE_VARIABLE_IndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_35, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_37, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      next_value_of_Modules_20 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IndirectImports_0_33 = STATE_VARIABLE_IndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_37 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_IndirectImports_0_33 = next_value_of_STATE_VARIABLE_IndirectImports_0_33;
      STATE_VARIABLE_ImpIndirectImports_0_35 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35;
      STATE_VARIABLE_ModuleAndImports_0_37 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_37;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_38 = STATE_VARIABLE_ModuleAndImports_0_37;
      *STATE_VARIABLE_ImpIndirectImports_36 = STATE_VARIABLE_ImpIndirectImports_0_35;
      *STATE_VARIABLE_IndirectImports_34 = STATE_VARIABLE_IndirectImports_0_33;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho27_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_IntImportsUses_0_39,
  MR_Word * STATE_VARIABLE_IntImportsUses_40,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_41,
  MR_Word * STATE_VARIABLE_ImpImportsUses_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  {
    MR_Word TypeCtorInfo_64_64;
    MR_Word TypeInfo_65_65;
    MR_Word ProcessInterfaceKind_27;
    MR_Word IntAvails_28;
    MR_Word ImpAvails_29;
    MR_Word IntImportsMap_31;
    MR_Word IntUsesMap_32;
    MR_Word ImpImportsMap_33;
    MR_Word ImpUsesMap_34;
    MR_Word IntImports_35;
    MR_Word IntUses_36;
    MR_Word ImpImports_37;
    MR_Word ImpUses_38;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word _ItemBlocks_30;

    {
      ProcessInterfaceKind_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ProcessInterfaceKind_27, 0) = ((MR_Box) (IntFileKind_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, Globals_16, ProcessInterfaceKind_27, HaveReadModuleMapInt_17, Module_18, (MR_Word) &parse_tree__modules_scalar_common_2[17], (MR_Word) &parse_tree__modules_scalar_common_2[18], (MR_Word) &parse_tree__modules_scalar_common_2[19], &IntAvails_28, &ImpAvails_29, &_ItemBlocks_30, STATE_VARIABLE_ModuleAndImports_0_43, STATE_VARIABLE_ModuleAndImports_44);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_28, &IntImportsMap_31, &IntUsesMap_32);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_29, &ImpImportsMap_33, &ImpUsesMap_34);
    TypeCtorInfo_64_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_65_65 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_49 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, IntImportsMap_31);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_49, &IntImports_35);
    Var_50 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, IntUsesMap_32);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_50, &IntUses_36);
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, ImpImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_51, &ImpImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, ImpUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_52, &ImpUses_38);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (IntUses_36));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntImports_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_39));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    *STATE_VARIABLE_IntImportsUses_40 = mercury__set__union_list_1_f_0(TypeCtorInfo_64_64, Var_54);
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ImpUses_38));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpImports_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    *STATE_VARIABLE_ImpImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_64_64, Var_59);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word UnusedArgs_1,
  MR_Word StructureReuse_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
    MR_Word ItemBlock0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ItemBlocks0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ItemBlock_11;
    MR_Word ItemBlocks_12;
    MR_Box Section_13 = (MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 0));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 1)));
    MR_Word Items0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 4)));
    MR_Word ItemCord_20;
    MR_Word Items_21;
    MR_Word Var_22;
    MR_Word _Incls0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 2)));
    MR_Word _Imports0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock0_9, (MR_Integer) 3)));

    Var_22 = mercury__cord__init_0_f_0(TypeCtorInfo_24_24);
    parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(UnusedArgs_1, StructureReuse_2, Items0_17, Var_22, &ItemCord_20);
    Items_21 = mercury__cord__list_1_f_0(TypeCtorInfo_24_24, ItemCord_20);
    {
      ItemBlock_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemBlock_11, 0) = Section_13;
      MR_hl_field(MR_mktag(0), ItemBlock_11, 1) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), ItemBlock_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ItemBlock_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ItemBlock_11, 4) = ((MR_Box) (Items_21));
    }
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(UnusedArgs_1, StructureReuse_2, ItemBlocks0_10, &ItemBlocks_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ItemCord_5 = STATE_VARIABLE_ItemCord_0_4;
    else
    {
      MR_Word Item0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Items0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ItemCord_25_25;
      MR_Word ItemPragma0_16;
      MR_Word Pragma0_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Integer Var_20;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ItemCord_0_4;

      succeeded = ((((MR_tag((MR_Word) Item0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item0_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        ItemPragma0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item0_13, (MR_Integer) 1)));
        Pragma0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma0_16, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma0_16, (MR_Integer) 1)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma0_16, (MR_Integer) 2)));
        Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragma0_16, (MR_Integer) 3)));
        if (((((MR_tag((MR_Word) Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 28))))
          succeeded = (StructureReuse_2 == (MR_Integer) 1);
        else
        if (((((MR_tag((MR_Word) Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
          succeeded = (UnusedArgs_1 == (MR_Integer) 1);
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        STATE_VARIABLE_ItemCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, STATE_VARIABLE_ItemCord_0_4, ((MR_Box) (Item0_13)));
      }
      else
        STATE_VARIABLE_ItemCord_25_25 = STATE_VARIABLE_ItemCord_0_4;
      // direct tailcall eliminated
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

    conv1_HeadVar__2_2 = parse_tree__prog_item__avail_use_info_module_name_1_f_0(((MR_Word) wrapper_arg_1));
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

    conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) wrapper_arg_1));
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
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Error_10 = STATE_VARIABLE_Error_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word TypeCtorInfo_107_107;
      MR_Word ModuleToRead_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ModulesToRead_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word VeryVerbose_37;
      MR_String ModuleToReadString_38;
      MR_String FileName_39;
      MR_Word ParseTreeOpt_40;
      MR_Word OptSpecs_41;
      MR_Word OptError_42;
      MR_Word OptModuleName_43;
      MR_Word OptFileKind_44;
      MR_Word OptModuleContext_45;
      MR_Word OptUses_46;
      MR_Word OptItems_47;
      MR_Word OptSection_48;
      MR_Word OptAvails_49;
      MR_Word OptItemBlock_50;
      MR_Word ModulesProcessed_58;
      MR_Word NewDeps_59;
      MR_Word STATE_VARIABLE_Specs_69_69;
      MR_Word STATE_VARIABLE_OptItemBlocksCord_86_86;
      MR_Word STATE_VARIABLE_Specs_88_88;
      MR_Word STATE_VARIABLE_Error_89_89;
      MR_Word STATE_VARIABLE_Specs_90_90;
      MR_Word Var_102;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_ModulesProcessed0_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_9;

      libs__globals__lookup_bool_option_3_p_0(Globals_1, (MR_Integer) 59, &VeryVerbose_37);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_37, Globals_1, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_69_69);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) "% Reading optimization interface for module");
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) " \140");
      ModuleToReadString_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleToRead_30);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, ModuleToReadString_38);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) "\'...\n");
      libs__file_util__maybe_flush_output_3_p_0(VeryVerbose_37);
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_1, (MR_String) ".opt", ModuleToRead_30, &FileName_39);
      parse_tree__parse_module__actually_read_module_opt_10_p_0((MR_Integer) 0, Globals_1, FileName_39, ModuleToRead_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ParseTreeOpt_40, &OptSpecs_41, &OptError_42);
      OptModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 0)));
      OptFileKind_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 1)));
      OptModuleContext_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 2)));
      OptUses_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 3)));
      OptItems_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTreeOpt_40, (MR_Integer) 4)));
      {
        OptSection_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptSection_48, 0) = ((MR_Box) (OptModuleName_43));
        MR_hl_field(MR_mktag(0), OptSection_48, 1) = ((MR_Box) (OptFileKind_44));
      }
      TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0;
      OptAvails_49 = mercury__list__map_2_f_0(TypeCtorInfo_107_107, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &parse_tree__modules_scalar_common_2[15], OptUses_46);
      {
        OptItemBlock_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 0) = ((MR_Box) (OptSection_48));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 1) = ((MR_Box) (OptModuleContext_45));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 3) = ((MR_Box) (OptAvails_49));
        MR_hl_field(MR_mktag(0), OptItemBlock_50, 4) = ((MR_Box) (OptItems_47));
      }
      STATE_VARIABLE_OptItemBlocksCord_86_86 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[3], HeadVar__5_5, ((MR_Box) (OptItemBlock_50)));
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, FileName_39, OptSpecs_41, OptError_42, STATE_VARIABLE_Specs_69_69, &STATE_VARIABLE_Specs_88_88, STATE_VARIABLE_Error_0_9, &STATE_VARIABLE_Error_89_89);
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(VeryVerbose_37, Globals_1, STATE_VARIABLE_Specs_88_88, &STATE_VARIABLE_Specs_90_90);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_37, (MR_String) "% done.\n");
      switch (Transitive_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ModulesProcessed_58 = ModulesProcessed0_4;
            NewDeps_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_112_112 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word TypeInfo_115_115;
            MR_Word NewUseDeps0_51;
            MR_Word NewImplicitImportDepsMap0_52;
            MR_Word NewImplicitUseDepsMap0_53;
            MR_Word NewImplicitImportDeps0_54;
            MR_Word NewImplicitUseDeps0_55;
            MR_Word NewDepsSet0_56;
            MR_Word NewDepsSet_57;
            MR_Word Var_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_100;

            Var_94 = mercury__list__map_2_f_0(TypeCtorInfo_107_107, TypeCtorInfo_112_112, (MR_Word) &parse_tree__modules_scalar_common_2[16], OptUses_46);
            NewUseDeps0_51 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_112_112, Var_94);
            parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(Globals_1, OptItems_47, &NewImplicitImportDepsMap0_52, &NewImplicitUseDepsMap0_53);
            TypeInfo_115_115 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
            Var_96 = mercury__map__keys_1_f_0(TypeCtorInfo_112_112, TypeInfo_115_115, NewImplicitImportDepsMap0_52);
            mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_112_112, Var_96, &NewImplicitImportDeps0_54);
            Var_97 = mercury__map__keys_1_f_0(TypeCtorInfo_112_112, TypeInfo_115_115, NewImplicitUseDepsMap0_53);
            mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_112_112, Var_97, &NewImplicitUseDeps0_55);
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (NewImplicitUseDeps0_55));
              MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (NewImplicitImportDeps0_54));
              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (NewUseDeps0_51));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
            }
            NewDepsSet0_56 = mercury__set__union_list_1_f_0(TypeCtorInfo_112_112, Var_98);
            mercury__set__difference_3_p_0(TypeCtorInfo_112_112, NewDepsSet0_56, ModulesProcessed0_4, &NewDepsSet_57);
            mercury__set__union_3_p_0(TypeCtorInfo_112_112, ModulesProcessed0_4, NewDepsSet_57, &ModulesProcessed_58);
            mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_112_112, NewDepsSet_57, &NewDeps_59);
          }
          break;
      }
      Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, NewDeps_59, ModulesToRead_31);
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = Var_102;
      next_value_of_ModulesProcessed0_4 = ModulesProcessed_58;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_OptItemBlocksCord_86_86;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_90_90;
      next_value_of_STATE_VARIABLE_Error_0_9 = STATE_VARIABLE_Error_89_89;
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

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, ModuleErrors_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Error_25 = STATE_VARIABLE_Error_0_24;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
    else
    {
      succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, ModuleErrors_14, ((MR_Box) ((MR_Integer) 0)));
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
          Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Severity_18, 0) = ((MR_Box) (WarningOption_17));
          MR_hl_field(MR_mktag(1), Severity_18, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), Severity_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), Severity_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (FileName_12));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[34])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((WarningOption_17 | (((MR_Integer) 1 << (MR_Integer) 10)))));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), Msg_20, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Msg_20, 3) = ((MR_Box) (Pieces_19));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_20));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) (Severity_18));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
        }
        *STATE_VARIABLE_Error_25 = STATE_VARIABLE_Error_0_24;
      }
      else
      {
        *STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ModuleSpecs_13, STATE_VARIABLE_Specs_0_22);
        *STATE_VARIABLE_Error_25 = (MR_Integer) 1;
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_4;

    conv5_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    conv4_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    conv3_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    conv2_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word RawCompUnit_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_50)
{
  {
    MR_Word TypeCtorInfo_171_171;
    MR_Word TypeInfo_172_172;
    MR_Word IntImportedMap_22;
    MR_Word IntUsedMap_23;
    MR_Word ImpImportedMap_24;
    MR_Word ImpUsedMap_25;
    MR_Word ModuleName_26;
    MR_Word RawItemBlocks_28;
    MR_Word HaveReadModuleMapInt_29;
    MR_Word ImplicitIntImportedMap_30;
    MR_Word ImplicitIntUsedMap_31;
    MR_Word ImplicitIntImported_32;
    MR_Word ImplicitIntUsed_33;
    MR_Word Ancestors_34;
    MR_Word ParentImported_35;
    MR_Word ParentUsed_36;
    MR_Word AugCompUnit_45;
    MR_Word AllImportedOrUsed_48;
    MR_Word ImportAccessSpecs_49;
    MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_IntImported_56_56;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_IntUsed_58_58;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_ImpImported_60_60;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_ImpUsed_62_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_IntImported_65_65;
    MR_Word STATE_VARIABLE_IntUsed_66_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_ModuleAndImports_74_74;
    MR_Word STATE_VARIABLE_IntIndirectImported_78_78;
    MR_Word STATE_VARIABLE_ImpIndirectImported_79_79;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_IntIndirectImported_86_86;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_ModuleAndImports_88_88;
    MR_Word STATE_VARIABLE_IntIndirectImported_97_97;
    MR_Word Var_98;
    MR_Word STATE_VARIABLE_ModuleAndImports_99_99;
    MR_Word STATE_VARIABLE_ImpIndirectImported_108_108;
    MR_Word Var_109;
    MR_Word STATE_VARIABLE_ModuleAndImports_110_110;
    MR_Word STATE_VARIABLE_IntIndirectImported_119_119;
    MR_Word Var_120;
    MR_Word STATE_VARIABLE_ModuleAndImports_121_121;
    MR_Word Var_127;
    MR_Word STATE_VARIABLE_IntIndirectImported_130_130;
    MR_Word Var_131;
    MR_Word STATE_VARIABLE_ModuleAndImports_132_132;
    MR_Word Var_138;
    MR_Word STATE_VARIABLE_ImpIndirectImported_141_141;
    MR_Word Var_142;
    MR_Word STATE_VARIABLE_ModuleAndImports_143_143;
    MR_Word Var_151;
    MR_Word STATE_VARIABLE_ModuleAndImports_152_152;
    MR_Word Var_160;
    MR_Word STATE_VARIABLE_ModuleAndImports_161_161;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word _SrcItemBlocks_21;
    MR_Word _ModuleNameContext_27;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;

    parse_tree__modules__grab_maybe_qual_imported_modules_12_p_0(SourceFileName_9, SourceFileModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), RawCompUnit_11, &_SrcItemBlocks_21, &STATE_VARIABLE_ModuleAndImports_53_53, &IntImportedMap_22, &IntUsedMap_23, &ImpImportedMap_24, &ImpUsedMap_25);
    TypeCtorInfo_171_171 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_172_172 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_55 = mercury__map__keys_1_f_0(TypeCtorInfo_171_171, TypeInfo_172_172, IntImportedMap_22);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_171_171, Var_55, &STATE_VARIABLE_IntImported_56_56);
    Var_57 = mercury__map__keys_1_f_0(TypeCtorInfo_171_171, TypeInfo_172_172, IntUsedMap_23);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_171_171, Var_57, &STATE_VARIABLE_IntUsed_58_58);
    Var_59 = mercury__map__keys_1_f_0(TypeCtorInfo_171_171, TypeInfo_172_172, ImpImportedMap_24);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_171_171, Var_59, &STATE_VARIABLE_ImpImported_60_60);
    Var_61 = mercury__map__keys_1_f_0(TypeCtorInfo_171_171, TypeInfo_172_172, ImpUsedMap_25);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_171_171, Var_61, &STATE_VARIABLE_ImpUsed_62_62);
    ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_11, (MR_Integer) 0)));
    _ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_11, (MR_Integer) 1)));
    RawItemBlocks_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_11, (MR_Integer) 2)));
    mercury__map__init_1_p_0((MR_Word) &parse_tree__modules_scalar_common_1[1], (MR_Word) &parse_tree__modules_scalar_common_1[2], &HaveReadModuleMapInt_29);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, Globals_8, RawItemBlocks_28, &ImplicitIntImportedMap_30, &ImplicitIntUsedMap_31);
    Var_63 = mercury__map__keys_1_f_0(TypeCtorInfo_171_171, TypeInfo_172_172, ImplicitIntImportedMap_30);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_171_171, Var_63, &ImplicitIntImported_32);
    Var_64 = mercury__map__keys_1_f_0(TypeCtorInfo_171_171, TypeInfo_172_172, ImplicitIntUsedMap_31);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_171_171, Var_64, &ImplicitIntUsed_33);
    mercury__set__union_3_p_0(TypeCtorInfo_171_171, ImplicitIntImported_32, STATE_VARIABLE_IntImported_56_56, &STATE_VARIABLE_IntImported_65_65);
    mercury__set__union_3_p_0(TypeCtorInfo_171_171, ImplicitIntUsed_33, STATE_VARIABLE_IntUsed_58_58, &STATE_VARIABLE_IntUsed_66_66);
    Var_67 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_26);
    Ancestors_34 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_171_171, Var_67);
    Var_69 = (MR_Word) &parse_tree__modules_scalar_common_3[7];
    Var_72 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    Var_73 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(Globals_8, HaveReadModuleMapInt_29, Ancestors_34, Var_69, (MR_Word) &parse_tree__modules_scalar_common_3[8], Var_72, &ParentImported_35, Var_73, &ParentUsed_36, STATE_VARIABLE_ModuleAndImports_53_53, &STATE_VARIABLE_ModuleAndImports_74_74);
    mercury__set__init_1_p_0(TypeCtorInfo_171_171, &STATE_VARIABLE_IntIndirectImported_78_78);
    mercury__set__init_1_p_0(TypeCtorInfo_171_171, &STATE_VARIABLE_ImpIndirectImported_79_79);
    Var_83 = (MR_Word) &parse_tree__modules_scalar_common_3[9];
    Var_87 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Integer) 1, ParentImported_35, (MR_Integer) 1, Var_83, STATE_VARIABLE_IntIndirectImported_78_78, &STATE_VARIABLE_IntIndirectImported_86_86, Var_87, &Var_37, STATE_VARIABLE_ModuleAndImports_74_74, &STATE_VARIABLE_ModuleAndImports_88_88);
    Var_98 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Integer) 1, STATE_VARIABLE_IntImported_65_65, (MR_Integer) 1, Var_69, STATE_VARIABLE_IntIndirectImported_86_86, &STATE_VARIABLE_IntIndirectImported_97_97, Var_98, &Var_38, STATE_VARIABLE_ModuleAndImports_88_88, &STATE_VARIABLE_ModuleAndImports_99_99);
    Var_109 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Integer) 1, STATE_VARIABLE_ImpImported_60_60, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[10], STATE_VARIABLE_ImpIndirectImported_79_79, &STATE_VARIABLE_ImpIndirectImported_108_108, Var_109, &Var_39, STATE_VARIABLE_ModuleAndImports_99_99, &STATE_VARIABLE_ModuleAndImports_110_110);
    Var_120 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Integer) 1, ParentUsed_36, (MR_Integer) 1, Var_83, STATE_VARIABLE_IntIndirectImported_97_97, &STATE_VARIABLE_IntIndirectImported_119_119, Var_120, &Var_40, STATE_VARIABLE_ModuleAndImports_110_110, &STATE_VARIABLE_ModuleAndImports_121_121);
    Var_127 = (MR_Word) &parse_tree__modules_scalar_common_3[11];
    Var_131 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Integer) 0, STATE_VARIABLE_IntUsed_66_66, (MR_Integer) 1, Var_127, STATE_VARIABLE_IntIndirectImported_119_119, &STATE_VARIABLE_IntIndirectImported_130_130, Var_131, &Var_41, STATE_VARIABLE_ModuleAndImports_121_121, &STATE_VARIABLE_ModuleAndImports_132_132);
    Var_138 = (MR_Word) &parse_tree__modules_scalar_common_3[12];
    Var_142 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_8, HaveReadModuleMapInt_29, (MR_Integer) 0, STATE_VARIABLE_ImpUsed_62_62, (MR_Integer) 1, Var_138, STATE_VARIABLE_ImpIndirectImported_108_108, &STATE_VARIABLE_ImpIndirectImported_141_141, Var_142, &Var_42, STATE_VARIABLE_ModuleAndImports_132_132, &STATE_VARIABLE_ModuleAndImports_143_143);
    Var_151 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_8, HaveReadModuleMapInt_29, STATE_VARIABLE_IntIndirectImported_130_130, (MR_Integer) 1, Var_127, Var_151, &Var_43, STATE_VARIABLE_ModuleAndImports_143_143, &STATE_VARIABLE_ModuleAndImports_152_152);
    Var_160 = mercury__set__init_0_f_0(TypeCtorInfo_171_171);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_8, HaveReadModuleMapInt_29, STATE_VARIABLE_ImpIndirectImported_141_141, (MR_Integer) 1, Var_138, Var_160, &Var_44, STATE_VARIABLE_ModuleAndImports_152_152, &STATE_VARIABLE_ModuleAndImports_161_161);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(STATE_VARIABLE_ModuleAndImports_161_161, &AugCompUnit_45, &Var_46, &Var_47);
    {
      Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (STATE_VARIABLE_ImpUsed_62_62));
      MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (STATE_VARIABLE_ImpImported_60_60));
      MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_167));
    }
    {
      Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (STATE_VARIABLE_IntUsed_66_66));
      MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_166));
    }
    {
      Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (STATE_VARIABLE_IntImported_65_65));
      MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_165));
    }
    AllImportedOrUsed_48 = mercury__set__union_list_1_f_0(TypeCtorInfo_171_171, Var_164);
    parse_tree__modules__check_imports_accessibility_4_p_0(AugCompUnit_45, AllImportedOrUsed_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ImportAccessSpecs_49);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(ImportAccessSpecs_49, STATE_VARIABLE_ModuleAndImports_161_161, STATE_VARIABLE_ModuleAndImports_50);
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_4;

    conv5_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_and_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    conv4_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    conv3_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    conv2_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_Word SourceFileModuleName_13,
  MR_Word MaybeTimestamp_14,
  MR_Word NestedChildren_15,
  MR_Word RawCompUnit_16,
  MR_Word HaveReadModuleMaps_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_49)
{
  {
    MR_Word TypeCtorInfo_187_187;
    MR_Word TypeInfo_188_188;
    MR_Word WhichGrab_29;
    MR_Word SrcItemBlocks_30;
    MR_Word IntImportedMap_31;
    MR_Word IntUsedMap_32;
    MR_Word ImpImportedMap_33;
    MR_Word ImpUsedMap_34;
    MR_Word ModuleName_35;
    MR_Word ModuleNameContext_36;
    MR_Word RawItemBlocks_37;
    MR_Word HaveReadModuleMapInt_38;
    MR_Word Ancestors_39;
    MR_Word IntUsedImpImported_40;
    MR_Word ImplicitIntImportedMap_41;
    MR_Word ImplicitIntUsedMap_42;
    MR_Word ImplicitIntImported_43;
    MR_Word ImplicitIntUsed_44;
    MR_Word AugCompUnit_45;
    MR_Word AllImportedOrUsed_48;
    MR_Word STATE_VARIABLE_ModuleAndImports_52_52;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_IntImported_55_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_IntUsed_57_57;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_ImpImported_59_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_ImpUsed_61_61;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_Specs_64_64;
    MR_Word STATE_VARIABLE_Specs_65_65;
    MR_Word STATE_VARIABLE_Specs_66_66;
    MR_Word STATE_VARIABLE_Specs_67_67;
    MR_Word STATE_VARIABLE_IntImported_68_68;
    MR_Word STATE_VARIABLE_IntUsed_69_69;
    MR_Word STATE_VARIABLE_ImpImported_70_70;
    MR_Word STATE_VARIABLE_ImpUsed_71_71;
    MR_Word STATE_VARIABLE_Specs_72_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_IntImported_75_75;
    MR_Word STATE_VARIABLE_IntUsed_76_76;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_IntImported_81_81;
    MR_Word STATE_VARIABLE_IntUsed_82_82;
    MR_Word STATE_VARIABLE_ModuleAndImports_83_83;
    MR_Word STATE_VARIABLE_IntIndirectImported_87_87;
    MR_Word STATE_VARIABLE_ImpIndirectImported_88_88;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_89_89;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_90_90;
    MR_Word STATE_VARIABLE_IntIndirectImported_97_97;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_98_98;
    MR_Word STATE_VARIABLE_ModuleAndImports_99_99;
    MR_Word STATE_VARIABLE_ImpIndirectImported_108_108;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_109_109;
    MR_Word STATE_VARIABLE_ModuleAndImports_110_110;
    MR_Word Var_116;
    MR_Word STATE_VARIABLE_IntIndirectImported_119_119;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_120_120;
    MR_Word STATE_VARIABLE_ModuleAndImports_121_121;
    MR_Word Var_127;
    MR_Word STATE_VARIABLE_ImpIndirectImported_130_130;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_131_131;
    MR_Word STATE_VARIABLE_ModuleAndImports_132_132;
    MR_Word STATE_VARIABLE_IntIndirectImported_141_141;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_142_142;
    MR_Word STATE_VARIABLE_ModuleAndImports_143_143;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_151_151;
    MR_Word STATE_VARIABLE_ModuleAndImports_152_152;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_160_160;
    MR_Word STATE_VARIABLE_ModuleAndImports_161_161;
    MR_Word STATE_VARIABLE_ModuleAndImports_169_169;
    MR_Word STATE_VARIABLE_ModuleAndImports_176_176;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word STATE_VARIABLE_Specs_183_183;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      WhichGrab_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), WhichGrab_29, 0) = ((MR_Box) (MaybeTimestamp_14));
      MR_hl_field(MR_mktag(1), WhichGrab_29, 1) = ((MR_Box) (NestedChildren_15));
    }
    parse_tree__modules__grab_maybe_qual_imported_modules_12_p_0(SourceFileName_12, SourceFileModuleName_13, WhichGrab_29, RawCompUnit_16, &SrcItemBlocks_30, &STATE_VARIABLE_ModuleAndImports_52_52, &IntImportedMap_31, &IntUsedMap_32, &ImpImportedMap_33, &ImpUsedMap_34);
    TypeCtorInfo_187_187 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_188_188 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_54 = mercury__map__keys_1_f_0(TypeCtorInfo_187_187, TypeInfo_188_188, IntImportedMap_31);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_187_187, Var_54, &STATE_VARIABLE_IntImported_55_55);
    Var_56 = mercury__map__keys_1_f_0(TypeCtorInfo_187_187, TypeInfo_188_188, IntUsedMap_32);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_187_187, Var_56, &STATE_VARIABLE_IntUsed_57_57);
    Var_58 = mercury__map__keys_1_f_0(TypeCtorInfo_187_187, TypeInfo_188_188, ImpImportedMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_187_187, Var_58, &STATE_VARIABLE_ImpImported_59_59);
    Var_60 = mercury__map__keys_1_f_0(TypeCtorInfo_187_187, TypeInfo_188_188, ImpUsedMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_187_187, Var_60, &STATE_VARIABLE_ImpUsed_61_61);
    ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 0)));
    ModuleNameContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 1)));
    RawItemBlocks_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 2)));
    Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), HaveReadModuleMaps_17, (MR_Integer) 0)));
    HaveReadModuleMapInt_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HaveReadModuleMaps_17, (MR_Integer) 1)));
    Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), HaveReadModuleMaps_17, (MR_Integer) 2)));
    Var_62 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_35);
    Ancestors_39 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_187_187, Var_62);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_35, RawItemBlocks_37, Ancestors_39, STATE_VARIABLE_IntImported_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_Specs_64_64);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_35, RawItemBlocks_37, Ancestors_39, STATE_VARIABLE_IntUsed_57_57, STATE_VARIABLE_Specs_64_64, &STATE_VARIABLE_Specs_65_65);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_35, RawItemBlocks_37, Ancestors_39, STATE_VARIABLE_ImpImported_59_59, STATE_VARIABLE_Specs_65_65, &STATE_VARIABLE_Specs_66_66);
    parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0(ModuleName_35, RawItemBlocks_37, Ancestors_39, STATE_VARIABLE_ImpUsed_61_61, STATE_VARIABLE_Specs_66_66, &STATE_VARIABLE_Specs_67_67);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_13_p_0(ModuleNameContext_36, STATE_VARIABLE_IntImported_55_55, &STATE_VARIABLE_IntImported_68_68, STATE_VARIABLE_IntUsed_57_57, &STATE_VARIABLE_IntUsed_69_69, STATE_VARIABLE_ImpImported_59_59, &STATE_VARIABLE_ImpImported_70_70, STATE_VARIABLE_ImpUsed_61_61, &STATE_VARIABLE_ImpUsed_71_71, &IntUsedImpImported_40, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_72_72);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, Globals_11, SrcItemBlocks_30, &ImplicitIntImportedMap_41, &ImplicitIntUsedMap_42);
    Var_73 = mercury__map__keys_1_f_0(TypeCtorInfo_187_187, TypeInfo_188_188, ImplicitIntImportedMap_41);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_187_187, Var_73, &ImplicitIntImported_43);
    Var_74 = mercury__map__keys_1_f_0(TypeCtorInfo_187_187, TypeInfo_188_188, ImplicitIntUsedMap_42);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_187_187, Var_74, &ImplicitIntUsed_44);
    mercury__set__union_3_p_0(TypeCtorInfo_187_187, ImplicitIntImported_43, STATE_VARIABLE_IntImported_68_68, &STATE_VARIABLE_IntImported_75_75);
    mercury__set__union_3_p_0(TypeCtorInfo_187_187, ImplicitIntUsed_44, STATE_VARIABLE_IntUsed_69_69, &STATE_VARIABLE_IntUsed_76_76);
    Var_78 = (MR_Word) &parse_tree__modules_scalar_common_3[1];
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(Globals_11, HaveReadModuleMapInt_38, Ancestors_39, Var_78, (MR_Word) &parse_tree__modules_scalar_common_3[2], STATE_VARIABLE_IntImported_75_75, &STATE_VARIABLE_IntImported_81_81, STATE_VARIABLE_IntUsed_76_76, &STATE_VARIABLE_IntUsed_82_82, STATE_VARIABLE_ModuleAndImports_52_52, &STATE_VARIABLE_ModuleAndImports_83_83);
    mercury__set__init_1_p_0(TypeCtorInfo_187_187, &STATE_VARIABLE_IntIndirectImported_87_87);
    mercury__set__init_1_p_0(TypeCtorInfo_187_187, &STATE_VARIABLE_ImpIndirectImported_88_88);
    mercury__set__init_1_p_0(TypeCtorInfo_187_187, &STATE_VARIABLE_IntImpIndirectImported_89_89);
    mercury__set__init_1_p_0(TypeCtorInfo_187_187, &STATE_VARIABLE_ImpImpIndirectImported_90_90);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_11, HaveReadModuleMapInt_38, (MR_Integer) 1, STATE_VARIABLE_IntImported_81_81, (MR_Integer) 3, Var_78, STATE_VARIABLE_IntIndirectImported_87_87, &STATE_VARIABLE_IntIndirectImported_97_97, STATE_VARIABLE_IntImpIndirectImported_89_89, &STATE_VARIABLE_IntImpIndirectImported_98_98, STATE_VARIABLE_ModuleAndImports_83_83, &STATE_VARIABLE_ModuleAndImports_99_99);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_11, HaveReadModuleMapInt_38, (MR_Integer) 1, STATE_VARIABLE_ImpImported_70_70, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[3], STATE_VARIABLE_ImpIndirectImported_88_88, &STATE_VARIABLE_ImpIndirectImported_108_108, STATE_VARIABLE_ImpImpIndirectImported_90_90, &STATE_VARIABLE_ImpImpIndirectImported_109_109, STATE_VARIABLE_ModuleAndImports_99_99, &STATE_VARIABLE_ModuleAndImports_110_110);
    Var_116 = (MR_Word) &parse_tree__modules_scalar_common_3[4];
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_11, HaveReadModuleMapInt_38, (MR_Integer) 0, STATE_VARIABLE_IntUsed_82_82, (MR_Integer) 3, Var_116, STATE_VARIABLE_IntIndirectImported_97_97, &STATE_VARIABLE_IntIndirectImported_119_119, STATE_VARIABLE_IntImpIndirectImported_98_98, &STATE_VARIABLE_IntImpIndirectImported_120_120, STATE_VARIABLE_ModuleAndImports_110_110, &STATE_VARIABLE_ModuleAndImports_121_121);
    Var_127 = (MR_Word) &parse_tree__modules_scalar_common_3[5];
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_11, HaveReadModuleMapInt_38, (MR_Integer) 0, STATE_VARIABLE_ImpUsed_71_71, (MR_Integer) 3, Var_127, STATE_VARIABLE_ImpIndirectImported_108_108, &STATE_VARIABLE_ImpIndirectImported_130_130, STATE_VARIABLE_ImpImpIndirectImported_109_109, &STATE_VARIABLE_ImpImpIndirectImported_131_131, STATE_VARIABLE_ModuleAndImports_121_121, &STATE_VARIABLE_ModuleAndImports_132_132);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_17_p_0(Globals_11, HaveReadModuleMapInt_38, (MR_Integer) 1, IntUsedImpImported_40, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[6], STATE_VARIABLE_IntIndirectImported_119_119, &STATE_VARIABLE_IntIndirectImported_141_141, STATE_VARIABLE_IntImpIndirectImported_120_120, &STATE_VARIABLE_IntImpIndirectImported_142_142, STATE_VARIABLE_ModuleAndImports_132_132, &STATE_VARIABLE_ModuleAndImports_143_143);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_11, HaveReadModuleMapInt_38, STATE_VARIABLE_IntIndirectImported_141_141, (MR_Integer) 2, Var_116, STATE_VARIABLE_IntImpIndirectImported_142_142, &STATE_VARIABLE_IntImpIndirectImported_151_151, STATE_VARIABLE_ModuleAndImports_143_143, &STATE_VARIABLE_ModuleAndImports_152_152);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_14_p_0(Globals_11, HaveReadModuleMapInt_38, STATE_VARIABLE_ImpIndirectImported_130_130, (MR_Integer) 2, Var_127, STATE_VARIABLE_ImpImpIndirectImported_131_131, &STATE_VARIABLE_ImpImpIndirectImported_160_160, STATE_VARIABLE_ModuleAndImports_152_152, &STATE_VARIABLE_ModuleAndImports_161_161);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_50_95_95_91_51_93_95_48_12_p_0(Globals_11, HaveReadModuleMapInt_38, STATE_VARIABLE_IntImpIndirectImported_151_151, (MR_Integer) 2, STATE_VARIABLE_ModuleAndImports_161_161, &STATE_VARIABLE_ModuleAndImports_169_169);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_50_95_95_91_51_93_95_48_12_p_0(Globals_11, HaveReadModuleMapInt_38, STATE_VARIABLE_ImpImpIndirectImported_160_160, (MR_Integer) 2, STATE_VARIABLE_ModuleAndImports_169_169, &STATE_VARIABLE_ModuleAndImports_176_176);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(STATE_VARIABLE_ModuleAndImports_176_176, &AugCompUnit_45, &Var_46, &Var_47);
    {
      Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (STATE_VARIABLE_ImpUsed_71_71));
      MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (STATE_VARIABLE_ImpImported_70_70));
      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (Var_181));
    }
    {
      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (STATE_VARIABLE_IntUsed_82_82));
      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_180));
    }
    {
      Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (STATE_VARIABLE_IntImported_81_81));
      MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
    }
    AllImportedOrUsed_48 = mercury__set__union_list_1_f_0(TypeCtorInfo_187_187, Var_178);
    parse_tree__modules__check_imports_accessibility_4_p_0(AugCompUnit_45, AllImportedOrUsed_48, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_183_183);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(STATE_VARIABLE_Specs_183_183, STATE_VARIABLE_ModuleAndImports_176_176, STATE_VARIABLE_ModuleAndImports_49);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word NewIntSection_24,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_31;
    MR_Word LaterModules_32;
    MR_Box conv0_FirstModule_31;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_31, Modules_22, &LaterModules_32);
    if (succeeded)
    {
      FirstModule_31 = ((MR_Word) conv0_FirstModule_31);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_IndirectImports_53_53;
      MR_Word STATE_VARIABLE_ImpIndirectImports_54_54;
      MR_Word STATE_VARIABLE_ModuleAndImports_55_55;
      MR_String Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
      MR_String Var_86 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
      MR_Word next_value_of_Modules_22;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_31, ModuleName_33);
      if (!(succeeded))
      {
        {
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
          MR_String Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
          MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
          MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
          MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
          MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
          MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
          MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
          MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
          MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
          MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
          MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
          MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
          MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
          MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
          MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
          MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
          MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
          MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
          MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
          MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
          MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
          MR_String Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));

          succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_31)), Var_46);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_String Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_138 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_34;
            MR_Box conv1_Var_34;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_45, ((MR_Box) (FirstModule_31)), &conv1_Var_34);
            if (succeeded)
            {
              Var_34 = ((MR_Word) conv1_Var_34);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_String Var_139 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_164 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_35;
            MR_Box conv2_Var_35;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_44, ((MR_Box) (FirstModule_31)), &conv2_Var_35);
            if (succeeded)
            {
              Var_35 = ((MR_Word) conv2_Var_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_55_55 = STATE_VARIABLE_ModuleAndImports_0_40;
        STATE_VARIABLE_ImpIndirectImports_54_54 = STATE_VARIABLE_ImpIndirectImports_0_38;
        STATE_VARIABLE_IndirectImports_53_53 = STATE_VARIABLE_IndirectImports_0_36;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0(Globals_18, HaveReadModuleMapInt_19, NeedQual_21, FirstModule_31, IntFileKind_23, NewIntSection_24, STATE_VARIABLE_IndirectImports_0_36, &STATE_VARIABLE_IndirectImports_53_53, STATE_VARIABLE_ImpIndirectImports_0_38, &STATE_VARIABLE_ImpIndirectImports_54_54, STATE_VARIABLE_ModuleAndImports_0_40, &STATE_VARIABLE_ModuleAndImports_55_55);
      // direct tailcall eliminated
      next_value_of_Modules_22 = LaterModules_32;
      next_value_of_STATE_VARIABLE_IndirectImports_0_36 = STATE_VARIABLE_IndirectImports_53_53;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38 = STATE_VARIABLE_ImpIndirectImports_54_54;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_40 = STATE_VARIABLE_ModuleAndImports_55_55;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_IndirectImports_0_36 = next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      STATE_VARIABLE_ImpIndirectImports_0_38 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      STATE_VARIABLE_ModuleAndImports_0_40 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_41 = STATE_VARIABLE_ModuleAndImports_0_40;
      *STATE_VARIABLE_ImpIndirectImports_39 = STATE_VARIABLE_ImpIndirectImports_0_38;
      *STATE_VARIABLE_IndirectImports_37 = STATE_VARIABLE_IndirectImports_0_36;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_49_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46)
{
  {
    MR_Word TypeCtorInfo_66_66;
    MR_Word TypeInfo_67_67;
    MR_Word ProcessInterfaceKind_29;
    MR_Word IntAvails_30;
    MR_Word ImpAvails_31;
    MR_Word IntImportsMap_33;
    MR_Word IntUsesMap_34;
    MR_Word ImpImportsMap_35;
    MR_Word ImpUsesMap_36;
    MR_Word IntImports_37;
    MR_Word IntUses_38;
    MR_Word ImpImports_39;
    MR_Word ImpUses_40;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word _ItemBlocks_32;

    {
      ProcessInterfaceKind_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 0) = ((MR_Box) (IntFileKind_21));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 1) = ((MR_Box) (NeedQual_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, Globals_17, ProcessInterfaceKind_29, HaveReadModuleMapInt_18, Module_20, NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[13], (MR_Word) &parse_tree__modules_scalar_common_2[14], &IntAvails_30, &ImpAvails_31, &_ItemBlocks_32, STATE_VARIABLE_ModuleAndImports_0_45, STATE_VARIABLE_ModuleAndImports_46);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_30, &IntImportsMap_33, &IntUsesMap_34);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_31, &ImpImportsMap_35, &ImpUsesMap_36);
    TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_67_67 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_51, &IntImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_52, &IntUses_38);
    Var_53 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpImportsMap_35);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_53, &ImpImports_39);
    Var_54 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpUsesMap_36);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_54, &ImpUses_40);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (IntUses_38));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IntImports_37));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    *STATE_VARIABLE_IntImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_56);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ImpUses_40));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ImpImports_39));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_43));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    *STATE_VARIABLE_ImpImportsUses_44 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_61);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_50_95_95_91_51_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word HaveReadModuleMapInt_14,
  MR_Word Modules_16,
  MR_Word IntFileKind_17,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_24,
  MR_Word * STATE_VARIABLE_ModuleAndImports_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_34_34 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ImpIndirectImports_23;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_ModuleAndImports_29_29;

    // setup for model_det tailcalls optimized into a loop
    Var_28 = mercury__set__init_0_f_0(TypeCtorInfo_34_34);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_53_95_95_91_51_93_95_48_14_p_0(Globals_13, HaveReadModuleMapInt_14, Modules_16, IntFileKind_17, Var_28, &ImpIndirectImports_23, STATE_VARIABLE_ModuleAndImports_0_24, &STATE_VARIABLE_ModuleAndImports_29_29);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_34_34, ImpIndirectImports_23);
    if (succeeded)
      *STATE_VARIABLE_ModuleAndImports_25 = STATE_VARIABLE_ModuleAndImports_29_29;
    else
    {
      MR_Word next_value_of_Modules_16 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_24 = STATE_VARIABLE_ModuleAndImports_29_29;

      // direct tailcall eliminated
      Modules_16 = next_value_of_Modules_16;
      STATE_VARIABLE_ModuleAndImports_0_24 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_53_95_95_91_51_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Modules_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word IndirectImports_26;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ImpIndirectImports_34_34;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;

    // setup for model_det tailcalls optimized into a loop
    Var_33 = mercury__set__init_0_f_0(TypeCtorInfo_41_41);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_50_53_95_95_91_51_93_95_48_16_p_0(Globals_15, HaveReadModuleMapInt_16, Modules_18, IntFileKind_19, Var_33, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_34_34, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_35_35);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_41_41, IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_30 = STATE_VARIABLE_ModuleAndImports_35_35;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_34_34;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_29 = STATE_VARIABLE_ModuleAndImports_35_35;

      // direct tailcall eliminated
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_ModuleAndImports_0_29 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_50_53_95_95_91_51_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word Modules_20,
  MR_Word IntFileKind_21,
  MR_Word STATE_VARIABLE_IndirectImports_0_33,
  MR_Word * STATE_VARIABLE_IndirectImports_34,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_35,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_29, Modules_20, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) conv0_FirstModule_29);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 7)));
      MR_Word Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 6)));
      MR_Word Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 5)));
      MR_Word Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 4)));
      MR_Word Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 2)));
      MR_String Var_198 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 26)));
      MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 25)));
      MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 24)));
      MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 23)));
      MR_Word Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 22)));
      MR_Word Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 21)));
      MR_Word Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 20)));
      MR_Word Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 19)));
      MR_Word Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 18)));
      MR_Word Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 17)));
      MR_Word Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 16)));
      MR_Word Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 15)));
      MR_Word Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 14)));
      MR_Word Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 13)));
      MR_Word Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 12)));
      MR_Word Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 11)));
      MR_Word Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 10)));
      MR_Word Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 9)));
      MR_Word Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 8)));
      MR_Word Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 3)));
      MR_Word Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 1)));
      MR_String Var_224 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 0)));
      MR_Word next_value_of_Modules_20;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_37;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, Var_222);
      if (!(succeeded))
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_29)), Var_220);
        if (!(succeeded))
        {
          {
            MR_Word Var_31;
            MR_Box conv1_Var_31;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_219, ((MR_Box) (FirstModule_29)), &conv1_Var_31);
            if (succeeded)
            {
              Var_31 = ((MR_Word) conv1_Var_31);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            {
              MR_Word Var_32;
              MR_Box conv2_Var_32;

              succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_218, ((MR_Box) (FirstModule_29)), &conv2_Var_32);
              if (succeeded)
              {
                Var_32 = ((MR_Word) conv2_Var_32);
                succeeded = MR_TRUE;
              }
            }
            if (!(succeeded))
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_29)), Var_217);
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_37;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_35;
        STATE_VARIABLE_IndirectImports_51_51 = STATE_VARIABLE_IndirectImports_0_33;
      }
      else
        parse_tree__modules__process_module_short_interface__ho26_15_p_0(Globals_17, HaveReadModuleMapInt_18, FirstModule_29, IntFileKind_21, STATE_VARIABLE_IndirectImports_0_33, &STATE_VARIABLE_IndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_35, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_37, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      next_value_of_Modules_20 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IndirectImports_0_33 = STATE_VARIABLE_IndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_37 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_IndirectImports_0_33 = next_value_of_STATE_VARIABLE_IndirectImports_0_33;
      STATE_VARIABLE_ImpIndirectImports_0_35 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35;
      STATE_VARIABLE_ModuleAndImports_0_37 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_37;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_38 = STATE_VARIABLE_ModuleAndImports_0_37;
      *STATE_VARIABLE_ImpIndirectImports_36 = STATE_VARIABLE_ImpIndirectImports_0_35;
      *STATE_VARIABLE_IndirectImports_34 = STATE_VARIABLE_IndirectImports_0_33;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho26_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word IntFileKind_19,
  MR_Word STATE_VARIABLE_IntImportsUses_0_39,
  MR_Word * STATE_VARIABLE_IntImportsUses_40,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_41,
  MR_Word * STATE_VARIABLE_ImpImportsUses_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  {
    MR_Word TypeCtorInfo_64_64;
    MR_Word TypeInfo_65_65;
    MR_Word ProcessInterfaceKind_27;
    MR_Word IntAvails_28;
    MR_Word ImpAvails_29;
    MR_Word IntImportsMap_31;
    MR_Word IntUsesMap_32;
    MR_Word ImpImportsMap_33;
    MR_Word ImpUsesMap_34;
    MR_Word IntImports_35;
    MR_Word IntUses_36;
    MR_Word ImpImports_37;
    MR_Word ImpUses_38;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word _ItemBlocks_30;

    {
      ProcessInterfaceKind_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ProcessInterfaceKind_27, 0) = ((MR_Box) (IntFileKind_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, Globals_16, ProcessInterfaceKind_27, HaveReadModuleMapInt_17, Module_18, (MR_Word) &parse_tree__modules_scalar_common_2[10], (MR_Word) &parse_tree__modules_scalar_common_2[11], (MR_Word) &parse_tree__modules_scalar_common_2[12], &IntAvails_28, &ImpAvails_29, &_ItemBlocks_30, STATE_VARIABLE_ModuleAndImports_0_43, STATE_VARIABLE_ModuleAndImports_44);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_28, &IntImportsMap_31, &IntUsesMap_32);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_29, &ImpImportsMap_33, &ImpUsesMap_34);
    TypeCtorInfo_64_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_65_65 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_49 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, IntImportsMap_31);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_49, &IntImports_35);
    Var_50 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, IntUsesMap_32);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_50, &IntUses_36);
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, ImpImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_51, &ImpImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, ImpUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_52, &ImpUses_38);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (IntUses_36));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntImports_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_39));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    *STATE_VARIABLE_IntImportsUses_40 = mercury__set__union_list_1_f_0(TypeCtorInfo_64_64, Var_54);
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ImpUses_38));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpImports_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    *STATE_VARIABLE_ImpImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_64_64, Var_59);
  }
}

static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__844__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Ancestors_19,
  MR_Word NewIntSection_20,
  MR_Word NewImpSection_21,
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
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstAncestor_27, Ancestors_19, &LaterAncestors_28);
    if (succeeded)
    {
      FirstAncestor_27 = ((MR_Word) conv0_FirstAncestor_27);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 2)));
      MR_Word ModAncestors0_30;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_DirectImports_51_51;
      MR_Word STATE_VARIABLE_DirectUses_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_String Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 0)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 1)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 3)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 4)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 5)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 6)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 7)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 8)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 9)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 10)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 11)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 12)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 13)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 14)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 15)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 16)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 17)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 18)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 19)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 20)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 21)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 22)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 23)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 24)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 25)));
      MR_String Var_84 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 26)));
      MR_String Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_String Var_110;
      MR_Word next_value_of_Ancestors_19;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_31;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_35;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_93_95_48_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (FirstAncestor_27));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ModuleName_29));
      }
      mercury__require__expect_not_4_p_0(Var_39, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/15", (MR_String) "module is its own ancestor\?");
      Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 0)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 1)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 2)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 3)));
      ModAncestors0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 4)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 5)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 6)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 7)));
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 8)));
      Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 9)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 10)));
      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 11)));
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 12)));
      Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 13)));
      Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 14)));
      Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 15)));
      Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 16)));
      Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 17)));
      Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 18)));
      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 19)));
      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 20)));
      Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 21)));
      Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 22)));
      Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 23)));
      Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 24)));
      Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 25)));
      Var_110 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_35, (MR_Integer) 26)));
      succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstAncestor_27)), ModAncestors0_30);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_35;
        STATE_VARIABLE_DirectUses_52_52 = STATE_VARIABLE_DirectUses_0_33;
        STATE_VARIABLE_DirectImports_51_51 = STATE_VARIABLE_DirectImports_0_31;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0(Globals_16, HaveReadModuleMapInt_17, FirstAncestor_27, NewIntSection_20, NewImpSection_21, STATE_VARIABLE_DirectImports_0_31, &STATE_VARIABLE_DirectImports_51_51, STATE_VARIABLE_DirectUses_0_33, &STATE_VARIABLE_DirectUses_52_52, STATE_VARIABLE_ModuleAndImports_0_35, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      next_value_of_Ancestors_19 = LaterAncestors_28;
      next_value_of_STATE_VARIABLE_DirectImports_0_31 = STATE_VARIABLE_DirectImports_51_51;
      next_value_of_STATE_VARIABLE_DirectUses_0_33 = STATE_VARIABLE_DirectUses_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_35 = STATE_VARIABLE_ModuleAndImports_53_53;
      Ancestors_19 = next_value_of_Ancestors_19;
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
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_14_p_0(
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
    MR_Word TypeInfo_for_MS_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0;
    MR_Word TypeCtorInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word ItemBlocks_28;
    MR_Word AncDirectImportsMap_29;
    MR_Word AncDirectUsesMap_30;
    MR_Word AncDirectImports_31;
    MR_Word AncDirectUses_32;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word _IntAvails_26;
    MR_Word _ImpAvails_27;

    parse_tree__modules__process_module_interface_general_14_p_0(TypeInfo_for_MS_47, Globals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), HaveReadModuleMapInt_16, Module_17, NewIntSection_18, NewImpSection_19, (MR_Word) &parse_tree__modules_scalar_common_2[9], &_IntAvails_26, &_ImpAvails_27, &ItemBlocks_28, STATE_VARIABLE_ModuleAndImports_0_37, STATE_VARIABLE_ModuleAndImports_38);
    parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(TypeInfo_for_MS_47, ItemBlocks_28, &AncDirectImportsMap_29, &AncDirectUsesMap_30);
    TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_49_49 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_43 = mercury__map__keys_1_f_0(TypeCtorInfo_48_48, TypeInfo_49_49, AncDirectImportsMap_29);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_48_48, Var_43, &AncDirectImports_31);
    Var_44 = mercury__map__keys_1_f_0(TypeCtorInfo_48_48, TypeInfo_49_49, AncDirectUsesMap_30);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_48_48, Var_44, &AncDirectUses_32);
    mercury__set__union_3_p_0(TypeCtorInfo_48_48, AncDirectImports_31, STATE_VARIABLE_DirectImports_0_33, STATE_VARIABLE_DirectImports_34);
    mercury__set__union_3_p_0(TypeCtorInfo_48_48, AncDirectUses_32, STATE_VARIABLE_DirectUses_0_35, STATE_VARIABLE_DirectUses_36);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_44_32_52_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word NewIntSection_24,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_31;
    MR_Word LaterModules_32;
    MR_Box conv0_FirstModule_31;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_31, Modules_22, &LaterModules_32);
    if (succeeded)
    {
      FirstModule_31 = ((MR_Word) conv0_FirstModule_31);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_IndirectImports_53_53;
      MR_Word STATE_VARIABLE_ImpIndirectImports_54_54;
      MR_Word STATE_VARIABLE_ModuleAndImports_55_55;
      MR_String Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
      MR_String Var_86 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
      MR_Word next_value_of_Modules_22;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_31, ModuleName_33);
      if (!(succeeded))
      {
        {
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
          MR_String Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
          MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
          MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
          MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
          MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
          MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
          MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
          MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
          MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
          MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
          MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
          MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
          MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
          MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
          MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
          MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
          MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
          MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
          MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
          MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
          MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
          MR_String Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));

          succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_31)), Var_46);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_String Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_138 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_34;
            MR_Box conv1_Var_34;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_45, ((MR_Box) (FirstModule_31)), &conv1_Var_34);
            if (succeeded)
            {
              Var_34 = ((MR_Word) conv1_Var_34);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_String Var_139 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_164 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_35;
            MR_Box conv2_Var_35;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_44, ((MR_Box) (FirstModule_31)), &conv2_Var_35);
            if (succeeded)
            {
              Var_35 = ((MR_Word) conv2_Var_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_55_55 = STATE_VARIABLE_ModuleAndImports_0_40;
        STATE_VARIABLE_ImpIndirectImports_54_54 = STATE_VARIABLE_ImpIndirectImports_0_38;
        STATE_VARIABLE_IndirectImports_53_53 = STATE_VARIABLE_IndirectImports_0_36;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0(Globals_18, HaveReadModuleMapInt_19, NeedQual_21, FirstModule_31, IntFileKind_23, NewIntSection_24, STATE_VARIABLE_IndirectImports_0_36, &STATE_VARIABLE_IndirectImports_53_53, STATE_VARIABLE_ImpIndirectImports_0_38, &STATE_VARIABLE_ImpIndirectImports_54_54, STATE_VARIABLE_ModuleAndImports_0_40, &STATE_VARIABLE_ModuleAndImports_55_55);
      // direct tailcall eliminated
      next_value_of_Modules_22 = LaterModules_32;
      next_value_of_STATE_VARIABLE_IndirectImports_0_36 = STATE_VARIABLE_IndirectImports_53_53;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38 = STATE_VARIABLE_ImpIndirectImports_54_54;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_40 = STATE_VARIABLE_ModuleAndImports_55_55;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_IndirectImports_0_36 = next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      STATE_VARIABLE_ImpIndirectImports_0_38 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      STATE_VARIABLE_ModuleAndImports_0_40 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_41 = STATE_VARIABLE_ModuleAndImports_0_40;
      *STATE_VARIABLE_ImpIndirectImports_39 = STATE_VARIABLE_ImpIndirectImports_0_38;
      *STATE_VARIABLE_IndirectImports_37 = STATE_VARIABLE_IndirectImports_0_36;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_55_95_95_91_49_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46)
{
  {
    MR_Word TypeCtorInfo_66_66;
    MR_Word TypeInfo_67_67;
    MR_Word ProcessInterfaceKind_29;
    MR_Word IntAvails_30;
    MR_Word ImpAvails_31;
    MR_Word IntImportsMap_33;
    MR_Word IntUsesMap_34;
    MR_Word ImpImportsMap_35;
    MR_Word ImpUsesMap_36;
    MR_Word IntImports_37;
    MR_Word IntUses_38;
    MR_Word ImpImports_39;
    MR_Word ImpUses_40;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word _ItemBlocks_32;

    {
      ProcessInterfaceKind_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 0) = ((MR_Box) (IntFileKind_21));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 1) = ((MR_Box) (NeedQual_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, Globals_17, ProcessInterfaceKind_29, HaveReadModuleMapInt_18, Module_20, NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[7], (MR_Word) &parse_tree__modules_scalar_common_2[8], &IntAvails_30, &ImpAvails_31, &_ItemBlocks_32, STATE_VARIABLE_ModuleAndImports_0_45, STATE_VARIABLE_ModuleAndImports_46);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_30, &IntImportsMap_33, &IntUsesMap_34);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_31, &ImpImportsMap_35, &ImpUsesMap_36);
    TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_67_67 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_51, &IntImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_52, &IntUses_38);
    Var_53 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpImportsMap_35);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_53, &ImpImports_39);
    Var_54 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpUsesMap_36);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_54, &ImpUses_40);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (IntUses_38));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IntImports_37));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    *STATE_VARIABLE_IntImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_56);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ImpUses_40));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ImpImports_39));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_43));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    *STATE_VARIABLE_ImpImportsUses_44 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_61);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_44_32_52_93_95_48_17_p_0(
  MR_Word Globals_18,
  MR_Word HaveReadModuleMapInt_19,
  MR_Word NeedQual_21,
  MR_Word Modules_22,
  MR_Word IntFileKind_23,
  MR_Word NewIntSection_24,
  MR_Word STATE_VARIABLE_IndirectImports_0_36,
  MR_Word * STATE_VARIABLE_IndirectImports_37,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_38,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_39,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_40,
  MR_Word * STATE_VARIABLE_ModuleAndImports_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_31;
    MR_Word LaterModules_32;
    MR_Box conv0_FirstModule_31;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_31, Modules_22, &LaterModules_32);
    if (succeeded)
    {
      FirstModule_31 = ((MR_Word) conv0_FirstModule_31);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_IndirectImports_53_53;
      MR_Word STATE_VARIABLE_ImpIndirectImports_54_54;
      MR_Word STATE_VARIABLE_ModuleAndImports_55_55;
      MR_String Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
      MR_String Var_86 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
      MR_Word next_value_of_Modules_22;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_31, ModuleName_33);
      if (!(succeeded))
      {
        {
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
          MR_String Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
          MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
          MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
          MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
          MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
          MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
          MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
          MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
          MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
          MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
          MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
          MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
          MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
          MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
          MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
          MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
          MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
          MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
          MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
          MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
          MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
          MR_String Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));

          succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_31)), Var_46);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_String Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_138 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_34;
            MR_Box conv1_Var_34;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_45, ((MR_Box) (FirstModule_31)), &conv1_Var_34);
            if (succeeded)
            {
              Var_34 = ((MR_Word) conv1_Var_34);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 6)));
            MR_String Var_139 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 0)));
            MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 1)));
            MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 2)));
            MR_Word Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 3)));
            MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 4)));
            MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 5)));
            MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 7)));
            MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 8)));
            MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 9)));
            MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 10)));
            MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 11)));
            MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 12)));
            MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 13)));
            MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 14)));
            MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 15)));
            MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 16)));
            MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 17)));
            MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 18)));
            MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 19)));
            MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 20)));
            MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 21)));
            MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 22)));
            MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 23)));
            MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 24)));
            MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 25)));
            MR_String Var_164 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_40, (MR_Integer) 26)));
            MR_Word Var_35;
            MR_Box conv2_Var_35;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_44, ((MR_Box) (FirstModule_31)), &conv2_Var_35);
            if (succeeded)
            {
              Var_35 = ((MR_Word) conv2_Var_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_55_55 = STATE_VARIABLE_ModuleAndImports_0_40;
        STATE_VARIABLE_ImpIndirectImports_54_54 = STATE_VARIABLE_ImpIndirectImports_0_38;
        STATE_VARIABLE_IndirectImports_53_53 = STATE_VARIABLE_IndirectImports_0_36;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0(Globals_18, HaveReadModuleMapInt_19, NeedQual_21, FirstModule_31, IntFileKind_23, NewIntSection_24, STATE_VARIABLE_IndirectImports_0_36, &STATE_VARIABLE_IndirectImports_53_53, STATE_VARIABLE_ImpIndirectImports_0_38, &STATE_VARIABLE_ImpIndirectImports_54_54, STATE_VARIABLE_ModuleAndImports_0_40, &STATE_VARIABLE_ModuleAndImports_55_55);
      // direct tailcall eliminated
      next_value_of_Modules_22 = LaterModules_32;
      next_value_of_STATE_VARIABLE_IndirectImports_0_36 = STATE_VARIABLE_IndirectImports_53_53;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38 = STATE_VARIABLE_ImpIndirectImports_54_54;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_40 = STATE_VARIABLE_ModuleAndImports_55_55;
      Modules_22 = next_value_of_Modules_22;
      STATE_VARIABLE_IndirectImports_0_36 = next_value_of_STATE_VARIABLE_IndirectImports_0_36;
      STATE_VARIABLE_ImpIndirectImports_0_38 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_38;
      STATE_VARIABLE_ModuleAndImports_0_40 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_40;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_41 = STATE_VARIABLE_ModuleAndImports_0_40;
      *STATE_VARIABLE_ImpIndirectImports_39 = STATE_VARIABLE_ImpIndirectImports_0_38;
      *STATE_VARIABLE_IndirectImports_37 = STATE_VARIABLE_IndirectImports_0_36;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_56_95_95_91_49_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word NeedQual_19,
  MR_Word Module_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IntImportsUses_0_41,
  MR_Word * STATE_VARIABLE_IntImportsUses_42,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_43,
  MR_Word * STATE_VARIABLE_ImpImportsUses_44,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_45,
  MR_Word * STATE_VARIABLE_ModuleAndImports_46)
{
  {
    MR_Word TypeCtorInfo_66_66;
    MR_Word TypeInfo_67_67;
    MR_Word ProcessInterfaceKind_29;
    MR_Word IntAvails_30;
    MR_Word ImpAvails_31;
    MR_Word IntImportsMap_33;
    MR_Word IntUsesMap_34;
    MR_Word ImpImportsMap_35;
    MR_Word ImpUsesMap_36;
    MR_Word IntImports_37;
    MR_Word IntUses_38;
    MR_Word ImpImports_39;
    MR_Word ImpUses_40;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word _ItemBlocks_32;

    {
      ProcessInterfaceKind_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 0) = ((MR_Box) (IntFileKind_21));
      MR_hl_field(MR_mktag(2), ProcessInterfaceKind_29, 1) = ((MR_Box) (NeedQual_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, Globals_17, ProcessInterfaceKind_29, HaveReadModuleMapInt_18, Module_20, NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[5], (MR_Word) &parse_tree__modules_scalar_common_2[6], &IntAvails_30, &ImpAvails_31, &_ItemBlocks_32, STATE_VARIABLE_ModuleAndImports_0_45, STATE_VARIABLE_ModuleAndImports_46);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_30, &IntImportsMap_33, &IntUsesMap_34);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_31, &ImpImportsMap_35, &ImpUsesMap_36);
    TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_67_67 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_51, &IntImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, IntUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_52, &IntUses_38);
    Var_53 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpImportsMap_35);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_53, &ImpImports_39);
    Var_54 = mercury__map__keys_1_f_0(TypeCtorInfo_66_66, TypeInfo_67_67, ImpUsesMap_36);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_66_66, Var_54, &ImpUses_40);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (IntUses_38));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IntImports_37));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    *STATE_VARIABLE_IntImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_56);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ImpUses_40));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ImpImports_39));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_43));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    *STATE_VARIABLE_ImpImportsUses_44 = mercury__set__union_list_1_f_0(TypeCtorInfo_66_66, Var_61);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_49_44_32_52_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word HaveReadModuleMapInt_16,
  MR_Word Modules_18,
  MR_Word IntFileKind_19,
  MR_Word NewIntSection_20,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word IndirectImports_26;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ImpIndirectImports_34_34;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;

    // setup for model_det tailcalls optimized into a loop
    Var_33 = mercury__set__init_0_f_0(TypeCtorInfo_41_41);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_57_95_95_91_49_44_32_52_93_95_48_16_p_0(Globals_15, HaveReadModuleMapInt_16, Modules_18, IntFileKind_19, NewIntSection_20, Var_33, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_34_34, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_35_35);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_41_41, IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_30 = STATE_VARIABLE_ModuleAndImports_35_35;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_34_34;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_29 = STATE_VARIABLE_ModuleAndImports_35_35;

      // direct tailcall eliminated
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_ModuleAndImports_0_29 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_57_95_95_91_49_44_32_52_93_95_48_16_p_0(
  MR_Word Globals_17,
  MR_Word HaveReadModuleMapInt_18,
  MR_Word Modules_20,
  MR_Word IntFileKind_21,
  MR_Word NewIntSection_22,
  MR_Word STATE_VARIABLE_IndirectImports_0_33,
  MR_Word * STATE_VARIABLE_IndirectImports_34,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_35,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_36,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_37,
  MR_Word * STATE_VARIABLE_ModuleAndImports_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FirstModule_29;
    MR_Word LaterModules_30;
    MR_Box conv0_FirstModule_29;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &conv0_FirstModule_29, Modules_20, &LaterModules_30);
    if (succeeded)
    {
      FirstModule_29 = ((MR_Word) conv0_FirstModule_29);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_IndirectImports_51_51;
      MR_Word STATE_VARIABLE_ImpIndirectImports_52_52;
      MR_Word STATE_VARIABLE_ModuleAndImports_53_53;
      MR_Word Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 7)));
      MR_Word Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 6)));
      MR_Word Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 5)));
      MR_Word Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 4)));
      MR_Word Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 2)));
      MR_String Var_198 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 26)));
      MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 25)));
      MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 24)));
      MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 23)));
      MR_Word Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 22)));
      MR_Word Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 21)));
      MR_Word Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 20)));
      MR_Word Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 19)));
      MR_Word Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 18)));
      MR_Word Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 17)));
      MR_Word Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 16)));
      MR_Word Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 15)));
      MR_Word Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 14)));
      MR_Word Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 13)));
      MR_Word Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 12)));
      MR_Word Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 11)));
      MR_Word Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 10)));
      MR_Word Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 9)));
      MR_Word Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 8)));
      MR_Word Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 3)));
      MR_Word Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 1)));
      MR_String Var_224 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_37, (MR_Integer) 0)));
      MR_Word next_value_of_Modules_20;
      MR_Word next_value_of_STATE_VARIABLE_IndirectImports_0_33;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_37;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(FirstModule_29, Var_222);
      if (!(succeeded))
      {
        succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_29)), Var_220);
        if (!(succeeded))
        {
          {
            MR_Word Var_31;
            MR_Box conv1_Var_31;

            succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_219, ((MR_Box) (FirstModule_29)), &conv1_Var_31);
            if (succeeded)
            {
              Var_31 = ((MR_Word) conv1_Var_31);
              succeeded = MR_TRUE;
            }
          }
          if (!(succeeded))
          {
            {
              MR_Word Var_32;
              MR_Box conv2_Var_32;

              succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Var_218, ((MR_Box) (FirstModule_29)), &conv2_Var_32);
              if (succeeded)
              {
                Var_32 = ((MR_Word) conv2_Var_32);
                succeeded = MR_TRUE;
              }
            }
            if (!(succeeded))
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (FirstModule_29)), Var_217);
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_ModuleAndImports_53_53 = STATE_VARIABLE_ModuleAndImports_0_37;
        STATE_VARIABLE_ImpIndirectImports_52_52 = STATE_VARIABLE_ImpIndirectImports_0_35;
        STATE_VARIABLE_IndirectImports_51_51 = STATE_VARIABLE_IndirectImports_0_33;
      }
      else
        parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0(Globals_17, HaveReadModuleMapInt_18, FirstModule_29, IntFileKind_21, NewIntSection_22, STATE_VARIABLE_IndirectImports_0_33, &STATE_VARIABLE_IndirectImports_51_51, STATE_VARIABLE_ImpIndirectImports_0_35, &STATE_VARIABLE_ImpIndirectImports_52_52, STATE_VARIABLE_ModuleAndImports_0_37, &STATE_VARIABLE_ModuleAndImports_53_53);
      // direct tailcall eliminated
      next_value_of_Modules_20 = LaterModules_30;
      next_value_of_STATE_VARIABLE_IndirectImports_0_33 = STATE_VARIABLE_IndirectImports_51_51;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35 = STATE_VARIABLE_ImpIndirectImports_52_52;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_37 = STATE_VARIABLE_ModuleAndImports_53_53;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_IndirectImports_0_33 = next_value_of_STATE_VARIABLE_IndirectImports_0_33;
      STATE_VARIABLE_ImpIndirectImports_0_35 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_35;
      STATE_VARIABLE_ModuleAndImports_0_37 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_37;
      continue;
    }
    else
    {
      *STATE_VARIABLE_ModuleAndImports_38 = STATE_VARIABLE_ModuleAndImports_0_37;
      *STATE_VARIABLE_ImpIndirectImports_36 = STATE_VARIABLE_ImpIndirectImports_0_35;
      *STATE_VARIABLE_IndirectImports_34 = STATE_VARIABLE_IndirectImports_0_33;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_50_52_95_95_91_49_93_95_48_15_p_0(
  MR_Word Globals_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word IntFileKind_19,
  MR_Word NewIntSection_20,
  MR_Word STATE_VARIABLE_IntImportsUses_0_39,
  MR_Word * STATE_VARIABLE_IntImportsUses_40,
  MR_Word STATE_VARIABLE_ImpImportsUses_0_41,
  MR_Word * STATE_VARIABLE_ImpImportsUses_42,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_43,
  MR_Word * STATE_VARIABLE_ModuleAndImports_44)
{
  {
    MR_Word TypeCtorInfo_64_64;
    MR_Word TypeInfo_65_65;
    MR_Word ProcessInterfaceKind_27;
    MR_Word IntAvails_28;
    MR_Word ImpAvails_29;
    MR_Word IntImportsMap_31;
    MR_Word IntUsesMap_32;
    MR_Word ImpImportsMap_33;
    MR_Word ImpUsesMap_34;
    MR_Word IntImports_35;
    MR_Word IntUses_36;
    MR_Word ImpImports_37;
    MR_Word ImpUses_38;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word _ItemBlocks_30;

    {
      ProcessInterfaceKind_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ProcessInterfaceKind_27, 0) = ((MR_Box) (IntFileKind_19));
    }
    parse_tree__modules__process_module_interface_general_14_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, Globals_16, ProcessInterfaceKind_27, HaveReadModuleMapInt_17, Module_18, NewIntSection_20, (MR_Word) &parse_tree__modules_scalar_common_2[3], (MR_Word) &parse_tree__modules_scalar_common_2[4], &IntAvails_28, &ImpAvails_29, &_ItemBlocks_30, STATE_VARIABLE_ModuleAndImports_0_43, STATE_VARIABLE_ModuleAndImports_44);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(IntAvails_28, &IntImportsMap_31, &IntUsesMap_32);
    parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(ImpAvails_29, &ImpImportsMap_33, &ImpUsesMap_34);
    TypeCtorInfo_64_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_65_65 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    Var_49 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, IntImportsMap_31);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_49, &IntImports_35);
    Var_50 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, IntUsesMap_32);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_50, &IntUses_36);
    Var_51 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, ImpImportsMap_33);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_51, &ImpImports_37);
    Var_52 = mercury__map__keys_1_f_0(TypeCtorInfo_64_64, TypeInfo_65_65, ImpUsesMap_34);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_64_64, Var_52, &ImpUses_38);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (IntUses_36));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IntImports_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (STATE_VARIABLE_IntImportsUses_0_39));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    *STATE_VARIABLE_IntImportsUses_40 = mercury__set__union_list_1_f_0(TypeCtorInfo_64_64, Var_54);
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ImpUses_38));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ImpImports_37));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (STATE_VARIABLE_ImpImportsUses_0_41));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    *STATE_VARIABLE_ImpImportsUses_42 = mercury__set__union_list_1_f_0(TypeCtorInfo_64_64, Var_59);
  }
}

static void MR_CALL 
parse_tree__modules__process_module_interface_general_14_p_0(
  MR_Word TypeInfo_for_MS_271,
  MR_Word Globals_15,
  MR_Word ProcessInterfaceKind_16,
  MR_Word HaveReadModuleMapInt_17,
  MR_Word Module_18,
  MR_Word NewIntSection_19,
  MR_Word NewImpSection_20,
  MR_Word SectionAppend_21,
  MR_Word * IntAvails_22,
  MR_Word * ImpAvails_23,
  MR_Word * ItemBlocks_24,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_57,
  MR_Word * STATE_VARIABLE_ModuleAndImports_58)
{
  {
    MR_bool succeeded;
    MR_Word ReturnTimestamp_31;
    MR_Word Statistics_45;
    MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 24)));
    MR_String Var_86 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 0)));
    MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 1)));
    MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 2)));
    MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 3)));
    MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 4)));
    MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 5)));
    MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 6)));
    MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 7)));
    MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 8)));
    MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 9)));
    MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 10)));
    MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 11)));
    MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 12)));
    MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 13)));
    MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 14)));
    MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 15)));
    MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 16)));
    MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 17)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 18)));
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 19)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 20)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 21)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 22)));
    MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 23)));
    MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 25)));
    MR_String Var_111 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_57, (MR_Integer) 26)));

    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(Var_64, &ReturnTimestamp_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 69, &Statistics_45);
    switch (MR_tag((MR_Word) ProcessInterfaceKind_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_273_273;
          MR_Word FatalErrors_46;
          MR_Word STATE_VARIABLE_ModuleAndImports_83_83;
          MR_Word Var_84;
          MR_String IFKStr_281;
          MR_String MsgPrefix_282;
          MR_Word MaybeTimestamp_284;
          MR_Word ParseTree_285;
          MR_Word Specs_286;
          MR_Word Errors_287;
          MR_Word ModuleName_288;
          MR_Word IntKind_289;
          MR_Word Context_290;
          MR_Word MaybeVersionNumbers_291;
          MR_Word IntIncls_292;
          MR_Word ImpIncls_293;
          MR_Word IntItems_294;
          MR_Word ImpItems_295;
          MR_String Var_296;
          MR_Word STATE_VARIABLE_ModuleAndImports_67_297;
          MR_Box Var_298;
          MR_Box Var_299;
          MR_Word STATE_VARIABLE_ModuleAndImports_70_300;
          MR_Word STATE_VARIABLE_ModuleAndImports_71_301;
          MR_String _FileName_279;
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_ModuleAndImports_70_300;

          IFKStr_281 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0((MR_Integer) 0);
          Var_296 = mercury__string__f_43_43_2_f_0(IFKStr_281, (MR_String) " interface for module");
          MsgPrefix_282 = mercury__string__f_43_43_2_f_0((MR_String) "Reading ", Var_296);
          parse_tree__read_modules__maybe_read_module_int_14_p_0(Globals_15, HaveReadModuleMapInt_17, MsgPrefix_282, (MR_Integer) 0, Module_18, (MR_Integer) 0, &_FileName_279, ReturnTimestamp_31, &MaybeTimestamp_284, &ParseTree_285, &Specs_286, &Errors_287);
          ModuleName_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 0)));
          IntKind_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 1)));
          Context_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 2)));
          MaybeVersionNumbers_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 3)));
          IntIncls_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 4)));
          ImpIncls_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 5)));
          *IntAvails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 6)));
          *ImpAvails_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 7)));
          IntItems_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 8)));
          ImpItems_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_285, (MR_Integer) 9)));
          parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_288, MaybeVersionNumbers_291, STATE_VARIABLE_ModuleAndImports_0_57, &STATE_VARIABLE_ModuleAndImports_67_297);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), NewIntSection_19, (MR_Integer) 1)));
          Var_298 = func_4(((MR_Box) NewIntSection_19), ((MR_Box) (Module_18)), ((MR_Box) (IntKind_289)));
          func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), NewImpSection_20, (MR_Integer) 1)));
          Var_299 = func_5(((MR_Box) NewImpSection_20), ((MR_Box) (Module_18)), ((MR_Box) (IntKind_289)));
          parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(TypeInfo_for_MS_271, Context_290, Var_298, Var_299, IntIncls_292, ImpIncls_293, *IntAvails_22, *ImpAvails_23, IntItems_294, ImpItems_295, ItemBlocks_24);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), SectionAppend_21, (MR_Integer) 1)));
          func_6(((MR_Box) SectionAppend_21), ((MR_Box) (*ItemBlocks_24)), ((MR_Box) (STATE_VARIABLE_ModuleAndImports_67_297)), &conv7_STATE_VARIABLE_ModuleAndImports_70_300);
          STATE_VARIABLE_ModuleAndImports_70_300 = ((MR_Word) conv7_STATE_VARIABLE_ModuleAndImports_70_300);
          parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_286, Errors_287, STATE_VARIABLE_ModuleAndImports_70_300, &STATE_VARIABLE_ModuleAndImports_71_301);
          parse_tree__modules__maybe_record_timestamp_6_p_0(Module_18, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_284, STATE_VARIABLE_ModuleAndImports_71_301, &STATE_VARIABLE_ModuleAndImports_83_83);
          Var_84 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
          TypeCtorInfo_273_273 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
          mercury__set__intersect_3_p_0(TypeCtorInfo_273_273, Errors_287, Var_84, &FatalErrors_46);
          succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_273_273, FatalErrors_46);
          if (succeeded)
          {
            MR_Word ModAncestors0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 4)));
            MR_Word ModAncestors_48;
            MR_String Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 0)));
            MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 1)));
            MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 2)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 3)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 5)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 6)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 7)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 8)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 9)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 10)));
            MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 11)));
            MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 12)));
            MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 13)));
            MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 14)));
            MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 15)));
            MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 16)));
            MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 17)));
            MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 18)));
            MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 19)));
            MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 20)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 21)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 22)));
            MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 23)));
            MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 24)));
            MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 25)));
            MR_String Var_137 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_83_83, (MR_Integer) 26)));

            mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (Module_18)), ModAncestors0_47, &ModAncestors_48);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ModuleAndImports_58 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_115));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModAncestors_48));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_116));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_117));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_123));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_132));
              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_133));
              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_134));
              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_135));
              MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_136));
              MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_137));
            }
          }
          else
            *STATE_VARIABLE_ModuleAndImports_58 = STATE_VARIABLE_ModuleAndImports_83_83;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModIndirectImports0_50;
          MR_Word ModIndirectImports_51;
          MR_Word STATE_VARIABLE_ModuleAndImports_79_79;
          MR_String Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_174;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_String Var_190;
          MR_Word IntFileKind_303 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcessInterfaceKind_16, (MR_Integer) 0)));
          MR_String IFKStr_304;
          MR_String MsgPrefix_305;
          MR_Word MaybeTimestamp_307;
          MR_Word ParseTree_308;
          MR_Word Specs_309;
          MR_Word Errors_310;
          MR_Word ModuleName_311;
          MR_Word IntKind_312;
          MR_Word Context_313;
          MR_Word MaybeVersionNumbers_314;
          MR_Word IntIncls_315;
          MR_Word ImpIncls_316;
          MR_Word IntItems_317;
          MR_Word ImpItems_318;
          MR_String Var_319;
          MR_Word STATE_VARIABLE_ModuleAndImports_67_320;
          MR_Box Var_321;
          MR_Box Var_322;
          MR_Word STATE_VARIABLE_ModuleAndImports_70_323;
          MR_Word STATE_VARIABLE_ModuleAndImports_71_324;
          MR_String _FileName_302;
          MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box);
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv11_STATE_VARIABLE_ModuleAndImports_70_323;

          IFKStr_304 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_303);
          Var_319 = mercury__string__f_43_43_2_f_0(IFKStr_304, (MR_String) " interface for module");
          MsgPrefix_305 = mercury__string__f_43_43_2_f_0((MR_String) "Reading ", Var_319);
          parse_tree__read_modules__maybe_read_module_int_14_p_0(Globals_15, HaveReadModuleMapInt_17, MsgPrefix_305, (MR_Integer) 0, Module_18, IntFileKind_303, &_FileName_302, ReturnTimestamp_31, &MaybeTimestamp_307, &ParseTree_308, &Specs_309, &Errors_310);
          ModuleName_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 0)));
          IntKind_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 1)));
          Context_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 2)));
          MaybeVersionNumbers_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 3)));
          IntIncls_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 4)));
          ImpIncls_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 5)));
          *IntAvails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 6)));
          *ImpAvails_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 7)));
          IntItems_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 8)));
          ImpItems_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_308, (MR_Integer) 9)));
          parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_311, MaybeVersionNumbers_314, STATE_VARIABLE_ModuleAndImports_0_57, &STATE_VARIABLE_ModuleAndImports_67_320);
          func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), NewIntSection_19, (MR_Integer) 1)));
          Var_321 = func_8(((MR_Box) NewIntSection_19), ((MR_Box) (Module_18)), ((MR_Box) (IntKind_312)));
          func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), NewImpSection_20, (MR_Integer) 1)));
          Var_322 = func_9(((MR_Box) NewImpSection_20), ((MR_Box) (Module_18)), ((MR_Box) (IntKind_312)));
          parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(TypeInfo_for_MS_271, Context_313, Var_321, Var_322, IntIncls_315, ImpIncls_316, *IntAvails_22, *ImpAvails_23, IntItems_317, ImpItems_318, ItemBlocks_24);
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), SectionAppend_21, (MR_Integer) 1)));
          func_10(((MR_Box) SectionAppend_21), ((MR_Box) (*ItemBlocks_24)), ((MR_Box) (STATE_VARIABLE_ModuleAndImports_67_320)), &conv11_STATE_VARIABLE_ModuleAndImports_70_323);
          STATE_VARIABLE_ModuleAndImports_70_323 = ((MR_Word) conv11_STATE_VARIABLE_ModuleAndImports_70_323);
          parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_309, Errors_310, STATE_VARIABLE_ModuleAndImports_70_323, &STATE_VARIABLE_ModuleAndImports_71_324);
          parse_tree__modules__maybe_record_timestamp_6_p_0(Module_18, IntFileKind_303, (MR_Integer) 0, MaybeTimestamp_307, STATE_VARIABLE_ModuleAndImports_71_324, &STATE_VARIABLE_ModuleAndImports_79_79);
          Var_165 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 0)));
          Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 1)));
          Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 2)));
          Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 3)));
          Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 4)));
          Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 5)));
          Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 6)));
          ModIndirectImports0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 7)));
          Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 8)));
          Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 9)));
          Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 10)));
          Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 11)));
          Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 12)));
          Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 13)));
          Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 14)));
          Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 15)));
          Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 16)));
          Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 17)));
          Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 18)));
          Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 19)));
          Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 20)));
          Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 21)));
          Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 22)));
          Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 23)));
          Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 24)));
          Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 25)));
          Var_190 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_79_79, (MR_Integer) 26)));
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (Module_18)), ModIndirectImports0_50, &ModIndirectImports_51);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ModuleAndImports_58 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_165));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_167));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_168));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_169));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_170));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModIndirectImports_51));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_172));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_173));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_174));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_175));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_176));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_177));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_180));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_181));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_182));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_183));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_184));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_185));
            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_186));
            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_187));
            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_188));
            MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_189));
            MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_190));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_276_276;
          MR_Word IntFileKind_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ProcessInterfaceKind_16, (MR_Integer) 0)));
          MR_String IFKStr_29;
          MR_String MsgPrefix_30;
          MR_Word MaybeTimestamp_33;
          MR_Word ParseTree_34;
          MR_Word Specs_35;
          MR_Word Errors_36;
          MR_Word ModuleName_37;
          MR_Word IntKind_38;
          MR_Word Context_39;
          MR_Word MaybeVersionNumbers_40;
          MR_Word IntIncls_41;
          MR_Word ImpIncls_42;
          MR_Word IntItems_43;
          MR_Word ImpItems_44;
          MR_Word NeedQual_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ProcessInterfaceKind_16, (MR_Integer) 1)));
          MR_Word FatalIntErrors_54;
          MR_String Var_62;
          MR_Word STATE_VARIABLE_ModuleAndImports_67_67;
          MR_Box Var_68;
          MR_Box Var_69;
          MR_Word STATE_VARIABLE_ModuleAndImports_70_70;
          MR_Word STATE_VARIABLE_ModuleAndImports_71_71;
          MR_Word Var_74;
          MR_String _FileName_32;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_ModuleAndImports_70_70;

          IFKStr_29 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_27);
          Var_62 = mercury__string__f_43_43_2_f_0(IFKStr_29, (MR_String) " interface for module");
          MsgPrefix_30 = mercury__string__f_43_43_2_f_0((MR_String) "Reading ", Var_62);
          parse_tree__read_modules__maybe_read_module_int_14_p_0(Globals_15, HaveReadModuleMapInt_17, MsgPrefix_30, (MR_Integer) 0, Module_18, IntFileKind_27, &_FileName_32, ReturnTimestamp_31, &MaybeTimestamp_33, &ParseTree_34, &Specs_35, &Errors_36);
          ModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 0)));
          IntKind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 1)));
          Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 2)));
          MaybeVersionNumbers_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 3)));
          IntIncls_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 4)));
          ImpIncls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 5)));
          *IntAvails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 6)));
          *ImpAvails_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 7)));
          IntItems_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 8)));
          ImpItems_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParseTree_34, (MR_Integer) 9)));
          parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_37, MaybeVersionNumbers_40, STATE_VARIABLE_ModuleAndImports_0_57, &STATE_VARIABLE_ModuleAndImports_67_67);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), NewIntSection_19, (MR_Integer) 1)));
          Var_68 = func_0(((MR_Box) NewIntSection_19), ((MR_Box) (Module_18)), ((MR_Box) (IntKind_38)));
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), NewImpSection_20, (MR_Integer) 1)));
          Var_69 = func_1(((MR_Box) NewImpSection_20), ((MR_Box) (Module_18)), ((MR_Box) (IntKind_38)));
          parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(TypeInfo_for_MS_271, Context_39, Var_68, Var_69, IntIncls_41, ImpIncls_42, *IntAvails_22, *ImpAvails_23, IntItems_43, ImpItems_44, ItemBlocks_24);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), SectionAppend_21, (MR_Integer) 1)));
          func_2(((MR_Box) SectionAppend_21), ((MR_Box) (*ItemBlocks_24)), ((MR_Box) (STATE_VARIABLE_ModuleAndImports_67_67)), &conv3_STATE_VARIABLE_ModuleAndImports_70_70);
          STATE_VARIABLE_ModuleAndImports_70_70 = ((MR_Word) conv3_STATE_VARIABLE_ModuleAndImports_70_70);
          parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_35, Errors_36, STATE_VARIABLE_ModuleAndImports_70_70, &STATE_VARIABLE_ModuleAndImports_71_71);
          Var_74 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
          TypeCtorInfo_276_276 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
          mercury__set__intersect_3_p_0(TypeCtorInfo_276_276, Errors_36, Var_74, &FatalIntErrors_54);
          succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_276_276, FatalIntErrors_54);
          if (succeeded)
          {
            MR_Word ModImpImports0_55;
            MR_Word ModImpImports_56;
            MR_Word STATE_VARIABLE_ModuleAndImports_75_75;
            MR_Word Var_76;
            MR_String Var_218;
            MR_Word Var_219;
            MR_Word Var_220;
            MR_Word Var_221;
            MR_Word Var_222;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Word Var_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;
            MR_Word Var_232;
            MR_Word Var_233;
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Word Var_236;
            MR_Word Var_237;
            MR_Word Var_238;
            MR_Word Var_239;
            MR_Word Var_240;
            MR_Word Var_241;
            MR_Word Var_242;
            MR_String Var_243;

            parse_tree__modules__maybe_record_timestamp_6_p_0(Module_18, IntFileKind_27, NeedQual_53, MaybeTimestamp_33, STATE_VARIABLE_ModuleAndImports_71_71, &STATE_VARIABLE_ModuleAndImports_75_75);
            Var_218 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 0)));
            Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 1)));
            Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 2)));
            Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 3)));
            Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 4)));
            Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 5)));
            ModImpImports0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 6)));
            Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 7)));
            Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 8)));
            Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 9)));
            Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 10)));
            Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 11)));
            Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 12)));
            Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 13)));
            Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 14)));
            Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 15)));
            Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 16)));
            Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 17)));
            Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 18)));
            Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 19)));
            Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 20)));
            Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 21)));
            Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 22)));
            Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 23)));
            Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 24)));
            Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 25)));
            Var_243 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_75_75, (MR_Integer) 26)));
            Var_76 = mercury__term__context_init_0_f_0();
            mercury__multi_map__add_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (Module_18)), ((MR_Box) (Var_76)), ModImpImports0_55, &ModImpImports_56);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ModuleAndImports_58 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_218));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_219));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_220));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_221));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_222));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_223));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ModImpImports_56));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_224));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_225));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_226));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_227));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_228));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_229));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_230));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_231));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_232));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_233));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_234));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_235));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_236));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_237));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_238));
              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_239));
              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_240));
              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_241));
              MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_242));
              MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_243));
            }
          }
          else
            *STATE_VARIABLE_ModuleAndImports_58 = STATE_VARIABLE_ModuleAndImports_71_71;
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Statistics_45);
  }
}

static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Integer) 1;
  else
    *HeadVar__2_2 = (MR_Integer) 0;
}

static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word NeedQual_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_18)
{
  {
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
    MR_String Var_104 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
    MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
    MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
    MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
    MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
    MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
    MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
    MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
    MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
    MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
    MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
    MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
    MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
    MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
    MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
    MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
    MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
    MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
    MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
    MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
    MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
    MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
    MR_String Var_130 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));

    if ((Var_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ModuleAndImports_18 = STATE_VARIABLE_ModuleAndImports_0_17;
    else
    {
      MR_Word TimestampMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 0)));

      if ((MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_ModuleAndImports_18 = STATE_VARIABLE_ModuleAndImports_0_17;
      else
      {
        MR_Word Timestamp_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTimestamp_10, (MR_Integer) 0)));
        MR_Word FileKind_14;
        MR_Word TimestampInfo_15;
        MR_Word TimestampMap_16;
        MR_Word Var_22;
        MR_String Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_String Var_75;
        MR_Word Var_73;

        {
          FileKind_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileKind_14, 0) = ((MR_Box) (IntFileKind_8));
        }
        {
          TimestampInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TimestampInfo_15, 0) = ((MR_Box) (FileKind_14));
          MR_hl_field(MR_mktag(0), TimestampInfo_15, 1) = ((MR_Box) (Timestamp_13));
          MR_hl_field(MR_mktag(0), TimestampInfo_15, 2) = ((MR_Box) (NeedQual_9));
        }
        mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (ModuleName_7)), ((MR_Box) (TimestampInfo_15)), TimestampMap0_12, &TimestampMap_16);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (TimestampMap_16));
        }
        Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
        Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
        Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
        Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
        Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
        Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
        Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
        Var_75 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ModuleAndImports_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_75));
        }
      }
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
    MR_Word TypeCtorInfo_43_43;
    MR_Word STATE_VARIABLE_IntImported_32_32;
    MR_Word STATE_VARIABLE_IntUsed_33_33;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Word STATE_VARIABLE_ImpUsed_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_ImpImported_38_38;

    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(Context_15, STATE_VARIABLE_IntImported_0_22, &STATE_VARIABLE_IntImported_32_32, STATE_VARIABLE_IntUsed_0_24, &STATE_VARIABLE_IntUsed_33_33, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_34_34);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(Context_15, STATE_VARIABLE_IntImported_32_32, STATE_VARIABLE_IntImported_23, STATE_VARIABLE_ImpUsed_0_28, &STATE_VARIABLE_ImpUsed_36_36, STATE_VARIABLE_Specs_34_34, &STATE_VARIABLE_Specs_37_37);
    parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(Context_15, STATE_VARIABLE_ImpImported_0_26, &STATE_VARIABLE_ImpImported_38_38, STATE_VARIABLE_ImpUsed_36_36, STATE_VARIABLE_ImpUsed_29, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_31);
    TypeCtorInfo_43_43 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    *IntUsedImpImported_20 = mercury__set__intersect_2_f_0(TypeCtorInfo_43_43, STATE_VARIABLE_ImpImported_38_38, STATE_VARIABLE_IntUsed_33_33);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_43_43, *IntUsedImpImported_20);
    if (succeeded)
    {
      *STATE_VARIABLE_ImpImported_27 = STATE_VARIABLE_ImpImported_38_38;
      *STATE_VARIABLE_IntUsed_25 = STATE_VARIABLE_IntUsed_33_33;
    }
    else
    {
      *STATE_VARIABLE_IntUsed_25 = mercury__set__difference_2_f_0(TypeCtorInfo_43_43, STATE_VARIABLE_IntUsed_33_33, *IntUsedImpImported_20);
      *STATE_VARIABLE_ImpImported_27 = mercury__set__difference_2_f_0(TypeCtorInfo_43_43, STATE_VARIABLE_ImpImported_38_38, *IntUsedImpImported_20);
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

    conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) wrapper_arg_1));
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
    MR_Word TypeCtorInfo_80_80 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ImportedAndUsed_14;

    mercury__set__intersect_3_p_0(TypeCtorInfo_80_80, STATE_VARIABLE_Imported_0_20, STATE_VARIABLE_Used_0_22, &ImportedAndUsed_14);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_80_80, ImportedAndUsed_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      *STATE_VARIABLE_Used_23 = STATE_VARIABLE_Used_0_22;
    }
    else
    {
      MR_Word TypeCtorInfo_81_81;
      MR_Word TypeCtorInfo_82_82;
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

      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_80_80, ImportedAndUsed_14, &ImportedAndUsedList_15);
      TypeCtorInfo_81_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      conv0_Var_31 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_80_80, TypeCtorInfo_82_82, ImportedAndUsedList_15, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
      Var_31 = ((MR_String) conv0_Var_31);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[35])));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      Var_38 = mercury__list__map_2_f_0(TypeCtorInfo_80_80, TypeCtorInfo_81_81, (MR_Word) &parse_tree__modules_scalar_common_2[2], ImportedAndUsedList_15);
      Var_36 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_38);
      conv2_Var_42 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_80_80, TypeCtorInfo_82_82, ImportedAndUsedList_15, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
      Var_42 = ((MR_String) conv2_Var_42);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[30])));
      }
      Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_81_81, Var_36, Var_40);
      Pieces_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_81_81, Var_26, Var_35);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_16));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10)))));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_17));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_76));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
      mercury__set__difference_3_p_0(TypeCtorInfo_80_80, STATE_VARIABLE_Used_0_22, ImportedAndUsed_14, STATE_VARIABLE_Used_23);
    }
    *STATE_VARIABLE_Imported_21 = STATE_VARIABLE_Imported_0_20;
  }
}

static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_20;

    parse_tree__modules__check_module_accessibility_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word ImportedModules_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word TypeCtorInfo_29_51;
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 0)));
    MR_Word SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3)));
    MR_Word DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 4)));
    MR_Word IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 5)));
    MR_Word OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 6)));
    MR_Word IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 7)));
    MR_Word IntItemBlocks_16;
    MR_Word InclMap_17;
    MR_Word ImportUseMap_18;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_InclMap_15_37;
    MR_Word STATE_VARIABLE_ImportUseMap_16_38;
    MR_Word STATE_VARIABLE_InclMap_18_40;
    MR_Word STATE_VARIABLE_ImportUseMap_19_41;
    MR_Word STATE_VARIABLE_InclMap_21_43;
    MR_Word STATE_VARIABLE_ImportUseMap_22_44;
    MR_Word STATE_VARIABLE_InclMap_24_46;
    MR_Word STATE_VARIABLE_ImportUseMap_25_47;
    MR_Word _ModuleNameContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 1)));
    MR_Word _ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 2)));
    MR_Box conv1_STATE_VARIABLE_Specs_20;

    IntItemBlocks_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[7], DirectIntItemBlocks_12, IndirectIntItemBlocks_13);
    TypeCtorInfo_29_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__map__init_1_p_0(TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[9], &STATE_VARIABLE_InclMap_15_37);
    mercury__map__init_1_p_0(TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[10], &STATE_VARIABLE_ImportUseMap_16_38);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(SrcItemBlocks_11, STATE_VARIABLE_InclMap_15_37, &STATE_VARIABLE_InclMap_18_40, STATE_VARIABLE_ImportUseMap_16_38, &STATE_VARIABLE_ImportUseMap_19_41);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(IntItemBlocks_16, STATE_VARIABLE_InclMap_18_40, &STATE_VARIABLE_InclMap_21_43, STATE_VARIABLE_ImportUseMap_19_41, &STATE_VARIABLE_ImportUseMap_22_44);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(OptItemBlocks_14, STATE_VARIABLE_InclMap_21_43, &STATE_VARIABLE_InclMap_24_46, STATE_VARIABLE_ImportUseMap_22_44, &STATE_VARIABLE_ImportUseMap_25_47);
    parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(IntForOptItemBlocks_15, STATE_VARIABLE_InclMap_24_46, &InclMap_17, STATE_VARIABLE_ImportUseMap_25_47, &ImportUseMap_18);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__modules__check_imports_accessibility_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (InclMap_17));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ImportUseMap_18));
    }
    mercury__set__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[6], Var_21, ImportedModules_6, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv1_STATE_VARIABLE_Specs_20);
    *STATE_VARIABLE_Specs_20 = ((MR_Word) conv1_STATE_VARIABLE_Specs_20);
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ImportUseMap_6 = STATE_VARIABLE_ImportUseMap_0_5;
      *STATE_VARIABLE_InclMap_4 = STATE_VARIABLE_InclMap_0_3;
    }
    else
    {
      MR_Word ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 2)));
      MR_Word Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 3)));
      MR_Word STATE_VARIABLE_InclMap_29_29;
      MR_Word STATE_VARIABLE_ImportUseMap_30_30;
      MR_Word Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 0)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 1)));
      MR_Word _Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_5;

      parse_tree__modules__record_includes_acc_3_p_0(Incls_21, STATE_VARIABLE_InclMap_0_3, &STATE_VARIABLE_InclMap_29_29);
      parse_tree__modules__record_avails_acc_3_p_0(Avails_22, STATE_VARIABLE_ImportUseMap_0_5, &STATE_VARIABLE_ImportUseMap_30_30);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ItemBlocks_15;
      next_value_of_STATE_VARIABLE_InclMap_0_3 = STATE_VARIABLE_InclMap_29_29;
      next_value_of_STATE_VARIABLE_ImportUseMap_0_5 = STATE_VARIABLE_ImportUseMap_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InclMap_0_3 = next_value_of_STATE_VARIABLE_InclMap_0_3;
      STATE_VARIABLE_ImportUseMap_0_5 = next_value_of_STATE_VARIABLE_ImportUseMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ImportUseMap_6 = STATE_VARIABLE_ImportUseMap_0_5;
      *STATE_VARIABLE_InclMap_4 = STATE_VARIABLE_InclMap_0_3;
    }
    else
    {
      MR_Word ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 0)));
      MR_Word Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 2)));
      MR_Word Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 3)));
      MR_Word STATE_VARIABLE_InclMap_29_29;
      MR_Word STATE_VARIABLE_ImportUseMap_30_30;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 1)));
      MR_Word _Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_5;

      if (((MR_tag((MR_Word) Section_19)) == (MR_mktag((MR_Integer) 1))))
        STATE_VARIABLE_InclMap_29_29 = STATE_VARIABLE_InclMap_0_3;
      else
        parse_tree__modules__record_includes_acc_3_p_0(Incls_21, STATE_VARIABLE_InclMap_0_3, &STATE_VARIABLE_InclMap_29_29);
      parse_tree__modules__record_avails_acc_3_p_0(Avails_22, STATE_VARIABLE_ImportUseMap_0_5, &STATE_VARIABLE_ImportUseMap_30_30);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ItemBlocks_15;
      next_value_of_STATE_VARIABLE_InclMap_0_3 = STATE_VARIABLE_InclMap_29_29;
      next_value_of_STATE_VARIABLE_ImportUseMap_0_5 = STATE_VARIABLE_ImportUseMap_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InclMap_0_3 = next_value_of_STATE_VARIABLE_InclMap_0_3;
      STATE_VARIABLE_ImportUseMap_0_5 = next_value_of_STATE_VARIABLE_ImportUseMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_2,
  MR_Word * STATE_VARIABLE_InclMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_InclMap_3 = STATE_VARIABLE_InclMap_0_2;
    else
    {
      MR_Word Include_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Includes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Include_7, (MR_Integer) 0)));
      MR_Word Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Include_7, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_InclMap_20_20;
      MR_Integer _SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Include_7, (MR_Integer) 2)));
      MR_Word OneOrMore0_13;
      MR_Box conv0_OneOrMore0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InclMap_0_2;

      succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], STATE_VARIABLE_InclMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_13);
      if (succeeded)
      {
        OneOrMore0_13 = ((MR_Word) conv0_OneOrMore0_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OneOrMore0_13, (MR_Integer) 0)));
        MR_Word TailContexts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OneOrMore0_13, (MR_Integer) 1)));
        MR_Word OneOrMore_16;
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (HeadContext_14));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (TailContexts_15));
        }
        {
          OneOrMore_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_16, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), OneOrMore_16, 1) = ((MR_Box) (Var_19));
        }
        mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_16)), STATE_VARIABLE_InclMap_0_2, &STATE_VARIABLE_InclMap_20_20);
      }
      else
      {
        MR_Word OneOrMore_24;

        {
          OneOrMore_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_24, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), OneOrMore_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_24)), STATE_VARIABLE_InclMap_0_2, &STATE_VARIABLE_InclMap_20_20);
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Includes_8;
      next_value_of_STATE_VARIABLE_InclMap_0_2 = STATE_VARIABLE_InclMap_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InclMap_0_2 = next_value_of_STATE_VARIABLE_InclMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ImportUseMap_6 = STATE_VARIABLE_ImportUseMap_0_5;
      *STATE_VARIABLE_InclMap_4 = STATE_VARIABLE_InclMap_0_3;
    }
    else
    {
      MR_Word ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 3)));
      MR_Word STATE_VARIABLE_ImportUseMap_30_30;
      MR_Word Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 0)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 1)));
      MR_Word Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 2)));
      MR_Word _Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_5;

      parse_tree__modules__record_avails_acc_3_p_0(Avails_22, STATE_VARIABLE_ImportUseMap_0_5, &STATE_VARIABLE_ImportUseMap_30_30);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ItemBlocks_15;
      next_value_of_STATE_VARIABLE_ImportUseMap_0_5 = STATE_VARIABLE_ImportUseMap_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportUseMap_0_5 = next_value_of_STATE_VARIABLE_ImportUseMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4,
  MR_Word STATE_VARIABLE_ImportUseMap_0_5,
  MR_Word * STATE_VARIABLE_ImportUseMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ImportUseMap_6 = STATE_VARIABLE_ImportUseMap_0_5;
      *STATE_VARIABLE_InclMap_4 = STATE_VARIABLE_InclMap_0_3;
    }
    else
    {
      MR_Word ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 3)));
      MR_Word STATE_VARIABLE_ImportUseMap_30_30;
      MR_Word Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 0)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 1)));
      MR_Word Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 2)));
      MR_Word _Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_14, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_5;

      parse_tree__modules__record_avails_acc_3_p_0(Avails_22, STATE_VARIABLE_ImportUseMap_0_5, &STATE_VARIABLE_ImportUseMap_30_30);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ItemBlocks_15;
      next_value_of_STATE_VARIABLE_ImportUseMap_0_5 = STATE_VARIABLE_ImportUseMap_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportUseMap_0_5 = next_value_of_STATE_VARIABLE_ImportUseMap_0_5;
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ImportUseMap_3 = STATE_VARIABLE_ImportUseMap_0_2;
    else
    {
      MR_Word Avail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Avails_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModuleName_10;
      MR_Word Context_11;
      MR_Word ImportOrUse_13;
      MR_Word IoUC_14;
      MR_Word STATE_VARIABLE_ImportUseMap_24_24;
      MR_Word OneOrMore0_15;
      MR_Box conv0_OneOrMore0_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word Var_22 = (MR_Word) MR_body(((MR_Word) Avail_7), (MR_Integer) 0);
        MR_Integer _SeqNum_12;

        ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
        Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
        _SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2)));
        ImportOrUse_13 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_21 = (MR_Word) MR_body(((MR_Word) Avail_7), (MR_Integer) 1);
        MR_Integer _SeqNum_28;

        ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
        Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1)));
        _SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 2)));
        ImportOrUse_13 = (MR_Integer) 1;
      }
      {
        IoUC_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IoUC_14, 0) = ((MR_Box) (ImportOrUse_13));
        MR_hl_field(MR_mktag(0), IoUC_14, 1) = ((MR_Box) (Context_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_15);
      if (succeeded)
      {
        OneOrMore0_15 = ((MR_Word) conv0_OneOrMore0_15);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIoUC_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OneOrMore0_15, (MR_Integer) 0)));
        MR_Word TailIoUCs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OneOrMore0_15, (MR_Integer) 1)));
        MR_Word OneOrMore_18;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (HeadIoUC_16));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (TailIoUCs_17));
        }
        {
          OneOrMore_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_18, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(MR_mktag(0), OneOrMore_18, 1) = ((MR_Box) (Var_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_18)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_30;

        {
          OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_30, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(MR_mktag(0), OneOrMore_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_30)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      // direct tailcall eliminated
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
parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_13;

    parse_tree__modules__warn_import_for_self_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Specs_13);
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

    parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_12);
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
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ImportedOrUsedAncestors_12;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Specs_16_16;
    MR_Box conv1_STATE_VARIABLE_Specs_16_16;

    mercury__set__intersect_3_p_0(TypeCtorInfo_18_18, Ancestors_9, ImportedOrUsed_10, &ImportedOrUsedAncestors_12);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (RawItemBlocks_8));
    }
    mercury__set__fold_4_p_0(TypeCtorInfo_18_18, (MR_Word) &parse_tree__modules_scalar_common_1[6], Var_15, ImportedOrUsedAncestors_12, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv1_STATE_VARIABLE_Specs_16_16);
    STATE_VARIABLE_Specs_16_16 = ((MR_Word) conv1_STATE_VARIABLE_Specs_16_16);
    succeeded = mercury__set__member_2_p_0(TypeCtorInfo_18_18, ((MR_Box) (ModuleName_7)), ImportedOrUsed_10);
    if (succeeded)
    {
      MR_Word AvailContexts_28;
      MR_Word Var_30;
      MR_Box conv3_STATE_VARIABLE_Specs_14;

      parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(RawItemBlocks_8, ModuleName_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &AvailContexts_28);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_for_self_or_ancestor_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleName_7));
      }
      mercury__list__foldl_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[6], Var_30, AvailContexts_28, ((MR_Box) (STATE_VARIABLE_Specs_16_16)), &conv3_STATE_VARIABLE_Specs_14);
      *STATE_VARIABLE_Specs_14 = ((MR_Word) conv3_STATE_VARIABLE_Specs_14);
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_AvailContexts_4 = STATE_VARIABLE_AvailContexts_0_3;
    else
    {
      MR_Word ItemBlock_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ItemBlocks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Avails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_9, (MR_Integer) 3)));
      MR_Word STATE_VARIABLE_AvailContexts_20_20;
      MR_Word _SectionKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_9, (MR_Integer) 0)));
      MR_Word _SectionContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_9, (MR_Integer) 1)));
      MR_Word _Includes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_9, (MR_Integer) 2)));
      MR_Word _Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemBlock_9, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailContexts_0_3;

      parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(Avails_16, ModuleName_2, STATE_VARIABLE_AvailContexts_0_3, &STATE_VARIABLE_AvailContexts_20_20);
      // direct tailcall eliminated
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_AvailContexts_4 = STATE_VARIABLE_AvailContexts_0_3;
    else
    {
      MR_Word Avail_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word AvailModuleName_14;
      MR_Word Context_15;
      MR_Word STATE_VARIABLE_AvailContexts_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AvailContexts_0_3;

      if (((MR_tag((MR_Word) Avail_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word Import_13 = (MR_Word) MR_body(((MR_Word) Avail_9), (MR_Integer) 0);
        MR_Integer _SeqNum_16;

        AvailModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Import_13, (MR_Integer) 0)));
        Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Import_13, (MR_Integer) 1)));
        _SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Import_13, (MR_Integer) 2)));
      }
      else
      {
        MR_Word Use_17 = (MR_Word) MR_body(((MR_Word) Avail_9), (MR_Integer) 1);
        MR_Integer _SeqNum_22;

        AvailModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 0)));
        Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 1)));
        _SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 2)));
      }
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_2, AvailModuleName_14);
      if (succeeded)
        {
          STATE_VARIABLE_AvailContexts_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AvailContexts_20_20, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AvailContexts_20_20, 1) = ((MR_Box) (STATE_VARIABLE_AvailContexts_0_3));
        }
      else
        STATE_VARIABLE_AvailContexts_20_20 = STATE_VARIABLE_AvailContexts_0_3;
      // direct tailcall eliminated
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
parse_tree__modules__grab_maybe_qual_imported_modules_12_p_0(
  MR_String SourceFileName_13,
  MR_Word SourceFileModuleName_14,
  MR_Word WhichGrab_15,
  MR_Word RawCompUnit_16,
  MR_Word * SrcItemBlocks_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_35,
  MR_Word * STATE_VARIABLE_IntImported_36,
  MR_Word * STATE_VARIABLE_IntUsed_37,
  MR_Word * STATE_VARIABLE_ImpImported_38,
  MR_Word * STATE_VARIABLE_ImpUsed_39)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 0)));
    MR_Word ModuleNameContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 1)));
    MR_Word RawItemBlocks_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawCompUnit_16, (MR_Integer) 2)));
    MR_Word NestedChildren_28;
    MR_Word MaybeTimestampMap_30;
    MR_Word PublicChildren_31;
    MR_Word FactDeps_32;
    MR_Word ForeignIncludeFiles_33;

    if ((WhichGrab_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;

      mercury__set__init_1_p_0(TypeCtorInfo_54_54, &NestedChildren_28);
      MaybeTimestampMap_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      parse_tree__modules__raw_item_blocks_to_src_2_p_0(RawItemBlocks_26, SrcItemBlocks_17);
      mercury__map__init_1_p_0(TypeCtorInfo_54_54, (MR_Word) &parse_tree__modules_scalar_common_1[0], &PublicChildren_31);
      FactDeps_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ForeignIncludeFiles_33 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0);
    }
    else
    {
      MR_Word TypeCtorInfo_53_53;
      MR_Word TypeCtorInfo_16_69;
      MR_Word MaybeTimestamp_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), WhichGrab_15, (MR_Integer) 0)));
      MR_Word Children_63;

      NestedChildren_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), WhichGrab_15, (MR_Integer) 1)));
      if ((MaybeTimestamp_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        MaybeTimestampMap_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Timestamp_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTimestamp_27, (MR_Integer) 0)));
        MR_Word Var_42;
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Timestamp_29));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
        }
        Var_42 = mercury__map__singleton_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (ModuleName_24)), ((MR_Box) (Var_43)));
        {
          MaybeTimestampMap_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTimestampMap_30, 0) = ((MR_Box) (Var_42));
        }
      }
      TypeCtorInfo_16_69 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0;
      parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(TypeCtorInfo_16_69, RawItemBlocks_26, &Children_63);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], Children_63);
      if (succeeded)
      {
        parse_tree__modules__raw_item_blocks_to_src_2_p_0(RawItemBlocks_26, SrcItemBlocks_17);
        mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[0], &PublicChildren_31);
      }
      else
      {
        MR_Word IFileItemBlocks_64;
        MR_Word NoIFileItemBlocks_65;
        MR_Word IFileSrcItemBlocks_66;
        MR_Word NoIFileSrcItemBlocks_67;

        parse_tree__comp_unit_interface__get_int_and_impl_4_p_0((MR_Integer) 0, RawCompUnit_16, &IFileItemBlocks_64, &NoIFileItemBlocks_65);
        parse_tree__modules__raw_item_blocks_to_src_2_p_0(IFileItemBlocks_64, &IFileSrcItemBlocks_66);
        parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(NoIFileItemBlocks_65, &NoIFileSrcItemBlocks_67);
        *SrcItemBlocks_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[5], IFileSrcItemBlocks_66, NoIFileSrcItemBlocks_67);
        parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(TypeCtorInfo_16_69, IFileItemBlocks_64, &PublicChildren_31);
      }
      TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0;
      parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(TypeCtorInfo_53_53, RawItemBlocks_26, &FactDeps_32);
      parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(TypeCtorInfo_53_53, RawItemBlocks_26, &ForeignIncludeFiles_33);
    }
    parse_tree__modules__make_module_and_imports_12_p_0(SourceFileName_13, SourceFileModuleName_14, ModuleName_24, ModuleNameContext_25, *SrcItemBlocks_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), PublicChildren_31, NestedChildren_28, FactDeps_32, ForeignIncludeFiles_33, MaybeTimestampMap_30, STATE_VARIABLE_ModuleAndImports_35);
    parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(RawItemBlocks_26, STATE_VARIABLE_IntImported_36, STATE_VARIABLE_IntUsed_37, STATE_VARIABLE_ImpImported_38, STATE_VARIABLE_ImpUsed_39);
  }
}

static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
  MR_String SourceFileName_13,
  MR_Word SourceFileModuleName_14,
  MR_Word ModuleName_15,
  MR_Word ModuleNameContext_16,
  MR_Word SrcItemBlocks0_17,
  MR_Word Specs_18,
  MR_Word PublicChildren_19,
  MR_Word NestedChildren_20,
  MR_Word FactDeps_21,
  MR_Word ForeignIncludeFiles_22,
  MR_Word MaybeTimestampMap_23,
  MR_Word * Module_24)
{
  {
    MR_Word TypeCtorInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_47_47;
    MR_Word SrcItemBlocks_25;
    MR_Word Ancestors_26;
    MR_Word IntDeps_27;
    MR_Word ImpDeps_28;
    MR_Word IndirectDeps_29;
    MR_Word IncludeDeps_30;
    MR_Word ForeignImports_31;
    MR_Word Errors_32;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String Var_42;

    parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, ModuleName_15, ((MR_Box) ((MR_Integer) 0)), SrcItemBlocks0_17, &SrcItemBlocks_25);
    TypeCtorInfo_44_44 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__set__init_1_p_0(TypeCtorInfo_44_44, &Ancestors_26);
    TypeInfo_45_45 = (MR_Word) &parse_tree__modules_scalar_common_1[0];
    mercury__map__init_1_p_0(TypeCtorInfo_44_44, TypeInfo_45_45, &IntDeps_27);
    mercury__map__init_1_p_0(TypeCtorInfo_44_44, TypeInfo_45_45, &ImpDeps_28);
    mercury__set__init_1_p_0(TypeCtorInfo_44_44, &IndirectDeps_29);
    mercury__map__init_1_p_0(TypeCtorInfo_44_44, TypeInfo_45_45, &IncludeDeps_30);
    ForeignImports_31 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    mercury__set__init_1_p_0((MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0, &Errors_32);
    TypeInfo_47_47 = (MR_Word) &parse_tree__modules_scalar_common_1[7];
    Var_36 = mercury__cord__init_0_f_0(TypeInfo_47_47);
    Var_37 = mercury__cord__init_0_f_0(TypeInfo_47_47);
    Var_38 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[3]);
    Var_39 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[8]);
    Var_40 = mercury__map__init_0_f_0(TypeCtorInfo_44_44, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    Var_42 = mercury__dir__this_directory_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      *Module_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SourceFileModuleName_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleName_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleNameContext_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Ancestors_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntDeps_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImpDeps_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IndirectDeps_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (IncludeDeps_30));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (PublicChildren_19));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (NestedChildren_20));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (FactDeps_21));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ForeignImports_31));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignIncludeFiles_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (SrcItemBlocks_25));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Specs_18));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Errors_32));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (MaybeTimestampMap_23));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_42));
    }
  }
}

static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word SectionContext_7;
      MR_Word Incls_8;
      MR_Word Avails_9;
      MR_Word Items_10;
      MR_Word RevClauses_11;
      MR_Word RevImpDecls_12;
      MR_Word STATE_VARIABLE_SrcItemBlocks_18_18;
      MR_Word STATE_VARIABLE_SrcItemBlocks_24_24;
      MR_Word _Section_6;

      parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(RawItemBlocks_4, &STATE_VARIABLE_SrcItemBlocks_18_18);
      _Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 0)));
      SectionContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 1)));
      Incls_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 2)));
      Avails_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 3)));
      Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 4)));
      parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(Items_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevClauses_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevImpDecls_12);
      succeeded = (RevClauses_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        STATE_VARIABLE_SrcItemBlocks_24_24 = STATE_VARIABLE_SrcItemBlocks_18_18;
      else
      {
        MR_Word Clauses_13;
        MR_Word ClauseItemBlock_14;

        mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, RevClauses_11, &Clauses_13);
        {
          ClauseItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 1) = ((MR_Box) (SectionContext_7));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ClauseItemBlock_14, 4) = ((MR_Box) (Clauses_13));
        }
        {
          STATE_VARIABLE_SrcItemBlocks_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_SrcItemBlocks_24_24, 0) = ((MR_Box) (ClauseItemBlock_14));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_SrcItemBlocks_24_24, 1) = ((MR_Box) (STATE_VARIABLE_SrcItemBlocks_18_18));
        }
      }
      succeeded = (Incls_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (Avails_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (RevImpDecls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (succeeded)
        *HeadVar__2_2 = STATE_VARIABLE_SrcItemBlocks_24_24;
      else
      {
        MR_Word ImpDecls_15;
        MR_Word ImpDeclItemBlock_16;

        mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, RevImpDecls_12, &ImpDecls_15);
        {
          ImpDeclItemBlock_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_16, 0) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_16, 1) = ((MR_Box) (SectionContext_7));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_16, 2) = ((MR_Box) (Incls_8));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_16, 3) = ((MR_Box) (Avails_9));
          MR_hl_field(MR_mktag(0), ImpDeclItemBlock_16, 4) = ((MR_Box) (ImpDecls_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ImpDeclItemBlock_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SrcItemBlocks_24_24));
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevImpDecls_5 = STATE_VARIABLE_RevImpDecls_0_4;
      *STATE_VARIABLE_RevClauses_3 = STATE_VARIABLE_RevClauses_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
              STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
              STATE_VARIABLE_RevImpDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 0) = ((MR_Box) (Item_12));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevImpDecls_0_4));
            }
            STATE_VARIABLE_RevClauses_43_43 = STATE_VARIABLE_RevClauses_0_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0)))) {
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
                  STATE_VARIABLE_RevImpDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 0) = ((MR_Box) (Item_12));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevImpDecls_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevImpDecls_0_4));
                }
                STATE_VARIABLE_RevClauses_43_43 = STATE_VARIABLE_RevClauses_0_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1)));
                MR_Word Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 0)));
                MR_Word AllowedInInterface_24;
                MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 1)));
                MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 2)));
                MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragma_19, (MR_Integer) 3)));

                AllowedInInterface_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_20);
                switch (AllowedInInterface_24) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (Item_12));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_2));
                      }
                      STATE_VARIABLE_RevImpDecls_41_41 = STATE_VARIABLE_RevImpDecls_0_4;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        STATE_VARIABLE_RevImpDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
                  STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SrcItemBlock_5;
    MR_Word SrcItemBlocks_6;
    MR_Word Section_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 0)));
    MR_Word SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 1)));
    MR_Word Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 2)));
    MR_Word Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 3)));
    MR_Word Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 4)));
    MR_Word SrcSection_12;

    switch (Section_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        SrcSection_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        SrcSection_12 = (MR_Integer) 0;
        break;
    }
    {
      SrcItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 0) = ((MR_Box) (SrcSection_12));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 1) = ((MR_Box) (SectionContext_8));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 2) = ((MR_Box) (Incls_9));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 3) = ((MR_Box) (Avails_10));
      MR_hl_field(MR_mktag(0), SrcItemBlock_5, 4) = ((MR_Box) (Items_11));
    }
    parse_tree__modules__raw_item_blocks_to_src_2_p_0(RawItemBlocks_4, &SrcItemBlocks_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SrcItemBlock_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcItemBlocks_6));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____import_or_use_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__modules____Compare____import_or_use_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__modules____Unify____int_section_maker_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    parse_tree__modules____Compare____int_section_maker_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____module_import_or_use_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__modules____Compare____module_import_or_use_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__modules____Unify____module_inclusion_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__modules____Compare____module_inclusion_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__modules____Unify____opt_file_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__modules____Compare____opt_file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__modules____Unify____process_interface_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__modules____Compare____process_interface_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__modules____Unify____section_appender_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    parse_tree__modules____Compare____section_appender_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    succeeded = parse_tree__modules____Unify____section_visibility_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    parse_tree__modules____Compare____section_visibility_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__modules____Unify____which_grab_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__modules____Unify____which_grab_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__modules____Compare____which_grab_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__modules____Compare____which_grab_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_int_section_maker_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_opt_file_type_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_process_interface_kind_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_section_appender_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_section_visibility_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_which_grab_0);
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
