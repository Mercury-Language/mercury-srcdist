/*
** Automatically generated from `check_import_accessibility.m'
** by the Mercury compiler,
** version rotd-2024-08-18
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__maybe__pti_maybe_1__plain_parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_import_accessibility__one_or_more__pti_one_or_more_1__plain_parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0;

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

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_2;

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_1[1];

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_where_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_where_0[3];

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_where_0[3];

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
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__499__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__480__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__452__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__692__1_3_p_0(
  MR_Word HeadVar__1_135,
  MR_Word HeadVar__2_136,
  MR_Word * HeadVar__3_137);

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__680__1_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word HeadVar__2_126,
  MR_Word * HeadVar__3_127);

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
parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MissingWhere_8,
  MR_Word MissingModuleName_9,
  MR_Word SrcIntInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_6(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0(
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
parse_tree__check_import_accessibility__record_avails_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportUseMap_0_2,
  MR_Word * STATE_VARIABLE_ImportUseMap_3);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_1(
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
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_2(
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
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_1(
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
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_5(
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
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_4(
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
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_3(
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
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_2(
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
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_1(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(
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


static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_1[62][2];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_2[11][3];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_4[4][9];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_5[15][5];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_6[8][15];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_7[1][4];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_8[2][8];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_9[2][10];

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_10[1][6];




static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_1[62][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the interface"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the absence of an"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "prevents access"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for its"))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Adding such a declaration would obsolete"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[33])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has a submodule named"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but it is"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "visible only to its other submodules."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a submodule"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a visible submodule"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not have"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[34]))),
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
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_10[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_10[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_8[1])),
    ((MR_Box) (parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_8[1])),
    ((MR_Box) (parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[13])),
    ((MR_Box) (parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0_1)),
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

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_4[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__maybe__pti_maybe_1__plain_parse_tree__check_import_accessibility__type_ctor_info_maybe_abstract_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
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
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_seen_includes_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_where_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_5[15][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[1])))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_2)),
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
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[1])))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_3[0])))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[0])),
    ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_5)),
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

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_6[8][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_include_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__check_import_accessibility__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_8[2][8] = {
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

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_9[2][10] = {
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

static /* final */ const MR_Box parse_tree__check_import_accessibility_scalar_common_10[1][6] = {
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

static const MR_DuFunctorDesc parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_2 = {
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

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_0[2] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_2
};

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_stag_ordered_missing_where_0_1[1] = { &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_0 };

static const MR_DuPtagLayout parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_ptag_ordered_missing_where_0[2] = {
  {
    UINT32_C(2),
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

static const MR_DuFunctorDescPtr parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_name_ordered_missing_where_0[3] = {
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_2,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_1,
  &parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__du_functor_desc_missing_where_0_0
};

static const MR_Integer parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__functor_number_map_missing_where_0[3] = {
  (MR_Integer) 2,
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
  (MR_Integer) 3,
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
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__499__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__480__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__452__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__692__1_3_p_0(
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
parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__680__1_3_p_0(
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
  Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), TailA_130, Var_134);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_127 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadA_129));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_133));
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility____Unify____missing_where_0_0(
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
            TypeInfo_11_11 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Module_3));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__check_import_accessibility__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Context_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return Context_4;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2)
{
  MR_bool succeeded;
  MR_Word MaybeAbstractInclude_3 = ((MR_Unsigned) ((MR_hl_field(0, IncludeContext_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
      SubmodulePieces_12 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[52]));
      break;
    case (MR_Integer) 0:
      SubmodulePieces_12 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[54]));
      break;
  }
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (ParentModule_8));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
  Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[58])));
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (SubModule_9));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[61])));
  }
  Var_48 = parse_tree__error_spec__color_as_subject_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[33])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[60])), Var_47);
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubmodulePieces_12, Var_42);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_41);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_35);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[56])), Var_30);
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
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (ParentModule_6));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[44])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[42])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[41])));
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
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[46])));
  }
  Var_27 = parse_tree__error_spec__color_as_subject_1_f_0(Var_28);
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[50])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[33])));
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[48])), Var_39);
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
  MR_Word HeadIoUC_14 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 0))));
  MR_Word TailIoUCs_15 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 1))));
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
parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0_1(
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
parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0(
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
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_85;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_99;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_116;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Box conv1_ModuleS_22;
  MR_Box conv2_DeclarationS_23;
  MR_Word IoUCs_27;
  MR_Word TypeInfo_172_172;
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
      DeclPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[9]));
      break;
    case (MR_Integer) 0:
      DeclPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[10]));
      break;
    case (MR_Integer) 1:
      DeclPieces_18 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[5]));
      break;
  }
  switch (MR_tag((MR_Word) MissingWhere_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InTheInterface_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      InTheInterface_20 = (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[12]));
      break;
  }
  DescendantPieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[9]), DescendantModuleNames_16);
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
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[20])));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[13])));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
  }
  Var_80 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[10])));
  Var_91 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[25])));
  {
    Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_108, 1) = ((MR_Box) (MissingModuleName_9));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, InTheInterface_20);
  Var_105 = parse_tree__error_spec__color_as_subject_1_f_0(Var_106);
  Var_111 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[29])));
  {
    Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_124, 1) = ((MR_Box) (DeclarationS_23));
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_132, 1) = ((MR_Box) (ChildOrDescendant_17));
  }
  {
    Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_134, 1) = ((MR_Box) (ModuleS_22));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[32])));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_131));
  }
  Var_137 = parse_tree__error_spec__piece_list_to_pieces_2_f_0((MR_String) "and", DescendantPieces_21);
  Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[35])));
  Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_128, Var_136);
  Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InTheInterface_20, Var_127);
  Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_126);
  Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclPieces_18, Var_122);
  Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[31])), Var_121);
  Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_116);
  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_110);
  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[27])), Var_104);
  Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_99);
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[22])), Var_90);
  Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_85);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_79);
  {
    MainMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainMsg_25, 0) = ((MR_Box) (LeastContext_15));
    MR_hl_field(0, MainMsg_25, 1) = ((MR_Box) (MainPieces_24));
  }
  succeeded = ((MR_tag((MR_Word) MissingWhere_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    SrcImpImportUseMap_26 = ((MR_Word) ((MR_hl_field(1, MissingWhere_8, (MR_Integer) 0))));
    TypeInfo_172_172 = (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_172_172, SrcImpImportUseMap_26, ((MR_Box) (MissingModuleName_9)), &conv3_IoUCs_27);
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
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_161;

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
      Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(3, Var_151, 1) = ((MR_Box) (ImportOrUseDecl_32));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_import_accessibility_scalar_common_1[40])));
    }
    {
      Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_147, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[37])));
      MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_150));
    }
    {
      ImpPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpPieces_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_import_accessibility_scalar_common_1[36])));
      MR_hl_field(1, ImpPieces_33, 1) = ((MR_Box) (Var_147));
    }
    {
      ImpMsg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImpMsg_34, 0) = ((MR_Box) (ImpContext_31));
      MR_hl_field(0, ImpMsg_34, 1) = ((MR_Box) (ImpPieces_33));
    }
    {
      Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_161, 0) = ((MR_Box) (ImpMsg_34));
      MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msgs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_35, 0) = ((MR_Box) (MainMsg_25));
      MR_hl_field(1, Msgs_35, 1) = ((MR_Box) (Var_161));
    }
  }
  else
    {
      Msgs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_35, 0) = ((MR_Box) (MainMsg_25));
      MR_hl_field(1, Msgs_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  {
    Spec_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_import_accessibility.report_missing_ancestor\'/6"));
    MR_hl_field(2, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_36, 3) = ((MR_Box) (Msgs_35));
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
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(1, ImportedModule_11, (MR_Integer) 0))));

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
        MR_Word HeadIoUC_17 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 0))));
        MR_Word TailIoUCs_18 = ((MR_Word) ((MR_hl_field(0, IoUCs_12, (MR_Integer) 1))));
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
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_or_use_context_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_import_and_or_use_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[8]), TailIoUCs_18, ((MR_Box) (ImportAndOrUse0_42)), &conv9_ImportAndOrUse_44, ((MR_Box) (HeadContext_32)), &conv8_LeastContext_45);
          ImportAndOrUse_44 = ((MR_Word) (conv9_ImportAndOrUse_44));
          LeastContext_45 = ((MR_Word) (conv8_LeastContext_45));
          {
            MissingAncestorInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingAncestorInfo_46, 0) = ((MR_Box) (ChildModules_43));
            MR_hl_field(0, MissingAncestorInfo_46, 1) = (MR_Box) (((((MR_Unsigned) (ParentOrAncestor_9) << 2)) | (MR_Unsigned) (ImportAndOrUse_44)));
            MR_hl_field(0, MissingAncestorInfo_46, 2) = ((MR_Box) (LeastContext_45));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), ((MR_Box) (ParentModule_14)), ((MR_Box) (MissingAncestorInfo_46)), STATE_VARIABLE_MissingAncestorMap_0_34, &STATE_VARIABLE_MissingAncestorMap_39_39);
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
parse_tree__check_import_accessibility__update_iu_and_least_context_5_p_0(
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
    MR_Word SectionImportOrUse_22 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, (MR_Integer) 0))));

    parse_tree__check_import_accessibility__record_avail_in_section_6_p_0(ModuleName_7, SectionImportOrUse_22, STATE_VARIABLE_IntImportUseMap_0_14, STATE_VARIABLE_IntImportUseMap_15, STATE_VARIABLE_ImpImportUseMap_0_16, STATE_VARIABLE_ImpImportUseMap_17);
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
        MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, SectionImportOrUse_8, (MR_Integer) 0))));
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
        MR_Word Context_29 = ((MR_Word) ((MR_hl_field(1, SectionImportOrUse_8, (MR_Integer) 0))));
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
        MR_Word Context_25 = ((MR_Word) ((MR_hl_field(2, SectionImportOrUse_8, (MR_Integer) 0))));
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
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_ImpImportUseMap_0_17, ((MR_Box) (ModuleName_7)), &conv1_OneOrMore0_46);
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
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_IntImportUseMap_0_15, ((MR_Box) (ModuleName_7)), &conv4_OneOrMore0_88);
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
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), STATE_VARIABLE_InclMap_0_22, ((MR_Box) (ModuleName_9)), &conv0_OneOrMore0_18);
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(
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
    parse_tree__check_import_accessibility__record_avails_acc_3_p_0(Avails_46, STATE_VARIABLE_AncestorImportUseMap_0_55, STATE_VARIABLE_AncestorImportUseMap_56);
  }
  else
    *STATE_VARIABLE_AncestorImportUseMap_56 = STATE_VARIABLE_AncestorImportUseMap_0_55;
  *STATE_VARIABLE_SrcImpImportUseMap_54 = STATE_VARIABLE_SrcImpImportUseMap_0_53;
  *STATE_VARIABLE_SrcIntImportUseMap_52 = STATE_VARIABLE_SrcIntImportUseMap_0_51;
  *STATE_VARIABLE_InclMap_50 = STATE_VARIABLE_InclMap_0_49;
  *STATE_VARIABLE_ReadModules_48 = STATE_VARIABLE_ReadModules_0_47;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__480__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_InclMap_23));
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__452__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(
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

        parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27, STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29, STATE_VARIABLE_SrcIntImportUseMap_0_30, STATE_VARIABLE_SrcIntImportUseMap_31, STATE_VARIABLE_SrcImpImportUseMap_0_32, STATE_VARIABLE_SrcImpImportUseMap_33, STATE_VARIABLE_AncestorImportUseMap_0_34, STATE_VARIABLE_AncestorImportUseMap_35);
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

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[9]), InclMap_36, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv1_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_29));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box conv3_STATE_VARIABLE_InclMap_29;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[10]), InclMap_36, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv3_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_29));
            }
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_InclMap_29 = STATE_VARIABLE_InclMap_0_28;
            break;
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_3));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_61, 3) = ((MR_Box) (Ancestors_13));
          MR_hl_field(0, Var_61, 4) = ((MR_Box) (ModuleName_37));
        }
        mercury__require__expect_not_3_p_0(Var_61, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int1\'/13", (MR_String) "processing the .int file of an ancestor");
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

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[11]), InclMap_69, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv5_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv5_STATE_VARIABLE_InclMap_29));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            {
              MR_Box conv7_STATE_VARIABLE_InclMap_29;

              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[12]), InclMap_69, ((MR_Box) (STATE_VARIABLE_InclMap_0_28)), &conv7_STATE_VARIABLE_InclMap_29);
              *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv7_STATE_VARIABLE_InclMap_29));
            }
            break;
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_89, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
          MR_hl_field(0, Var_89, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0_6));
          MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_89, 3) = ((MR_Box) (Ancestors_13));
          MR_hl_field(0, Var_89, 4) = ((MR_Box) (ModuleName_70));
        }
        mercury__require__expect_not_3_p_0(Var_89, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
        *STATE_VARIABLE_AncestorImportUseMap_35 = STATE_VARIABLE_AncestorImportUseMap_0_34;
        *STATE_VARIABLE_SrcImpImportUseMap_33 = STATE_VARIABLE_SrcImpImportUseMap_0_32;
        *STATE_VARIABLE_SrcIntImportUseMap_31 = STATE_VARIABLE_SrcIntImportUseMap_0_30;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__499__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(
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
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[8]), InclMap_33, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
  *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_34));
  }
  mercury__require__expect_not_3_p_0(Var_46, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int3 file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__499__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0(
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
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[7]), InclMap_33, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
  *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_34));
  }
  mercury__require__expect_not_3_p_0(Var_46, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int3 file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__480__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(
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

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[5]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        MR_Box conv3_STATE_VARIABLE_InclMap_25;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[6]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv3_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_25));
      }
      break;
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0_3));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (ModuleName_33));
  }
  mercury__require__expect_not_3_p_0(Var_52, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static MR_bool MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_import_accessibility__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__452__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0(
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

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[2]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv1_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv1_STATE_VARIABLE_InclMap_25));
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Box conv3_STATE_VARIABLE_InclMap_25;

        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[3]), InclMap_32, ((MR_Box) (STATE_VARIABLE_InclMap_0_24)), &conv3_STATE_VARIABLE_InclMap_25);
        *STATE_VARIABLE_InclMap_25 = ((MR_Word) (conv3_STATE_VARIABLE_InclMap_25));
      }
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_InclMap_25 = STATE_VARIABLE_InclMap_0_24;
      break;
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_5[4]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0_3));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Ancestors_13));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (ModuleName_33));
  }
  mercury__require__expect_not_3_p_0(Var_57, (MR_String) "predicate \140parse_tree.check_import_accessibility.record_includes_imports_uses_in_parse_tree_int1\'/13", (MR_String) "processing the .int file of an ancestor");
  *STATE_VARIABLE_AncestorImportUseMap_31 = STATE_VARIABLE_AncestorImportUseMap_0_30;
  *STATE_VARIABLE_SrcImpImportUseMap_29 = STATE_VARIABLE_SrcImpImportUseMap_0_28;
  *STATE_VARIABLE_SrcIntImportUseMap_27 = STATE_VARIABLE_SrcIntImportUseMap_0_26;
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25, STATE_VARIABLE_SrcIntImportUseMap_0_26, STATE_VARIABLE_SrcIntImportUseMap_27, STATE_VARIABLE_SrcImpImportUseMap_0_28, STATE_VARIABLE_SrcImpImportUseMap_29, STATE_VARIABLE_AncestorImportUseMap_0_30, STATE_VARIABLE_AncestorImportUseMap_31);
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0(
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
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[1]), InclMap_23, ((MR_Box) (STATE_VARIABLE_MaybeAbstractInclMap_0_49)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_50);
  *STATE_VARIABLE_MaybeAbstractInclMap_50 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_50));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_13, ((MR_Box) (ModuleName_20)));
  if (succeeded)
  {
    MR_Word IntAvails_44;
    MR_Word ImpAvails_45;
    MR_Word AllAvails_46;

    parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0(ImportUseMap_24, &IntAvails_44, &ImpAvails_45);
    AllAvails_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_44, ImpAvails_45);
    parse_tree__check_import_accessibility__record_avails_acc_3_p_0(AllAvails_46, STATE_VARIABLE_AncestorImportUseMap_0_55, STATE_VARIABLE_AncestorImportUseMap_56);
  }
  else
    *STATE_VARIABLE_AncestorImportUseMap_56 = STATE_VARIABLE_AncestorImportUseMap_0_55;
  *STATE_VARIABLE_SrcImpImportUseMap_54 = STATE_VARIABLE_SrcImpImportUseMap_0_53;
  *STATE_VARIABLE_SrcIntImportUseMap_52 = STATE_VARIABLE_SrcIntImportUseMap_0_51;
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
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (ModuleName_10)), &conv0_OneOrMore0_15);
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
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_18)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
      }
      else
      {
        MR_Word OneOrMore_30;

        {
          OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OneOrMore_30, 0) = ((MR_Box) (IoUC_14));
          MR_hl_field(0, OneOrMore_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), ((MR_Box) (ModuleName_10)), ((MR_Box) (OneOrMore_30)), STATE_VARIABLE_ImportUseMap_0_2, &STATE_VARIABLE_ImportUseMap_24_24);
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
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Specs_38;

  parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Specs_38);
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_38));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Specs_38;

  parse_tree__check_import_accessibility__report_missing_ancestor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Specs_38);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_38));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_MissingAncestorMap_35;

  parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_MissingAncestorMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MissingAncestorMap_35));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_137;

  parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__692__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_137);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_137));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_MissingAncestorMap_35;

  parse_tree__check_import_accessibility__find_any_missing_ancestor_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_MissingAncestorMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_MissingAncestorMap_35));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_127;

  parse_tree__check_import_accessibility__IntroducedFrom__pred__check_import_accessibility__680__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_127);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_127));
}

