/*
** Automatically generated from `grab_modules.m'
** by the Mercury compiler,
** version rotd-2021-12-06
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


// :- module parse_tree.grab_modules.
// :- implementation.

/*
INIT mercury__parse_tree__grab_modules__init
ENDINIT
*/

#include "parse_tree.grab_modules.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_accessibility_info_0_0[6];

static const MR_ConstString parse_tree__grab_modules__parse_tree__grab_modules__field_names_import_accessibility_info_0_0[6];

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_import_accessibility_info_0_0[6];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_accessibility_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_accessibility_info_0_0[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_accessibility_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_accessibility_info_0[1];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_accessibility_info_0[1];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_1;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_2;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_import_and_or_use_0[3];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_import_and_or_use_0[3];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_and_or_use_0[3];

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_or_use_context_0_0[2];

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_import_or_use_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_or_use_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_or_use_context_0_0[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_or_use_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_or_use_context_0[1];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_or_use_context_0[1];

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_include_context_0_0[2];

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_include_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_include_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_include_context_0_0[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_include_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_include_context_0[1];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_include_context_0[1];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_abstract_section_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_abstract_section_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_abstract_section_0[2];

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_ancestor_info_0_0[4];

static const MR_ConstString parse_tree__grab_modules__parse_tree__grab_modules__field_names_missing_ancestor_info_0_0[4];

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_missing_ancestor_info_0_0[4];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_ancestor_info_0_0[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_ancestor_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_ancestor_info_0[1];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_ancestor_info_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0;

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_where_0_0[1];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_0;

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_1;

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_2;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_1[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_where_0[2];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_where_0[3];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_where_0[3];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_opt_file_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_opt_file_type_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_opt_file_type_0[2];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_parent_or_ancestor_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_parent_or_ancestor_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_parent_or_ancestor_0[2];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0[2];

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_seen_includes_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_seen_includes_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_seen_includes_0[2];

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1667__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1648__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1620__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1205__1_3_p_0(
  MR_Word HeadVar__1_139,
  MR_Word HeadVar__2_140,
  MR_Word * HeadVar__3_141);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1193__1_3_p_0(
  MR_Word HeadVar__1_129,
  MR_Word HeadVar__2_130,
  MR_Word * HeadVar__3_131);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__441__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_19);

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____seen_includes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____opt_file_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____opt_file_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_abstract_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____include_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____include_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____import_or_use_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_or_use_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____import_and_or_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____import_accessibility_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_accessibility_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10);

static MR_Word MR_CALL 
parse_tree__grab_modules__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__grab_modules__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2);

static void MR_CALL 
parse_tree__grab_modules__report_missing_include_6_p_0(
  MR_Word SeenIncludes_7,
  MR_Word ParentModule_8,
  MR_String SubModule_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__grab_modules__report_abstract_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word ModuleName_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static MR_Word MR_CALL 
parse_tree__grab_modules__wrap_module_name_1_f_0(
  MR_Word Module_3);

static MR_Box MR_CALL 
parse_tree__grab_modules__report_missing_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__report_missing_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MissingWhere_8,
  MR_Word MissingModuleName_9,
  MR_Word SrcIntInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0(
  MR_Word CurrentModule_8,
  MR_Word ParentOrAncestor_9,
  MR_Word ImportUseMap_10,
  MR_Word ImportedModule_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_MissingAncestorMap_0_34,
  MR_Word * STATE_VARIABLE_MissingAncestorMap_35);

static void MR_CALL 
parse_tree__grab_modules__update_iu_and_least_context_5_p_0(
  MR_Word IoUC_6,
  MR_Word STATE_VARIABLE_ImportAndOrUse_0_11,
  MR_Word * STATE_VARIABLE_ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_LeastContext_0_13,
  MR_Word * STATE_VARIABLE_LeastContext_14);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreePlainOpt_14,
  MR_Word STATE_VARIABLE_ReadModules_0_46,
  MR_Word * STATE_VARIABLE_ReadModules_47,
  MR_Word STATE_VARIABLE_InclMap_0_48,
  MR_Word * STATE_VARIABLE_InclMap_49,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_50,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_51,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_52,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_53,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_54,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_55);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IntForOptSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_26,
  MR_Word * STATE_VARIABLE_ReadModules_27,
  MR_Word STATE_VARIABLE_InclMap_0_28,
  MR_Word * STATE_VARIABLE_InclMap_29,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_31,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_32,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_33,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_34,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_35);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt2_15,
  MR_Word ReadWhyInt2_16,
  MR_Word STATE_VARIABLE_ReadModules_0_38,
  MR_Word * STATE_VARIABLE_ReadModules_39,
  MR_Word STATE_VARIABLE_InclMap_0_40,
  MR_Word * STATE_VARIABLE_InclMap_41,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_42,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_43,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_44,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_45,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_46,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_47);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word DirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt1_15,
  MR_Word ReadWhyInt1_16,
  MR_Word STATE_VARIABLE_ReadModules_0_46,
  MR_Word * STATE_VARIABLE_ReadModules_47,
  MR_Word STATE_VARIABLE_InclMap_0_48,
  MR_Word * STATE_VARIABLE_InclMap_49,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_50,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_51,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_52,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_53,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_54,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_55);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word AncestorSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_ReadModules_0_54,
  MR_Word * STATE_VARIABLE_ReadModules_55,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_56,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_57,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_58,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_59,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_60,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_61,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_62,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_63);

static void MR_CALL 
parse_tree__grab_modules__append_one_or_more_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * AB_6);

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleNames_6);

static void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_11_p_0(
  MR_Word Globals_1,
  MR_Word VeryVerbose_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7,
  MR_Word STATE_VARIABLE_Error_0_8,
  MR_Word * STATE_VARIABLE_Error_9);

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_files_17_p_0(
  MR_Word Globals_1,
  MR_Word VeryVerbose_2,
  MR_Word ReadOptFilesTransitively_3,
  MR_Word HeadVar__4_4,
  MR_Word DontQueueOptModules0_5,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_6,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_7,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_8,
  MR_Word * STATE_VARIABLE_ExplicitDeps_9,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_10,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Error_0_14,
  MR_Word * STATE_VARIABLE_Error_15);

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_9_p_0(
  MR_Word Globals_10,
  MR_Word WarnOption_11,
  MR_String FileName_12,
  MR_Word ModuleSpecs_13,
  MR_Word ModuleErrors_14,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22,
  MR_Word STATE_VARIABLE_Error_0_23,
  MR_Word * STATE_VARIABLE_Error_24);

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_file_9_p_0(
  MR_Word Globals_10,
  MR_Word VeryVerbose_11,
  MR_Word ModuleName_12,
  MR_String * FileName_13,
  MR_Word * ParseTreePlainOpt_14,
  MR_Word * OptSpecs_15,
  MR_Word * OptError_16);

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_50_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DirectImports_0_4,
  MR_Word * STATE_VARIABLE_DirectImports_5,
  MR_Word STATE_VARIABLE_DirectUses_0_6,
  MR_Word * STATE_VARIABLE_DirectUses_7,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_9,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_amiu_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_25,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_26,
  MR_Word STATE_VARIABLE_Baggage_0_27,
  MR_Word * STATE_VARIABLE_Baggage_28,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_29,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_30);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(
  MR_Word PT0_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_9,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_10);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy3_15,
  MR_Word Modules_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23,
  MR_Word STATE_VARIABLE_Baggage_0_24,
  MR_Word * STATE_VARIABLE_Baggage_25,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_26,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_27);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_7,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_8,
  MR_Word STATE_VARIABLE_Baggage_0_9,
  MR_Word * STATE_VARIABLE_Baggage_10,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__process_module_int3_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy3_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt3_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_30,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_31,
  MR_Word STATE_VARIABLE_Baggage_0_32,
  MR_Word * STATE_VARIABLE_Baggage_33,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_34,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_35);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12);

static void MR_CALL 
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4);

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_3(
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
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_2(
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
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_1(
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
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugMakeIntUnit_3,
  MR_Word * ImportAccessibilityInfo_4);

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugCompUnit_0_13,
  MR_Word * STATE_VARIABLE_AugCompUnit_14);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_50_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugCompUnit_0_13,
  MR_Word * STATE_VARIABLE_AugCompUnit_14);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_acu_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy0_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt0_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy2_15,
  MR_Word Modules_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23,
  MR_Word STATE_VARIABLE_Baggage_0_24,
  MR_Word * STATE_VARIABLE_Baggage_25,
  MR_Word STATE_VARIABLE_AugCompUnit_0_26,
  MR_Word * STATE_VARIABLE_AugCompUnit_27);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_25,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_27,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_28,
  MR_Word STATE_VARIABLE_Baggage_0_29,
  MR_Word * STATE_VARIABLE_Baggage_30,
  MR_Word STATE_VARIABLE_AugCompUnit_0_31,
  MR_Word * STATE_VARIABLE_AugCompUnit_32);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugCompUnit_0_13,
  MR_Word * STATE_VARIABLE_AugCompUnit_14);

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy2_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt2_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6);

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_5(
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
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_4(
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
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_3(
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
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_2(
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
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_1(
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
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugCompUnit_3,
  MR_Word * ImportAccessibilityInfo_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(
  MR_Word ParseTreeModuleSrc_12,
  MR_Word STATE_VARIABLE_ReadModules_0_63,
  MR_Word * STATE_VARIABLE_ReadModules_64,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_65,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_66,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_67,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_68,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_69,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_70,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_71,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_72);

static void MR_CALL 
parse_tree__grab_modules__recomp_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3);

static void MR_CALL 
parse_tree__grab_modules__record_includes_acc_4_p_0(
  MR_Word Section_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InclMap_0_3,
  MR_Word * STATE_VARIABLE_InclMap_4);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word ImportAccessibilityInfo_5,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word Module_11,
  MR_Word Contexts_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_8,
  MR_Word * STATE_VARIABLE_Baggage_9);

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy1_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt1_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32,
  MR_Word STATE_VARIABLE_Baggage_0_33,
  MR_Word * STATE_VARIABLE_Baggage_34,
  MR_Word STATE_VARIABLE_AugCompUnit_0_35,
  MR_Word * STATE_VARIABLE_AugCompUnit_36);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_10,
  MR_Word * STATE_VARIABLE_AugCompUnit_11);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_15,
  MR_Word * STATE_VARIABLE_AugCompUnit_16);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(
  MR_Word NewSpecs_5,
  MR_Word NewErrors_6,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13);

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Baggage_0_18,
  MR_Word * STATE_VARIABLE_Baggage_19);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_accessibility_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____import_accessibility_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____opt_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____opt_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____seen_includes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[15][3];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[48][2];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[6][1];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[3][4];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[3][8];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[2][9];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][10];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[3][6];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[9][15];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_10[2][7];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_11[5][5];




static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_2[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__grab_modules__grab_trans_opt_files_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[1])),
    ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[2])),
    ((MR_Box) (parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[2])),
    ((MR_Box) (parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[3])),
    ((MR_Box) (parse_tree__grab_modules__report_missing_ancestor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[4])),
    ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the absence of an"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "prevents access to the"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for its"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Adding such a declaration would obsolete"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[24])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a submodule named"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is visible only to its other submodules."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[24])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a submodule"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a visible submodule"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[6][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opt"))))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt"))))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_where_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_parent_or_ancestor_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[9][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int1_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_10[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_11[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_accessibility_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
};

static const MR_ConstString parse_tree__grab_modules__parse_tree__grab_modules__field_names_import_accessibility_info_0_0[6] = {
  (MR_String) "iai_read_modules",
  (MR_String) "iai_seen_includes",
  (MR_String) "iai_inclusion_map",
  (MR_String) "iai_src_int_import_use_map",
  (MR_String) "iai_src_imp_import_use_map",
  (MR_String) "iai_ancestor_import_use_map"
};

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_import_accessibility_info_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_accessibility_info_0_0 = {
  (MR_String) "import_accessibility_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_accessibility_info_0_0,
  parse_tree__grab_modules__parse_tree__grab_modules__field_names_import_accessibility_info_0_0,
  parse_tree__grab_modules__parse_tree__grab_modules__field_locns_import_accessibility_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_accessibility_info_0_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_accessibility_info_0_0
};

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_accessibility_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_accessibility_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_accessibility_info_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_accessibility_info_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_accessibility_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_accessibility_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____import_accessibility_info_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____import_accessibility_info_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "import_accessibility_info",
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_accessibility_info_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_accessibility_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_accessibility_info_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_0 = {
  (MR_String) "import_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_1 = {
  (MR_String) "use_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_2 = {
  (MR_String) "import_and_use",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_import_and_or_use_0[3] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_1,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_import_and_or_use_0[3] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_2,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_import_and_or_use_0_1
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_and_or_use_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____import_and_or_use_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____import_and_or_use_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "import_and_or_use",
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_import_and_or_use_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_import_and_or_use_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_and_or_use_0,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_import_or_use_context_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_or_use_context_0_0 = {
  (MR_String) "import_or_use_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_or_use_context_0_0,
  NULL,
  parse_tree__grab_modules__parse_tree__grab_modules__field_locns_import_or_use_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_or_use_context_0_0
};

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_or_use_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_or_use_context_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_or_use_context_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_or_use_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____import_or_use_context_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____import_or_use_context_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "import_or_use_context",
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_or_use_context_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_or_use_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_or_use_context_0,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_include_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_include_context_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_include_context_0_0 = {
  (MR_String) "include_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__grab_modules__parse_tree__grab_modules__field_types_include_context_0_0,
  NULL,
  parse_tree__grab_modules__parse_tree__grab_modules__field_locns_include_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_include_context_0_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_include_context_0_0
};

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_include_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_include_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_include_context_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_include_context_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_include_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____include_context_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____include_context_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "include_context",
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_include_context_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_include_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_include_context_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_0 = {
  (MR_String) "non_abstract_section",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_1 = {
  (MR_String) "abstract_section",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_abstract_section_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_abstract_section_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_1,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_abstract_section_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_abstract_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____maybe_abstract_section_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____maybe_abstract_section_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "maybe_abstract_section",
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_abstract_section_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_abstract_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_abstract_section_0,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_ancestor_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_parent_or_ancestor_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString parse_tree__grab_modules__parse_tree__grab_modules__field_names_missing_ancestor_info_0_0[4] = {
  (MR_String) "mai_modules",
  (MR_String) "mai_max_depth",
  (MR_String) "mai_import_use",
  (MR_String) "mai_least_context"
};

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_missing_ancestor_info_0_0[4] = {
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

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0 = {
  (MR_String) "missing_ancestor_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_ancestor_info_0_0,
  parse_tree__grab_modules__parse_tree__grab_modules__field_names_missing_ancestor_info_0_0,
  parse_tree__grab_modules__parse_tree__grab_modules__field_locns_missing_ancestor_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_ancestor_info_0_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0
};

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_ancestor_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_ancestor_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_ancestor_info_0[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_ancestor_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____missing_ancestor_info_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____missing_ancestor_info_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "missing_ancestor_info",
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_ancestor_info_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_ancestor_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_ancestor_info_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__grab_modules____Unify____missing_ancestor_map_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____missing_ancestor_map_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "missing_ancestor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_where_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
};

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_0 = {
  (MR_String) "missing_in_src_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_where_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_1 = {
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

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_2 = {
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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_1,
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_2
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_1[1] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_0
};

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_where_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_where_0[3] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_2,
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_1,
  &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_where_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____missing_where_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____missing_where_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "missing_where",
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_where_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_where_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_where_0,

};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_module_import_or_use_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__grab_modules____Unify____module_import_or_use_map_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____module_import_or_use_map_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "module_import_or_use_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_module_inclusion_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__grab_modules____Unify____module_inclusion_map_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____module_inclusion_map_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "module_inclusion_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_opt_file_type_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_opt_file_type_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_opt_file_type_0_1
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_opt_file_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____opt_file_type_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____opt_file_type_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "opt_file_type",
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_opt_file_type_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_opt_file_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_opt_file_type_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_0 = {
  (MR_String) "poa_parent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_1 = {
  (MR_String) "poa_ancestor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_1,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_parent_or_ancestor_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_parent_or_ancestor_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_parent_or_ancestor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____parent_or_ancestor_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____parent_or_ancestor_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "parent_or_ancestor",
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_parent_or_ancestor_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_parent_or_ancestor_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_parent_or_ancestor_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0 = {
  (MR_String) "decided_not_to_read",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1 = {
  (MR_String) "decided_to_read",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_read_decision_0_1
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_read_decision_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____read_decision_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____read_decision_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "read_decision",
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_read_decision_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_0 = {
  (MR_String) "seen_only_int_includes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_1 = {
  (MR_String) "seen_all_includes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_seen_includes_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_seen_includes_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_1,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_seen_includes_0_0
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_seen_includes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____seen_includes_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____seen_includes_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "seen_includes",
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_seen_includes_0 },
  {     parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_seen_includes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_seen_includes_0,

};

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1667__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1648__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1620__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1205__1_3_p_0(
  MR_Word HeadVar__1_139,
  MR_Word HeadVar__2_140,
  MR_Word * HeadVar__3_141)
{
  parse_tree__grab_modules__append_one_or_more_3_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), HeadVar__1_139, HeadVar__2_140, HeadVar__3_141);
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1193__1_3_p_0(
  MR_Word HeadVar__1_129,
  MR_Word HeadVar__2_130,
  MR_Word * HeadVar__3_131)
{
  parse_tree__grab_modules__append_one_or_more_3_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), HeadVar__1_129, HeadVar__2_130, HeadVar__3_131);
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__441__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_19)
{
  mercury__io__write_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stream_5, ((MR_Box) (HeadVar__2_19)));
}

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0(
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
parse_tree__grab_modules____Unify____seen_includes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0(
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
parse_tree__grab_modules____Unify____read_decision_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0(
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
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____opt_file_type_0_0(
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
parse_tree__grab_modules____Unify____opt_file_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_where_0_0(
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

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_5)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_where_0_0(
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
              TypeInfo_11_11 = (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
parse_tree__grab_modules____Unify____missing_ancestor_info_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
parse_tree__grab_modules____Compare____maybe_abstract_section_0_0(
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
parse_tree__grab_modules____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____include_context_0_0(
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
parse_tree__grab_modules____Unify____include_context_0_0(
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
parse_tree__grab_modules____Compare____import_or_use_context_0_0(
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
parse_tree__grab_modules____Unify____import_or_use_context_0_0(
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
parse_tree__grab_modules____Compare____import_and_or_use_0_0(
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
parse_tree__grab_modules____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_accessibility_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_accessibility_info_0_0(
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
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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
parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 5))));
    MR_Word MN_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word Map_8;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 4))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 6))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 7))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Map_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_36));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 4))));
    MR_Word MN_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word Map_8;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 2))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 3))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 5))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 6))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 7))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Map_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__grab_modules__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Context_4;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__is_non_abstract_include_1_p_0(
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
parse_tree__grab_modules__report_missing_include_6_p_0(
  MR_Word SeenIncludes_7,
  MR_Word ParentModule_8,
  MR_String SubModule_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word SubmodulePieces_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;

    switch (SeenIncludes_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        SubmodulePieces_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[41]));
        break;
      case (MR_Integer) 0:
        SubmodulePieces_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[43]));
        break;
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ParentModule_8));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[45])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[34])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[33])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (SubModule_9));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[26])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[46])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubmodulePieces_12, Var_36);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_23, Var_35);
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_missing_include\'/6"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
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
parse_tree__grab_modules__report_abstract_include_5_p_0(
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
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[39])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[35])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[34])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[33])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_abstract_include\'/5"));
      MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_8));
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
}

static MR_Box MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Context_4;

    conv0_Context_4 = parse_tree__grab_modules__project_out_import_or_use_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Context_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word ModuleName_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word HeadIoUC_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_12, (MR_Integer) 0))));
    MR_Word TailIoUCs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoUCs_12, (MR_Integer) 1))));
    MR_Word Contexts_16;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (HeadIoUC_14));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (TailIoUCs_15));
    }
    Contexts_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[14]), Var_20);
    parse_tree__grab_modules__report_any_missing_includes_7_p_0(ReadModules_8, SeenIncludes_9, InclMap_10, ModuleName_11, Contexts_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
  }
}

