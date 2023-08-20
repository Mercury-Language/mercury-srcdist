/*
** Automatically generated from `grab_modules.m'
** by the Mercury compiler,
** version rotd-2023-08-20
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__maybe__pti_maybe_1__plain_parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0;

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

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0;

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1;

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_opt_file_error_0[2];

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_opt_file_error_0[2];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_opt_file_error_0[2];

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
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1735__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1716__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1688__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1288__1_3_p_0(
  MR_Word HeadVar__1_135,
  MR_Word HeadVar__2_136,
  MR_Word * HeadVar__3_137);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1276__1_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word HeadVar__2_126,
  MR_Word * HeadVar__3_127);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__445__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_18);

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____seen_includes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
parse_tree__grab_modules__record_avail_in_import_use_map_entry_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_14,
  MR_Word * STATE_VARIABLE_IntImportUseMap_15,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_16,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_17);

static void MR_CALL 
parse_tree__grab_modules__record_avail_in_section_6_p_0(
  MR_Word ModuleName_7,
  MR_Word SectionImportOrUse_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_15,
  MR_Word * STATE_VARIABLE_IntImportUseMap_16,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_17,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_18);

static void MR_CALL 
parse_tree__grab_modules__record_avail_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ImportOrUse_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_15,
  MR_Word * STATE_VARIABLE_ImportUseMap_16);

static void MR_CALL 
parse_tree__grab_modules__record_include_6_p_0(
  MR_Word MaybeAbsSectionInt_7,
  MR_Word MaybeMaybeAbsSectionImp_8,
  MR_Word ModuleName_9,
  MR_Word InclInfo_10,
  MR_Word STATE_VARIABLE_InclMap_0_22,
  MR_Word * STATE_VARIABLE_InclMap_23);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreePlainOpt_14,
  MR_Word STATE_VARIABLE_ReadModules_0_47,
  MR_Word * STATE_VARIABLE_ReadModules_48,
  MR_Word STATE_VARIABLE_InclMap_0_49,
  MR_Word * STATE_VARIABLE_InclMap_50,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_51,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_52,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_53,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_54,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_55,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_56);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_6(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_ReadModules_0_47,
  MR_Word * STATE_VARIABLE_ReadModules_48,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_49,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_50,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_51,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_52,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_53,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_54,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_55,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_56);

static void MR_CALL 
parse_tree__grab_modules__recomp_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3);

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
parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_failure_7_p_0(
  MR_Word Globals_8,
  MR_Word WarnOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17,
  MR_Word STATE_VARIABLE_Error_0_18,
  MR_Word * STATE_VARIABLE_Error_19);

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_files_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word ReadOptFilesTransitively_4,
  MR_Word HeadVar__5_5,
  MR_Word DontQueueOptModules0_6,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_7,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_8,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_9,
  MR_Word * STATE_VARIABLE_ExplicitDeps_10,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14,
  MR_Word STATE_VARIABLE_OptError_0_15,
  MR_Word * STATE_VARIABLE_OptError_16);

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(
  MR_Word ModuleErrors_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Error_0_14,
  MR_Word * STATE_VARIABLE_Error_15);

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_13,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_14);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_amiu_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_amiu_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ModuleName_18,
  MR_Word * IntImports_19,
  MR_Word * ImpImports_20,
  MR_Word * IntUses_21,
  MR_Word * ImpUses_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39);

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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_28,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_29);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_8,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_9,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_12,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_13);

static void MR_CALL 
parse_tree__grab_modules__process_module_int3_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_16,
  MR_Word ModuleName_17,
  MR_Word * IntImports_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39);

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
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
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
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DirectImports_0_6,
  MR_Word * STATE_VARIABLE_DirectImports_7,
  MR_Word STATE_VARIABLE_DirectUses_0_8,
  MR_Word * STATE_VARIABLE_DirectUses_9,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_acu_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_acu_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word ReadWhy0_19,
  MR_Word ModuleName_20,
  MR_Word * IntImports_21,
  MR_Word * ImpImports_22,
  MR_Word * IntUses_23,
  MR_Word * ImpUses_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39,
  MR_Word STATE_VARIABLE_Baggage_0_40,
  MR_Word * STATE_VARIABLE_Baggage_41,
  MR_Word STATE_VARIABLE_AugCompUnit_0_42,
  MR_Word * STATE_VARIABLE_AugCompUnit_43);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugCompUnit_0_28,
  MR_Word * STATE_VARIABLE_AugCompUnit_29);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ReadWhy2_19,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15);

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_16,
  MR_Word ModuleName_17,
  MR_Word * IntUses_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_33,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_34,
  MR_Word STATE_VARIABLE_Baggage_0_35,
  MR_Word * STATE_VARIABLE_Baggage_36,
  MR_Word STATE_VARIABLE_AugCompUnit_0_37,
  MR_Word * STATE_VARIABLE_AugCompUnit_38);

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12);

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
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11);

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word ReadWhy1_17,
  MR_Word ModuleName_18,
  MR_Word * IntUses_19,
  MR_Word * ImpUses_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37,
  MR_Word STATE_VARIABLE_Baggage_0_38,
  MR_Word * STATE_VARIABLE_Baggage_39,
  MR_Word STATE_VARIABLE_AugCompUnit_0_40,
  MR_Word * STATE_VARIABLE_AugCompUnit_41);

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
parse_tree__grab_modules__module_baggage_add_errors_3_p_0(
  MR_Word Errors1_4,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24);

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
parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0_10001(
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


static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[20][3];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[47][2];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[6][1];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[5][9];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[1][4];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[2][8];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][10];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[3][6];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[17][5];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_10[8][15];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_11[1][13];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_12[2][7];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_13[1][17];




static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[20][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_2[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__process_module_int1_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[4])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__grab_modules__process_module_int2_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[0])),
    ((MR_Box) (parse_tree__grab_modules__process_module_int0_for_acu_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[0])),
    ((MR_Box) (parse_tree__grab_modules__process_module_int0_for_amiu_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[2])),
    ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[15])),
    ((MR_Box) (parse_tree__grab_modules__report_missing_ancestor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[16])),
    ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[47][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the interface"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the absence of an"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "prevents access to the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for its"))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Adding such a declaration would obsolete"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[23])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has a submodule named"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but it is visible only to its other submodules."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[23])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a submodule"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a visible submodule"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not have"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_where_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0)),
    ((MR_Box) (&parse_tree__grab_modules__maybe__pti_maybe_1__plain_parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[17][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[4])))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[4])))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[5])))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[4])))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[5])))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[4])))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_5)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_10[8][15] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
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
  /* row   3 */
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
  /* row   4 */
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
  /* row   5 */
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
  /* row   6 */
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
  /* row   7 */
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_11[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_12[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_13[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int1_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__maybe__pti_maybe_1__plain_parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_accessibility_info_0_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_accessibility_info_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_accessibility_info_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_accessibility_info_0_0 };

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_accessibility_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_accessibility_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____import_accessibility_info_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____import_accessibility_info_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "import_accessibility_info",
  { parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_accessibility_info_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_accessibility_info_0 },
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
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_import_and_or_use_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_import_and_or_use_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_and_or_use_0,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_import_or_use_context_0_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_or_use_context_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_or_use_context_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_import_or_use_context_0_0 };

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_or_use_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____import_or_use_context_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____import_or_use_context_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "import_or_use_context",
  { parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_import_or_use_context_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_import_or_use_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_import_or_use_context_0,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_include_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_abstract_section_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_include_context_0_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_include_context_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_include_context_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_include_context_0_0 };

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_include_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____include_context_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____include_context_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "include_context",
  { parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_include_context_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_include_context_0 },
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
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_abstract_section_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_abstract_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_abstract_section_0,

};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0 = {
  (MR_String) "no_opt_file_error",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1 = {
  (MR_String) "opt_file_error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_opt_file_error_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_opt_file_error_0[2] = {
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_0,
  &parse_tree__grab_modules__parse_tree__grab_modules__enum_functor_desc_maybe_opt_file_error_0_1
};

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_opt_file_error_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_opt_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "maybe_opt_file_error",
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_maybe_opt_file_error_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_maybe_opt_file_error_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_maybe_opt_file_error_0,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_ancestor_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_parent_or_ancestor_0),
  (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_ancestor_info_0_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_ancestor_info_0[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0 };

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_ancestor_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__grab_modules____Unify____missing_ancestor_info_0_0_10001)),
  ((MR_Box) (parse_tree__grab_modules____Compare____missing_ancestor_info_0_0_10001)),
  (MR_String) "parse_tree.grab_modules",
  (MR_String) "missing_ancestor_info",
  { parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_ancestor_info_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_ancestor_info_0 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_where_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0) };

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

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_1[1] = { &parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_0 };

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
  { parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_where_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_where_0 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0) },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_parent_or_ancestor_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_parent_or_ancestor_0 },
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
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_read_decision_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_read_decision_0 },
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
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_name_ordered_seen_includes_0 },
  { parse_tree__grab_modules__parse_tree__grab_modules__enum_ordinal_ordered_seen_includes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_seen_includes_0,

};

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1735__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1716__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1688__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1288__1_3_p_0(
  MR_Word HeadVar__1_135,
  MR_Word HeadVar__2_136,
  MR_Word * HeadVar__3_137)
{
  MR_Word HeadA_139 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_135, (MR_Integer) 0))));
  MR_Word TailA_140 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_135, (MR_Integer) 1))));
  MR_Word HeadB_141 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_136, (MR_Integer) 0))));
  MR_Word TailB_142 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_136, (MR_Integer) 1))));
  MR_Word Var_143;
  MR_Word Var_144;

  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (HeadB_141));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (TailB_142));
  }
  Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), TailA_140, Var_144);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_137 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadA_139));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_143));
  }
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1276__1_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word HeadVar__2_126,
  MR_Word * HeadVar__3_127)
{
  MR_Word HeadA_129 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_125, (MR_Integer) 0))));
  MR_Word TailA_130 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_125, (MR_Integer) 1))));
  MR_Word HeadB_131 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_126, (MR_Integer) 0))));
  MR_Word TailB_132 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_126, (MR_Integer) 1))));
  MR_Word Var_133;
  MR_Word Var_134;

  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (HeadB_131));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (TailB_132));
  }
  Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), TailA_130, Var_134);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_127 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadA_129));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_133));
  }
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__445__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_18)
{
  mercury__io__write_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stream_5, ((MR_Box) (HeadVar__2_18)));
}

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0(
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
parse_tree__grab_modules____Unify____seen_includes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0(
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
parse_tree__grab_modules____Unify____read_decision_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0(
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
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_5)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_11_11 = (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_info_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0(
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

MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_abstract_section_0_0(
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
parse_tree__grab_modules____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____include_context_0_0(
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
parse_tree__grab_modules____Unify____include_context_0_0(
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
parse_tree__grab_modules____Compare____import_or_use_context_0_0(
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
parse_tree__grab_modules____Unify____import_or_use_context_0_0(
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
parse_tree__grab_modules____Compare____import_and_or_use_0_0(
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
parse_tree__grab_modules____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_accessibility_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
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

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_accessibility_info_0_0(
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
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

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

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 5))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word Map_8;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 6))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_9,
  MR_Word * STATE_VARIABLE_AugCompUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 4))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
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
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 1))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_9, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_52));
  }
}

static MR_Word MR_CALL 
parse_tree__grab_modules__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Context_4;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2)
{
  MR_bool succeeded;
  MR_Word MaybeAbstractInclude_3 = ((MR_Unsigned) ((MR_hl_field(0, IncludeContext_2, (MR_Integer) 0))) & (MR_Integer) 1);

  succeeded = (MaybeAbstractInclude_3 == (MR_Integer) 0);
  return succeeded;
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
      SubmodulePieces_12 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[40]));
      break;
    case (MR_Integer) 0:
      SubmodulePieces_12 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[42]));
      break;
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (ParentModule_8));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[44])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[33])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[32])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (SubModule_9));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[25])));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[45])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubmodulePieces_12, Var_36);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_35);
  {
    Spec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_missing_include\'/6"));
    MR_hl_field(1, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(1, Spec_14, 4) = ((MR_Box) (Pieces_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_25;

  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (ParentModule_6));
  }
  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (SubModule_7));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[38])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[34])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[33])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Pieces_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_10, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[32])));
    MR_hl_field(1, Pieces_10, 1) = ((MR_Box) (Var_16));
  }
  {
    Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_abstract_include\'/5"));
    MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Context_8));
    MR_hl_field(1, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
  }
}

static MR_Box MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Context_4;

  conv0_Context_4 = parse_tree__grab_modules__project_out_import_or_use_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Context_4));
  return wrapper_arg_2;
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
  MR_Word HeadIoUC_14 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 0))));
  MR_Word TailIoUCs_15 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 1))));
  MR_Word Contexts_16;
  MR_Word Var_20;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (HeadIoUC_14));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (TailIoUCs_15));
  }
  Contexts_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[19]), Var_20);
  parse_tree__grab_modules__report_any_missing_includes_7_p_0(ReadModules_8, SeenIncludes_9, InclMap_10, ModuleName_11, Contexts_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
}

static MR_Word MR_CALL 
parse_tree__grab_modules__wrap_module_name_1_f_0(
  MR_Word Module_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Module_3));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
parse_tree__grab_modules__report_missing_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__grab_modules__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word DescendantModuleNamesSet_12 = ((MR_Word) ((MR_hl_field(0, SrcIntInfo_10, (MR_Integer) 0))));
  MR_Word MaxDepth_13 = ((((MR_Unsigned) ((MR_hl_field(0, SrcIntInfo_10, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  MR_Word ImportAndOrUse_14 = ((MR_Unsigned) ((MR_hl_field(0, SrcIntInfo_10, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word LeastContext_15 = ((MR_Word) ((MR_hl_field(0, SrcIntInfo_10, (MR_Integer) 2))));
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
  MR_Word TypeInfo_150_150;
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
      DeclPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[10]));
      break;
    case (MR_Integer) 0:
      DeclPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[11]));
      break;
    case (MR_Integer) 1:
      DeclPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[6]));
      break;
  }
  switch (MR_tag((MR_Word) MissingWhere_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InTheInterface_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      InTheInterface_20 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[13]));
      break;
  }
  DescendantPieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[18]), DescendantModuleNames_16);
  conv1_ModuleS_22 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DescendantModuleNames_16, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
  ModuleS_22 = ((MR_String) (conv1_ModuleS_22));
  conv2_DeclarationS_23 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DescendantModuleNames_16, ((MR_Box) ((MR_String) "declaration")), ((MR_Box) ((MR_String) "declarations")));
  DeclarationS_23 = ((MR_String) (conv2_DeclarationS_23));
  {
    Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_66, 1) = ((MR_Box) (ModuleName_7));
  }
  {
    Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_91, 1) = ((MR_Box) (MissingModuleName_9));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[19])));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[5])));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[18])));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[9])));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[17])));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[16])));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[15])));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[14])));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_102, 1) = ((MR_Box) (DeclarationS_23));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_110, 1) = ((MR_Box) (ChildOrDescendant_17));
  }
  {
    Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_112, 1) = ((MR_Box) (ModuleS_22));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[22])));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
  }
  Var_115 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", DescendantPieces_21);
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[25])));
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_114);
  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InTheInterface_20, Var_105);
  Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_104);
  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclPieces_18, Var_100);
  Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[21])), Var_99);
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InTheInterface_20, Var_94);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_93);
  {
    MainMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainMsg_25, 0) = ((MR_Box) (LeastContext_15));
    MR_hl_field(0, MainMsg_25, 1) = ((MR_Box) (MainPieces_24));
  }
  succeeded = ((MR_tag((MR_Word) MissingWhere_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    SrcImpImportUseMap_26 = ((MR_Word) ((MR_hl_field(1, MissingWhere_8, (MR_Integer) 0))));
    TypeInfo_150_150 = (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_150_150, SrcImpImportUseMap_26, ((MR_Box) (MissingModuleName_9)), &conv3_IoUCs_27);
    if (succeeded)
    {
      IoUCs_27 = ((MR_Word) (conv3_IoUCs_27));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word HeadIoUC_28 = ((MR_Word) ((MR_hl_field(0, IoUCs_27, (MR_Integer) 0))));
    MR_Word ImportOrUse_30 = ((MR_Unsigned) ((MR_hl_field(0, HeadIoUC_28, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ImpContext_31 = ((MR_Word) ((MR_hl_field(0, HeadIoUC_28, (MR_Integer) 1))));
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
      Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_129, 1) = ((MR_Box) (ImportOrUseDecl_32));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[31])));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[27])));
      MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
    }
    {
      ImpPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpPieces_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[26])));
      MR_hl_field(1, ImpPieces_33, 1) = ((MR_Box) (Var_125));
    }
    {
      ImpMsg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpMsg_34, 0) = ((MR_Box) (ImpContext_31));
      MR_hl_field(0, ImpMsg_34, 1) = ((MR_Box) (ImpPieces_33));
    }
    {
      Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_139, 0) = ((MR_Box) (ImpMsg_34));
      MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msgs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_35, 0) = ((MR_Box) (MainMsg_25));
      MR_hl_field(1, Msgs_35, 1) = ((MR_Box) (Var_139));
    }
  }
  else
    {
      Msgs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_35, 0) = ((MR_Box) (MainMsg_25));
      MR_hl_field(1, Msgs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  {
    Spec_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_missing_ancestor\'/6"));
    MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Msgs_35));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_38 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_36));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
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
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ImportAndOrUse_12;
  MR_Word conv6_STATE_VARIABLE_LeastContext_14;

  parse_tree__grab_modules__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_LeastContext_14);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ImportAndOrUse_12));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_LeastContext_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ImportAndOrUse_12;
  MR_Word conv2_STATE_VARIABLE_LeastContext_14;

  parse_tree__grab_modules__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_LeastContext_14);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ImportAndOrUse_12));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_LeastContext_14));
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
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(1, ImportedModule_11, (MR_Integer) 0))));

      {
        MR_Box conv0__ParentIoUCs_16;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ImportUseMap_10, ((MR_Box) (ParentModule_14)), &conv0__ParentIoUCs_16);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (!(succeeded))
        succeeded = mdbcomp__sym_name__is_submodule_2_p_0(CurrentModule_8, ParentModule_14);
      if (succeeded)
        *STATE_VARIABLE_MissingAncestorMap_35 = STATE_VARIABLE_MissingAncestorMap_0_34;
      else
      {
        MR_Word HeadIoUC_17 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 0))));
        MR_Word TailIoUCs_18 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 1))));
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
          MR_Word ChildModules0_20 = ((MR_Word) ((MR_hl_field(0, MissingAncestorInfo0_19, (MR_Integer) 0))));
          MR_Word PoA0_21 = ((((MR_Unsigned) ((MR_hl_field(0, MissingAncestorInfo0_19, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          MR_Word ImportAndOrUse0_22 = ((MR_Unsigned) ((MR_hl_field(0, MissingAncestorInfo0_19, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Word LeastContext0_23 = ((MR_Word) ((MR_hl_field(0, MissingAncestorInfo0_19, (MR_Integer) 2))));
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
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[16]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse1_26)), &conv5_ImportAndOrUse_28, ((MR_Box) (LeastContext1_27)), &conv4_LeastContext_29);
          ImportAndOrUse_28 = ((MR_Word) (conv5_ImportAndOrUse_28));
          LeastContext_29 = ((MR_Word) (conv4_LeastContext_29));
          {
            MissingAncestorInfo_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingAncestorInfo_30, 0) = ((MR_Box) (ChildModules_24));
            MR_hl_field(0, MissingAncestorInfo_30, 1) = (MR_Box) (((((MR_Unsigned) (PoA_25) << 2)) | (MR_Unsigned) (ImportAndOrUse_28)));
            MR_hl_field(0, MissingAncestorInfo_30, 2) = ((MR_Box) (LeastContext_29));
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
          HeadImportOrUse_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadIoUC_17, (MR_Integer) 0))) & (MR_Integer) 1);
          HeadContext_32 = ((MR_Word) ((MR_hl_field(0, HeadIoUC_17, (MR_Integer) 1))));
          switch (HeadImportOrUse_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ImportAndOrUse0_42 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ImportAndOrUse0_42 = (MR_Integer) 1;
              break;
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[17]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse0_42)), &conv9_ImportAndOrUse_44, ((MR_Box) (HeadContext_32)), &conv8_LeastContext_45);
          ImportAndOrUse_44 = ((MR_Word) (conv9_ImportAndOrUse_44));
          LeastContext_45 = ((MR_Word) (conv8_LeastContext_45));
          {
            MissingAncestorInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingAncestorInfo_46, 0) = ((MR_Box) (ChildModules_43));
            MR_hl_field(0, MissingAncestorInfo_46, 1) = (MR_Box) (((((MR_Unsigned) (ParentOrAncestor_9) << 2)) | (MR_Unsigned) (ImportAndOrUse_44)));
            MR_hl_field(0, MissingAncestorInfo_46, 2) = ((MR_Box) (LeastContext_45));
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
  MR_bool succeeded;
  MR_Word ImportOrUse_9 = ((MR_Unsigned) ((MR_hl_field(0, IoUC_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, IoUC_6, (MR_Integer) 1))));
  MR_Word Var_19;

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
  mercury__term_context____Compare____term_context_0_0(&Var_19, Context_10, STATE_VARIABLE_LeastContext_0_13);
  succeeded = ((MR_Integer) 1 == Var_19);
  if (succeeded)
  {
    succeeded = mercury__term_context__is_dummy_context_1_p_0(Context_10);
    succeeded = !(succeeded);
  }
  if (succeeded)
    *STATE_VARIABLE_LeastContext_14 = Context_10;
  else
    *STATE_VARIABLE_LeastContext_14 = STATE_VARIABLE_LeastContext_0_13;
}

