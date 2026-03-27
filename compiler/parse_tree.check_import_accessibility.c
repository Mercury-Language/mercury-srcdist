/*
** Automatically generated from `check_import_accessibility.m'
** by the Mercury compiler,
** version rotd-2026-03-27
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


// :- module parse_tree.check_import_accessibility.
// :- implementation.

/*
INIT mercury__parse_tree__check_import_accessibility__init
ENDINIT
*/

#include "parse_tree.check_import_accessibility.mih"


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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_import_use.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__maybe__pti_maybe_1__plain_parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_import_accessibility_info_0_0[6];

static const MR_ConstString parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_names_import_accessibility_info_0_0[6];

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_import_accessibility_info_0_0[6];

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_accessibility_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_import_accessibility_info_0_0[1];

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_import_accessibility_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_import_accessibility_info_0[1];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_accessibility_info_0[1];

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_0;

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_1;

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_2;

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_import_and_or_use_0[3];

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_import_and_or_use_0[3];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_and_or_use_0[3];

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_import_or_use_context_0_0[2];

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_import_or_use_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_or_use_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_import_or_use_context_0_0[1];

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_import_or_use_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_import_or_use_context_0[1];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_or_use_context_0[1];

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_include_context_0_0[2];

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_include_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_include_context_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_include_context_0_0[1];

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_include_context_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_include_context_0[1];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_include_context_0[1];

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_0;

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_maybe_abstract_section_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_maybe_abstract_section_0[2];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_maybe_abstract_section_0[2];

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_missing_ancestor_info_0_0[4];

static const MR_ConstString parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_names_missing_ancestor_info_0_0[4];

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_missing_ancestor_info_0_0[4];

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_ancestor_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_ancestor_info_0_0[1];

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_ancestor_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_ancestor_info_0[1];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_ancestor_info_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0;

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_missing_where_0_0[1];

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_0;

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_1;

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_1[1];

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_where_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_where_0[2];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_where_0[2];

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_0;

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_parent_or_ancestor_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_parent_or_ancestor_0[2];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_parent_or_ancestor_0[2];

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_0;

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_seen_includes_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_seen_includes_0[2];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_seen_includes_0[2];

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__451__1_2_p_0(
  MR_Word Ancestors_8,
  MR_Word ModuleName_13);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__436__1_2_p_0(
  MR_Word Ancestors_8,
  MR_Word ModuleName_13);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__412__1_2_p_0(
  MR_Word Ancestors_8,
  MR_Word ModuleName_13);

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__639__1_3_p_0(
  MR_Word HeadVar__1_145,
  MR_Word HeadVar__2_146,
  MR_Word * HeadVar__3_147);

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__627__1_3_p_0(
  MR_Word HeadVar__1_135,
  MR_Word HeadVar__2_136,
  MR_Word * HeadVar__3_137);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____seen_includes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____seen_includes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____parent_or_ancestor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____maybe_abstract_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____include_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____include_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_or_use_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_or_use_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_and_or_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__check_import_accessibility__wrap_module_name_1_f_0(
  MR_Word Module_3);

static MR_Word MR_CALL 
parse_tree__check_import_accessibility__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2);

static void MR_CALL 
parse_tree__check_import_accessibility__report_missing_include_6_p_0(
  MR_Word SeenIncludes_7,
  MR_Word ParentModule_8,
  MR_String SubModule_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_import_accessibility__report_abstract_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word ModuleName_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static MR_Box MR_CALL 
parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0(
  MR_Word ModuleName_9,
  MR_Word MissingWhere_10,
  MR_Word MissingModuleName_11,
  MR_Word MissingAncestorInfo_12,
  MR_Word STATE_VARIABLE_ModulesToAdd_0_40,
  MR_Word * STATE_VARIABLE_ModulesToAdd_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0(
  MR_Word CurrentModule_8,
  MR_Word ParentOrAncestor_9,
  MR_Word ImportUseMap_10,
  MR_Word ImportedModule_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_MissingAncestorMap_0_34,
  MR_Word * STATE_VARIABLE_MissingAncestorMap_35);

static void MR_CALL 
parse_tree__check_import_accessibility__update_iu_and_least_context_5_p_0(
  MR_Word IoUC_6,
  MR_Word STATE_VARIABLE_ImportAndOrUse_0_11,
  MR_Word * STATE_VARIABLE_ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_LeastContext_0_13,
  MR_Word * STATE_VARIABLE_LeastContext_14);

static void MR_CALL 
parse_tree__check_import_accessibility__record_avail_in_import_use_map_entry_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_14,
  MR_Word * STATE_VARIABLE_IntImportUseMap_15,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_16,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_17);

static void MR_CALL 
parse_tree__check_import_accessibility__record_avail_in_section_6_p_0(
  MR_Word ModuleName_7,
  MR_Word SectionImportOrUse_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_15,
  MR_Word * STATE_VARIABLE_IntImportUseMap_16,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_17,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_18);

static void MR_CALL 
parse_tree__check_import_accessibility__record_avail_5_p_0(
  MR_Word ModuleName_6,
  MR_Word ImportOrUse_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_15,
  MR_Word * STATE_VARIABLE_ImportUseMap_16);

static void MR_CALL 
parse_tree__check_import_accessibility__record_include_6_p_0(
  MR_Word MaybeAbsSectionInt_7,
  MR_Word MaybeMaybeAbsSectionImp_8,
  MR_Word ModuleName_9,
  MR_Word InclInfo_10,
  MR_Word STATE_VARIABLE_InclMap_0_22,
  MR_Word * STATE_VARIABLE_InclMap_23);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_plain_opt_4_p_0(
  MR_Word Ancestors_5,
  MR_Word ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_35,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_36);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_6(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0(
  MR_Word Ancestors_9,
  MR_Word IntForOptSpec_10,
  MR_Word STATE_VARIABLE_ReadModules_0_20,
  MR_Word * STATE_VARIABLE_ReadModules_21,
  MR_Word STATE_VARIABLE_InclMap_0_22,
  MR_Word * STATE_VARIABLE_InclMap_23,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_24,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_25);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word IndirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word IndirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word IndirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word DirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_ancestor_int_spec_8_p_0(
  MR_Word Ancestors_9,
  MR_Word AncestorSpec_10,
  MR_Word STATE_VARIABLE_ReadModules_0_16,
  MR_Word * STATE_VARIABLE_ReadModules_17,
  MR_Word STATE_VARIABLE_InclMap_0_18,
  MR_Word * STATE_VARIABLE_InclMap_19,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_20,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_21);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0(
  MR_Word Ancestors_9,
  MR_Word ParseTreeInt0_10,
  MR_Word STATE_VARIABLE_ReadModules_0_41,
  MR_Word * STATE_VARIABLE_ReadModules_42,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_43,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_44,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_45,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_46);

static void MR_CALL 
parse_tree__check_import_accessibility__record_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word Module_11,
  MR_Word Contexts_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0(
  MR_Word ParseTreeModuleSrc_10,
  MR_Word STATE_VARIABLE_ReadModules_0_51,
  MR_Word * STATE_VARIABLE_ReadModules_52,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_53,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_54,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_55,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_56,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_57,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_58);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_accessibility_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_accessibility_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____seen_includes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____seen_includes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_1[63][2];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_2[11][3];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_4[7][9];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_5[15][5];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_6[4][11];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_7[1][7];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_8[1][4];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_9[2][8];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_10[2][10];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_11[1][6];




static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_1[63][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the interface"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the absence of an"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "prevents access"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for its"))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Adding such a declaration would obsolete"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[34])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a submodule named"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but it is"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "visible only to its other submodules."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a submodule"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a visible submodule"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not have"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[1])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_8[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_11[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_11[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_9[1])),
    ((MR_Box) (parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_9[1])),
    ((MR_Box) (parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[13])),
    ((MR_Box) (parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[14])),
    ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_4[7][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__maybe__pti_maybe_1__plain_parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int3_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_5[15][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[1])))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[1])))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_6[4][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_where_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_9[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_10[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_parent_or_ancestor_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_11[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__maybe__pti_maybe_1__plain_parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_import_accessibility_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_seen_includes_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)
};

static const MR_ConstString parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_names_import_accessibility_info_0_0[6] = {
  (MR_String) "iai_read_modules",
  (MR_String) "iai_seen_includes",
  (MR_String) "iai_inclusion_map",
  (MR_String) "iai_src_int_import_use_map",
  (MR_String) "iai_src_imp_import_use_map",
  (MR_String) "iai_ancestor_import_use_map"
};

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_import_accessibility_info_0_0[6] = {
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

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_accessibility_info_0_0 = {
  (MR_String) "import_accessibility_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_import_accessibility_info_0_0,
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_names_import_accessibility_info_0_0,
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_import_accessibility_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_import_accessibility_info_0_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_accessibility_info_0_0 };

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_import_accessibility_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_import_accessibility_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_import_accessibility_info_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_accessibility_info_0_0 };

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_accessibility_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_accessibility_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____import_accessibility_info_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____import_accessibility_info_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "import_accessibility_info",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_import_accessibility_info_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_import_accessibility_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_accessibility_info_0,

};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_0 = {
  (MR_String) "import_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_1 = {
  (MR_String) "use_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_2 = {
  (MR_String) "import_and_use",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_import_and_or_use_0[3] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_0,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_import_and_or_use_0[3] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_2,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_0,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_import_and_or_use_0_1
};

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_and_or_use_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____import_and_or_use_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____import_and_or_use_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "import_and_or_use",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_import_and_or_use_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_import_and_or_use_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_and_or_use_0,

};

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_import_or_use_context_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_or_use_context_0_0 = {
  (MR_String) "import_or_use_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_import_or_use_context_0_0,
  NULL,
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_import_or_use_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_import_or_use_context_0_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_or_use_context_0_0 };

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_import_or_use_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_import_or_use_context_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_import_or_use_context_0_0 };

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_or_use_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____import_or_use_context_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____import_or_use_context_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "import_or_use_context",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_import_or_use_context_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_import_or_use_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_import_or_use_context_0,

};

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_include_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_include_context_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_include_context_0_0 = {
  (MR_String) "include_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_include_context_0_0,
  NULL,
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_include_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_include_context_0_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_include_context_0_0 };

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_include_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_include_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_include_context_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_include_context_0_0 };

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_include_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____include_context_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____include_context_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "include_context",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_include_context_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_include_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_include_context_0,

};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_0 = {
  (MR_String) "non_abstract_section",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_1 = {
  (MR_String) "abstract_section",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_maybe_abstract_section_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_0,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_maybe_abstract_section_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_maybe_abstract_section_0_0
};

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_maybe_abstract_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____maybe_abstract_section_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____maybe_abstract_section_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "maybe_abstract_section",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_maybe_abstract_section_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_maybe_abstract_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_maybe_abstract_section_0,

};

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_missing_ancestor_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_parent_or_ancestor_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_names_missing_ancestor_info_0_0[4] = {
  (MR_String) "mai_modules",
  (MR_String) "mai_max_depth",
  (MR_String) "mai_import_use",
  (MR_String) "mai_least_context"
};