static MR_Word MR_CALL 
parse_tree__grab_modules__wrap_module_name_1_f_0(
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
parse_tree__grab_modules__report_missing_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__grab_modules__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_missing_ancestor_6_p_0(
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
    MR_Box conv1_ModuleS_22;
    MR_Box conv2_DeclarationS_23;
    MR_Word IoUCs_27;
    MR_Word TypeInfo_151_151;
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
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[11]));
        break;
      case (MR_Integer) 0:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[12]));
        break;
      case (MR_Integer) 1:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[7]));
        break;
    }
    switch (MR_tag((MR_Word) MissingWhere_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InTheInterface_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        InTheInterface_20 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[14]));
        break;
    }
    DescendantPieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[13]), DescendantModuleNames_16);
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
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[20])));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[6])));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[19])));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[10])));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[18])));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[17])));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[16])));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[15])));
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
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[23])));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
    }
    Var_115 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", DescendantPieces_21);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[26])));
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_106, Var_114);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InTheInterface_20, Var_105);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_101, Var_104);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DeclPieces_18, Var_100);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[22])), Var_99);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InTheInterface_20, Var_94);
    MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, Var_93);
    {
      MainMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_25, 0) = ((MR_Box) (LeastContext_15));
      MR_hl_field(MR_mktag(0), MainMsg_25, 1) = ((MR_Box) (MainPieces_24));
    }
    succeeded = ((MR_tag((MR_Word) MissingWhere_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      SrcImpImportUseMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MissingWhere_8, (MR_Integer) 0))));
      TypeInfo_151_151 = (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_151_151, SrcImpImportUseMap_26, ((MR_Box) (MissingModuleName_9)), &conv3_IoUCs_27);
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
      MR_Word Var_125;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_139;

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
        Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ImportOrUseDecl_32));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[32])));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[28])));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
      }
      {
        ImpPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[27])));
        MR_hl_field(MR_mktag(1), ImpPieces_33, 1) = ((MR_Box) (Var_125));
      }
      {
        ImpMsg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ImpMsg_34, 0) = ((MR_Box) (ImpContext_31));
        MR_hl_field(MR_mktag(0), ImpMsg_34, 1) = ((MR_Box) (ImpPieces_33));
      }
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (ImpMsg_34));
        MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msgs_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_35, 0) = ((MR_Box) (MainMsg_25));
        MR_hl_field(MR_mktag(1), Msgs_35, 1) = ((MR_Box) (Var_139));
      }
    }
    else
      {
        Msgs_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_35, 0) = ((MR_Box) (MainMsg_25));
        MR_hl_field(MR_mktag(1), Msgs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_missing_ancestor\'/6"));
      MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(MR_mktag(0), Spec_36, 3) = ((MR_Box) (Msgs_35));
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
parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_2(
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

    parse_tree__grab_modules__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_LeastContext_14);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ImportAndOrUse_12));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_LeastContext_14));
  }
}

static void MR_CALL 
parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_1(
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

    parse_tree__grab_modules__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_LeastContext_14);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ImportAndOrUse_12));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_LeastContext_14));
  }
}

static void MR_CALL 
parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0(
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

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), ImportUseMap_10, ((MR_Box) (ParentModule_14)), &conv0__ParentIoUCs_16);
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

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), STATE_VARIABLE_MissingAncestorMap_0_34, ((MR_Box) (ParentModule_14)), &conv1_MissingAncestorInfo0_19);
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
          parse_tree__grab_modules__update_iu_and_least_context_5_p_0(HeadIoUC_17, ImportAndOrUse0_22, &ImportAndOrUse1_26, LeastContext0_23, &LeastContext1_27);
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[11]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse1_26)), &conv5_ImportAndOrUse_28, ((MR_Box) (LeastContext1_27)), &conv4_LeastContext_29);
          ImportAndOrUse_28 = ((MR_Word) (conv5_ImportAndOrUse_28));
          LeastContext_29 = ((MR_Word) (conv4_LeastContext_29));
          {
            MissingAncestorInfo_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_30, 0) = ((MR_Box) (ChildModules_24));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_30, 1) = (MR_Box) (((((MR_Unsigned) (PoA_25) << 2)) | (MR_Unsigned) (ImportAndOrUse_28)));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_30, 2) = ((MR_Box) (LeastContext_29));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_30)), STATE_VARIABLE_MissingAncestorMap_0_34, STATE_VARIABLE_MissingAncestorMap_35);
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
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[12]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse0_42)), &conv9_ImportAndOrUse_44, ((MR_Box) (HeadContext_32)), &conv8_LeastContext_45);
          ImportAndOrUse_44 = ((MR_Word) (conv9_ImportAndOrUse_44));
          LeastContext_45 = ((MR_Word) (conv8_LeastContext_45));
          {
            MissingAncestorInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_46, 0) = ((MR_Box) (ChildModules_43));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_46, 1) = (MR_Box) (((((MR_Unsigned) (ParentOrAncestor_9) << 2)) | (MR_Unsigned) (ImportAndOrUse_44)));
            MR_hl_field(MR_mktag(0), MissingAncestorInfo_46, 2) = ((MR_Box) (LeastContext_45));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_46)), STATE_VARIABLE_MissingAncestorMap_0_34, &STATE_VARIABLE_MissingAncestorMap_39_39);
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
parse_tree__grab_modules__update_iu_and_least_context_5_p_0(
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
      succeeded = mercury__term__is_dummy_context_1_p_0(Context_10);
      succeeded = !(succeeded);
    }
    if (succeeded)
      *STATE_VARIABLE_LeastContext_14 = Context_10;
    else
      *STATE_VARIABLE_LeastContext_14 = STATE_VARIABLE_LeastContext_0_13;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreePlainOpt_14,
  MR_Word STATE_VARIABLE_ReadModules_0_46,
  MR_Word * STATE_VARIABLE_ReadModules_47,
  MR_Word STATE_VARIABLE_InclMap_0_48,
  MR_Word * STATE_VARIABLE_InclMap_49,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_50,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_51,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_52,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_53,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_54,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_55)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_14, (MR_Integer) 0))));
    MR_Word UseMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_14, (MR_Integer) 2))));

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_13, ((MR_Box) (ModuleName_20)));
    if (succeeded)
    {
      MR_Word Avails_45;

      Avails_45 = parse_tree__item_util__use_map_to_item_avails_1_f_0(UseMap_22);
      parse_tree__grab_modules__recomp_avails_acc_3_p_0(Avails_45, STATE_VARIABLE_AncestorImportUseMap_0_54, STATE_VARIABLE_AncestorImportUseMap_55);
    }
    else
      *STATE_VARIABLE_AncestorImportUseMap_55 = STATE_VARIABLE_AncestorImportUseMap_0_54;
    *STATE_VARIABLE_SrcImpImportUseMap_53 = STATE_VARIABLE_SrcImpImportUseMap_0_52;
    *STATE_VARIABLE_SrcIntImportUseMap_51 = STATE_VARIABLE_SrcIntImportUseMap_0_50;
    *STATE_VARIABLE_InclMap_49 = STATE_VARIABLE_InclMap_0_48;
    *STATE_VARIABLE_ReadModules_47 = STATE_VARIABLE_ReadModules_0_46;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IntForOptSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_26,
  MR_Word * STATE_VARIABLE_ReadModules_27,
  MR_Word STATE_VARIABLE_InclMap_0_28,
  MR_Word * STATE_VARIABLE_InclMap_29,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_31,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_32,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_33,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_34,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_35)
{
  switch (MR_tag((MR_Word) IntForOptSpec_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptSpec_14, (MR_Integer) 0))));

        parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27, STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29, STATE_VARIABLE_SrcIntImportUseMap_0_30, STATE_VARIABLE_SrcIntImportUseMap_31, STATE_VARIABLE_SrcImpImportUseMap_0_32, STATE_VARIABLE_SrcImpImportUseMap_33, STATE_VARIABLE_AncestorImportUseMap_0_34, STATE_VARIABLE_AncestorImportUseMap_35);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntForOptSpec_14, (MR_Integer) 0))));
        MR_Word ReadWhyInt1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntForOptSpec_14, (MR_Integer) 1))) & (MR_Integer) 7);

        parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(Ancestors_13, ParseTreeInt1_22, ReadWhyInt1_23, STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27, STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29, STATE_VARIABLE_SrcIntImportUseMap_0_30, STATE_VARIABLE_SrcIntImportUseMap_31, STATE_VARIABLE_SrcImpImportUseMap_0_32, STATE_VARIABLE_SrcImpImportUseMap_33, STATE_VARIABLE_AncestorImportUseMap_0_34, STATE_VARIABLE_AncestorImportUseMap_35);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IntForOptSpec_14, (MR_Integer) 0))));
        MR_Word ReadWhyInt2_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), IntForOptSpec_14, (MR_Integer) 1))) & (MR_Integer) 3);

        parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0(Ancestors_13, ParseTreeInt2_24, ReadWhyInt2_25, STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27, STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29, STATE_VARIABLE_SrcIntImportUseMap_0_30, STATE_VARIABLE_SrcIntImportUseMap_31, STATE_VARIABLE_SrcImpImportUseMap_0_32, STATE_VARIABLE_SrcImpImportUseMap_33, STATE_VARIABLE_AncestorImportUseMap_0_34, STATE_VARIABLE_AncestorImportUseMap_35);
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1648__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt2_15,
  MR_Word ReadWhyInt2_16,
  MR_Word STATE_VARIABLE_ReadModules_0_38,
  MR_Word * STATE_VARIABLE_ReadModules_39,
  MR_Word STATE_VARIABLE_InclMap_0_40,
  MR_Word * STATE_VARIABLE_InclMap_41,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_42,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_43,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_44,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_45,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_46,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_47)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_15, (MR_Integer) 0))));
    MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_15, (MR_Integer) 3))));
    MR_Word IntIncls_37;
    MR_Word Var_53;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_ReadModules_0_38, STATE_VARIABLE_ReadModules_39);
    IntIncls_37 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_25);
    switch (ReadWhyInt2_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 1, IntIncls_37, STATE_VARIABLE_InclMap_0_40, STATE_VARIABLE_InclMap_41);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_37, STATE_VARIABLE_InclMap_0_40, STATE_VARIABLE_InclMap_41);
        break;
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Ancestors_14));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (ModuleName_22));
    }
    mercury__require__expect_not_3_p_0(Var_53, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_47 = STATE_VARIABLE_AncestorImportUseMap_0_46;
    *STATE_VARIABLE_SrcImpImportUseMap_45 = STATE_VARIABLE_SrcImpImportUseMap_0_44;
    *STATE_VARIABLE_SrcIntImportUseMap_43 = STATE_VARIABLE_SrcIntImportUseMap_0_42;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1667__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectSpec_14, (MR_Integer) 0))));
    MR_Word ModuleName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_20, (MR_Integer) 0))));
    MR_Word IntInclMap_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_20, (MR_Integer) 2))));
    MR_Word IntIncls_68;
    MR_Word Var_71;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_56)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
    IntIncls_68 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_58);
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 1, IntIncls_68, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Ancestors_13));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (ModuleName_56));
    }
    mercury__require__expect_not_3_p_0(Var_71, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int3 file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
    *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
    *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1667__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectSpec_14, (MR_Integer) 0))));
    MR_Word ModuleName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_20, (MR_Integer) 0))));
    MR_Word IntInclMap_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_20, (MR_Integer) 2))));
    MR_Word IntIncls_68;
    MR_Word Var_71;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_56)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
    IntIncls_68 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_58);
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_68, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Ancestors_13));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (ModuleName_56));
    }
    mercury__require__expect_not_3_p_0(Var_71, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int3 file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
    *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
    *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1648__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectSpec_14, (MR_Integer) 0))));
    MR_Word ReadWhyInt2_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IndirectSpec_14, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ModuleName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_20, (MR_Integer) 0))));
    MR_Word IntInclMap_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_20, (MR_Integer) 3))));
    MR_Word IntIncls_70;
    MR_Word Var_76;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_55)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
    IntIncls_70 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_58);
    switch (ReadWhyInt2_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 1, IntIncls_70, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_70, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25);
        break;
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Ancestors_13));
      MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (ModuleName_55));
    }
    mercury__require__expect_not_3_p_0(Var_76, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
    *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
    *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word DirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31)
{
  {
    MR_Word ParseTreeInt1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectSpec_14, (MR_Integer) 0))));
    MR_Word ReadWhyInt1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DirectSpec_14, (MR_Integer) 1))) & (MR_Integer) 7);

    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(Ancestors_13, ParseTreeInt1_20, ReadWhyInt1_21, STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25, STATE_VARIABLE_SrcIntImportUseMap_0_26, STATE_VARIABLE_SrcIntImportUseMap_27, STATE_VARIABLE_SrcImpImportUseMap_0_28, STATE_VARIABLE_SrcImpImportUseMap_29, STATE_VARIABLE_AncestorImportUseMap_0_30, STATE_VARIABLE_AncestorImportUseMap_31);
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1620__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt1_15,
  MR_Word ReadWhyInt1_16,
  MR_Word STATE_VARIABLE_ReadModules_0_46,
  MR_Word * STATE_VARIABLE_ReadModules_47,
  MR_Word STATE_VARIABLE_InclMap_0_48,
  MR_Word * STATE_VARIABLE_InclMap_49,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_50,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_51,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_52,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_53,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_54,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_55)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_15, (MR_Integer) 0))));
    MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_15, (MR_Integer) 3))));
    MR_Word ImpInclMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_15, (MR_Integer) 4))));
    MR_Word IntIncls_44;
    MR_Word ImpIncls_45;
    MR_Word Var_65;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_ReadModules_0_46, STATE_VARIABLE_ReadModules_47);
    IntIncls_44 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_25);
    ImpIncls_45 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(ImpInclMap_26);
    switch (ReadWhyInt1_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 4:
        {
          MR_Word STATE_VARIABLE_InclMap_62_62;

          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_44, STATE_VARIABLE_InclMap_0_48, &STATE_VARIABLE_InclMap_62_62);
          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 1, ImpIncls_45, STATE_VARIABLE_InclMap_62_62, STATE_VARIABLE_InclMap_49);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_InclMap_58_58;

          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_44, STATE_VARIABLE_InclMap_0_48, &STATE_VARIABLE_InclMap_58_58);
          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, ImpIncls_45, STATE_VARIABLE_InclMap_58_58, STATE_VARIABLE_InclMap_49);
        }
        break;
      case (MR_Integer) 6:
        *STATE_VARIABLE_InclMap_49 = STATE_VARIABLE_InclMap_0_48;
        break;
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Ancestors_14));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (ModuleName_22));
    }
    mercury__require__expect_not_3_p_0(Var_65, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int1\'/13", (MR_String) "processing the .int file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_55 = STATE_VARIABLE_AncestorImportUseMap_0_54;
    *STATE_VARIABLE_SrcImpImportUseMap_53 = STATE_VARIABLE_SrcImpImportUseMap_0_52;
    *STATE_VARIABLE_SrcIntImportUseMap_51 = STATE_VARIABLE_SrcIntImportUseMap_0_50;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word AncestorSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_22,
  MR_Word * STATE_VARIABLE_ReadModules_23,
  MR_Word STATE_VARIABLE_InclMap_0_24,
  MR_Word * STATE_VARIABLE_InclMap_25,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_26,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_27,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_29,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_31)
{
  {
    MR_Word ParseTreeInt0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorSpec_14, (MR_Integer) 0))));

    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25, STATE_VARIABLE_SrcIntImportUseMap_0_26, STATE_VARIABLE_SrcIntImportUseMap_27, STATE_VARIABLE_SrcImpImportUseMap_0_28, STATE_VARIABLE_SrcImpImportUseMap_29, STATE_VARIABLE_AncestorImportUseMap_0_30, STATE_VARIABLE_AncestorImportUseMap_31);
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_ReadModules_0_54,
  MR_Word * STATE_VARIABLE_ReadModules_55,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_56,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_57,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_58,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_59,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_60,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_61,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_62,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_63)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_14, (MR_Integer) 0))));
    MR_Word InclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_14, (MR_Integer) 5))));
    MR_Word ImportUseMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_14, (MR_Integer) 10))));
    MR_Word IntIncls_48;
    MR_Word ImpIncls_49;
    MR_Word AllIncls_50;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)), STATE_VARIABLE_ReadModules_0_54, STATE_VARIABLE_ReadModules_55);
    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_25, &IntIncls_48, &ImpIncls_49);
    AllIncls_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntIncls_48, ImpIncls_49);
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, AllIncls_50, STATE_VARIABLE_MaybeAbstractInclMap_0_56, STATE_VARIABLE_MaybeAbstractInclMap_57);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_13, ((MR_Box) (ModuleName_20)));
    if (succeeded)
    {
      MR_Word IntAvails_51;
      MR_Word ImpAvails_52;
      MR_Word AllAvails_53;

      parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_30, &IntAvails_51, &ImpAvails_52);
      AllAvails_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_51, ImpAvails_52);
      parse_tree__grab_modules__recomp_avails_acc_3_p_0(AllAvails_53, STATE_VARIABLE_AncestorImportUseMap_0_62, STATE_VARIABLE_AncestorImportUseMap_63);
    }
    else
      *STATE_VARIABLE_AncestorImportUseMap_63 = STATE_VARIABLE_AncestorImportUseMap_0_62;
    *STATE_VARIABLE_SrcImpImportUseMap_61 = STATE_VARIABLE_SrcImpImportUseMap_0_60;
    *STATE_VARIABLE_SrcIntImportUseMap_59 = STATE_VARIABLE_SrcIntImportUseMap_0_58;
  }
}