static void MR_CALL 
parse_tree__grab_modules__record_avail_in_import_use_map_entry_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_14,
  MR_Word * STATE_VARIABLE_IntImportUseMap_15,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_16,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_17)
{
  if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportOrUse_22 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, (MR_Integer) 0))));

    parse_tree__grab_modules__record_avail_in_section_6_p_0(ModuleName_7, SectionImportOrUse_22, STATE_VARIABLE_IntImportUseMap_0_14, STATE_VARIABLE_IntImportUseMap_15, STATE_VARIABLE_ImpImportUseMap_0_16, STATE_VARIABLE_ImpImportUseMap_17);
  }
  else
  {
    MR_Word MaybeSectionImportOrUse_12 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, (MR_Integer) 1))));

    if ((MaybeSectionImportOrUse_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntImportUseMap_15 = STATE_VARIABLE_IntImportUseMap_0_14;
      *STATE_VARIABLE_ImpImportUseMap_17 = STATE_VARIABLE_ImpImportUseMap_0_16;
    }
    else
    {
      MR_Word SectionImportOrUse_13 = ((MR_Word) ((MR_hl_field(1, MaybeSectionImportOrUse_12, (MR_Integer) 0))));

      parse_tree__grab_modules__record_avail_in_section_6_p_0(ModuleName_7, SectionImportOrUse_13, STATE_VARIABLE_IntImportUseMap_0_14, STATE_VARIABLE_IntImportUseMap_15, STATE_VARIABLE_ImpImportUseMap_0_16, STATE_VARIABLE_ImpImportUseMap_17);
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_avail_in_section_6_p_0(
  MR_Word ModuleName_7,
  MR_Word SectionImportOrUse_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_15,
  MR_Word * STATE_VARIABLE_IntImportUseMap_16,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_17,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_18)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) SectionImportOrUse_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, SectionImportOrUse_8, (MR_Integer) 0))));
        MR_Word IoUC_59;
        MR_Word OneOrMore0_60;
        MR_Box conv2_OneOrMore0_60;

        {
          IoUC_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IoUC_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, IoUC_59, 1) = ((MR_Box) (Context_11));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv2_OneOrMore0_60);
        if (succeeded)
        {
          OneOrMore0_60 = ((MR_Word) (conv2_OneOrMore0_60));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadIoUC_61 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_60, (MR_Integer) 0))));
          MR_Word TailIoUCs_62 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_60, (MR_Integer) 1))));
          MR_Word OneOrMore_63;
          MR_Word Var_64;

          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (HeadIoUC_61));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (TailIoUCs_62));
          }
          {
            OneOrMore_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_63, 0) = ((MR_Box) (IoUC_59));
            MR_hl_field(0, OneOrMore_63, 1) = ((MR_Box) (Var_64));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_63)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        else
        {
          MR_Word OneOrMore_66;

          {
            OneOrMore_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_66, 0) = ((MR_Box) (IoUC_59));
            MR_hl_field(0, OneOrMore_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_66)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        *STATE_VARIABLE_ImpImportUseMap_18 = STATE_VARIABLE_ImpImportUseMap_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_29 = ((MR_Word) ((MR_hl_field(1, SectionImportOrUse_8, (MR_Integer) 0))));
        MR_Word IoUC_73;
        MR_Word OneOrMore0_74;
        MR_Box conv3_OneOrMore0_74;

        {
          IoUC_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IoUC_73, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, IoUC_73, 1) = ((MR_Box) (Context_29));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv3_OneOrMore0_74);
        if (succeeded)
        {
          OneOrMore0_74 = ((MR_Word) (conv3_OneOrMore0_74));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadIoUC_75 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_74, (MR_Integer) 0))));
          MR_Word TailIoUCs_76 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_74, (MR_Integer) 1))));
          MR_Word OneOrMore_77;
          MR_Word Var_78;

          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (HeadIoUC_75));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) (TailIoUCs_76));
          }
          {
            OneOrMore_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_77, 0) = ((MR_Box) (IoUC_73));
            MR_hl_field(0, OneOrMore_77, 1) = ((MR_Box) (Var_78));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_77)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        else
        {
          MR_Word OneOrMore_80;

          {
            OneOrMore_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_80, 0) = ((MR_Box) (IoUC_73));
            MR_hl_field(0, OneOrMore_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_80)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        *STATE_VARIABLE_ImpImportUseMap_18 = STATE_VARIABLE_ImpImportUseMap_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_25 = ((MR_Word) ((MR_hl_field(2, SectionImportOrUse_8, (MR_Integer) 0))));
        MR_Word IoUC_31;
        MR_Word OneOrMore0_32;
        MR_Box conv0_OneOrMore0_32;

        {
          IoUC_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IoUC_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, IoUC_31, 1) = ((MR_Box) (Context_25));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_ImpImportUseMap_0_17, ((MR_Box) (ModuleName_7)), &conv0_OneOrMore0_32);
        if (succeeded)
        {
          OneOrMore0_32 = ((MR_Word) (conv0_OneOrMore0_32));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadIoUC_33 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_32, (MR_Integer) 0))));
          MR_Word TailIoUCs_34 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_32, (MR_Integer) 1))));
          MR_Word OneOrMore_35;
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (HeadIoUC_33));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (TailIoUCs_34));
          }
          {
            OneOrMore_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_35, 0) = ((MR_Box) (IoUC_31));
            MR_hl_field(0, OneOrMore_35, 1) = ((MR_Box) (Var_36));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_35)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
        }
        else
        {
          MR_Word OneOrMore_38;

          {
            OneOrMore_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_38, 0) = ((MR_Box) (IoUC_31));
            MR_hl_field(0, OneOrMore_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_38)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
        }
        *STATE_VARIABLE_IntImportUseMap_16 = STATE_VARIABLE_IntImportUseMap_0_15;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SectionImportOrUse_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_27 = ((MR_Word) ((MR_hl_field(3, SectionImportOrUse_8, (MR_Integer) 1))));
            MR_Word IoUC_45;
            MR_Word OneOrMore0_46;
            MR_Box conv1_OneOrMore0_46;

            {
              IoUC_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, IoUC_45, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, IoUC_45, 1) = ((MR_Box) (Context_27));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_ImpImportUseMap_0_17, ((MR_Box) (ModuleName_7)), &conv1_OneOrMore0_46);
            if (succeeded)
            {
              OneOrMore0_46 = ((MR_Word) (conv1_OneOrMore0_46));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word HeadIoUC_47 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_46, (MR_Integer) 0))));
              MR_Word TailIoUCs_48 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_46, (MR_Integer) 1))));
              MR_Word OneOrMore_49;
              MR_Word Var_50;

              {
                Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_50, 0) = ((MR_Box) (HeadIoUC_47));
                MR_hl_field(1, Var_50, 1) = ((MR_Box) (TailIoUCs_48));
              }
              {
                OneOrMore_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OneOrMore_49, 0) = ((MR_Box) (IoUC_45));
                MR_hl_field(0, OneOrMore_49, 1) = ((MR_Box) (Var_50));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_49)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
            }
            else
            {
              MR_Word OneOrMore_52;

              {
                OneOrMore_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OneOrMore_52, 0) = ((MR_Box) (IoUC_45));
                MR_hl_field(0, OneOrMore_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_52)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
            }
            *STATE_VARIABLE_IntImportUseMap_16 = STATE_VARIABLE_IntImportUseMap_0_15;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_13 = ((MR_Word) ((MR_hl_field(3, SectionImportOrUse_8, (MR_Integer) 1))));
            MR_Word ImpContext_14 = ((MR_Word) ((MR_hl_field(3, SectionImportOrUse_8, (MR_Integer) 2))));
            MR_Word IoUC_87;
            MR_Word OneOrMore0_88;
            MR_Box conv4_OneOrMore0_88;

            {
              IoUC_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, IoUC_87, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, IoUC_87, 1) = ((MR_Box) (IntContext_13));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv4_OneOrMore0_88);
            if (succeeded)
            {
              OneOrMore0_88 = ((MR_Word) (conv4_OneOrMore0_88));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word HeadIoUC_89 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_88, (MR_Integer) 0))));
              MR_Word TailIoUCs_90 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_88, (MR_Integer) 1))));
              MR_Word OneOrMore_91;
              MR_Word Var_92;

              {
                Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_92, 0) = ((MR_Box) (HeadIoUC_89));
                MR_hl_field(1, Var_92, 1) = ((MR_Box) (TailIoUCs_90));
              }
              {
                OneOrMore_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OneOrMore_91, 0) = ((MR_Box) (IoUC_87));
                MR_hl_field(0, OneOrMore_91, 1) = ((MR_Box) (Var_92));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_91)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
            }
            else
            {
              MR_Word OneOrMore_94;

              {
                OneOrMore_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OneOrMore_94, 0) = ((MR_Box) (IoUC_87));
                MR_hl_field(0, OneOrMore_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_94)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
            }
            parse_tree__grab_modules__record_avail_5_p_0(ModuleName_7, (MR_Integer) 0, ImpContext_14, STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_avail_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ImportOrUse_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_15,
  MR_Word * STATE_VARIABLE_ImportUseMap_16)
{
  MR_bool succeeded;
  MR_Word IoUC_10;
  MR_Word OneOrMore0_11;
  MR_Box conv0_OneOrMore0_11;

  {
    IoUC_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IoUC_10, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_7));
    MR_hl_field(0, IoUC_10, 1) = ((MR_Box) (Context_8));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_ImportUseMap_0_15, ((MR_Box) (ModuleName_6)), &conv0_OneOrMore0_11);
  if (succeeded)
  {
    OneOrMore0_11 = ((MR_Word) (conv0_OneOrMore0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word HeadIoUC_12 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_11, (MR_Integer) 0))));
    MR_Word TailIoUCs_13 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_11, (MR_Integer) 1))));
    MR_Word OneOrMore_14;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (HeadIoUC_12));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (TailIoUCs_13));
    }
    {
      OneOrMore_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OneOrMore_14, 0) = ((MR_Box) (IoUC_10));
      MR_hl_field(0, OneOrMore_14, 1) = ((MR_Box) (Var_17));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_6)), ((MR_Box) (OneOrMore_14)), STATE_VARIABLE_ImportUseMap_0_15, STATE_VARIABLE_ImportUseMap_16);
  }
  else
  {
    MR_Word OneOrMore_21;

    {
      OneOrMore_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OneOrMore_21, 0) = ((MR_Box) (IoUC_10));
      MR_hl_field(0, OneOrMore_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_6)), ((MR_Box) (OneOrMore_21)), STATE_VARIABLE_ImportUseMap_0_15, STATE_VARIABLE_ImportUseMap_16);
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_include_6_p_0(
  MR_Word MaybeAbsSectionInt_7,
  MR_Word MaybeMaybeAbsSectionImp_8,
  MR_Word ModuleName_9,
  MR_Word InclInfo_10,
  MR_Word STATE_VARIABLE_InclMap_0_22,
  MR_Word * STATE_VARIABLE_InclMap_23)
{
  MR_bool succeeded;
  MR_Word Section_12 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, InclInfo_10, (MR_Integer) 1))));

  switch (Section_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((MaybeMaybeAbsSectionImp_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_InclMap_23 = STATE_VARIABLE_InclMap_0_22;
      else
      {
        MR_Word MaybeAbsSectionImp_16 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeAbsSectionImp_8, (MR_Integer) 0))));
        MR_Word IncludeContext_17;
        MR_Word OneOrMore0_18;
        MR_Box conv0_OneOrMore0_18;

        {
          IncludeContext_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IncludeContext_17, 0) = (MR_Box) ((MR_Unsigned) (MaybeAbsSectionImp_16));
          MR_hl_field(0, IncludeContext_17, 1) = ((MR_Box) (Context_13));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), STATE_VARIABLE_InclMap_0_22, ((MR_Box) (ModuleName_9)), &conv0_OneOrMore0_18);
        if (succeeded)
        {
          OneOrMore0_18 = ((MR_Word) (conv0_OneOrMore0_18));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadContext_19 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_18, (MR_Integer) 0))));
          MR_Word TailContexts_20 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_18, (MR_Integer) 1))));
          MR_Word OneOrMore_21;
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_24, 0) = ((MR_Box) (HeadContext_19));
            MR_hl_field(1, Var_24, 1) = ((MR_Box) (TailContexts_20));
          }
          {
            OneOrMore_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_21, 0) = ((MR_Box) (IncludeContext_17));
            MR_hl_field(0, OneOrMore_21, 1) = ((MR_Box) (Var_24));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_21)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
        else
        {
          MR_Word OneOrMore_31;

          {
            OneOrMore_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_31, 0) = ((MR_Box) (IncludeContext_17));
            MR_hl_field(0, OneOrMore_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_31)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word IncludeContext_39;
        MR_Word OneOrMore0_52;
        MR_Box conv1_OneOrMore0_52;

        {
          IncludeContext_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IncludeContext_39, 0) = (MR_Box) ((MR_Unsigned) (MaybeAbsSectionInt_7));
          MR_hl_field(0, IncludeContext_39, 1) = ((MR_Box) (Context_13));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), STATE_VARIABLE_InclMap_0_22, ((MR_Box) (ModuleName_9)), &conv1_OneOrMore0_52);
        if (succeeded)
        {
          OneOrMore0_52 = ((MR_Word) (conv1_OneOrMore0_52));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadContext_42 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_52, (MR_Integer) 0))));
          MR_Word TailContexts_43 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_52, (MR_Integer) 1))));
          MR_Word OneOrMore_44;
          MR_Word Var_45;

          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (HeadContext_42));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (TailContexts_43));
          }
          {
            OneOrMore_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_44, 0) = ((MR_Box) (IncludeContext_39));
            MR_hl_field(0, OneOrMore_44, 1) = ((MR_Box) (Var_45));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_44)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
        else
        {
          MR_Word OneOrMore_49;

          {
            OneOrMore_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_49, 0) = ((MR_Box) (IncludeContext_39));
            MR_hl_field(0, OneOrMore_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_49)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreePlainOpt_14,
  MR_Word STATE_VARIABLE_ReadModules_0_47,
  MR_Word * STATE_VARIABLE_ReadModules_48,
  MR_Word STATE_VARIABLE_InclMap_0_49,
  MR_Word * STATE_VARIABLE_InclMap_50,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_51,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_52,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_53,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_54,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_55,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_56)
{
  MR_bool succeeded;
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_14, (MR_Integer) 0))));
  MR_Word UseMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_14, (MR_Integer) 2))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_13, ((MR_Box) (ModuleName_20)));
  if (succeeded)
  {
    MR_Word Avails_46;

    Avails_46 = parse_tree__item_util__use_map_to_item_avails_1_f_0(UseMap_22);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(Avails_46, STATE_VARIABLE_AncestorImportUseMap_0_55, STATE_VARIABLE_AncestorImportUseMap_56);
  }
  else
    *STATE_VARIABLE_AncestorImportUseMap_56 = STATE_VARIABLE_AncestorImportUseMap_0_55;
  *STATE_VARIABLE_SrcImpImportUseMap_54 = STATE_VARIABLE_SrcImpImportUseMap_0_53;
  *STATE_VARIABLE_SrcIntImportUseMap_52 = STATE_VARIABLE_SrcIntImportUseMap_0_51;
  *STATE_VARIABLE_InclMap_50 = STATE_VARIABLE_InclMap_0_49;
  *STATE_VARIABLE_ReadModules_48 = STATE_VARIABLE_ReadModules_0_47;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1716__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_InclMap_23));
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1688__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
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
  MR_bool succeeded;

  switch (MR_tag((MR_Word) IntForOptSpec_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_20 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_14, (MR_Integer) 0))));

        parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27, STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29, STATE_VARIABLE_SrcIntImportUseMap_0_30, STATE_VARIABLE_SrcIntImportUseMap_31, STATE_VARIABLE_SrcImpImportUseMap_0_32, STATE_VARIABLE_SrcImpImportUseMap_33, STATE_VARIABLE_AncestorImportUseMap_0_34, STATE_VARIABLE_AncestorImportUseMap_35);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_22 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_14, (MR_Integer) 0))));
        MR_Word ReadWhyInt1_23 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec_14, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Word InclMap_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_22, (MR_Integer) 3))));
        MR_Word ModuleName_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_22, (MR_Integer) 0))));
        MR_Word Var_61;

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_37)), STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27);
        switch (ReadWhyInt1_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
            {
              MR_Box conv1_STATE_VARIABLE_InclMap_29;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[11]), InclMap_36, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv1_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_29));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box conv3_STATE_VARIABLE_InclMap_29;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[12]), InclMap_36, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv3_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_29));
            }
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_InclMap_29 = STATE_VARIABLE_InclMap_0_28;
            break;
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_3));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_61, 3) = ((MR_Box) (Ancestors_13));
          MR_hl_field(0, Var_61, 4) = ((MR_Box) (ModuleName_37));
        }
        mercury__require__expect_not_3_p_0(Var_61, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int1\'/13", (MR_String) "processing the .int file of an ancestor");
        *STATE_VARIABLE_AncestorImportUseMap_35 = STATE_VARIABLE_AncestorImportUseMap_0_34;
        *STATE_VARIABLE_SrcImpImportUseMap_33 = STATE_VARIABLE_SrcImpImportUseMap_0_32;
        *STATE_VARIABLE_SrcIntImportUseMap_31 = STATE_VARIABLE_SrcIntImportUseMap_0_30;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_24 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_14, (MR_Integer) 0))));
        MR_Word ReadWhyInt2_25 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_14, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word InclMap_69;
        MR_Word ModuleName_70 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_24, (MR_Integer) 0))));
        MR_Word IntInclMap_73 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_24, (MR_Integer) 3))));
        MR_Word Var_89;

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_70)), STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27);
        InclMap_69 = (MR_Word) (IntInclMap_73);
        switch (ReadWhyInt2_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Box conv5_STATE_VARIABLE_InclMap_29;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[13]), InclMap_69, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv5_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv5_STATE_VARIABLE_InclMap_29));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            {
              MR_Box conv7_STATE_VARIABLE_InclMap_29;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[14]), InclMap_69, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv7_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv7_STATE_VARIABLE_InclMap_29));
            }
            break;
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_89, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
          MR_hl_field(0, Var_89, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_6));
          MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_89, 3) = ((MR_Box) (Ancestors_13));
          MR_hl_field(0, Var_89, 4) = ((MR_Box) (ModuleName_70));
        }
        mercury__require__expect_not_3_p_0(Var_89, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
        *STATE_VARIABLE_AncestorImportUseMap_35 = STATE_VARIABLE_AncestorImportUseMap_0_34;
        *STATE_VARIABLE_SrcImpImportUseMap_33 = STATE_VARIABLE_SrcImpImportUseMap_0_32;
        *STATE_VARIABLE_SrcIntImportUseMap_31 = STATE_VARIABLE_SrcIntImportUseMap_0_30;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1735__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
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
  MR_bool succeeded;
  MR_Word ParseTreeInt3_20 = ((MR_Word) ((MR_hl_field(0, IndirectSpec_14, (MR_Integer) 0))));
  MR_Word InclMap_33;
  MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_20, (MR_Integer) 0))));
  MR_Word IntInclMap_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_20, (MR_Integer) 2))));
  MR_Word Var_46;
  MR_Box conv1_STATE_VARIABLE_InclMap_25;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_34)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
  InclMap_33 = (MR_Word) (IntInclMap_36);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[10]), InclMap_33, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
  *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_34));
  }
  mercury__require__expect_not_3_p_0(Var_46, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int3 file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1735__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
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
  MR_bool succeeded;
  MR_Word ParseTreeInt3_20 = ((MR_Word) ((MR_hl_field(0, IndirectSpec_14, (MR_Integer) 0))));
  MR_Word InclMap_33;
  MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_20, (MR_Integer) 0))));
  MR_Word IntInclMap_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_20, (MR_Integer) 2))));
  MR_Word Var_46;
  MR_Box conv1_STATE_VARIABLE_InclMap_25;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_34)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
  InclMap_33 = (MR_Word) (IntInclMap_36);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[9]), InclMap_33, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
  *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_34));
  }
  mercury__require__expect_not_3_p_0(Var_46, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int3 file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1716__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
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
  MR_bool succeeded;
  MR_Word ParseTreeInt2_20 = ((MR_Word) ((MR_hl_field(0, IndirectSpec_14, (MR_Integer) 0))));
  MR_Word ReadWhyInt2_21 = ((MR_Unsigned) ((MR_hl_field(0, IndirectSpec_14, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word InclMap_32;
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_20, (MR_Integer) 0))));
  MR_Word IntInclMap_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_20, (MR_Integer) 3))));
  MR_Word Var_52;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_33)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
  InclMap_32 = (MR_Word) (IntInclMap_36);
  switch (ReadWhyInt2_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Box conv1_STATE_VARIABLE_InclMap_25;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[7]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        MR_Box conv3_STATE_VARIABLE_InclMap_25;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[8]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv3_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_25));
      }
      break;
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_3));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (ModuleName_33));
  }
  mercury__require__expect_not_3_p_0(Var_52, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1688__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
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
  MR_bool succeeded;
  MR_Word ParseTreeInt1_20 = ((MR_Word) ((MR_hl_field(0, DirectSpec_14, (MR_Integer) 0))));
  MR_Word ReadWhyInt1_21 = ((MR_Unsigned) ((MR_hl_field(0, DirectSpec_14, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word InclMap_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_20, (MR_Integer) 3))));
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_20, (MR_Integer) 0))));
  MR_Word Var_57;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_33)), STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23);
  switch (ReadWhyInt1_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 4:
      {
        MR_Box conv1_STATE_VARIABLE_InclMap_25;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[4]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Box conv3_STATE_VARIABLE_InclMap_25;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[5]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv3_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_25));
      }
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_InclMap_25 = STATE_VARIABLE_InclMap_0_24;
      break;
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[6]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0_3));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (ModuleName_33));
  }
  mercury__require__expect_not_3_p_0(Var_57, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int1\'/13", (MR_String) "processing the .int file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
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
  MR_Word ParseTreeInt0_20 = ((MR_Word) ((MR_hl_field(0, AncestorSpec_14, (MR_Integer) 0))));

  parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25, STATE_VARIABLE_SrcIntImportUseMap_0_26, STATE_VARIABLE_SrcIntImportUseMap_27, STATE_VARIABLE_SrcImpImportUseMap_0_28, STATE_VARIABLE_SrcImpImportUseMap_29, STATE_VARIABLE_AncestorImportUseMap_0_30, STATE_VARIABLE_AncestorImportUseMap_31);
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(
  MR_Word Ancestors_13,
  MR_Word ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_ReadModules_0_47,
  MR_Word * STATE_VARIABLE_ReadModules_48,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_49,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_50,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_51,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_52,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_53,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_54,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_55,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_56)
{
  MR_bool succeeded;
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 0))));
  MR_Word InclMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 3))));
  MR_Word ImportUseMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 4))));
  MR_Box conv1_STATE_VARIABLE_MaybeAbstractInclMap_50;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)), STATE_VARIABLE_ReadModules_0_47, STATE_VARIABLE_ReadModules_48);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[3]), InclMap_23, ((MR_Box) (STATE_VARIABLE_MaybeAbstractInclMap_0_49)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_50);
  *STATE_VARIABLE_MaybeAbstractInclMap_50 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_50));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_13, ((MR_Box) (ModuleName_20)));
  if (succeeded)
  {
    MR_Word IntAvails_44;
    MR_Word ImpAvails_45;
    MR_Word AllAvails_46;

    parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0(ImportUseMap_24, &IntAvails_44, &ImpAvails_45);
    AllAvails_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_44, ImpAvails_45);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(AllAvails_46, STATE_VARIABLE_AncestorImportUseMap_0_55, STATE_VARIABLE_AncestorImportUseMap_56);
  }
  else
    *STATE_VARIABLE_AncestorImportUseMap_56 = STATE_VARIABLE_AncestorImportUseMap_0_55;
  *STATE_VARIABLE_SrcImpImportUseMap_54 = STATE_VARIABLE_SrcImpImportUseMap_0_53;
  *STATE_VARIABLE_SrcIntImportUseMap_52 = STATE_VARIABLE_SrcIntImportUseMap_0_51;
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
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
        MR_Word Var_21 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
        ImportOrUse_13 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
        ImportOrUse_13 = (MR_Integer) 1;
      }
      {
        IoUC_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, IoUC_14, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_13));
        MR_hl_field(0, IoUC_14, 1) = ((MR_Box) (Context_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_15);
      if (succeeded)
      {
        OneOrMore0_15 = ((MR_Word) (conv0_OneOrMore0_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIoUC_16 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_15, (MR_Integer) 0))));
        MR_Word TailIoUCs_17 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_15, (MR_Integer) 1))));
        MR_Word OneOrMore_18;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (HeadIoUC_16));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (TailIoUCs_17));
        }
        {
          OneOrMore_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OneOrMore_18, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(0, OneOrMore_18, 1) = ((MR_Box) (Var_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_18)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_30;

        {
          OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OneOrMore_30, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(0, OneOrMore_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_30)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
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
parse_tree__grab_modules__dump_modules_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__445__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__grab_modules__dump_modules_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleNames_6)
{
  MR_Word ModuleNameStrs_8;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_IO_10;

  Var_11 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[15]), ModuleNames_6);
  ModuleNameStrs_8 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_12[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__grab_modules__dump_modules_4_p_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModuleNameStrs_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10);
}