static const MR_DuArgLocn parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_missing_ancestor_info_0_0[4] = {
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

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_ancestor_info_0_0 = {
  (MR_String) "missing_ancestor_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_missing_ancestor_info_0_0,
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_names_missing_ancestor_info_0_0,
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_locns_missing_ancestor_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_ancestor_info_0_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_ancestor_info_0_0 };

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_ancestor_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_ancestor_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_ancestor_info_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_ancestor_info_0_0 };

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_ancestor_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____missing_ancestor_info_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____missing_ancestor_info_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "missing_ancestor_info",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_ancestor_info_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_ancestor_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_ancestor_info_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____missing_ancestor_map_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____missing_ancestor_map_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "missing_ancestor_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_missing_where_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0) };

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_0 = {
  (MR_String) "missing_in_src_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__field_types_missing_where_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_1 = {
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

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_0[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_1 };

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_1[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_0 };

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_where_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_where_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_0
};

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_where_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____missing_where_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____missing_where_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "missing_where",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_where_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_where_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_where_0,

};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_module_import_or_use_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____module_import_or_use_map_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____module_import_or_use_map_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "module_import_or_use_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_module_inclusion_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____module_inclusion_map_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____module_inclusion_map_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "module_inclusion_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__check_import_accessibility__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_0 = {
  (MR_String) "poa_parent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_1 = {
  (MR_String) "poa_ancestor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_0,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_parent_or_ancestor_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_parent_or_ancestor_0_0
};

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_parent_or_ancestor_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_parent_or_ancestor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____parent_or_ancestor_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____parent_or_ancestor_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "parent_or_ancestor",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_parent_or_ancestor_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_parent_or_ancestor_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_parent_or_ancestor_0,

};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_0 = {
  (MR_String) "seen_only_int_includes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_1 = {
  (MR_String) "seen_all_includes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_seen_includes_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_0,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_seen_includes_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_functor_desc_seen_includes_0_0
};

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_seen_includes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_seen_includes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_import_accessibility____Unify____seen_includes_0_0_10001)),
  ((MR_Box) (parse_tree__check_import_accessibility____Compare____seen_includes_0_0_10001)),
  (MR_String) "parse_tree.check_import_accessibility",
  (MR_String) "seen_includes",
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_name_ordered_seen_includes_0 },
  { parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__enum_ordinal_ordered_seen_includes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_seen_includes_0,

};

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__451__1_2_p_0(
  MR_Word Ancestors_8,
  MR_Word ModuleName_13)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_8, ((MR_Box) (ModuleName_13)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__436__1_2_p_0(
  MR_Word Ancestors_8,
  MR_Word ModuleName_13)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_8, ((MR_Box) (ModuleName_13)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__412__1_2_p_0(
  MR_Word Ancestors_8,
  MR_Word ModuleName_13)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_8, ((MR_Box) (ModuleName_13)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__639__1_3_p_0(
  MR_Word HeadVar__1_145,
  MR_Word HeadVar__2_146,
  MR_Word * HeadVar__3_147)
{
  MR_Word HeadA_149 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_145, 0))));
  MR_Word TailA_150 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_145, 1))));
  MR_Word HeadB_151 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_146, 0))));
  MR_Word TailB_152 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_146, 1))));
  MR_Word Var_153;
  MR_Word Var_154;

  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (HeadB_151));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) (TailB_152));
  }
  Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), TailA_150, Var_154);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_147 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadA_149));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_153));
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__627__1_3_p_0(
  MR_Word HeadVar__1_135,
  MR_Word HeadVar__2_136,
  MR_Word * HeadVar__3_137)
{
  MR_Word HeadA_139 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_135, 0))));
  MR_Word TailA_140 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_135, 1))));
  MR_Word HeadB_141 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_136, 0))));
  MR_Word TailB_142 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_136, 1))));
  MR_Word Var_143;
  MR_Word Var_144;

  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (HeadB_141));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (TailB_142));
  }
  Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), TailA_140, Var_144);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_137 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadA_139));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_143));
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____seen_includes_0_0(
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
parse_tree__check_import_accessibility____Unify____seen_includes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____parent_or_ancestor_0_0(
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
parse_tree__check_import_accessibility____Unify____parent_or_ancestor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_inclusion_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_inclusion_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_import_or_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_import_or_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_where_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
parse_tree__check_import_accessibility____Unify____missing_ancestor_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____maybe_abstract_section_0_0(
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
parse_tree__check_import_accessibility____Unify____maybe_abstract_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____include_context_0_0(
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
parse_tree__check_import_accessibility____Unify____include_context_0_0(
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
parse_tree__check_import_accessibility____Compare____import_or_use_context_0_0(
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
parse_tree__check_import_accessibility____Unify____import_or_use_context_0_0(
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
parse_tree__check_import_accessibility____Compare____import_and_or_use_0_0(
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
parse_tree__check_import_accessibility____Unify____import_and_or_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_accessibility_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_accessibility_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__check_import_accessibility__wrap_module_name_1_f_0(
  MR_Word Module_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Module_3));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__check_import_accessibility__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

  return Context_4;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2)
{
  MR_bool succeeded;
  MR_Word MaybeAbstractInclude_3 = ((MR_Unsigned) ((MR_hl_field(0, IncludeContext_2, 0))) & (MR_Integer) 1);

  succeeded = (MaybeAbstractInclude_3 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__report_missing_include_6_p_0(
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
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  switch (SeenIncludes_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      SubmodulePieces_12 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[53]));
      break;
    case (MR_Integer) 0:
      SubmodulePieces_12 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[55]));
      break;
  }
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (ParentModule_8));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
  Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[59])));
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (SubModule_9));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[62])));
  }
  Var_48 = parse_tree__error_spec__color_as_subject_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[34])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[61])), Var_47);
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubmodulePieces_12, Var_42);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_41);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_35);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[57])), Var_30);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_import_accessibility.report_missing_include\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
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
parse_tree__check_import_accessibility__report_abstract_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_Word Var_40;

  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (ParentModule_6));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[45])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[43])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[42])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (SubModule_7));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[47])));
  }
  Var_27 = parse_tree__error_spec__color_as_subject_1_f_0(Var_28);
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[51])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[34])));
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[49])), Var_39);
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_34);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_26);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_import_accessibility.report_abstract_include\'/5"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_8));
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

static MR_Box MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Context_4;

  conv0_Context_4 = parse_tree__check_import_accessibility__project_out_import_or_use_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Context_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0(
  MR_Word ReadModules_8,
  MR_Word SeenIncludes_9,
  MR_Word InclMap_10,
  MR_Word ModuleName_11,
  MR_Word IoUCs_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word HeadIoUC_14 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, 0))));
  MR_Word TailIoUCs_15 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, 1))));
  MR_Word Contexts_16;
  MR_Word Var_20;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (HeadIoUC_14));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (TailIoUCs_15));
  }
  Contexts_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[10]), Var_20);
  parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0(ReadModules_8, SeenIncludes_9, InclMap_10, ModuleName_11, Contexts_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
}