static void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  parse_tree__check_import_accessibility__report_any_missing_includes_for_imports_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
}

void MR_CALL 
parse_tree__check_import_accessibility__check_import_accessibility_3_p_0(
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
  parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0(ReadModules_9, SeenIncludes_10, InclMap_11, ModuleName_7, Var_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_24_24);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_9[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (ReadModules_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (SeenIncludes_10));
    MR_hl_field(0, Var_26, 5) = ((MR_Box) (InclMap_11));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_26, SrcIntImportUseMap_12, ((MR_Box) (STATE_VARIABLE_Specs_24_24)), &conv1_STATE_VARIABLE_Specs_27_27);
  STATE_VARIABLE_Specs_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_27_27));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_26, SrcImpImportUseMap_13, ((MR_Box) (STATE_VARIABLE_Specs_27_27)), &conv2_STATE_VARIABLE_Specs_29_29);
  STATE_VARIABLE_Specs_29_29 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_29_29));
  mercury__map__union_4_p_1((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[5]), SrcIntImportUseMap_12, AncestorImportUseMap_14, &SrcIntAncImportUseMap_15);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_9[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_3));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (SrcIntAncImportUseMap_15));
  }
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[2]), Var_31, SrcIntImportUseMap_12, ((MR_Box) (Var_32)), &conv5_SrcIntMissingAncestorMap_16);
  SrcIntMissingAncestorMap_16 = ((MR_Word) (conv5_SrcIntMissingAncestorMap_16));
  mercury__map__union_4_p_1((MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[6]), SrcIntAncImportUseMap_15, SrcImpImportUseMap_13, &SrcIntImpImportUseMap_17);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_9[1]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_5));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (SrcIntImpImportUseMap_17));
  }
  Var_36 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[2]), Var_35, SrcImpImportUseMap_13, ((MR_Box) (Var_36)), &conv8_SrcImpMissingAncestorMap0_18);
  SrcImpMissingAncestorMap0_18 = ((MR_Word) (conv8_SrcImpMissingAncestorMap0_18));
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestorMap_16, &SrcIntMissingAncestors_19);
  mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestors_19, SrcImpMissingAncestorMap0_18, &SrcImpMissingAncestorMap_20);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (SrcImpImportUseMap_13));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[3]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_6));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (Var_40));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_38, SrcIntMissingAncestorMap_16, ((MR_Box) (STATE_VARIABLE_Specs_29_29)), &conv10_STATE_VARIABLE_Specs_39_39);
  STATE_VARIABLE_Specs_39_39 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_39_39));
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[3]));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__check_import_accessibility__check_import_accessibility_3_p_0_7));
    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_41, 3) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_41, SrcImpMissingAncestorMap_20, ((MR_Box) (STATE_VARIABLE_Specs_39_39)), &conv12_STATE_VARIABLE_Specs_21);
  *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_21));
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

  parse_tree__check_import_accessibility__report_missing_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_import_accessibility__report_abstract_include_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_13);
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
      MR_Word ParentModule_14 = ((MR_Word) ((MR_hl_field(1, Module_11, (MR_Integer) 0))));
      MR_String SubModule_15 = ((MR_String) ((MR_hl_field(1, Module_11, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_25_25;
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
        MR_Word HeadIncludeContext_17 = ((MR_Word) ((MR_hl_field(0, IncludeContexts_16, (MR_Integer) 0))));
        MR_Word TailIncludeContexts_18 = ((MR_Word) ((MR_hl_field(0, IncludeContexts_16, (MR_Integer) 1))));
        MR_Word IncludeContextsList_19;

        {
          IncludeContextsList_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IncludeContextsList_19, 0) = ((MR_Box) (HeadIncludeContext_17));
          MR_hl_field(1, IncludeContextsList_19, 1) = ((MR_Box) (TailIncludeContexts_18));
        }
        succeeded = mercury__list__any_true_2_p_0((MR_Word) (&parse_tree__check_import_accessibility__parse_tree__check_import_accessibility__type_ctor_info_include_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[4]), IncludeContextsList_19);
        if (succeeded)
          STATE_VARIABLE_Specs_25_25 = STATE_VARIABLE_Specs_0_21;
        else
        {
          MR_Word Var_24;
          MR_Box conv2_STATE_VARIABLE_Specs_25_25;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_8[0]));
            MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_2));
            MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_24, 3) = ((MR_Box) (ParentModule_14));
            MR_hl_field(0, Var_24, 4) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_24, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv2_STATE_VARIABLE_Specs_25_25);
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
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_4[2]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__check_import_accessibility__report_any_missing_includes_7_p_0_3));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (SeenIncludes_9));
            MR_hl_field(0, Var_26, 4) = ((MR_Box) (ParentModule_14));
            MR_hl_field(0, Var_26, 5) = ((MR_Box) (SubModule_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[3]), Var_26, Contexts_12, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv4_STATE_VARIABLE_Specs_25_25);
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
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_3(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int3_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_31));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_2(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int3_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_31));
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_int0_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReadModules_48, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_MaybeAbstractInclMap_50, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_SrcIntImportUseMap_52, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_SrcImpImportUseMap_54, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_AncestorImportUseMap_56);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReadModules_48));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeAbstractInclMap_50));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_SrcIntImportUseMap_52));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_SrcImpImportUseMap_54));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_56));
}