static void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AugCompUnit_10;

  parse_tree__grab_modules__aug_compilation_unit_add_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AugCompUnit_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AugCompUnit_10));
}

void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word TransOptModuleNames_15,
  MR_Word * FoundError_16,
  MR_Word STATE_VARIABLE_Baggage_0_25,
  MR_Word * STATE_VARIABLE_Baggage_26,
  MR_Word STATE_VARIABLE_AugCompUnit_0_27,
  MR_Word * STATE_VARIABLE_AugCompUnit_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30)
{
  MR_Word Verbose_21;
  MR_Word VeryVerbose_22;
  MR_Word ParseTreeTransOptsCord_23;
  MR_Word TransOptSpecs_24;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_Baggage_45_45;
  MR_Word Var_47;
  MR_Word Errors0_61;
  MR_Word NonFatalErrorSpecs0_62;
  MR_Word NonFatalErrorSpecs_63;
  MR_Word Errors_64;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_28;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_String Var_80;
  MR_String Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_String Var_49;
  MR_String Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;

  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 72, &Verbose_21);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Reading .trans_opt files..\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 73, &VeryVerbose_22);
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0));
  parse_tree__grab_modules__read_trans_opt_files_12_p_0(ProgressStream_13, Globals_14, VeryVerbose_22, TransOptModuleNames_15, Var_38, &ParseTreeTransOptsCord_23, (MR_Word) ((MR_Unsigned) 0U), &TransOptSpecs_24, (MR_Integer) 0, FoundError_16);
  Var_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ParseTreeTransOptsCord_23);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[14]), Var_43, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_27)), &conv1_STATE_VARIABLE_AugCompUnit_28);
  *STATE_VARIABLE_AugCompUnit_28 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_28));
  Errors0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 6))));
  NonFatalErrorSpecs0_62 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 3))));
  NonFatalErrorSpecs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TransOptSpecs_24, NonFatalErrorSpecs0_62);
  Var_75 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 0))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 1))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 2))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, Errors0_61, (MR_Integer) 4))));
  {
    Errors_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_64, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Errors_64, 1) = ((MR_Box) (Var_76));
    MR_hl_field(0, Errors_64, 2) = ((MR_Box) (Var_77));
    MR_hl_field(0, Errors_64, 3) = ((MR_Box) (NonFatalErrorSpecs_63));
    MR_hl_field(0, Errors_64, 4) = ((MR_Box) (Var_79));
  }
  Var_80 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 0))));
  Var_81 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 1))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 2))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_25, (MR_Integer) 5))));
  {
    STATE_VARIABLE_Baggage_45_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 1) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 5) = ((MR_Box) (Var_85));
    MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 6) = ((MR_Box) (Errors_64));
  }
  Var_47 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_49 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 0))));
  Var_50 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 1))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 3))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 4))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_47));
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Done.\n");
  *STATE_VARIABLE_HaveReadModuleMaps_30 = STATE_VARIABLE_HaveReadModuleMaps_0_29;
}

static void MR_CALL 
parse_tree__grab_modules__read_trans_opt_files_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HaveReadTransOpt_37;
      MR_Word STATE_VARIABLE_ParseTreeTransOptsCord_53_53;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word STATE_VARIABLE_OptError_55_55;
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_HeadVar__9_9;

      parse_tree__read_modules__read_module_trans_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_31, &HaveReadTransOpt_37);
      if (((MR_tag((MR_Word) HaveReadTransOpt_37)) == (MR_Integer) 1))
      {
        MR_String FileName_42 = ((MR_String) ((MR_hl_field(1, HaveReadTransOpt_37, (MR_Integer) 0))));
        MR_Word WarnOptionValue_62;

        libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 18, &WarnOptionValue_62);
        switch (WarnOptionValue_62) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_63;
              MR_Word Spec_64;
              MR_Word Var_67;
              MR_Word Var_68;

              {
                Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_68, 1) = ((MR_Box) (FileName_42));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[25])));
              }
              {
                Pieces_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[46])));
                MR_hl_field(1, Pieces_63, 1) = ((MR_Box) (Var_67));
              }
              {
                Spec_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/7"));
                MR_hl_field(2, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(2, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(2, Spec_64, 3) = ((MR_Box) (Pieces_63));
              }
              {
                STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (Spec_64));
                MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
              }
            }
            break;
        }
        STATE_VARIABLE_OptError_55_55 = HeadVar__9_9;
        STATE_VARIABLE_ParseTreeTransOptsCord_53_53 = HeadVar__5_5;
      }
      else
      {
        MR_Word ParseTreeTransOpt_40 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_37, (MR_Integer) 2))));
        MR_Word ModuleErrors_41 = ((MR_Word) ((MR_hl_field(0, HaveReadTransOpt_37, (MR_Integer) 3))));
        MR_Word FatalErrors_73;
        MR_Word NonFatalErrors0_74;
        MR_Word NonFatalErrors_75;

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (ParseTreeTransOpt_40)), HeadVar__5_5, &STATE_VARIABLE_ParseTreeTransOptsCord_53_53);
        FatalErrors_73 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_41, (MR_Integer) 0))));
        NonFatalErrors0_74 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_41, (MR_Integer) 2))));
        mercury__set__delete_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 8)), NonFatalErrors0_74, &NonFatalErrors_75);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_73);
        if (succeeded)
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_75);
        if (succeeded)
        {
          STATE_VARIABLE_OptError_55_55 = HeadVar__9_9;
          STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_7;
        }
        else
        {
          MR_Word Var_77;

          Var_77 = parse_tree__parse_error__get_read_module_specs_1_f_0(ModuleErrors_41);
          STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_77, STATE_VARIABLE_Specs_0_7);
          STATE_VARIABLE_OptError_55_55 = (MR_Integer) 1;
        }
      }
      parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ProgressStream_1, VeryVerbose_3, Globals_2, STATE_VARIABLE_Specs_54_54, &STATE_VARIABLE_Specs_59_59);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_32;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_ParseTreeTransOptsCord_53_53;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_59_59;
      next_value_of_HeadVar__9_9 = STATE_VARIABLE_OptError_55_55;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AugCompUnit_10;

  parse_tree__grab_modules__aug_compilation_unit_add_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AugCompUnit_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AugCompUnit_10));
}

void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Globals_15,
  MR_Word * FoundError_16,
  MR_Word STATE_VARIABLE_Baggage_0_63,
  MR_Word * STATE_VARIABLE_Baggage_64,
  MR_Word STATE_VARIABLE_AugCompUnit_0_65,
  MR_Word * STATE_VARIABLE_AugCompUnit_66,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_67,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_68)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_65, (MR_Integer) 0))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, (MR_Integer) 0))));
  MR_Word Ancestors0_23;
  MR_Word DirectDeps0_24;
  MR_Word DirectDeps_25;
  MR_Word OptModules_26;
  MR_Word VeryVerbose_27;
  MR_Word ReadOptFilesTransitively_28;
  MR_Word DontQueueOptModules_29;
  MR_Word ParseTreePlainOptsCord0_30;
  MR_Word ExplicitDeps_31;
  MR_Word ImplicitNeedsCord_32;
  MR_Word OptSpecs0_33;
  MR_Word OptError0_34;
  MR_Word ParseTreePlainOpts0_35;
  MR_Word OptTuple_36;
  MR_Word UnusedArgs_37;
  MR_Word StructureReuse_38;
  MR_Word ParseTreePlainOpts_45;
  MR_Word OptError_47;
  MR_Word OptSpecs_50;
  MR_Word OptModuleAncestors_51;
  MR_Word OldModuleAncestors_52;
  MR_Word OldModuleAndAncestors_53;
  MR_Word OptOnlyModuleAncestors_54;
  MR_Word OptAncestorImports_55;
  MR_Word OptAncestorUses_56;
  MR_Word AllImplicitNeeds_57;
  MR_Word ImplicitDeps_58;
  MR_Word NewDeps_59;
  MR_Word NewIndirectDeps_60;
  MR_Word NewImplIndirectDeps_61;
  MR_Word ModuleErrors_62;
  MR_Word Var_71;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_AugCompUnit_86_86;
  MR_Word STATE_VARIABLE_Baggage_87_87;
  MR_Word Var_88;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_95_95;
  MR_Word STATE_VARIABLE_Baggage_96_96;
  MR_Word STATE_VARIABLE_AugCompUnit_97_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_110_110;
  MR_Word STATE_VARIABLE_Baggage_111_111;
  MR_Word STATE_VARIABLE_AugCompUnit_112_112;
  MR_Word Var_116;
  MR_Box conv1_STATE_VARIABLE_AugCompUnit_86_86;

  Ancestors0_23 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  Var_71 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, (MR_Integer) 3))));
  DirectDeps0_24 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_71);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), DirectDeps0_24, &DirectDeps_25);
  OptModules_26 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors0_23, DirectDeps_25);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 73, &VeryVerbose_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 501, &ReadOptFilesTransitively_28);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), OptModules_26, &DontQueueOptModules_29);
  Var_74 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModules_26);
  Var_75 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0));
  Var_76 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0));
  parse_tree__grab_modules__read_plain_opt_files_18_p_0(ProgressStream_13, Globals_15, VeryVerbose_27, ReadOptFilesTransitively_28, Var_74, DontQueueOptModules_29, Var_75, &ParseTreePlainOptsCord0_30, Var_76, &ExplicitDeps_31, Var_77, &ImplicitNeedsCord_32, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs0_33, (MR_Integer) 0, &OptError0_34);
  ParseTreePlainOpts0_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ParseTreePlainOptsCord0_30);
  libs__globals__get_opt_tuple_2_p_0(Globals_15, &OptTuple_36);
  UnusedArgs_37 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_36, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 514, &StructureReuse_38);
  succeeded = (UnusedArgs_37 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (StructureReuse_38 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word HaveReadOwnPlainOpt0_39;
    MR_Word OptSpecs1_46;

    parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_13, Globals_15, ModuleName_22, &HaveReadOwnPlainOpt0_39);
    if (((MR_tag((MR_Word) HaveReadOwnPlainOpt0_39)) == (MR_Integer) 1))
    {
      MR_String OwnOptFileName_48 = ((MR_String) ((MR_hl_field(1, HaveReadOwnPlainOpt0_39, (MR_Integer) 0))));

      ParseTreePlainOpts_45 = ParseTreePlainOpts0_35;
      parse_tree__grab_modules__update_opt_error_status_on_failure_7_p_0(Globals_15, (MR_Integer) 17, OwnOptFileName_48, OptSpecs0_33, &OptSpecs1_46, OptError0_34, &OptError_47);
    }
    else
    {
      MR_Word OwnParseTreePlainOpt0_42 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_39, (MR_Integer) 2))));
      MR_Word OwnOptModuleErrors_43 = ((MR_Word) ((MR_hl_field(0, HaveReadOwnPlainOpt0_39, (MR_Integer) 3))));
      MR_Word OwnParseTreePlainOpt_44;

      parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(UnusedArgs_37, StructureReuse_38, OwnParseTreePlainOpt0_42, &OwnParseTreePlainOpt_44);
      {
        ParseTreePlainOpts_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ParseTreePlainOpts_45, 0) = ((MR_Box) (OwnParseTreePlainOpt_44));
        MR_hl_field(1, ParseTreePlainOpts_45, 1) = ((MR_Box) (ParseTreePlainOpts0_35));
      }
      parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(OwnOptModuleErrors_43, OptSpecs0_33, &OptSpecs1_46, OptError0_34, &OptError_47);
    }
    parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ErrorStream_14, VeryVerbose_27, Globals_15, OptSpecs1_46, &OptSpecs_50);
  }
  else
  {
    ParseTreePlainOpts_45 = ParseTreePlainOpts0_35;
    OptSpecs_50 = OptSpecs0_33;
    OptError_47 = OptError0_34;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[12]), ParseTreePlainOpts_45, ((MR_Box) (STATE_VARIABLE_AugCompUnit_0_65)), &conv1_STATE_VARIABLE_AugCompUnit_86_86);
  STATE_VARIABLE_AugCompUnit_86_86 = ((MR_Word) (conv1_STATE_VARIABLE_AugCompUnit_86_86));
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(OptSpecs_50, STATE_VARIABLE_Baggage_0_63, &STATE_VARIABLE_Baggage_87_87);
  Var_88 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[13]), OptModules_26);
  OptModuleAncestors_51 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_88);
  OldModuleAncestors_52 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), OldModuleAncestors_52, &OldModuleAndAncestors_53);
  OptOnlyModuleAncestors_54 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModuleAncestors_51, OldModuleAndAncestors_53);
  Var_92 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptOnlyModuleAncestors_54);
  Var_93 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_94 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(ProgressStream_13, Globals_15, (MR_Integer) 1, Var_92, Var_93, &OptAncestorImports_55, Var_94, &OptAncestorUses_56, STATE_VARIABLE_HaveReadModuleMaps_0_67, &STATE_VARIABLE_HaveReadModuleMaps_95_95, STATE_VARIABLE_Baggage_87_87, &STATE_VARIABLE_Baggage_96_96, STATE_VARIABLE_AugCompUnit_86_86, &STATE_VARIABLE_AugCompUnit_97_97);
  Var_99 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ImplicitNeedsCord_32);
  parse_tree__get_dependencies__combine_implicit_needs_2_p_0(Var_99, &AllImplicitNeeds_57);
  parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_15, AllImplicitNeeds_57, &ImplicitDeps_58);
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (OptAncestorUses_56));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (OptAncestorImports_55));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (ImplicitDeps_58));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (ExplicitDeps_31));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
  }
  NewDeps_59 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_100);
  Var_107 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_59);
  Var_108 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_109 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_13, Globals_15, (MR_Integer) 5, Var_107, Var_108, &NewIndirectDeps_60, Var_109, &NewImplIndirectDeps_61, STATE_VARIABLE_HaveReadModuleMaps_95_95, &STATE_VARIABLE_HaveReadModuleMaps_110_110, STATE_VARIABLE_Baggage_96_96, &STATE_VARIABLE_Baggage_111_111, STATE_VARIABLE_AugCompUnit_97_97, &STATE_VARIABLE_AugCompUnit_112_112);
  Var_116 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIndirectDeps_60, NewImplIndirectDeps_61);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_13, Globals_15, (MR_Integer) 3, Var_116, STATE_VARIABLE_HaveReadModuleMaps_110_110, STATE_VARIABLE_HaveReadModuleMaps_68, STATE_VARIABLE_Baggage_111_111, STATE_VARIABLE_Baggage_64, STATE_VARIABLE_AugCompUnit_112_112, STATE_VARIABLE_AugCompUnit_66);
  ModuleErrors_62 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Baggage_64, (MR_Integer) 6))));
  {
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_62, (MR_Integer) 0))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_121);
  }
  if (!(succeeded))
  {
    {
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_62, (MR_Integer) 2))));

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_122);
    }
    if (!(succeeded))
      succeeded = (OptError_47 == (MR_Integer) 1);
  }
  if (succeeded)
    *FoundError_16 = (MR_Integer) 1;
  else
    *FoundError_16 = (MR_Integer) 0;
}

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_failure_7_p_0(
  MR_Word Globals_8,
  MR_Word WarnOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17,
  MR_Word STATE_VARIABLE_Error_0_18,
  MR_Word * STATE_VARIABLE_Error_19)
{
  MR_Word WarnOptionValue_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, WarnOption_9, &WarnOptionValue_13);
  switch (WarnOptionValue_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Pieces_14;
        MR_Word Spec_15;
        MR_Word Var_22;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (FileName_10));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[25])));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[46])));
          MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_22));
        }
        {
          Spec_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/7"));
          MR_hl_field(2, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(2, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(2, Spec_15, 3) = ((MR_Box) (Pieces_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
        }
      }
      break;
  }
  *STATE_VARIABLE_Error_19 = STATE_VARIABLE_Error_0_18;
}

static void MR_CALL 
parse_tree__grab_modules__read_plain_opt_files_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word VeryVerbose_3,
  MR_Word ReadOptFilesTransitively_4,
  MR_Word HeadVar__5_5,
  MR_Word DontQueueOptModules0_6,
  MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_0_7,
  MR_Word * STATE_VARIABLE_ParseTreePlainOptsCord_8,
  MR_Word STATE_VARIABLE_ExplicitDeps_0_9,
  MR_Word * STATE_VARIABLE_ExplicitDeps_10,
  MR_Word STATE_VARIABLE_ImplicitNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitNeeds_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14,
  MR_Word STATE_VARIABLE_OptError_0_15,
  MR_Word * STATE_VARIABLE_OptError_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_OptError_16 = STATE_VARIABLE_OptError_0_15;
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_ImplicitNeeds_12 = STATE_VARIABLE_ImplicitNeeds_0_11;
      *STATE_VARIABLE_ExplicitDeps_10 = STATE_VARIABLE_ExplicitDeps_0_9;
      *STATE_VARIABLE_ParseTreePlainOptsCord_8 = STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
    }
    else
    {
      MR_Word ModuleName_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames0_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HaveReadPlainOpt_55;
      MR_Word ModuleNames1_65;
      MR_Word DontQueueOptModules1_66;
      MR_Word STATE_VARIABLE_ParseTreePlainOptsCord_82_82;
      MR_Word STATE_VARIABLE_Specs_83_83;
      MR_Word STATE_VARIABLE_OptError_84_84;
      MR_Word STATE_VARIABLE_ExplicitDeps_85_85;
      MR_Word STATE_VARIABLE_ImplicitNeeds_86_86;
      MR_Word STATE_VARIABLE_Specs_91_91;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_DontQueueOptModules0_6;
      MR_Word next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;
      MR_Word next_value_of_STATE_VARIABLE_OptError_0_15;

      parse_tree__read_modules__read_module_plain_opt_6_p_0(ProgressStream_1, Globals_2, ModuleName_46, &HaveReadPlainOpt_55);
      if (((MR_tag((MR_Word) HaveReadPlainOpt_55)) == (MR_Integer) 1))
      {
        MR_String FileName_67 = ((MR_String) ((MR_hl_field(1, HaveReadPlainOpt_55, (MR_Integer) 0))));
        MR_Word WarnOptionValue_96;

        libs__globals__lookup_bool_option_3_p_0(Globals_2, (MR_Integer) 17, &WarnOptionValue_96);
        switch (WarnOptionValue_96) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_97;
              MR_Word Spec_98;
              MR_Word Var_101;
              MR_Word Var_102;

              {
                Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_102, 1) = ((MR_Box) (FileName_67));
              }
              {
                Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_2[25])));
              }
              {
                Pieces_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__grab_modules_scalar_common_2[46])));
                MR_hl_field(1, Pieces_97, 1) = ((MR_Box) (Var_101));
              }
              {
                Spec_98 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.update_opt_error_status_on_failure\'/7"));
                MR_hl_field(2, Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(2, Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(2, Spec_98, 3) = ((MR_Box) (Pieces_97));
              }
              {
                STATE_VARIABLE_Specs_83_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 0) = ((MR_Box) (Spec_98));
                MR_hl_field(1, STATE_VARIABLE_Specs_83_83, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
              }
            }
            break;
        }
        STATE_VARIABLE_OptError_84_84 = STATE_VARIABLE_OptError_0_15;
        ModuleNames1_65 = ModuleNames0_47;
        DontQueueOptModules1_66 = DontQueueOptModules0_6;
        STATE_VARIABLE_ParseTreePlainOptsCord_82_82 = STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
        STATE_VARIABLE_ExplicitDeps_85_85 = STATE_VARIABLE_ExplicitDeps_0_9;
        STATE_VARIABLE_ImplicitNeeds_86_86 = STATE_VARIABLE_ImplicitNeeds_0_11;
      }
      else
      {
        MR_Word ParseTreePlainOpt_58 = ((MR_Word) ((MR_hl_field(0, HaveReadPlainOpt_55, (MR_Integer) 2))));
        MR_Word ModuleErrors_59 = ((MR_Word) ((MR_hl_field(0, HaveReadPlainOpt_55, (MR_Integer) 3))));
        MR_Word ParseTreeExplicitDeps_60;
        MR_Word ParseTreeImplicitNeeds_61;

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (ParseTreePlainOpt_58)), STATE_VARIABLE_ParseTreePlainOptsCord_0_7, &STATE_VARIABLE_ParseTreePlainOptsCord_82_82);
        parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(ModuleErrors_59, STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_OptError_0_15, &STATE_VARIABLE_OptError_84_84);
        parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_58, &ParseTreeExplicitDeps_60, &ParseTreeImplicitNeeds_61);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_60, STATE_VARIABLE_ExplicitDeps_0_9, &STATE_VARIABLE_ExplicitDeps_85_85);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ((MR_Box) (ParseTreeImplicitNeeds_61)), STATE_VARIABLE_ImplicitNeeds_0_11, &STATE_VARIABLE_ImplicitNeeds_86_86);
        switch (ReadOptFilesTransitively_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ModuleNames1_65 = ModuleNames0_47;
              DontQueueOptModules1_66 = DontQueueOptModules0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ParseTreeImplicitDeps_62;
              MR_Word ParseTreeDeps_63;
              MR_Word NewDeps_64;
              MR_Word Var_87;

              parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_2, ParseTreeImplicitNeeds_61, &ParseTreeImplicitDeps_62);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeExplicitDeps_60, ParseTreeImplicitDeps_62, &ParseTreeDeps_63);
              mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParseTreeDeps_63, DontQueueOptModules0_6, &NewDeps_64);
              Var_87 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_64);
              ModuleNames1_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_87, ModuleNames0_47);
              mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_64, DontQueueOptModules0_6, &DontQueueOptModules1_66);
            }
            break;
        }
      }
      parse_tree__write_error_spec__pre_hlds_maybe_write_out_errors_7_p_0(ProgressStream_1, VeryVerbose_3, Globals_2, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_91_91);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames1_65;
      next_value_of_DontQueueOptModules0_6 = DontQueueOptModules1_66;
      next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = STATE_VARIABLE_ParseTreePlainOptsCord_82_82;
      next_value_of_STATE_VARIABLE_ExplicitDeps_0_9 = STATE_VARIABLE_ExplicitDeps_85_85;
      next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11 = STATE_VARIABLE_ImplicitNeeds_86_86;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_91_91;
      next_value_of_STATE_VARIABLE_OptError_0_15 = STATE_VARIABLE_OptError_84_84;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      DontQueueOptModules0_6 = next_value_of_DontQueueOptModules0_6;
      STATE_VARIABLE_ParseTreePlainOptsCord_0_7 = next_value_of_STATE_VARIABLE_ParseTreePlainOptsCord_0_7;
      STATE_VARIABLE_ExplicitDeps_0_9 = next_value_of_STATE_VARIABLE_ExplicitDeps_0_9;
      STATE_VARIABLE_ImplicitNeeds_0_11 = next_value_of_STATE_VARIABLE_ImplicitNeeds_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      STATE_VARIABLE_OptError_0_15 = next_value_of_STATE_VARIABLE_OptError_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__update_opt_error_status_on_success_5_p_0(
  MR_Word ModuleErrors_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13,
  MR_Word STATE_VARIABLE_Error_0_14,
  MR_Word * STATE_VARIABLE_Error_15)
{
  MR_bool succeeded;
  MR_Word FatalErrors_9 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_6, (MR_Integer) 0))));
  MR_Word NonFatalErrors0_10 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_6, (MR_Integer) 2))));
  MR_Word NonFatalErrors_11;

  mercury__set__delete_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), ((MR_Box) ((MR_Integer) 8)), NonFatalErrors0_10, &NonFatalErrors_11);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_9);
  if (succeeded)
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_11);
  if (succeeded)
  {
    *STATE_VARIABLE_Error_15 = STATE_VARIABLE_Error_0_14;
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
  else
  {
    MR_Word Var_18;

    Var_18 = parse_tree__parse_error__get_read_module_specs_1_f_0(ModuleErrors_6);
    *STATE_VARIABLE_Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_18, STATE_VARIABLE_Specs_0_12);
    *STATE_VARIABLE_Error_15 = (MR_Integer) 1;
  }
}