static MR_Box MR_CALL 
parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__check_import_accessibility__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0(
  MR_Word ModuleName_9,
  MR_Word MissingWhere_10,
  MR_Word MissingModuleName_11,
  MR_Word MissingAncestorInfo_12,
  MR_Word STATE_VARIABLE_ModulesToAdd_0_40,
  MR_Word * STATE_VARIABLE_ModulesToAdd_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_bool succeeded;
  MR_Word DescendantModuleNamesSet_15;
  MR_Word MaxDepth_16;
  MR_Word ImportAndOrUse_17;
  MR_Word LeastContext_18;
  MR_Word DescendantModuleNames_19;
  MR_String ChildOrDescendant_20;
  MR_Word DeclPieces_21;
  MR_Word InTheInterface_23;
  MR_Word DescendantPieces_24;
  MR_String ModuleS_25;
  MR_String DeclarationS_26;
  MR_Word MainPieces_27;
  MR_Word MainMsg_28;
  MR_Word Msgs_38;
  MR_Word Spec_39;
  MR_Word Var_68;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_91;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_105;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_122;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Box conv1_ModuleS_25;
  MR_Box conv2_DeclarationS_26;
  MR_Word IoUCs_30;
  MR_Word TypeInfo_178_178;
  MR_Word SrcImpImportUseMap_29;
  MR_Box conv3_IoUCs_30;

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_ModulesToAdd_41 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MissingModuleName_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ModulesToAdd_0_40));
  }
  DescendantModuleNamesSet_15 = ((MR_Word) ((MR_hl_field(0, MissingAncestorInfo_12, 0))));
  MaxDepth_16 = ((((MR_Unsigned) ((MR_hl_field(0, MissingAncestorInfo_12, 1))) >> 2)) & (MR_Integer) 1);
  ImportAndOrUse_17 = ((MR_Unsigned) ((MR_hl_field(0, MissingAncestorInfo_12, 1))) & (MR_Integer) 3);
  LeastContext_18 = ((MR_Word) ((MR_hl_field(0, MissingAncestorInfo_12, 2))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DescendantModuleNamesSet_15, &DescendantModuleNames_19);
  switch (MaxDepth_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ChildOrDescendant_20 = (MR_String) "descendant";
      break;
    case (MR_Integer) 0:
      ChildOrDescendant_20 = (MR_String) "child";
      break;
  }
  switch (ImportAndOrUse_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      DeclPieces_21 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[10]));
      break;
    case (MR_Integer) 0:
      DeclPieces_21 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[11]));
      break;
    case (MR_Integer) 1:
      DeclPieces_21 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[6]));
      break;
  }
  if ((MissingWhere_10 == (MR_Word) ((MR_Unsigned) 0U)))
    InTheInterface_23 = (MR_Word) ((MR_Unsigned) 0U);
  else
    InTheInterface_23 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[13]));
  DescendantPieces_24 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[9]), DescendantModuleNames_19);
  conv1_ModuleS_25 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DescendantModuleNames_19, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
  ModuleS_25 = ((MR_String) (conv1_ModuleS_25));
  conv2_DeclarationS_26 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DescendantModuleNames_19, ((MR_Box) ((MR_String) "declaration")), ((MR_Box) ((MR_String) "declarations")));
  DeclarationS_26 = ((MR_String) (conv2_DeclarationS_26));
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (ModuleName_9));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[21])));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[14])));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
  }
  Var_86 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[11])));
  Var_97 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[26])));
  {
    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_114, 1) = ((MR_Box) (MissingModuleName_11));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, InTheInterface_23);
  Var_111 = parse_tree__error_spec__color_as_subject_1_f_0(Var_112);
  Var_117 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[30])));
  {
    Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_130, 1) = ((MR_Box) (DeclarationS_26));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_138, 1) = ((MR_Box) (ChildOrDescendant_20));
  }
  {
    Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_140, 1) = ((MR_Box) (ModuleS_25));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[33])));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_137));
  }
  Var_143 = parse_tree__error_spec__piece_list_to_pieces_2_f_0((MR_String) "and", DescendantPieces_24);
  Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[36])));
  Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, Var_142);
  Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InTheInterface_23, Var_133);
  Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_129, Var_132);
  Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclPieces_21, Var_128);
  Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[32])), Var_127);
  Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, Var_122);
  Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_116);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[28])), Var_110);
  Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_105);
  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[23])), Var_96);
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_91);
  MainPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_85);
  {
    MainMsg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainMsg_28, 0) = ((MR_Box) (LeastContext_18));
    MR_hl_field(0, MainMsg_28, 1) = ((MR_Box) (MainPieces_27));
  }
  succeeded = (MissingWhere_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SrcImpImportUseMap_29 = ((MR_Word) ((MR_hl_field(1, MissingWhere_10, 0))));
    TypeInfo_178_178 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_178_178, SrcImpImportUseMap_29, ((MR_Box) (MissingModuleName_11)), &conv3_IoUCs_30);
    if (succeeded)
    {
      IoUCs_30 = ((MR_Word) (conv3_IoUCs_30));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word HeadIoUC_31 = ((MR_Word) ((MR_hl_field(0, IoUCs_30, 0))));
    MR_Word ImportOrUse_33 = ((MR_Unsigned) ((MR_hl_field(0, HeadIoUC_31, 0))) & (MR_Integer) 1);
    MR_Word ImpContext_34 = ((MR_Word) ((MR_hl_field(0, HeadIoUC_31, 1))));
    MR_String ImportOrUseDecl_35;
    MR_Word ImpPieces_36;
    MR_Word ImpMsg_37;
    MR_Word Var_153;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_167;

    switch (ImportOrUse_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImportOrUseDecl_35 = (MR_String) "import_module";
        break;
      case (MR_Integer) 1:
        ImportOrUseDecl_35 = (MR_String) "use_module";
        break;
    }
    {
      Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_157, 1) = ((MR_Box) (ImportOrUseDecl_35));
    }
    {
      Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
      MR_hl_field(1, Var_156, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[41])));
    }
    {
      Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_153, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[38])));
      MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_156));
    }
    {
      ImpPieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpPieces_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[37])));
      MR_hl_field(1, ImpPieces_36, 1) = ((MR_Box) (Var_153));
    }
    {
      ImpMsg_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpMsg_37, 0) = ((MR_Box) (ImpContext_34));
      MR_hl_field(0, ImpMsg_37, 1) = ((MR_Box) (ImpPieces_36));
    }
    {
      Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_167, 0) = ((MR_Box) (ImpMsg_37));
      MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msgs_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_38, 0) = ((MR_Box) (MainMsg_28));
      MR_hl_field(1, Msgs_38, 1) = ((MR_Box) (Var_167));
    }
  }
  else
    {
      Msgs_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_38, 0) = ((MR_Box) (MainMsg_28));
      MR_hl_field(1, Msgs_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  {
    Spec_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_import_accessibility.report_missing_ancestor\'/8"));
    MR_hl_field(2, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_39, 3) = ((MR_Box) (Msgs_38));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_43 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_39));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_2(
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

  parse_tree__check_import_accessibility__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_LeastContext_14);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ImportAndOrUse_12));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_LeastContext_14));
}

static void MR_CALL 
parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_1(
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

  parse_tree__check_import_accessibility__update_iu_and_least_context_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ImportAndOrUse_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_LeastContext_14);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ImportAndOrUse_12));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_LeastContext_14));
}