static void MR_CALL 
parse_tree__grab_modules__append_one_or_more_3_p_0(
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

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__441__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleNames_6)
{
  {
    MR_Word ModuleNameStrs_8;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_10;

    Var_11 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[10]), ModuleNames_6);
    ModuleNameStrs_8 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModuleNameStrs_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10);
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AugCompUnit_10;

    parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AugCompUnit_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AugCompUnit_10));
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_11_p_0(
  MR_Word Globals_12,
  MR_Word TransOptModuleNames_13,
  MR_Word * FoundError_14,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24,
  MR_Word STATE_VARIABLE_AugCompUnit_0_25,
  MR_Word * STATE_VARIABLE_AugCompUnit_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_27,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_28)
{
  {
    MR_Word Verbose_19;
    MR_Word VeryVerbose_20;
    MR_Word ParseTreeTransOptsCord_21;
    MR_Word TransOptSpecs_22;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_Baggage_43_43;
    MR_Word Var_45;
    MR_Word Specs0_66;
    MR_Word Specs_67;
    MR_Box conv1_STATE_VARIABLE_AugCompUnit_26;
    MR_String Var_76;
    MR_String Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_String Var_48;
    MR_String Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 65, &Verbose_19);
    libs__file_util__maybe_write_string_4_p_0(Verbose_19, (MR_String) "% Reading .trans_opt files..\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 66, &VeryVerbose_20);
    Var_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0));
    parse_tree__grab_modules__read_trans_opt_files_11_p_0(Globals_12, VeryVerbose_20, TransOptModuleNames_13, Var_36, &ParseTreeTransOptsCord_21, (MR_Word) ((MR_Unsigned) 0U), &TransOptSpecs_22, (MR_Integer) 0, FoundError_14);
    Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ParseTreeTransOptsCord_21);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[9]), Var_41, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_25)), &conv1_STATE_VARIABLE_AugCompUnit_26);
    *STATE_VARIABLE_AugCompUnit_26 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_26));
    Specs0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 6))));
    Specs_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TransOptSpecs_22, Specs0_66);
    Var_76 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 0))));
    Var_77 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 1))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 2))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 3))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 4))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 5))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_23, (MR_Integer) 7))));
    {
      STATE_VARIABLE_Baggage_43_43 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 2) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 3) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 4) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 5) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 6) = ((MR_Box) (Specs_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, 7) = ((MR_Box) (Var_83));
    }
    Var_45 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
    Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 0))));
    Var_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 1))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 2))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 3))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 4))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 5))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_43_43, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Baggage_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_19, (MR_String) "% Done.\n");
    *STATE_VARIABLE_HaveReadModuleMaps_28 = STATE_VARIABLE_HaveReadModuleMaps_0_27;
  }
}

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_11_p_0(
  MR_Word Globals_1,
  MR_Word VeryVerbose_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7,
  MR_Word STATE_VARIABLE_Error_0_8,
  MR_Word * STATE_VARIABLE_Error_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Error_9 = STATE_VARIABLE_Error_0_8;
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *HeadVar__5_5 = HeadVar__4_4;
    }
    else
    {
      MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModuleNames_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_String FileName_34;
      MR_Word ParseTreeTransOpt_35;
      MR_Word TransOptSpecs_36;
      MR_Word TransOptError_37;
      MR_Word STATE_VARIABLE_ParseTreeTransOptsCord_47_47;
      MR_Word STATE_VARIABLE_Specs_48_48;
      MR_Word STATE_VARIABLE_Specs_50_50;
      MR_Word STATE_VARIABLE_Error_51_51;
      MR_Word STATE_VARIABLE_Specs_52_52;
      MR_String ModuleNameStr_70;
      MR_String Msg_71;
      MR_String Var_88;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_8;

      ModuleNameStr_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_28);
      Var_88 = mercury__string__f_43_43_2_f_0(ModuleNameStr_70, (MR_String) ".trans_opt\'... ");
      Msg_71 = mercury__string__f_43_43_2_f_0((MR_String) "% Reading \140", Var_88);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_2, Msg_71);
      libs__file_util__maybe_flush_output_3_p_0(VeryVerbose_2);
      parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_1, (MR_String) "predicate \140parse_tree.grab_modules.read_trans_opt_file\'/9", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[5])), ModuleName_28, &FileName_34);
      parse_tree__parse_module__actually_read_module_trans_opt_9_p_0(Globals_1, FileName_34, ModuleName_28, (MR_Word) ((MR_Unsigned) 0U), &ParseTreeTransOpt_35, &TransOptSpecs_36, &TransOptError_37);
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_2, (MR_String) " done.\n");
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (ParseTreeTransOpt_35)), HeadVar__4_4, &STATE_VARIABLE_ParseTreeTransOptsCord_47_47);
      STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TransOptSpecs_36, STATE_VARIABLE_Specs_0_6);
      parse_tree__grab_modules__update_opt_error_status_9_p_0(Globals_1, (MR_Integer) 16, FileName_34, TransOptSpecs_36, TransOptError_37, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Error_0_8, &STATE_VARIABLE_Error_51_51);
      parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(VeryVerbose_2, Globals_1, STATE_VARIABLE_Specs_50_50, &STATE_VARIABLE_Specs_52_52);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_29;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_ParseTreeTransOptsCord_47_47;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_52_52;
      next_value_of_STATE_VARIABLE_Error_0_8 = STATE_VARIABLE_Error_51_51;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      STATE_VARIABLE_Error_0_8 = next_value_of_STATE_VARIABLE_Error_0_8;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AugCompUnit_10;

    parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AugCompUnit_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AugCompUnit_10));
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_10_p_0(
  MR_Word Globals_11,
  MR_Word * FoundError_12,
  MR_Word STATE_VARIABLE_Baggage_0_57,
  MR_Word * STATE_VARIABLE_Baggage_58,
  MR_Word STATE_VARIABLE_AugCompUnit_0_59,
  MR_Word * STATE_VARIABLE_AugCompUnit_60,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_61,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_62)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_59, (MR_Integer) 0))));
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_17, (MR_Integer) 0))));
    MR_Word Ancestors0_19;
    MR_Word DirectDeps0_20;
    MR_Word DirectDeps_21;
    MR_Word OptModules_22;
    MR_Word VeryVerbose_23;
    MR_Word ReadOptFilesTransitively_24;
    MR_Word DontQueueOptModules_25;
    MR_Word ParseTreePlainOptsCord0_26;
    MR_Word ExplicitDeps_27;
    MR_Word ImplicitNeedsCord_28;
    MR_Word OptSpecs0_29;
    MR_Word OptError0_30;
    MR_Word ParseTreePlainOpts0_31;
    MR_Word OptTuple_32;
    MR_Word UnusedArgs_33;
    MR_Word StructureReuse_34;
    MR_Word ParseTreePlainOpts_40;
    MR_Word OptError_43;
    MR_Word OptSpecs_44;
    MR_Word OptModuleAncestors_45;
    MR_Word OldModuleAncestors_46;
    MR_Word OldModuleAndAncestors_47;
    MR_Word OptOnlyModuleAncestors_48;
    MR_Word OptAncestorImports_49;
    MR_Word OptAncestorUses_50;
    MR_Word AllImplicitNeeds_51;
    MR_Word ImplicitDeps_52;
    MR_Word NewDeps_53;
    MR_Word NewIndirectDeps_54;
    MR_Word NewImplIndirectDeps_55;
    MR_Word ModuleErrors_56;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_AugCompUnit_80_80;
    MR_Word STATE_VARIABLE_Baggage_81_81;
    MR_Word Var_82;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_89_89;
    MR_Word STATE_VARIABLE_Baggage_90_90;
    MR_Word STATE_VARIABLE_AugCompUnit_91_91;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_104_104;
    MR_Word STATE_VARIABLE_Baggage_105_105;
    MR_Word STATE_VARIABLE_AugCompUnit_106_106;
    MR_Word Var_110;
    MR_Box conv1_STATE_VARIABLE_AugCompUnit_80_80;

    Ancestors0_19 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_18);
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_17, (MR_Integer) 9))));
    DirectDeps0_20 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_65);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), DirectDeps0_20, &DirectDeps_21);
    OptModules_22 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors0_19, DirectDeps_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 66, &VeryVerbose_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 490, &ReadOptFilesTransitively_24);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), OptModules_22, &DontQueueOptModules_25);
    Var_68 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModules_22);
    Var_69 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0));
    Var_70 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_71 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0));
    parse_tree__grab_modules__read_plain_opt_files_17_p_0(Globals_11, VeryVerbose_23, ReadOptFilesTransitively_24, Var_68, DontQueueOptModules_25, Var_69, &ParseTreePlainOptsCord0_26, Var_70, &ExplicitDeps_27, Var_71, &ImplicitNeedsCord_28, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs0_29, (MR_Integer) 0, &OptError0_30);
    ParseTreePlainOpts0_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ParseTreePlainOptsCord0_26);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_32);
    UnusedArgs_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_32, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 503, &StructureReuse_34);
    succeeded = (UnusedArgs_33 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (StructureReuse_34 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String OwnFileName_35;
      MR_Word OwnParseTreePlainOpt0_36;
      MR_Word OwnSpecs_37;
      MR_Word OwnError_38;
      MR_Word OwnParseTreePlainOpt_39;
      MR_Word OptSpecs1_41;
      MR_Word OptSpecs2_42;

      parse_tree__grab_modules__read_plain_opt_file_9_p_0(Globals_11, VeryVerbose_23, ModuleName_18, &OwnFileName_35, &OwnParseTreePlainOpt0_36, &OwnSpecs_37, &OwnError_38);
      parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(UnusedArgs_33, StructureReuse_34, OwnParseTreePlainOpt0_36, &OwnParseTreePlainOpt_39);
      {
        ParseTreePlainOpts_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ParseTreePlainOpts_40, 0) = ((MR_Box) (OwnParseTreePlainOpt_39));
        MR_hl_field(MR_mktag(1), ParseTreePlainOpts_40, 1) = ((MR_Box) (ParseTreePlainOpts0_31));
      }
      OptSpecs1_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OwnSpecs_37, OptSpecs0_29);
      parse_tree__grab_modules__update_opt_error_status_9_p_0(Globals_11, (MR_Integer) 15, OwnFileName_35, OwnSpecs_37, OwnError_38, OptSpecs1_41, &OptSpecs2_42, OptError0_30, &OptError_43);
      parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(VeryVerbose_23, Globals_11, OptSpecs2_42, &OptSpecs_44);
    }
    else
    {
      ParseTreePlainOpts_40 = ParseTreePlainOpts0_31;
      OptSpecs_44 = OptSpecs0_29;
      OptError_43 = OptError0_30;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[7]), ParseTreePlainOpts_40, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_59)), &conv1_STATE_VARIABLE_AugCompUnit_80_80);
    STATE_VARIABLE_AugCompUnit_80_80 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_80_80));
    parse_tree__grab_modules__module_baggage_add_specs_3_p_0(OptSpecs_44, STATE_VARIABLE_Baggage_0_57, &STATE_VARIABLE_Baggage_81_81);
    Var_82 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[8]), OptModules_22);
    OptModuleAncestors_45 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_82);
    OldModuleAncestors_46 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_18);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), OldModuleAncestors_46, &OldModuleAndAncestors_47);
    OptOnlyModuleAncestors_48 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModuleAncestors_45, OldModuleAndAncestors_47);
    Var_86 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptOnlyModuleAncestors_48);
    Var_87 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_88 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_50_93_95_48_16_p_0(Globals_11, (MR_Integer) 1, Var_86, Var_87, &OptAncestorImports_49, Var_88, &OptAncestorUses_50, STATE_VARIABLE_HaveReadModuleMaps_0_61, &STATE_VARIABLE_HaveReadModuleMaps_89_89, STATE_VARIABLE_Baggage_81_81, &STATE_VARIABLE_Baggage_90_90, STATE_VARIABLE_AugCompUnit_80_80, &STATE_VARIABLE_AugCompUnit_91_91);
    Var_93 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ImplicitNeedsCord_28);
    parse_tree__get_dependencies__combine_implicit_needs_2_p_0(Var_93, &AllImplicitNeeds_51);
    parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_11, AllImplicitNeeds_51, &ImplicitDeps_52);
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (OptAncestorUses_50));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (OptAncestorImports_49));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ImplicitDeps_52));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ExplicitDeps_27));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    NewDeps_53 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_94);
    Var_101 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_53);
    Var_102 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_103 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_11, (MR_Integer) 5, Var_101, Var_102, &NewIndirectDeps_54, Var_103, &NewImplIndirectDeps_55, STATE_VARIABLE_HaveReadModuleMaps_89_89, &STATE_VARIABLE_HaveReadModuleMaps_104_104, STATE_VARIABLE_Baggage_90_90, &STATE_VARIABLE_Baggage_105_105, STATE_VARIABLE_AugCompUnit_91_91, &STATE_VARIABLE_AugCompUnit_106_106);
    Var_110 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIndirectDeps_54, NewImplIndirectDeps_55);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_11, (MR_Integer) 3, Var_110, STATE_VARIABLE_HaveReadModuleMaps_104_104, STATE_VARIABLE_HaveReadModuleMaps_62, STATE_VARIABLE_Baggage_105_105, STATE_VARIABLE_Baggage_58, STATE_VARIABLE_AugCompUnit_106_106, STATE_VARIABLE_AugCompUnit_60);
    ModuleErrors_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Baggage_58, (MR_Integer) 7))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_56);
    if (!(succeeded))
      succeeded = (OptError_43 == (MR_Integer) 1);
    if (succeeded)
      *FoundError_12 = (MR_Integer) 1;
    else
      *FoundError_12 = (MR_Integer) 0;
  }
}

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_files_17_p_0(
  MR_Word Globals_1,
  MR_Word VeryVerbose_2,
  MR_Word ReadOptFilesTransitively_3,
  MR_Word HeadVar__4_4,
  MR_Word DontQueueOptModules0_5,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_6,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_7,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_8,
  MR_Word * STATE_VARIABLE_ExplicitDeps_9,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_10,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Error_0_14,
  MR_Word * STATE_VARIABLE_Error_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Error_15 = STATE_VARIABLE_Error_0_14;
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_ImplicitNeeds_11 = STATE_VARIABLE_ImplicitNeeds_0_10;
      *STATE_VARIABLE_ExplicitDeps_9 = STATE_VARIABLE_ExplicitDeps_0_8;
      *STATE_VARIABLE_ParseTreePlainOptsCord_7 = STATE_VARIABLE_ParseTreePlainOptsCord_0_6;
    }
    else
    {
      MR_Word ModuleName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_String FileName_52;
      MR_Word ParseTreePlainOpt_53;
      MR_Word OptSpecs_54;
      MR_Word OptError_55;
      MR_Word ParseTreeExplicitDeps_56;
      MR_Word ParseTreeImplicitNeeds_57;
      MR_Word ModuleNames1_61;
      MR_Word DontQueueOptModules1_62;
      MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_76_76;
      MR_Word STATE_VARIABLE_ExplicitDeps_77_77;
      MR_Word STATE_VARIABLE_ImplicitNeeds_78_78;
      MR_Word STATE_VARIABLE_Specs_80_80;
      MR_Word STATE_VARIABLE_Error_81_81;
      MR_Word STATE_VARIABLE_Specs_82_82;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_DontQueueOptModules0_5;
      MR_Word next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ExplicitDeps_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitNeeds_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_14;

      parse_tree__grab_modules__read_plain_opt_file_9_p_0(Globals_1, VeryVerbose_2, ModuleName_43, &FileName_52, &ParseTreePlainOpt_53, &OptSpecs_54, &OptError_55);
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (ParseTreePlainOpt_53)), STATE_VARIABLE_ParseTreePlainOptsCord_0_6, &STATE_VARIABLE_ParseTreePlainOptsCord_76_76);
      parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_53, &ParseTreeExplicitDeps_56, &ParseTreeImplicitNeeds_57);
      mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_56, STATE_VARIABLE_ExplicitDeps_0_8, &STATE_VARIABLE_ExplicitDeps_77_77);
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ((MR_Box) (ParseTreeImplicitNeeds_57)), STATE_VARIABLE_ImplicitNeeds_0_10, &STATE_VARIABLE_ImplicitNeeds_78_78);
      parse_tree__grab_modules__update_opt_error_status_9_p_0(Globals_1, (MR_Integer) 15, FileName_52, OptSpecs_54, OptError_55, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Error_0_14, &STATE_VARIABLE_Error_81_81);
      parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(VeryVerbose_2, Globals_1, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_82_82);
      switch (ReadOptFilesTransitively_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ModuleNames1_61 = ModuleNames0_44;
            DontQueueOptModules1_62 = DontQueueOptModules0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ParseTreeImplicitDeps_58;
            MR_Word ParseTreeDeps_59;
            MR_Word NewDeps_60;
            MR_Word Var_84;

            parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_1, ParseTreeImplicitNeeds_57, &ParseTreeImplicitDeps_58);
            mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_56, ParseTreeImplicitDeps_58, &ParseTreeDeps_59);
            mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeDeps_59, DontQueueOptModules0_5, &NewDeps_60);
            Var_84 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_60);
            ModuleNames1_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_84, ModuleNames0_44);
            mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_60, DontQueueOptModules0_5, &DontQueueOptModules1_62);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames1_61;
      next_value_of_DontQueueOptModules0_5 = DontQueueOptModules1_62;
      next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_6 = STATE_VARIABLE_ParseTreePlainOptsCord_76_76;
      next_value_of_STATE_VARIABLE_ExplicitDeps_0_8 = STATE_VARIABLE_ExplicitDeps_77_77;
      next_value_of_STATE_VARIABLE_ImplicitNeeds_0_10 = STATE_VARIABLE_ImplicitNeeds_78_78;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_82_82;
      next_value_of_STATE_VARIABLE_Error_0_14 = STATE_VARIABLE_Error_81_81;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      DontQueueOptModules0_5 = next_value_of_DontQueueOptModules0_5;
      STATE_VARIABLE_ParseTreePlainOptsCord_0_6 = next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_6;
      STATE_VARIABLE_ExplicitDeps_0_8 = next_value_of_STATE_VARIABLE_ExplicitDeps_0_8;
      STATE_VARIABLE_ImplicitNeeds_0_10 = next_value_of_STATE_VARIABLE_ImplicitNeeds_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      STATE_VARIABLE_Error_0_14 = next_value_of_STATE_VARIABLE_Error_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_9_p_0(
  MR_Word Globals_10,
  MR_Word WarnOption_11,
  MR_String FileName_12,
  MR_Word ModuleSpecs_13,
  MR_Word ModuleErrors_14,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22,
  MR_Word STATE_VARIABLE_Error_0_23,
  MR_Word * STATE_VARIABLE_Error_24)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Error_24 = STATE_VARIABLE_Error_0_23;
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    }
    else
    {
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_14, ((MR_Box) ((MR_Integer) 0)));
      if (succeeded)
      {
        MR_Word WarnOptionValue_17;

        libs__globals__lookup_bool_option_3_p_0(Globals_10, WarnOption_11, &WarnOptionValue_17);
        switch (WarnOptionValue_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_18;
              MR_Word Msg_19;
              MR_Word Spec_20;
              MR_Word Var_28;
              MR_Word Var_29;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word Var_45;

              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (FileName_12));
              }
              {
                Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[26])));
              }
              {
                Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[47])));
                MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_28));
              }
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_18));
              }
              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
                MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Msg_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Msg_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), Msg_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Msg_19, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Msg_19, 3) = ((MR_Box) (Var_39));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Msg_19));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status\'/9"));
                MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(0), Spec_20, 3) = ((MR_Box) (Var_45));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
              }
            }
            break;
        }
        *STATE_VARIABLE_Error_24 = STATE_VARIABLE_Error_0_23;
      }
      else
      {
        *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModuleSpecs_13, STATE_VARIABLE_Specs_0_21);
        *STATE_VARIABLE_Error_24 = (MR_Integer) 1;
      }
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_file_9_p_0(
  MR_Word Globals_10,
  MR_Word VeryVerbose_11,
  MR_Word ModuleName_12,
  MR_String * FileName_13,
  MR_Word * ParseTreePlainOpt_14,
  MR_Word * OptSpecs_15,
  MR_Word * OptError_16)
{
  {
    MR_String ModuleNameString_18;

    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_11, (MR_String) "% Reading optimization interface for module");
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_11, (MR_String) " \140");
    ModuleNameString_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_11, ModuleNameString_18);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_11, (MR_String) "\'...\n");
    libs__file_util__maybe_flush_output_3_p_0(VeryVerbose_11);
    parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.grab_modules.read_plain_opt_file\'/9", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[4])), ModuleName_12, FileName_13);
    parse_tree__parse_module__actually_read_module_plain_opt_9_p_0(Globals_10, *FileName_13, ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), ParseTreePlainOpt_14, OptSpecs_15, OptError_16);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_11, (MR_String) "% done.\n");
  }
}

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8)
{
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt0_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt0_7, (MR_Integer) 1))));
    MR_Word UnusedArgs0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt0_7, (MR_Integer) 17))));
    MR_Word Reuses0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt0_7, (MR_Integer) 24))));
    MR_Word UnusedArgs_34;
    MR_Word Reuses_35;
    MR_Word Var_36;
    MR_Word Var_37;

    switch (KeepUnusedArgs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        UnusedArgs_34 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        UnusedArgs_34 = UnusedArgs0_26;
        break;
    }
    switch (KeepReuses_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Reuses_35 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        Reuses_35 = Reuses0_33;
        break;
    }
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]));
    Var_37 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreePlainOpt_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (UnusedArgs_34));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Reuses_35));
    }
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_Word SourceFileModuleName_13,
  MR_Word ParseTreeModuleSrc_14,
  MR_Word * STATE_VARIABLE_Baggage_46,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_47,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_48,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_49)
{
  {
    MR_bool succeeded;
    MR_Word ImportAndOrUseMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_14, (MR_Integer) 9))));
    MR_Word IntImportMap_22;
    MR_Word IntUseMap_23;
    MR_Word ImpImportMap_24;
    MR_Word ImpUseMap_25;
    MR_Word IntUseImpImportMap_26;
    MR_Word IntImports0_27;
    MR_Word IntUses_28;
    MR_Word ImpImports_29;
    MR_Word ImpUses_30;
    MR_Word IntUsesImpImports_31;
    MR_Word IntImports_32;
    MR_Word MaybeTopModule_33;
    MR_Word Errors0_36;
    MR_Word GrabbedFileMap0_37;
    MR_Word ModuleName_38;
    MR_Word SrcMap0_39;
    MR_Word SrcMap_40;
    MR_Word Ancestors_41;
    MR_Word AncestorImports_42;
    MR_Word AncestorUses_43;
    MR_Word ImportAccessibilityInfo_44;
    MR_Word AccessSpecs_45;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_54_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Baggage_56_56;
    MR_String Var_57;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_58_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_62_62;
    MR_Word STATE_VARIABLE_Baggage_63_63;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_64_64;
    MR_Word STATE_VARIABLE_IntIndirectImported_66_66;
    MR_Word STATE_VARIABLE_ImpIndirectImported_67_67;
    MR_Word Var_70;
    MR_Word STATE_VARIABLE_IntIndirectImported_71_71;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_72_72;
    MR_Word STATE_VARIABLE_Baggage_73_73;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_74_74;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_IntIndirectImported_79_79;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_80_80;
    MR_Word STATE_VARIABLE_Baggage_81_81;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_82_82;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_ImpIndirectImported_87_87;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_88_88;
    MR_Word STATE_VARIABLE_Baggage_89_89;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_90_90;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_IntIndirectImported_95_95;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_96_96;
    MR_Word STATE_VARIABLE_Baggage_97_97;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_98_98;
    MR_Word Var_102;
    MR_Word STATE_VARIABLE_IntIndirectImported_103_103;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_104_104;
    MR_Word STATE_VARIABLE_Baggage_105_105;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_106_106;
    MR_Word Var_110;
    MR_Word STATE_VARIABLE_ImpIndirectImported_111_111;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_112_112;
    MR_Word STATE_VARIABLE_Baggage_113_113;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_114_114;
    MR_Word Var_118;
    MR_Word STATE_VARIABLE_IntIndirectImported_119_119;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_120_120;
    MR_Word STATE_VARIABLE_Baggage_121_121;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_122_122;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_126_126;
    MR_Word STATE_VARIABLE_Baggage_127_127;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_128_128;
    MR_Word STATE_VARIABLE_Baggage_133_133;
    MR_Word Var_268;
    MR_Word Var_255;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word Var_259;
    MR_Word Var_260;
    MR_Word Var_261;
    MR_Word Var_262;

    parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportAndOrUseMap_21, &IntImportMap_22, &IntUseMap_23, &ImpImportMap_24, &ImpUseMap_25, &IntUseImpImportMap_26);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_22, &IntImports0_27);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseMap_23, &IntUses_28);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_24, &ImpImports_29);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpUseMap_25, &ImpUses_30);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseImpImportMap_26, &IntUsesImpImports_31);
    Var_52 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_52)), IntImports0_27, &IntImports_32);
    Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_14, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_13, Var_268);
    if (succeeded)
    {
      MR_Word Var_53;

      Var_53 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      {
        MaybeTopModule_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTopModule_33, 0) = ((MR_Box) (Var_53));
      }
    }
    else
      MaybeTopModule_33 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors0_36);
    parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(ParseTreeModuleSrc_14, &STATE_VARIABLE_AugMakeIntUnit_54_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (ParseTreeModuleSrc_14));
    }
    Var_57 = mercury__dir__this_directory_0_f_0();
    ModuleName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_14, (MR_Integer) 0))));
    GrabbedFileMap0_37 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_38)), ((MR_Box) (Var_55)));
    {
      STATE_VARIABLE_Baggage_56_56 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 0) = ((MR_Box) (SourceFileName_12));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 1) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 2) = ((MR_Box) (SourceFileModuleName_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 3) = ((MR_Box) (MaybeTopModule_33));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 5) = ((MR_Box) (GrabbedFileMap0_37));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_56_56, 7) = ((MR_Box) (Errors0_36));
    }
    SrcMap0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 1))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_38)), ((MR_Box) (ParseTreeModuleSrc_14)), SrcMap0_39, &SrcMap_40);
    Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 0))));
    Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 2))));
    Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 3))));
    Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 4))));
    Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 5))));
    Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 6))));
    Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_48, (MR_Integer) 7))));
    {
      STATE_VARIABLE_HaveReadModuleMaps_58_58 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 0) = ((MR_Box) (Var_255));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 1) = ((MR_Box) (SrcMap_40));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 2) = ((MR_Box) (Var_257));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 3) = ((MR_Box) (Var_258));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 4) = ((MR_Box) (Var_259));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 5) = ((MR_Box) (Var_260));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 6) = ((MR_Box) (Var_261));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_58_58, 7) = ((MR_Box) (Var_262));
    }
    Ancestors_41 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_38);
    Var_60 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_61 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_50_93_95_48_15_p_0(Globals_11, Ancestors_41, Var_60, &AncestorImports_42, Var_61, &AncestorUses_43, STATE_VARIABLE_HaveReadModuleMaps_58_58, &STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_Baggage_56_56, &STATE_VARIABLE_Baggage_63_63, STATE_VARIABLE_AugMakeIntUnit_54_54, &STATE_VARIABLE_AugMakeIntUnit_64_64);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_66_66);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_67_67);
    Var_70 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImports_42);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 0, Var_70, STATE_VARIABLE_IntIndirectImported_66_66, &STATE_VARIABLE_IntIndirectImported_71_71, STATE_VARIABLE_HaveReadModuleMaps_62_62, &STATE_VARIABLE_HaveReadModuleMaps_72_72, STATE_VARIABLE_Baggage_63_63, &STATE_VARIABLE_Baggage_73_73, STATE_VARIABLE_AugMakeIntUnit_64_64, &STATE_VARIABLE_AugMakeIntUnit_74_74);
    Var_78 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_32);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 1, Var_78, STATE_VARIABLE_IntIndirectImported_71_71, &STATE_VARIABLE_IntIndirectImported_79_79, STATE_VARIABLE_HaveReadModuleMaps_72_72, &STATE_VARIABLE_HaveReadModuleMaps_80_80, STATE_VARIABLE_Baggage_73_73, &STATE_VARIABLE_Baggage_81_81, STATE_VARIABLE_AugMakeIntUnit_74_74, &STATE_VARIABLE_AugMakeIntUnit_82_82);
    Var_86 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_29);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 2, Var_86, STATE_VARIABLE_ImpIndirectImported_67_67, &STATE_VARIABLE_ImpIndirectImported_87_87, STATE_VARIABLE_HaveReadModuleMaps_80_80, &STATE_VARIABLE_HaveReadModuleMaps_88_88, STATE_VARIABLE_Baggage_81_81, &STATE_VARIABLE_Baggage_89_89, STATE_VARIABLE_AugMakeIntUnit_82_82, &STATE_VARIABLE_AugMakeIntUnit_90_90);
    Var_94 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorUses_43);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 3, Var_94, STATE_VARIABLE_IntIndirectImported_79_79, &STATE_VARIABLE_IntIndirectImported_95_95, STATE_VARIABLE_HaveReadModuleMaps_88_88, &STATE_VARIABLE_HaveReadModuleMaps_96_96, STATE_VARIABLE_Baggage_89_89, &STATE_VARIABLE_Baggage_97_97, STATE_VARIABLE_AugMakeIntUnit_90_90, &STATE_VARIABLE_AugMakeIntUnit_98_98);
    Var_102 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_28);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 4, Var_102, STATE_VARIABLE_IntIndirectImported_95_95, &STATE_VARIABLE_IntIndirectImported_103_103, STATE_VARIABLE_HaveReadModuleMaps_96_96, &STATE_VARIABLE_HaveReadModuleMaps_104_104, STATE_VARIABLE_Baggage_97_97, &STATE_VARIABLE_Baggage_105_105, STATE_VARIABLE_AugMakeIntUnit_98_98, &STATE_VARIABLE_AugMakeIntUnit_106_106);
    Var_110 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_30);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 5, Var_110, STATE_VARIABLE_ImpIndirectImported_87_87, &STATE_VARIABLE_ImpIndirectImported_111_111, STATE_VARIABLE_HaveReadModuleMaps_104_104, &STATE_VARIABLE_HaveReadModuleMaps_112_112, STATE_VARIABLE_Baggage_105_105, &STATE_VARIABLE_Baggage_113_113, STATE_VARIABLE_AugMakeIntUnit_106_106, &STATE_VARIABLE_AugMakeIntUnit_114_114);
    Var_118 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsesImpImports_31);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_11, (MR_Integer) 6, Var_118, STATE_VARIABLE_IntIndirectImported_103_103, &STATE_VARIABLE_IntIndirectImported_119_119, STATE_VARIABLE_HaveReadModuleMaps_112_112, &STATE_VARIABLE_HaveReadModuleMaps_120_120, STATE_VARIABLE_Baggage_113_113, &STATE_VARIABLE_Baggage_121_121, STATE_VARIABLE_AugMakeIntUnit_114_114, &STATE_VARIABLE_AugMakeIntUnit_122_122);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_11, (MR_Integer) 7, STATE_VARIABLE_IntIndirectImported_119_119, STATE_VARIABLE_HaveReadModuleMaps_120_120, &STATE_VARIABLE_HaveReadModuleMaps_126_126, STATE_VARIABLE_Baggage_121_121, &STATE_VARIABLE_Baggage_127_127, STATE_VARIABLE_AugMakeIntUnit_122_122, &STATE_VARIABLE_AugMakeIntUnit_128_128);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_11, (MR_Integer) 8, STATE_VARIABLE_ImpIndirectImported_111_111, STATE_VARIABLE_HaveReadModuleMaps_126_126, STATE_VARIABLE_HaveReadModuleMaps_49, STATE_VARIABLE_Baggage_127_127, &STATE_VARIABLE_Baggage_133_133, STATE_VARIABLE_AugMakeIntUnit_128_128, STATE_VARIABLE_AugMakeIntUnit_47);
    parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugMakeIntUnit_47, &ImportAccessibilityInfo_44);
    parse_tree__grab_modules__check_imports_accessibility_3_p_0(ParseTreeModuleSrc_14, ImportAccessibilityInfo_44, &AccessSpecs_45);
    parse_tree__grab_modules__module_baggage_add_specs_3_p_0(AccessSpecs_45, STATE_VARIABLE_Baggage_133_133, STATE_VARIABLE_Baggage_46);
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_50_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DirectImports_0_4,
  MR_Word * STATE_VARIABLE_DirectImports_5,
  MR_Word STATE_VARIABLE_DirectUses_0_6,
  MR_Word * STATE_VARIABLE_DirectUses_7,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_9,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_13 = STATE_VARIABLE_AugMakeIntUnit_0_12;
      *STATE_VARIABLE_Baggage_11 = STATE_VARIABLE_Baggage_0_10;
      *STATE_VARIABLE_HaveReadModuleMaps_9 = STATE_VARIABLE_HaveReadModuleMaps_0_8;
      *STATE_VARIABLE_DirectUses_7 = STATE_VARIABLE_DirectUses_0_6;
      *STATE_VARIABLE_DirectImports_5 = STATE_VARIABLE_DirectImports_0_4;
    }
    else
    {
      MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModuleNames_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_68_68;
      MR_Word STATE_VARIABLE_Baggage_69_69;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_70_70;
      MR_Word STATE_VARIABLE_DirectImports_77_77;
      MR_Word STATE_VARIABLE_DirectUses_79_79;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_6;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_10;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_10, ModuleName_38, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word ParseTreeInt0_47;
        MR_Word IntImports_48;
        MR_Word ImpImports_49;
        MR_Word IntUses_50;
        MR_Word ImpUses_51;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word STATE_VARIABLE_DirectImports_76_76;
        MR_Word STATE_VARIABLE_DirectUses_78_78;

        parse_tree__grab_modules__process_module_int0_for_amiu_11_p_0(HeadVar__1_1, ModuleName_38, &ParseTreeInt0_47, STATE_VARIABLE_HaveReadModuleMaps_0_8, &STATE_VARIABLE_HaveReadModuleMaps_68_68, STATE_VARIABLE_Baggage_0_10, &STATE_VARIABLE_Baggage_69_69, STATE_VARIABLE_AugMakeIntUnit_0_12, &STATE_VARIABLE_AugMakeIntUnit_70_70);
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_47, (MR_Integer) 6))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_72, &IntImports_48);
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_47, (MR_Integer) 8))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_73, &ImpImports_49);
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_47, (MR_Integer) 7))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_74, &IntUses_50);
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_47, (MR_Integer) 9))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_75, &ImpUses_51);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_48, STATE_VARIABLE_DirectImports_0_4, &STATE_VARIABLE_DirectImports_76_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_49, STATE_VARIABLE_DirectImports_76_76, &STATE_VARIABLE_DirectImports_77_77);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_50, STATE_VARIABLE_DirectUses_0_6, &STATE_VARIABLE_DirectUses_78_78);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_51, STATE_VARIABLE_DirectUses_78_78, &STATE_VARIABLE_DirectUses_79_79);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_70_70 = STATE_VARIABLE_AugMakeIntUnit_0_12;
        STATE_VARIABLE_Baggage_69_69 = STATE_VARIABLE_Baggage_0_10;
        STATE_VARIABLE_HaveReadModuleMaps_68_68 = STATE_VARIABLE_HaveReadModuleMaps_0_8;
        STATE_VARIABLE_DirectUses_79_79 = STATE_VARIABLE_DirectUses_0_6;
        STATE_VARIABLE_DirectImports_77_77 = STATE_VARIABLE_DirectImports_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_39;
      next_value_of_STATE_VARIABLE_DirectImports_0_4 = STATE_VARIABLE_DirectImports_77_77;
      next_value_of_STATE_VARIABLE_DirectUses_0_6 = STATE_VARIABLE_DirectUses_79_79;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8 = STATE_VARIABLE_HaveReadModuleMaps_68_68;
      next_value_of_STATE_VARIABLE_Baggage_0_10 = STATE_VARIABLE_Baggage_69_69;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12 = STATE_VARIABLE_AugMakeIntUnit_70_70;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DirectImports_0_4 = next_value_of_STATE_VARIABLE_DirectImports_0_4;
      STATE_VARIABLE_DirectUses_0_6 = next_value_of_STATE_VARIABLE_DirectUses_0_6;
      STATE_VARIABLE_HaveReadModuleMaps_0_8 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8;
      STATE_VARIABLE_Baggage_0_10 = next_value_of_STATE_VARIABLE_Baggage_0_10;
      STATE_VARIABLE_AugMakeIntUnit_0_12 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_amiu_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_25,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_26,
  MR_Word STATE_VARIABLE_Baggage_0_27,
  MR_Word * STATE_VARIABLE_Baggage_28,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_29,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_30)
{
  {
    MR_Word ReturnTimestamp_19;
    MR_Word MaybeTimestamp_21;
    MR_Word Specs_22;
    MR_Word Errors_23;
    MR_Word GrabbedFile_24;
    MR_Word STATE_VARIABLE_Baggage_37_37;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_38_38;
    MR_Word STATE_VARIABLE_Baggage_41_41;
    MR_Word Var_43;
    MR_Word MaybeTimestampMap_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_27, (MR_Integer) 4))));
    MR_String _FileName_20;

    if ((MaybeTimestampMap_74 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnTimestamp_19 = (MR_Integer) 1;
    else
      ReturnTimestamp_19 = (MR_Integer) 0;
    parse_tree__read_modules__maybe_read_module_int0_13_p_0(Globals_12, (MR_Integer) 0, ModuleName_13, &_FileName_20, ReturnTimestamp_19, &MaybeTimestamp_21, ParseTreeInt0_14, &Specs_22, &Errors_23, STATE_VARIABLE_HaveReadModuleMaps_0_25, STATE_VARIABLE_HaveReadModuleMaps_26);
    {
      GrabbedFile_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GrabbedFile_24, 0) = ((MR_Box) (*ParseTreeInt0_14));
      MR_hl_field(MR_mktag(1), GrabbedFile_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_13, GrabbedFile_24, STATE_VARIABLE_Baggage_0_27, &STATE_VARIABLE_Baggage_37_37);
    parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(*ParseTreeInt0_14, STATE_VARIABLE_AugMakeIntUnit_0_29, &STATE_VARIABLE_AugMakeIntUnit_38_38);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_13, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_21, STATE_VARIABLE_Baggage_37_37, &STATE_VARIABLE_Baggage_41_41);
    parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_22, Errors_23, STATE_VARIABLE_Baggage_41_41, STATE_VARIABLE_Baggage_28);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt0_14, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_13, Var_43, STATE_VARIABLE_AugMakeIntUnit_38_38, STATE_VARIABLE_AugMakeIntUnit_30);
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  if ((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AugMakeIntUnit_12 = STATE_VARIABLE_AugMakeIntUnit_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(
  MR_Word PT0_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_9,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_10)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 1))));
    MR_Word MN_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT0_4, (MR_Integer) 0))));
    MR_Word Map_8;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), ((MR_Box) (MN_7)), ((MR_Box) (PT0_4)), Map0_6, &Map_8);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 2))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 3))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy3_15,
  MR_Word Modules_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23,
  MR_Word STATE_VARIABLE_Baggage_0_24,
  MR_Word * STATE_VARIABLE_Baggage_25,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_26,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_21;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_32_32;
    MR_Word STATE_VARIABLE_Baggage_33_33;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_34_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_16);
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_13, ReadWhy3_15, Var_30, Var_31, &IndirectImports_21, STATE_VARIABLE_HaveReadModuleMaps_0_22, &STATE_VARIABLE_HaveReadModuleMaps_32_32, STATE_VARIABLE_Baggage_0_24, &STATE_VARIABLE_Baggage_33_33, STATE_VARIABLE_AugMakeIntUnit_0_26, &STATE_VARIABLE_AugMakeIntUnit_34_34);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_21);
    if (succeeded)
    {
      *STATE_VARIABLE_AugMakeIntUnit_27 = STATE_VARIABLE_AugMakeIntUnit_34_34;
      *STATE_VARIABLE_Baggage_25 = STATE_VARIABLE_Baggage_33_33;
      *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_32_32;
    }
    else
    {
      MR_Word next_value_of_Modules_16 = IndirectImports_21;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_22 = STATE_VARIABLE_HaveReadModuleMaps_32_32;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_24 = STATE_VARIABLE_Baggage_33_33;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_26 = STATE_VARIABLE_AugMakeIntUnit_34_34;

      // direct tailcall eliminated
      ;
      Modules_16 = next_value_of_Modules_16;
      STATE_VARIABLE_HaveReadModuleMaps_0_22 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_22;
      STATE_VARIABLE_Baggage_0_24 = next_value_of_STATE_VARIABLE_Baggage_0_24;
      STATE_VARIABLE_AugMakeIntUnit_0_26 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_26;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_7,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_8,
  MR_Word STATE_VARIABLE_Baggage_0_9,
  MR_Word * STATE_VARIABLE_Baggage_10,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_12 = STATE_VARIABLE_AugMakeIntUnit_0_11;
      *STATE_VARIABLE_Baggage_10 = STATE_VARIABLE_Baggage_0_9;
      *STATE_VARIABLE_HaveReadModuleMaps_8 = STATE_VARIABLE_HaveReadModuleMaps_0_7;
      *STATE_VARIABLE_IntIndirectImports_6 = STATE_VARIABLE_IntIndirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_59_59;
      MR_Word STATE_VARIABLE_Baggage_60_60;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_61_61;
      MR_Word STATE_VARIABLE_IntIndirectImports_64_64;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_9;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_11;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_9, ModuleName_36, (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word ParseTreeInt3_43;
        MR_Word Imports_44;
        MR_Word Var_63;

        parse_tree__grab_modules__process_module_int3_12_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_36, &ParseTreeInt3_43, STATE_VARIABLE_HaveReadModuleMaps_0_7, &STATE_VARIABLE_HaveReadModuleMaps_59_59, STATE_VARIABLE_Baggage_0_9, &STATE_VARIABLE_Baggage_60_60, STATE_VARIABLE_AugMakeIntUnit_0_11, &STATE_VARIABLE_AugMakeIntUnit_61_61);
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_43, (MR_Integer) 4))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_63, &Imports_44);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Imports_44, STATE_VARIABLE_IntIndirectImports_0_5, &STATE_VARIABLE_IntIndirectImports_64_64);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_61_61 = STATE_VARIABLE_AugMakeIntUnit_0_11;
        STATE_VARIABLE_Baggage_60_60 = STATE_VARIABLE_Baggage_0_9;
        STATE_VARIABLE_HaveReadModuleMaps_59_59 = STATE_VARIABLE_HaveReadModuleMaps_0_7;
        STATE_VARIABLE_IntIndirectImports_64_64 = STATE_VARIABLE_IntIndirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_37;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_5 = STATE_VARIABLE_IntIndirectImports_64_64;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_7 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
      next_value_of_STATE_VARIABLE_Baggage_0_9 = STATE_VARIABLE_Baggage_60_60;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_11 = STATE_VARIABLE_AugMakeIntUnit_61_61;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IntIndirectImports_0_5 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      STATE_VARIABLE_HaveReadModuleMaps_0_7 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_7;
      STATE_VARIABLE_Baggage_0_9 = next_value_of_STATE_VARIABLE_Baggage_0_9;
      STATE_VARIABLE_AugMakeIntUnit_0_11 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int3_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy3_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt3_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_30,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_31,
  MR_Word STATE_VARIABLE_Baggage_0_32,
  MR_Word * STATE_VARIABLE_Baggage_33,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_34,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_35)
{
  {
    MR_Word ReturnTimestamp_21;
    MR_Word MaybeTimestamp_23;
    MR_Word Specs_24;
    MR_Word Errors_25;
    MR_Word GrabbedFile_26;
    MR_Word RecompAvail_27;
    MR_Word STATE_VARIABLE_Baggage_41_41;
    MR_Word STATE_VARIABLE_Baggage_45_45;
    MR_Word MaybeTimestampMap_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 4))));
    MR_Word GrabbedFileMap0_70;
    MR_Word GrabbedFileMap_71;
    MR_String _FileName_22;
    MR_String Var_80;
    MR_String Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_87;

    if ((MaybeTimestampMap_56 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnTimestamp_21 = (MR_Integer) 1;
    else
      ReturnTimestamp_21 = (MR_Integer) 0;
    parse_tree__read_modules__maybe_read_module_int3_13_p_0(Globals_13, (MR_Integer) 0, ModuleName_15, &_FileName_22, ReturnTimestamp_21, &MaybeTimestamp_23, ParseTreeInt3_16, &Specs_24, &Errors_25, STATE_VARIABLE_HaveReadModuleMaps_0_30, STATE_VARIABLE_HaveReadModuleMaps_31);
    {
      GrabbedFile_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GrabbedFile_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), GrabbedFile_26, 1) = ((MR_Box) (*ParseTreeInt3_16));
      MR_hl_field(MR_mktag(3), GrabbedFile_26, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
    }
    GrabbedFileMap0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 5))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_15)), ((MR_Box) (GrabbedFile_26)), GrabbedFileMap0_70, &GrabbedFileMap_71);
    Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 0))));
    Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 1))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 2))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 3))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 4))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 6))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_32, (MR_Integer) 7))));
    {
      STATE_VARIABLE_Baggage_41_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 2) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 3) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 4) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 5) = ((MR_Box) (GrabbedFileMap_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 6) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_41_41, 7) = ((MR_Box) (Var_87));
    }
    switch (ReadWhy3_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_28;

          RecompAvail_27 = (MR_Integer) 1;
          {
            DirectIntSpec_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_28, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_28, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_28, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_47;

          RecompAvail_27 = (MR_Integer) 3;
          {
            DirectIntSpec_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_47, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_47, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_47, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_48;

          RecompAvail_27 = (MR_Integer) 2;
          {
            DirectIntSpec_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_48, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_48, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_48, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_49;

          RecompAvail_27 = (MR_Integer) 4;
          {
            DirectIntSpec_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_49, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_49, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_49, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_50;

          RecompAvail_27 = (MR_Integer) 1;
          {
            DirectIntSpec_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_50, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_50, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_50, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_51;

          RecompAvail_27 = (MR_Integer) 3;
          {
            DirectIntSpec_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_51, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_51, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_51, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word DirectIntSpec_52;

          RecompAvail_27 = (MR_Integer) 5;
          {
            DirectIntSpec_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_52, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_52, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_52, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word IndirectIntSpec_29;

          RecompAvail_27 = (MR_Integer) 4;
          {
            IndirectIntSpec_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IndirectIntSpec_29, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), IndirectIntSpec_29, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_29, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word IndirectIntSpec_53;

          RecompAvail_27 = (MR_Integer) 3;
          {
            IndirectIntSpec_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IndirectIntSpec_53, 0) = ((MR_Box) (*ParseTreeInt3_16));
            MR_hl_field(MR_mktag(0), IndirectIntSpec_53, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_14));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_53, STATE_VARIABLE_AugMakeIntUnit_0_34, STATE_VARIABLE_AugMakeIntUnit_35);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_15, (MR_Integer) 3, RecompAvail_27, MaybeTimestamp_23, STATE_VARIABLE_Baggage_41_41, &STATE_VARIABLE_Baggage_45_45);
    parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_45_45, STATE_VARIABLE_Baggage_33);
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
    MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT3_7, (MR_Integer) 0))));
    MR_Word Map_10;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
    MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT3_7, (MR_Integer) 0))));
    MR_Word Map_10;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4)
{
  {
    MR_Word AncestorIntSpecs_5;
    MR_Word DirectIntSpecs_6;
    MR_Word IndirectIntSpecs_7;
    MR_Word VersionNumbers_8;

    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), &AncestorIntSpecs_5);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), &DirectIntSpecs_6);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), &IndirectIntSpecs_7);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), &VersionNumbers_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *AugMakeIntUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTreeModuleSrc_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AncestorIntSpecs_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DirectIntSpecs_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IndirectIntSpecs_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VersionNumbers_8));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_3(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv24_STATE_VARIABLE_ReadModules_23;
    MR_Word conv23_STATE_VARIABLE_InclMap_25;
    MR_Word conv22_STATE_VARIABLE_SrcIntImportUseMap_27;
    MR_Word conv21_STATE_VARIABLE_SrcImpImportUseMap_29;
    MR_Word conv20_STATE_VARIABLE_AncestorImportUseMap_31;

    parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_31);
    *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_23));
    *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_25));
    *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_27));
    *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_29));
    *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_31));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_ReadModules_23;
    MR_Word conv13_STATE_VARIABLE_InclMap_25;
    MR_Word conv12_STATE_VARIABLE_SrcIntImportUseMap_27;
    MR_Word conv11_STATE_VARIABLE_SrcImpImportUseMap_29;
    MR_Word conv10_STATE_VARIABLE_AncestorImportUseMap_31;

    parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_31);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_23));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_25));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_27));
    *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_29));
    *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_31));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ReadModules_55;
    MR_Word conv3_STATE_VARIABLE_MaybeAbstractInclMap_57;
    MR_Word conv2_STATE_VARIABLE_SrcIntImportUseMap_59;
    MR_Word conv1_STATE_VARIABLE_SrcImpImportUseMap_61;
    MR_Word conv0_STATE_VARIABLE_AncestorImportUseMap_63;

    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReadModules_55, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_MaybeAbstractInclMap_57, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_SrcIntImportUseMap_59, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_SrcImpImportUseMap_61, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_AncestorImportUseMap_63);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReadModules_55));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeAbstractInclMap_57));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_SrcIntImportUseMap_59));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_SrcImpImportUseMap_61));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_63));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugMakeIntUnit_3,
  MR_Word * ImportAccessibilityInfo_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_3, (MR_Integer) 0))));
    MR_Word AncestorIntSpecs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_3, (MR_Integer) 1))));
    MR_Word DirectIntSpecs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_3, (MR_Integer) 2))));
    MR_Word IndirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_3, (MR_Integer) 3))));
    MR_Word ModuleName_15;
    MR_Word Ancestors_16;
    MR_Word STATE_VARIABLE_ReadModules_17_17;
    MR_Word STATE_VARIABLE_InclMap_18_18;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_19_19;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_20_20;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_21_21;
    MR_Word STATE_VARIABLE_ReadModules_22_22;
    MR_Word STATE_VARIABLE_InclMap_23_23;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_24_24;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_25_25;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_26_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_ReadModules_28_28;
    MR_Word STATE_VARIABLE_InclMap_29_29;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_30_30;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_31_31;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_32_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_ReadModules_34_34;
    MR_Word STATE_VARIABLE_InclMap_35_35;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_36_36;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_37_37;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_38_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_ReadModules_40_40;
    MR_Word STATE_VARIABLE_InclMap_41_41;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_42_42;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_43_43;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_44_44;
    MR_Box conv9_STATE_VARIABLE_ReadModules_28_28;
    MR_Box conv8_STATE_VARIABLE_InclMap_29_29;
    MR_Box conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30;
    MR_Box conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31;
    MR_Box conv5_STATE_VARIABLE_AncestorImportUseMap_32_32;
    MR_Box conv19_STATE_VARIABLE_ReadModules_34_34;
    MR_Box conv18_STATE_VARIABLE_InclMap_35_35;
    MR_Box conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36;
    MR_Box conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37;
    MR_Box conv15_STATE_VARIABLE_AncestorImportUseMap_38_38;
    MR_Box conv29_STATE_VARIABLE_ReadModules_40_40;
    MR_Box conv28_STATE_VARIABLE_InclMap_41_41;
    MR_Box conv27_STATE_VARIABLE_SrcIntImportUseMap_42_42;
    MR_Box conv26_STATE_VARIABLE_SrcImpImportUseMap_43_43;
    MR_Box conv25_STATE_VARIABLE_AncestorImportUseMap_44_44;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ReadModules_17_17);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), &STATE_VARIABLE_InclMap_18_18);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_SrcIntImportUseMap_19_19);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_SrcImpImportUseMap_20_20);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_AncestorImportUseMap_21_21);
    ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_5, (MR_Integer) 0))));
    Ancestors_16 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_15);
    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_17_17, &STATE_VARIABLE_ReadModules_22_22, STATE_VARIABLE_InclMap_18_18, &STATE_VARIABLE_InclMap_23_23, STATE_VARIABLE_SrcIntImportUseMap_19_19, &STATE_VARIABLE_SrcIntImportUseMap_24_24, STATE_VARIABLE_SrcImpImportUseMap_20_20, &STATE_VARIABLE_SrcImpImportUseMap_25_25, STATE_VARIABLE_AncestorImportUseMap_21_21, &STATE_VARIABLE_AncestorImportUseMap_26_26);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Ancestors_16));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_22_22)), &conv9_STATE_VARIABLE_ReadModules_28_28, ((MR_Box) (STATE_VARIABLE_InclMap_23_23)), &conv8_STATE_VARIABLE_InclMap_29_29, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_24_24)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_25_25)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_26_26)), &conv5_STATE_VARIABLE_AncestorImportUseMap_32_32);
    STATE_VARIABLE_ReadModules_28_28 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_28_28));
    STATE_VARIABLE_InclMap_29_29 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_29_29));
    STATE_VARIABLE_SrcIntImportUseMap_30_30 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30));
    STATE_VARIABLE_SrcImpImportUseMap_31_31 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31));
    STATE_VARIABLE_AncestorImportUseMap_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_32_32));
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[7]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Ancestors_16));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_33, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_28_28)), &conv19_STATE_VARIABLE_ReadModules_34_34, ((MR_Box) (STATE_VARIABLE_InclMap_29_29)), &conv18_STATE_VARIABLE_InclMap_35_35, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_30_30)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_31_31)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_32_32)), &conv15_STATE_VARIABLE_AncestorImportUseMap_38_38);
    STATE_VARIABLE_ReadModules_34_34 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_34_34));
    STATE_VARIABLE_InclMap_35_35 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_35_35));
    STATE_VARIABLE_SrcIntImportUseMap_36_36 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36));
    STATE_VARIABLE_SrcImpImportUseMap_37_37 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37));
    STATE_VARIABLE_AncestorImportUseMap_38_38 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_38_38));
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[8]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_3));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Ancestors_16));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_39, IndirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_34_34)), &conv29_STATE_VARIABLE_ReadModules_40_40, ((MR_Box) (STATE_VARIABLE_InclMap_35_35)), &conv28_STATE_VARIABLE_InclMap_41_41, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_36_36)), &conv27_STATE_VARIABLE_SrcIntImportUseMap_42_42, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_37_37)), &conv26_STATE_VARIABLE_SrcImpImportUseMap_43_43, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_38_38)), &conv25_STATE_VARIABLE_AncestorImportUseMap_44_44);
    STATE_VARIABLE_ReadModules_40_40 = ((MR_Word) (conv29_STATE_VARIABLE_ReadModules_40_40));
    STATE_VARIABLE_InclMap_41_41 = ((MR_Word) (conv28_STATE_VARIABLE_InclMap_41_41));
    STATE_VARIABLE_SrcIntImportUseMap_42_42 = ((MR_Word) (conv27_STATE_VARIABLE_SrcIntImportUseMap_42_42));
    STATE_VARIABLE_SrcImpImportUseMap_43_43 = ((MR_Word) (conv26_STATE_VARIABLE_SrcImpImportUseMap_43_43));
    STATE_VARIABLE_AncestorImportUseMap_44_44 = ((MR_Word) (conv25_STATE_VARIABLE_AncestorImportUseMap_44_44));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *ImportAccessibilityInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_ReadModules_40_40));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_InclMap_41_41));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_42_42));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_43_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_44_44));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_ParseTreeInt1_16;
    MR_Word conv5_STATE_VARIABLE_HaveReadModuleMaps_32;
    MR_Word conv4_STATE_VARIABLE_Baggage_34;
    MR_Word conv3_STATE_VARIABLE_AugCompUnit_36;

    parse_tree__grab_modules__process_module_int1_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_ParseTreeInt1_16, ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_HaveReadModuleMaps_32, ((MR_Word) (wrapper_arg_5)), &conv4_STATE_VARIABLE_Baggage_34, ((MR_Word) (wrapper_arg_7)), &conv3_STATE_VARIABLE_AugCompUnit_36);
    *wrapper_arg_2 = ((MR_Box) (conv6_ParseTreeInt1_16));
    *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_HaveReadModuleMaps_32));
    *wrapper_arg_6 = ((MR_Box) (conv4_STATE_VARIABLE_Baggage_34));
    *wrapper_arg_8 = ((MR_Box) (conv3_STATE_VARIABLE_AugCompUnit_36));
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    parse_tree__item_util__add_implicit_fim_for_module_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0(
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_Word SourceFileModuleName_15,
  MR_Word MaybeTimestamp_16,
  MR_Word MaybeTopModule_17,
  MR_Word ParseTreeModuleSrc0_18,
  MR_Word * STATE_VARIABLE_Baggage_60,
  MR_Word * STATE_VARIABLE_AugCompUnit_61,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_62,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_63)
{
  {
    MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 0))));
    MR_Word IntFIMs0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 10))));
    MR_Word ImpFIMs0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 11))));
    MR_Word IntFIMs_30;
    MR_Word ImpFIMs_31;
    MR_Word ParseTreeModuleSrc_33;
    MR_Word MaybeTimestampMap_35;
    MR_Word Errors0_37;
    MR_Word GrabbedFileMap0_38;
    MR_Word SrcMap0_39;
    MR_Word SrcMap_40;
    MR_Word ImportUseMap_41;
    MR_Word IntImportMap_42;
    MR_Word IntUseMap_43;
    MR_Word ImpImportMap_44;
    MR_Word ImpUseMap_45;
    MR_Word IntUseImpImportMap_46;
    MR_Word IntImports2_47;
    MR_Word IntUses2_48;
    MR_Word ImpImports_49;
    MR_Word ImpUses_50;
    MR_Word IntUseImpImports_51;
    MR_Word Ancestors_52;
    MR_Word IntImports_53;
    MR_Word IntUses_54;
    MR_Word Experiment3_55;
    MR_Word ImportAccessibilityInfo_58;
    MR_Word AccessSpecs_59;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_AugCompUnit_74_74;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_Baggage_76_76;
    MR_String Var_77;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_78_78;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_81_81;
    MR_Word STATE_VARIABLE_Baggage_82_82;
    MR_Word STATE_VARIABLE_AugCompUnit_83_83;
    MR_Word STATE_VARIABLE_IntIndirectImported_85_85;
    MR_Word STATE_VARIABLE_ImpIndirectImported_86_86;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_87_87;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_88_88;
    MR_Word Var_91;
    MR_Word STATE_VARIABLE_IntIndirectImported_92_92;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_93_93;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_94_94;
    MR_Word STATE_VARIABLE_Baggage_95_95;
    MR_Word STATE_VARIABLE_AugCompUnit_96_96;
    MR_Word STATE_VARIABLE_ImpIndirectImported_100_100;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_101_101;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_102_102;
    MR_Word STATE_VARIABLE_Baggage_103_103;
    MR_Word STATE_VARIABLE_AugCompUnit_104_104;
    MR_Word Var_108;
    MR_Word STATE_VARIABLE_IntIndirectImported_109_109;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_110_110;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_111_111;
    MR_Word STATE_VARIABLE_Baggage_112_112;
    MR_Word STATE_VARIABLE_AugCompUnit_113_113;
    MR_Word STATE_VARIABLE_ImpIndirectImported_117_117;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_118_118;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_119_119;
    MR_Word STATE_VARIABLE_Baggage_120_120;
    MR_Word STATE_VARIABLE_AugCompUnit_121_121;
    MR_Word STATE_VARIABLE_IntIndirectImported_125_125;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_126_126;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_127_127;
    MR_Word STATE_VARIABLE_Baggage_128_128;
    MR_Word STATE_VARIABLE_AugCompUnit_129_129;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_133_133;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_134_134;
    MR_Word STATE_VARIABLE_Baggage_135_135;
    MR_Word STATE_VARIABLE_AugCompUnit_136_136;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_140_140;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_141_141;
    MR_Word STATE_VARIABLE_Baggage_142_142;
    MR_Word STATE_VARIABLE_AugCompUnit_143_143;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_147_147;
    MR_Word STATE_VARIABLE_Baggage_148_148;
    MR_Word STATE_VARIABLE_AugCompUnit_149_149;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_153_153;
    MR_Word STATE_VARIABLE_Baggage_154_154;
    MR_Word STATE_VARIABLE_AugCompUnit_155_155;
    MR_Word STATE_VARIABLE_Baggage_166_166;
    MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 12))));
    MR_Word Var_356;
    MR_Word Var_357;
    MR_Word Var_358;
    MR_Word Var_359;
    MR_Word Var_360;
    MR_Word Var_361;
    MR_Word Var_362;
    MR_Word Var_363;
    MR_Word Var_364;
    MR_Word Var_365;
    MR_Word Var_368;
    MR_Word Var_369;
    MR_Word Var_370;
    MR_Word Var_371;
    MR_Word Var_372;
    MR_Word Var_373;
    MR_Word Var_374;
    MR_Word Var_375;
    MR_Word Var_376;
    MR_Word Var_377;
    MR_Word Var_378;
    MR_Word Var_379;
    MR_Word Var_380;
    MR_Word Var_381;
    MR_Word Var_382;
    MR_Word Var_383;
    MR_Word Var_384;
    MR_Word Var_385;
    MR_Word Var_386;
    MR_Word Var_387;
    MR_Word Var_388;
    MR_Word Var_389;
    MR_Word Var_390;
    MR_Word Var_391;
    MR_Word Var_392;
    MR_Word Var_393;
    MR_Box conv1_IntFIMs_30;
    MR_Box conv2_ImpFIMs_31;
    MR_Word Var_439;
    MR_Word Var_441;
    MR_Word Var_442;
    MR_Word Var_443;
    MR_Word Var_444;
    MR_Word Var_445;
    MR_Word Var_446;

    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ModuleName_27));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_66, Var_182, ((MR_Box) (IntFIMs0_28)), &conv1_IntFIMs_30);
    IntFIMs_30 = ((MR_Word) (conv1_IntFIMs_30));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 13))));
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_66, Var_69, ((MR_Box) (ImpFIMs0_29)), &conv2_ImpFIMs_31);
    ImpFIMs_31 = ((MR_Word) (conv2_ImpFIMs_31));
    Var_356 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 0))));
    Var_357 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 1))));
    Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 2))));
    Var_359 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 3))));
    Var_360 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 4))));
    Var_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 5))));
    Var_362 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 6))));
    Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 7))));
    Var_364 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 8))));
    Var_365 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 9))));
    Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 12))));
    Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 13))));
    Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 14))));
    Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 15))));
    Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 16))));
    Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 17))));
    Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 18))));
    Var_375 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 19))));
    Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 20))));
    Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 21))));
    Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 22))));
    Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 23))));
    Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 24))));
    Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 25))));
    Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 26))));
    Var_383 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 27))));
    Var_384 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 28))));
    Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 29))));
    Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 30))));
    Var_387 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 31))));
    Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 32))));
    Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 33))));
    Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 34))));
    Var_391 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 35))));
    Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 36))));
    Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 37))));
    {
      ParseTreeModuleSrc_33 = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 0) = ((MR_Box) (Var_356));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 1) = ((MR_Box) (Var_357));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 2) = ((MR_Box) (Var_358));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 3) = ((MR_Box) (Var_359));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 4) = ((MR_Box) (Var_360));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 5) = ((MR_Box) (Var_361));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 6) = ((MR_Box) (Var_362));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 7) = ((MR_Box) (Var_363));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 8) = ((MR_Box) (Var_364));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 9) = ((MR_Box) (Var_365));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 10) = ((MR_Box) (IntFIMs_30));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 11) = ((MR_Box) (ImpFIMs_31));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 12) = ((MR_Box) (Var_368));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 13) = ((MR_Box) (Var_369));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 14) = ((MR_Box) (Var_370));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 15) = ((MR_Box) (Var_371));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 16) = ((MR_Box) (Var_372));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 17) = ((MR_Box) (Var_373));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 18) = ((MR_Box) (Var_374));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 19) = ((MR_Box) (Var_375));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 20) = ((MR_Box) (Var_376));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 21) = ((MR_Box) (Var_377));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 22) = ((MR_Box) (Var_378));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 23) = ((MR_Box) (Var_379));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 24) = ((MR_Box) (Var_380));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 25) = ((MR_Box) (Var_381));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 26) = ((MR_Box) (Var_382));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 27) = ((MR_Box) (Var_383));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 28) = ((MR_Box) (Var_384));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 29) = ((MR_Box) (Var_385));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 30) = ((MR_Box) (Var_386));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 31) = ((MR_Box) (Var_387));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 32) = ((MR_Box) (Var_388));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 33) = ((MR_Box) (Var_389));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 34) = ((MR_Box) (Var_390));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 35) = ((MR_Box) (Var_391));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 36) = ((MR_Box) (Var_392));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, 37) = ((MR_Box) (Var_393));
    }
    if ((MaybeTimestamp_16 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeTimestampMap_35 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Timestamp_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_16, (MR_Integer) 0))));
      MR_Word Var_70;
      MR_Word Var_71;

      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Timestamp_34));
        MR_hl_field(MR_mktag(0), Var_71, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      Var_70 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_27)), ((MR_Box) (Var_71)));
      {
        MaybeTimestampMap_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTimestampMap_35, 0) = ((MR_Box) (Var_70));
      }
    }
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors0_37);
    parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_33, &STATE_VARIABLE_AugCompUnit_74_74);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (ParseTreeModuleSrc_33));
    }
    GrabbedFileMap0_38 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_27)), ((MR_Box) (Var_75)));
    Var_77 = mercury__dir__this_directory_0_f_0();
    {
      STATE_VARIABLE_Baggage_76_76 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 0) = ((MR_Box) (SourceFileName_14));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 2) = ((MR_Box) (SourceFileModuleName_15));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 3) = ((MR_Box) (MaybeTopModule_17));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 4) = ((MR_Box) (MaybeTimestampMap_35));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 5) = ((MR_Box) (GrabbedFileMap0_38));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_76_76, 7) = ((MR_Box) (Errors0_37));
    }
    SrcMap0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 1))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_27)), ((MR_Box) (ParseTreeModuleSrc_33)), SrcMap0_39, &SrcMap_40);
    Var_439 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 0))));
    Var_441 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 2))));
    Var_442 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 3))));
    Var_443 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 4))));
    Var_444 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 5))));
    Var_445 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 6))));
    Var_446 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 7))));
    {
      STATE_VARIABLE_HaveReadModuleMaps_78_78 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 0) = ((MR_Box) (Var_439));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 1) = ((MR_Box) (SrcMap_40));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 2) = ((MR_Box) (Var_441));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 3) = ((MR_Box) (Var_442));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 4) = ((MR_Box) (Var_443));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 5) = ((MR_Box) (Var_444));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 6) = ((MR_Box) (Var_445));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_78_78, 7) = ((MR_Box) (Var_446));
    }
    ImportUseMap_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 9))));
    parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportUseMap_41, &IntImportMap_42, &IntUseMap_43, &ImpImportMap_44, &ImpUseMap_45, &IntUseImpImportMap_46);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_42, &IntImports2_47);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseMap_43, &IntUses2_48);
    ImpImports_49 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_44);
    ImpUses_50 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpUseMap_45);
    IntUseImpImports_51 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseImpImportMap_46);
    Ancestors_52 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_27);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_50_93_95_48_16_p_0(Globals_13, (MR_Integer) 0, Ancestors_52, IntImports2_47, &IntImports_53, IntUses2_48, &IntUses_54, STATE_VARIABLE_HaveReadModuleMaps_78_78, &STATE_VARIABLE_HaveReadModuleMaps_81_81, STATE_VARIABLE_Baggage_76_76, &STATE_VARIABLE_Baggage_82_82, STATE_VARIABLE_AugCompUnit_74_74, &STATE_VARIABLE_AugCompUnit_83_83);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_85_85);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_86_86);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_87_87);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_88_88);
    Var_91 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_53);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_13, (MR_Integer) 0, Var_91, STATE_VARIABLE_IntIndirectImported_85_85, &STATE_VARIABLE_IntIndirectImported_92_92, STATE_VARIABLE_IntImpIndirectImported_87_87, &STATE_VARIABLE_IntImpIndirectImported_93_93, STATE_VARIABLE_HaveReadModuleMaps_81_81, &STATE_VARIABLE_HaveReadModuleMaps_94_94, STATE_VARIABLE_Baggage_82_82, &STATE_VARIABLE_Baggage_95_95, STATE_VARIABLE_AugCompUnit_83_83, &STATE_VARIABLE_AugCompUnit_96_96);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_13, (MR_Integer) 2, ImpImports_49, STATE_VARIABLE_ImpIndirectImported_86_86, &STATE_VARIABLE_ImpIndirectImported_100_100, STATE_VARIABLE_ImpImpIndirectImported_88_88, &STATE_VARIABLE_ImpImpIndirectImported_101_101, STATE_VARIABLE_HaveReadModuleMaps_94_94, &STATE_VARIABLE_HaveReadModuleMaps_102_102, STATE_VARIABLE_Baggage_95_95, &STATE_VARIABLE_Baggage_103_103, STATE_VARIABLE_AugCompUnit_96_96, &STATE_VARIABLE_AugCompUnit_104_104);
    Var_108 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_54);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_13, (MR_Integer) 1, Var_108, STATE_VARIABLE_IntIndirectImported_92_92, &STATE_VARIABLE_IntIndirectImported_109_109, STATE_VARIABLE_IntImpIndirectImported_93_93, &STATE_VARIABLE_IntImpIndirectImported_110_110, STATE_VARIABLE_HaveReadModuleMaps_102_102, &STATE_VARIABLE_HaveReadModuleMaps_111_111, STATE_VARIABLE_Baggage_103_103, &STATE_VARIABLE_Baggage_112_112, STATE_VARIABLE_AugCompUnit_104_104, &STATE_VARIABLE_AugCompUnit_113_113);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_13, (MR_Integer) 3, ImpUses_50, STATE_VARIABLE_ImpIndirectImported_100_100, &STATE_VARIABLE_ImpIndirectImported_117_117, STATE_VARIABLE_ImpImpIndirectImported_101_101, &STATE_VARIABLE_ImpImpIndirectImported_118_118, STATE_VARIABLE_HaveReadModuleMaps_111_111, &STATE_VARIABLE_HaveReadModuleMaps_119_119, STATE_VARIABLE_Baggage_112_112, &STATE_VARIABLE_Baggage_120_120, STATE_VARIABLE_AugCompUnit_113_113, &STATE_VARIABLE_AugCompUnit_121_121);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_13, (MR_Integer) 4, IntUseImpImports_51, STATE_VARIABLE_IntIndirectImported_109_109, &STATE_VARIABLE_IntIndirectImported_125_125, STATE_VARIABLE_IntImpIndirectImported_110_110, &STATE_VARIABLE_IntImpIndirectImported_126_126, STATE_VARIABLE_HaveReadModuleMaps_119_119, &STATE_VARIABLE_HaveReadModuleMaps_127_127, STATE_VARIABLE_Baggage_120_120, &STATE_VARIABLE_Baggage_128_128, STATE_VARIABLE_AugCompUnit_121_121, &STATE_VARIABLE_AugCompUnit_129_129);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_14_p_0(Globals_13, (MR_Integer) 0, STATE_VARIABLE_IntIndirectImported_125_125, STATE_VARIABLE_IntImpIndirectImported_126_126, &STATE_VARIABLE_IntImpIndirectImported_133_133, STATE_VARIABLE_HaveReadModuleMaps_127_127, &STATE_VARIABLE_HaveReadModuleMaps_134_134, STATE_VARIABLE_Baggage_128_128, &STATE_VARIABLE_Baggage_135_135, STATE_VARIABLE_AugCompUnit_129_129, &STATE_VARIABLE_AugCompUnit_136_136);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_14_p_0(Globals_13, (MR_Integer) 1, STATE_VARIABLE_ImpIndirectImported_117_117, STATE_VARIABLE_ImpImpIndirectImported_118_118, &STATE_VARIABLE_ImpImpIndirectImported_140_140, STATE_VARIABLE_HaveReadModuleMaps_134_134, &STATE_VARIABLE_HaveReadModuleMaps_141_141, STATE_VARIABLE_Baggage_135_135, &STATE_VARIABLE_Baggage_142_142, STATE_VARIABLE_AugCompUnit_136_136, &STATE_VARIABLE_AugCompUnit_143_143);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_13, (MR_Integer) 2, STATE_VARIABLE_IntImpIndirectImported_133_133, STATE_VARIABLE_HaveReadModuleMaps_141_141, &STATE_VARIABLE_HaveReadModuleMaps_147_147, STATE_VARIABLE_Baggage_142_142, &STATE_VARIABLE_Baggage_148_148, STATE_VARIABLE_AugCompUnit_143_143, &STATE_VARIABLE_AugCompUnit_149_149);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_13, (MR_Integer) 2, STATE_VARIABLE_ImpImpIndirectImported_140_140, STATE_VARIABLE_HaveReadModuleMaps_147_147, &STATE_VARIABLE_HaveReadModuleMaps_153_153, STATE_VARIABLE_Baggage_148_148, &STATE_VARIABLE_Baggage_154_154, STATE_VARIABLE_AugCompUnit_149_149, &STATE_VARIABLE_AugCompUnit_155_155);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 708, &Experiment3_55);
    switch (Experiment3_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Baggage_166_166 = STATE_VARIABLE_Baggage_154_154;
          *STATE_VARIABLE_AugCompUnit_61 = STATE_VARIABLE_AugCompUnit_155_155;
          *STATE_VARIABLE_HaveReadModuleMaps_63 = STATE_VARIABLE_HaveReadModuleMaps_153_153;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_159_159;
          MR_Word STATE_VARIABLE_Baggage_160_160;
          MR_Word STATE_VARIABLE_AugCompUnit_161_161;
          MR_Word Var_163;
          MR_Word Var_164;
          MR_Word _SelfParseTreeInt1_56;
          MR_Word _AncestorParseTreeInt1s_57;
          MR_Box conv10_STATE_VARIABLE_HaveReadModuleMaps_63;
          MR_Box conv9_STATE_VARIABLE_Baggage_166_166;
          MR_Box conv8_STATE_VARIABLE_AugCompUnit_61;
          MR_Box conv7_STATE_VARIABLE_IO_65;

          parse_tree__grab_modules__process_module_int1_12_p_0(Globals_13, (MR_Integer) 6, ModuleName_27, &_SelfParseTreeInt1_56, STATE_VARIABLE_HaveReadModuleMaps_153_153, &STATE_VARIABLE_HaveReadModuleMaps_159_159, STATE_VARIABLE_Baggage_154_154, &STATE_VARIABLE_Baggage_160_160, STATE_VARIABLE_AugCompUnit_155_155, &STATE_VARIABLE_AugCompUnit_161_161);
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[5]));
            MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_163, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_163, 3) = ((MR_Box) (Globals_13));
            MR_hl_field(MR_mktag(0), Var_163, 4) = ((MR_Box) ((MR_Integer) 6));
          }
          Var_164 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_27);
          mercury__list__map_foldl4_11_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_baggage_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_163, Var_164, &_AncestorParseTreeInt1s_57, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_159_159)), &conv10_STATE_VARIABLE_HaveReadModuleMaps_63, ((MR_Box) (STATE_VARIABLE_Baggage_160_160)), &conv9_STATE_VARIABLE_Baggage_166_166, ((MR_Box) (STATE_VARIABLE_AugCompUnit_161_161)), &conv8_STATE_VARIABLE_AugCompUnit_61, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_65);
          *STATE_VARIABLE_HaveReadModuleMaps_63 = ((MR_Word) (conv10_STATE_VARIABLE_HaveReadModuleMaps_63));
          STATE_VARIABLE_Baggage_166_166 = ((MR_Word) (conv9_STATE_VARIABLE_Baggage_166_166));
          *STATE_VARIABLE_AugCompUnit_61 = ((MR_Word) (conv8_STATE_VARIABLE_AugCompUnit_61));
        }
        break;
    }
    parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugCompUnit_61, &ImportAccessibilityInfo_58);
    parse_tree__grab_modules__check_imports_accessibility_3_p_0(ParseTreeModuleSrc_33, ImportAccessibilityInfo_58, &AccessSpecs_59);
    parse_tree__grab_modules__module_baggage_add_specs_3_p_0(AccessSpecs_59, STATE_VARIABLE_Baggage_166_166, STATE_VARIABLE_Baggage_60);
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugCompUnit_0_13,
  MR_Word * STATE_VARIABLE_AugCompUnit_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_14 = STATE_VARIABLE_AugCompUnit_0_13;
      *STATE_VARIABLE_Baggage_12 = STATE_VARIABLE_Baggage_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_ImpIndirectImports_8 = STATE_VARIABLE_ImpIndirectImports_0_7;
      *STATE_VARIABLE_IntIndirectImports_6 = STATE_VARIABLE_IntIndirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_68_68;
      MR_Word STATE_VARIABLE_Baggage_69_69;
      MR_Word STATE_VARIABLE_AugCompUnit_70_70;
      MR_Word STATE_VARIABLE_IntIndirectImports_74_74;
      MR_Word STATE_VARIABLE_ImpIndirectImports_75_75;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_11;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_13;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_11, ModuleName_41, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word ParseTreeInt1_49;
        MR_Word IntUses_50;
        MR_Word ImpUses_51;
        MR_Word Var_72;
        MR_Word Var_73;

        parse_tree__grab_modules__process_module_int1_12_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_41, &ParseTreeInt1_49, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_68_68, STATE_VARIABLE_Baggage_0_11, &STATE_VARIABLE_Baggage_69_69, STATE_VARIABLE_AugCompUnit_0_13, &STATE_VARIABLE_AugCompUnit_70_70);
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_49, (MR_Integer) 6))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_72, &IntUses_50);
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_49, (MR_Integer) 7))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_73, &ImpUses_51);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_50, STATE_VARIABLE_IntIndirectImports_0_5, &STATE_VARIABLE_IntIndirectImports_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_51, STATE_VARIABLE_ImpIndirectImports_0_7, &STATE_VARIABLE_ImpIndirectImports_75_75);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_70_70 = STATE_VARIABLE_AugCompUnit_0_13;
        STATE_VARIABLE_Baggage_69_69 = STATE_VARIABLE_Baggage_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_68_68 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_ImpIndirectImports_75_75 = STATE_VARIABLE_ImpIndirectImports_0_7;
        STATE_VARIABLE_IntIndirectImports_74_74 = STATE_VARIABLE_IntIndirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_42;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_5 = STATE_VARIABLE_IntIndirectImports_74_74;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_7 = STATE_VARIABLE_ImpIndirectImports_75_75;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_68_68;
      next_value_of_STATE_VARIABLE_Baggage_0_11 = STATE_VARIABLE_Baggage_69_69;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_13 = STATE_VARIABLE_AugCompUnit_70_70;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IntIndirectImports_0_5 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      STATE_VARIABLE_ImpIndirectImports_0_7 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_Baggage_0_11 = next_value_of_STATE_VARIABLE_Baggage_0_11;
      STATE_VARIABLE_AugCompUnit_0_13 = next_value_of_STATE_VARIABLE_AugCompUnit_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_50_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugCompUnit_0_13,
  MR_Word * STATE_VARIABLE_AugCompUnit_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_14 = STATE_VARIABLE_AugCompUnit_0_13;
      *STATE_VARIABLE_Baggage_12 = STATE_VARIABLE_Baggage_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_DirectUses_8 = STATE_VARIABLE_DirectUses_0_7;
      *STATE_VARIABLE_DirectImports_6 = STATE_VARIABLE_DirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_70_70;
      MR_Word STATE_VARIABLE_Baggage_71_71;
      MR_Word STATE_VARIABLE_AugCompUnit_72_72;
      MR_Word STATE_VARIABLE_DirectImports_79_79;
      MR_Word STATE_VARIABLE_DirectUses_81_81;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_11;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_13;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_11, ModuleName_41, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word ParseTreeInt0_49;
        MR_Word IntImports_50;
        MR_Word ImpImports_51;
        MR_Word IntUses_52;
        MR_Word ImpUses_53;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word STATE_VARIABLE_DirectImports_78_78;
        MR_Word STATE_VARIABLE_DirectUses_80_80;

        parse_tree__grab_modules__process_module_int0_for_acu_12_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_41, &ParseTreeInt0_49, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_70_70, STATE_VARIABLE_Baggage_0_11, &STATE_VARIABLE_Baggage_71_71, STATE_VARIABLE_AugCompUnit_0_13, &STATE_VARIABLE_AugCompUnit_72_72);
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_49, (MR_Integer) 6))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_74, &IntImports_50);
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_49, (MR_Integer) 8))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_75, &ImpImports_51);
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_49, (MR_Integer) 7))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_76, &IntUses_52);
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_49, (MR_Integer) 9))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_77, &ImpUses_53);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_50, STATE_VARIABLE_DirectImports_0_5, &STATE_VARIABLE_DirectImports_78_78);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_51, STATE_VARIABLE_DirectImports_78_78, &STATE_VARIABLE_DirectImports_79_79);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_DirectUses_0_7, &STATE_VARIABLE_DirectUses_80_80);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_DirectUses_80_80, &STATE_VARIABLE_DirectUses_81_81);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_72_72 = STATE_VARIABLE_AugCompUnit_0_13;
        STATE_VARIABLE_Baggage_71_71 = STATE_VARIABLE_Baggage_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_70_70 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_DirectUses_81_81 = STATE_VARIABLE_DirectUses_0_7;
        STATE_VARIABLE_DirectImports_79_79 = STATE_VARIABLE_DirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_42;
      next_value_of_STATE_VARIABLE_DirectImports_0_5 = STATE_VARIABLE_DirectImports_79_79;
      next_value_of_STATE_VARIABLE_DirectUses_0_7 = STATE_VARIABLE_DirectUses_81_81;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_70_70;
      next_value_of_STATE_VARIABLE_Baggage_0_11 = STATE_VARIABLE_Baggage_71_71;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_13 = STATE_VARIABLE_AugCompUnit_72_72;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DirectImports_0_5 = next_value_of_STATE_VARIABLE_DirectImports_0_5;
      STATE_VARIABLE_DirectUses_0_7 = next_value_of_STATE_VARIABLE_DirectUses_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_Baggage_0_11 = next_value_of_STATE_VARIABLE_Baggage_0_11;
      STATE_VARIABLE_AugCompUnit_0_13 = next_value_of_STATE_VARIABLE_AugCompUnit_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_acu_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy0_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt0_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34)
{
  {
    MR_Word ReturnTimestamp_21;
    MR_Word MaybeTimestamp_23;
    MR_Word Specs_24;
    MR_Word Errors_25;
    MR_Word GrabbedFile_26;
    MR_Word STATE_VARIABLE_Baggage_40_40;
    MR_Word STATE_VARIABLE_AugCompUnit_42_42;
    MR_Word STATE_VARIABLE_Baggage_45_45;
    MR_Word Var_47;
    MR_Word MaybeTimestampMap_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_31, (MR_Integer) 4))));
    MR_String _FileName_22;

    if ((MaybeTimestampMap_78 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnTimestamp_21 = (MR_Integer) 1;
    else
      ReturnTimestamp_21 = (MR_Integer) 0;
    parse_tree__read_modules__maybe_read_module_int0_13_p_0(Globals_13, (MR_Integer) 0, ModuleName_15, &_FileName_22, ReturnTimestamp_21, &MaybeTimestamp_23, ParseTreeInt0_16, &Specs_24, &Errors_25, STATE_VARIABLE_HaveReadModuleMaps_0_29, STATE_VARIABLE_HaveReadModuleMaps_30);
    {
      GrabbedFile_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GrabbedFile_26, 0) = ((MR_Box) (*ParseTreeInt0_16));
      MR_hl_field(MR_mktag(1), GrabbedFile_26, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_14));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_15, GrabbedFile_26, STATE_VARIABLE_Baggage_0_31, &STATE_VARIABLE_Baggage_40_40);
    switch (ReadWhy0_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IntForOptSpec_28;

          {
            IntForOptSpec_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IntForOptSpec_28, 0) = ((MR_Box) (*ParseTreeInt0_16));
            MR_hl_field(MR_mktag(0), IntForOptSpec_28, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_28, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_42_42);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word AncestorIntSpec_27;

          {
            AncestorIntSpec_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AncestorIntSpec_27, 0) = ((MR_Box) (*ParseTreeInt0_16));
            MR_hl_field(MR_mktag(0), AncestorIntSpec_27, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(AncestorIntSpec_27, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_42_42);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_15, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_23, STATE_VARIABLE_Baggage_40_40, &STATE_VARIABLE_Baggage_45_45);
    parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_45_45, STATE_VARIABLE_Baggage_32);
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt0_16, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_15, Var_47, STATE_VARIABLE_AugCompUnit_42_42, STATE_VARIABLE_AugCompUnit_34);
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
    MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT0_7, (MR_Integer) 0))));
    MR_Word Map_10;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_57));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy2_15,
  MR_Word Modules_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23,
  MR_Word STATE_VARIABLE_Baggage_0_24,
  MR_Word * STATE_VARIABLE_Baggage_25,
  MR_Word STATE_VARIABLE_AugCompUnit_0_26,
  MR_Word * STATE_VARIABLE_AugCompUnit_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpIndirectImports_21;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_31_31;
    MR_Word STATE_VARIABLE_Baggage_32_32;
    MR_Word STATE_VARIABLE_AugCompUnit_33_33;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_30 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_14_p_0(Globals_13, ReadWhy2_15, Modules_16, Var_30, &ImpIndirectImports_21, STATE_VARIABLE_HaveReadModuleMaps_0_22, &STATE_VARIABLE_HaveReadModuleMaps_31_31, STATE_VARIABLE_Baggage_0_24, &STATE_VARIABLE_Baggage_32_32, STATE_VARIABLE_AugCompUnit_0_26, &STATE_VARIABLE_AugCompUnit_33_33);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_21);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_27 = STATE_VARIABLE_AugCompUnit_33_33;
      *STATE_VARIABLE_Baggage_25 = STATE_VARIABLE_Baggage_32_32;
      *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_31_31;
    }
    else
    {
      MR_Word next_value_of_Modules_16 = ImpIndirectImports_21;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_22 = STATE_VARIABLE_HaveReadModuleMaps_31_31;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_24 = STATE_VARIABLE_Baggage_32_32;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_26 = STATE_VARIABLE_AugCompUnit_33_33;

      // direct tailcall eliminated
      ;
      Modules_16 = next_value_of_Modules_16;
      STATE_VARIABLE_HaveReadModuleMaps_0_22 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_22;
      STATE_VARIABLE_Baggage_0_24 = next_value_of_STATE_VARIABLE_Baggage_0_24;
      STATE_VARIABLE_AugCompUnit_0_26 = next_value_of_STATE_VARIABLE_AugCompUnit_0_26;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_14_p_0(
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_25,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_27,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_28,
  MR_Word STATE_VARIABLE_Baggage_0_29,
  MR_Word * STATE_VARIABLE_Baggage_30,
  MR_Word STATE_VARIABLE_AugCompUnit_0_31,
  MR_Word * STATE_VARIABLE_AugCompUnit_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_24;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_ImpIndirectImports_37_37;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_38_38;
    MR_Word STATE_VARIABLE_Baggage_39_39;
    MR_Word STATE_VARIABLE_AugCompUnit_40_40;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_18);
    Var_36 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(Globals_15, ReadWhy2_17, Var_35, Var_36, &IndirectImports_24, STATE_VARIABLE_ImpIndirectImports_0_25, &STATE_VARIABLE_ImpIndirectImports_37_37, STATE_VARIABLE_HaveReadModuleMaps_0_27, &STATE_VARIABLE_HaveReadModuleMaps_38_38, STATE_VARIABLE_Baggage_0_29, &STATE_VARIABLE_Baggage_39_39, STATE_VARIABLE_AugCompUnit_0_31, &STATE_VARIABLE_AugCompUnit_40_40);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_24);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_32 = STATE_VARIABLE_AugCompUnit_40_40;
      *STATE_VARIABLE_Baggage_30 = STATE_VARIABLE_Baggage_39_39;
      *STATE_VARIABLE_HaveReadModuleMaps_28 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
      *STATE_VARIABLE_ImpIndirectImports_26 = STATE_VARIABLE_ImpIndirectImports_37_37;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_24;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_25 = STATE_VARIABLE_ImpIndirectImports_37_37;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_27 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_29 = STATE_VARIABLE_Baggage_39_39;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_31 = STATE_VARIABLE_AugCompUnit_40_40;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_ImpIndirectImports_0_25 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_25;
      STATE_VARIABLE_HaveReadModuleMaps_0_27 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_27;
      STATE_VARIABLE_Baggage_0_29 = next_value_of_STATE_VARIABLE_Baggage_0_29;
      STATE_VARIABLE_AugCompUnit_0_31 = next_value_of_STATE_VARIABLE_AugCompUnit_0_31;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_50_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugCompUnit_0_13,
  MR_Word * STATE_VARIABLE_AugCompUnit_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_14 = STATE_VARIABLE_AugCompUnit_0_13;
      *STATE_VARIABLE_Baggage_12 = STATE_VARIABLE_Baggage_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_ImpIndirectImports_8 = STATE_VARIABLE_ImpIndirectImports_0_7;
      *STATE_VARIABLE_IntIndirectImports_6 = STATE_VARIABLE_IntIndirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_67_67;
      MR_Word STATE_VARIABLE_Baggage_68_68;
      MR_Word STATE_VARIABLE_AugCompUnit_69_69;
      MR_Word STATE_VARIABLE_IntIndirectImports_72_72;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_11;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_13;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_11, ModuleName_41, (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word ParseTreeInt2_49;
        MR_Word IntUses_50;
        MR_Word Var_71;

        parse_tree__grab_modules__process_module_int2_12_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_41, &ParseTreeInt2_49, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_67_67, STATE_VARIABLE_Baggage_0_11, &STATE_VARIABLE_Baggage_68_68, STATE_VARIABLE_AugCompUnit_0_13, &STATE_VARIABLE_AugCompUnit_69_69);
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_49, (MR_Integer) 5))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), Var_71, &IntUses_50);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_50, STATE_VARIABLE_IntIndirectImports_0_5, &STATE_VARIABLE_IntIndirectImports_72_72);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_69_69 = STATE_VARIABLE_AugCompUnit_0_13;
        STATE_VARIABLE_Baggage_68_68 = STATE_VARIABLE_Baggage_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_67_67 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_IntIndirectImports_72_72 = STATE_VARIABLE_IntIndirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_42;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_5 = STATE_VARIABLE_IntIndirectImports_72_72;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_67_67;
      next_value_of_STATE_VARIABLE_Baggage_0_11 = STATE_VARIABLE_Baggage_68_68;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_13 = STATE_VARIABLE_AugCompUnit_69_69;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IntIndirectImports_0_5 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_Baggage_0_11 = next_value_of_STATE_VARIABLE_Baggage_0_11;
      STATE_VARIABLE_AugCompUnit_0_13 = next_value_of_STATE_VARIABLE_AugCompUnit_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy2_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt2_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34)
{
  {
    MR_Word ReturnTimestamp_21;
    MR_Word MaybeTimestamp_23;
    MR_Word Specs_24;
    MR_Word Errors_25;
    MR_Word GrabbedFile_26;
    MR_Word STATE_VARIABLE_Baggage_40_40;
    MR_Word STATE_VARIABLE_AugCompUnit_42_42;
    MR_Word STATE_VARIABLE_Baggage_45_45;
    MR_Word Var_47;
    MR_Word MaybeTimestampMap_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_31, (MR_Integer) 4))));
    MR_String _FileName_22;

    if ((MaybeTimestampMap_65 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnTimestamp_21 = (MR_Integer) 1;
    else
      ReturnTimestamp_21 = (MR_Integer) 0;
    parse_tree__read_modules__maybe_read_module_int2_13_p_0(Globals_13, (MR_Integer) 0, ModuleName_15, &_FileName_22, ReturnTimestamp_21, &MaybeTimestamp_23, ParseTreeInt2_16, &Specs_24, &Errors_25, STATE_VARIABLE_HaveReadModuleMaps_0_29, STATE_VARIABLE_HaveReadModuleMaps_30);
    {
      GrabbedFile_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GrabbedFile_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), GrabbedFile_26, 1) = ((MR_Box) (*ParseTreeInt2_16));
      MR_hl_field(MR_mktag(3), GrabbedFile_26, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy2_14));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_15, GrabbedFile_26, STATE_VARIABLE_Baggage_0_31, &STATE_VARIABLE_Baggage_40_40);
    switch (ReadWhy2_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word IndirectIntSpec_27;

          {
            IndirectIntSpec_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IndirectIntSpec_27, 0) = ((MR_Box) (*ParseTreeInt2_16));
            MR_hl_field(MR_mktag(0), IndirectIntSpec_27, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(IndirectIntSpec_27, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_42_42);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IntForOptSpec_28;

          {
            IntForOptSpec_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IntForOptSpec_28, 0) = ((MR_Box) (*ParseTreeInt2_16));
            MR_hl_field(MR_mktag(2), IntForOptSpec_28, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_28, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_42_42);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_15, (MR_Integer) 2, (MR_Integer) 4, MaybeTimestamp_23, STATE_VARIABLE_Baggage_40_40, &STATE_VARIABLE_Baggage_45_45);
    parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_45_45, STATE_VARIABLE_Baggage_32);
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_16, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_15, Var_47, STATE_VARIABLE_AugCompUnit_42_42, STATE_VARIABLE_AugCompUnit_34);
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
    MR_Word PT2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT2_7, (MR_Integer) 0))));
    MR_Word Map_10;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_44));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6)
{
  {
    MR_bool succeeded;
    MR_Word GrabbedFileMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_4, (MR_Integer) 5))));
    MR_Word OldGrabbedFile_8;
    MR_Box conv0_OldGrabbedFile_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), GrabbedFileMap_7, ((MR_Box) (ModuleName_5)), &conv0_OldGrabbedFile_8);
    if (succeeded)
    {
      OldGrabbedFile_8 = ((MR_Word) (conv0_OldGrabbedFile_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldFileKind_9;
      MR_Word Var_11;
      MR_Word Var_22;

      switch (MR_tag((MR_Word) OldGrabbedFile_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OldFileKind_9 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          OldFileKind_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[0]));
          break;
        case (MR_Integer) 2:
          OldFileKind_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[1]));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OldGrabbedFile_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldFileKind_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[2]));
              break;
            case (MR_Integer) 1:
              OldFileKind_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[3]));
              break;
          }
          break;
      }
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = (MR_Box) ((MR_Unsigned) (FileKind_6));
      }
      parse_tree__file_kind____Compare____file_kind_0_0(&Var_22, Var_11, OldFileKind_9);
      succeeded = ((MR_Integer) 1 == Var_22);
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_5(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv44_STATE_VARIABLE_ReadModules_27;
    MR_Word conv43_STATE_VARIABLE_InclMap_29;
    MR_Word conv42_STATE_VARIABLE_SrcIntImportUseMap_31;
    MR_Word conv41_STATE_VARIABLE_SrcImpImportUseMap_33;
    MR_Word conv40_STATE_VARIABLE_AncestorImportUseMap_35;

    parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_STATE_VARIABLE_ReadModules_27, ((MR_Word) (wrapper_arg_4)), &conv43_STATE_VARIABLE_InclMap_29, ((MR_Word) (wrapper_arg_6)), &conv42_STATE_VARIABLE_SrcIntImportUseMap_31, ((MR_Word) (wrapper_arg_8)), &conv41_STATE_VARIABLE_SrcImpImportUseMap_33, ((MR_Word) (wrapper_arg_10)), &conv40_STATE_VARIABLE_AncestorImportUseMap_35);
    *wrapper_arg_3 = ((MR_Box) (conv44_STATE_VARIABLE_ReadModules_27));
    *wrapper_arg_5 = ((MR_Box) (conv43_STATE_VARIABLE_InclMap_29));
    *wrapper_arg_7 = ((MR_Box) (conv42_STATE_VARIABLE_SrcIntImportUseMap_31));
    *wrapper_arg_9 = ((MR_Box) (conv41_STATE_VARIABLE_SrcImpImportUseMap_33));
    *wrapper_arg_11 = ((MR_Box) (conv40_STATE_VARIABLE_AncestorImportUseMap_35));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_4(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv34_STATE_VARIABLE_ReadModules_47;
    MR_Word conv33_STATE_VARIABLE_InclMap_49;
    MR_Word conv32_STATE_VARIABLE_SrcIntImportUseMap_51;
    MR_Word conv31_STATE_VARIABLE_SrcImpImportUseMap_53;
    MR_Word conv30_STATE_VARIABLE_AncestorImportUseMap_55;

    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_ReadModules_47, ((MR_Word) (wrapper_arg_4)), &conv33_STATE_VARIABLE_InclMap_49, ((MR_Word) (wrapper_arg_6)), &conv32_STATE_VARIABLE_SrcIntImportUseMap_51, ((MR_Word) (wrapper_arg_8)), &conv31_STATE_VARIABLE_SrcImpImportUseMap_53, ((MR_Word) (wrapper_arg_10)), &conv30_STATE_VARIABLE_AncestorImportUseMap_55);
    *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_ReadModules_47));
    *wrapper_arg_5 = ((MR_Box) (conv33_STATE_VARIABLE_InclMap_49));
    *wrapper_arg_7 = ((MR_Box) (conv32_STATE_VARIABLE_SrcIntImportUseMap_51));
    *wrapper_arg_9 = ((MR_Box) (conv31_STATE_VARIABLE_SrcImpImportUseMap_53));
    *wrapper_arg_11 = ((MR_Box) (conv30_STATE_VARIABLE_AncestorImportUseMap_55));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_3(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv24_STATE_VARIABLE_ReadModules_23;
    MR_Word conv23_STATE_VARIABLE_InclMap_25;
    MR_Word conv22_STATE_VARIABLE_SrcIntImportUseMap_27;
    MR_Word conv21_STATE_VARIABLE_SrcImpImportUseMap_29;
    MR_Word conv20_STATE_VARIABLE_AncestorImportUseMap_31;

    parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_31);
    *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_23));
    *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_25));
    *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_27));
    *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_29));
    *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_31));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_ReadModules_23;
    MR_Word conv13_STATE_VARIABLE_InclMap_25;
    MR_Word conv12_STATE_VARIABLE_SrcIntImportUseMap_27;
    MR_Word conv11_STATE_VARIABLE_SrcImpImportUseMap_29;
    MR_Word conv10_STATE_VARIABLE_AncestorImportUseMap_31;

    parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_31);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_23));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_25));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_27));
    *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_29));
    *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_31));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ReadModules_23;
    MR_Word conv3_STATE_VARIABLE_InclMap_25;
    MR_Word conv2_STATE_VARIABLE_SrcIntImportUseMap_27;
    MR_Word conv1_STATE_VARIABLE_SrcImpImportUseMap_29;
    MR_Word conv0_STATE_VARIABLE_AncestorImportUseMap_31;

    parse_tree__grab_modules__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_AncestorImportUseMap_31);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReadModules_23));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_InclMap_25));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_SrcIntImportUseMap_27));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_SrcImpImportUseMap_29));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_31));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugCompUnit_3,
  MR_Word * ImportAccessibilityInfo_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 0))));
    MR_Word AncestorIntSpecs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 1))));
    MR_Word DirectIntSpecs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 2))));
    MR_Word IndirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 3))));
    MR_Word PlainOpts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 4))));
    MR_Word IntForOptSpecs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_3, (MR_Integer) 6))));
    MR_Word ModuleName_19;
    MR_Word Ancestors_20;
    MR_Word STATE_VARIABLE_ReadModules_21_21;
    MR_Word STATE_VARIABLE_InclMap_22_22;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_23_23;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_24_24;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_25_25;
    MR_Word STATE_VARIABLE_ReadModules_26_26;
    MR_Word STATE_VARIABLE_InclMap_27_27;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_28_28;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_29_29;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_30_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_ReadModules_32_32;
    MR_Word STATE_VARIABLE_InclMap_33_33;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_34_34;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_35_35;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_36_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_ReadModules_38_38;
    MR_Word STATE_VARIABLE_InclMap_39_39;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_40_40;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_41_41;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_42_42;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_ReadModules_44_44;
    MR_Word STATE_VARIABLE_InclMap_45_45;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_46_46;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_47_47;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_48_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_ReadModules_50_50;
    MR_Word STATE_VARIABLE_InclMap_51_51;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_52_52;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_53_53;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_54_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_ReadModules_56_56;
    MR_Word STATE_VARIABLE_InclMap_57_57;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_58_58;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_59_59;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_60_60;
    MR_Box conv9_STATE_VARIABLE_ReadModules_32_32;
    MR_Box conv8_STATE_VARIABLE_InclMap_33_33;
    MR_Box conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34;
    MR_Box conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35;
    MR_Box conv5_STATE_VARIABLE_AncestorImportUseMap_36_36;
    MR_Box conv19_STATE_VARIABLE_ReadModules_38_38;
    MR_Box conv18_STATE_VARIABLE_InclMap_39_39;
    MR_Box conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40;
    MR_Box conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41;
    MR_Box conv15_STATE_VARIABLE_AncestorImportUseMap_42_42;
    MR_Box conv29_STATE_VARIABLE_ReadModules_44_44;
    MR_Box conv28_STATE_VARIABLE_InclMap_45_45;
    MR_Box conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46;
    MR_Box conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47;
    MR_Box conv25_STATE_VARIABLE_AncestorImportUseMap_48_48;
    MR_Box conv39_STATE_VARIABLE_ReadModules_50_50;
    MR_Box conv38_STATE_VARIABLE_InclMap_51_51;
    MR_Box conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52;
    MR_Box conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53;
    MR_Box conv35_STATE_VARIABLE_AncestorImportUseMap_54_54;
    MR_Box conv49_STATE_VARIABLE_ReadModules_56_56;
    MR_Box conv48_STATE_VARIABLE_InclMap_57_57;
    MR_Box conv47_STATE_VARIABLE_SrcIntImportUseMap_58_58;
    MR_Box conv46_STATE_VARIABLE_SrcImpImportUseMap_59_59;
    MR_Box conv45_STATE_VARIABLE_AncestorImportUseMap_60_60;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ReadModules_21_21);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), &STATE_VARIABLE_InclMap_22_22);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_SrcIntImportUseMap_23_23);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_SrcImpImportUseMap_24_24);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_AncestorImportUseMap_25_25);
    ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_5, (MR_Integer) 0))));
    Ancestors_20 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_19);
    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_21_21, &STATE_VARIABLE_ReadModules_26_26, STATE_VARIABLE_InclMap_22_22, &STATE_VARIABLE_InclMap_27_27, STATE_VARIABLE_SrcIntImportUseMap_23_23, &STATE_VARIABLE_SrcIntImportUseMap_28_28, STATE_VARIABLE_SrcImpImportUseMap_24_24, &STATE_VARIABLE_SrcImpImportUseMap_29_29, STATE_VARIABLE_AncestorImportUseMap_25_25, &STATE_VARIABLE_AncestorImportUseMap_30_30);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Ancestors_20));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_31, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_26_26)), &conv9_STATE_VARIABLE_ReadModules_32_32, ((MR_Box) (STATE_VARIABLE_InclMap_27_27)), &conv8_STATE_VARIABLE_InclMap_33_33, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_28_28)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_29_29)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_30_30)), &conv5_STATE_VARIABLE_AncestorImportUseMap_36_36);
    STATE_VARIABLE_ReadModules_32_32 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_32_32));
    STATE_VARIABLE_InclMap_33_33 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_33_33));
    STATE_VARIABLE_SrcIntImportUseMap_34_34 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34));
    STATE_VARIABLE_SrcImpImportUseMap_35_35 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35));
    STATE_VARIABLE_AncestorImportUseMap_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_36_36));
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Ancestors_20));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_32_32)), &conv19_STATE_VARIABLE_ReadModules_38_38, ((MR_Box) (STATE_VARIABLE_InclMap_33_33)), &conv18_STATE_VARIABLE_InclMap_39_39, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_34_34)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_35_35)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_36_36)), &conv15_STATE_VARIABLE_AncestorImportUseMap_42_42);
    STATE_VARIABLE_ReadModules_38_38 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_38_38));
    STATE_VARIABLE_InclMap_39_39 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_39_39));
    STATE_VARIABLE_SrcIntImportUseMap_40_40 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40));
    STATE_VARIABLE_SrcImpImportUseMap_41_41 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41));
    STATE_VARIABLE_AncestorImportUseMap_42_42 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_42_42));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_3));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Ancestors_20));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_43, IndirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_38_38)), &conv29_STATE_VARIABLE_ReadModules_44_44, ((MR_Box) (STATE_VARIABLE_InclMap_39_39)), &conv28_STATE_VARIABLE_InclMap_45_45, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_40_40)), &conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_41_41)), &conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_42_42)), &conv25_STATE_VARIABLE_AncestorImportUseMap_48_48);
    STATE_VARIABLE_ReadModules_44_44 = ((MR_Word) (conv29_STATE_VARIABLE_ReadModules_44_44));
    STATE_VARIABLE_InclMap_45_45 = ((MR_Word) (conv28_STATE_VARIABLE_InclMap_45_45));
    STATE_VARIABLE_SrcIntImportUseMap_46_46 = ((MR_Word) (conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46));
    STATE_VARIABLE_SrcImpImportUseMap_47_47 = ((MR_Word) (conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47));
    STATE_VARIABLE_AncestorImportUseMap_48_48 = ((MR_Word) (conv25_STATE_VARIABLE_AncestorImportUseMap_48_48));
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_4));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Ancestors_20));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, PlainOpts_9, ((MR_Box) (STATE_VARIABLE_ReadModules_44_44)), &conv39_STATE_VARIABLE_ReadModules_50_50, ((MR_Box) (STATE_VARIABLE_InclMap_45_45)), &conv38_STATE_VARIABLE_InclMap_51_51, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_46_46)), &conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_47_47)), &conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_48_48)), &conv35_STATE_VARIABLE_AncestorImportUseMap_54_54);
    STATE_VARIABLE_ReadModules_50_50 = ((MR_Word) (conv39_STATE_VARIABLE_ReadModules_50_50));
    STATE_VARIABLE_InclMap_51_51 = ((MR_Word) (conv38_STATE_VARIABLE_InclMap_51_51));
    STATE_VARIABLE_SrcIntImportUseMap_52_52 = ((MR_Word) (conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52));
    STATE_VARIABLE_SrcImpImportUseMap_53_53 = ((MR_Word) (conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53));
    STATE_VARIABLE_AncestorImportUseMap_54_54 = ((MR_Word) (conv35_STATE_VARIABLE_AncestorImportUseMap_54_54));
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_5));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Ancestors_20));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_55, IntForOptSpecs_11, ((MR_Box) (STATE_VARIABLE_ReadModules_50_50)), &conv49_STATE_VARIABLE_ReadModules_56_56, ((MR_Box) (STATE_VARIABLE_InclMap_51_51)), &conv48_STATE_VARIABLE_InclMap_57_57, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_52_52)), &conv47_STATE_VARIABLE_SrcIntImportUseMap_58_58, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_53_53)), &conv46_STATE_VARIABLE_SrcImpImportUseMap_59_59, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_54_54)), &conv45_STATE_VARIABLE_AncestorImportUseMap_60_60);
    STATE_VARIABLE_ReadModules_56_56 = ((MR_Word) (conv49_STATE_VARIABLE_ReadModules_56_56));
    STATE_VARIABLE_InclMap_57_57 = ((MR_Word) (conv48_STATE_VARIABLE_InclMap_57_57));
    STATE_VARIABLE_SrcIntImportUseMap_58_58 = ((MR_Word) (conv47_STATE_VARIABLE_SrcIntImportUseMap_58_58));
    STATE_VARIABLE_SrcImpImportUseMap_59_59 = ((MR_Word) (conv46_STATE_VARIABLE_SrcImpImportUseMap_59_59));
    STATE_VARIABLE_AncestorImportUseMap_60_60 = ((MR_Word) (conv45_STATE_VARIABLE_AncestorImportUseMap_60_60));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *ImportAccessibilityInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_ReadModules_56_56));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_InclMap_57_57));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_58_58));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_59_59));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_60_60));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__5_5;

    parse_tree__item_util__acc_avails_with_contexts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5);
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    parse_tree__item_util__acc_avails_with_contexts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(
  MR_Word ParseTreeModuleSrc_12,
  MR_Word STATE_VARIABLE_ReadModules_0_63,
  MR_Word * STATE_VARIABLE_ReadModules_64,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_65,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_66,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_67,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_68,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_69,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_70,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_71,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_72)
{
  {
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 0))));
    MR_Word InclMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 4))));
    MR_Word IntImportMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 5))));
    MR_Word IntUseMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 6))));
    MR_Word ImpImportMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 7))));
    MR_Word ImpUseMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 8))));
    MR_Word IntIncls_56;
    MR_Word ImpIncls_57;
    MR_Word AllIncls_58;
    MR_Word RevIntImportAvails_59;
    MR_Word RevIntUseAvails_60;
    MR_Word RevImpImportAvails_61;
    MR_Word RevImpUseAvails_62;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_88_88;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_90_90;
    MR_Box conv1_RevIntImportAvails_59;
    MR_Box conv3_RevIntUseAvails_60;
    MR_Box conv4_RevImpImportAvails_61;
    MR_Box conv5_RevImpUseAvails_62;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), STATE_VARIABLE_ReadModules_0_63, STATE_VARIABLE_ReadModules_64);
    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_22, &IntIncls_56, &ImpIncls_57);
    AllIncls_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntIncls_56, ImpIncls_57);
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, AllIncls_58, STATE_VARIABLE_MaybeAbstractInclMap_0_65, STATE_VARIABLE_MaybeAbstractInclMap_66);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[1]), IntImportMap_23, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevIntImportAvails_59);
    RevIntImportAvails_59 = ((MR_Word) (conv1_RevIntImportAvails_59));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[2]), IntUseMap_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntUseAvails_60);
    RevIntUseAvails_60 = ((MR_Word) (conv3_RevIntUseAvails_60));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[1]), ImpImportMap_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RevImpImportAvails_61);
    RevImpImportAvails_61 = ((MR_Word) (conv4_RevImpImportAvails_61));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[2]), ImpUseMap_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_RevImpUseAvails_62);
    RevImpUseAvails_62 = ((MR_Word) (conv5_RevImpUseAvails_62));
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevIntImportAvails_59, STATE_VARIABLE_SrcIntImportUseMap_0_67, &STATE_VARIABLE_SrcIntImportUseMap_88_88);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevIntUseAvails_60, STATE_VARIABLE_SrcIntImportUseMap_88_88, STATE_VARIABLE_SrcIntImportUseMap_68);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevImpImportAvails_61, STATE_VARIABLE_SrcImpImportUseMap_0_69, &STATE_VARIABLE_SrcImpImportUseMap_90_90);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevImpUseAvails_62, STATE_VARIABLE_SrcImpImportUseMap_90_90, STATE_VARIABLE_SrcImpImportUseMap_70);
    *STATE_VARIABLE_AncestorImportUseMap_72 = STATE_VARIABLE_AncestorImportUseMap_0_71;
  }
}