static void MR_CALL 
parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(
  MR_Word KeepUnusedArgs_5,
  MR_Word KeepReuses_6,
  MR_Word ParseTreePlainOpt0_7,
  MR_Word * ParseTreePlainOpt_8)
{
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 1))));
  MR_Word UnusedArgs0_27 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 18))));
  MR_Word Reuses0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt0_7, (MR_Integer) 25))));
  MR_Word UnusedArgs_35;
  MR_Word Reuses_36;
  MR_Word Var_37;
  MR_Word Var_38;

  switch (KeepUnusedArgs_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      UnusedArgs_35 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      UnusedArgs_35 = UnusedArgs0_27;
      break;
  }
  switch (KeepReuses_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Reuses_36 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Reuses_36 = Reuses0_34;
      break;
  }
  Var_37 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]));
  Var_38 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 16) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 18) = ((MR_Box) (UnusedArgs_35));
    MR_hl_field(0, base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 25) = ((MR_Box) (Reuses_36));
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_Word SourceFileModuleName_15,
  MR_Word ParseTreeModuleSrc_16,
  MR_Word * STATE_VARIABLE_Baggage_47,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_48,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50)
{
  MR_bool succeeded;
  MR_Word ImportAndOrUseMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 3))));
  MR_Word IntImportMap_24;
  MR_Word IntUseMap_25;
  MR_Word ImpImportMap_26;
  MR_Word ImpUseMap_27;
  MR_Word IntUseImpImportMap_28;
  MR_Word IntImports0_29;
  MR_Word IntUses_30;
  MR_Word ImpImports_31;
  MR_Word ImpUses_32;
  MR_Word IntUsesImpImports_33;
  MR_Word IntImports_34;
  MR_Word MaybeTopModule_35;
  MR_Word Errors0_37;
  MR_Word GrabbedFileMap0_38;
  MR_Word ModuleName_39;
  MR_Word SrcMap0_40;
  MR_Word SrcMap_41;
  MR_Word Ancestors_42;
  MR_Word AncestorImports_43;
  MR_Word AncestorUses_44;
  MR_Word ImportAccessibilityInfo_45;
  MR_Word AccessSpecs_46;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_55_55;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_Baggage_57_57;
  MR_String Var_58;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_59_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_63_63;
  MR_Word STATE_VARIABLE_Baggage_64_64;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_65_65;
  MR_Word STATE_VARIABLE_IntIndirectImported_67_67;
  MR_Word STATE_VARIABLE_ImpIndirectImported_68_68;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_IntIndirectImported_72_72;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_73_73;
  MR_Word STATE_VARIABLE_Baggage_74_74;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_75_75;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_IntIndirectImported_80_80;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_81_81;
  MR_Word STATE_VARIABLE_Baggage_82_82;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_83_83;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_ImpIndirectImported_88_88;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_89_89;
  MR_Word STATE_VARIABLE_Baggage_90_90;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_91_91;
  MR_Word Var_95;
  MR_Word STATE_VARIABLE_IntIndirectImported_96_96;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_97_97;
  MR_Word STATE_VARIABLE_Baggage_98_98;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_99_99;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_IntIndirectImported_104_104;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_105_105;
  MR_Word STATE_VARIABLE_Baggage_106_106;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_107_107;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_ImpIndirectImported_112_112;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_113_113;
  MR_Word STATE_VARIABLE_Baggage_114_114;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_115_115;
  MR_Word Var_119;
  MR_Word STATE_VARIABLE_IntIndirectImported_120_120;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_121_121;
  MR_Word STATE_VARIABLE_Baggage_122_122;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_123_123;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_127_127;
  MR_Word STATE_VARIABLE_Baggage_128_128;
  MR_Word STATE_VARIABLE_AugMakeIntUnit_129_129;
  MR_Word STATE_VARIABLE_Baggage_134_134;
  MR_Word Var_259;
  MR_Word Var_247;
  MR_Word Var_249;
  MR_Word Var_250;
  MR_Word Var_251;
  MR_Word Var_252;
  MR_Word Var_253;
  MR_Word Var_254;

  parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportAndOrUseMap_23, &IntImportMap_24, &IntUseMap_25, &ImpImportMap_26, &ImpUseMap_27, &IntUseImpImportMap_28);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap_24, &IntImports0_29);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap_25, &IntUses_30);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap_26, &ImpImports_31);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap_27, &ImpUses_32);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap_28, &IntUsesImpImports_33);
  Var_53 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_53)), IntImports0_29, &IntImports_34);
  Var_259 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 0))));
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_15, Var_259);
  if (succeeded)
  {
    MR_Word Var_54;

    Var_54 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    {
      MaybeTopModule_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTopModule_35, 0) = ((MR_Box) (Var_54));
    }
  }
  else
    MaybeTopModule_35 = (MR_Word) ((MR_Unsigned) 0U);
  Errors0_37 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(ParseTreeModuleSrc_16, &STATE_VARIABLE_AugMakeIntUnit_55_55);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (ParseTreeModuleSrc_16));
  }
  Var_58 = mercury__dir__this_directory_0_f_0();
  ModuleName_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 0))));
  GrabbedFileMap0_38 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_39)), ((MR_Box) (Var_56)));
  {
    STATE_VARIABLE_Baggage_57_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 0) = ((MR_Box) (SourceFileName_14));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 1) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 2) = ((MR_Box) (SourceFileModuleName_15));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 3) = ((MR_Box) (MaybeTopModule_35));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 5) = ((MR_Box) (GrabbedFileMap0_38));
    MR_hl_field(0, STATE_VARIABLE_Baggage_57_57, 6) = ((MR_Box) (Errors0_37));
  }
  SrcMap0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_39)), ((MR_Box) (ParseTreeModuleSrc_16)), SrcMap0_40, &SrcMap_41);
  Var_247 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 0))));
  Var_249 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 2))));
  Var_250 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 3))));
  Var_251 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 4))));
  Var_252 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 5))));
  Var_253 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 6))));
  Var_254 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 7))));
  {
    STATE_VARIABLE_HaveReadModuleMaps_59_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 0) = ((MR_Box) (Var_247));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 1) = ((MR_Box) (SrcMap_41));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 2) = ((MR_Box) (Var_249));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 3) = ((MR_Box) (Var_250));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 4) = ((MR_Box) (Var_251));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 5) = ((MR_Box) (Var_252));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 6) = ((MR_Box) (Var_253));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_59_59, 7) = ((MR_Box) (Var_254));
  }
  Ancestors_42 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_39);
  Var_61 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_62 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(ProgressStream_12, Globals_13, Ancestors_42, Var_61, &AncestorImports_43, Var_62, &AncestorUses_44, STATE_VARIABLE_HaveReadModuleMaps_59_59, &STATE_VARIABLE_HaveReadModuleMaps_63_63, STATE_VARIABLE_Baggage_57_57, &STATE_VARIABLE_Baggage_64_64, STATE_VARIABLE_AugMakeIntUnit_55_55, &STATE_VARIABLE_AugMakeIntUnit_65_65);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_67_67);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_68_68);
  Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImports_43);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, Var_71, STATE_VARIABLE_IntIndirectImported_67_67, &STATE_VARIABLE_IntIndirectImported_72_72, STATE_VARIABLE_HaveReadModuleMaps_63_63, &STATE_VARIABLE_HaveReadModuleMaps_73_73, STATE_VARIABLE_Baggage_64_64, &STATE_VARIABLE_Baggage_74_74, STATE_VARIABLE_AugMakeIntUnit_65_65, &STATE_VARIABLE_AugMakeIntUnit_75_75);
  Var_79 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_34);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, Var_79, STATE_VARIABLE_IntIndirectImported_72_72, &STATE_VARIABLE_IntIndirectImported_80_80, STATE_VARIABLE_HaveReadModuleMaps_73_73, &STATE_VARIABLE_HaveReadModuleMaps_81_81, STATE_VARIABLE_Baggage_74_74, &STATE_VARIABLE_Baggage_82_82, STATE_VARIABLE_AugMakeIntUnit_75_75, &STATE_VARIABLE_AugMakeIntUnit_83_83);
  Var_87 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_31);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, Var_87, STATE_VARIABLE_ImpIndirectImported_68_68, &STATE_VARIABLE_ImpIndirectImported_88_88, STATE_VARIABLE_HaveReadModuleMaps_81_81, &STATE_VARIABLE_HaveReadModuleMaps_89_89, STATE_VARIABLE_Baggage_82_82, &STATE_VARIABLE_Baggage_90_90, STATE_VARIABLE_AugMakeIntUnit_83_83, &STATE_VARIABLE_AugMakeIntUnit_91_91);
  Var_95 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorUses_44);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, Var_95, STATE_VARIABLE_IntIndirectImported_80_80, &STATE_VARIABLE_IntIndirectImported_96_96, STATE_VARIABLE_HaveReadModuleMaps_89_89, &STATE_VARIABLE_HaveReadModuleMaps_97_97, STATE_VARIABLE_Baggage_90_90, &STATE_VARIABLE_Baggage_98_98, STATE_VARIABLE_AugMakeIntUnit_91_91, &STATE_VARIABLE_AugMakeIntUnit_99_99);
  Var_103 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_30);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 4, Var_103, STATE_VARIABLE_IntIndirectImported_96_96, &STATE_VARIABLE_IntIndirectImported_104_104, STATE_VARIABLE_HaveReadModuleMaps_97_97, &STATE_VARIABLE_HaveReadModuleMaps_105_105, STATE_VARIABLE_Baggage_98_98, &STATE_VARIABLE_Baggage_106_106, STATE_VARIABLE_AugMakeIntUnit_99_99, &STATE_VARIABLE_AugMakeIntUnit_107_107);
  Var_111 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_32);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 5, Var_111, STATE_VARIABLE_ImpIndirectImported_88_88, &STATE_VARIABLE_ImpIndirectImported_112_112, STATE_VARIABLE_HaveReadModuleMaps_105_105, &STATE_VARIABLE_HaveReadModuleMaps_113_113, STATE_VARIABLE_Baggage_106_106, &STATE_VARIABLE_Baggage_114_114, STATE_VARIABLE_AugMakeIntUnit_107_107, &STATE_VARIABLE_AugMakeIntUnit_115_115);
  Var_119 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsesImpImports_33);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_12, Globals_13, (MR_Integer) 6, Var_119, STATE_VARIABLE_IntIndirectImported_104_104, &STATE_VARIABLE_IntIndirectImported_120_120, STATE_VARIABLE_HaveReadModuleMaps_113_113, &STATE_VARIABLE_HaveReadModuleMaps_121_121, STATE_VARIABLE_Baggage_114_114, &STATE_VARIABLE_Baggage_122_122, STATE_VARIABLE_AugMakeIntUnit_115_115, &STATE_VARIABLE_AugMakeIntUnit_123_123);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 7, STATE_VARIABLE_IntIndirectImported_120_120, STATE_VARIABLE_HaveReadModuleMaps_121_121, &STATE_VARIABLE_HaveReadModuleMaps_127_127, STATE_VARIABLE_Baggage_122_122, &STATE_VARIABLE_Baggage_128_128, STATE_VARIABLE_AugMakeIntUnit_123_123, &STATE_VARIABLE_AugMakeIntUnit_129_129);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_12, Globals_13, (MR_Integer) 8, STATE_VARIABLE_ImpIndirectImported_112_112, STATE_VARIABLE_HaveReadModuleMaps_127_127, STATE_VARIABLE_HaveReadModuleMaps_50, STATE_VARIABLE_Baggage_128_128, &STATE_VARIABLE_Baggage_134_134, STATE_VARIABLE_AugMakeIntUnit_129_129, STATE_VARIABLE_AugMakeIntUnit_48);
  parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugMakeIntUnit_48, &ImportAccessibilityInfo_45);
  parse_tree__grab_modules__check_imports_accessibility_3_p_0(ParseTreeModuleSrc_16, ImportAccessibilityInfo_45, &AccessSpecs_46);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_46, STATE_VARIABLE_Baggage_134_134, STATE_VARIABLE_Baggage_47);
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_109_105_117_95_95_91_51_93_95_48_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_Baggage_0_11,
  MR_Word * STATE_VARIABLE_Baggage_12,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_13,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_14 = STATE_VARIABLE_AugMakeIntUnit_0_13;
      *STATE_VARIABLE_Baggage_12 = STATE_VARIABLE_Baggage_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_DirectUses_8 = STATE_VARIABLE_DirectUses_0_7;
      *STATE_VARIABLE_DirectImports_6 = STATE_VARIABLE_DirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_70_70;
      MR_Word STATE_VARIABLE_Baggage_71_71;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_72_72;
      MR_Word STATE_VARIABLE_DirectImports_75_75;
      MR_Word STATE_VARIABLE_DirectUses_77_77;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_11;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_11, ModuleName_41, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_50;
        MR_Word ImpImports_51;
        MR_Word IntUses_52;
        MR_Word ImpUses_53;
        MR_Word STATE_VARIABLE_DirectImports_74_74;
        MR_Word STATE_VARIABLE_DirectUses_76_76;

        parse_tree__grab_modules__process_module_int0_for_amiu_15_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_41, &IntImports_50, &ImpImports_51, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_70_70, STATE_VARIABLE_Baggage_0_11, &STATE_VARIABLE_Baggage_71_71, STATE_VARIABLE_AugMakeIntUnit_0_13, &STATE_VARIABLE_AugMakeIntUnit_72_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_50, STATE_VARIABLE_DirectImports_0_5, &STATE_VARIABLE_DirectImports_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_51, STATE_VARIABLE_DirectImports_74_74, &STATE_VARIABLE_DirectImports_75_75);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_DirectUses_0_7, &STATE_VARIABLE_DirectUses_76_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_DirectUses_76_76, &STATE_VARIABLE_DirectUses_77_77);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_72_72 = STATE_VARIABLE_AugMakeIntUnit_0_13;
        STATE_VARIABLE_Baggage_71_71 = STATE_VARIABLE_Baggage_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_70_70 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_DirectUses_77_77 = STATE_VARIABLE_DirectUses_0_7;
        STATE_VARIABLE_DirectImports_75_75 = STATE_VARIABLE_DirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_42;
      next_value_of_STATE_VARIABLE_DirectImports_0_5 = STATE_VARIABLE_DirectImports_75_75;
      next_value_of_STATE_VARIABLE_DirectUses_0_7 = STATE_VARIABLE_DirectUses_77_77;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_70_70;
      next_value_of_STATE_VARIABLE_Baggage_0_11 = STATE_VARIABLE_Baggage_71_71;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13 = STATE_VARIABLE_AugMakeIntUnit_72_72;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DirectImports_0_5 = next_value_of_STATE_VARIABLE_DirectImports_0_5;
      STATE_VARIABLE_DirectUses_0_7 = next_value_of_STATE_VARIABLE_DirectUses_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_Baggage_0_11 = next_value_of_STATE_VARIABLE_Baggage_0_11;
      STATE_VARIABLE_AugMakeIntUnit_0_13 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_amiu_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;
  MR_Word conv2_HeadVar__6_6;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  parse_tree__item_util__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_10 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_amiu_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ModuleName_18,
  MR_Word * IntImports_19,
  MR_Word * ImpImports_20,
  MR_Word * IntUses_21,
  MR_Word * ImpUses_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39)
{
  MR_Word ReturnTimestamp_27;
  MR_Word HaveReadInt0_28;
  MR_Word Errors_32;
  MR_Word STATE_VARIABLE_Baggage_50_50;
  MR_Word MaybeTimestampMap_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));

  if ((MaybeTimestampMap_121 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_27 = (MR_Integer) 1;
  else
    ReturnTimestamp_27 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int0_10_p_0(ProgressStream_16, Globals_17, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_27, &HaveReadInt0_28, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
  if (((MR_tag((MR_Word) HaveReadInt0_28)) == (MR_Integer) 1))
  {
    Errors_32 = ((MR_Word) ((MR_hl_field(1, HaveReadInt0_28, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_20);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_22);
    STATE_VARIABLE_Baggage_50_50 = STATE_VARIABLE_Baggage_0_36;
    *STATE_VARIABLE_AugMakeIntUnit_39 = STATE_VARIABLE_AugMakeIntUnit_0_38;
  }
  else
  {
    MR_Word MaybeTimestamp_30 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, (MR_Integer) 1))));
    MR_Word ParseTreeInt0_31 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, (MR_Integer) 2))));
    MR_Word GrabbedFile_33;
    MR_Word STATE_VARIABLE_Baggage_46_46;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_47_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv7_IntImports_19;
    MR_Box conv6_ImpImports_20;
    MR_Box conv5_IntUses_21;
    MR_Box conv4_ImpUses_22;

    Errors_32 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_28, (MR_Integer) 3))));
    {
      GrabbedFile_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GrabbedFile_33, 0) = ((MR_Box) (ParseTreeInt0_31));
      MR_hl_field(1, GrabbedFile_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_18, GrabbedFile_33, STATE_VARIABLE_Baggage_0_36, &STATE_VARIABLE_Baggage_46_46);
    parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(ParseTreeInt0_31, STATE_VARIABLE_AugMakeIntUnit_0_38, &STATE_VARIABLE_AugMakeIntUnit_47_47);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_30, STATE_VARIABLE_Baggage_46_46, &STATE_VARIABLE_Baggage_50_50);
    Var_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_31, (MR_Integer) 4))));
    Var_53 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_54 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_56 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[11]), Var_52, ((MR_Box) (Var_53)), &conv7_IntImports_19, ((MR_Box) (Var_54)), &conv6_ImpImports_20, ((MR_Box) (Var_55)), &conv5_IntUses_21, ((MR_Box) (Var_56)), &conv4_ImpUses_22);
    *IntImports_19 = ((MR_Word) (conv7_IntImports_19));
    *ImpImports_20 = ((MR_Word) (conv6_ImpImports_20));
    *IntUses_21 = ((MR_Word) (conv5_IntUses_21));
    *ImpUses_22 = ((MR_Word) (conv4_ImpUses_22));
    Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_31, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_make_int_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_57, STATE_VARIABLE_AugMakeIntUnit_47_47, STATE_VARIABLE_AugMakeIntUnit_39);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_32, STATE_VARIABLE_Baggage_50_50, STATE_VARIABLE_Baggage_37);
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
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugMakeIntUnit_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 4) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_ancestor_int_3_p_0(
  MR_Word PT0_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_9,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_10)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 1))));
  MR_Word MN_7 = ((MR_Word) ((MR_hl_field(0, PT0_4, (MR_Integer) 0))));
  MR_Word Map_8;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), ((MR_Box) (MN_7)), ((MR_Box) (PT0_4)), Map0_6, &Map_8);
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 3))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_9, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (Map_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_28,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_23;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_34_34;
    MR_Word STATE_VARIABLE_Baggage_35_35;
    MR_Word STATE_VARIABLE_AugMakeIntUnit_36_36;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_32 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_18);
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, ReadWhy3_17, Var_32, Var_33, &IndirectImports_23, STATE_VARIABLE_HaveReadModuleMaps_0_24, &STATE_VARIABLE_HaveReadModuleMaps_34_34, STATE_VARIABLE_Baggage_0_26, &STATE_VARIABLE_Baggage_35_35, STATE_VARIABLE_AugMakeIntUnit_0_28, &STATE_VARIABLE_AugMakeIntUnit_36_36);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_23);
    if (succeeded)
    {
      *STATE_VARIABLE_AugMakeIntUnit_29 = STATE_VARIABLE_AugMakeIntUnit_36_36;
      *STATE_VARIABLE_Baggage_27 = STATE_VARIABLE_Baggage_35_35;
      *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = IndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_26 = STATE_VARIABLE_Baggage_35_35;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_28 = STATE_VARIABLE_AugMakeIntUnit_36_36;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_HaveReadModuleMaps_0_24 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24;
      STATE_VARIABLE_Baggage_0_26 = next_value_of_STATE_VARIABLE_Baggage_0_26;
      STATE_VARIABLE_AugMakeIntUnit_0_28 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_28;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
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
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugMakeIntUnit_13 = STATE_VARIABLE_AugMakeIntUnit_0_12;
      *STATE_VARIABLE_Baggage_11 = STATE_VARIABLE_Baggage_0_10;
      *STATE_VARIABLE_HaveReadModuleMaps_9 = STATE_VARIABLE_HaveReadModuleMaps_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_61_61;
      MR_Word STATE_VARIABLE_Baggage_62_62;
      MR_Word STATE_VARIABLE_AugMakeIntUnit_63_63;
      MR_Word STATE_VARIABLE_IntIndirectImports_65_65;
      MR_Word GrabbedFileMap_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
      MR_Word OldGrabbedFile_72;
      MR_Box conv0_OldGrabbedFile_72;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_10;
      MR_Word next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_71, ((MR_Box) (ModuleName_39)), &conv0_OldGrabbedFile_72);
      if (succeeded)
      {
        OldGrabbedFile_72 = ((MR_Word) (conv0_OldGrabbedFile_72));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldFileKind_73;
        MR_Word Var_85;

        switch (MR_tag((MR_Word) OldGrabbedFile_72)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_73 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
            OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_72, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
                break;
              case (MR_Integer) 1:
                OldFileKind_73 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
                break;
            }
            break;
        }
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_85, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3])), OldFileKind_73);
        succeeded = ((MR_Integer) 1 == Var_85);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntImports_46;

        parse_tree__grab_modules__process_module_int3_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_39, &IntImports_46, STATE_VARIABLE_HaveReadModuleMaps_0_8, &STATE_VARIABLE_HaveReadModuleMaps_61_61, STATE_VARIABLE_Baggage_0_10, &STATE_VARIABLE_Baggage_62_62, STATE_VARIABLE_AugMakeIntUnit_0_12, &STATE_VARIABLE_AugMakeIntUnit_63_63);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_46, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_65_65);
      }
      else
      {
        STATE_VARIABLE_AugMakeIntUnit_63_63 = STATE_VARIABLE_AugMakeIntUnit_0_12;
        STATE_VARIABLE_Baggage_62_62 = STATE_VARIABLE_Baggage_0_10;
        STATE_VARIABLE_HaveReadModuleMaps_61_61 = STATE_VARIABLE_HaveReadModuleMaps_0_8;
        STATE_VARIABLE_IntIndirectImports_65_65 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_40;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_65_65;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8 = STATE_VARIABLE_HaveReadModuleMaps_61_61;
      next_value_of_STATE_VARIABLE_Baggage_0_10 = STATE_VARIABLE_Baggage_62_62;
      next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12 = STATE_VARIABLE_AugMakeIntUnit_63_63;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_HaveReadModuleMaps_0_8 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_8;
      STATE_VARIABLE_Baggage_0_10 = next_value_of_STATE_VARIABLE_Baggage_0_10;
      STATE_VARIABLE_AugMakeIntUnit_0_12 = next_value_of_STATE_VARIABLE_AugMakeIntUnit_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int3_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy3_16,
  MR_Word ModuleName_17,
  MR_Word * IntImports_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35,
  MR_Word STATE_VARIABLE_Baggage_0_36,
  MR_Word * STATE_VARIABLE_Baggage_37,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_38,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_39)
{
  MR_Word ReturnTimestamp_23;
  MR_Word HaveReadInt3_24;
  MR_Word Errors_28;
  MR_Word STATE_VARIABLE_Baggage_49_49;
  MR_Word MaybeTimestampMap_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));

  if ((MaybeTimestampMap_71 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_23 = (MR_Integer) 1;
  else
    ReturnTimestamp_23 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int3_10_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, ModuleName_17, ReturnTimestamp_23, &HaveReadInt3_24, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
  if (((MR_tag((MR_Word) HaveReadInt3_24)) == (MR_Integer) 1))
  {
    Errors_28 = ((MR_Word) ((MR_hl_field(1, HaveReadInt3_24, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_18);
    STATE_VARIABLE_Baggage_49_49 = STATE_VARIABLE_Baggage_0_36;
    *STATE_VARIABLE_AugMakeIntUnit_39 = STATE_VARIABLE_AugMakeIntUnit_0_38;
  }
  else
  {
    MR_Word MaybeTimestamp_26 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, (MR_Integer) 1))));
    MR_Word ParseTreeInt3_27 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, (MR_Integer) 2))));
    MR_Word GrabbedFile_29;
    MR_Word RecompAvail_30;
    MR_Word IntImportMap_33;
    MR_Word STATE_VARIABLE_Baggage_45_45;
    MR_Word GrabbedFileMap0_79;
    MR_Word GrabbedFileMap_80;
    MR_String Var_87;
    MR_String Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;

    Errors_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt3_24, (MR_Integer) 3))));
    {
      GrabbedFile_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, GrabbedFile_29, 1) = ((MR_Box) (ParseTreeInt3_27));
      MR_hl_field(3, GrabbedFile_29, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
    }
    GrabbedFileMap0_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 5))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (GrabbedFile_29)), GrabbedFileMap0_79, &GrabbedFileMap_80);
    Var_87 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 0))));
    Var_88 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 2))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 3))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 4))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_36, (MR_Integer) 6))));
    {
      STATE_VARIABLE_Baggage_45_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 0) = ((MR_Box) (Var_87));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 1) = ((MR_Box) (Var_88));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 2) = ((MR_Box) (Var_89));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 3) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 4) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 5) = ((MR_Box) (GrabbedFileMap_80));
      MR_hl_field(0, STATE_VARIABLE_Baggage_45_45, 6) = ((MR_Box) (Var_93));
    }
    switch (ReadWhy3_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_31;

          RecompAvail_30 = (MR_Integer) 1;
          {
            DirectIntSpec_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_31, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_31, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_31, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_64;

          RecompAvail_30 = (MR_Integer) 3;
          {
            DirectIntSpec_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_64, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_64, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_64, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_65;

          RecompAvail_30 = (MR_Integer) 2;
          {
            DirectIntSpec_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_65, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_65, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_65, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_66;

          RecompAvail_30 = (MR_Integer) 4;
          {
            DirectIntSpec_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_66, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_66, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_66, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_67;

          RecompAvail_30 = (MR_Integer) 1;
          {
            DirectIntSpec_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_67, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_67, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_67, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_68;

          RecompAvail_30 = (MR_Integer) 3;
          {
            DirectIntSpec_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_68, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_68, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_68, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word DirectIntSpec_69;

          RecompAvail_30 = (MR_Integer) 5;
          {
            DirectIntSpec_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_69, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, DirectIntSpec_69, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(DirectIntSpec_69, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word IndirectIntSpec_32;

          RecompAvail_30 = (MR_Integer) 4;
          {
            IndirectIntSpec_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_32, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, IndirectIntSpec_32, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_32, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word IndirectIntSpec_70;

          RecompAvail_30 = (MR_Integer) 3;
          {
            IndirectIntSpec_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_70, 0) = ((MR_Box) (ParseTreeInt3_27));
            MR_hl_field(0, IndirectIntSpec_70, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_16));
          }
          parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(IndirectIntSpec_70, STATE_VARIABLE_AugMakeIntUnit_0_38, STATE_VARIABLE_AugMakeIntUnit_39);
        }
        break;
    }
    IntImportMap_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_27, (MR_Integer) 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), IntImportMap_33, IntImports_18);
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_17, (MR_Integer) 3, RecompAvail_30, MaybeTimestamp_26, STATE_VARIABLE_Baggage_45_45, &STATE_VARIABLE_Baggage_49_49);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_28, STATE_VARIABLE_Baggage_49_49, STATE_VARIABLE_Baggage_37);
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_indirect_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT3_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_30));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_add_direct_int3_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugMakeIntUnit_0_11,
  MR_Word * STATE_VARIABLE_AugMakeIntUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 2))));
  MR_Word PT3_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT3_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 3))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugMakeIntUnit_0_11, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugMakeIntUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_30));
  }
}