static void MR_CALL 
parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0(
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
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(1, ImportedModule_11, 0))));

      {
        MR_Box conv0__ParentIoUCs_16;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ImportUseMap_10, ((MR_Box) (ParentModule_14)), &conv0__ParentIoUCs_16);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (!(succeeded))
        succeeded = mdbcomp__sym_name__is_same_module_or_submodule_2_p_0(CurrentModule_8, ParentModule_14);
      if (succeeded)
        *STATE_VARIABLE_MissingAncestorMap_35 = STATE_VARIABLE_MissingAncestorMap_0_34;
      else
      {
        MR_Word HeadIoUC_17 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, 0))));
        MR_Word TailIoUCs_18 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, 1))));
        MR_Word MissingAncestorInfo0_19;
        MR_Box conv1_MissingAncestorInfo0_19;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), STATE_VARIABLE_MissingAncestorMap_0_34, ((MR_Box) (ParentModule_14)), &conv1_MissingAncestorInfo0_19);
        if (succeeded)
        {
          MissingAncestorInfo0_19 = ((MR_Word) (conv1_MissingAncestorInfo0_19));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ChildModules0_20 = ((MR_Word) ((MR_hl_field(0, MissingAncestorInfo0_19, 0))));
          MR_Word PoA0_21 = ((((MR_Unsigned) ((MR_hl_field(0, MissingAncestorInfo0_19, 1))) >> 2)) & (MR_Integer) 1);
          MR_Word ImportAndOrUse0_22 = ((MR_Unsigned) ((MR_hl_field(0, MissingAncestorInfo0_19, 1))) & (MR_Integer) 3);
          MR_Word LeastContext0_23 = ((MR_Word) ((MR_hl_field(0, MissingAncestorInfo0_19, 2))));
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
          parse_tree__check_import_accessibility__update_iu_and_least_context_5_p_0(HeadIoUC_17, ImportAndOrUse0_22, &ImportAndOrUse1_26, LeastContext0_23, &LeastContext1_27);
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[7]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse1_26)), &conv5_ImportAndOrUse_28, ((MR_Box) (LeastContext1_27)), &conv4_LeastContext_29);
          ImportAndOrUse_28 = ((MR_Word) (conv5_ImportAndOrUse_28));
          LeastContext_29 = ((MR_Word) (conv4_LeastContext_29));
          {
            MissingAncestorInfo_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingAncestorInfo_30, 0) = ((MR_Box) (ChildModules_24));
            MR_hl_field(0, MissingAncestorInfo_30, 1) = (MR_Box) (((((MR_Unsigned) (PoA_25) << 2)) | (MR_Unsigned) (ImportAndOrUse_28)));
            MR_hl_field(0, MissingAncestorInfo_30, 2) = ((MR_Box) (LeastContext_29));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_30)), STATE_VARIABLE_MissingAncestorMap_0_34, STATE_VARIABLE_MissingAncestorMap_35);
        }
        else
        {
          MR_Word HeadImportOrUse_31;
          MR_Word HeadContext_32;
          MR_Word STATE_VARIABLE_MissingAncestorMap_2_39;
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
          HeadImportOrUse_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadIoUC_17, 0))) & (MR_Integer) 1);
          HeadContext_32 = ((MR_Word) ((MR_hl_field(0, HeadIoUC_17, 1))));
          switch (HeadImportOrUse_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ImportAndOrUse0_42 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ImportAndOrUse0_42 = (MR_Integer) 1;
              break;
          }
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[8]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse0_42)), &conv9_ImportAndOrUse_44, ((MR_Box) (HeadContext_32)), &conv8_LeastContext_45);
          ImportAndOrUse_44 = ((MR_Word) (conv9_ImportAndOrUse_44));
          LeastContext_45 = ((MR_Word) (conv8_LeastContext_45));
          {
            MissingAncestorInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingAncestorInfo_46, 0) = ((MR_Box) (ChildModules_43));
            MR_hl_field(0, MissingAncestorInfo_46, 1) = (MR_Box) (((((MR_Unsigned) (ParentOrAncestor_9) << 2)) | (MR_Unsigned) (ImportAndOrUse_44)));
            MR_hl_field(0, MissingAncestorInfo_46, 2) = ((MR_Box) (LeastContext_45));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_46)), STATE_VARIABLE_MissingAncestorMap_0_34, &STATE_VARIABLE_MissingAncestorMap_2_39);
          // direct tailcall eliminated
          ;
          next_value_of_ImportedModule_11 = ParentModule_14;
          next_value_of_STATE_VARIABLE_MissingAncestorMap_0_34 = STATE_VARIABLE_MissingAncestorMap_2_39;
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
parse_tree__check_import_accessibility__update_iu_and_least_context_5_p_0(
  MR_Word IoUC_6,
  MR_Word STATE_VARIABLE_ImportAndOrUse_0_11,
  MR_Word * STATE_VARIABLE_ImportAndOrUse_12,
  MR_Word STATE_VARIABLE_LeastContext_0_13,
  MR_Word * STATE_VARIABLE_LeastContext_14)
{
  MR_bool succeeded;
  MR_Word ImportOrUse_9 = ((MR_Unsigned) ((MR_hl_field(0, IoUC_6, 0))) & (MR_Integer) 1);
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, IoUC_6, 1))));
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
parse_tree__check_import_accessibility__record_avail_in_import_use_map_entry_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntImportUseMap_0_14,
  MR_Word * STATE_VARIABLE_IntImportUseMap_15,
  MR_Word STATE_VARIABLE_ImpImportUseMap_0_16,
  MR_Word * STATE_VARIABLE_ImpImportUseMap_17)
{
  if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportOrUse_22 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, 0))));

    parse_tree__check_import_accessibility__record_avail_in_section_6_p_0(ModuleName_7, SectionImportOrUse_22, STATE_VARIABLE_IntImportUseMap_0_14, STATE_VARIABLE_IntImportUseMap_15, STATE_VARIABLE_ImpImportUseMap_0_16, STATE_VARIABLE_ImpImportUseMap_17);
  }
  else
  {
    MR_Word MaybeSectionImportOrUse_12 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, 1))));

    if ((MaybeSectionImportOrUse_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntImportUseMap_15 = STATE_VARIABLE_IntImportUseMap_0_14;
      *STATE_VARIABLE_ImpImportUseMap_17 = STATE_VARIABLE_ImpImportUseMap_0_16;
    }
    else
    {
      MR_Word SectionImportOrUse_13 = ((MR_Word) ((MR_hl_field(1, MaybeSectionImportOrUse_12, 0))));

      parse_tree__check_import_accessibility__record_avail_in_section_6_p_0(ModuleName_7, SectionImportOrUse_13, STATE_VARIABLE_IntImportUseMap_0_14, STATE_VARIABLE_IntImportUseMap_15, STATE_VARIABLE_ImpImportUseMap_0_16, STATE_VARIABLE_ImpImportUseMap_17);
    }
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_avail_in_section_6_p_0(
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
        MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, SectionImportOrUse_8, 0))));
        MR_Word IoUC_59;
        MR_Word OneOrMore0_60;
        MR_Box conv2_OneOrMore0_60;

        {
          IoUC_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IoUC_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, IoUC_59, 1) = ((MR_Box) (Context_11));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv2_OneOrMore0_60);
        if (succeeded)
        {
          OneOrMore0_60 = ((MR_Word) (conv2_OneOrMore0_60));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadIoUC_61 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_60, 0))));
          MR_Word TailIoUCs_62 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_60, 1))));
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
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_63)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        else
        {
          MR_Word OneOrMore_66;

          {
            OneOrMore_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_66, 0) = ((MR_Box) (IoUC_59));
            MR_hl_field(0, OneOrMore_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_66)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        *STATE_VARIABLE_ImpImportUseMap_18 = STATE_VARIABLE_ImpImportUseMap_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_29 = ((MR_Word) ((MR_hl_field(1, SectionImportOrUse_8, 0))));
        MR_Word IoUC_73;
        MR_Word OneOrMore0_74;
        MR_Box conv3_OneOrMore0_74;

        {
          IoUC_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IoUC_73, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, IoUC_73, 1) = ((MR_Box) (Context_29));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv3_OneOrMore0_74);
        if (succeeded)
        {
          OneOrMore0_74 = ((MR_Word) (conv3_OneOrMore0_74));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadIoUC_75 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_74, 0))));
          MR_Word TailIoUCs_76 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_74, 1))));
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
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_77)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        else
        {
          MR_Word OneOrMore_80;

          {
            OneOrMore_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_80, 0) = ((MR_Box) (IoUC_73));
            MR_hl_field(0, OneOrMore_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_80)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
        }
        *STATE_VARIABLE_ImpImportUseMap_18 = STATE_VARIABLE_ImpImportUseMap_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_25 = ((MR_Word) ((MR_hl_field(2, SectionImportOrUse_8, 0))));
        MR_Word IoUC_31;
        MR_Word OneOrMore0_32;
        MR_Box conv0_OneOrMore0_32;

        {
          IoUC_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IoUC_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, IoUC_31, 1) = ((MR_Box) (Context_25));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_ImpImportUseMap_0_17, ((MR_Box) (ModuleName_7)), &conv0_OneOrMore0_32);
        if (succeeded)
        {
          OneOrMore0_32 = ((MR_Word) (conv0_OneOrMore0_32));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadIoUC_33 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_32, 0))));
          MR_Word TailIoUCs_34 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_32, 1))));
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
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_35)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
        }
        else
        {
          MR_Word OneOrMore_38;

          {
            OneOrMore_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_38, 0) = ((MR_Box) (IoUC_31));
            MR_hl_field(0, OneOrMore_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_38)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
        }
        *STATE_VARIABLE_IntImportUseMap_16 = STATE_VARIABLE_IntImportUseMap_0_15;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SectionImportOrUse_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_27 = ((MR_Word) ((MR_hl_field(3, SectionImportOrUse_8, 1))));
            MR_Word IoUC_45;
            MR_Word OneOrMore0_46;
            MR_Box conv1_OneOrMore0_46;

            {
              IoUC_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, IoUC_45, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, IoUC_45, 1) = ((MR_Box) (Context_27));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_ImpImportUseMap_0_17, ((MR_Box) (ModuleName_7)), &conv1_OneOrMore0_46);
            if (succeeded)
            {
              OneOrMore0_46 = ((MR_Word) (conv1_OneOrMore0_46));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word HeadIoUC_47 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_46, 0))));
              MR_Word TailIoUCs_48 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_46, 1))));
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
              mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_49)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
            }
            else
            {
              MR_Word OneOrMore_52;

              {
                OneOrMore_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OneOrMore_52, 0) = ((MR_Box) (IoUC_45));
                MR_hl_field(0, OneOrMore_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_52)), STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
            }
            *STATE_VARIABLE_IntImportUseMap_16 = STATE_VARIABLE_IntImportUseMap_0_15;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_13 = ((MR_Word) ((MR_hl_field(3, SectionImportOrUse_8, 1))));
            MR_Word ImpContext_14 = ((MR_Word) ((MR_hl_field(3, SectionImportOrUse_8, 2))));
            MR_Word IoUC_87;
            MR_Word OneOrMore0_88;
            MR_Box conv4_OneOrMore0_88;

            {
              IoUC_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, IoUC_87, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, IoUC_87, 1) = ((MR_Box) (IntContext_13));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv4_OneOrMore0_88);
            if (succeeded)
            {
              OneOrMore0_88 = ((MR_Word) (conv4_OneOrMore0_88));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word HeadIoUC_89 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_88, 0))));
              MR_Word TailIoUCs_90 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_88, 1))));
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
              mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_91)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
            }
            else
            {
              MR_Word OneOrMore_94;

              {
                OneOrMore_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OneOrMore_94, 0) = ((MR_Box) (IoUC_87));
                MR_hl_field(0, OneOrMore_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (OneOrMore_94)), STATE_VARIABLE_IntImportUseMap_0_15, STATE_VARIABLE_IntImportUseMap_16);
            }
            parse_tree__check_import_accessibility__record_avail_5_p_0(ModuleName_7, (MR_Integer) 0, ImpContext_14, STATE_VARIABLE_ImpImportUseMap_0_17, STATE_VARIABLE_ImpImportUseMap_18);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_avail_5_p_0(
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
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_ImportUseMap_0_15, ((MR_Box) (ModuleName_6)), &conv0_OneOrMore0_11);
  if (succeeded)
  {
    OneOrMore0_11 = ((MR_Word) (conv0_OneOrMore0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word HeadIoUC_12 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_11, 0))));
    MR_Word TailIoUCs_13 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_11, 1))));
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
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_6)), ((MR_Box) (OneOrMore_14)), STATE_VARIABLE_ImportUseMap_0_15, STATE_VARIABLE_ImportUseMap_16);
  }
  else
  {
    MR_Word OneOrMore_21;

    {
      OneOrMore_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OneOrMore_21, 0) = ((MR_Box) (IoUC_10));
      MR_hl_field(0, OneOrMore_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_6)), ((MR_Box) (OneOrMore_21)), STATE_VARIABLE_ImportUseMap_0_15, STATE_VARIABLE_ImportUseMap_16);
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_include_6_p_0(
  MR_Word MaybeAbsSectionInt_7,
  MR_Word MaybeMaybeAbsSectionImp_8,
  MR_Word ModuleName_9,
  MR_Word InclInfo_10,
  MR_Word STATE_VARIABLE_InclMap_0_22,
  MR_Word * STATE_VARIABLE_InclMap_23)
{
  MR_bool succeeded;
  MR_Word Section_12 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_10, 0))) & (MR_Integer) 1);
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, InclInfo_10, 1))));

  switch (Section_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((MaybeMaybeAbsSectionImp_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_InclMap_23 = STATE_VARIABLE_InclMap_0_22;
      else
      {
        MR_Word MaybeAbsSectionImp_16 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeAbsSectionImp_8, 0))));
        MR_Word IncludeContext_17;
        MR_Word OneOrMore0_18;
        MR_Box conv0_OneOrMore0_18;

        {
          IncludeContext_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IncludeContext_17, 0) = (MR_Box) ((MR_Unsigned) (MaybeAbsSectionImp_16));
          MR_hl_field(0, IncludeContext_17, 1) = ((MR_Box) (Context_13));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), STATE_VARIABLE_InclMap_0_22, ((MR_Box) (ModuleName_9)), &conv0_OneOrMore0_18);
        if (succeeded)
        {
          OneOrMore0_18 = ((MR_Word) (conv0_OneOrMore0_18));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadContext_19 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_18, 0))));
          MR_Word TailContexts_20 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_18, 1))));
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
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_21)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
        else
        {
          MR_Word OneOrMore_31;

          {
            OneOrMore_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_31, 0) = ((MR_Box) (IncludeContext_17));
            MR_hl_field(0, OneOrMore_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_31)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
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
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), STATE_VARIABLE_InclMap_0_22, ((MR_Box) (ModuleName_9)), &conv1_OneOrMore0_52);
        if (succeeded)
        {
          OneOrMore0_52 = ((MR_Word) (conv1_OneOrMore0_52));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadContext_42 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_52, 0))));
          MR_Word TailContexts_43 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_52, 1))));
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
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_44)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
        else
        {
          MR_Word OneOrMore_49;

          {
            OneOrMore_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OneOrMore_49, 0) = ((MR_Box) (IncludeContext_39));
            MR_hl_field(0, OneOrMore_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (OneOrMore_49)), STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23);
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_plain_opt_4_p_0(
  MR_Word Ancestors_5,
  MR_Word ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_35,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_36)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_6, 0))));
  MR_Word UseMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_6, 2))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_5, ((MR_Box) (ModuleName_8)));
  if (succeeded)
  {
    MR_Word Avails_34;

    Avails_34 = parse_tree__convert_import_use__use_map_to_item_avails_1_f_0(UseMap_10);
    parse_tree__check_import_accessibility__record_avails_acc_3_p_0(Avails_34, STATE_VARIABLE_AncestorImportUseMap_0_35, STATE_VARIABLE_AncestorImportUseMap_36);
  }
  else
    *STATE_VARIABLE_AncestorImportUseMap_36 = STATE_VARIABLE_AncestorImportUseMap_0_35;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__436__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_InclMap_23));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__412__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0(
  MR_Word Ancestors_9,
  MR_Word IntForOptSpec_10,
  MR_Word STATE_VARIABLE_ReadModules_0_20,
  MR_Word * STATE_VARIABLE_ReadModules_21,
  MR_Word STATE_VARIABLE_InclMap_0_22,
  MR_Word * STATE_VARIABLE_InclMap_23,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_24,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_25)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) IntForOptSpec_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_14 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_10, 0))));

        parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0(Ancestors_9, ParseTreeInt0_14, STATE_VARIABLE_ReadModules_0_20, STATE_VARIABLE_ReadModules_21, STATE_VARIABLE_InclMap_0_22, STATE_VARIABLE_InclMap_23, STATE_VARIABLE_AncestorImportUseMap_0_24, STATE_VARIABLE_AncestorImportUseMap_25);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_16 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_10, 0))));
        MR_Word ReadWhyInt1_17 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec_10, 1))) & (MR_Integer) 7);
        MR_Word InclMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_16, 3))));
        MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_16, 0))));
        MR_Word Var_51;

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_27)), STATE_VARIABLE_ReadModules_0_20, STATE_VARIABLE_ReadModules_21);
        switch (ReadWhyInt1_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
            {
              MR_Box conv1_STATE_VARIABLE_InclMap_23;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[9]), InclMap_26, ((MR_Box) (STATE_VARIABLE_InclMap_0_22)), &conv1_STATE_VARIABLE_InclMap_23);
              *STATE_VARIABLE_InclMap_23 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_23));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box conv3_STATE_VARIABLE_InclMap_23;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[10]), InclMap_26, ((MR_Box) (STATE_VARIABLE_InclMap_0_22)), &conv3_STATE_VARIABLE_InclMap_23);
              *STATE_VARIABLE_InclMap_23 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_23));
            }
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_InclMap_23 = STATE_VARIABLE_InclMap_0_22;
            break;
        }
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_3));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (Ancestors_9));
          MR_hl_field(0, Var_51, 4) = ((MR_Box) (ModuleName_27));
        }
        mercury__require__expect_not_3_p_0(Var_51, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int1\'/7", (MR_String) "processing the .int file of an ancestor");
        *STATE_VARIABLE_AncestorImportUseMap_25 = STATE_VARIABLE_AncestorImportUseMap_0_24;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_18 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_10, 0))));
        MR_Word ReadWhyInt2_19 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_10, 1))) & (MR_Integer) 3);
        MR_Word InclMap_59;
        MR_Word ModuleName_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_18, 0))));
        MR_Word IntInclMap_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_18, 3))));
        MR_Word Var_79;

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_60)), STATE_VARIABLE_ReadModules_0_20, STATE_VARIABLE_ReadModules_21);
        InclMap_59 = (MR_Word) (IntInclMap_63);
        switch (ReadWhyInt2_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Box conv5_STATE_VARIABLE_InclMap_23;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[11]), InclMap_59, ((MR_Box) (STATE_VARIABLE_InclMap_0_22)), &conv5_STATE_VARIABLE_InclMap_23);
              *STATE_VARIABLE_InclMap_23 = ((MR_Word) (conv5_STATE_VARIABLE_InclMap_23));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            {
              MR_Box conv7_STATE_VARIABLE_InclMap_23;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[12]), InclMap_59, ((MR_Box) (STATE_VARIABLE_InclMap_0_22)), &conv7_STATE_VARIABLE_InclMap_23);
              *STATE_VARIABLE_InclMap_23 = ((MR_Word) (conv7_STATE_VARIABLE_InclMap_23));
            }
            break;
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0_6));
          MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_79, 3) = ((MR_Box) (Ancestors_9));
          MR_hl_field(0, Var_79, 4) = ((MR_Box) (ModuleName_60));
        }
        mercury__require__expect_not_3_p_0(Var_79, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int2\'/7", (MR_String) "processing the .int2 file of an ancestor");
        *STATE_VARIABLE_AncestorImportUseMap_25 = STATE_VARIABLE_AncestorImportUseMap_0_24;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__451__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word IndirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16)
{
  MR_bool succeeded;
  MR_Word ParseTreeInt3_11 = ((MR_Word) ((MR_hl_field(0, IndirectSpec_8, 0))));
  MR_Word InclMap_18;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_11, 0))));
  MR_Word IntInclMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_11, 2))));
  MR_Word Var_31;
  MR_Box conv1_STATE_VARIABLE_InclMap_16;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_19)), STATE_VARIABLE_ReadModules_0_13, STATE_VARIABLE_ReadModules_14);
  InclMap_18 = (MR_Word) (IntInclMap_21);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[8]), InclMap_18, ((MR_Box) (STATE_VARIABLE_InclMap_0_15)), &conv1_STATE_VARIABLE_InclMap_16);
  *STATE_VARIABLE_InclMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_16));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Ancestors_7));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (ModuleName_19));
  }
  mercury__require__expect_not_3_p_0(Var_31, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int3\'/7", (MR_String) "processing the .int3 file of an ancestor");
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__451__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word IndirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16)
{
  MR_bool succeeded;
  MR_Word ParseTreeInt3_11 = ((MR_Word) ((MR_hl_field(0, IndirectSpec_8, 0))));
  MR_Word InclMap_18;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_11, 0))));
  MR_Word IntInclMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_11, 2))));
  MR_Word Var_31;
  MR_Box conv1_STATE_VARIABLE_InclMap_16;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_19)), STATE_VARIABLE_ReadModules_0_13, STATE_VARIABLE_ReadModules_14);
  InclMap_18 = (MR_Word) (IntInclMap_21);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[7]), InclMap_18, ((MR_Box) (STATE_VARIABLE_InclMap_0_15)), &conv1_STATE_VARIABLE_InclMap_16);
  *STATE_VARIABLE_InclMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_16));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Ancestors_7));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (ModuleName_19));
  }
  mercury__require__expect_not_3_p_0(Var_31, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int3\'/7", (MR_String) "processing the .int3 file of an ancestor");
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__436__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word IndirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16)
{
  MR_bool succeeded;
  MR_Word ParseTreeInt2_11 = ((MR_Word) ((MR_hl_field(0, IndirectSpec_8, 0))));
  MR_Word ReadWhyInt2_12 = ((MR_Unsigned) ((MR_hl_field(0, IndirectSpec_8, 1))) & (MR_Integer) 3);
  MR_Word InclMap_17;
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_11, 0))));
  MR_Word IntInclMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_11, 3))));
  MR_Word Var_37;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), STATE_VARIABLE_ReadModules_0_13, STATE_VARIABLE_ReadModules_14);
  InclMap_17 = (MR_Word) (IntInclMap_21);
  switch (ReadWhyInt2_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Box conv1_STATE_VARIABLE_InclMap_16;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[5]), InclMap_17, ((MR_Box) (STATE_VARIABLE_InclMap_0_15)), &conv1_STATE_VARIABLE_InclMap_16);
        *STATE_VARIABLE_InclMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_16));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        MR_Box conv3_STATE_VARIABLE_InclMap_16;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[6]), InclMap_17, ((MR_Box) (STATE_VARIABLE_InclMap_0_15)), &conv3_STATE_VARIABLE_InclMap_16);
        *STATE_VARIABLE_InclMap_16 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_16));
      }
      break;
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0_3));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (Ancestors_7));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) (ModuleName_18));
  }
  mercury__require__expect_not_3_p_0(Var_37, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int2\'/7", (MR_String) "processing the .int2 file of an ancestor");
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__412__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0(
  MR_Word Ancestors_7,
  MR_Word DirectSpec_8,
  MR_Word STATE_VARIABLE_ReadModules_0_13,
  MR_Word * STATE_VARIABLE_ReadModules_14,
  MR_Word STATE_VARIABLE_InclMap_0_15,
  MR_Word * STATE_VARIABLE_InclMap_16)
{
  MR_bool succeeded;
  MR_Word ParseTreeInt1_11 = ((MR_Word) ((MR_hl_field(0, DirectSpec_8, 0))));
  MR_Word ReadWhyInt1_12 = ((MR_Unsigned) ((MR_hl_field(0, DirectSpec_8, 1))) & (MR_Integer) 7);
  MR_Word InclMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_11, 3))));
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_11, 0))));
  MR_Word Var_42;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), STATE_VARIABLE_ReadModules_0_13, STATE_VARIABLE_ReadModules_14);
  switch (ReadWhyInt1_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 4:
      {
        MR_Box conv1_STATE_VARIABLE_InclMap_16;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[2]), InclMap_17, ((MR_Box) (STATE_VARIABLE_InclMap_0_15)), &conv1_STATE_VARIABLE_InclMap_16);
        *STATE_VARIABLE_InclMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_16));
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Box conv3_STATE_VARIABLE_InclMap_16;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[3]), InclMap_17, ((MR_Box) (STATE_VARIABLE_InclMap_0_15)), &conv3_STATE_VARIABLE_InclMap_16);
        *STATE_VARIABLE_InclMap_16 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_16));
      }
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_InclMap_16 = STATE_VARIABLE_InclMap_0_15;
      break;
  }
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0_3));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Ancestors_7));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (ModuleName_18));
  }
  mercury__require__expect_not_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int1\'/7", (MR_String) "processing the .int file of an ancestor");
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_ancestor_int_spec_8_p_0(
  MR_Word Ancestors_9,
  MR_Word AncestorSpec_10,
  MR_Word STATE_VARIABLE_ReadModules_0_16,
  MR_Word * STATE_VARIABLE_ReadModules_17,
  MR_Word STATE_VARIABLE_InclMap_0_18,
  MR_Word * STATE_VARIABLE_InclMap_19,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_20,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_21)
{
  MR_Word ParseTreeInt0_14 = ((MR_Word) ((MR_hl_field(0, AncestorSpec_10, 0))));

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0(Ancestors_9, ParseTreeInt0_14, STATE_VARIABLE_ReadModules_0_16, STATE_VARIABLE_ReadModules_17, STATE_VARIABLE_InclMap_0_18, STATE_VARIABLE_InclMap_19, STATE_VARIABLE_AncestorImportUseMap_0_20, STATE_VARIABLE_AncestorImportUseMap_21);
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0(
  MR_Word Ancestors_9,
  MR_Word ParseTreeInt0_10,
  MR_Word STATE_VARIABLE_ReadModules_0_41,
  MR_Word * STATE_VARIABLE_ReadModules_42,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_43,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_44,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_45,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_46)
{
  MR_bool succeeded;
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_10, 0))));
  MR_Word InclMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_10, 3))));
  MR_Word ImportUseMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_10, 4))));
  MR_Box conv1_STATE_VARIABLE_MaybeAbstractInclMap_44;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_14)), STATE_VARIABLE_ReadModules_0_41, STATE_VARIABLE_ReadModules_42);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[1]), InclMap_17, ((MR_Box) (STATE_VARIABLE_MaybeAbstractInclMap_0_43)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_44);
  *STATE_VARIABLE_MaybeAbstractInclMap_44 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_44));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_9, ((MR_Box) (ModuleName_14)));
  if (succeeded)
  {
    MR_Word IntAvails_38;
    MR_Word ImpAvails_39;
    MR_Word AllAvails_40;

    parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_3_p_0(ImportUseMap_18, &IntAvails_38, &ImpAvails_39);
    AllAvails_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_38, ImpAvails_39);
    parse_tree__check_import_accessibility__record_avails_acc_3_p_0(AllAvails_40, STATE_VARIABLE_AncestorImportUseMap_0_45, STATE_VARIABLE_AncestorImportUseMap_46);
  }
  else
    *STATE_VARIABLE_AncestorImportUseMap_46 = STATE_VARIABLE_AncestorImportUseMap_0_45;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_avails_acc_3_p_0(
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
      MR_Word Avail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Avails_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ModuleName_10;
      MR_Word Context_11;
      MR_Word ImportOrUse_13;
      MR_Word IoUC_14;
      MR_Word STATE_VARIABLE_ImportUseMap_1_24;
      MR_Word OneOrMore0_15;
      MR_Box conv0_OneOrMore0_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportUseMap_0_2;

      if (((MR_tag((MR_Word) Avail_7)) == (MR_Integer) 0))
      {
        MR_Word Var_21 = (MR_Word) ((MR_Word) (Avail_7));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(0, Var_21, 1))));
        ImportOrUse_13 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (Avail_7), (MR_Integer) 1));

        ModuleName_10 = ((MR_Word) ((MR_hl_field(0, Var_22, 0))));
        Context_11 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
        ImportOrUse_13 = (MR_Integer) 1;
      }
      {
        IoUC_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, IoUC_14, 0) = (MR_Box) ((MR_Unsigned) (ImportOrUse_13));
        MR_hl_field(0, IoUC_14, 1) = ((MR_Box) (Context_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_15);
      if (succeeded)
      {
        OneOrMore0_15 = ((MR_Word) (conv0_OneOrMore0_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIoUC_16 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_15, 0))));
        MR_Word TailIoUCs_17 = ((MR_Word) ((MR_hl_field(0, OneOrMore0_15, 1))));
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
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_18)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_1_24);
      }
      else
      {
        MR_Word OneOrMore_30;

        {
          OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OneOrMore_30, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(0, OneOrMore_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_30)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_1_24);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_8;
      next_value_of_STATE_VARIABLE_ImportUseMap_0_2 = STATE_VARIABLE_ImportUseMap_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportUseMap_0_2 = next_value_of_STATE_VARIABLE_ImportUseMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ModulesToAdd_41;
  MR_Word conv13_STATE_VARIABLE_Specs_43;

  parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv14_STATE_VARIABLE_ModulesToAdd_41, ((MR_Word) (wrapper_arg_5)), &conv13_STATE_VARIABLE_Specs_43);
  *wrapper_arg_4 = ((MR_Box) (conv14_STATE_VARIABLE_ModulesToAdd_41));
  *wrapper_arg_6 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_43));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ModulesToAdd_41;
  MR_Word conv9_STATE_VARIABLE_Specs_43;

  parse_tree__check_import_accessibility__report_missing_ancestor_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_ModulesToAdd_41, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Specs_43);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_ModulesToAdd_41));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_43));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_MissingAncestorMap_35;

  parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_MissingAncestorMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MissingAncestorMap_35));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_147;

  parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__639__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_147);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_147));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_MissingAncestorMap_35;

  parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_MissingAncestorMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_MissingAncestorMap_35));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_137;

  parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__627__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_137);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_137));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_6_p_0(
  MR_Word ParseTreeModuleSrc_7,
  MR_Word ImportAccessibilityInfo_8,
  MR_Word * MissingModulesInt_9,
  MR_Word * MissingModulesImp_10,
  MR_Word * STATE_VARIABLE_DelayedSpecs_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, 0))));
  MR_Word ModuleNameContext_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, 1))));
  MR_Word ReadModules_15 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_8, 0))));
  MR_Word SeenIncludes_16 = ((MR_Unsigned) ((MR_hl_field(0, ImportAccessibilityInfo_8, 1))) & (MR_Integer) 1);
  MR_Word InclMap_17 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_8, 2))));
  MR_Word SrcIntImportUseMap_18 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_8, 3))));
  MR_Word SrcImpImportUseMap_19 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_8, 4))));
  MR_Word AncestorImportUseMap_20 = ((MR_Word) ((MR_hl_field(0, ImportAccessibilityInfo_8, 5))));
  MR_Word SrcIntAncImportUseMap_21;
  MR_Word SrcIntMissingAncestorMap_22;
  MR_Word SrcIntImpImportUseMap_23;
  MR_Word SrcImpMissingAncestorMap0_24;
  MR_Word SrcIntMissingAncestors_25;
  MR_Word SrcImpMissingAncestorMap_26;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Specs_2_31;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_Specs_3_34;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_DelayedSpecs_2_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Box conv1_STATE_VARIABLE_Specs_3_34;
  MR_Box conv2_STATE_VARIABLE_Specs_28;
  MR_Box conv5_SrcIntMissingAncestorMap_22;
  MR_Box conv8_SrcImpMissingAncestorMap0_24;
  MR_Box conv12_MissingModulesInt_9;
  MR_Box conv11_STATE_VARIABLE_DelayedSpecs_2_48;
  MR_Box conv16_MissingModulesImp_10;
  MR_Box conv15_STATE_VARIABLE_DelayedSpecs_27;

  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (ModuleNameContext_14));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0(ReadModules_15, SeenIncludes_16, InclMap_17, ModuleName_13, Var_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_31);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_10[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (ReadModules_15));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (SeenIncludes_16));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) (InclMap_17));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_33, SrcIntImportUseMap_18, ((MR_Box) (STATE_VARIABLE_Specs_2_31)), &conv1_STATE_VARIABLE_Specs_3_34);
  STATE_VARIABLE_Specs_3_34 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_3_34));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_33, SrcImpImportUseMap_19, ((MR_Box) (STATE_VARIABLE_Specs_3_34)), &conv2_STATE_VARIABLE_Specs_28);
  *STATE_VARIABLE_Specs_28 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_28));
  mercury__map__union_4_p_1((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[5]), SrcIntImportUseMap_18, AncestorImportUseMap_20, &SrcIntAncImportUseMap_21);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_10[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_3));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_38, 5) = ((MR_Box) (SrcIntAncImportUseMap_21));
  }
  Var_39 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[2]), Var_38, SrcIntImportUseMap_18, ((MR_Box) (Var_39)), &conv5_SrcIntMissingAncestorMap_22);
  SrcIntMissingAncestorMap_22 = ((MR_Word) (conv5_SrcIntMissingAncestorMap_22));
  mercury__map__union_4_p_1((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[6]), SrcIntAncImportUseMap_21, SrcImpImportUseMap_19, &SrcIntImpImportUseMap_23);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_10[1]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_5));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_42, 5) = ((MR_Box) (SrcIntImpImportUseMap_23));
  }
  Var_43 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[2]), Var_42, SrcImpImportUseMap_19, ((MR_Box) (Var_43)), &conv8_SrcImpMissingAncestorMap0_24);
  SrcImpMissingAncestorMap0_24 = ((MR_Word) (conv8_SrcImpMissingAncestorMap0_24));
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestorMap_22, &SrcIntMissingAncestors_25);
  mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestors_25, SrcImpMissingAncestorMap0_24, &SrcImpMissingAncestorMap_26);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (SrcImpImportUseMap_19));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[3]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_6));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (Var_49));
  }
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[4]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_46, SrcIntMissingAncestorMap_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_MissingModulesInt_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_STATE_VARIABLE_DelayedSpecs_2_48);
  *MissingModulesInt_9 = ((MR_Word) (conv12_MissingModulesInt_9));
  STATE_VARIABLE_DelayedSpecs_2_48 = ((MR_Word) (conv11_STATE_VARIABLE_DelayedSpecs_2_48));
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[3]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_6_p_0_7));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[4]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_50, SrcImpMissingAncestorMap_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv16_MissingModulesImp_10, ((MR_Box) (STATE_VARIABLE_DelayedSpecs_2_48)), &conv15_STATE_VARIABLE_DelayedSpecs_27);
  *MissingModulesImp_10 = ((MR_Word) (conv16_MissingModulesImp_10));
  *STATE_VARIABLE_DelayedSpecs_27 = ((MR_Word) (conv15_STATE_VARIABLE_DelayedSpecs_27));
}

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_16;

  parse_tree__check_import_accessibility__report_missing_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Specs_13;

  parse_tree__check_import_accessibility__report_abstract_include_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_13));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__is_non_abstract_include_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0(
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
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(1, Module_11, 0))));
      MR_String SubModule_15 = ((MR_String) ((MR_hl_field(1, Module_11, 1))));
      MR_Word STATE_VARIABLE_Specs_1_25;
      MR_Word IncludeContexts_16;
      MR_Box conv0_IncludeContexts_16;
      MR_Word next_value_of_Module_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), InclMap_10, ((MR_Box) (Module_11)), &conv0_IncludeContexts_16);
      if (succeeded)
      {
        IncludeContexts_16 = ((MR_Word) (conv0_IncludeContexts_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadIncludeContext_17 = ((MR_Word) ((MR_hl_field(0, IncludeContexts_16, 0))));
        MR_Word TailIncludeContexts_18 = ((MR_Word) ((MR_hl_field(0, IncludeContexts_16, 1))));
        MR_Word IncludeContextsList_19;

        {
          IncludeContextsList_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IncludeContextsList_19, 0) = ((MR_Box) (HeadIncludeContext_17));
          MR_hl_field(1, IncludeContextsList_19, 1) = ((MR_Box) (TailIncludeContexts_18));
        }
        succeeded = mercury__list__any_true_2_p_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[4]), IncludeContextsList_19);
        if (succeeded)
          STATE_VARIABLE_Specs_1_25 = STATE_VARIABLE_Specs_0_21;
        else
        {
          MR_Word Var_24;
          MR_Box conv2_STATE_VARIABLE_Specs_1_25;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_9[0]));
            MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_2));
            MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_24, 3) = ((MR_Box) (ParentModule_14));
            MR_hl_field(0, Var_24, 4) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_24, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv2_STATE_VARIABLE_Specs_1_25);
          STATE_VARIABLE_Specs_1_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_25));
        }
      }
      else
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReadModules_8, ((MR_Box) (ParentModule_14)));
        if (succeeded)
        {
          MR_Word Var_26;
          MR_Box conv4_STATE_VARIABLE_Specs_1_25;

          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[6]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_3));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (SeenIncludes_9));
            MR_hl_field(0, Var_26, 4) = ((MR_Box) (ParentModule_14));
            MR_hl_field(0, Var_26, 5) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_26, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv4_STATE_VARIABLE_Specs_1_25);
          STATE_VARIABLE_Specs_1_25 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_25));
        }
        else
          STATE_VARIABLE_Specs_1_25 = STATE_VARIABLE_Specs_0_21;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Module_11 = ParentModule_14;
      next_value_of_STATE_VARIABLE_Specs_0_21 = STATE_VARIABLE_Specs_1_25;
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
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_ReadModules_14;
  MR_Word conv10_STATE_VARIABLE_InclMap_16;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ReadModules_14, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_InclMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ReadModules_14));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_InclMap_16));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ReadModules_14;
  MR_Word conv6_STATE_VARIABLE_InclMap_16;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ReadModules_14, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_InclMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ReadModules_14));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_InclMap_16));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ReadModules_42;
  MR_Word conv1_STATE_VARIABLE_MaybeAbstractInclMap_44;
  MR_Word conv0_STATE_VARIABLE_AncestorImportUseMap_46;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ReadModules_42, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_44, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_AncestorImportUseMap_46);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ReadModules_42));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_44));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_46));
}