void MR_CALL 
parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0(
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
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), &STATE_VARIABLE_InclMap_18_18);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcIntImportUseMap_19_19);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcImpImportUseMap_20_20);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_AncestorImportUseMap_21_21);
  ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, (MR_Integer) 0))));
  Ancestors_16 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_15);
  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_17_17, &STATE_VARIABLE_ReadModules_22_22, STATE_VARIABLE_InclMap_18_18, &STATE_VARIABLE_InclMap_23_23, STATE_VARIABLE_SrcIntImportUseMap_19_19, &STATE_VARIABLE_SrcIntImportUseMap_24_24, STATE_VARIABLE_SrcImpImportUseMap_20_20, &STATE_VARIABLE_SrcImpImportUseMap_25_25, STATE_VARIABLE_AncestorImportUseMap_21_21, &STATE_VARIABLE_AncestorImportUseMap_26_26);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[5]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Ancestors_16));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_22_22)), &conv9_STATE_VARIABLE_ReadModules_28_28, ((MR_Box) (STATE_VARIABLE_InclMap_23_23)), &conv8_STATE_VARIABLE_InclMap_29_29, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_24_24)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_25_25)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_26_26)), &conv5_STATE_VARIABLE_AncestorImportUseMap_32_32);
  STATE_VARIABLE_ReadModules_28_28 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_28_28));
  STATE_VARIABLE_InclMap_29_29 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_29_29));
  STATE_VARIABLE_SrcIntImportUseMap_30_30 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_30_30));
  STATE_VARIABLE_SrcImpImportUseMap_31_31 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_31_31));
  STATE_VARIABLE_AncestorImportUseMap_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_32_32));
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[6]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Ancestors_16));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int3_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_33, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_28_28)), &conv19_STATE_VARIABLE_ReadModules_34_34, ((MR_Box) (STATE_VARIABLE_InclMap_29_29)), &conv18_STATE_VARIABLE_InclMap_35_35, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_30_30)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_31_31)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_32_32)), &conv15_STATE_VARIABLE_AncestorImportUseMap_38_38);
  STATE_VARIABLE_ReadModules_34_34 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_34_34));
  STATE_VARIABLE_InclMap_35_35 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_35_35));
  STATE_VARIABLE_SrcIntImportUseMap_36_36 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_36_36));
  STATE_VARIABLE_SrcImpImportUseMap_37_37 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_37_37));
  STATE_VARIABLE_AncestorImportUseMap_38_38 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_38_38));
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[7]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_make_int_unit_get_import_accessibility_info_2_p_0_3));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Ancestors_16));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int3_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_39, IndirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_34_34)), &conv29_STATE_VARIABLE_ReadModules_40_40, ((MR_Box) (STATE_VARIABLE_InclMap_35_35)), &conv28_STATE_VARIABLE_InclMap_41_41, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_36_36)), &conv27_STATE_VARIABLE_SrcIntImportUseMap_42_42, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_37_37)), &conv26_STATE_VARIABLE_SrcImpImportUseMap_43_43, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_38_38)), &conv25_STATE_VARIABLE_AncestorImportUseMap_44_44);
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
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_5(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_int_for_opt_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_STATE_VARIABLE_ReadModules_27, ((MR_Word) (wrapper_arg_4)), &conv43_STATE_VARIABLE_InclMap_29, ((MR_Word) (wrapper_arg_6)), &conv42_STATE_VARIABLE_SrcIntImportUseMap_31, ((MR_Word) (wrapper_arg_8)), &conv41_STATE_VARIABLE_SrcImpImportUseMap_33, ((MR_Word) (wrapper_arg_10)), &conv40_STATE_VARIABLE_AncestorImportUseMap_35);
  *wrapper_arg_3 = ((MR_Box) (conv44_STATE_VARIABLE_ReadModules_27));
  *wrapper_arg_5 = ((MR_Box) (conv43_STATE_VARIABLE_InclMap_29));
  *wrapper_arg_7 = ((MR_Box) (conv42_STATE_VARIABLE_SrcIntImportUseMap_31));
  *wrapper_arg_9 = ((MR_Box) (conv41_STATE_VARIABLE_SrcImpImportUseMap_33));
  *wrapper_arg_11 = ((MR_Box) (conv40_STATE_VARIABLE_AncestorImportUseMap_35));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_4(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_plain_opt_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_ReadModules_48, ((MR_Word) (wrapper_arg_4)), &conv33_STATE_VARIABLE_InclMap_50, ((MR_Word) (wrapper_arg_6)), &conv32_STATE_VARIABLE_SrcIntImportUseMap_52, ((MR_Word) (wrapper_arg_8)), &conv31_STATE_VARIABLE_SrcImpImportUseMap_54, ((MR_Word) (wrapper_arg_10)), &conv30_STATE_VARIABLE_AncestorImportUseMap_56);
  *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_ReadModules_48));
  *wrapper_arg_5 = ((MR_Box) (conv33_STATE_VARIABLE_InclMap_50));
  *wrapper_arg_7 = ((MR_Box) (conv32_STATE_VARIABLE_SrcIntImportUseMap_52));
  *wrapper_arg_9 = ((MR_Box) (conv31_STATE_VARIABLE_SrcImpImportUseMap_54));
  *wrapper_arg_11 = ((MR_Box) (conv30_STATE_VARIABLE_AncestorImportUseMap_56));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_3(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_indirect_int2_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_31));
}