static void MR_CALL 
parse_tree__grab_modules__init_aug_make_int_unit_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * AugMakeIntUnit_4)
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
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectIntSpecs_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectIntSpecs_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (VersionNumbers_8));
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
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_ReadModules_23;
  MR_Word conv23_STATE_VARIABLE_InclMap_25;
  MR_Word conv22_STATE_VARIABLE_SrcIntImportUseMap_27;
  MR_Word conv21_STATE_VARIABLE_SrcImpImportUseMap_29;
  MR_Word conv20_STATE_VARIABLE_AncestorImportUseMap_31;

  parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_31));
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
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ReadModules_23;
  MR_Word conv13_STATE_VARIABLE_InclMap_25;
  MR_Word conv12_STATE_VARIABLE_SrcIntImportUseMap_27;
  MR_Word conv11_STATE_VARIABLE_SrcImpImportUseMap_29;
  MR_Word conv10_STATE_VARIABLE_AncestorImportUseMap_31;

  parse_tree__grab_modules__record_includes_imports_uses_in_direct_int3_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_31));
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
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ReadModules_48;
  MR_Word conv3_STATE_VARIABLE_MaybeAbstractInclMap_50;
  MR_Word conv2_STATE_VARIABLE_SrcIntImportUseMap_52;
  MR_Word conv1_STATE_VARIABLE_SrcImpImportUseMap_54;
  MR_Word conv0_STATE_VARIABLE_AncestorImportUseMap_56;

  parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int0_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReadModules_48, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_MaybeAbstractInclMap_50, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_SrcIntImportUseMap_52, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_SrcImpImportUseMap_54, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_AncestorImportUseMap_56);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReadModules_48));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeAbstractInclMap_50));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_SrcIntImportUseMap_52));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_SrcImpImportUseMap_54));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_56));
}