static void MR_CALL 
parse_tree__grab_modules__recomp_avails_acc_3_p_0(
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
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_15);
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
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_18)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_30;

        {
          OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_30, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(MR_mktag(0), OneOrMore_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_30)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
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
parse_tree__grab_modules__record_includes_acc_4_p_0(
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
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), STATE_VARIABLE_InclMap_0_3, ((MR_Box) (ModuleName_13)), &conv0_OneOrMore0_17);
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
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), ((MR_Box) (ModuleName_13)), ((MR_Box) (OneOrMore_20)), STATE_VARIABLE_InclMap_0_3, &STATE_VARIABLE_InclMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_28;

        {
          OneOrMore_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMore_28, 0) = ((MR_Box) (IncludeContext_16));
          MR_hl_field(MR_mktag(0), OneOrMore_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), ((MR_Box) (ModuleName_13)), ((MR_Box) (OneOrMore_28)), STATE_VARIABLE_InclMap_0_3, &STATE_VARIABLE_InclMap_24_24);
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
parse_tree__grab_modules__check_imports_accessibility_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Specs_38;

    parse_tree__grab_modules__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Specs_38);
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Specs_38;

    parse_tree__grab_modules__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Specs_38);
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_MissingAncestorMap_35;

    parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_MissingAncestorMap_35);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MissingAncestorMap_35));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_141;

    parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1205__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_141);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_141));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_MissingAncestorMap_35;

    parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_MissingAncestorMap_35);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_MissingAncestorMap_35));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_131;

    parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1193__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_131);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_131));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_18;

    parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word ImportAccessibilityInfo_5,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 0))));
    MR_Word ModuleNameContext_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 1))));
    MR_Word ReadModules_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAccessibilityInfo_5, (MR_Integer) 0))));
    MR_Word SeenIncludes_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImportAccessibilityInfo_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word InclMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAccessibilityInfo_5, (MR_Integer) 2))));
    MR_Word SrcIntImportUseMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAccessibilityInfo_5, (MR_Integer) 3))));
    MR_Word SrcImpImportUseMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAccessibilityInfo_5, (MR_Integer) 4))));
    MR_Word AncestorImportUseMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportAccessibilityInfo_5, (MR_Integer) 5))));
    MR_Word SrcIntAncImportUseMap_15;
    MR_Word SrcIntMissingAncestorMap_16;
    MR_Word SrcIntImpImportUseMap_17;
    MR_Word SrcImpMissingAncestorMap0_18;
    MR_Word SrcIntMissingAncestors_19;
    MR_Word SrcImpMissingAncestorMap_20;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_Specs_24_24;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_Word STATE_VARIABLE_Specs_29_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Specs_39_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Box conv1_STATE_VARIABLE_Specs_27_27;
    MR_Box conv2_STATE_VARIABLE_Specs_29_29;
    MR_Box conv5_SrcIntMissingAncestorMap_16;
    MR_Box conv8_SrcImpMissingAncestorMap0_18;
    MR_Box conv10_STATE_VARIABLE_Specs_39_39;
    MR_Box conv12_STATE_VARIABLE_Specs_21;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ModuleNameContext_8));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__grab_modules__report_any_missing_includes_7_p_0(ReadModules_9, SeenIncludes_10, InclMap_11, ModuleName_7, Var_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_24_24);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ReadModules_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (SeenIncludes_10));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (InclMap_11));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_26, SrcIntImportUseMap_12, ((MR_Box) (STATE_VARIABLE_Specs_24_24)), &conv1_STATE_VARIABLE_Specs_27_27);
    STATE_VARIABLE_Specs_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_27_27));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_26, SrcImpImportUseMap_13, ((MR_Box) (STATE_VARIABLE_Specs_27_27)), &conv2_STATE_VARIABLE_Specs_29_29);
    STATE_VARIABLE_Specs_29_29 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_29_29));
    mercury__map__union_4_p_1((MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[5]), SrcIntImportUseMap_12, AncestorImportUseMap_14, &SrcIntAncImportUseMap_15);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (SrcIntAncImportUseMap_15));
    }
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_31, SrcIntImportUseMap_12, ((MR_Box) (Var_32)), &conv5_SrcIntMissingAncestorMap_16);
    SrcIntMissingAncestorMap_16 = ((MR_Word) (conv5_SrcIntMissingAncestorMap_16));
    mercury__map__union_4_p_1((MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[6]), SrcIntAncImportUseMap_15, SrcImpImportUseMap_13, &SrcIntImpImportUseMap_17);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_5));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (SrcIntImpImportUseMap_17));
    }
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_35, SrcImpImportUseMap_13, ((MR_Box) (Var_36)), &conv8_SrcImpMissingAncestorMap0_18);
    SrcImpMissingAncestorMap0_18 = ((MR_Word) (conv8_SrcImpMissingAncestorMap0_18));
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestorMap_16, &SrcIntMissingAncestors_19);
    mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestors_19, SrcImpMissingAncestorMap0_18, &SrcImpMissingAncestorMap_20);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (SrcImpImportUseMap_13));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_6));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (Var_40));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_38, SrcIntMissingAncestorMap_16, ((MR_Box) (STATE_VARIABLE_Specs_29_29)), &conv10_STATE_VARIABLE_Specs_39_39);
    STATE_VARIABLE_Specs_39_39 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_39_39));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_7));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_41, SrcImpMissingAncestorMap_20, ((MR_Box) (STATE_VARIABLE_Specs_39_39)), &conv12_STATE_VARIABLE_Specs_21);
    *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_16;

    parse_tree__grab_modules__report_missing_include_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Specs_13;

    parse_tree__grab_modules__report_abstract_include_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_13));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__is_non_abstract_include_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word Module_11,
  MR_Word Contexts_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Module_11)) == (MR_Integer) 1))
    {
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Module_11, (MR_Integer) 0))));
      MR_String SubModule_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), Module_11, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Word IncludeContexts_16;
      MR_Box conv0_IncludeContexts_16;
      MR_Word next_value_of_Module_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), InclMap_10, ((MR_Box) (Module_11)), &conv0_IncludeContexts_16);
      if (succeeded)
      {
        IncludeContexts_16 = ((MR_Word) (conv0_IncludeContexts_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIncludeContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IncludeContexts_16, (MR_Integer) 0))));
        MR_Word TailIncludeContexts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IncludeContexts_16, (MR_Integer) 1))));
        MR_Word IncludeContextsList_19;

        {
          IncludeContextsList_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IncludeContextsList_19, 0) = ((MR_Box) (HeadIncludeContext_17));
          MR_hl_field(MR_mktag(1), IncludeContextsList_19, 1) = ((MR_Box) (TailIncludeContexts_18));
        }
        succeeded = mercury__list__any_true_2_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[4]), IncludeContextsList_19);
        if (succeeded)
          STATE_VARIABLE_Specs_25_25 = STATE_VARIABLE_Specs_0_21;
        else
        {
          MR_Word Var_24;
          MR_Box conv2_STATE_VARIABLE_Specs_25_25;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ParentModule_14));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_24, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv2_STATE_VARIABLE_Specs_25_25);
          STATE_VARIABLE_Specs_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_25_25));
        }
      }
      else
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReadModules_8, ((MR_Box) (ParentModule_14)));
        if (succeeded)
        {
          MR_Word Var_26;
          MR_Box conv4_STATE_VARIABLE_Specs_25_25;

          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (SeenIncludes_9));
            MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (ParentModule_14));
            MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_26, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv4_STATE_VARIABLE_Specs_25_25);
          STATE_VARIABLE_Specs_25_25 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_25_25));
        }
        else
          STATE_VARIABLE_Specs_25_25 = STATE_VARIABLE_Specs_0_21;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Module_11 = ParentModule_14;
      next_value_of_STATE_VARIABLE_Specs_0_21 = STATE_VARIABLE_Specs_25_25;
      Module_11 = next_value_of_Module_11;
      STATE_VARIABLE_Specs_0_21 = next_value_of_STATE_VARIABLE_Specs_0_21;
      continue;
    }
    else
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_8,
  MR_Word * STATE_VARIABLE_Baggage_9)
{
  {
    MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 6))));
    MR_Word Specs_7;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;

    Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_4, Specs0_6);
    Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 5))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_8, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Baggage_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy1_14,
  MR_Word ModuleName_15,
  MR_Word * ParseTreeInt1_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32,
  MR_Word STATE_VARIABLE_Baggage_0_33,
  MR_Word * STATE_VARIABLE_Baggage_34,
  MR_Word STATE_VARIABLE_AugCompUnit_0_35,
  MR_Word * STATE_VARIABLE_AugCompUnit_36)
{
  {
    MR_Word ReturnTimestamp_21;
    MR_Word MaybeTimestamp_23;
    MR_Word Specs_24;
    MR_Word Errors_25;
    MR_Word GrabbedFile_26;
    MR_Word RecompAvail_27;
    MR_Word STATE_VARIABLE_Baggage_42_42;
    MR_Word STATE_VARIABLE_AugCompUnit_46_46;
    MR_Word STATE_VARIABLE_Baggage_47_47;
    MR_Word Var_50;
    MR_Word MaybeTimestampMap_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_33, (MR_Integer) 4))));
    MR_String _FileName_22;

    if ((MaybeTimestampMap_79 == (MR_Word) ((MR_Unsigned) 0U)))
      ReturnTimestamp_21 = (MR_Integer) 1;
    else
      ReturnTimestamp_21 = (MR_Integer) 0;
    parse_tree__read_modules__maybe_read_module_int1_13_p_0(Globals_13, (MR_Integer) 0, ModuleName_15, &_FileName_22, ReturnTimestamp_21, &MaybeTimestamp_23, ParseTreeInt1_16, &Specs_24, &Errors_25, STATE_VARIABLE_HaveReadModuleMaps_0_31, STATE_VARIABLE_HaveReadModuleMaps_32);
    {
      GrabbedFile_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GrabbedFile_26, 0) = ((MR_Box) (*ParseTreeInt1_16));
      MR_hl_field(MR_mktag(2), GrabbedFile_26, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_15, GrabbedFile_26, STATE_VARIABLE_Baggage_0_33, &STATE_VARIABLE_Baggage_42_42);
    switch (ReadWhy1_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_28;

          RecompAvail_27 = (MR_Integer) 2;
          {
            DirectIntSpec_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_28, 0) = ((MR_Box) (*ParseTreeInt1_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_28, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_28, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_42_42, &STATE_VARIABLE_Baggage_47_47);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_73;

          RecompAvail_27 = (MR_Integer) 4;
          {
            DirectIntSpec_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_73, 0) = ((MR_Box) (*ParseTreeInt1_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_73, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_73, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_42_42, &STATE_VARIABLE_Baggage_47_47);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_74;

          RecompAvail_27 = (MR_Integer) 1;
          {
            DirectIntSpec_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_74, 0) = ((MR_Box) (*ParseTreeInt1_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_74, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_74, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_42_42, &STATE_VARIABLE_Baggage_47_47);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_75;

          RecompAvail_27 = (MR_Integer) 3;
          {
            DirectIntSpec_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_75, 0) = ((MR_Box) (*ParseTreeInt1_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_75, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_75, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_42_42, &STATE_VARIABLE_Baggage_47_47);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_76;

          RecompAvail_27 = (MR_Integer) 5;
          {
            DirectIntSpec_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_76, 0) = ((MR_Box) (*ParseTreeInt1_16));
            MR_hl_field(MR_mktag(0), DirectIntSpec_76, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_76, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_42_42, &STATE_VARIABLE_Baggage_47_47);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word IntForOptSpec_29;

          RecompAvail_27 = (MR_Integer) 4;
          {
            IntForOptSpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IntForOptSpec_29, 0) = ((MR_Box) (*ParseTreeInt1_16));
            MR_hl_field(MR_mktag(1), IntForOptSpec_29, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_14));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_29, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(Specs_24, Errors_25, STATE_VARIABLE_Baggage_42_42, &STATE_VARIABLE_Baggage_47_47);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word TypeRepnSpec_30;

          RecompAvail_27 = (MR_Integer) 1;
          TypeRepnSpec_30 = (MR_Word) (*ParseTreeInt1_16);
          parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(TypeRepnSpec_30, STATE_VARIABLE_AugCompUnit_0_35, &STATE_VARIABLE_AugCompUnit_46_46);
          STATE_VARIABLE_Baggage_47_47 = STATE_VARIABLE_Baggage_42_42;
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_15, (MR_Integer) 1, RecompAvail_27, MaybeTimestamp_23, STATE_VARIABLE_Baggage_47_47, STATE_VARIABLE_Baggage_34);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_16, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_15, Var_50, STATE_VARIABLE_AugCompUnit_46_46, STATE_VARIABLE_AugCompUnit_36);
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word MaybeVersionNumbers_6,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  if ((MaybeVersionNumbers_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AugCompUnit_12 = STATE_VARIABLE_AugCompUnit_0_11;
  else
  {
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_10,
  MR_Word * STATE_VARIABLE_AugCompUnit_11)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 7))));
    MR_Word PT1_7 = (MR_Word) (X_4);
    MR_Word MN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT1_7, (MR_Integer) 0))));
    MR_Word Map_9;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), ((MR_Box) (MN_8)), ((MR_Box) (X_4)), Map0_6, &Map_9);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 0))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 1))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 3))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 4))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 5))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 6))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Map_9));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_50));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_15,
  MR_Word * STATE_VARIABLE_AugCompUnit_16)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 6))));
    MR_Word MN_9;
    MR_Word Map_14;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;

    switch (MR_tag((MR_Word) X_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));

          MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT0_7, (MR_Integer) 0))));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PT1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 0))));

          MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT1_10, (MR_Integer) 0))));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PT2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 0))));

          MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT2_12, (MR_Integer) 0))));
        }
        break;
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_14);
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 0))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 1))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 2))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 3))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 4))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 5))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 7))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Map_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_96));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
    MR_Word PT1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT1_7, (MR_Integer) 0))));
    MR_Word Map_10;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_51));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_specs_errors_4_p_0(
  MR_Word NewSpecs_5,
  MR_Word NewErrors_6,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13)
{
  {
    MR_Word Specs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 6))));
    MR_Word Errors0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 7))));
    MR_Word Specs_10;
    MR_Word Errors_11;
    MR_String Var_30;
    MR_String Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_5, Specs0_8);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors0_9, NewErrors_6, &Errors_11);
    Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 0))));
    Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 2))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 3))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_12, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Baggage_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Specs_10));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Errors_11));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  {
    MR_Word GrabbedFileMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
    MR_Word GrabbedFileMap_9;
    MR_String Var_20;
    MR_String Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (FileWhy_6)), GrabbedFileMap0_8, &GrabbedFileMap_9);
    Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 0))));
    Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 1))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 2))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 3))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 6))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_10, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Baggage_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GrabbedFileMap_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_27));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Baggage_0_18,
  MR_Word * STATE_VARIABLE_Baggage_19)
{
  {
    MR_Word MaybeTimestampMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 4))));

    if ((MaybeTimestampMap_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
    else
    {
      MR_Word TimestampMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_12, (MR_Integer) 0))));

      if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
      else
      {
        MR_Word Timestamp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_10, (MR_Integer) 0))));
        MR_Word FileKind_15;
        MR_Word TimestampInfo_16;
        MR_Word TimestampMap_17;
        MR_Word Var_21;
        MR_String Var_29;
        MR_String Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;

        {
          FileKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileKind_15, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_8));
        }
        {
          TimestampInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 0) = ((MR_Box) (FileKind_15));
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 1) = ((MR_Box) (Timestamp_14));
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 2) = (MR_Box) ((MR_Unsigned) (RecompAvail_9));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (TimestampInfo_16)), TimestampMap0_13, &TimestampMap_17);
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (TimestampMap_17));
        }
        Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 0))));
        Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 1))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 2))));
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 3))));
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 5))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 6))));
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Baggage_0_18, (MR_Integer) 7))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Baggage_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_36));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_accessibility_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____import_accessibility_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_accessibility_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____import_accessibility_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____import_and_or_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____import_and_or_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____import_or_use_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____import_or_use_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____include_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____include_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____maybe_abstract_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____maybe_abstract_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____missing_ancestor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____missing_ancestor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____missing_ancestor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____missing_ancestor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____missing_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____missing_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____module_import_or_use_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____module_import_or_use_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____module_inclusion_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____module_inclusion_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____opt_file_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____opt_file_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____opt_file_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____opt_file_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____parent_or_ancestor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____parent_or_ancestor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____read_decision_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____read_decision_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____seen_includes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__grab_modules____Unify____seen_includes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__grab_modules____Compare____seen_includes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__grab_modules__init(void)
{
}

void mercury__parse_tree__grab_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_accessibility_info_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_map_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_where_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_module_import_or_use_map_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_module_inclusion_map_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_opt_file_type_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_parent_or_ancestor_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_read_decision_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0);
}

void mercury__parse_tree__grab_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__grab_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.grab_modules.