void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugMakeIntUnit_3,
  MR_Word * ImportAccessibilityInfo_4)
{
  MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, 0))));
  MR_Word AncestorIntSpecs_7 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, 2))));
  MR_Word DirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, 3))));
  MR_Word IndirectIntSpecs_9 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_3, 4))));
  MR_Word ModuleName_16;
  MR_Word Ancestors_17;
  MR_Word STATE_VARIABLE_ReadModules_1_18;
  MR_Word STATE_VARIABLE_InclMap_1_19;
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_1_20;
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_1_21;
  MR_Word STATE_VARIABLE_AncestorImportUseMap_1_22;
  MR_Word STATE_VARIABLE_ReadModules_2_23;
  MR_Word STATE_VARIABLE_InclMap_2_24;
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_2_25;
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_2_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_ReadModules_3_28;
  MR_Word STATE_VARIABLE_InclMap_3_29;
  MR_Word STATE_VARIABLE_AncestorImportUseMap_2_30;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_ReadModules_4_32;
  MR_Word STATE_VARIABLE_InclMap_4_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_ReadModules_5_35;
  MR_Word STATE_VARIABLE_InclMap_5_36;
  MR_Box conv5_STATE_VARIABLE_ReadModules_3_28;
  MR_Box conv4_STATE_VARIABLE_InclMap_3_29;
  MR_Box conv3_STATE_VARIABLE_AncestorImportUseMap_2_30;
  MR_Box conv9_STATE_VARIABLE_ReadModules_4_32;
  MR_Box conv8_STATE_VARIABLE_InclMap_4_33;
  MR_Box conv13_STATE_VARIABLE_ReadModules_5_35;
  MR_Box conv12_STATE_VARIABLE_InclMap_5_36;

  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ReadModules_1_18);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), &STATE_VARIABLE_InclMap_1_19);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcIntImportUseMap_1_20);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcImpImportUseMap_1_21);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_AncestorImportUseMap_1_22);
  ModuleName_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 0))));
  Ancestors_17 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_16);
  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_1_18, &STATE_VARIABLE_ReadModules_2_23, STATE_VARIABLE_InclMap_1_19, &STATE_VARIABLE_InclMap_2_24, STATE_VARIABLE_SrcIntImportUseMap_1_20, &STATE_VARIABLE_SrcIntImportUseMap_2_25, STATE_VARIABLE_SrcImpImportUseMap_1_21, &STATE_VARIABLE_SrcImpImportUseMap_2_26);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[2]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Ancestors_17));
  }
  mercury__map__foldl3_values_8_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, AncestorIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_2_23)), &conv5_STATE_VARIABLE_ReadModules_3_28, ((MR_Box) (STATE_VARIABLE_InclMap_2_24)), &conv4_STATE_VARIABLE_InclMap_3_29, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_1_22)), &conv3_STATE_VARIABLE_AncestorImportUseMap_2_30);
  STATE_VARIABLE_ReadModules_3_28 = ((MR_Word) (conv5_STATE_VARIABLE_ReadModules_3_28));
  STATE_VARIABLE_InclMap_3_29 = ((MR_Word) (conv4_STATE_VARIABLE_InclMap_3_29));
  STATE_VARIABLE_AncestorImportUseMap_2_30 = ((MR_Word) (conv3_STATE_VARIABLE_AncestorImportUseMap_2_30));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[4]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Ancestors_17));
  }
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_31, DirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_3_28)), &conv9_STATE_VARIABLE_ReadModules_4_32, ((MR_Box) (STATE_VARIABLE_InclMap_3_29)), &conv8_STATE_VARIABLE_InclMap_4_33);
  STATE_VARIABLE_ReadModules_4_32 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_4_32));
  STATE_VARIABLE_InclMap_4_33 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_4_33));
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[5]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_3));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (Ancestors_17));
  }
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int3_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_34, IndirectIntSpecs_9, ((MR_Box) (STATE_VARIABLE_ReadModules_4_32)), &conv13_STATE_VARIABLE_ReadModules_5_35, ((MR_Box) (STATE_VARIABLE_InclMap_4_33)), &conv12_STATE_VARIABLE_InclMap_5_36);
  STATE_VARIABLE_ReadModules_5_35 = ((MR_Word) (conv13_STATE_VARIABLE_ReadModules_5_35));
  STATE_VARIABLE_InclMap_5_36 = ((MR_Word) (conv12_STATE_VARIABLE_InclMap_5_36));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ImportAccessibilityInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ReadModules_5_35));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InclMap_5_36));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_2_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_2_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_2_30));
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_STATE_VARIABLE_ReadModules_21;
  MR_Word conv17_STATE_VARIABLE_InclMap_23;
  MR_Word conv16_STATE_VARIABLE_AncestorImportUseMap_25;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_ReadModules_21, ((MR_Word) (wrapper_arg_4)), &conv17_STATE_VARIABLE_InclMap_23, ((MR_Word) (wrapper_arg_6)), &conv16_STATE_VARIABLE_AncestorImportUseMap_25);
  *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_ReadModules_21));
  *wrapper_arg_5 = ((MR_Box) (conv17_STATE_VARIABLE_InclMap_23));
  *wrapper_arg_7 = ((MR_Box) (conv16_STATE_VARIABLE_AncestorImportUseMap_25));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_AncestorImportUseMap_36;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_plain_opt_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_AncestorImportUseMap_36);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_AncestorImportUseMap_36));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_ReadModules_14;
  MR_Word conv10_STATE_VARIABLE_InclMap_16;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ReadModules_14, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_InclMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ReadModules_14));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_InclMap_16));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ReadModules_14;
  MR_Word conv6_STATE_VARIABLE_InclMap_16;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ReadModules_14, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_InclMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ReadModules_14));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_InclMap_16));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ReadModules_17;
  MR_Word conv1_STATE_VARIABLE_InclMap_19;
  MR_Word conv0_STATE_VARIABLE_AncestorImportUseMap_21;

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_ancestor_int_spec_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ReadModules_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_InclMap_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_AncestorImportUseMap_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ReadModules_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_InclMap_19));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_21));
}