static void MR_CALL 
parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugMakeIntUnit_3,
  MR_Word * ImportAccessibilityInfo_4)
{
  MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_6 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, (MR_Integer) 1))));
  MR_Word DirectIntSpecs_7 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, (MR_Integer) 2))));
  MR_Word IndirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, (MR_Integer) 3))));
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
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), &STATE_VARIABLE_InclMap_18_18);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &STATE_VARIABLE_SrcIntImportUseMap_19_19);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &STATE_VARIABLE_SrcImpImportUseMap_20_20);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &STATE_VARIABLE_AncestorImportUseMap_21_21);
  ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, (MR_Integer) 0))));
  Ancestors_16 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_15);
  parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_17_17, &STATE_VARIABLE_ReadModules_22_22, STATE_VARIABLE_InclMap_18_18, &STATE_VARIABLE_InclMap_23_23, STATE_VARIABLE_SrcIntImportUseMap_19_19, &STATE_VARIABLE_SrcIntImportUseMap_24_24, STATE_VARIABLE_SrcImpImportUseMap_20_20, &STATE_VARIABLE_SrcImpImportUseMap_25_25, STATE_VARIABLE_AncestorImportUseMap_21_21, &STATE_VARIABLE_AncestorImportUseMap_26_26);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[5]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Ancestors_16));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_22_22)), &conv9_STATE_VARIABLE_ReadModules_28_28, ((MR_Box) (STATE_VARIABLE_InclMap_23_23)), &conv8_STATE_VARIABLE_InclMap_29_29, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_24_24)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_25_25)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_26_26)), &conv5_STATE_VARIABLE_AncestorImportUseMap_32_32);
  STATE_VARIABLE_ReadModules_28_28 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_28_28));
  STATE_VARIABLE_InclMap_29_29 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_29_29));
  STATE_VARIABLE_SrcIntImportUseMap_30_30 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30));
  STATE_VARIABLE_SrcImpImportUseMap_31_31 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31));
  STATE_VARIABLE_AncestorImportUseMap_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_32_32));
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[6]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Ancestors_16));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_33, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_28_28)), &conv19_STATE_VARIABLE_ReadModules_34_34, ((MR_Box) (STATE_VARIABLE_InclMap_29_29)), &conv18_STATE_VARIABLE_InclMap_35_35, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_30_30)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_31_31)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_32_32)), &conv15_STATE_VARIABLE_AncestorImportUseMap_38_38);
  STATE_VARIABLE_ReadModules_34_34 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_34_34));
  STATE_VARIABLE_InclMap_35_35 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_35_35));
  STATE_VARIABLE_SrcIntImportUseMap_36_36 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36));
  STATE_VARIABLE_SrcImpImportUseMap_37_37 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37));
  STATE_VARIABLE_AncestorImportUseMap_38_38 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_38_38));
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[7]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__grab_modules__aug_make_int_unit_get_import_accessibility_info_2_p_0_3));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Ancestors_16));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ReadModules_40_40));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InclMap_41_41));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_42_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_43_43));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_44_44));
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
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
  MR_Word conv7_IntUses_19;
  MR_Word conv6_ImpUses_20;
  MR_Word conv5_STATE_VARIABLE_HaveReadModuleMaps_37;
  MR_Word conv4_STATE_VARIABLE_Baggage_39;
  MR_Word conv3_STATE_VARIABLE_AugCompUnit_41;

  parse_tree__grab_modules__process_module_int1_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_IntUses_19, &conv6_ImpUses_20, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_HaveReadModuleMaps_37, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_Baggage_39, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_AugCompUnit_41);
  *wrapper_arg_2 = ((MR_Box) (conv7_IntUses_19));
  *wrapper_arg_3 = ((MR_Box) (conv6_ImpUses_20));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_HaveReadModuleMaps_37));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Baggage_39));
  *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_AugCompUnit_41));
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_implicit_fim_for_module_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_String SourceFileName_16,
  MR_Word SourceFileModuleName_17,
  MR_Word MaybeTimestamp_18,
  MR_Word MaybeTopModule_19,
  MR_Word ParseTreeModuleSrc0_20,
  MR_Word * STATE_VARIABLE_Baggage_63,
  MR_Word * STATE_VARIABLE_AugCompUnit_64,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_65,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_66)
{
  MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 0))));
  MR_Word IntFIMs0_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 4))));
  MR_Word ImpFIMs0_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 5))));
  MR_Word IntFIMs_32;
  MR_Word ImpFIMs_33;
  MR_Word ParseTreeModuleSrc_35;
  MR_Word MaybeTimestampMap_37;
  MR_Word Errors0_38;
  MR_Word GrabbedFileMap0_39;
  MR_Word SrcMap0_40;
  MR_Word SrcMap_41;
  MR_Word ImportUseMap_42;
  MR_Word IntImportMap_43;
  MR_Word IntUseMap_44;
  MR_Word ImpImportMap_45;
  MR_Word ImpUseMap_46;
  MR_Word IntUseImpImportMap_47;
  MR_Word IntImports0_48;
  MR_Word IntUses0_49;
  MR_Word ImpImports_50;
  MR_Word ImpUses_51;
  MR_Word IntUseImpImports_52;
  MR_Word Ancestors_53;
  MR_Word IntImports_54;
  MR_Word IntUses_55;
  MR_Word Experiment3_56;
  MR_Word ImportAccessibilityInfo_61;
  MR_Word AccessSpecs_62;
  MR_Word Var_69;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_AugCompUnit_77_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_Baggage_79_79;
  MR_String Var_80;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_81_81;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_84_84;
  MR_Word STATE_VARIABLE_Baggage_85_85;
  MR_Word STATE_VARIABLE_AugCompUnit_86_86;
  MR_Word STATE_VARIABLE_IntIndirectImported_88_88;
  MR_Word STATE_VARIABLE_ImpIndirectImported_89_89;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_90_90;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_91_91;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_IntIndirectImported_95_95;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_96_96;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_97_97;
  MR_Word STATE_VARIABLE_Baggage_98_98;
  MR_Word STATE_VARIABLE_AugCompUnit_99_99;
  MR_Word STATE_VARIABLE_ImpIndirectImported_103_103;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_104_104;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_105_105;
  MR_Word STATE_VARIABLE_Baggage_106_106;
  MR_Word STATE_VARIABLE_AugCompUnit_107_107;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_IntIndirectImported_112_112;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_113_113;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_114_114;
  MR_Word STATE_VARIABLE_Baggage_115_115;
  MR_Word STATE_VARIABLE_AugCompUnit_116_116;
  MR_Word STATE_VARIABLE_ImpIndirectImported_120_120;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_121_121;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_122_122;
  MR_Word STATE_VARIABLE_Baggage_123_123;
  MR_Word STATE_VARIABLE_AugCompUnit_124_124;
  MR_Word STATE_VARIABLE_IntIndirectImported_128_128;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_129_129;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_130_130;
  MR_Word STATE_VARIABLE_Baggage_131_131;
  MR_Word STATE_VARIABLE_AugCompUnit_132_132;
  MR_Word STATE_VARIABLE_IntImpIndirectImported_136_136;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_137_137;
  MR_Word STATE_VARIABLE_Baggage_138_138;
  MR_Word STATE_VARIABLE_AugCompUnit_139_139;
  MR_Word STATE_VARIABLE_ImpImpIndirectImported_143_143;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_144_144;
  MR_Word STATE_VARIABLE_Baggage_145_145;
  MR_Word STATE_VARIABLE_AugCompUnit_146_146;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_150_150;
  MR_Word STATE_VARIABLE_Baggage_151_151;
  MR_Word STATE_VARIABLE_AugCompUnit_152_152;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_156_156;
  MR_Word STATE_VARIABLE_Baggage_157_157;
  MR_Word STATE_VARIABLE_AugCompUnit_158_158;
  MR_Word STATE_VARIABLE_Baggage_169_169;
  MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 6))));
  MR_Word Var_348;
  MR_Word Var_349;
  MR_Word Var_350;
  MR_Word Var_351;
  MR_Word Var_354;
  MR_Word Var_355;
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
  MR_Word Var_366;
  MR_Word Var_367;
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
  MR_Box conv1_IntFIMs_32;
  MR_Box conv2_ImpFIMs_33;
  MR_Word Var_427;
  MR_Word Var_429;
  MR_Word Var_430;
  MR_Word Var_431;
  MR_Word Var_432;
  MR_Word Var_433;
  MR_Word Var_434;

  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_12[0]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (ModuleName_29));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_69, Var_178, ((MR_Box) (IntFIMs0_30)), &conv1_IntFIMs_32);
  IntFIMs_32 = ((MR_Word) (conv1_IntFIMs_32));
  Var_72 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 7))));
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_69, Var_72, ((MR_Box) (ImpFIMs0_31)), &conv2_ImpFIMs_33);
  ImpFIMs_33 = ((MR_Word) (conv2_ImpFIMs_33));
  Var_348 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 0))));
  Var_349 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 1))));
  Var_350 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 2))));
  Var_351 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 3))));
  Var_354 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 6))));
  Var_355 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 7))));
  Var_356 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 8))));
  Var_357 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 9))));
  Var_358 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 10))));
  Var_359 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 11))));
  Var_360 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 12))));
  Var_361 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 13))));
  Var_362 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 14))));
  Var_363 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 15))));
  Var_364 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 16))));
  Var_365 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 17))));
  Var_366 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 18))));
  Var_367 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 19))));
  Var_368 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 20))));
  Var_369 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 21))));
  Var_370 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 22))));
  Var_371 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 23))));
  Var_372 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 24))));
  Var_373 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 25))));
  Var_374 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 26))));
  Var_375 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 27))));
  Var_376 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 28))));
  Var_377 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 29))));
  Var_378 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 30))));
  Var_379 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 31))));
  Var_380 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 32))));
  Var_381 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 33))));
  Var_382 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 34))));
  Var_383 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 35))));
  {
    ParseTreeModuleSrc_35 = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeModuleSrc_35, 0) = ((MR_Box) (Var_348));
    MR_hl_field(0, ParseTreeModuleSrc_35, 1) = ((MR_Box) (Var_349));
    MR_hl_field(0, ParseTreeModuleSrc_35, 2) = ((MR_Box) (Var_350));
    MR_hl_field(0, ParseTreeModuleSrc_35, 3) = ((MR_Box) (Var_351));
    MR_hl_field(0, ParseTreeModuleSrc_35, 4) = ((MR_Box) (IntFIMs_32));
    MR_hl_field(0, ParseTreeModuleSrc_35, 5) = ((MR_Box) (ImpFIMs_33));
    MR_hl_field(0, ParseTreeModuleSrc_35, 6) = ((MR_Box) (Var_354));
    MR_hl_field(0, ParseTreeModuleSrc_35, 7) = ((MR_Box) (Var_355));
    MR_hl_field(0, ParseTreeModuleSrc_35, 8) = ((MR_Box) (Var_356));
    MR_hl_field(0, ParseTreeModuleSrc_35, 9) = ((MR_Box) (Var_357));
    MR_hl_field(0, ParseTreeModuleSrc_35, 10) = ((MR_Box) (Var_358));
    MR_hl_field(0, ParseTreeModuleSrc_35, 11) = ((MR_Box) (Var_359));
    MR_hl_field(0, ParseTreeModuleSrc_35, 12) = ((MR_Box) (Var_360));
    MR_hl_field(0, ParseTreeModuleSrc_35, 13) = ((MR_Box) (Var_361));
    MR_hl_field(0, ParseTreeModuleSrc_35, 14) = ((MR_Box) (Var_362));
    MR_hl_field(0, ParseTreeModuleSrc_35, 15) = ((MR_Box) (Var_363));
    MR_hl_field(0, ParseTreeModuleSrc_35, 16) = ((MR_Box) (Var_364));
    MR_hl_field(0, ParseTreeModuleSrc_35, 17) = ((MR_Box) (Var_365));
    MR_hl_field(0, ParseTreeModuleSrc_35, 18) = ((MR_Box) (Var_366));
    MR_hl_field(0, ParseTreeModuleSrc_35, 19) = ((MR_Box) (Var_367));
    MR_hl_field(0, ParseTreeModuleSrc_35, 20) = ((MR_Box) (Var_368));
    MR_hl_field(0, ParseTreeModuleSrc_35, 21) = ((MR_Box) (Var_369));
    MR_hl_field(0, ParseTreeModuleSrc_35, 22) = ((MR_Box) (Var_370));
    MR_hl_field(0, ParseTreeModuleSrc_35, 23) = ((MR_Box) (Var_371));
    MR_hl_field(0, ParseTreeModuleSrc_35, 24) = ((MR_Box) (Var_372));
    MR_hl_field(0, ParseTreeModuleSrc_35, 25) = ((MR_Box) (Var_373));
    MR_hl_field(0, ParseTreeModuleSrc_35, 26) = ((MR_Box) (Var_374));
    MR_hl_field(0, ParseTreeModuleSrc_35, 27) = ((MR_Box) (Var_375));
    MR_hl_field(0, ParseTreeModuleSrc_35, 28) = ((MR_Box) (Var_376));
    MR_hl_field(0, ParseTreeModuleSrc_35, 29) = ((MR_Box) (Var_377));
    MR_hl_field(0, ParseTreeModuleSrc_35, 30) = ((MR_Box) (Var_378));
    MR_hl_field(0, ParseTreeModuleSrc_35, 31) = ((MR_Box) (Var_379));
    MR_hl_field(0, ParseTreeModuleSrc_35, 32) = ((MR_Box) (Var_380));
    MR_hl_field(0, ParseTreeModuleSrc_35, 33) = ((MR_Box) (Var_381));
    MR_hl_field(0, ParseTreeModuleSrc_35, 34) = ((MR_Box) (Var_382));
    MR_hl_field(0, ParseTreeModuleSrc_35, 35) = ((MR_Box) (Var_383));
  }
  if ((MaybeTimestamp_18 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTimestampMap_37 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Timestamp_36 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_18, (MR_Integer) 0))));
    MR_Word Var_73;
    MR_Word Var_74;

    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_74, 1) = ((MR_Box) (Timestamp_36));
      MR_hl_field(0, Var_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_73 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_29)), ((MR_Box) (Var_74)));
    {
      MaybeTimestampMap_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTimestampMap_37, 0) = ((MR_Box) (Var_73));
    }
  }
  Errors0_38 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_35, &STATE_VARIABLE_AugCompUnit_77_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (ParseTreeModuleSrc_35));
  }
  GrabbedFileMap0_39 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_29)), ((MR_Box) (Var_78)));
  Var_80 = mercury__dir__this_directory_0_f_0();
  {
    STATE_VARIABLE_Baggage_79_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 0) = ((MR_Box) (SourceFileName_16));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 1) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 2) = ((MR_Box) (SourceFileModuleName_17));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 3) = ((MR_Box) (MaybeTopModule_19));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 4) = ((MR_Box) (MaybeTimestampMap_37));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 5) = ((MR_Box) (GrabbedFileMap0_39));
    MR_hl_field(0, STATE_VARIABLE_Baggage_79_79, 6) = ((MR_Box) (Errors0_38));
  }
  SrcMap0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 1))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_29)), ((MR_Box) (ParseTreeModuleSrc_35)), SrcMap0_40, &SrcMap_41);
  Var_427 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 0))));
  Var_429 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 2))));
  Var_430 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 3))));
  Var_431 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 4))));
  Var_432 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 5))));
  Var_433 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 6))));
  Var_434 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_65, (MR_Integer) 7))));
  {
    STATE_VARIABLE_HaveReadModuleMaps_81_81 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 0) = ((MR_Box) (Var_427));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 1) = ((MR_Box) (SrcMap_41));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 2) = ((MR_Box) (Var_429));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 3) = ((MR_Box) (Var_430));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 4) = ((MR_Box) (Var_431));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 5) = ((MR_Box) (Var_432));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 6) = ((MR_Box) (Var_433));
    MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_81_81, 7) = ((MR_Box) (Var_434));
  }
  ImportUseMap_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_35, (MR_Integer) 3))));
  parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportUseMap_42, &IntImportMap_43, &IntUseMap_44, &ImpImportMap_45, &ImpUseMap_46, &IntUseImpImportMap_47);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntImportMap_43, &IntImports0_48);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseMap_44, &IntUses0_49);
  ImpImports_50 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpImportMap_45);
  ImpUses_51 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpUseMap_46);
  IntUseImpImports_52 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntUseImpImportMap_47);
  Ancestors_53 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_29);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 0, Ancestors_53, IntImports0_48, &IntImports_54, IntUses0_49, &IntUses_55, STATE_VARIABLE_HaveReadModuleMaps_81_81, &STATE_VARIABLE_HaveReadModuleMaps_84_84, STATE_VARIABLE_Baggage_79_79, &STATE_VARIABLE_Baggage_85_85, STATE_VARIABLE_AugCompUnit_77_77, &STATE_VARIABLE_AugCompUnit_86_86);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_88_88);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_89_89);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_90_90);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_91_91);
  Var_94 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_54);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 0, Var_94, STATE_VARIABLE_IntIndirectImported_88_88, &STATE_VARIABLE_IntIndirectImported_95_95, STATE_VARIABLE_IntImpIndirectImported_90_90, &STATE_VARIABLE_IntImpIndirectImported_96_96, STATE_VARIABLE_HaveReadModuleMaps_84_84, &STATE_VARIABLE_HaveReadModuleMaps_97_97, STATE_VARIABLE_Baggage_85_85, &STATE_VARIABLE_Baggage_98_98, STATE_VARIABLE_AugCompUnit_86_86, &STATE_VARIABLE_AugCompUnit_99_99);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 2, ImpImports_50, STATE_VARIABLE_ImpIndirectImported_89_89, &STATE_VARIABLE_ImpIndirectImported_103_103, STATE_VARIABLE_ImpImpIndirectImported_91_91, &STATE_VARIABLE_ImpImpIndirectImported_104_104, STATE_VARIABLE_HaveReadModuleMaps_97_97, &STATE_VARIABLE_HaveReadModuleMaps_105_105, STATE_VARIABLE_Baggage_98_98, &STATE_VARIABLE_Baggage_106_106, STATE_VARIABLE_AugCompUnit_99_99, &STATE_VARIABLE_AugCompUnit_107_107);
  Var_111 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_55);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, Var_111, STATE_VARIABLE_IntIndirectImported_95_95, &STATE_VARIABLE_IntIndirectImported_112_112, STATE_VARIABLE_IntImpIndirectImported_96_96, &STATE_VARIABLE_IntImpIndirectImported_113_113, STATE_VARIABLE_HaveReadModuleMaps_105_105, &STATE_VARIABLE_HaveReadModuleMaps_114_114, STATE_VARIABLE_Baggage_106_106, &STATE_VARIABLE_Baggage_115_115, STATE_VARIABLE_AugCompUnit_107_107, &STATE_VARIABLE_AugCompUnit_116_116);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 3, ImpUses_51, STATE_VARIABLE_ImpIndirectImported_103_103, &STATE_VARIABLE_ImpIndirectImported_120_120, STATE_VARIABLE_ImpImpIndirectImported_104_104, &STATE_VARIABLE_ImpImpIndirectImported_121_121, STATE_VARIABLE_HaveReadModuleMaps_114_114, &STATE_VARIABLE_HaveReadModuleMaps_122_122, STATE_VARIABLE_Baggage_115_115, &STATE_VARIABLE_Baggage_123_123, STATE_VARIABLE_AugCompUnit_116_116, &STATE_VARIABLE_AugCompUnit_124_124);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_14, Globals_15, (MR_Integer) 4, IntUseImpImports_52, STATE_VARIABLE_IntIndirectImported_112_112, &STATE_VARIABLE_IntIndirectImported_128_128, STATE_VARIABLE_IntImpIndirectImported_113_113, &STATE_VARIABLE_IntImpIndirectImported_129_129, STATE_VARIABLE_HaveReadModuleMaps_122_122, &STATE_VARIABLE_HaveReadModuleMaps_130_130, STATE_VARIABLE_Baggage_123_123, &STATE_VARIABLE_Baggage_131_131, STATE_VARIABLE_AugCompUnit_124_124, &STATE_VARIABLE_AugCompUnit_132_132);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, (MR_Integer) 0, STATE_VARIABLE_IntIndirectImported_128_128, STATE_VARIABLE_IntImpIndirectImported_129_129, &STATE_VARIABLE_IntImpIndirectImported_136_136, STATE_VARIABLE_HaveReadModuleMaps_130_130, &STATE_VARIABLE_HaveReadModuleMaps_137_137, STATE_VARIABLE_Baggage_131_131, &STATE_VARIABLE_Baggage_138_138, STATE_VARIABLE_AugCompUnit_132_132, &STATE_VARIABLE_AugCompUnit_139_139);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, STATE_VARIABLE_ImpIndirectImported_120_120, STATE_VARIABLE_ImpImpIndirectImported_121_121, &STATE_VARIABLE_ImpImpIndirectImported_143_143, STATE_VARIABLE_HaveReadModuleMaps_137_137, &STATE_VARIABLE_HaveReadModuleMaps_144_144, STATE_VARIABLE_Baggage_138_138, &STATE_VARIABLE_Baggage_145_145, STATE_VARIABLE_AugCompUnit_139_139, &STATE_VARIABLE_AugCompUnit_146_146);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_14, Globals_15, (MR_Integer) 2, STATE_VARIABLE_IntImpIndirectImported_136_136, STATE_VARIABLE_HaveReadModuleMaps_144_144, &STATE_VARIABLE_HaveReadModuleMaps_150_150, STATE_VARIABLE_Baggage_145_145, &STATE_VARIABLE_Baggage_151_151, STATE_VARIABLE_AugCompUnit_146_146, &STATE_VARIABLE_AugCompUnit_152_152);
  parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(ProgressStream_14, Globals_15, (MR_Integer) 2, STATE_VARIABLE_ImpImpIndirectImported_143_143, STATE_VARIABLE_HaveReadModuleMaps_150_150, &STATE_VARIABLE_HaveReadModuleMaps_156_156, STATE_VARIABLE_Baggage_151_151, &STATE_VARIABLE_Baggage_157_157, STATE_VARIABLE_AugCompUnit_152_152, &STATE_VARIABLE_AugCompUnit_158_158);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 712, &Experiment3_56);
  switch (Experiment3_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Baggage_169_169 = STATE_VARIABLE_Baggage_157_157;
        *STATE_VARIABLE_AugCompUnit_64 = STATE_VARIABLE_AugCompUnit_158_158;
        *STATE_VARIABLE_HaveReadModuleMaps_66 = STATE_VARIABLE_HaveReadModuleMaps_156_156;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HaveReadModuleMaps_162_162;
        MR_Word STATE_VARIABLE_Baggage_163_163;
        MR_Word STATE_VARIABLE_AugCompUnit_164_164;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word _IntUses_57;
        MR_Word _ImpUses_58;
        MR_Word _IntUsesList_59;
        MR_Word _ImpUsesList_60;
        MR_Box conv11_STATE_VARIABLE_HaveReadModuleMaps_66;
        MR_Box conv10_STATE_VARIABLE_Baggage_169_169;
        MR_Box conv9_STATE_VARIABLE_AugCompUnit_64;
        MR_Box conv8_STATE_VARIABLE_IO_68;

        parse_tree__grab_modules__process_module_int1_14_p_0(ProgressStream_14, Globals_15, (MR_Integer) 6, ModuleName_29, &_IntUses_57, &_ImpUses_58, STATE_VARIABLE_HaveReadModuleMaps_156_156, &STATE_VARIABLE_HaveReadModuleMaps_162_162, STATE_VARIABLE_Baggage_157_157, &STATE_VARIABLE_Baggage_163_163, STATE_VARIABLE_AugCompUnit_158_158, &STATE_VARIABLE_AugCompUnit_164_164);
        {
          Var_166 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_166, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_13[0]));
          MR_hl_field(0, Var_166, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0_2));
          MR_hl_field(0, Var_166, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_166, 3) = ((MR_Box) (ProgressStream_14));
          MR_hl_field(0, Var_166, 4) = ((MR_Box) (Globals_15));
          MR_hl_field(0, Var_166, 5) = ((MR_Box) ((MR_Integer) 6));
        }
        Var_167 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_29);
        mercury__list__map2_foldl4_12_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_aug_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_166, Var_167, &_IntUsesList_59, &_ImpUsesList_60, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_162_162)), &conv11_STATE_VARIABLE_HaveReadModuleMaps_66, ((MR_Box) (STATE_VARIABLE_Baggage_163_163)), &conv10_STATE_VARIABLE_Baggage_169_169, ((MR_Box) (STATE_VARIABLE_AugCompUnit_164_164)), &conv9_STATE_VARIABLE_AugCompUnit_64, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_68);
        *STATE_VARIABLE_HaveReadModuleMaps_66 = ((MR_Word) (conv11_STATE_VARIABLE_HaveReadModuleMaps_66));
        STATE_VARIABLE_Baggage_169_169 = ((MR_Word) (conv10_STATE_VARIABLE_Baggage_169_169));
        *STATE_VARIABLE_AugCompUnit_64 = ((MR_Word) (conv9_STATE_VARIABLE_AugCompUnit_64));
      }
      break;
  }
  parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0(*STATE_VARIABLE_AugCompUnit_64, &ImportAccessibilityInfo_61);
  parse_tree__grab_modules__check_imports_accessibility_3_p_0(ParseTreeModuleSrc_35, ImportAccessibilityInfo_61, &AccessSpecs_62);
  parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(AccessSpecs_62, STATE_VARIABLE_Baggage_169_169, STATE_VARIABLE_Baggage_63);
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_15 = STATE_VARIABLE_AugCompUnit_0_14;
      *STATE_VARIABLE_Baggage_13 = STATE_VARIABLE_Baggage_0_12;
      *STATE_VARIABLE_HaveReadModuleMaps_11 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
      *STATE_VARIABLE_ImpIndirectImports_9 = STATE_VARIABLE_ImpIndirectImports_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_70_70;
      MR_Word STATE_VARIABLE_Baggage_71_71;
      MR_Word STATE_VARIABLE_AugCompUnit_72_72;
      MR_Word STATE_VARIABLE_IntIndirectImports_74_74;
      MR_Word STATE_VARIABLE_ImpIndirectImports_75_75;
      MR_Word GrabbedFileMap_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_12, (MR_Integer) 5))));
      MR_Word OldGrabbedFile_82;
      MR_Box conv0_OldGrabbedFile_82;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_81, ((MR_Box) (ModuleName_44)), &conv0_OldGrabbedFile_82);
      if (succeeded)
      {
        OldGrabbedFile_82 = ((MR_Word) (conv0_OldGrabbedFile_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldFileKind_83;
        MR_Word Var_95;

        switch (MR_tag((MR_Word) OldGrabbedFile_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_83 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
            OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_82, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
                break;
              case (MR_Integer) 1:
                OldFileKind_83 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
                break;
            }
            break;
        }
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_95, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1])), OldFileKind_83);
        succeeded = ((MR_Integer) 1 == Var_95);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntUses_52;
        MR_Word ImpUses_53;

        parse_tree__grab_modules__process_module_int1_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntUses_52, &ImpUses_53, STATE_VARIABLE_HaveReadModuleMaps_0_10, &STATE_VARIABLE_HaveReadModuleMaps_70_70, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_71_71, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_72_72);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_53, STATE_VARIABLE_ImpIndirectImports_0_8, &STATE_VARIABLE_ImpIndirectImports_75_75);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_72_72 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_71_71 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveReadModuleMaps_70_70 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
        STATE_VARIABLE_ImpIndirectImports_75_75 = STATE_VARIABLE_ImpIndirectImports_0_8;
        STATE_VARIABLE_IntIndirectImports_74_74 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_74_74;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8 = STATE_VARIABLE_ImpIndirectImports_75_75;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10 = STATE_VARIABLE_HaveReadModuleMaps_70_70;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_71_71;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_72_72;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_ImpIndirectImports_0_8 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_8;
      STATE_VARIABLE_HaveReadModuleMaps_0_10 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      STATE_VARIABLE_Baggage_0_12 = next_value_of_STATE_VARIABLE_Baggage_0_12;
      STATE_VARIABLE_AugCompUnit_0_14 = next_value_of_STATE_VARIABLE_AugCompUnit_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_102_111_114_95_97_99_117_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DirectImports_0_6,
  MR_Word * STATE_VARIABLE_DirectImports_7,
  MR_Word STATE_VARIABLE_DirectUses_0_8,
  MR_Word * STATE_VARIABLE_DirectUses_9,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_15 = STATE_VARIABLE_AugCompUnit_0_14;
      *STATE_VARIABLE_Baggage_13 = STATE_VARIABLE_Baggage_0_12;
      *STATE_VARIABLE_HaveReadModuleMaps_11 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
      *STATE_VARIABLE_DirectUses_9 = STATE_VARIABLE_DirectUses_0_8;
      *STATE_VARIABLE_DirectImports_7 = STATE_VARIABLE_DirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_72_72;
      MR_Word STATE_VARIABLE_Baggage_73_73;
      MR_Word STATE_VARIABLE_AugCompUnit_74_74;
      MR_Word STATE_VARIABLE_DirectImports_77_77;
      MR_Word STATE_VARIABLE_DirectUses_79_79;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_8;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_Baggage_0_12, ModuleName_44, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word IntImports_52;
        MR_Word ImpImports_53;
        MR_Word IntUses_54;
        MR_Word ImpUses_55;
        MR_Word STATE_VARIABLE_DirectImports_76_76;
        MR_Word STATE_VARIABLE_DirectUses_78_78;

        parse_tree__grab_modules__process_module_int0_for_acu_16_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntImports_52, &ImpImports_53, &IntUses_54, &ImpUses_55, STATE_VARIABLE_HaveReadModuleMaps_0_10, &STATE_VARIABLE_HaveReadModuleMaps_72_72, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_73_73, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_74_74);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_52, STATE_VARIABLE_DirectImports_0_6, &STATE_VARIABLE_DirectImports_76_76);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_53, STATE_VARIABLE_DirectImports_76_76, &STATE_VARIABLE_DirectImports_77_77);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_54, STATE_VARIABLE_DirectUses_0_8, &STATE_VARIABLE_DirectUses_78_78);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_55, STATE_VARIABLE_DirectUses_78_78, &STATE_VARIABLE_DirectUses_79_79);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_74_74 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_73_73 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveReadModuleMaps_72_72 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
        STATE_VARIABLE_DirectUses_79_79 = STATE_VARIABLE_DirectUses_0_8;
        STATE_VARIABLE_DirectImports_77_77 = STATE_VARIABLE_DirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_DirectImports_0_6 = STATE_VARIABLE_DirectImports_77_77;
      next_value_of_STATE_VARIABLE_DirectUses_0_8 = STATE_VARIABLE_DirectUses_79_79;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10 = STATE_VARIABLE_HaveReadModuleMaps_72_72;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_73_73;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_74_74;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_DirectImports_0_6 = next_value_of_STATE_VARIABLE_DirectImports_0_6;
      STATE_VARIABLE_DirectUses_0_8 = next_value_of_STATE_VARIABLE_DirectUses_0_8;
      STATE_VARIABLE_HaveReadModuleMaps_0_10 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      STATE_VARIABLE_Baggage_0_12 = next_value_of_STATE_VARIABLE_Baggage_0_12;
      STATE_VARIABLE_AugCompUnit_0_14 = next_value_of_STATE_VARIABLE_AugCompUnit_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_acu_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;
  MR_Word conv2_HeadVar__6_6;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  parse_tree__item_util__get_imports_uses_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_9)), &conv0_HeadVar__10_10);
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_10 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_for_acu_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word ReadWhy0_19,
  MR_Word ModuleName_20,
  MR_Word * IntImports_21,
  MR_Word * ImpImports_22,
  MR_Word * IntUses_23,
  MR_Word * ImpUses_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39,
  MR_Word STATE_VARIABLE_Baggage_0_40,
  MR_Word * STATE_VARIABLE_Baggage_41,
  MR_Word STATE_VARIABLE_AugCompUnit_0_42,
  MR_Word * STATE_VARIABLE_AugCompUnit_43)
{
  MR_Word ReturnTimestamp_29;
  MR_Word HaveReadInt0_30;
  MR_Word Errors_34;
  MR_Word STATE_VARIABLE_Baggage_54_54;
  MR_Word MaybeTimestampMap_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_40, (MR_Integer) 4))));

  if ((MaybeTimestampMap_125 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_29 = (MR_Integer) 1;
  else
    ReturnTimestamp_29 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int0_10_p_0(ProgressStream_17, Globals_18, (MR_Integer) 1, ModuleName_20, ReturnTimestamp_29, &HaveReadInt0_30, STATE_VARIABLE_HaveReadModuleMaps_0_38, STATE_VARIABLE_HaveReadModuleMaps_39);
  if (((MR_tag((MR_Word) HaveReadInt0_30)) == (MR_Integer) 1))
  {
    Errors_34 = ((MR_Word) ((MR_hl_field(1, HaveReadInt0_30, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_21);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_22);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_23);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_24);
    STATE_VARIABLE_Baggage_54_54 = STATE_VARIABLE_Baggage_0_40;
    *STATE_VARIABLE_AugCompUnit_43 = STATE_VARIABLE_AugCompUnit_0_42;
  }
  else
  {
    MR_Word MaybeTimestamp_32 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, (MR_Integer) 1))));
    MR_Word ParseTreeInt0_33 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, (MR_Integer) 2))));
    MR_Word GrabbedFile_35;
    MR_Word STATE_VARIABLE_Baggage_49_49;
    MR_Word STATE_VARIABLE_AugCompUnit_50_50;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Box conv7_IntImports_21;
    MR_Box conv6_ImpImports_22;
    MR_Box conv5_IntUses_23;
    MR_Box conv4_ImpUses_24;

    Errors_34 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_30, (MR_Integer) 3))));
    {
      GrabbedFile_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GrabbedFile_35, 0) = ((MR_Box) (ParseTreeInt0_33));
      MR_hl_field(1, GrabbedFile_35, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_20, GrabbedFile_35, STATE_VARIABLE_Baggage_0_40, &STATE_VARIABLE_Baggage_49_49);
    switch (ReadWhy0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IntForOptSpec_37;

          {
            IntForOptSpec_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IntForOptSpec_37, 0) = ((MR_Box) (ParseTreeInt0_33));
            MR_hl_field(0, IntForOptSpec_37, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_37, STATE_VARIABLE_AugCompUnit_0_42, &STATE_VARIABLE_AugCompUnit_50_50);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word AncestorIntSpec_36;

          {
            AncestorIntSpec_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, AncestorIntSpec_36, 0) = ((MR_Box) (ParseTreeInt0_33));
            MR_hl_field(0, AncestorIntSpec_36, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_19));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(AncestorIntSpec_36, STATE_VARIABLE_AugCompUnit_0_42, &STATE_VARIABLE_AugCompUnit_50_50);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_20, (MR_Integer) 0, (MR_Integer) 1, MaybeTimestamp_32, STATE_VARIABLE_Baggage_49_49, &STATE_VARIABLE_Baggage_54_54);
    Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_33, (MR_Integer) 4))));
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_58 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_59 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_60 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[10]), Var_56, ((MR_Box) (Var_57)), &conv7_IntImports_21, ((MR_Box) (Var_58)), &conv6_ImpImports_22, ((MR_Box) (Var_59)), &conv5_IntUses_23, ((MR_Box) (Var_60)), &conv4_ImpUses_24);
    *IntImports_21 = ((MR_Word) (conv7_IntImports_21));
    *ImpImports_22 = ((MR_Word) (conv6_ImpImports_22));
    *IntUses_23 = ((MR_Word) (conv5_IntUses_23));
    *ImpUses_24 = ((MR_Word) (conv4_ImpUses_24));
    Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_33, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_20, Var_61, STATE_VARIABLE_AugCompUnit_50_50, STATE_VARIABLE_AugCompUnit_43);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_34, STATE_VARIABLE_Baggage_54_54, STATE_VARIABLE_Baggage_41);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
  MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT0_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_52));
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word Baggage_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6)
{
  MR_bool succeeded;
  MR_Word GrabbedFileMap_7 = ((MR_Word) ((MR_hl_field(0, Baggage_4, (MR_Integer) 5))));
  MR_Word OldGrabbedFile_8;
  MR_Box conv0_OldGrabbedFile_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_7, ((MR_Box) (ModuleName_5)), &conv0_OldGrabbedFile_8);
  if (succeeded)
  {
    OldGrabbedFile_8 = ((MR_Word) (conv0_OldGrabbedFile_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldFileKind_9;
    MR_Word Var_11;
    MR_Word Var_21;

    switch (MR_tag((MR_Word) OldGrabbedFile_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OldFileKind_9 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
        break;
      case (MR_Integer) 2:
        OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
            break;
          case (MR_Integer) 1:
            OldFileKind_9 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
            break;
        }
        break;
    }
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = (MR_Box) ((MR_Unsigned) (FileKind_6));
    }
    parse_tree__file_kind____Compare____file_kind_0_0(&Var_21, Var_11, OldFileKind_9);
    succeeded = ((MR_Integer) 1 == Var_21);
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_17,
  MR_Word Modules_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
  MR_Word STATE_VARIABLE_Baggage_0_26,
  MR_Word * STATE_VARIABLE_Baggage_27,
  MR_Word STATE_VARIABLE_AugCompUnit_0_28,
  MR_Word * STATE_VARIABLE_AugCompUnit_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpIndirectImports_23;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_33_33;
    MR_Word STATE_VARIABLE_Baggage_34_34;
    MR_Word STATE_VARIABLE_AugCompUnit_35_35;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(ProgressStream_14, Globals_15, ReadWhy2_17, Modules_18, Var_32, &ImpIndirectImports_23, STATE_VARIABLE_HaveReadModuleMaps_0_24, &STATE_VARIABLE_HaveReadModuleMaps_33_33, STATE_VARIABLE_Baggage_0_26, &STATE_VARIABLE_Baggage_34_34, STATE_VARIABLE_AugCompUnit_0_28, &STATE_VARIABLE_AugCompUnit_35_35);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_23);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_29 = STATE_VARIABLE_AugCompUnit_35_35;
      *STATE_VARIABLE_Baggage_27 = STATE_VARIABLE_Baggage_34_34;
      *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_33_33;
    }
    else
    {
      MR_Word next_value_of_Modules_18 = ImpIndirectImports_23;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24 = STATE_VARIABLE_HaveReadModuleMaps_33_33;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_26 = STATE_VARIABLE_Baggage_34_34;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_28 = STATE_VARIABLE_AugCompUnit_35_35;

      // direct tailcall eliminated
      ;
      Modules_18 = next_value_of_Modules_18;
      STATE_VARIABLE_HaveReadModuleMaps_0_24 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24;
      STATE_VARIABLE_Baggage_0_26 = next_value_of_STATE_VARIABLE_Baggage_0_26;
      STATE_VARIABLE_AugCompUnit_0_28 = next_value_of_STATE_VARIABLE_AugCompUnit_0_28;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_51_93_95_48_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word Globals_17,
  MR_Word ReadWhy2_19,
  MR_Word Modules_20,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_27,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_29,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_30,
  MR_Word STATE_VARIABLE_Baggage_0_31,
  MR_Word * STATE_VARIABLE_Baggage_32,
  MR_Word STATE_VARIABLE_AugCompUnit_0_33,
  MR_Word * STATE_VARIABLE_AugCompUnit_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_26;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_ImpIndirectImports_39_39;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_40_40;
    MR_Word STATE_VARIABLE_Baggage_41_41;
    MR_Word STATE_VARIABLE_AugCompUnit_42_42;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_20);
    Var_38 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(ProgressStream_16, Globals_17, ReadWhy2_19, Var_37, Var_38, &IndirectImports_26, STATE_VARIABLE_ImpIndirectImports_0_27, &STATE_VARIABLE_ImpIndirectImports_39_39, STATE_VARIABLE_HaveReadModuleMaps_0_29, &STATE_VARIABLE_HaveReadModuleMaps_40_40, STATE_VARIABLE_Baggage_0_31, &STATE_VARIABLE_Baggage_41_41, STATE_VARIABLE_AugCompUnit_0_33, &STATE_VARIABLE_AugCompUnit_42_42);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_26);
    if (succeeded)
    {
      *STATE_VARIABLE_AugCompUnit_34 = STATE_VARIABLE_AugCompUnit_42_42;
      *STATE_VARIABLE_Baggage_32 = STATE_VARIABLE_Baggage_41_41;
      *STATE_VARIABLE_HaveReadModuleMaps_30 = STATE_VARIABLE_HaveReadModuleMaps_40_40;
      *STATE_VARIABLE_ImpIndirectImports_28 = STATE_VARIABLE_ImpIndirectImports_39_39;
    }
    else
    {
      MR_Word next_value_of_Modules_20 = IndirectImports_26;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27 = STATE_VARIABLE_ImpIndirectImports_39_39;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_29 = STATE_VARIABLE_HaveReadModuleMaps_40_40;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_31 = STATE_VARIABLE_Baggage_41_41;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_33 = STATE_VARIABLE_AugCompUnit_42_42;

      // direct tailcall eliminated
      ;
      Modules_20 = next_value_of_Modules_20;
      STATE_VARIABLE_ImpIndirectImports_0_27 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_27;
      STATE_VARIABLE_HaveReadModuleMaps_0_29 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_29;
      STATE_VARIABLE_Baggage_0_31 = next_value_of_STATE_VARIABLE_Baggage_0_31;
      STATE_VARIABLE_AugCompUnit_0_33 = next_value_of_STATE_VARIABLE_AugCompUnit_0_33;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_51_93_95_48_17_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_6,
  MR_Word * STATE_VARIABLE_IntIndirectImports_7,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_8,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_9,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_10,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_11,
  MR_Word STATE_VARIABLE_Baggage_0_12,
  MR_Word * STATE_VARIABLE_Baggage_13,
  MR_Word STATE_VARIABLE_AugCompUnit_0_14,
  MR_Word * STATE_VARIABLE_AugCompUnit_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AugCompUnit_15 = STATE_VARIABLE_AugCompUnit_0_14;
      *STATE_VARIABLE_Baggage_13 = STATE_VARIABLE_Baggage_0_12;
      *STATE_VARIABLE_HaveReadModuleMaps_11 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
      *STATE_VARIABLE_ImpIndirectImports_9 = STATE_VARIABLE_ImpIndirectImports_0_8;
      *STATE_VARIABLE_IntIndirectImports_7 = STATE_VARIABLE_IntIndirectImports_0_6;
    }
    else
    {
      MR_Word ModuleName_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleNames_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_69_69;
      MR_Word STATE_VARIABLE_Baggage_70_70;
      MR_Word STATE_VARIABLE_AugCompUnit_71_71;
      MR_Word STATE_VARIABLE_IntIndirectImports_73_73;
      MR_Word GrabbedFileMap_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_12, (MR_Integer) 5))));
      MR_Word OldGrabbedFile_80;
      MR_Box conv0_OldGrabbedFile_80;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Baggage_0_12;
      MR_Word next_value_of_STATE_VARIABLE_AugCompUnit_0_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), GrabbedFileMap_79, ((MR_Box) (ModuleName_44)), &conv0_OldGrabbedFile_80);
      if (succeeded)
      {
        OldGrabbedFile_80 = ((MR_Word) (conv0_OldGrabbedFile_80));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldFileKind_81;
        MR_Word Var_93;

        switch (MR_tag((MR_Word) OldGrabbedFile_80)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldFileKind_81 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            OldFileKind_81 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[0]));
            break;
          case (MR_Integer) 2:
            OldFileKind_81 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[1]));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldGrabbedFile_80, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                OldFileKind_81 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2]));
                break;
              case (MR_Integer) 1:
                OldFileKind_81 = (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[3]));
                break;
            }
            break;
        }
        parse_tree__file_kind____Compare____file_kind_0_0(&Var_93, (MR_Word) (MR_mkword(1, &parse_tree__grab_modules_scalar_common_3[2])), OldFileKind_81);
        succeeded = ((MR_Integer) 1 == Var_93);
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word IntUses_52;

        parse_tree__grab_modules__process_module_int2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ModuleName_44, &IntUses_52, STATE_VARIABLE_HaveReadModuleMaps_0_10, &STATE_VARIABLE_HaveReadModuleMaps_69_69, STATE_VARIABLE_Baggage_0_12, &STATE_VARIABLE_Baggage_70_70, STATE_VARIABLE_AugCompUnit_0_14, &STATE_VARIABLE_AugCompUnit_71_71);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_52, STATE_VARIABLE_IntIndirectImports_0_6, &STATE_VARIABLE_IntIndirectImports_73_73);
      }
      else
      {
        STATE_VARIABLE_AugCompUnit_71_71 = STATE_VARIABLE_AugCompUnit_0_14;
        STATE_VARIABLE_Baggage_70_70 = STATE_VARIABLE_Baggage_0_12;
        STATE_VARIABLE_HaveReadModuleMaps_69_69 = STATE_VARIABLE_HaveReadModuleMaps_0_10;
        STATE_VARIABLE_IntIndirectImports_73_73 = STATE_VARIABLE_IntIndirectImports_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ModuleNames_45;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_6 = STATE_VARIABLE_IntIndirectImports_73_73;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10 = STATE_VARIABLE_HaveReadModuleMaps_69_69;
      next_value_of_STATE_VARIABLE_Baggage_0_12 = STATE_VARIABLE_Baggage_70_70;
      next_value_of_STATE_VARIABLE_AugCompUnit_0_14 = STATE_VARIABLE_AugCompUnit_71_71;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_IntIndirectImports_0_6 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_6;
      STATE_VARIABLE_HaveReadModuleMaps_0_10 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_10;
      STATE_VARIABLE_Baggage_0_12 = next_value_of_STATE_VARIABLE_Baggage_0_12;
      STATE_VARIABLE_AugCompUnit_0_14 = next_value_of_STATE_VARIABLE_AugCompUnit_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  parse_tree__item_util__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word ReadWhy2_16,
  MR_Word ModuleName_17,
  MR_Word * IntUses_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_33,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_34,
  MR_Word STATE_VARIABLE_Baggage_0_35,
  MR_Word * STATE_VARIABLE_Baggage_36,
  MR_Word STATE_VARIABLE_AugCompUnit_0_37,
  MR_Word * STATE_VARIABLE_AugCompUnit_38)
{
  MR_Word ReturnTimestamp_23;
  MR_Word HaveReadInt2_24;
  MR_Word Errors_28;
  MR_Word STATE_VARIABLE_Baggage_53_53;
  MR_Word MaybeTimestampMap_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 4))));

  if ((MaybeTimestampMap_92 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_23 = (MR_Integer) 1;
  else
    ReturnTimestamp_23 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int2_10_p_0(ProgressStream_14, Globals_15, (MR_Integer) 1, ModuleName_17, ReturnTimestamp_23, &HaveReadInt2_24, STATE_VARIABLE_HaveReadModuleMaps_0_33, STATE_VARIABLE_HaveReadModuleMaps_34);
  if (((MR_tag((MR_Word) HaveReadInt2_24)) == (MR_Integer) 1))
  {
    Errors_28 = ((MR_Word) ((MR_hl_field(1, HaveReadInt2_24, (MR_Integer) 1))));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_18);
    STATE_VARIABLE_Baggage_53_53 = STATE_VARIABLE_Baggage_0_35;
    *STATE_VARIABLE_AugCompUnit_38 = STATE_VARIABLE_AugCompUnit_0_37;
  }
  else
  {
    MR_Word MaybeTimestamp_26 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_24, (MR_Integer) 1))));
    MR_Word ParseTreeInt2_27 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_24, (MR_Integer) 2))));
    MR_Word GrabbedFile_29;
    MR_Word STATE_VARIABLE_Baggage_44_44;
    MR_Word STATE_VARIABLE_AugCompUnit_45_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word GrabbedFileMap0_100;
    MR_Word GrabbedFileMap_101;
    MR_String Var_108;
    MR_String Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Box conv3_IntUses_18;
    MR_Box conv2__ImpUses_32;

    Errors_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_24, (MR_Integer) 3))));
    {
      GrabbedFile_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GrabbedFile_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GrabbedFile_29, 1) = ((MR_Box) (ParseTreeInt2_27));
      MR_hl_field(3, GrabbedFile_29, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy2_16));
    }
    GrabbedFileMap0_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 5))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_17)), ((MR_Box) (GrabbedFile_29)), GrabbedFileMap0_100, &GrabbedFileMap_101);
    Var_108 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 0))));
    Var_109 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 1))));
    Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 2))));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 3))));
    Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 4))));
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_35, (MR_Integer) 6))));
    {
      STATE_VARIABLE_Baggage_44_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 0) = ((MR_Box) (Var_108));
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 1) = ((MR_Box) (Var_109));
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 2) = ((MR_Box) (Var_110));
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 3) = ((MR_Box) (Var_111));
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 4) = ((MR_Box) (Var_112));
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 5) = ((MR_Box) (GrabbedFileMap_101));
      MR_hl_field(0, STATE_VARIABLE_Baggage_44_44, 6) = ((MR_Box) (Var_114));
    }
    switch (ReadWhy2_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word IndirectIntSpec_30;

          {
            IndirectIntSpec_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, IndirectIntSpec_30, 0) = ((MR_Box) (ParseTreeInt2_27));
            MR_hl_field(0, IndirectIntSpec_30, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_16));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(IndirectIntSpec_30, STATE_VARIABLE_AugCompUnit_0_37, &STATE_VARIABLE_AugCompUnit_45_45);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IntForOptSpec_31;

          {
            IntForOptSpec_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, IntForOptSpec_31, 0) = ((MR_Box) (ParseTreeInt2_27));
            MR_hl_field(2, IntForOptSpec_31, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_16));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_31, STATE_VARIABLE_AugCompUnit_0_37, &STATE_VARIABLE_AugCompUnit_45_45);
        }
        break;
    }
    Var_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_27, (MR_Integer) 4))));
    Var_49 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_50 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[9]), Var_48, ((MR_Box) (Var_49)), &conv3_IntUses_18, ((MR_Box) (Var_50)), &conv2__ImpUses_32);
    *IntUses_18 = ((MR_Word) (conv3_IntUses_18));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_17, (MR_Integer) 2, (MR_Integer) 4, MaybeTimestamp_26, STATE_VARIABLE_Baggage_44_44, &STATE_VARIABLE_Baggage_53_53);
    Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_27, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_17, Var_54, STATE_VARIABLE_AugCompUnit_45_45, STATE_VARIABLE_AugCompUnit_38);
  }
  parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_28, STATE_VARIABLE_Baggage_53_53, STATE_VARIABLE_Baggage_36);
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_indirect_int2_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
  MR_Word PT2_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT2_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_41));
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
  MR_Box closure = closure_arg;
  MR_Word conv44_STATE_VARIABLE_ReadModules_27;
  MR_Word conv43_STATE_VARIABLE_InclMap_29;
  MR_Word conv42_STATE_VARIABLE_SrcIntImportUseMap_31;
  MR_Word conv41_STATE_VARIABLE_SrcImpImportUseMap_33;
  MR_Word conv40_STATE_VARIABLE_AncestorImportUseMap_35;

  parse_tree__grab_modules__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_STATE_VARIABLE_ReadModules_27, ((MR_Word) (wrapper_arg_4)), &conv43_STATE_VARIABLE_InclMap_29, ((MR_Word) (wrapper_arg_6)), &conv42_STATE_VARIABLE_SrcIntImportUseMap_31, ((MR_Word) (wrapper_arg_8)), &conv41_STATE_VARIABLE_SrcImpImportUseMap_33, ((MR_Word) (wrapper_arg_10)), &conv40_STATE_VARIABLE_AncestorImportUseMap_35);
  *wrapper_arg_3 = ((MR_Box) (conv44_STATE_VARIABLE_ReadModules_27));
  *wrapper_arg_5 = ((MR_Box) (conv43_STATE_VARIABLE_InclMap_29));
  *wrapper_arg_7 = ((MR_Box) (conv42_STATE_VARIABLE_SrcIntImportUseMap_31));
  *wrapper_arg_9 = ((MR_Box) (conv41_STATE_VARIABLE_SrcImpImportUseMap_33));
  *wrapper_arg_11 = ((MR_Box) (conv40_STATE_VARIABLE_AncestorImportUseMap_35));
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
  MR_Box closure = closure_arg;
  MR_Word conv34_STATE_VARIABLE_ReadModules_48;
  MR_Word conv33_STATE_VARIABLE_InclMap_50;
  MR_Word conv32_STATE_VARIABLE_SrcIntImportUseMap_52;
  MR_Word conv31_STATE_VARIABLE_SrcImpImportUseMap_54;
  MR_Word conv30_STATE_VARIABLE_AncestorImportUseMap_56;

  parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_ReadModules_48, ((MR_Word) (wrapper_arg_4)), &conv33_STATE_VARIABLE_InclMap_50, ((MR_Word) (wrapper_arg_6)), &conv32_STATE_VARIABLE_SrcIntImportUseMap_52, ((MR_Word) (wrapper_arg_8)), &conv31_STATE_VARIABLE_SrcImpImportUseMap_54, ((MR_Word) (wrapper_arg_10)), &conv30_STATE_VARIABLE_AncestorImportUseMap_56);
  *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_ReadModules_48));
  *wrapper_arg_5 = ((MR_Box) (conv33_STATE_VARIABLE_InclMap_50));
  *wrapper_arg_7 = ((MR_Box) (conv32_STATE_VARIABLE_SrcIntImportUseMap_52));
  *wrapper_arg_9 = ((MR_Box) (conv31_STATE_VARIABLE_SrcImpImportUseMap_54));
  *wrapper_arg_11 = ((MR_Box) (conv30_STATE_VARIABLE_AncestorImportUseMap_56));
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
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_ReadModules_23;
  MR_Word conv23_STATE_VARIABLE_InclMap_25;
  MR_Word conv22_STATE_VARIABLE_SrcIntImportUseMap_27;
  MR_Word conv21_STATE_VARIABLE_SrcImpImportUseMap_29;
  MR_Word conv20_STATE_VARIABLE_AncestorImportUseMap_31;

  parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_31));
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
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ReadModules_23;
  MR_Word conv13_STATE_VARIABLE_InclMap_25;
  MR_Word conv12_STATE_VARIABLE_SrcIntImportUseMap_27;
  MR_Word conv11_STATE_VARIABLE_SrcImpImportUseMap_29;
  MR_Word conv10_STATE_VARIABLE_AncestorImportUseMap_31;

  parse_tree__grab_modules__record_includes_imports_uses_in_direct_int1_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_31));
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
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ReadModules_23;
  MR_Word conv3_STATE_VARIABLE_InclMap_25;
  MR_Word conv2_STATE_VARIABLE_SrcIntImportUseMap_27;
  MR_Word conv1_STATE_VARIABLE_SrcImpImportUseMap_29;
  MR_Word conv0_STATE_VARIABLE_AncestorImportUseMap_31;

  parse_tree__grab_modules__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_31));
}