static void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_2(
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_direct_int1_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_31));
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

  parse_tree__check_import_accessibility__record_includes_imports_uses_in_ancestor_int_spec_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReadModules_23, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_InclMap_25, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_SrcIntImportUseMap_27, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_SrcImpImportUseMap_29, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_AncestorImportUseMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReadModules_23));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_InclMap_25));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_SrcIntImportUseMap_27));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_SrcImpImportUseMap_29));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_AncestorImportUseMap_31));
}

void MR_CALL 
parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0(
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
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[0]), &STATE_VARIABLE_InclMap_22_22);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcIntImportUseMap_23_23);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_SrcImpImportUseMap_24_24);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[1]), &STATE_VARIABLE_AncestorImportUseMap_25_25);
  ModuleName_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, (MR_Integer) 0))));
  Ancestors_20 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_19);
  parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_5, STATE_VARIABLE_ReadModules_21_21, &STATE_VARIABLE_ReadModules_26_26, STATE_VARIABLE_InclMap_22_22, &STATE_VARIABLE_InclMap_27_27, STATE_VARIABLE_SrcIntImportUseMap_23_23, &STATE_VARIABLE_SrcIntImportUseMap_28_28, STATE_VARIABLE_SrcImpImportUseMap_24_24, &STATE_VARIABLE_SrcImpImportUseMap_29_29, STATE_VARIABLE_AncestorImportUseMap_25_25, &STATE_VARIABLE_AncestorImportUseMap_30_30);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_31, AncestorIntSpecs_6, ((MR_Box) (STATE_VARIABLE_ReadModules_26_26)), &conv9_STATE_VARIABLE_ReadModules_32_32, ((MR_Box) (STATE_VARIABLE_InclMap_27_27)), &conv8_STATE_VARIABLE_InclMap_33_33, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_28_28)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_29_29)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_30_30)), &conv5_STATE_VARIABLE_AncestorImportUseMap_36_36);
  STATE_VARIABLE_ReadModules_32_32 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_32_32));
  STATE_VARIABLE_InclMap_33_33 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_33_33));
  STATE_VARIABLE_SrcIntImportUseMap_34_34 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_34_34));
  STATE_VARIABLE_SrcImpImportUseMap_35_35 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_35_35));
  STATE_VARIABLE_AncestorImportUseMap_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_36_36));
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[1]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_2));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, DirectIntSpecs_7, ((MR_Box) (STATE_VARIABLE_ReadModules_32_32)), &conv19_STATE_VARIABLE_ReadModules_38_38, ((MR_Box) (STATE_VARIABLE_InclMap_33_33)), &conv18_STATE_VARIABLE_InclMap_39_39, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_34_34)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_35_35)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_36_36)), &conv15_STATE_VARIABLE_AncestorImportUseMap_42_42);
  STATE_VARIABLE_ReadModules_38_38 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_38_38));
  STATE_VARIABLE_InclMap_39_39 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_39_39));
  STATE_VARIABLE_SrcIntImportUseMap_40_40 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_40_40));
  STATE_VARIABLE_SrcImpImportUseMap_41_41 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_41_41));
  STATE_VARIABLE_AncestorImportUseMap_42_42 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_42_42));
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[2]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_3));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_43, IndirectIntSpecs_8, ((MR_Box) (STATE_VARIABLE_ReadModules_38_38)), &conv29_STATE_VARIABLE_ReadModules_44_44, ((MR_Box) (STATE_VARIABLE_InclMap_39_39)), &conv28_STATE_VARIABLE_InclMap_45_45, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_40_40)), &conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_41_41)), &conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_42_42)), &conv25_STATE_VARIABLE_AncestorImportUseMap_48_48);
  STATE_VARIABLE_ReadModules_44_44 = ((MR_Word) (conv29_STATE_VARIABLE_ReadModules_44_44));
  STATE_VARIABLE_InclMap_45_45 = ((MR_Word) (conv28_STATE_VARIABLE_InclMap_45_45));
  STATE_VARIABLE_SrcIntImportUseMap_46_46 = ((MR_Word) (conv27_STATE_VARIABLE_SrcIntImportUseMap_46_46));
  STATE_VARIABLE_SrcImpImportUseMap_47_47 = ((MR_Word) (conv26_STATE_VARIABLE_SrcImpImportUseMap_47_47));
  STATE_VARIABLE_AncestorImportUseMap_48_48 = ((MR_Word) (conv25_STATE_VARIABLE_AncestorImportUseMap_48_48));
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[3]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_4));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, PlainOpts_9, ((MR_Box) (STATE_VARIABLE_ReadModules_44_44)), &conv39_STATE_VARIABLE_ReadModules_50_50, ((MR_Box) (STATE_VARIABLE_InclMap_45_45)), &conv38_STATE_VARIABLE_InclMap_51_51, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_46_46)), &conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_47_47)), &conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_48_48)), &conv35_STATE_VARIABLE_AncestorImportUseMap_54_54);
  STATE_VARIABLE_ReadModules_50_50 = ((MR_Word) (conv39_STATE_VARIABLE_ReadModules_50_50));
  STATE_VARIABLE_InclMap_51_51 = ((MR_Word) (conv38_STATE_VARIABLE_InclMap_51_51));
  STATE_VARIABLE_SrcIntImportUseMap_52_52 = ((MR_Word) (conv37_STATE_VARIABLE_SrcIntImportUseMap_52_52));
  STATE_VARIABLE_SrcImpImportUseMap_53_53 = ((MR_Word) (conv36_STATE_VARIABLE_SrcImpImportUseMap_53_53));
  STATE_VARIABLE_AncestorImportUseMap_54_54 = ((MR_Word) (conv35_STATE_VARIABLE_AncestorImportUseMap_54_54));
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&parse_tree__check_import_accessibility_scalar_common_6[4]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (parse_tree__check_import_accessibility__aug_comp_unit_get_import_accessibility_info_2_p_0_5));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Ancestors_20));
  }
  mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_1[2]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_55, IntForOptSpecs_11, ((MR_Box) (STATE_VARIABLE_ReadModules_50_50)), &conv49_STATE_VARIABLE_ReadModules_56_56, ((MR_Box) (STATE_VARIABLE_InclMap_51_51)), &conv48_STATE_VARIABLE_InclMap_57_57, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_52_52)), &conv47_STATE_VARIABLE_SrcIntImportUseMap_58_58, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_53_53)), &conv46_STATE_VARIABLE_SrcImpImportUseMap_59_59, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_54_54)), &conv45_STATE_VARIABLE_AncestorImportUseMap_60_60);
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_2(
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
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InclMap_23;

  parse_tree__check_import_accessibility__record_include_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InclMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InclMap_23));
}

static void MR_CALL 
parse_tree__check_import_accessibility__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(
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
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[0]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_5[0]), InclMap_20, ((MR_Box) (STATE_VARIABLE_MaybeAbstractInclMap_0_56)), &conv1_STATE_VARIABLE_MaybeAbstractInclMap_57);
  *STATE_VARIABLE_MaybeAbstractInclMap_57 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeAbstractInclMap_57));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[1]), (MR_Word) (&parse_tree__check_import_accessibility_scalar_common_2[3]), ImportUseMap_21, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_0_58)), &conv5_STATE_VARIABLE_SrcIntImportUseMap_59, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_0_60)), &conv4_STATE_VARIABLE_SrcImpImportUseMap_61);
  *STATE_VARIABLE_SrcIntImportUseMap_59 = ((MR_Word) (conv5_STATE_VARIABLE_SrcIntImportUseMap_59));
  *STATE_VARIABLE_SrcImpImportUseMap_61 = ((MR_Word) (conv4_STATE_VARIABLE_SrcImpImportUseMap_61));
  *STATE_VARIABLE_AncestorImportUseMap_63 = STATE_VARIABLE_AncestorImportUseMap_0_62;
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