void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0(
  MR_Word AugCompUnit_3,
  MR_Word * ImportAccessibilityInfo_4)
{
  MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, 0))));
  MR_Word AncestorIntSpecs_6 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, 1))));
  MR_Word DirectIntSpecs_7 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, 2))));
  MR_Word IndirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, 3))));
  MR_Word PlainOpts_9 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, 4))));
  MR_Word IntForOptSpecs_11 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_3, 6))));
  MR_Word ModuleName_19;
  MR_Word Ancestors_20;
  MR_Word STATE_VARIABLE_ReadModules_1_21;
  MR_Word STATE_VARIABLE_InclMap_1_22;
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_1_23;
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_1_24;
  MR_Word STATE_VARIABLE_AncestorImportUseMap_1_25;
  MR_Word STATE_VARIABLE_ReadModules_2_26;
  MR_Word STATE_VARIABLE_InclMap_2_27;
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_2_28;
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_2_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_ReadModules_3_31;
  MR_Word STATE_VARIABLE_InclMap_3_32;
  MR_Word STATE_VARIABLE_AncestorImportUseMap_2_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_ReadModules_4_35;
  MR_Word STATE_VARIABLE_InclMap_4_36;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_ReadModules_5_38;
  MR_Word STATE_VARIABLE_InclMap_5_39;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_AncestorImportUseMap_3_41;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_ReadModules_6_43;
  MR_Word STATE_VARIABLE_InclMap_6_44;
  MR_Word STATE_VARIABLE_AncestorImportUseMap_4_45;
  MR_Box conv5_STATE_VARIABLE_ReadModules_3_31;
  MR_Box conv4_STATE_VARIABLE_InclMap_3_32;
  MR_Box conv3_STATE_VARIABLE_AncestorImportUseMap_2_33;
  MR_Box conv9_STATE_VARIABLE_ReadModules_4_35;
  MR_Box conv8_STATE_VARIABLE_InclMap_4_36;
  MR_Box conv13_STATE_VARIABLE_ReadModules_5_38;
  MR_Box conv12_STATE_VARIABLE_InclMap_5_39;
  MR_Box conv15_STATE_VARIABLE_AncestorImportUseMap_3_41;
  MR_Box conv21_STATE_VARIABLE_ReadModules_6_43;
  MR_Box conv20_STATE_VARIABLE_InclMap_6_44;
  MR_Box conv19_STATE_VARIABLE_AncestorImportUseMap_4_45;

  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ReadModules_1_21);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), &STATE_VARIABLE_InclMap_1_22);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcIntImportUseMap_1_23);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcImpImportUseMap_1_24);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_AncestorImportUseMap_1_25);
  ModuleName_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 0))));
  Ancestors_20 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_19);
  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_1_21, &STATE_VARIABLE_ReadModules_2_26, STATE_VARIABLE_InclMap_1_22, &STATE_VARIABLE_InclMap_2_27, STATE_VARIABLE_SrcIntImportUseMap_1_23, &STATE_VARIABLE_SrcIntImportUseMap_2_28, STATE_VARIABLE_SrcImpImportUseMap_1_24, &STATE_VARIABLE_SrcImpImportUseMap_2_29);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl3_values_8_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_30, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_2_26)), &conv5_STATE_VARIABLE_ReadModules_3_31, ((MR_Box) (STATE_VARIABLE_InclMap_2_27)), &conv4_STATE_VARIABLE_InclMap_3_32, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_1_25)), &conv3_STATE_VARIABLE_AncestorImportUseMap_2_33);
  STATE_VARIABLE_ReadModules_3_31 = ((MR_Word) (conv5_STATE_VARIABLE_ReadModules_3_31));
  STATE_VARIABLE_InclMap_3_32 = ((MR_Word) (conv4_STATE_VARIABLE_InclMap_3_32));
  STATE_VARIABLE_AncestorImportUseMap_2_33 = ((MR_Word) (conv3_STATE_VARIABLE_AncestorImportUseMap_2_33));
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[2]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_34, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_3_31)), &conv9_STATE_VARIABLE_ReadModules_4_35, ((MR_Box) (STATE_VARIABLE_InclMap_3_32)), &conv8_STATE_VARIABLE_InclMap_4_36);
  STATE_VARIABLE_ReadModules_4_35 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_4_35));
  STATE_VARIABLE_InclMap_4_36 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_4_36));
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[3]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_3));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, IndirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_4_35)), &conv13_STATE_VARIABLE_ReadModules_5_38, ((MR_Box) (STATE_VARIABLE_InclMap_4_36)), &conv12_STATE_VARIABLE_InclMap_5_39);
  STATE_VARIABLE_ReadModules_5_38 = ((MR_Word) (conv13_STATE_VARIABLE_ReadModules_5_38));
  STATE_VARIABLE_InclMap_5_39 = ((MR_Word) (conv12_STATE_VARIABLE_InclMap_5_39));
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_7[0]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_4));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_40, PlainOpts_9, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_2_33)), &conv15_STATE_VARIABLE_AncestorImportUseMap_3_41);
  STATE_VARIABLE_AncestorImportUseMap_3_41 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_3_41));
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[1]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_5));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl3_values_8_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_42, IntForOptSpecs_11, ((MR_Box) (STATE_VARIABLE_ReadModules_5_38)), &conv21_STATE_VARIABLE_ReadModules_6_43, ((MR_Box) (STATE_VARIABLE_InclMap_5_39)), &conv20_STATE_VARIABLE_InclMap_6_44, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_3_41)), &conv19_STATE_VARIABLE_AncestorImportUseMap_4_45);
  STATE_VARIABLE_ReadModules_6_43 = ((MR_Word) (conv21_STATE_VARIABLE_ReadModules_6_43));
  STATE_VARIABLE_InclMap_6_44 = ((MR_Word) (conv20_STATE_VARIABLE_InclMap_6_44));
  STATE_VARIABLE_AncestorImportUseMap_4_45 = ((MR_Word) (conv19_STATE_VARIABLE_AncestorImportUseMap_4_45));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ImportAccessibilityInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ReadModules_6_43));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_InclMap_6_44));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_2_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_2_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_4_45));
  }
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0_2(
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

  parse_tree__check_import_accessibility__record_avail_in_import_use_map_entry_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_IntImportUseMap_15, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_ImpImportUseMap_17);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_IntImportUseMap_15));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_ImpImportUseMap_17));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_9_p_0(
  MR_Word ParseTreeModuleSrc_10,
  MR_Word STATE_VARIABLE_ReadModules_0_51,
  MR_Word * STATE_VARIABLE_ReadModules_52,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_53,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_54,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_55,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_56,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_57,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_58)
{
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, 0))));
  MR_Word InclMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, 2))));
  MR_Word ImportUseMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, 3))));
  MR_Box conv1_STATE_VARIABLE_MaybeAbstractInclMap_54;
  MR_Box conv5_STATE_VARIABLE_SrcIntImportUseMap_56;
  MR_Box conv4_STATE_VARIABLE_SrcImpImportUseMap_58;

  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_15)), STATE_VARIABLE_ReadModules_0_51, STATE_VARIABLE_ReadModules_52);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[0]), InclMap_17, ((MR_Box) (STATE_VARIABLE_MaybeAbstractInclMap_0_53)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_54);
  *STATE_VARIABLE_MaybeAbstractInclMap_54 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_54));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[3]), ImportUseMap_18, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_0_55)), &conv5_STATE_VARIABLE_SrcIntImportUseMap_56, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_0_57)), &conv4_STATE_VARIABLE_SrcImpImportUseMap_58);
  *STATE_VARIABLE_SrcIntImportUseMap_56 = ((MR_Word) (conv5_STATE_VARIABLE_SrcIntImportUseMap_56));
  *STATE_VARIABLE_SrcImpImportUseMap_58 = ((MR_Word) (conv4_STATE_VARIABLE_SrcImpImportUseMap_58));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_accessibility_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____import_accessibility_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_accessibility_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____import_accessibility_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_and_or_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____import_and_or_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_and_or_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____import_and_or_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____import_or_use_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____import_or_use_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____import_or_use_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____import_or_use_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____include_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____include_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____include_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____include_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____maybe_abstract_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____maybe_abstract_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____maybe_abstract_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____maybe_abstract_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____missing_ancestor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____missing_ancestor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_ancestor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____missing_ancestor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_ancestor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____missing_ancestor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____missing_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____missing_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____missing_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_import_or_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____module_import_or_use_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_import_or_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____module_import_or_use_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____module_inclusion_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____module_inclusion_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____module_inclusion_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____module_inclusion_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____parent_or_ancestor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____parent_or_ancestor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____parent_or_ancestor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____parent_or_ancestor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____seen_includes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_import_accessibility____Unify____seen_includes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility____Compare____seen_includes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_import_accessibility____Compare____seen_includes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__check_import_accessibility__init(void)
{
}

void mercury__parse_tree__check_import_accessibility__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_accessibility_info_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_map_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_where_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_module_import_or_use_map_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_module_inclusion_map_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_parent_or_ancestor_0);
  MR_register_type_ctor_info(&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_seen_includes_0);
}

void mercury__parse_tree__check_import_accessibility__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__check_import_accessibility__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.check_import_accessibility.