static void MR_CALL 
parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugCompUnit_3,
  MR_Word * ImportAccessibilityInfo_4)
{
  MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_6 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, (MR_Integer) 1))));
  MR_Word DirectIntSpecs_7 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, (MR_Integer) 2))));
  MR_Word IndirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, (MR_Integer) 3))));
  MR_Word PlainOpts_9 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, (MR_Integer) 4))));
  MR_Word IntForOptSpecs_11 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, (MR_Integer) 6))));
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
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), &STATE_VARIABLE_InclMap_22_22);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &STATE_VARIABLE_SrcIntImportUseMap_23_23);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &STATE_VARIABLE_SrcImpImportUseMap_24_24);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &STATE_VARIABLE_AncestorImportUseMap_25_25);
  ModuleName_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, (MR_Integer) 0))));
  Ancestors_20 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_19);
  parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_21_21, &STATE_VARIABLE_ReadModules_26_26, STATE_VARIABLE_InclMap_22_22, &STATE_VARIABLE_InclMap_27_27, STATE_VARIABLE_SrcIntImportUseMap_23_23, &STATE_VARIABLE_SrcIntImportUseMap_28_28, STATE_VARIABLE_SrcImpImportUseMap_24_24, &STATE_VARIABLE_SrcImpImportUseMap_29_29, STATE_VARIABLE_AncestorImportUseMap_25_25, &STATE_VARIABLE_AncestorImportUseMap_30_30);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_31, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_26_26)), &conv9_STATE_VARIABLE_ReadModules_32_32, ((MR_Box) (STATE_VARIABLE_InclMap_27_27)), &conv8_STATE_VARIABLE_InclMap_33_33, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_28_28)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_29_29)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_30_30)), &conv5_STATE_VARIABLE_AncestorImportUseMap_36_36);
  STATE_VARIABLE_ReadModules_32_32 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_32_32));
  STATE_VARIABLE_InclMap_33_33 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_33_33));
  STATE_VARIABLE_SrcIntImportUseMap_34_34 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34));
  STATE_VARIABLE_SrcImpImportUseMap_35_35 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35));
  STATE_VARIABLE_AncestorImportUseMap_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_36_36));
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[1]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_2));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_32_32)), &conv19_STATE_VARIABLE_ReadModules_38_38, ((MR_Box) (STATE_VARIABLE_InclMap_33_33)), &conv18_STATE_VARIABLE_InclMap_39_39, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_34_34)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_35_35)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_36_36)), &conv15_STATE_VARIABLE_AncestorImportUseMap_42_42);
  STATE_VARIABLE_ReadModules_38_38 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_38_38));
  STATE_VARIABLE_InclMap_39_39 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_39_39));
  STATE_VARIABLE_SrcIntImportUseMap_40_40 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40));
  STATE_VARIABLE_SrcImpImportUseMap_41_41 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41));
  STATE_VARIABLE_AncestorImportUseMap_42_42 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_42_42));
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[2]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_3));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_43, IndirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_38_38)), &conv29_STATE_VARIABLE_ReadModules_44_44, ((MR_Box) (STATE_VARIABLE_InclMap_39_39)), &conv28_STATE_VARIABLE_InclMap_45_45, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_40_40)), &conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_41_41)), &conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_42_42)), &conv25_STATE_VARIABLE_AncestorImportUseMap_48_48);
  STATE_VARIABLE_ReadModules_44_44 = ((MR_Word) (conv29_STATE_VARIABLE_ReadModules_44_44));
  STATE_VARIABLE_InclMap_45_45 = ((MR_Word) (conv28_STATE_VARIABLE_InclMap_45_45));
  STATE_VARIABLE_SrcIntImportUseMap_46_46 = ((MR_Word) (conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46));
  STATE_VARIABLE_SrcImpImportUseMap_47_47 = ((MR_Word) (conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47));
  STATE_VARIABLE_AncestorImportUseMap_48_48 = ((MR_Word) (conv25_STATE_VARIABLE_AncestorImportUseMap_48_48));
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[3]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_4));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, PlainOpts_9, ((MR_Box) (STATE_VARIABLE_ReadModules_44_44)), &conv39_STATE_VARIABLE_ReadModules_50_50, ((MR_Box) (STATE_VARIABLE_InclMap_45_45)), &conv38_STATE_VARIABLE_InclMap_51_51, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_46_46)), &conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_47_47)), &conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_48_48)), &conv35_STATE_VARIABLE_AncestorImportUseMap_54_54);
  STATE_VARIABLE_ReadModules_50_50 = ((MR_Word) (conv39_STATE_VARIABLE_ReadModules_50_50));
  STATE_VARIABLE_InclMap_51_51 = ((MR_Word) (conv38_STATE_VARIABLE_InclMap_51_51));
  STATE_VARIABLE_SrcIntImportUseMap_52_52 = ((MR_Word) (conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52));
  STATE_VARIABLE_SrcImpImportUseMap_53_53 = ((MR_Word) (conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53));
  STATE_VARIABLE_AncestorImportUseMap_54_54 = ((MR_Word) (conv35_STATE_VARIABLE_AncestorImportUseMap_54_54));
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[4]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__grab_modules__aug_comp_unit_get_import_accessibility_info_2_p_0_5));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Ancestors_20));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ReadModules_56_56));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InclMap_57_57));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_58_58));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_59_59));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_60_60));
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_IntImportUseMap_15;
  MR_Word conv2_STATE_VARIABLE_ImpImportUseMap_17;

  parse_tree__grab_modules__record_avail_in_import_use_map_entry_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_IntImportUseMap_15, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_ImpImportUseMap_17);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportUseMap_15));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_ImpImportUseMap_17));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__grab_modules__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(
  MR_Word ParseTreeModuleSrc_12,
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
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_12, (MR_Integer) 0))));
  MR_Word InclMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_12, (MR_Integer) 2))));
  MR_Word ImportUseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_12, (MR_Integer) 3))));
  MR_Box conv1_STATE_VARIABLE_MaybeAbstractInclMap_57;
  MR_Box conv5_STATE_VARIABLE_SrcIntImportUseMap_59;
  MR_Box conv4_STATE_VARIABLE_SrcImpImportUseMap_61;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), STATE_VARIABLE_ReadModules_0_54, STATE_VARIABLE_ReadModules_55);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_9[0]), InclMap_20, ((MR_Box) (STATE_VARIABLE_MaybeAbstractInclMap_0_56)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_57);
  *STATE_VARIABLE_MaybeAbstractInclMap_57 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_57));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[8]), ImportUseMap_21, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_0_58)), &conv5_STATE_VARIABLE_SrcIntImportUseMap_59, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_0_60)), &conv4_STATE_VARIABLE_SrcImpImportUseMap_61);
  *STATE_VARIABLE_SrcIntImportUseMap_59 = ((MR_Word) (conv5_STATE_VARIABLE_SrcIntImportUseMap_59));
  *STATE_VARIABLE_SrcImpImportUseMap_61 = ((MR_Word) (conv4_STATE_VARIABLE_SrcImpImportUseMap_61));
  *STATE_VARIABLE_AncestorImportUseMap_63 = STATE_VARIABLE_AncestorImportUseMap_0_62;
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Specs_38;

  parse_tree__grab_modules__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Specs_38);
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_38));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Specs_38;

  parse_tree__grab_modules__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Specs_38);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_38));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_MissingAncestorMap_35;

  parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_MissingAncestorMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MissingAncestorMap_35));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_137;

  parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1288__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_137);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_137));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_MissingAncestorMap_35;

  parse_tree__grab_modules__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_MissingAncestorMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_MissingAncestorMap_35));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_127;

  parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__1276__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_127);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_127));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  parse_tree__grab_modules__report_any_missing_includes_for_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__grab_modules__check_imports_accessibility_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word ImportAccessibilityInfo_5,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 0))));
  MR_Word ModuleNameContext_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 1))));
  MR_Word ReadModules_9 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_5, (MR_Integer) 0))));
  MR_Word SeenIncludes_10 = ((MR_Unsigned) ((MR_hl_field(0, ImportAccessibilityInfo_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word InclMap_11 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_5, (MR_Integer) 2))));
  MR_Word SrcIntImportUseMap_12 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_5, (MR_Integer) 3))));
  MR_Word SrcImpImportUseMap_13 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_5, (MR_Integer) 4))));
  MR_Word AncestorImportUseMap_14 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_5, (MR_Integer) 5))));
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
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (ModuleNameContext_8));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__grab_modules__report_any_missing_includes_7_p_0(ReadModules_9, SeenIncludes_10, InclMap_11, ModuleName_7, Var_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_24_24);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (ReadModules_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (SeenIncludes_10));
    MR_hl_field(0, Var_26, 5) = ((MR_Box) (InclMap_11));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), Var_26, SrcIntImportUseMap_12, ((MR_Box) (STATE_VARIABLE_Specs_24_24)), &conv1_STATE_VARIABLE_Specs_27_27);
  STATE_VARIABLE_Specs_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_27_27));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), Var_26, SrcImpImportUseMap_13, ((MR_Box) (STATE_VARIABLE_Specs_27_27)), &conv2_STATE_VARIABLE_Specs_29_29);
  STATE_VARIABLE_Specs_29_29 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_29_29));
  mercury__map__union_4_p_1((MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[6]), SrcIntImportUseMap_12, AncestorImportUseMap_14, &SrcIntAncImportUseMap_15);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_3));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (SrcIntAncImportUseMap_15));
  }
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_31, SrcIntImportUseMap_12, ((MR_Box) (Var_32)), &conv5_SrcIntMissingAncestorMap_16);
  SrcIntMissingAncestorMap_16 = ((MR_Word) (conv5_SrcIntMissingAncestorMap_16));
  mercury__map__union_4_p_1((MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[7]), SrcIntAncImportUseMap_15, SrcImpImportUseMap_13, &SrcIntImpImportUseMap_17);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_5));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (SrcIntImpImportUseMap_17));
  }
  Var_36 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_35, SrcImpImportUseMap_13, ((MR_Box) (Var_36)), &conv8_SrcImpMissingAncestorMap0_18);
  SrcImpMissingAncestorMap0_18 = ((MR_Word) (conv8_SrcImpMissingAncestorMap0_18));
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestorMap_16, &SrcIntMissingAncestors_19);
  mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestors_19, SrcImpMissingAncestorMap0_18, &SrcImpMissingAncestorMap_20);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (SrcImpImportUseMap_13));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[2]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_6));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (Var_40));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), Var_38, SrcIntMissingAncestorMap_16, ((MR_Box) (STATE_VARIABLE_Specs_29_29)), &conv10_STATE_VARIABLE_Specs_39_39);
  STATE_VARIABLE_Specs_39_39 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_39_39));
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[2]));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__grab_modules__check_imports_accessibility_3_p_0_7));
    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_41, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), Var_41, SrcImpMissingAncestorMap_20, ((MR_Box) (STATE_VARIABLE_Specs_39_39)), &conv12_STATE_VARIABLE_Specs_21);
  *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_16;

  parse_tree__grab_modules__report_missing_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Specs_13;

  parse_tree__grab_modules__report_abstract_include_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_13));
}

static MR_bool MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__grab_modules__is_non_abstract_include_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(1, Module_11, (MR_Integer) 0))));
      MR_String SubModule_15 = ((MR_String) ((MR_hl_field(1, Module_11, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Word IncludeContexts_16;
      MR_Box conv0_IncludeContexts_16;
      MR_Word next_value_of_Module_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), InclMap_10, ((MR_Box) (Module_11)), &conv0_IncludeContexts_16);
      if (succeeded)
      {
        IncludeContexts_16 = ((MR_Word) (conv0_IncludeContexts_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIncludeContext_17 = ((MR_Word) ((MR_hl_field(0, IncludeContexts_16, (MR_Integer) 0))));
        MR_Word TailIncludeContexts_18 = ((MR_Word) ((MR_hl_field(0, IncludeContexts_16, (MR_Integer) 1))));
        MR_Word IncludeContextsList_19;

        {
          IncludeContextsList_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IncludeContextsList_19, 0) = ((MR_Box) (HeadIncludeContext_17));
          MR_hl_field(1, IncludeContextsList_19, 1) = ((MR_Box) (TailIncludeContexts_18));
        }
        succeeded = mercury__list__any_true_2_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[5]), IncludeContextsList_19);
        if (succeeded)
          STATE_VARIABLE_Specs_25_25 = STATE_VARIABLE_Specs_0_21;
        else
        {
          MR_Word Var_24;
          MR_Box conv2_STATE_VARIABLE_Specs_25_25;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[0]));
            MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_7_p_0_2));
            MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_24, 3) = ((MR_Box) (ParentModule_14));
            MR_hl_field(0, Var_24, 4) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), Var_24, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv2_STATE_VARIABLE_Specs_25_25);
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
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_4[1]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_7_p_0_3));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (SeenIncludes_9));
            MR_hl_field(0, Var_26, 4) = ((MR_Box) (ParentModule_14));
            MR_hl_field(0, Var_26, 5) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), Var_26, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv4_STATE_VARIABLE_Specs_25_25);
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
parse_tree__grab_modules__module_baggage_add_nonfatal_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 6))));
  MR_Word NonFatalErrorSpecs0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 3))));
  MR_Word NonFatalErrorSpecs_8;
  MR_Word Errors_9;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_String Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  NonFatalErrorSpecs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_4, NonFatalErrorSpecs0_7);
  Var_22 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 4))));
  {
    Errors_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_9, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Errors_9, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Errors_9, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Errors_9, 3) = ((MR_Box) (NonFatalErrorSpecs_8));
    MR_hl_field(0, Errors_9, 4) = ((MR_Box) (Var_26));
  }
  Var_27 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 0))));
  Var_28 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Errors_9));
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  parse_tree__item_util__get_uses_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word Globals_16,
  MR_Word ReadWhy1_17,
  MR_Word ModuleName_18,
  MR_Word * IntUses_19,
  MR_Word * ImpUses_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37,
  MR_Word STATE_VARIABLE_Baggage_0_38,
  MR_Word * STATE_VARIABLE_Baggage_39,
  MR_Word STATE_VARIABLE_AugCompUnit_0_40,
  MR_Word * STATE_VARIABLE_AugCompUnit_41)
{
  MR_Word ReturnTimestamp_25;
  MR_Word HaveReadInt1_26;
  MR_Word MaybeTimestampMap_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_38, (MR_Integer) 4))));

  if ((MaybeTimestampMap_115 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTimestamp_25 = (MR_Integer) 1;
  else
    ReturnTimestamp_25 = (MR_Integer) 0;
  parse_tree__read_modules__maybe_read_module_int1_10_p_0(ProgressStream_15, Globals_16, (MR_Integer) 1, ModuleName_18, ReturnTimestamp_25, &HaveReadInt1_26, STATE_VARIABLE_HaveReadModuleMaps_0_36, STATE_VARIABLE_HaveReadModuleMaps_37);
  if (((MR_tag((MR_Word) HaveReadInt1_26)) == (MR_Integer) 1))
  {
    MR_Word Errors_64 = ((MR_Word) ((MR_hl_field(1, HaveReadInt1_26, (MR_Integer) 1))));

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_19);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_20);
    parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_64, STATE_VARIABLE_Baggage_0_38, STATE_VARIABLE_Baggage_39);
    *STATE_VARIABLE_AugCompUnit_41 = STATE_VARIABLE_AugCompUnit_0_40;
  }
  else
  {
    MR_Word MaybeTimestamp_28 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, (MR_Integer) 1))));
    MR_Word ParseTreeInt1_29 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, (MR_Integer) 2))));
    MR_Word Errors_30 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_26, (MR_Integer) 3))));
    MR_Word GrabbedFile_31;
    MR_Word RecompAvail_32;
    MR_Word STATE_VARIABLE_Baggage_47_47;
    MR_Word STATE_VARIABLE_AugCompUnit_48_48;
    MR_Word STATE_VARIABLE_Baggage_49_49;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Box conv3_IntUses_19;
    MR_Box conv2_ImpUses_20;

    {
      GrabbedFile_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GrabbedFile_31, 0) = ((MR_Box) (ParseTreeInt1_29));
      MR_hl_field(2, GrabbedFile_31, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
    }
    parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(ModuleName_18, GrabbedFile_31, STATE_VARIABLE_Baggage_0_38, &STATE_VARIABLE_Baggage_47_47);
    switch (ReadWhy1_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_33;

          RecompAvail_32 = (MR_Integer) 2;
          {
            DirectIntSpec_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_33, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_33, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_33, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_111;

          RecompAvail_32 = (MR_Integer) 4;
          {
            DirectIntSpec_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_111, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_111, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_111, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_112;

          RecompAvail_32 = (MR_Integer) 1;
          {
            DirectIntSpec_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_112, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_112, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_112, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_113;

          RecompAvail_32 = (MR_Integer) 3;
          {
            DirectIntSpec_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_113, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_113, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_113, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_114;

          RecompAvail_32 = (MR_Integer) 5;
          {
            DirectIntSpec_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DirectIntSpec_114, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(0, DirectIntSpec_114, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(DirectIntSpec_114, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word IntForOptSpec_34;

          RecompAvail_32 = (MR_Integer) 4;
          {
            IntForOptSpec_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, IntForOptSpec_34, 0) = ((MR_Box) (ParseTreeInt1_29));
            MR_hl_field(1, IntForOptSpec_34, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
          }
          parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(IntForOptSpec_34, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          parse_tree__grab_modules__module_baggage_add_errors_3_p_0(Errors_30, STATE_VARIABLE_Baggage_47_47, &STATE_VARIABLE_Baggage_49_49);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word TypeRepnSpec_35;

          RecompAvail_32 = (MR_Integer) 1;
          TypeRepnSpec_35 = (MR_Word) (ParseTreeInt1_29);
          parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(TypeRepnSpec_35, STATE_VARIABLE_AugCompUnit_0_40, &STATE_VARIABLE_AugCompUnit_48_48);
          STATE_VARIABLE_Baggage_49_49 = STATE_VARIABLE_Baggage_47_47;
        }
        break;
    }
    Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_29, (MR_Integer) 4))));
    Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_56 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[4]), Var_54, ((MR_Box) (Var_55)), &conv3_IntUses_19, ((MR_Box) (Var_56)), &conv2_ImpUses_20);
    *IntUses_19 = ((MR_Word) (conv3_IntUses_19));
    *ImpUses_20 = ((MR_Word) (conv2_ImpUses_20));
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_18, (MR_Integer) 1, RecompAvail_32, MaybeTimestamp_28, STATE_VARIABLE_Baggage_49_49, STATE_VARIABLE_Baggage_39);
    Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_29, (MR_Integer) 2))));
    parse_tree__grab_modules__aug_compilation_unit_maybe_add_module_version_numbers_4_p_0(ModuleName_18, Var_59, STATE_VARIABLE_AugCompUnit_48_48, STATE_VARIABLE_AugCompUnit_41);
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
    MR_Word VersionNumbers_8 = ((MR_Word) ((MR_hl_field(1, MaybeVersionNumbers_6, (MR_Integer) 0))));
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AugCompUnit_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_type_repn_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_10,
  MR_Word * STATE_VARIABLE_AugCompUnit_11)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 7))));
  MR_Word PT1_7 = (MR_Word) (X_4);
  MR_Word MN_8 = ((MR_Word) ((MR_hl_field(0, PT1_7, (MR_Integer) 0))));
  MR_Word Map_9;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), ((MR_Box) (MN_8)), ((MR_Box) (X_4)), Map0_6, &Map_9);
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 0))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 1))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 3))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 4))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 5))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_10, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 7) = ((MR_Box) (Map_9));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_int_for_opt_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_15,
  MR_Word * STATE_VARIABLE_AugCompUnit_16)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 6))));
  MR_Word MN_9;
  MR_Word Map_14;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Word Var_86;

  switch (MR_tag((MR_Word) X_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT0_7, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PT1_10 = ((MR_Word) ((MR_hl_field(1, X_4, (MR_Integer) 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT1_10, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PT2_12 = ((MR_Word) ((MR_hl_field(2, X_4, (MR_Integer) 0))));

        MN_9 = ((MR_Word) ((MR_hl_field(0, PT2_12, (MR_Integer) 0))));
      }
      break;
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_14);
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 0))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 1))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 2))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 3))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 4))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 5))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 7))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_15, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 6) = ((MR_Box) (Map_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_86));
  }
}

static void MR_CALL 
parse_tree__grab_modules__aug_compilation_unit_add_direct_int1_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_AugCompUnit_0_11,
  MR_Word * STATE_VARIABLE_AugCompUnit_12)
{
  MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 2))));
  MR_Word PT1_7 = ((MR_Word) ((MR_hl_field(0, X_4, (MR_Integer) 0))));
  MR_Word MN_9 = ((MR_Word) ((MR_hl_field(0, PT1_7, (MR_Integer) 0))));
  MR_Word Map_10;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;

  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 7))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AugCompUnit_0_11, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AugCompUnit_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 2) = ((MR_Box) (Map_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_47));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_errors_3_p_0(
  MR_Word Errors1_4,
  MR_Word STATE_VARIABLE_Baggage_0_23,
  MR_Word * STATE_VARIABLE_Baggage_24)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 6))));
  MR_Word FatalErrors0_7 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 0))));
  MR_Word FatalErrorSpecs0_8 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 1))));
  MR_Word NonFatalErrors0_9 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 2))));
  MR_Word NonFatalErrorSpecs0_10 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 3))));
  MR_Word WarningSpecs0_11 = ((MR_Word) ((MR_hl_field(0, Errors0_6, (MR_Integer) 4))));
  MR_Word FatalErrors1_12 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 0))));
  MR_Word FatalErrorSpecs1_13 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 1))));
  MR_Word NonFatalErrors1_14 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 2))));
  MR_Word NonFatalErrorSpecs1_15 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 3))));
  MR_Word WarningSpecs1_16 = ((MR_Word) ((MR_hl_field(0, Errors1_4, (MR_Integer) 4))));
  MR_Word FatalErrors_17;
  MR_Word FatalErrorSpecs_18;
  MR_Word NonFatalErrors_19;
  MR_Word NonFatalErrorSpecs_20;
  MR_Word WarningSpecs_21;
  MR_Word Errors_22;
  MR_String Var_31;
  MR_String Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

  FatalErrors_17 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors0_7, FatalErrors1_12);
  FatalErrorSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_8, FatalErrorSpecs1_13);
  NonFatalErrors_19 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors0_9, NonFatalErrors1_14);
  NonFatalErrorSpecs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NonFatalErrorSpecs0_10, NonFatalErrorSpecs1_15);
  WarningSpecs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningSpecs0_11, WarningSpecs1_16);
  {
    Errors_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Errors_22, 0) = ((MR_Box) (FatalErrors_17));
    MR_hl_field(0, Errors_22, 1) = ((MR_Box) (FatalErrorSpecs_18));
    MR_hl_field(0, Errors_22, 2) = ((MR_Box) (NonFatalErrors_19));
    MR_hl_field(0, Errors_22, 3) = ((MR_Box) (NonFatalErrorSpecs_20));
    MR_hl_field(0, Errors_22, 4) = ((MR_Box) (WarningSpecs_21));
  }
  Var_31 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 0))));
  Var_32 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_23, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (Errors_22));
  }
}

static void MR_CALL 
parse_tree__grab_modules__module_baggage_add_grabbed_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word FileWhy_6,
  MR_Word STATE_VARIABLE_Baggage_0_10,
  MR_Word * STATE_VARIABLE_Baggage_11)
{
  MR_Word GrabbedFileMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 5))));
  MR_Word GrabbedFileMap_9;
  MR_String Var_18;
  MR_String Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;

  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (FileWhy_6)), GrabbedFileMap0_8, &GrabbedFileMap_9);
  Var_18 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 0))));
  Var_19 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 1))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 3))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_10, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Baggage_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (GrabbedFileMap_9));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
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
  MR_Word MaybeTimestampMap_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 4))));

  if ((MaybeTimestampMap_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
  else
  {
    MR_Word TimestampMap0_13 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_12, (MR_Integer) 0))));

    if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Baggage_19 = STATE_VARIABLE_Baggage_0_18;
    else
    {
      MR_Word Timestamp_14 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_10, (MR_Integer) 0))));
      MR_Word FileKind_15;
      MR_Word TimestampInfo_16;
      MR_Word TimestampMap_17;
      MR_Word Var_21;
      MR_String Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_34;

      {
        FileKind_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FileKind_15, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_8));
      }
      {
        TimestampInfo_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TimestampInfo_16, 0) = ((MR_Box) (FileKind_15));
        MR_hl_field(0, TimestampInfo_16, 1) = ((MR_Box) (Timestamp_14));
        MR_hl_field(0, TimestampInfo_16, 2) = (MR_Box) ((MR_Unsigned) (RecompAvail_9));
      }
      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (TimestampInfo_16)), TimestampMap0_13, &TimestampMap_17);
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (TimestampMap_17));
      }
      Var_28 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 0))));
      Var_29 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 1))));
      Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 2))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 3))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 5))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Baggage_0_18, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Baggage_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_accessibility_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____import_accessibility_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_accessibility_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____import_accessibility_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____import_and_or_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____import_and_or_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____import_or_use_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____import_or_use_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____include_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____include_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____maybe_abstract_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____maybe_abstract_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____maybe_opt_file_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____maybe_opt_file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____missing_ancestor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____missing_ancestor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____missing_ancestor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____missing_ancestor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____missing_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____missing_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____module_import_or_use_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____module_import_or_use_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____module_inclusion_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____module_inclusion_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____parent_or_ancestor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____parent_or_ancestor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____read_decision_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____read_decision_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____read_decision_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____read_decision_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__grab_modules____Unify____seen_includes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__grab_modules____Unify____seen_includes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__grab_modules____Compare____seen_includes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__grab_modules____Compare____seen_includes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_maybe_opt_file_error_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_map_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_where_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_module_import_or_use_map_0);
	MR_register_type_ctor_info(&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_module_inclusion_map_0);
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
