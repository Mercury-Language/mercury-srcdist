/*
** Automatically generated from `grab_modules.m'
** by the Mercury compiler,
** version rotd-2021-07-19
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

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

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_ancestor_info_0_0[4];

static const MR_ConstString parse_tree__grab_modules__parse_tree__grab_modules__field_names_missing_ancestor_info_0_0[4];

static const MR_DuArgLocn parse_tree__grab_modules__parse_tree__grab_modules__field_locns_missing_ancestor_info_0_0[4];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_ancestor_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_ancestor_info_0_0[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_ancestor_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_ancestor_info_0[1];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_ancestor_info_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0;

static const MR_PseudoTypeInfo parse_tree__grab_modules__parse_tree__grab_modules__field_types_missing_where_0_0[1];

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_0;

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_1;

static const MR_DuFunctorDesc parse_tree__grab_modules__parse_tree__grab_modules__du_functor_desc_missing_where_0_2;

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_stag_ordered_missing_where_0_1[1];

static const MR_DuPtagLayout parse_tree__grab_modules__parse_tree__grab_modules__du_ptag_ordered_missing_where_0[2];

static const MR_DuFunctorDescPtr parse_tree__grab_modules__parse_tree__grab_modules__du_name_ordered_missing_where_0[3];

static const MR_Integer parse_tree__grab_modules__parse_tree__grab_modules__functor_number_map_missing_where_0[3];

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0;

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

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1357__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1353__1_2_p_0(
  MR_Word ImpIncls_35,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1333__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1303__1_2_p_0(
  MR_Word Ancestors_14,
  MR_Word ModuleName_22);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__962__1_3_p_0(
  MR_Word HeadVar__1_74,
  MR_Word HeadVar__2_75,
  MR_Word * HeadVar__3_76);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__950__1_3_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_65,
  MR_Word * HeadVar__3_66);

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__413__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_19);

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

static MR_Word MR_CALL 
parse_tree__grab_modules__project_out_import_or_use_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__grab_modules__is_non_abstract_include_1_p_0(
  MR_Word IncludeContext_2);

static void MR_CALL 
parse_tree__grab_modules__report_missing_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__grab_modules__report_abstract_include_5_p_0(
  MR_Word ParentModule_6,
  MR_String SubModule_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_for_imports_6_p_0(
  MR_Word ReadModules_7,
  MR_Word InclMap_8,
  MR_Word ModuleName_9,
  MR_Word IoUCs_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

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

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_24,
  MR_Word * STATE_VARIABLE_ReadModules_25,
  MR_Word STATE_VARIABLE_InclMap_0_26,
  MR_Word * STATE_VARIABLE_InclMap_27,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_29,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_31,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_32,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_33);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt2_15,
  MR_Word ReadWhyInt2_16,
  MR_Word STATE_VARIABLE_ReadModules_0_39,
  MR_Word * STATE_VARIABLE_ReadModules_40,
  MR_Word STATE_VARIABLE_InclMap_0_41,
  MR_Word * STATE_VARIABLE_InclMap_42,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_43,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_44,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_45,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_46,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_47,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_48);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word DirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_24,
  MR_Word * STATE_VARIABLE_ReadModules_25,
  MR_Word STATE_VARIABLE_InclMap_0_26,
  MR_Word * STATE_VARIABLE_InclMap_27,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_29,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_31,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_32,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_33);

static MR_bool MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt3_15,
  MR_Word STATE_VARIABLE_ReadModules_0_36,
  MR_Word * STATE_VARIABLE_ReadModules_37,
  MR_Word STATE_VARIABLE_InclMap_0_38,
  MR_Word * STATE_VARIABLE_InclMap_39,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_40,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_41,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_42,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_43,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_44,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_45);

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt1_15,
  MR_Word ReadWhyInt1_16,
  MR_Word STATE_VARIABLE_ReadModules_0_48,
  MR_Word * STATE_VARIABLE_ReadModules_49,
  MR_Word STATE_VARIABLE_InclMap_0_50,
  MR_Word * STATE_VARIABLE_InclMap_51,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_52,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_53,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_54,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_55,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_56,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_57);

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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_51_93_95_48_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt0_15,
  MR_Word STATE_VARIABLE_ReadModules_0_60,
  MR_Word * STATE_VARIABLE_ReadModules_61,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_62,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_63,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_64,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_65,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_66,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_67,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_68,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_69);

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
parse_tree__grab_modules__grab_trans_opt_files_9_p_0_1(
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
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0_1(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy3_13,
  MR_Word Modules_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_19,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_21,
  MR_Word * STATE_VARIABLE_ModuleAndImports_22);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_7,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_8,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_9,
  MR_Word * STATE_VARIABLE_ModuleAndImports_10);

static void MR_CALL 
parse_tree__grab_modules__process_module_int3_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy3_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt3_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_27,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30);

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_5(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_4(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_3(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_2(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_1(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word ParseTreeModuleSrc_15,
  MR_Word AncestorIntSpecs_16,
  MR_Word DirectIntSpecs_17,
  MR_Word IndirectIntSpecs_18,
  MR_Word PlainOpts_19,
  MR_Word IntForOptSpecs_21,
  MR_Word * STATE_VARIABLE_ReadModules_28,
  MR_Word * STATE_VARIABLE_InclMap_29,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_30,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_31,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_32);

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
  MR_Word STATE_VARIABLE_ReadModules_0_68,
  MR_Word * STATE_VARIABLE_ReadModules_69,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_70,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_71,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_72,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_73,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_74,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_75,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_76,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_77);

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
parse_tree__grab_modules__report_any_missing_includes_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_6_p_0(
  MR_Word ReadModules_7,
  MR_Word InclMap_8,
  MR_Word Module_9,
  MR_Word Contexts_10,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12);

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy1_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt1_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_28,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_29,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_30,
  MR_Word * STATE_VARIABLE_ModuleAndImports_31);

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
  MR_Word MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_18,
  MR_Word * STATE_VARIABLE_ModuleAndImports_19);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12);

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy0_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_26,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_27,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_28,
  MR_Word * STATE_VARIABLE_ModuleAndImports_29);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy2_13,
  MR_Word Modules_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_19,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_21,
  MR_Word * STATE_VARIABLE_ModuleAndImports_22);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy2_15,
  MR_Word Modules_16,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_22,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_23,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_26,
  MR_Word * STATE_VARIABLE_ModuleAndImports_27);

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12);

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy2_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt2_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_26,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_27,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_28,
  MR_Word * STATE_VARIABLE_ModuleAndImports_29);

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word ModuleAndImports_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6);

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


static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_1[15][3];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[43][2];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_3[6][1];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_4[3][4];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_5[3][8];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[5][15];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][9];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_8[3][6];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[1][10];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_10[2][7];

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_11[6][5];




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
    ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[0])),
    ((MR_Box) (parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__grab_modules__grab_trans_opt_files_9_p_0_1)),
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
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[4])),
    ((MR_Box) (parse_tree__grab_modules__report_missing_ancestor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[5])),
    ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_for_imports_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_2[43][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the absence of an"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "prevents access to the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for its"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Adding such a declaration would obsolete"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[25])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a submodule named"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is visible only to its other submodules."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[25])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have a submodule named"))
  },
  /* row 42 */
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_6[5][15] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0)),
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
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__grab_modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_where_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_9[1][10] = {
  /* row 0 */
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

static /* final */ const MR_Box parse_tree__grab_modules_scalar_common_11[6][5] = {
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
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 5 */
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
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__one_or_more__pti_one_or_more_1__plain_parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__grab_modules__tree234__pti_tree234_2__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0__plain_term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__grab_modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)
  }
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

static const MR_FA_TypeInfo_Struct1 parse_tree__grab_modules__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
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

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_import_or_use_context_0)
  }
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

static const MR_FA_TypeInfo_Struct2 parse_tree__grab_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__grab_modules__one_or_more__ti_one_or_more_1parse_tree__grab_modules__type_ctor_info_include_context_0)
  }
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

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1357__1_2_p_0(
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
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1353__1_2_p_0(
  MR_Word ImpIncls_35,
  MR_Word HeadVar__2_50)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[6]), ((MR_Box) (ImpIncls_35)), ((MR_Box) (HeadVar__2_50)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1333__1_2_p_0(
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
parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1303__1_2_p_0(
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
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__962__1_3_p_0(
  MR_Word HeadVar__1_74,
  MR_Word HeadVar__2_75,
  MR_Word * HeadVar__3_76)
{
  parse_tree__grab_modules__append_one_or_more_3_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), HeadVar__1_74, HeadVar__2_75, HeadVar__3_76);
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__950__1_3_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_65,
  MR_Word * HeadVar__3_66)
{
  parse_tree__grab_modules__append_one_or_more_3_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), HeadVar__1_64, HeadVar__2_65, HeadVar__3_66);
}

static void MR_CALL 
parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__413__1_4_p_0(
  MR_Word Stream_5,
  MR_String HeadVar__2_19)
{
  mercury__io__write_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Stream_5, ((MR_Box) (HeadVar__2_19)));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
parse_tree__grab_modules__report_missing_include_5_p_0(
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
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[27])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[41])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[35])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[34])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_missing_include\'/5"));
      MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[40])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[36])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[35])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[34])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.grab_modules.report_abstract_include\'/5"));
      MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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
parse_tree__grab_modules__report_any_missing_includes_for_imports_6_p_0_1(
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
parse_tree__grab_modules__report_any_missing_includes_for_imports_6_p_0(
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
    Contexts_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_import_or_use_context_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[14]), Var_18);
    parse_tree__grab_modules__report_any_missing_includes_6_p_0(ReadModules_7, InclMap_8, ModuleName_9, Contexts_14, STATE_VARIABLE_Specs_0_15, STATE_VARIABLE_Specs_16);
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
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[12]));
        break;
      case (MR_Integer) 0:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[13]));
        break;
      case (MR_Integer) 1:
        DeclPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[8]));
        break;
    }
    switch (MR_tag((MR_Word) MissingWhere_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InTheInterface_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        InTheInterface_20 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[15]));
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
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[21])));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[7])));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[20])));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[11])));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[19])));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[18])));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[17])));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[16])));
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
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[24])));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
    }
    Var_115 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", DescendantPieces_21);
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_115, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[27])));
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_106, Var_114);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InTheInterface_20, Var_105);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_101, Var_104);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DeclPieces_18, Var_100);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[23])), Var_99);
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
        MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ImportOrUseDecl_32));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[33])));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[29])));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
      }
      {
        ImpPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[28])));
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
      MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
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

        parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_51_93_95_48_13_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_26, STATE_VARIABLE_ReadModules_27, STATE_VARIABLE_InclMap_0_28, STATE_VARIABLE_InclMap_29, STATE_VARIABLE_SrcIntImportUseMap_0_30, STATE_VARIABLE_SrcIntImportUseMap_31, STATE_VARIABLE_SrcImpImportUseMap_0_32, STATE_VARIABLE_SrcImpImportUseMap_33, STATE_VARIABLE_AncestorImportUseMap_0_34, STATE_VARIABLE_AncestorImportUseMap_35);
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

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word IndirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_24,
  MR_Word * STATE_VARIABLE_ReadModules_25,
  MR_Word STATE_VARIABLE_InclMap_0_26,
  MR_Word * STATE_VARIABLE_InclMap_27,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_29,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_31,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_32,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_33)
{
  if (((MR_tag((MR_Word) IndirectSpec_14)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectSpec_14, (MR_Integer) 0))));
    MR_Word ReadWhyInt2_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IndirectSpec_14, (MR_Integer) 1))) & (MR_Integer) 3);

    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0(Ancestors_13, ParseTreeInt2_20, ReadWhyInt2_21, STATE_VARIABLE_ReadModules_0_24, STATE_VARIABLE_ReadModules_25, STATE_VARIABLE_InclMap_0_26, STATE_VARIABLE_InclMap_27, STATE_VARIABLE_SrcIntImportUseMap_0_28, STATE_VARIABLE_SrcIntImportUseMap_29, STATE_VARIABLE_SrcImpImportUseMap_0_30, STATE_VARIABLE_SrcImpImportUseMap_31, STATE_VARIABLE_AncestorImportUseMap_0_32, STATE_VARIABLE_AncestorImportUseMap_33);
  }
  else
  {
    MR_Word ParseTreeInt3_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndirectSpec_14, (MR_Integer) 0))));

    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0(Ancestors_13, ParseTreeInt3_22, STATE_VARIABLE_ReadModules_0_24, STATE_VARIABLE_ReadModules_25, STATE_VARIABLE_InclMap_0_26, STATE_VARIABLE_InclMap_27, STATE_VARIABLE_SrcIntImportUseMap_0_28, STATE_VARIABLE_SrcIntImportUseMap_29, STATE_VARIABLE_SrcImpImportUseMap_0_30, STATE_VARIABLE_SrcImpImportUseMap_31, STATE_VARIABLE_AncestorImportUseMap_0_32, STATE_VARIABLE_AncestorImportUseMap_33);
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int2__1333__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt2_15,
  MR_Word ReadWhyInt2_16,
  MR_Word STATE_VARIABLE_ReadModules_0_39,
  MR_Word * STATE_VARIABLE_ReadModules_40,
  MR_Word STATE_VARIABLE_InclMap_0_41,
  MR_Word * STATE_VARIABLE_InclMap_42,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_43,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_44,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_45,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_46,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_47,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_48)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_15, (MR_Integer) 0))));
    MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_15, (MR_Integer) 3))));
    MR_Word IntIncls_38;
    MR_Word Var_54;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_ReadModules_0_39, STATE_VARIABLE_ReadModules_40);
    IntIncls_38 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_25);
    switch (ReadWhyInt2_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 1, IntIncls_38, STATE_VARIABLE_InclMap_0_41, STATE_VARIABLE_InclMap_42);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_38, STATE_VARIABLE_InclMap_0_41, STATE_VARIABLE_InclMap_42);
        break;
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int2_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Ancestors_14));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (ModuleName_22));
    }
    mercury__require__expect_not_3_p_0(Var_54, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int2\'/13", (MR_String) "processing the .int2 file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_48 = STATE_VARIABLE_AncestorImportUseMap_0_47;
    *STATE_VARIABLE_SrcImpImportUseMap_46 = STATE_VARIABLE_SrcImpImportUseMap_0_45;
    *STATE_VARIABLE_SrcIntImportUseMap_44 = STATE_VARIABLE_SrcIntImportUseMap_0_43;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_direct_int_spec_12_p_0(
  MR_Word Ancestors_13,
  MR_Word DirectSpec_14,
  MR_Word STATE_VARIABLE_ReadModules_0_24,
  MR_Word * STATE_VARIABLE_ReadModules_25,
  MR_Word STATE_VARIABLE_InclMap_0_26,
  MR_Word * STATE_VARIABLE_InclMap_27,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_28,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_29,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_30,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_31,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_32,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_33)
{
  if (((MR_tag((MR_Word) DirectSpec_14)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectSpec_14, (MR_Integer) 0))));
    MR_Word ReadWhyInt1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DirectSpec_14, (MR_Integer) 1))) & (MR_Integer) 7);

    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(Ancestors_13, ParseTreeInt1_20, ReadWhyInt1_21, STATE_VARIABLE_ReadModules_0_24, STATE_VARIABLE_ReadModules_25, STATE_VARIABLE_InclMap_0_26, STATE_VARIABLE_InclMap_27, STATE_VARIABLE_SrcIntImportUseMap_0_28, STATE_VARIABLE_SrcIntImportUseMap_29, STATE_VARIABLE_SrcImpImportUseMap_0_30, STATE_VARIABLE_SrcImpImportUseMap_31, STATE_VARIABLE_AncestorImportUseMap_0_32, STATE_VARIABLE_AncestorImportUseMap_33);
  }
  else
  {
    MR_Word ParseTreeInt3_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectSpec_14, (MR_Integer) 0))));

    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0(Ancestors_13, ParseTreeInt3_22, STATE_VARIABLE_ReadModules_0_24, STATE_VARIABLE_ReadModules_25, STATE_VARIABLE_InclMap_0_26, STATE_VARIABLE_InclMap_27, STATE_VARIABLE_SrcIntImportUseMap_0_28, STATE_VARIABLE_SrcIntImportUseMap_29, STATE_VARIABLE_SrcImpImportUseMap_0_30, STATE_VARIABLE_SrcImpImportUseMap_31, STATE_VARIABLE_AncestorImportUseMap_0_32, STATE_VARIABLE_AncestorImportUseMap_33);
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1357__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int3__1353__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt3_15,
  MR_Word STATE_VARIABLE_ReadModules_0_36,
  MR_Word * STATE_VARIABLE_ReadModules_37,
  MR_Word STATE_VARIABLE_InclMap_0_38,
  MR_Word * STATE_VARIABLE_InclMap_39,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_40,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_41,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_42,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_43,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_44,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_45)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_15, (MR_Integer) 0))));
    MR_Word ParseTreeInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_15, (MR_Integer) 3))));
    MR_Word IntIncls_34;
    MR_Word ImpIncls_35;
    MR_Word Var_47;
    MR_Word Var_53;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_ReadModules_0_36, STATE_VARIABLE_ReadModules_37);
    parse_tree__item_util__include_map_to_item_includes_3_p_0(ParseTreeInclMap_25, &IntIncls_34, &ImpIncls_35);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[3]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ImpIncls_35));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "ImpIncls != []");
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_34, STATE_VARIABLE_InclMap_0_38, STATE_VARIABLE_InclMap_39);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_51_95_95_91_51_93_95_48_13_p_0_2));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Ancestors_14));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (ModuleName_22));
    }
    mercury__require__expect_not_3_p_0(Var_53, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int3\'/13", (MR_String) "processing the .int2 file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_45 = STATE_VARIABLE_AncestorImportUseMap_0_44;
    *STATE_VARIABLE_SrcImpImportUseMap_43 = STATE_VARIABLE_SrcImpImportUseMap_0_42;
    *STATE_VARIABLE_SrcIntImportUseMap_41 = STATE_VARIABLE_SrcIntImportUseMap_0_40;
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__grab_modules__IntroducedFrom__pred__record_includes_imports_uses_in_parse_tree_int1__1303__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt1_15,
  MR_Word ReadWhyInt1_16,
  MR_Word STATE_VARIABLE_ReadModules_0_48,
  MR_Word * STATE_VARIABLE_ReadModules_49,
  MR_Word STATE_VARIABLE_InclMap_0_50,
  MR_Word * STATE_VARIABLE_InclMap_51,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_52,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_53,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_54,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_55,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_56,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_57)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_15, (MR_Integer) 0))));
    MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_15, (MR_Integer) 3))));
    MR_Word ImpInclMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_15, (MR_Integer) 4))));
    MR_Word IntIncls_46;
    MR_Word ImpIncls_47;
    MR_Word Var_67;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_ReadModules_0_48, STATE_VARIABLE_ReadModules_49);
    IntIncls_46 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(IntInclMap_25);
    ImpIncls_47 = parse_tree__item_util__module_names_contexts_to_item_includes_1_f_0(ImpInclMap_26);
    switch (ReadWhyInt1_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 4:
        {
          MR_Word STATE_VARIABLE_InclMap_64_64;

          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_46, STATE_VARIABLE_InclMap_0_50, &STATE_VARIABLE_InclMap_64_64);
          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 1, ImpIncls_47, STATE_VARIABLE_InclMap_64_64, STATE_VARIABLE_InclMap_51);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_InclMap_60_60;

          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, IntIncls_46, STATE_VARIABLE_InclMap_0_50, &STATE_VARIABLE_InclMap_60_60);
          parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, ImpIncls_47, STATE_VARIABLE_InclMap_60_60, STATE_VARIABLE_InclMap_51);
        }
        break;
      case (MR_Integer) 6:
        *STATE_VARIABLE_InclMap_51 = STATE_VARIABLE_InclMap_0_50;
        break;
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_int1_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Ancestors_14));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (ModuleName_22));
    }
    mercury__require__expect_not_3_p_0(Var_67, (MR_String) "predicate \140parse_tree.grab_modules.record_includes_imports_uses_in_parse_tree_int1\'/13", (MR_String) "processing the .int file of an ancestor");
    *STATE_VARIABLE_AncestorImportUseMap_57 = STATE_VARIABLE_AncestorImportUseMap_0_56;
    *STATE_VARIABLE_SrcImpImportUseMap_55 = STATE_VARIABLE_SrcImpImportUseMap_0_54;
    *STATE_VARIABLE_SrcIntImportUseMap_53 = STATE_VARIABLE_SrcIntImportUseMap_0_52;
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

    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_51_93_95_48_13_p_0(Ancestors_13, ParseTreeInt0_20, STATE_VARIABLE_ReadModules_0_22, STATE_VARIABLE_ReadModules_23, STATE_VARIABLE_InclMap_0_24, STATE_VARIABLE_InclMap_25, STATE_VARIABLE_SrcIntImportUseMap_0_26, STATE_VARIABLE_SrcIntImportUseMap_27, STATE_VARIABLE_SrcImpImportUseMap_0_28, STATE_VARIABLE_SrcImpImportUseMap_29, STATE_VARIABLE_AncestorImportUseMap_0_30, STATE_VARIABLE_AncestorImportUseMap_31);
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_51_93_95_48_13_p_0(
  MR_Word Ancestors_14,
  MR_Word ParseTreeInt0_15,
  MR_Word STATE_VARIABLE_ReadModules_0_60,
  MR_Word * STATE_VARIABLE_ReadModules_61,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_62,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_63,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_64,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_65,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_66,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_67,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_68,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_69)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_15, (MR_Integer) 0))));
    MR_Word InclMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_15, (MR_Integer) 5))));
    MR_Word ImportUseMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_15, (MR_Integer) 10))));
    MR_Word IntIncls_54;
    MR_Word ImpIncls_55;
    MR_Word AllIncls_56;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_ReadModules_0_60, STATE_VARIABLE_ReadModules_61);
    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_27, &IntIncls_54, &ImpIncls_55);
    AllIncls_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntIncls_54, ImpIncls_55);
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, AllIncls_56, STATE_VARIABLE_MaybeAbstractInclMap_0_62, STATE_VARIABLE_MaybeAbstractInclMap_63);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_14, ((MR_Box) (ModuleName_22)));
    if (succeeded)
    {
      MR_Word IntAvails_57;
      MR_Word ImpAvails_58;
      MR_Word AllAvails_59;

      parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_32, &IntAvails_57, &ImpAvails_58);
      AllAvails_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), IntAvails_57, ImpAvails_58);
      parse_tree__grab_modules__recomp_avails_acc_3_p_0(AllAvails_59, STATE_VARIABLE_AncestorImportUseMap_0_68, STATE_VARIABLE_AncestorImportUseMap_69);
    }
    else
      *STATE_VARIABLE_AncestorImportUseMap_69 = STATE_VARIABLE_AncestorImportUseMap_0_68;
    *STATE_VARIABLE_SrcImpImportUseMap_67 = STATE_VARIABLE_SrcImpImportUseMap_0_66;
    *STATE_VARIABLE_SrcIntImportUseMap_65 = STATE_VARIABLE_SrcIntImportUseMap_0_64;
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

    parse_tree__grab_modules__IntroducedFrom__pred__dump_modules__413__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
parse_tree__grab_modules__grab_trans_opt_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_trans_opt_files_9_p_0(
  MR_Word Globals_10,
  MR_Word TransOptModuleNames_11,
  MR_Word * FoundError_12,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_20,
  MR_Word * STATE_VARIABLE_ModuleAndImports_21,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_22,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_23)
{
  {
    MR_Word Verbose_16;
    MR_Word VeryVerbose_17;
    MR_Word ParseTreeTransOptsCord_18;
    MR_Word TransOptSpecs_19;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_ModuleAndImports_37_37;
    MR_Word STATE_VARIABLE_ModuleAndImports_38_38;
    MR_Word Var_39;
    MR_Box conv1_STATE_VARIABLE_ModuleAndImports_37_37;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 66, &Verbose_16);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Reading .trans_opt files..\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 67, &VeryVerbose_17);
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0));
    parse_tree__grab_modules__read_trans_opt_files_11_p_0(Globals_10, VeryVerbose_17, TransOptModuleNames_11, Var_31, &ParseTreeTransOptsCord_18, (MR_Word) ((MR_Unsigned) 0U), &TransOptSpecs_19, (MR_Integer) 0, FoundError_12);
    Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ParseTreeTransOptsCord_18);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[9]), Var_36, ((MR_Box) (STATE_VARIABLE_ModuleAndImports_0_20)), &conv1_STATE_VARIABLE_ModuleAndImports_37_37);
    STATE_VARIABLE_ModuleAndImports_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleAndImports_37_37));
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(TransOptSpecs_19, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_38_38);
    Var_39 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
    parse_tree__module_imports__module_and_imports_set_errors_3_p_0(Var_39, STATE_VARIABLE_ModuleAndImports_38_38, STATE_VARIABLE_ModuleAndImports_21);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Done.\n");
    *STATE_VARIABLE_HaveReadModuleMaps_23 = STATE_VARIABLE_HaveReadModuleMaps_0_22;
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
      parse_tree__grab_modules__update_opt_error_status_9_p_0(Globals_1, (MR_Integer) 17, FileName_34, TransOptSpecs_36, TransOptError_37, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Error_0_8, &STATE_VARIABLE_Error_51_51);
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
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0_2(
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
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    parse_tree__module_imports__module_and_imports_add_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
parse_tree__grab_modules__grab_plain_opt_and_int_for_opt_files_8_p_0(
  MR_Word Globals_9,
  MR_Word * FoundError_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_53,
  MR_Word * STATE_VARIABLE_ModuleAndImports_54,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_55,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_56)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14;
    MR_Word Ancestors0_15;
    MR_Word IntDeps0_16;
    MR_Word ImpDeps0_17;
    MR_Word OptModules_18;
    MR_Word VeryVerbose_19;
    MR_Word ReadOptFilesTransitively_20;
    MR_Word DontQueueOptModules_21;
    MR_Word ParseTreePlainOptsCord0_22;
    MR_Word ExplicitDeps_23;
    MR_Word ImplicitNeedsCord_24;
    MR_Word OptSpecs0_25;
    MR_Word OptError0_26;
    MR_Word ParseTreePlainOpts0_27;
    MR_Word OptTuple_28;
    MR_Word UnusedArgs_29;
    MR_Word StructureReuse_30;
    MR_Word ParseTreePlainOpts_36;
    MR_Word OptError_39;
    MR_Word OptSpecs_40;
    MR_Word OptModuleAncestors_41;
    MR_Word OldModuleAncestors_42;
    MR_Word OptOnlyModuleAncestors_43;
    MR_Word OptAncestorImports_44;
    MR_Word OptAncestorUses_45;
    MR_Word AllImplicitNeeds_46;
    MR_Word ImplicitDeps_47;
    MR_Word NewDeps_48;
    MR_Word NewIndirectDeps_49;
    MR_Word NewImplIndirectDeps_50;
    MR_Word ModuleErrors_52;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word STATE_VARIABLE_ModuleAndImports_77_77;
    MR_Word STATE_VARIABLE_ModuleAndImports_78_78;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_86_86;
    MR_Word STATE_VARIABLE_ModuleAndImports_87_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_100_100;
    MR_Word STATE_VARIABLE_ModuleAndImports_101_101;
    MR_Word Var_105;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_106_106;
    MR_Word STATE_VARIABLE_ModuleAndImports_107_107;
    MR_Box conv1_STATE_VARIABLE_ModuleAndImports_77_77;
    MR_Word _SelfParseTreeInt1_51;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_0_53, &ModuleName_14);
    parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(STATE_VARIABLE_ModuleAndImports_0_53, &Ancestors0_15);
    parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(STATE_VARIABLE_ModuleAndImports_0_53, &IntDeps0_16);
    parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(STATE_VARIABLE_ModuleAndImports_0_53, &ImpDeps0_17);
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ImpDeps0_17));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (IntDeps0_16));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Ancestors0_15));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    OptModules_18 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_59);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 67, &VeryVerbose_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 490, &ReadOptFilesTransitively_20);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_14)), OptModules_18, &DontQueueOptModules_21);
    Var_65 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModules_18);
    Var_66 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0));
    Var_67 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_68 = mercury__cord__empty_0_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0));
    parse_tree__grab_modules__read_plain_opt_files_17_p_0(Globals_9, VeryVerbose_19, ReadOptFilesTransitively_20, Var_65, DontQueueOptModules_21, Var_66, &ParseTreePlainOptsCord0_22, Var_67, &ExplicitDeps_23, Var_68, &ImplicitNeedsCord_24, (MR_Word) ((MR_Unsigned) 0U), &OptSpecs0_25, (MR_Integer) 0, &OptError0_26);
    ParseTreePlainOpts0_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ParseTreePlainOptsCord0_22);
    libs__globals__get_opt_tuple_2_p_0(Globals_9, &OptTuple_28);
    UnusedArgs_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_28, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 503, &StructureReuse_30);
    succeeded = (UnusedArgs_29 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (StructureReuse_30 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String OwnFileName_31;
      MR_Word OwnParseTreePlainOpt0_32;
      MR_Word OwnSpecs_33;
      MR_Word OwnError_34;
      MR_Word OwnParseTreePlainOpt_35;
      MR_Word OptSpecs1_37;
      MR_Word OptSpecs2_38;

      parse_tree__grab_modules__read_plain_opt_file_9_p_0(Globals_9, VeryVerbose_19, ModuleName_14, &OwnFileName_31, &OwnParseTreePlainOpt0_32, &OwnSpecs_33, &OwnError_34);
      parse_tree__grab_modules__keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt_4_p_0(UnusedArgs_29, StructureReuse_30, OwnParseTreePlainOpt0_32, &OwnParseTreePlainOpt_35);
      {
        ParseTreePlainOpts_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ParseTreePlainOpts_36, 0) = ((MR_Box) (OwnParseTreePlainOpt_35));
        MR_hl_field(MR_mktag(1), ParseTreePlainOpts_36, 1) = ((MR_Box) (ParseTreePlainOpts0_27));
      }
      OptSpecs1_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OwnSpecs_33, OptSpecs0_25);
      parse_tree__grab_modules__update_opt_error_status_9_p_0(Globals_9, (MR_Integer) 16, OwnFileName_31, OwnSpecs_33, OwnError_34, OptSpecs1_37, &OptSpecs2_38, OptError0_26, &OptError_39);
      parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(VeryVerbose_19, Globals_9, OptSpecs2_38, &OptSpecs_40);
    }
    else
    {
      ParseTreePlainOpts_36 = ParseTreePlainOpts0_27;
      OptSpecs_40 = OptSpecs0_25;
      OptError_39 = OptError0_26;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[7]), ParseTreePlainOpts_36, ((MR_Box) (STATE_VARIABLE_ModuleAndImports_0_53)), &conv1_STATE_VARIABLE_ModuleAndImports_77_77);
    STATE_VARIABLE_ModuleAndImports_77_77 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleAndImports_77_77));
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(OptSpecs_40, STATE_VARIABLE_ModuleAndImports_77_77, &STATE_VARIABLE_ModuleAndImports_78_78);
    Var_79 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[8]), OptModules_18);
    OptModuleAncestors_41 = mercury__set__power_union_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_79);
    OldModuleAncestors_42 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_14);
    OptOnlyModuleAncestors_43 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptModuleAncestors_41, OldModuleAncestors_42);
    Var_83 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptOnlyModuleAncestors_43);
    Var_84 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_85 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_9, (MR_Integer) 1, Var_83, Var_84, &OptAncestorImports_44, Var_85, &OptAncestorUses_45, STATE_VARIABLE_HaveReadModuleMaps_0_55, &STATE_VARIABLE_HaveReadModuleMaps_86_86, STATE_VARIABLE_ModuleAndImports_78_78, &STATE_VARIABLE_ModuleAndImports_87_87);
    Var_89 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), ImplicitNeedsCord_24);
    parse_tree__get_dependencies__combine_implicit_needs_2_p_0(Var_89, &AllImplicitNeeds_46);
    parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_9, AllImplicitNeeds_46, &ImplicitDeps_47);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (OptAncestorUses_45));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (OptAncestorImports_44));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ImplicitDeps_47));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (ExplicitDeps_23));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
    }
    NewDeps_48 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_90);
    Var_97 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewDeps_48);
    Var_98 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_99 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_9, (MR_Integer) 5, Var_97, Var_98, &NewIndirectDeps_49, Var_99, &NewImplIndirectDeps_50, STATE_VARIABLE_HaveReadModuleMaps_86_86, &STATE_VARIABLE_HaveReadModuleMaps_100_100, STATE_VARIABLE_ModuleAndImports_87_87, &STATE_VARIABLE_ModuleAndImports_101_101);
    Var_105 = mercury__set__union_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewIndirectDeps_49, NewImplIndirectDeps_50);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Integer) 3, Var_105, STATE_VARIABLE_HaveReadModuleMaps_100_100, &STATE_VARIABLE_HaveReadModuleMaps_106_106, STATE_VARIABLE_ModuleAndImports_101_101, &STATE_VARIABLE_ModuleAndImports_107_107);
    parse_tree__grab_modules__process_module_int1_10_p_0(Globals_9, (MR_Integer) 6, ModuleName_14, &_SelfParseTreeInt1_51, STATE_VARIABLE_HaveReadModuleMaps_106_106, STATE_VARIABLE_HaveReadModuleMaps_56, STATE_VARIABLE_ModuleAndImports_107_107, STATE_VARIABLE_ModuleAndImports_54);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(*STATE_VARIABLE_ModuleAndImports_54, &ModuleErrors_52);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ModuleErrors_52);
    if (!(succeeded))
      succeeded = (OptError_39 == (MR_Integer) 1);
    if (succeeded)
      *FoundError_10 = (MR_Integer) 1;
    else
      *FoundError_10 = (MR_Integer) 0;
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
      parse_tree__grab_modules__update_opt_error_status_9_p_0(Globals_1, (MR_Integer) 16, FileName_52, OptSpecs_54, OptError_55, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Error_0_14, &STATE_VARIABLE_Error_81_81);
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
                MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_2[27])));
              }
              {
                Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__grab_modules_scalar_common_2[42])));
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
                MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 4U));
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
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]));
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
parse_tree__grab_modules__grab_unqual_imported_modules_make_int_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word SourceFileModuleName_12,
  MR_Word ParseTreeModuleSrc0_13,
  MR_Word * STATE_VARIABLE_ModuleAndImports_48,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50)
{
  {
    MR_bool succeeded;
    MR_Word ImportAndOrUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 9))));
    MR_Word IntImportMap_20;
    MR_Word IntUseMap_21;
    MR_Word ImpImportMap_22;
    MR_Word ImpUseMap_23;
    MR_Word IntUseImpImportMap_24;
    MR_Word IntImports0_25;
    MR_Word IntUses_26;
    MR_Word ImpImports_27;
    MR_Word ImpUses_28;
    MR_Word IntUsesImpImports_29;
    MR_Word IntImports_30;
    MR_Word Contents_31;
    MR_Word LangSet_34;
    MR_Word ForeignExportLangs_35;
    MR_Word ParseTreeModuleSrc_36;
    MR_Word PublicChildren_37;
    MR_Word MaybeTopModule_38;
    MR_Word ForeignIncludeFiles_40;
    MR_Word ModuleName_42;
    MR_Word SrcMap0_43;
    MR_Word SrcMap_44;
    MR_Word Ancestors_45;
    MR_Word AncestorImports_46;
    MR_Word AncestorUses_47;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ModuleAndImports_56_56;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_57_57;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_62_62;
    MR_Word STATE_VARIABLE_ModuleAndImports_63_63;
    MR_Word STATE_VARIABLE_IntIndirectImported_65_65;
    MR_Word STATE_VARIABLE_ImpIndirectImported_66_66;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_IntIndirectImported_70_70;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_71_71;
    MR_Word STATE_VARIABLE_ModuleAndImports_72_72;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_IntIndirectImported_77_77;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_78_78;
    MR_Word STATE_VARIABLE_ModuleAndImports_79_79;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_ImpIndirectImported_84_84;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_85_85;
    MR_Word STATE_VARIABLE_ModuleAndImports_86_86;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_IntIndirectImported_91_91;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_92_92;
    MR_Word STATE_VARIABLE_ModuleAndImports_93_93;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_IntIndirectImported_98_98;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_99_99;
    MR_Word STATE_VARIABLE_ModuleAndImports_100_100;
    MR_Word Var_104;
    MR_Word STATE_VARIABLE_ImpIndirectImported_105_105;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_106_106;
    MR_Word STATE_VARIABLE_ModuleAndImports_107_107;
    MR_Word Var_111;
    MR_Word STATE_VARIABLE_IntIndirectImported_112_112;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_113_113;
    MR_Word STATE_VARIABLE_ModuleAndImports_114_114;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_118_118;
    MR_Word STATE_VARIABLE_ModuleAndImports_119_119;
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
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_187;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_198;
    MR_Word Var_199;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_202;
    MR_Word Var_203;
    MR_Word Var_204;
    MR_Word Var_205;
    MR_Word Var_206;
    MR_Word Var_207;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_210;
    MR_Word Var_317;
    MR_Word Var_303;
    MR_Word Var_304;
    MR_Word Var_306;
    MR_Word Var_307;
    MR_Word Var_308;
    MR_Word Var_309;
    MR_Word Var_310;
    MR_Word Var_311;

    parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportAndOrUseMap_19, &IntImportMap_20, &IntUseMap_21, &ImpImportMap_22, &ImpUseMap_23, &IntUseImpImportMap_24);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_20, &IntImports0_25);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseMap_21, &IntUses_26);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_22, &ImpImports_27);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpUseMap_23, &ImpUses_28);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseImpImportMap_24, &IntUsesImpImports_29);
    Var_53 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_53)), IntImports0_25, &IntImports_30);
    parse_tree__get_dependencies__get_foreigns_fact_tables_2_p_0(ParseTreeModuleSrc0_13, &Contents_31);
    LangSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_31, (MR_Integer) 2))));
    ForeignExportLangs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_31, (MR_Integer) 3))));
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LangSet_34));
    }
    Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 0))));
    Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 1))));
    Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 2))));
    Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 3))));
    Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 4))));
    Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 5))));
    Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 6))));
    Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 7))));
    Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 8))));
    Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 9))));
    Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 10))));
    Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 11))));
    Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 13))));
    Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 14))));
    Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 15))));
    Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 16))));
    Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 17))));
    Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 18))));
    Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 19))));
    Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 20))));
    Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 21))));
    Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 22))));
    Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 23))));
    Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 24))));
    Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 25))));
    Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 26))));
    Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 27))));
    Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 28))));
    Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 29))));
    Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 30))));
    Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 31))));
    Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 32))));
    Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 33))));
    Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 34))));
    Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 35))));
    Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 36))));
    Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 37))));
    Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 38))));
    Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 39))));
    Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 40))));
    Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 41))));
    Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 42))));
    {
      ParseTreeModuleSrc_36 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 0) = ((MR_Box) (Var_168));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 1) = ((MR_Box) (Var_169));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 2) = ((MR_Box) (Var_170));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 3) = ((MR_Box) (Var_171));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 4) = ((MR_Box) (Var_172));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 5) = ((MR_Box) (Var_173));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 6) = ((MR_Box) (Var_174));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 7) = ((MR_Box) (Var_175));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 8) = ((MR_Box) (Var_176));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 9) = ((MR_Box) (Var_177));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 10) = ((MR_Box) (Var_178));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 11) = ((MR_Box) (Var_179));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 12) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 13) = ((MR_Box) (Var_181));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 14) = ((MR_Box) (Var_182));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 15) = ((MR_Box) (Var_183));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 16) = ((MR_Box) (Var_184));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 17) = ((MR_Box) (Var_185));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 18) = ((MR_Box) (Var_186));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 19) = ((MR_Box) (Var_187));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 20) = ((MR_Box) (Var_188));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 21) = ((MR_Box) (Var_189));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 22) = ((MR_Box) (Var_190));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 23) = ((MR_Box) (Var_191));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 24) = ((MR_Box) (Var_192));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 25) = ((MR_Box) (Var_193));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 26) = ((MR_Box) (Var_194));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 27) = ((MR_Box) (Var_195));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 28) = ((MR_Box) (Var_196));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 29) = ((MR_Box) (Var_197));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 30) = ((MR_Box) (Var_198));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 31) = ((MR_Box) (Var_199));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 32) = ((MR_Box) (Var_200));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 33) = ((MR_Box) (Var_201));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 34) = ((MR_Box) (Var_202));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 35) = ((MR_Box) (Var_203));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 36) = ((MR_Box) (Var_204));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 37) = ((MR_Box) (Var_205));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 38) = ((MR_Box) (Var_206));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 39) = ((MR_Box) (Var_207));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 40) = ((MR_Box) (Var_208));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 41) = ((MR_Box) (Var_209));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 42) = ((MR_Box) (Var_210));
    }
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), &PublicChildren_37);
    Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_12, Var_317);
    if (succeeded)
    {
      MR_Word Var_55;

      Var_55 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      {
        MaybeTopModule_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTopModule_38, 0) = ((MR_Box) (Var_55));
      }
    }
    else
      MaybeTopModule_38 = (MR_Word) ((MR_Unsigned) 0U);
    ForeignIncludeFiles_40 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
    parse_tree__module_imports__make_module_and_imports_11_p_0(Globals_10, SourceFileName_11, SourceFileModuleName_12, ParseTreeModuleSrc_36, PublicChildren_37, MaybeTopModule_38, (MR_Word) ((MR_Unsigned) 0U), ForeignIncludeFiles_40, ForeignExportLangs_35, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ModuleAndImports_56_56);
    ModuleName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, (MR_Integer) 0))));
    SrcMap0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 2))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_42)), ((MR_Box) (ParseTreeModuleSrc_36)), SrcMap0_43, &SrcMap_44);
    Var_303 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 0))));
    Var_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 1))));
    Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 3))));
    Var_307 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 4))));
    Var_308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 5))));
    Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 6))));
    Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 7))));
    Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_49, (MR_Integer) 8))));
    {
      STATE_VARIABLE_HaveReadModuleMaps_57_57 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 0) = ((MR_Box) (Var_303));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 1) = ((MR_Box) (Var_304));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 2) = ((MR_Box) (SrcMap_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 3) = ((MR_Box) (Var_306));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 4) = ((MR_Box) (Var_307));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 5) = ((MR_Box) (Var_308));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 6) = ((MR_Box) (Var_309));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 7) = ((MR_Box) (Var_310));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_57_57, 8) = ((MR_Box) (Var_311));
    }
    Ancestors_45 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_42);
    Var_60 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_61 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_10, (MR_Integer) 0, Ancestors_45, Var_60, &AncestorImports_46, Var_61, &AncestorUses_47, STATE_VARIABLE_HaveReadModuleMaps_57_57, &STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_ModuleAndImports_56_56, &STATE_VARIABLE_ModuleAndImports_63_63);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_65_65);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_66_66);
    Var_69 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorImports_46);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 0, Var_69, STATE_VARIABLE_IntIndirectImported_65_65, &STATE_VARIABLE_IntIndirectImported_70_70, STATE_VARIABLE_HaveReadModuleMaps_62_62, &STATE_VARIABLE_HaveReadModuleMaps_71_71, STATE_VARIABLE_ModuleAndImports_63_63, &STATE_VARIABLE_ModuleAndImports_72_72);
    Var_76 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_30);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 1, Var_76, STATE_VARIABLE_IntIndirectImported_70_70, &STATE_VARIABLE_IntIndirectImported_77_77, STATE_VARIABLE_HaveReadModuleMaps_71_71, &STATE_VARIABLE_HaveReadModuleMaps_78_78, STATE_VARIABLE_ModuleAndImports_72_72, &STATE_VARIABLE_ModuleAndImports_79_79);
    Var_83 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_27);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 2, Var_83, STATE_VARIABLE_ImpIndirectImported_66_66, &STATE_VARIABLE_ImpIndirectImported_84_84, STATE_VARIABLE_HaveReadModuleMaps_78_78, &STATE_VARIABLE_HaveReadModuleMaps_85_85, STATE_VARIABLE_ModuleAndImports_79_79, &STATE_VARIABLE_ModuleAndImports_86_86);
    Var_90 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorUses_47);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 3, Var_90, STATE_VARIABLE_IntIndirectImported_77_77, &STATE_VARIABLE_IntIndirectImported_91_91, STATE_VARIABLE_HaveReadModuleMaps_85_85, &STATE_VARIABLE_HaveReadModuleMaps_92_92, STATE_VARIABLE_ModuleAndImports_86_86, &STATE_VARIABLE_ModuleAndImports_93_93);
    Var_97 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_26);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 4, Var_97, STATE_VARIABLE_IntIndirectImported_91_91, &STATE_VARIABLE_IntIndirectImported_98_98, STATE_VARIABLE_HaveReadModuleMaps_92_92, &STATE_VARIABLE_HaveReadModuleMaps_99_99, STATE_VARIABLE_ModuleAndImports_93_93, &STATE_VARIABLE_ModuleAndImports_100_100);
    Var_104 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_28);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 5, Var_104, STATE_VARIABLE_ImpIndirectImported_84_84, &STATE_VARIABLE_ImpIndirectImported_105_105, STATE_VARIABLE_HaveReadModuleMaps_99_99, &STATE_VARIABLE_HaveReadModuleMaps_106_106, STATE_VARIABLE_ModuleAndImports_100_100, &STATE_VARIABLE_ModuleAndImports_107_107);
    Var_111 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUsesImpImports_29);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_10, (MR_Integer) 6, Var_111, STATE_VARIABLE_IntIndirectImported_98_98, &STATE_VARIABLE_IntIndirectImported_112_112, STATE_VARIABLE_HaveReadModuleMaps_106_106, &STATE_VARIABLE_HaveReadModuleMaps_113_113, STATE_VARIABLE_ModuleAndImports_107_107, &STATE_VARIABLE_ModuleAndImports_114_114);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(Globals_10, (MR_Integer) 7, STATE_VARIABLE_IntIndirectImported_112_112, STATE_VARIABLE_HaveReadModuleMaps_113_113, &STATE_VARIABLE_HaveReadModuleMaps_118_118, STATE_VARIABLE_ModuleAndImports_114_114, &STATE_VARIABLE_ModuleAndImports_119_119);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(Globals_10, (MR_Integer) 8, STATE_VARIABLE_ImpIndirectImported_105_105, STATE_VARIABLE_HaveReadModuleMaps_118_118, STATE_VARIABLE_HaveReadModuleMaps_50, STATE_VARIABLE_ModuleAndImports_119_119, STATE_VARIABLE_ModuleAndImports_48);
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy3_13,
  MR_Word Modules_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_19,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_21,
  MR_Word * STATE_VARIABLE_ModuleAndImports_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_18;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_27_27;
    MR_Word STATE_VARIABLE_ModuleAndImports_28_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_14);
    Var_26 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(Globals_11, ReadWhy3_13, Var_25, Var_26, &IndirectImports_18, STATE_VARIABLE_HaveReadModuleMaps_0_19, &STATE_VARIABLE_HaveReadModuleMaps_27_27, STATE_VARIABLE_ModuleAndImports_0_21, &STATE_VARIABLE_ModuleAndImports_28_28);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_18);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_22 = STATE_VARIABLE_ModuleAndImports_28_28;
      *STATE_VARIABLE_HaveReadModuleMaps_20 = STATE_VARIABLE_HaveReadModuleMaps_27_27;
    }
    else
    {
      MR_Word next_value_of_Modules_14 = IndirectImports_18;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_19 = STATE_VARIABLE_HaveReadModuleMaps_27_27;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_21 = STATE_VARIABLE_ModuleAndImports_28_28;

      // direct tailcall eliminated
      ;
      Modules_14 = next_value_of_Modules_14;
      STATE_VARIABLE_HaveReadModuleMaps_0_19 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_19;
      STATE_VARIABLE_ModuleAndImports_0_21 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_21;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_7,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_8,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_9,
  MR_Word * STATE_VARIABLE_ModuleAndImports_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleAndImports_10 = STATE_VARIABLE_ModuleAndImports_0_9;
      *STATE_VARIABLE_HaveReadModuleMaps_8 = STATE_VARIABLE_HaveReadModuleMaps_0_7;
      *STATE_VARIABLE_IntIndirectImports_6 = STATE_VARIABLE_IntIndirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_51_51;
      MR_Word STATE_VARIABLE_ModuleAndImports_52_52;
      MR_Word STATE_VARIABLE_IntIndirectImports_55_55;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_9;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_ModuleAndImports_0_9, ModuleName_31, (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word ParseTreeInt3_37;
        MR_Word Imports_38;
        MR_Word Var_54;

        parse_tree__grab_modules__process_module_int3_10_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_31, &ParseTreeInt3_37, STATE_VARIABLE_HaveReadModuleMaps_0_7, &STATE_VARIABLE_HaveReadModuleMaps_51_51, STATE_VARIABLE_ModuleAndImports_0_9, &STATE_VARIABLE_ModuleAndImports_52_52);
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_37, (MR_Integer) 4))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_54, &Imports_38);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Imports_38, STATE_VARIABLE_IntIndirectImports_0_5, &STATE_VARIABLE_IntIndirectImports_55_55);
      }
      else
      {
        STATE_VARIABLE_ModuleAndImports_52_52 = STATE_VARIABLE_ModuleAndImports_0_9;
        STATE_VARIABLE_HaveReadModuleMaps_51_51 = STATE_VARIABLE_HaveReadModuleMaps_0_7;
        STATE_VARIABLE_IntIndirectImports_55_55 = STATE_VARIABLE_IntIndirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_32;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_5 = STATE_VARIABLE_IntIndirectImports_55_55;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_7 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_9 = STATE_VARIABLE_ModuleAndImports_52_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IntIndirectImports_0_5 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      STATE_VARIABLE_HaveReadModuleMaps_0_7 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_7;
      STATE_VARIABLE_ModuleAndImports_0_9 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int3_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy3_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt3_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_27,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_28,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_29,
  MR_Word * STATE_VARIABLE_ModuleAndImports_30)
{
  {
    MR_Word ReturnTimestamp_18;
    MR_Word MaybeTimestamp_20;
    MR_Word Specs_21;
    MR_Word Errors_22;
    MR_Word GrabbedFile_23;
    MR_Word RecompAvail_24;
    MR_Word STATE_VARIABLE_ModuleAndImports_36_36;
    MR_Word STATE_VARIABLE_ModuleAndImports_40_40;
    MR_Word STATE_VARIABLE_ModuleAndImports_42_42;
    MR_Word MaybeTimestampMap_70;
    MR_String _FileName_19;

    parse_tree__module_imports__module_and_imports_do_we_need_timestamps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_29, &ReturnTimestamp_18);
    parse_tree__read_modules__maybe_read_module_int3_13_p_0(Globals_11, (MR_Integer) 0, ModuleName_13, &_FileName_19, ReturnTimestamp_18, &MaybeTimestamp_20, ParseTreeInt3_14, &Specs_21, &Errors_22, STATE_VARIABLE_HaveReadModuleMaps_0_27, STATE_VARIABLE_HaveReadModuleMaps_28);
    {
      GrabbedFile_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GrabbedFile_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), GrabbedFile_23, 1) = ((MR_Box) (*ParseTreeInt3_14));
      MR_hl_field(MR_mktag(3), GrabbedFile_23, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
    }
    parse_tree__module_imports__module_and_imports_add_grabbed_file_4_p_0(ModuleName_13, GrabbedFile_23, STATE_VARIABLE_ModuleAndImports_0_29, &STATE_VARIABLE_ModuleAndImports_36_36);
    switch (ReadWhy3_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_25;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_38;
          MR_Word Var_39;

          RecompAvail_24 = (MR_Integer) 1;
          {
            DirectIntSpec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_25, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_25, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_25, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_38);
          Var_39 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_39, STATE_VARIABLE_ModuleAndImports_38_38, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_44;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_45;
          MR_Word Var_46;

          RecompAvail_24 = (MR_Integer) 3;
          {
            DirectIntSpec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_44, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_44, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_44, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_45);
          Var_46 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_46, STATE_VARIABLE_ModuleAndImports_38_45, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_47;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_48;
          MR_Word Var_49;

          RecompAvail_24 = (MR_Integer) 2;
          {
            DirectIntSpec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_47, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_47, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_47, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_48);
          Var_49 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_49, STATE_VARIABLE_ModuleAndImports_38_48, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word DirectIntSpec_50;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_51;
          MR_Word Var_52;

          RecompAvail_24 = (MR_Integer) 4;
          {
            DirectIntSpec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_50, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_50, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_50, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_51);
          Var_52 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_52, STATE_VARIABLE_ModuleAndImports_38_51, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_53;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_54;
          MR_Word Var_55;

          RecompAvail_24 = (MR_Integer) 1;
          {
            DirectIntSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_53, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_53, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_53, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_54);
          Var_55 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_55, STATE_VARIABLE_ModuleAndImports_38_54, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_56;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_57;
          MR_Word Var_58;

          RecompAvail_24 = (MR_Integer) 3;
          {
            DirectIntSpec_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_56, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_56, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_56, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_57);
          Var_58 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_58, STATE_VARIABLE_ModuleAndImports_38_57, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word DirectIntSpec_59;
          MR_Word STATE_VARIABLE_ModuleAndImports_38_60;
          MR_Word Var_61;

          RecompAvail_24 = (MR_Integer) 5;
          {
            DirectIntSpec_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectIntSpec_59, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), DirectIntSpec_59, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_59, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_38_60);
          Var_61 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_61, STATE_VARIABLE_ModuleAndImports_38_60, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word IndirectIntSpec_26;

          RecompAvail_24 = (MR_Integer) 4;
          {
            IndirectIntSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IndirectIntSpec_26, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), IndirectIntSpec_26, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_indirect_int_spec_3_p_0(IndirectIntSpec_26, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word IndirectIntSpec_62;

          RecompAvail_24 = (MR_Integer) 3;
          {
            IndirectIntSpec_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IndirectIntSpec_62, 0) = ((MR_Box) (*ParseTreeInt3_14));
            MR_hl_field(MR_mktag(1), IndirectIntSpec_62, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy3_12));
          }
          parse_tree__module_imports__module_and_imports_add_indirect_int_spec_3_p_0(IndirectIntSpec_62, STATE_VARIABLE_ModuleAndImports_36_36, &STATE_VARIABLE_ModuleAndImports_40_40);
        }
        break;
    }
    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(STATE_VARIABLE_ModuleAndImports_40_40, &MaybeTimestampMap_70);
    if ((MaybeTimestampMap_70 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ModuleAndImports_42_42 = STATE_VARIABLE_ModuleAndImports_40_40;
    else
    {
      MR_Word TimestampMap0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_70, (MR_Integer) 0))));

      if ((MaybeTimestamp_20 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ModuleAndImports_42_42 = STATE_VARIABLE_ModuleAndImports_40_40;
      else
      {
        MR_Word Timestamp_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_20, (MR_Integer) 0))));
        MR_Word TimestampInfo_74;
        MR_Word TimestampMap_75;
        MR_Word Var_76;

        {
          TimestampInfo_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TimestampInfo_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[3])));
          MR_hl_field(MR_mktag(0), TimestampInfo_74, 1) = ((MR_Box) (Timestamp_72));
          MR_hl_field(MR_mktag(0), TimestampInfo_74, 2) = (MR_Box) ((MR_Unsigned) (RecompAvail_24));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (TimestampInfo_74)), TimestampMap0_71, &TimestampMap_75);
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (TimestampMap_75));
        }
        parse_tree__module_imports__module_and_imports_set_maybe_timestamp_map_3_p_0(Var_76, STATE_VARIABLE_ModuleAndImports_40_40, &STATE_VARIABLE_ModuleAndImports_42_42);
      }
    }
    parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_21, Errors_22, STATE_VARIABLE_ModuleAndImports_42_42, STATE_VARIABLE_ModuleAndImports_30);
  }
}

static void MR_CALL 
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1(
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
parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(
  MR_Word Globals_12,
  MR_String SourceFileName_13,
  MR_Word SourceFileModuleName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word MaybeTopModule_16,
  MR_Word ParseTreeModuleSrc0_17,
  MR_Word * STATE_VARIABLE_ModuleAndImports_61,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_62,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_63)
{
  {
    MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 0))));
    MR_Word Contents_27;
    MR_Word ForeignIncludeFilesCord_28;
    MR_Word FactTablesSet_29;
    MR_Word LangSet_30;
    MR_Word ForeignExportLangs_31;
    MR_Word Langs_32;
    MR_Word FactTables_33;
    MR_Word ImpFIMs0_34;
    MR_Word ImpFIMs_35;
    MR_Word ParseTreeModuleSrc_36;
    MR_Word MaybeTimestampMap_38;
    MR_Word PublicChildren_40;
    MR_Word SrcMap0_41;
    MR_Word SrcMap_42;
    MR_Word ImportUseMap_43;
    MR_Word IntImportMap_44;
    MR_Word IntUseMap_45;
    MR_Word ImpImportMap_46;
    MR_Word ImpUseMap_47;
    MR_Word IntUseImpImportMap_48;
    MR_Word IntImports2_49;
    MR_Word IntUses2_50;
    MR_Word ImpImports_51;
    MR_Word ImpUses_52;
    MR_Word IntUseImpImports_53;
    MR_Word Ancestors_54;
    MR_Word IntImports_55;
    MR_Word IntUses_56;
    MR_Word AugCompUnit_57;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_ModuleAndImports_71_71;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_73_73;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_76_76;
    MR_Word STATE_VARIABLE_ModuleAndImports_77_77;
    MR_Word STATE_VARIABLE_IntIndirectImported_79_79;
    MR_Word STATE_VARIABLE_ImpIndirectImported_80_80;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_81_81;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_82_82;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_IntIndirectImported_86_86;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_87_87;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_88_88;
    MR_Word STATE_VARIABLE_ModuleAndImports_89_89;
    MR_Word STATE_VARIABLE_ImpIndirectImported_93_93;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_94_94;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_95_95;
    MR_Word STATE_VARIABLE_ModuleAndImports_96_96;
    MR_Word Var_100;
    MR_Word STATE_VARIABLE_IntIndirectImported_101_101;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_102_102;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_103_103;
    MR_Word STATE_VARIABLE_ModuleAndImports_104_104;
    MR_Word STATE_VARIABLE_ImpIndirectImported_108_108;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_109_109;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_110_110;
    MR_Word STATE_VARIABLE_ModuleAndImports_111_111;
    MR_Word STATE_VARIABLE_IntIndirectImported_115_115;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_116_116;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_117_117;
    MR_Word STATE_VARIABLE_ModuleAndImports_118_118;
    MR_Word STATE_VARIABLE_IntImpIndirectImported_122_122;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_123_123;
    MR_Word STATE_VARIABLE_ModuleAndImports_124_124;
    MR_Word STATE_VARIABLE_ImpImpIndirectImported_128_128;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_129_129;
    MR_Word STATE_VARIABLE_ModuleAndImports_130_130;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_134_134;
    MR_Word STATE_VARIABLE_ModuleAndImports_135_135;
    MR_Word STATE_VARIABLE_ModuleAndImports_140_140;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word STATE_VARIABLE_Specs_151_151;
    MR_Box conv1_ImpFIMs_35;
    MR_Word Var_237;
    MR_Word Var_238;
    MR_Word Var_240;
    MR_Word Var_241;
    MR_Word Var_242;
    MR_Word Var_243;
    MR_Word Var_244;
    MR_Word Var_245;
    MR_Word Var_246;
    MR_Word Var_247;
    MR_Word Var_249;
    MR_Word Var_250;
    MR_Word Var_251;
    MR_Word Var_252;
    MR_Word Var_253;
    MR_Word Var_254;
    MR_Word Var_255;
    MR_Word Var_256;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word Var_259;
    MR_Word Var_260;
    MR_Word Var_261;
    MR_Word Var_262;
    MR_Word Var_263;
    MR_Word Var_264;
    MR_Word Var_265;
    MR_Word Var_266;
    MR_Word Var_267;
    MR_Word Var_268;
    MR_Word Var_269;
    MR_Word Var_270;
    MR_Word Var_271;
    MR_Word Var_272;
    MR_Word Var_273;
    MR_Word Var_274;
    MR_Word Var_275;
    MR_Word Var_276;
    MR_Word Var_277;
    MR_Word Var_278;
    MR_Word Var_279;
    MR_Word Var_330;
    MR_Word Var_331;
    MR_Word Var_333;
    MR_Word Var_334;
    MR_Word Var_335;
    MR_Word Var_336;
    MR_Word Var_337;
    MR_Word Var_338;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word AllImportedOrUsed_60;

    parse_tree__get_dependencies__get_foreigns_fact_tables_2_p_0(ParseTreeModuleSrc0_17, &Contents_27);
    ForeignIncludeFilesCord_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_27, (MR_Integer) 0))));
    FactTablesSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_27, (MR_Integer) 1))));
    LangSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_27, (MR_Integer) 2))));
    ForeignExportLangs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Contents_27, (MR_Integer) 3))));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_30, &Langs_32);
    FactTables_33 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTablesSet_29);
    ImpFIMs0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 11))));
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ModuleName_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[0]), Var_66, Langs_32, ((MR_Box) (ImpFIMs0_34)), &conv1_ImpFIMs_35);
    ImpFIMs_35 = ((MR_Word) (conv1_ImpFIMs_35));
    Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 0))));
    Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 1))));
    PublicChildren_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 2))));
    Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 3))));
    Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 4))));
    Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 5))));
    Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 6))));
    Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 7))));
    Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 8))));
    Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 9))));
    Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 10))));
    Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 12))));
    Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 13))));
    Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 14))));
    Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 15))));
    Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 16))));
    Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 17))));
    Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 18))));
    Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 19))));
    Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 20))));
    Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 21))));
    Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 22))));
    Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 23))));
    Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 24))));
    Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 25))));
    Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 26))));
    Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 27))));
    Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 28))));
    Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 29))));
    Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 30))));
    Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 31))));
    Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 32))));
    Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 33))));
    Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 34))));
    Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 35))));
    Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 36))));
    Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 37))));
    Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 38))));
    Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 39))));
    Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 40))));
    Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 41))));
    Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_17, (MR_Integer) 42))));
    {
      ParseTreeModuleSrc_36 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 0) = ((MR_Box) (Var_237));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 1) = ((MR_Box) (Var_238));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 2) = ((MR_Box) (PublicChildren_40));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 3) = ((MR_Box) (Var_240));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 4) = ((MR_Box) (Var_241));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 5) = ((MR_Box) (Var_242));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 6) = ((MR_Box) (Var_243));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 7) = ((MR_Box) (Var_244));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 8) = ((MR_Box) (Var_245));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 9) = ((MR_Box) (Var_246));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 10) = ((MR_Box) (Var_247));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 11) = ((MR_Box) (ImpFIMs_35));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 12) = ((MR_Box) (Var_249));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 13) = ((MR_Box) (Var_250));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 14) = ((MR_Box) (Var_251));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 15) = ((MR_Box) (Var_252));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 16) = ((MR_Box) (Var_253));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 17) = ((MR_Box) (Var_254));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 18) = ((MR_Box) (Var_255));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 19) = ((MR_Box) (Var_256));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 20) = ((MR_Box) (Var_257));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 21) = ((MR_Box) (Var_258));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 22) = ((MR_Box) (Var_259));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 23) = ((MR_Box) (Var_260));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 24) = ((MR_Box) (Var_261));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 25) = ((MR_Box) (Var_262));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 26) = ((MR_Box) (Var_263));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 27) = ((MR_Box) (Var_264));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 28) = ((MR_Box) (Var_265));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 29) = ((MR_Box) (Var_266));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 30) = ((MR_Box) (Var_267));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 31) = ((MR_Box) (Var_268));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 32) = ((MR_Box) (Var_269));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 33) = ((MR_Box) (Var_270));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 34) = ((MR_Box) (Var_271));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 35) = ((MR_Box) (Var_272));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 36) = ((MR_Box) (Var_273));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 37) = ((MR_Box) (Var_274));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 38) = ((MR_Box) (Var_275));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 39) = ((MR_Box) (Var_276));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 40) = ((MR_Box) (Var_277));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 41) = ((MR_Box) (Var_278));
      MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, 42) = ((MR_Box) (Var_279));
    }
    if ((MaybeTimestamp_15 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeTimestampMap_38 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Timestamp_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_15, (MR_Integer) 0))));
      MR_Word Var_67;
      MR_Word Var_68;

      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Timestamp_37));
        MR_hl_field(MR_mktag(0), Var_68, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      Var_67 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_26)), ((MR_Box) (Var_68)));
      {
        MaybeTimestampMap_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTimestampMap_38, 0) = ((MR_Box) (Var_67));
      }
    }
    parse_tree__module_imports__make_module_and_imports_11_p_0(Globals_12, SourceFileName_13, SourceFileModuleName_14, ParseTreeModuleSrc_36, PublicChildren_40, MaybeTopModule_16, FactTables_33, ForeignIncludeFilesCord_28, ForeignExportLangs_31, MaybeTimestampMap_38, &STATE_VARIABLE_ModuleAndImports_71_71);
    SrcMap0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 2))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ((MR_Box) (ModuleName_26)), ((MR_Box) (ParseTreeModuleSrc_36)), SrcMap0_41, &SrcMap_42);
    Var_330 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 0))));
    Var_331 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 1))));
    Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 3))));
    Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 4))));
    Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 5))));
    Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 6))));
    Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 7))));
    Var_338 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_62, (MR_Integer) 8))));
    {
      STATE_VARIABLE_HaveReadModuleMaps_73_73 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 0) = ((MR_Box) (Var_330));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 1) = ((MR_Box) (Var_331));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 2) = ((MR_Box) (SrcMap_42));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 3) = ((MR_Box) (Var_333));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 4) = ((MR_Box) (Var_334));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 5) = ((MR_Box) (Var_335));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 6) = ((MR_Box) (Var_336));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 7) = ((MR_Box) (Var_337));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_73_73, 8) = ((MR_Box) (Var_338));
    }
    ImportUseMap_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_36, (MR_Integer) 9))));
    parse_tree__item_util__import_and_or_use_map_to_module_name_contexts_6_p_0(ImportUseMap_43, &IntImportMap_44, &IntUseMap_45, &ImpImportMap_46, &ImpUseMap_47, &IntUseImpImportMap_48);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_44, &IntImports2_49);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseMap_45, &IntUses2_50);
    ImpImports_51 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_46);
    ImpUses_52 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpUseMap_47);
    IntUseImpImports_53 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntUseImpImportMap_48);
    Ancestors_54 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_26);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_12, (MR_Integer) 0, Ancestors_54, IntImports2_49, &IntImports_55, IntUses2_50, &IntUses_56, STATE_VARIABLE_HaveReadModuleMaps_73_73, &STATE_VARIABLE_HaveReadModuleMaps_76_76, STATE_VARIABLE_ModuleAndImports_71_71, &STATE_VARIABLE_ModuleAndImports_77_77);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntIndirectImported_79_79);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpIndirectImported_80_80);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_IntImpIndirectImported_81_81);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ImpImpIndirectImported_82_82);
    Var_85 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_55);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_12, (MR_Integer) 0, Var_85, STATE_VARIABLE_IntIndirectImported_79_79, &STATE_VARIABLE_IntIndirectImported_86_86, STATE_VARIABLE_IntImpIndirectImported_81_81, &STATE_VARIABLE_IntImpIndirectImported_87_87, STATE_VARIABLE_HaveReadModuleMaps_76_76, &STATE_VARIABLE_HaveReadModuleMaps_88_88, STATE_VARIABLE_ModuleAndImports_77_77, &STATE_VARIABLE_ModuleAndImports_89_89);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_12, (MR_Integer) 2, ImpImports_51, STATE_VARIABLE_ImpIndirectImported_80_80, &STATE_VARIABLE_ImpIndirectImported_93_93, STATE_VARIABLE_ImpImpIndirectImported_82_82, &STATE_VARIABLE_ImpImpIndirectImported_94_94, STATE_VARIABLE_HaveReadModuleMaps_88_88, &STATE_VARIABLE_HaveReadModuleMaps_95_95, STATE_VARIABLE_ModuleAndImports_89_89, &STATE_VARIABLE_ModuleAndImports_96_96);
    Var_100 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_56);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_12, (MR_Integer) 1, Var_100, STATE_VARIABLE_IntIndirectImported_86_86, &STATE_VARIABLE_IntIndirectImported_101_101, STATE_VARIABLE_IntImpIndirectImported_87_87, &STATE_VARIABLE_IntImpIndirectImported_102_102, STATE_VARIABLE_HaveReadModuleMaps_95_95, &STATE_VARIABLE_HaveReadModuleMaps_103_103, STATE_VARIABLE_ModuleAndImports_96_96, &STATE_VARIABLE_ModuleAndImports_104_104);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_12, (MR_Integer) 3, ImpUses_52, STATE_VARIABLE_ImpIndirectImported_93_93, &STATE_VARIABLE_ImpIndirectImported_108_108, STATE_VARIABLE_ImpImpIndirectImported_94_94, &STATE_VARIABLE_ImpImpIndirectImported_109_109, STATE_VARIABLE_HaveReadModuleMaps_103_103, &STATE_VARIABLE_HaveReadModuleMaps_110_110, STATE_VARIABLE_ModuleAndImports_104_104, &STATE_VARIABLE_ModuleAndImports_111_111);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_12, (MR_Integer) 4, IntUseImpImports_53, STATE_VARIABLE_IntIndirectImported_101_101, &STATE_VARIABLE_IntIndirectImported_115_115, STATE_VARIABLE_IntImpIndirectImported_102_102, &STATE_VARIABLE_IntImpIndirectImported_116_116, STATE_VARIABLE_HaveReadModuleMaps_110_110, &STATE_VARIABLE_HaveReadModuleMaps_117_117, STATE_VARIABLE_ModuleAndImports_111_111, &STATE_VARIABLE_ModuleAndImports_118_118);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_12, (MR_Integer) 0, STATE_VARIABLE_IntIndirectImported_115_115, STATE_VARIABLE_IntImpIndirectImported_116_116, &STATE_VARIABLE_IntImpIndirectImported_122_122, STATE_VARIABLE_HaveReadModuleMaps_117_117, &STATE_VARIABLE_HaveReadModuleMaps_123_123, STATE_VARIABLE_ModuleAndImports_118_118, &STATE_VARIABLE_ModuleAndImports_124_124);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_12, (MR_Integer) 1, STATE_VARIABLE_ImpIndirectImported_108_108, STATE_VARIABLE_ImpImpIndirectImported_109_109, &STATE_VARIABLE_ImpImpIndirectImported_128_128, STATE_VARIABLE_HaveReadModuleMaps_123_123, &STATE_VARIABLE_HaveReadModuleMaps_129_129, STATE_VARIABLE_ModuleAndImports_124_124, &STATE_VARIABLE_ModuleAndImports_130_130);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(Globals_12, (MR_Integer) 2, STATE_VARIABLE_IntImpIndirectImported_122_122, STATE_VARIABLE_HaveReadModuleMaps_129_129, &STATE_VARIABLE_HaveReadModuleMaps_134_134, STATE_VARIABLE_ModuleAndImports_130_130, &STATE_VARIABLE_ModuleAndImports_135_135);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(Globals_12, (MR_Integer) 2, STATE_VARIABLE_ImpImpIndirectImported_128_128, STATE_VARIABLE_HaveReadModuleMaps_134_134, STATE_VARIABLE_HaveReadModuleMaps_63, STATE_VARIABLE_ModuleAndImports_135_135, &STATE_VARIABLE_ModuleAndImports_140_140);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(STATE_VARIABLE_ModuleAndImports_140_140, &AugCompUnit_57, &Var_58, &Var_59);
    Var_145 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_51);
    Var_147 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_52);
    Var_149 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUseImpImports_53);
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (IntUses_56));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (IntImports_55));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_143));
    }
    AllImportedOrUsed_60 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_142);
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0(AugCompUnit_57, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_151_151);
    parse_tree__module_imports__module_and_imports_add_specs_3_p_0(STATE_VARIABLE_Specs_151_151, STATE_VARIABLE_ModuleAndImports_140_140, STATE_VARIABLE_ModuleAndImports_61);
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_7(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_6(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_5(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_76;

    parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__962__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_76);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_76));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_3(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_66;

    parse_tree__grab_modules__IntroducedFrom__pred__check_imports_accessibility__950__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_66);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_66));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_16;

    parse_tree__grab_modules__report_any_missing_includes_for_imports_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0(
  MR_Word AugCompUnit_5,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 0))));
    MR_Word ModuleNameContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word AncestorIntSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 4))));
    MR_Word DirectIntSpecs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 5))));
    MR_Word IndirectIntSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 6))));
    MR_Word PlainOpts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 7))));
    MR_Word IntForOptSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 9))));
    MR_Word ReadModules_19;
    MR_Word InclMap_20;
    MR_Word SrcIntImportUseMap_21;
    MR_Word SrcImpImportUseMap_22;
    MR_Word AncestorImportUseMap_23;
    MR_Word SrcIntAncImportUseMap_24;
    MR_Word SrcIntMissingAncestorMap_25;
    MR_Word SrcIntImpImportUseMap_26;
    MR_Word SrcImpMissingAncestorMap0_27;
    MR_Word SrcIntMissingAncestors_28;
    MR_Word SrcImpMissingAncestorMap_29;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Box conv1_STATE_VARIABLE_Specs_36_36;
    MR_Box conv2_STATE_VARIABLE_Specs_38_38;
    MR_Box conv5_SrcIntMissingAncestorMap_25;
    MR_Box conv8_SrcImpMissingAncestorMap0_27;
    MR_Box conv10_STATE_VARIABLE_Specs_48_48;
    MR_Box conv12_STATE_VARIABLE_Specs_31;

    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0(ModuleName_8, ParseTreeModuleSrc_11, AncestorIntSpecs_12, DirectIntSpecs_13, IndirectIntSpecs_14, PlainOpts_15, IntForOptSpecs_17, &ReadModules_19, &InclMap_20, &SrcIntImportUseMap_21, &SrcImpImportUseMap_22, &AncestorImportUseMap_23);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ModuleNameContext_9));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__grab_modules__report_any_missing_includes_6_p_0(ReadModules_19, InclMap_20, ModuleName_8, Var_32, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_33_33);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ReadModules_19));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (InclMap_20));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_35, SrcIntImportUseMap_21, ((MR_Box) (STATE_VARIABLE_Specs_33_33)), &conv1_STATE_VARIABLE_Specs_36_36);
    STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_36_36));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_35, SrcImpImportUseMap_22, ((MR_Box) (STATE_VARIABLE_Specs_36_36)), &conv2_STATE_VARIABLE_Specs_38_38);
    STATE_VARIABLE_Specs_38_38 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_38_38));
    mercury__map__union_4_p_1((MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[5]), SrcIntImportUseMap_21, AncestorImportUseMap_23, &SrcIntAncImportUseMap_24);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (SrcIntAncImportUseMap_24));
    }
    Var_41 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_40, SrcIntImportUseMap_21, ((MR_Box) (Var_41)), &conv5_SrcIntMissingAncestorMap_25);
    SrcIntMissingAncestorMap_25 = ((MR_Word) (conv5_SrcIntMissingAncestorMap_25));
    mercury__map__union_4_p_1((MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[6]), SrcIntAncImportUseMap_24, SrcImpImportUseMap_22, &SrcIntImpImportUseMap_26);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (SrcIntImpImportUseMap_26));
    }
    Var_45 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[1]), Var_44, SrcImpImportUseMap_22, ((MR_Box) (Var_45)), &conv8_SrcImpMissingAncestorMap0_27);
    SrcImpMissingAncestorMap0_27 = ((MR_Word) (conv8_SrcImpMissingAncestorMap0_27));
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestorMap_25, &SrcIntMissingAncestors_28);
    mercury__map__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), SrcIntMissingAncestors_28, SrcImpMissingAncestorMap0_27, &SrcImpMissingAncestorMap_29);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (SrcImpImportUseMap_22));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Var_49));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_47, SrcIntMissingAncestorMap_25, ((MR_Box) (STATE_VARIABLE_Specs_38_38)), &conv10_STATE_VARIABLE_Specs_48_48);
    STATE_VARIABLE_Specs_48_48 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_48_48));
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_111_114_116_115_95_97_99_99_101_115_115_105_98_105_108_105_116_121_95_95_91_50_93_95_48_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_missing_ancestor_info_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_50, SrcImpMissingAncestorMap_29, ((MR_Box) (STATE_VARIABLE_Specs_48_48)), &conv12_STATE_VARIABLE_Specs_31);
    *STATE_VARIABLE_Specs_31 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_31));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_5(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_4(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_3(
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
    MR_Word conv24_STATE_VARIABLE_ReadModules_25;
    MR_Word conv23_STATE_VARIABLE_InclMap_27;
    MR_Word conv22_STATE_VARIABLE_SrcIntImportUseMap_29;
    MR_Word conv21_STATE_VARIABLE_SrcImpImportUseMap_31;
    MR_Word conv20_STATE_VARIABLE_AncestorImportUseMap_33;

    parse_tree__grab_modules__record_includes_imports_uses_in_indirect_int_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ReadModules_25, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_InclMap_27, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_SrcIntImportUseMap_29, ((MR_Word) (wrapper_arg_8)), &conv21_STATE_VARIABLE_SrcImpImportUseMap_31, ((MR_Word) (wrapper_arg_10)), &conv20_STATE_VARIABLE_AncestorImportUseMap_33);
    *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ReadModules_25));
    *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_InclMap_27));
    *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_SrcIntImportUseMap_29));
    *wrapper_arg_9 = ((MR_Box) (conv21_STATE_VARIABLE_SrcImpImportUseMap_31));
    *wrapper_arg_11 = ((MR_Box) (conv20_STATE_VARIABLE_AncestorImportUseMap_33));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_2(
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
    MR_Word conv14_STATE_VARIABLE_ReadModules_25;
    MR_Word conv13_STATE_VARIABLE_InclMap_27;
    MR_Word conv12_STATE_VARIABLE_SrcIntImportUseMap_29;
    MR_Word conv11_STATE_VARIABLE_SrcImpImportUseMap_31;
    MR_Word conv10_STATE_VARIABLE_AncestorImportUseMap_33;

    parse_tree__grab_modules__record_includes_imports_uses_in_direct_int_spec_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ReadModules_25, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_InclMap_27, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_SrcIntImportUseMap_29, ((MR_Word) (wrapper_arg_8)), &conv11_STATE_VARIABLE_SrcImpImportUseMap_31, ((MR_Word) (wrapper_arg_10)), &conv10_STATE_VARIABLE_AncestorImportUseMap_33);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ReadModules_25));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_InclMap_27));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_SrcIntImportUseMap_29));
    *wrapper_arg_9 = ((MR_Box) (conv11_STATE_VARIABLE_SrcImpImportUseMap_31));
    *wrapper_arg_11 = ((MR_Box) (conv10_STATE_VARIABLE_AncestorImportUseMap_33));
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_1(
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word ParseTreeModuleSrc_15,
  MR_Word AncestorIntSpecs_16,
  MR_Word DirectIntSpecs_17,
  MR_Word IndirectIntSpecs_18,
  MR_Word PlainOpts_19,
  MR_Word IntForOptSpecs_21,
  MR_Word * STATE_VARIABLE_ReadModules_28,
  MR_Word * STATE_VARIABLE_InclMap_29,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_30,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_31,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_32)
{
  {
    MR_Word Ancestors_27;
    MR_Word STATE_VARIABLE_ReadModules_33_33;
    MR_Word STATE_VARIABLE_InclMap_34_34;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_35_35;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_36_36;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_37_37;
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
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_ReadModules_62_62;
    MR_Word STATE_VARIABLE_InclMap_63_63;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_64_64;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_65_65;
    MR_Word STATE_VARIABLE_AncestorImportUseMap_66_66;
    MR_Word Var_67;
    MR_Box conv9_STATE_VARIABLE_ReadModules_44_44;
    MR_Box conv8_STATE_VARIABLE_InclMap_45_45;
    MR_Box conv7_STATE_VARIABLE_SrcIntImportUseMap_46_46;
    MR_Box conv6_STATE_VARIABLE_SrcImpImportUseMap_47_47;
    MR_Box conv5_STATE_VARIABLE_AncestorImportUseMap_48_48;
    MR_Box conv19_STATE_VARIABLE_ReadModules_50_50;
    MR_Box conv18_STATE_VARIABLE_InclMap_51_51;
    MR_Box conv17_STATE_VARIABLE_SrcIntImportUseMap_52_52;
    MR_Box conv16_STATE_VARIABLE_SrcImpImportUseMap_53_53;
    MR_Box conv15_STATE_VARIABLE_AncestorImportUseMap_54_54;
    MR_Box conv29_STATE_VARIABLE_ReadModules_56_56;
    MR_Box conv28_STATE_VARIABLE_InclMap_57_57;
    MR_Box conv27_STATE_VARIABLE_SrcIntImportUseMap_58_58;
    MR_Box conv26_STATE_VARIABLE_SrcImpImportUseMap_59_59;
    MR_Box conv25_STATE_VARIABLE_AncestorImportUseMap_60_60;
    MR_Box conv39_STATE_VARIABLE_ReadModules_62_62;
    MR_Box conv38_STATE_VARIABLE_InclMap_63_63;
    MR_Box conv37_STATE_VARIABLE_SrcIntImportUseMap_64_64;
    MR_Box conv36_STATE_VARIABLE_SrcImpImportUseMap_65_65;
    MR_Box conv35_STATE_VARIABLE_AncestorImportUseMap_66_66;
    MR_Box conv49_STATE_VARIABLE_ReadModules_28;
    MR_Box conv48_STATE_VARIABLE_InclMap_29;
    MR_Box conv47_STATE_VARIABLE_SrcIntImportUseMap_30;
    MR_Box conv46_STATE_VARIABLE_SrcImpImportUseMap_31;
    MR_Box conv45_STATE_VARIABLE_AncestorImportUseMap_32;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_ReadModules_33_33);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), &STATE_VARIABLE_InclMap_34_34);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_SrcIntImportUseMap_35_35);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_SrcImpImportUseMap_36_36);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[2]), &STATE_VARIABLE_AncestorImportUseMap_37_37);
    Ancestors_27 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_14);
    parse_tree__grab_modules__record_includes_imports_uses_in_parse_tree_module_src_11_p_0(ParseTreeModuleSrc_15, STATE_VARIABLE_ReadModules_33_33, &STATE_VARIABLE_ReadModules_38_38, STATE_VARIABLE_InclMap_34_34, &STATE_VARIABLE_InclMap_39_39, STATE_VARIABLE_SrcIntImportUseMap_35_35, &STATE_VARIABLE_SrcIntImportUseMap_40_40, STATE_VARIABLE_SrcImpImportUseMap_36_36, &STATE_VARIABLE_SrcImpImportUseMap_41_41, STATE_VARIABLE_AncestorImportUseMap_37_37, &STATE_VARIABLE_AncestorImportUseMap_42_42);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Ancestors_27));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_43, AncestorIntSpecs_16, ((MR_Box) (STATE_VARIABLE_ReadModules_38_38)), &conv9_STATE_VARIABLE_ReadModules_44_44, ((MR_Box) (STATE_VARIABLE_InclMap_39_39)), &conv8_STATE_VARIABLE_InclMap_45_45, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_40_40)), &conv7_STATE_VARIABLE_SrcIntImportUseMap_46_46, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_41_41)), &conv6_STATE_VARIABLE_SrcImpImportUseMap_47_47, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_42_42)), &conv5_STATE_VARIABLE_AncestorImportUseMap_48_48);
    STATE_VARIABLE_ReadModules_44_44 = ((MR_Word) (conv9_STATE_VARIABLE_ReadModules_44_44));
    STATE_VARIABLE_InclMap_45_45 = ((MR_Word) (conv8_STATE_VARIABLE_InclMap_45_45));
    STATE_VARIABLE_SrcIntImportUseMap_46_46 = ((MR_Word) (conv7_STATE_VARIABLE_SrcIntImportUseMap_46_46));
    STATE_VARIABLE_SrcImpImportUseMap_47_47 = ((MR_Word) (conv6_STATE_VARIABLE_SrcImpImportUseMap_47_47));
    STATE_VARIABLE_AncestorImportUseMap_48_48 = ((MR_Word) (conv5_STATE_VARIABLE_AncestorImportUseMap_48_48));
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_2));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Ancestors_27));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, DirectIntSpecs_17, ((MR_Box) (STATE_VARIABLE_ReadModules_44_44)), &conv19_STATE_VARIABLE_ReadModules_50_50, ((MR_Box) (STATE_VARIABLE_InclMap_45_45)), &conv18_STATE_VARIABLE_InclMap_51_51, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_46_46)), &conv17_STATE_VARIABLE_SrcIntImportUseMap_52_52, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_47_47)), &conv16_STATE_VARIABLE_SrcImpImportUseMap_53_53, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_48_48)), &conv15_STATE_VARIABLE_AncestorImportUseMap_54_54);
    STATE_VARIABLE_ReadModules_50_50 = ((MR_Word) (conv19_STATE_VARIABLE_ReadModules_50_50));
    STATE_VARIABLE_InclMap_51_51 = ((MR_Word) (conv18_STATE_VARIABLE_InclMap_51_51));
    STATE_VARIABLE_SrcIntImportUseMap_52_52 = ((MR_Word) (conv17_STATE_VARIABLE_SrcIntImportUseMap_52_52));
    STATE_VARIABLE_SrcImpImportUseMap_53_53 = ((MR_Word) (conv16_STATE_VARIABLE_SrcImpImportUseMap_53_53));
    STATE_VARIABLE_AncestorImportUseMap_54_54 = ((MR_Word) (conv15_STATE_VARIABLE_AncestorImportUseMap_54_54));
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_3));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Ancestors_27));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_55, IndirectIntSpecs_18, ((MR_Box) (STATE_VARIABLE_ReadModules_50_50)), &conv29_STATE_VARIABLE_ReadModules_56_56, ((MR_Box) (STATE_VARIABLE_InclMap_51_51)), &conv28_STATE_VARIABLE_InclMap_57_57, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_52_52)), &conv27_STATE_VARIABLE_SrcIntImportUseMap_58_58, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_53_53)), &conv26_STATE_VARIABLE_SrcImpImportUseMap_59_59, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_54_54)), &conv25_STATE_VARIABLE_AncestorImportUseMap_60_60);
    STATE_VARIABLE_ReadModules_56_56 = ((MR_Word) (conv29_STATE_VARIABLE_ReadModules_56_56));
    STATE_VARIABLE_InclMap_57_57 = ((MR_Word) (conv28_STATE_VARIABLE_InclMap_57_57));
    STATE_VARIABLE_SrcIntImportUseMap_58_58 = ((MR_Word) (conv27_STATE_VARIABLE_SrcIntImportUseMap_58_58));
    STATE_VARIABLE_SrcImpImportUseMap_59_59 = ((MR_Word) (conv26_STATE_VARIABLE_SrcImpImportUseMap_59_59));
    STATE_VARIABLE_AncestorImportUseMap_60_60 = ((MR_Word) (conv25_STATE_VARIABLE_AncestorImportUseMap_60_60));
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_4));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Ancestors_27));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, PlainOpts_19, ((MR_Box) (STATE_VARIABLE_ReadModules_56_56)), &conv39_STATE_VARIABLE_ReadModules_62_62, ((MR_Box) (STATE_VARIABLE_InclMap_57_57)), &conv38_STATE_VARIABLE_InclMap_63_63, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_58_58)), &conv37_STATE_VARIABLE_SrcIntImportUseMap_64_64, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_59_59)), &conv36_STATE_VARIABLE_SrcImpImportUseMap_65_65, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_60_60)), &conv35_STATE_VARIABLE_AncestorImportUseMap_66_66);
    STATE_VARIABLE_ReadModules_62_62 = ((MR_Word) (conv39_STATE_VARIABLE_ReadModules_62_62));
    STATE_VARIABLE_InclMap_63_63 = ((MR_Word) (conv38_STATE_VARIABLE_InclMap_63_63));
    STATE_VARIABLE_SrcIntImportUseMap_64_64 = ((MR_Word) (conv37_STATE_VARIABLE_SrcIntImportUseMap_64_64));
    STATE_VARIABLE_SrcImpImportUseMap_65_65 = ((MR_Word) (conv36_STATE_VARIABLE_SrcImpImportUseMap_65_65));
    STATE_VARIABLE_AncestorImportUseMap_66_66 = ((MR_Word) (conv35_STATE_VARIABLE_AncestorImportUseMap_66_66));
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_110_99_108_117_100_101_115_95_105_109_112_111_114_116_115_95_117_115_101_115_95_95_91_55_93_95_48_13_p_0_5));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Ancestors_27));
    }
    mercury__map__foldl5_values_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[1]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[2]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[3]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_67, IntForOptSpecs_21, ((MR_Box) (STATE_VARIABLE_ReadModules_62_62)), &conv49_STATE_VARIABLE_ReadModules_28, ((MR_Box) (STATE_VARIABLE_InclMap_63_63)), &conv48_STATE_VARIABLE_InclMap_29, ((MR_Box) (STATE_VARIABLE_SrcIntImportUseMap_64_64)), &conv47_STATE_VARIABLE_SrcIntImportUseMap_30, ((MR_Box) (STATE_VARIABLE_SrcImpImportUseMap_65_65)), &conv46_STATE_VARIABLE_SrcImpImportUseMap_31, ((MR_Box) (STATE_VARIABLE_AncestorImportUseMap_66_66)), &conv45_STATE_VARIABLE_AncestorImportUseMap_32);
    *STATE_VARIABLE_ReadModules_28 = ((MR_Word) (conv49_STATE_VARIABLE_ReadModules_28));
    *STATE_VARIABLE_InclMap_29 = ((MR_Word) (conv48_STATE_VARIABLE_InclMap_29));
    *STATE_VARIABLE_SrcIntImportUseMap_30 = ((MR_Word) (conv47_STATE_VARIABLE_SrcIntImportUseMap_30));
    *STATE_VARIABLE_SrcImpImportUseMap_31 = ((MR_Word) (conv46_STATE_VARIABLE_SrcImpImportUseMap_31));
    *STATE_VARIABLE_AncestorImportUseMap_32 = ((MR_Word) (conv45_STATE_VARIABLE_AncestorImportUseMap_32));
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
  MR_Word STATE_VARIABLE_ReadModules_0_68,
  MR_Word * STATE_VARIABLE_ReadModules_69,
  MR_Word STATE_VARIABLE_MaybeAbstractInclMap_0_70,
  MR_Word * STATE_VARIABLE_MaybeAbstractInclMap_71,
  MR_Word STATE_VARIABLE_SrcIntImportUseMap_0_72,
  MR_Word * STATE_VARIABLE_SrcIntImportUseMap_73,
  MR_Word STATE_VARIABLE_SrcImpImportUseMap_0_74,
  MR_Word * STATE_VARIABLE_SrcImpImportUseMap_75,
  MR_Word STATE_VARIABLE_AncestorImportUseMap_0_76,
  MR_Word * STATE_VARIABLE_AncestorImportUseMap_77)
{
  {
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 0))));
    MR_Word InclMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 4))));
    MR_Word IntImportMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 5))));
    MR_Word IntUseMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 6))));
    MR_Word ImpImportMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 7))));
    MR_Word ImpUseMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_12, (MR_Integer) 8))));
    MR_Word IntIncls_61;
    MR_Word ImpIncls_62;
    MR_Word AllIncls_63;
    MR_Word RevIntImportAvails_64;
    MR_Word RevIntUseAvails_65;
    MR_Word RevImpImportAvails_66;
    MR_Word RevImpUseAvails_67;
    MR_Word STATE_VARIABLE_SrcIntImportUseMap_93_93;
    MR_Word STATE_VARIABLE_SrcImpImportUseMap_95_95;
    MR_Box conv1_RevIntImportAvails_64;
    MR_Box conv3_RevIntUseAvails_65;
    MR_Box conv4_RevImpImportAvails_66;
    MR_Box conv5_RevImpUseAvails_67;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_18)), STATE_VARIABLE_ReadModules_0_68, STATE_VARIABLE_ReadModules_69);
    parse_tree__item_util__include_map_to_item_includes_3_p_0(InclMap_22, &IntIncls_61, &ImpIncls_62);
    AllIncls_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0), IntIncls_61, ImpIncls_62);
    parse_tree__grab_modules__record_includes_acc_4_p_0((MR_Integer) 0, AllIncls_63, STATE_VARIABLE_MaybeAbstractInclMap_0_70, STATE_VARIABLE_MaybeAbstractInclMap_71);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[1]), IntImportMap_23, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevIntImportAvails_64);
    RevIntImportAvails_64 = ((MR_Word) (conv1_RevIntImportAvails_64));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[2]), IntUseMap_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevIntUseAvails_65);
    RevIntUseAvails_65 = ((MR_Word) (conv3_RevIntUseAvails_65));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[1]), ImpImportMap_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RevImpImportAvails_66);
    RevImpImportAvails_66 = ((MR_Word) (conv4_RevImpImportAvails_66));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[5]), (MR_Word) (&parse_tree__grab_modules_scalar_common_4[2]), ImpUseMap_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_RevImpUseAvails_67);
    RevImpUseAvails_67 = ((MR_Word) (conv5_RevImpUseAvails_67));
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevIntImportAvails_64, STATE_VARIABLE_SrcIntImportUseMap_0_72, &STATE_VARIABLE_SrcIntImportUseMap_93_93);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevIntUseAvails_65, STATE_VARIABLE_SrcIntImportUseMap_93_93, STATE_VARIABLE_SrcIntImportUseMap_73);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevImpImportAvails_66, STATE_VARIABLE_SrcImpImportUseMap_0_74, &STATE_VARIABLE_SrcImpImportUseMap_95_95);
    parse_tree__grab_modules__recomp_avails_acc_3_p_0(RevImpUseAvails_67, STATE_VARIABLE_SrcImpImportUseMap_95_95, STATE_VARIABLE_SrcImpImportUseMap_75);
    *STATE_VARIABLE_AncestorImportUseMap_77 = STATE_VARIABLE_AncestorImportUseMap_0_76;
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
parse_tree__grab_modules__report_any_missing_includes_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_13;

    parse_tree__grab_modules__report_missing_include_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
parse_tree__grab_modules__report_any_missing_includes_6_p_0_2(
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
parse_tree__grab_modules__report_any_missing_includes_6_p_0_1(
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
parse_tree__grab_modules__report_any_missing_includes_6_p_0(
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

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[4]), InclMap_8, ((MR_Box) (Module_9)), &conv0_IncludeContexts_14);
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
        succeeded = mercury__list__any_true_2_p_0((MR_Word) (&parse_tree__grab_modules__parse_tree__grab_modules__type_ctor_info_include_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_1[4]), IncludeContextsList_17);
        if (succeeded)
          STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_19;
        else
        {
          MR_Word Var_22;
          MR_Box conv2_STATE_VARIABLE_Specs_23_23;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ParentModule_12));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (SubModule_13));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_22, Contexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_23_23);
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
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__grab_modules_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__grab_modules__report_any_missing_includes_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ParentModule_12));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (SubModule_13));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[3]), Var_24, Contexts_10, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv4_STATE_VARIABLE_Specs_23_23);
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_49_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleAndImports_12 = STATE_VARIABLE_ModuleAndImports_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_ImpIndirectImports_8 = STATE_VARIABLE_ImpIndirectImports_0_7;
      *STATE_VARIABLE_IntIndirectImports_6 = STATE_VARIABLE_IntIndirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_60_60;
      MR_Word STATE_VARIABLE_ModuleAndImports_61_61;
      MR_Word STATE_VARIABLE_IntIndirectImports_65_65;
      MR_Word STATE_VARIABLE_ImpIndirectImports_66_66;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_11;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_ModuleAndImports_0_11, ModuleName_36, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word ParseTreeInt1_43;
        MR_Word IntUses_44;
        MR_Word ImpUses_45;
        MR_Word Var_63;
        MR_Word Var_64;

        parse_tree__grab_modules__process_module_int1_10_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_36, &ParseTreeInt1_43, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_60_60, STATE_VARIABLE_ModuleAndImports_0_11, &STATE_VARIABLE_ModuleAndImports_61_61);
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_43, (MR_Integer) 6))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_63, &IntUses_44);
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_43, (MR_Integer) 7))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_64, &ImpUses_45);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_44, STATE_VARIABLE_IntIndirectImports_0_5, &STATE_VARIABLE_IntIndirectImports_65_65);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_45, STATE_VARIABLE_ImpIndirectImports_0_7, &STATE_VARIABLE_ImpIndirectImports_66_66);
      }
      else
      {
        STATE_VARIABLE_ModuleAndImports_61_61 = STATE_VARIABLE_ModuleAndImports_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_60_60 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_ImpIndirectImports_66_66 = STATE_VARIABLE_ImpIndirectImports_0_7;
        STATE_VARIABLE_IntIndirectImports_65_65 = STATE_VARIABLE_IntIndirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_37;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_5 = STATE_VARIABLE_IntIndirectImports_65_65;
      next_value_of_STATE_VARIABLE_ImpIndirectImports_0_7 = STATE_VARIABLE_ImpIndirectImports_66_66;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_60_60;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_11 = STATE_VARIABLE_ModuleAndImports_61_61;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IntIndirectImports_0_5 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      STATE_VARIABLE_ImpIndirectImports_0_7 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_ModuleAndImports_0_11 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int1_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy1_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt1_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_28,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_29,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_30,
  MR_Word * STATE_VARIABLE_ModuleAndImports_31)
{
  {
    MR_Word ReturnTimestamp_18;
    MR_Word MaybeTimestamp_20;
    MR_Word Specs_21;
    MR_Word Errors_22;
    MR_Word GrabbedFile_23;
    MR_Word RecompAvail_24;
    MR_Word STATE_VARIABLE_ModuleAndImports_37_37;
    MR_Word STATE_VARIABLE_ModuleAndImports_42_42;
    MR_Word STATE_VARIABLE_ModuleAndImports_44_44;
    MR_Word STATE_VARIABLE_ModuleAndImports_45_45;
    MR_Word Var_46;
    MR_String _FileName_19;

    parse_tree__module_imports__module_and_imports_do_we_need_timestamps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_30, &ReturnTimestamp_18);
    parse_tree__read_modules__maybe_read_module_int1_13_p_0(Globals_11, (MR_Integer) 0, ModuleName_13, &_FileName_19, ReturnTimestamp_18, &MaybeTimestamp_20, ParseTreeInt1_14, &Specs_21, &Errors_22, STATE_VARIABLE_HaveReadModuleMaps_0_28, STATE_VARIABLE_HaveReadModuleMaps_29);
    {
      GrabbedFile_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GrabbedFile_23, 0) = ((MR_Box) (*ParseTreeInt1_14));
      MR_hl_field(MR_mktag(2), GrabbedFile_23, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
    }
    parse_tree__module_imports__module_and_imports_add_grabbed_file_4_p_0(ModuleName_13, GrabbedFile_23, STATE_VARIABLE_ModuleAndImports_0_30, &STATE_VARIABLE_ModuleAndImports_37_37);
    switch (ReadWhy1_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word DirectIntSpec_25;
          MR_Word STATE_VARIABLE_ModuleAndImports_40_40;
          MR_Word Var_41;

          RecompAvail_24 = (MR_Integer) 2;
          {
            DirectIntSpec_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_25, 0) = ((MR_Box) (*ParseTreeInt1_14));
            MR_hl_field(MR_mktag(0), DirectIntSpec_25, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_25, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_40_40);
          Var_41 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_41, STATE_VARIABLE_ModuleAndImports_40_40, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DirectIntSpec_71;
          MR_Word STATE_VARIABLE_ModuleAndImports_40_72;
          MR_Word Var_73;

          RecompAvail_24 = (MR_Integer) 4;
          {
            DirectIntSpec_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_71, 0) = ((MR_Box) (*ParseTreeInt1_14));
            MR_hl_field(MR_mktag(0), DirectIntSpec_71, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_71, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_40_72);
          Var_73 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_73, STATE_VARIABLE_ModuleAndImports_40_72, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word DirectIntSpec_74;
          MR_Word STATE_VARIABLE_ModuleAndImports_40_75;
          MR_Word Var_76;

          RecompAvail_24 = (MR_Integer) 1;
          {
            DirectIntSpec_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_74, 0) = ((MR_Box) (*ParseTreeInt1_14));
            MR_hl_field(MR_mktag(0), DirectIntSpec_74, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_74, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_40_75);
          Var_76 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_76, STATE_VARIABLE_ModuleAndImports_40_75, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DirectIntSpec_77;
          MR_Word STATE_VARIABLE_ModuleAndImports_40_78;
          MR_Word Var_79;

          RecompAvail_24 = (MR_Integer) 3;
          {
            DirectIntSpec_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_77, 0) = ((MR_Box) (*ParseTreeInt1_14));
            MR_hl_field(MR_mktag(0), DirectIntSpec_77, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_77, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_40_78);
          Var_79 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_79, STATE_VARIABLE_ModuleAndImports_40_78, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word DirectIntSpec_80;
          MR_Word STATE_VARIABLE_ModuleAndImports_40_81;
          MR_Word Var_82;

          RecompAvail_24 = (MR_Integer) 5;
          {
            DirectIntSpec_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectIntSpec_80, 0) = ((MR_Box) (*ParseTreeInt1_14));
            MR_hl_field(MR_mktag(0), DirectIntSpec_80, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
          }
          parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(DirectIntSpec_80, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_40_81);
          Var_82 = mercury__term__dummy_context_init_0_f_0();
          parse_tree__module_imports__module_and_imports_add_direct_dep_4_p_0(ModuleName_13, Var_82, STATE_VARIABLE_ModuleAndImports_40_81, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word IntForOptSpec_26;

          RecompAvail_24 = (MR_Integer) 4;
          {
            IntForOptSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IntForOptSpec_26, 0) = ((MR_Box) (*ParseTreeInt1_14));
            MR_hl_field(MR_mktag(1), IntForOptSpec_26, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_12));
          }
          parse_tree__module_imports__module_and_imports_add_int_for_opt_spec_3_p_0(IntForOptSpec_26, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word TypeRepnSpec_27;

          RecompAvail_24 = (MR_Integer) 1;
          TypeRepnSpec_27 = (MR_Word) (*ParseTreeInt1_14);
          parse_tree__module_imports__module_and_imports_add_type_repn_spec_3_p_0(TypeRepnSpec_27, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_42_42);
        }
        break;
    }
    parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(ModuleName_13, (MR_Integer) 1, RecompAvail_24, MaybeTimestamp_20, STATE_VARIABLE_ModuleAndImports_42_42, &STATE_VARIABLE_ModuleAndImports_44_44);
    parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_21, Errors_22, STATE_VARIABLE_ModuleAndImports_44_44, &STATE_VARIABLE_ModuleAndImports_45_45);
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_14, (MR_Integer) 2))));
    parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_13, Var_46, STATE_VARIABLE_ModuleAndImports_45_45, STATE_VARIABLE_ModuleAndImports_31);
  }
}

static void MR_CALL 
parse_tree__grab_modules__maybe_record_interface_timestamp_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntFileKind_8,
  MR_Word RecompAvail_9,
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
          MR_hl_field(MR_mktag(0), TimestampInfo_16, 2) = (MR_Box) ((MR_Unsigned) (RecompAvail_9));
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
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_48_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DirectImports_0_5,
  MR_Word * STATE_VARIABLE_DirectImports_6,
  MR_Word STATE_VARIABLE_DirectUses_0_7,
  MR_Word * STATE_VARIABLE_DirectUses_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleAndImports_12 = STATE_VARIABLE_ModuleAndImports_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_DirectUses_8 = STATE_VARIABLE_DirectUses_0_7;
      *STATE_VARIABLE_DirectImports_6 = STATE_VARIABLE_DirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_62_62;
      MR_Word STATE_VARIABLE_ModuleAndImports_63_63;
      MR_Word STATE_VARIABLE_DirectImports_70_70;
      MR_Word STATE_VARIABLE_DirectUses_72_72;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectUses_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_11;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_ModuleAndImports_0_11, ModuleName_36, (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word ParseTreeInt0_43;
        MR_Word IntImports_44;
        MR_Word ImpImports_45;
        MR_Word IntUses_46;
        MR_Word ImpUses_47;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word STATE_VARIABLE_DirectImports_69_69;
        MR_Word STATE_VARIABLE_DirectUses_71_71;

        parse_tree__grab_modules__process_module_int0_10_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_36, &ParseTreeInt0_43, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_ModuleAndImports_0_11, &STATE_VARIABLE_ModuleAndImports_63_63);
        Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_43, (MR_Integer) 6))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_65, &IntImports_44);
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_43, (MR_Integer) 8))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_66, &ImpImports_45);
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_43, (MR_Integer) 7))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_67, &IntUses_46);
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_43, (MR_Integer) 9))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_68, &ImpUses_47);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntImports_44, STATE_VARIABLE_DirectImports_0_5, &STATE_VARIABLE_DirectImports_69_69);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpImports_45, STATE_VARIABLE_DirectImports_69_69, &STATE_VARIABLE_DirectImports_70_70);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_46, STATE_VARIABLE_DirectUses_0_7, &STATE_VARIABLE_DirectUses_71_71);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpUses_47, STATE_VARIABLE_DirectUses_71_71, &STATE_VARIABLE_DirectUses_72_72);
      }
      else
      {
        STATE_VARIABLE_ModuleAndImports_63_63 = STATE_VARIABLE_ModuleAndImports_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_62_62 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_DirectUses_72_72 = STATE_VARIABLE_DirectUses_0_7;
        STATE_VARIABLE_DirectImports_70_70 = STATE_VARIABLE_DirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_37;
      next_value_of_STATE_VARIABLE_DirectImports_0_5 = STATE_VARIABLE_DirectImports_70_70;
      next_value_of_STATE_VARIABLE_DirectUses_0_7 = STATE_VARIABLE_DirectUses_72_72;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_62_62;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_11 = STATE_VARIABLE_ModuleAndImports_63_63;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DirectImports_0_5 = next_value_of_STATE_VARIABLE_DirectImports_0_5;
      STATE_VARIABLE_DirectUses_0_7 = next_value_of_STATE_VARIABLE_DirectUses_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_ModuleAndImports_0_11 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int0_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy0_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_26,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_27,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_28,
  MR_Word * STATE_VARIABLE_ModuleAndImports_29)
{
  {
    MR_Word ReturnTimestamp_18;
    MR_Word MaybeTimestamp_20;
    MR_Word Specs_21;
    MR_Word Errors_22;
    MR_Word GrabbedFile_23;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;
    MR_Word STATE_VARIABLE_ModuleAndImports_37_37;
    MR_Word STATE_VARIABLE_ModuleAndImports_38_38;
    MR_Word STATE_VARIABLE_ModuleAndImports_41_41;
    MR_Word STATE_VARIABLE_ModuleAndImports_42_42;
    MR_Word Var_43;
    MR_Word MaybeTimestampMap_83;
    MR_String _FileName_19;

    parse_tree__module_imports__module_and_imports_do_we_need_timestamps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_28, &ReturnTimestamp_18);
    parse_tree__read_modules__maybe_read_module_int0_13_p_0(Globals_11, (MR_Integer) 0, ModuleName_13, &_FileName_19, ReturnTimestamp_18, &MaybeTimestamp_20, ParseTreeInt0_14, &Specs_21, &Errors_22, STATE_VARIABLE_HaveReadModuleMaps_0_26, STATE_VARIABLE_HaveReadModuleMaps_27);
    {
      GrabbedFile_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GrabbedFile_23, 0) = ((MR_Box) (*ParseTreeInt0_14));
      MR_hl_field(MR_mktag(1), GrabbedFile_23, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_12));
    }
    parse_tree__module_imports__module_and_imports_add_grabbed_file_4_p_0(ModuleName_13, GrabbedFile_23, STATE_VARIABLE_ModuleAndImports_0_28, &STATE_VARIABLE_ModuleAndImports_35_35);
    switch (ReadWhy0_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IntForOptSpec_25;

          {
            IntForOptSpec_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IntForOptSpec_25, 0) = ((MR_Box) (*ParseTreeInt0_14));
            MR_hl_field(MR_mktag(0), IntForOptSpec_25, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_12));
          }
          parse_tree__module_imports__module_and_imports_add_int_for_opt_spec_3_p_0(IntForOptSpec_25, STATE_VARIABLE_ModuleAndImports_35_35, &STATE_VARIABLE_ModuleAndImports_37_37);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word AncestorIntSpec_24;

          {
            AncestorIntSpec_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AncestorIntSpec_24, 0) = ((MR_Box) (*ParseTreeInt0_14));
            MR_hl_field(MR_mktag(0), AncestorIntSpec_24, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_12));
          }
          parse_tree__module_imports__module_and_imports_add_ancestor_int_spec_3_p_0(AncestorIntSpec_24, STATE_VARIABLE_ModuleAndImports_35_35, &STATE_VARIABLE_ModuleAndImports_37_37);
        }
        break;
    }
    parse_tree__module_imports__module_and_imports_add_ancestor_3_p_0(ModuleName_13, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_38_38);
    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(STATE_VARIABLE_ModuleAndImports_38_38, &MaybeTimestampMap_83);
    if ((MaybeTimestampMap_83 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ModuleAndImports_41_41 = STATE_VARIABLE_ModuleAndImports_38_38;
    else
    {
      MR_Word TimestampMap0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_83, (MR_Integer) 0))));

      if ((MaybeTimestamp_20 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ModuleAndImports_41_41 = STATE_VARIABLE_ModuleAndImports_38_38;
      else
      {
        MR_Word Timestamp_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_20, (MR_Integer) 0))));
        MR_Word TimestampInfo_87;
        MR_Word TimestampMap_88;
        MR_Word Var_89;

        {
          TimestampInfo_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TimestampInfo_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[0])));
          MR_hl_field(MR_mktag(0), TimestampInfo_87, 1) = ((MR_Box) (Timestamp_85));
          MR_hl_field(MR_mktag(0), TimestampInfo_87, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (TimestampInfo_87)), TimestampMap0_84, &TimestampMap_88);
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (TimestampMap_88));
        }
        parse_tree__module_imports__module_and_imports_set_maybe_timestamp_map_3_p_0(Var_89, STATE_VARIABLE_ModuleAndImports_38_38, &STATE_VARIABLE_ModuleAndImports_41_41);
      }
    }
    parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_21, Errors_22, STATE_VARIABLE_ModuleAndImports_41_41, &STATE_VARIABLE_ModuleAndImports_42_42);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt0_14, (MR_Integer) 2))));
    parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_13, Var_43, STATE_VARIABLE_ModuleAndImports_42_42, STATE_VARIABLE_ModuleAndImports_29);
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_97_110_100_95_105_109_112_108_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy2_13,
  MR_Word Modules_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_19,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_20,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_21,
  MR_Word * STATE_VARIABLE_ModuleAndImports_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ImpIndirectImports_18;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_26_26;
    MR_Word STATE_VARIABLE_ModuleAndImports_27_27;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_25 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(Globals_11, ReadWhy2_13, Modules_14, Var_25, &ImpIndirectImports_18, STATE_VARIABLE_HaveReadModuleMaps_0_19, &STATE_VARIABLE_HaveReadModuleMaps_26_26, STATE_VARIABLE_ModuleAndImports_0_21, &STATE_VARIABLE_ModuleAndImports_27_27);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpIndirectImports_18);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_22 = STATE_VARIABLE_ModuleAndImports_27_27;
      *STATE_VARIABLE_HaveReadModuleMaps_20 = STATE_VARIABLE_HaveReadModuleMaps_26_26;
    }
    else
    {
      MR_Word next_value_of_Modules_14 = ImpIndirectImports_18;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_19 = STATE_VARIABLE_HaveReadModuleMaps_26_26;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_21 = STATE_VARIABLE_ModuleAndImports_27_27;

      // direct tailcall eliminated
      ;
      Modules_14 = next_value_of_Modules_14;
      STATE_VARIABLE_HaveReadModuleMaps_0_19 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_19;
      STATE_VARIABLE_ModuleAndImports_0_21 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_21;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_91_50_93_95_48_12_p_0(
  MR_Word Globals_13,
  MR_Word ReadWhy2_15,
  MR_Word Modules_16,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_22,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_23,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_24,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_25,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_26,
  MR_Word * STATE_VARIABLE_ModuleAndImports_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IndirectImports_21;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_ImpIndirectImports_32_32;
    MR_Word STATE_VARIABLE_HaveReadModuleMaps_33_33;
    MR_Word STATE_VARIABLE_ModuleAndImports_34_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_16);
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(Globals_13, ReadWhy2_15, Var_30, Var_31, &IndirectImports_21, STATE_VARIABLE_ImpIndirectImports_0_22, &STATE_VARIABLE_ImpIndirectImports_32_32, STATE_VARIABLE_HaveReadModuleMaps_0_24, &STATE_VARIABLE_HaveReadModuleMaps_33_33, STATE_VARIABLE_ModuleAndImports_0_26, &STATE_VARIABLE_ModuleAndImports_34_34);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectImports_21);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleAndImports_27 = STATE_VARIABLE_ModuleAndImports_34_34;
      *STATE_VARIABLE_HaveReadModuleMaps_25 = STATE_VARIABLE_HaveReadModuleMaps_33_33;
      *STATE_VARIABLE_ImpIndirectImports_23 = STATE_VARIABLE_ImpIndirectImports_32_32;
    }
    else
    {
      MR_Word next_value_of_Modules_16 = IndirectImports_21;
      MR_Word next_value_of_STATE_VARIABLE_ImpIndirectImports_0_22 = STATE_VARIABLE_ImpIndirectImports_32_32;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24 = STATE_VARIABLE_HaveReadModuleMaps_33_33;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_26 = STATE_VARIABLE_ModuleAndImports_34_34;

      // direct tailcall eliminated
      ;
      Modules_16 = next_value_of_Modules_16;
      STATE_VARIABLE_ImpIndirectImports_0_22 = next_value_of_STATE_VARIABLE_ImpIndirectImports_0_22;
      STATE_VARIABLE_HaveReadModuleMaps_0_24 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_24;
      STATE_VARIABLE_ModuleAndImports_0_26 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_26;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_97_98_95_109_111_100_117_108_101_95_105_110_116_50_95_102_105_108_101_115_95_95_91_50_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_IntIndirectImports_0_5,
  MR_Word * STATE_VARIABLE_IntIndirectImports_6,
  MR_Word STATE_VARIABLE_ImpIndirectImports_0_7,
  MR_Word * STATE_VARIABLE_ImpIndirectImports_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleAndImports_12 = STATE_VARIABLE_ModuleAndImports_0_11;
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_ImpIndirectImports_8 = STATE_VARIABLE_ImpIndirectImports_0_7;
      *STATE_VARIABLE_IntIndirectImports_6 = STATE_VARIABLE_IntIndirectImports_0_5;
    }
    else
    {
      MR_Word ModuleName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleNames_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_59_59;
      MR_Word STATE_VARIABLE_ModuleAndImports_60_60;
      MR_Word STATE_VARIABLE_IntIndirectImports_63_63;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModuleAndImports_0_11;

      succeeded = parse_tree__grab_modules__should_read_interface_3_p_0(STATE_VARIABLE_ModuleAndImports_0_11, ModuleName_36, (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word ParseTreeInt2_43;
        MR_Word IntUses_44;
        MR_Word Var_62;

        parse_tree__grab_modules__process_module_int2_10_p_0(HeadVar__1_1, HeadVar__3_3, ModuleName_36, &ParseTreeInt2_43, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_59_59, STATE_VARIABLE_ModuleAndImports_0_11, &STATE_VARIABLE_ModuleAndImports_60_60);
        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_43, (MR_Integer) 5))));
        mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__grab_modules_scalar_common_2[0]), Var_62, &IntUses_44);
        mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntUses_44, STATE_VARIABLE_IntIndirectImports_0_5, &STATE_VARIABLE_IntIndirectImports_63_63);
      }
      else
      {
        STATE_VARIABLE_ModuleAndImports_60_60 = STATE_VARIABLE_ModuleAndImports_0_11;
        STATE_VARIABLE_HaveReadModuleMaps_59_59 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
        STATE_VARIABLE_IntIndirectImports_63_63 = STATE_VARIABLE_IntIndirectImports_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ModuleNames_37;
      next_value_of_STATE_VARIABLE_IntIndirectImports_0_5 = STATE_VARIABLE_IntIndirectImports_63_63;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
      next_value_of_STATE_VARIABLE_ModuleAndImports_0_11 = STATE_VARIABLE_ModuleAndImports_60_60;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_IntIndirectImports_0_5 = next_value_of_STATE_VARIABLE_IntIndirectImports_0_5;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      STATE_VARIABLE_ModuleAndImports_0_11 = next_value_of_STATE_VARIABLE_ModuleAndImports_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__grab_modules__process_module_int2_10_p_0(
  MR_Word Globals_11,
  MR_Word ReadWhy2_12,
  MR_Word ModuleName_13,
  MR_Word * ParseTreeInt2_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_26,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_27,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_28,
  MR_Word * STATE_VARIABLE_ModuleAndImports_29)
{
  {
    MR_Word ReturnTimestamp_18;
    MR_Word MaybeTimestamp_20;
    MR_Word Specs_21;
    MR_Word Errors_22;
    MR_Word GrabbedFile_23;
    MR_Word STATE_VARIABLE_ModuleAndImports_35_35;
    MR_Word STATE_VARIABLE_ModuleAndImports_38_38;
    MR_Word STATE_VARIABLE_ModuleAndImports_41_41;
    MR_Word STATE_VARIABLE_ModuleAndImports_42_42;
    MR_Word Var_43;
    MR_Word MaybeTimestampMap_67;
    MR_String _FileName_19;

    parse_tree__module_imports__module_and_imports_do_we_need_timestamps_2_p_0(STATE_VARIABLE_ModuleAndImports_0_28, &ReturnTimestamp_18);
    parse_tree__read_modules__maybe_read_module_int2_13_p_0(Globals_11, (MR_Integer) 0, ModuleName_13, &_FileName_19, ReturnTimestamp_18, &MaybeTimestamp_20, ParseTreeInt2_14, &Specs_21, &Errors_22, STATE_VARIABLE_HaveReadModuleMaps_0_26, STATE_VARIABLE_HaveReadModuleMaps_27);
    {
      GrabbedFile_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GrabbedFile_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), GrabbedFile_23, 1) = ((MR_Box) (*ParseTreeInt2_14));
      MR_hl_field(MR_mktag(3), GrabbedFile_23, 2) = (MR_Box) ((MR_Unsigned) (ReadWhy2_12));
    }
    parse_tree__module_imports__module_and_imports_add_grabbed_file_4_p_0(ModuleName_13, GrabbedFile_23, STATE_VARIABLE_ModuleAndImports_0_28, &STATE_VARIABLE_ModuleAndImports_35_35);
    switch (ReadWhy2_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word IndirectIntSpec_24;
          MR_Word STATE_VARIABLE_ModuleAndImports_37_37;

          {
            IndirectIntSpec_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IndirectIntSpec_24, 0) = ((MR_Box) (*ParseTreeInt2_14));
            MR_hl_field(MR_mktag(0), IndirectIntSpec_24, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_12));
          }
          parse_tree__module_imports__module_and_imports_add_indirect_int_spec_3_p_0(IndirectIntSpec_24, STATE_VARIABLE_ModuleAndImports_35_35, &STATE_VARIABLE_ModuleAndImports_37_37);
          parse_tree__module_imports__module_and_imports_add_indirect_dep_3_p_0(ModuleName_13, STATE_VARIABLE_ModuleAndImports_37_37, &STATE_VARIABLE_ModuleAndImports_38_38);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word IntForOptSpec_25;

          {
            IntForOptSpec_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IntForOptSpec_25, 0) = ((MR_Box) (*ParseTreeInt2_14));
            MR_hl_field(MR_mktag(2), IntForOptSpec_25, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_12));
          }
          parse_tree__module_imports__module_and_imports_add_int_for_opt_spec_3_p_0(IntForOptSpec_25, STATE_VARIABLE_ModuleAndImports_35_35, &STATE_VARIABLE_ModuleAndImports_38_38);
        }
        break;
    }
    parse_tree__module_imports__module_and_imports_get_maybe_timestamp_map_2_p_0(STATE_VARIABLE_ModuleAndImports_38_38, &MaybeTimestampMap_67);
    if ((MaybeTimestampMap_67 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ModuleAndImports_41_41 = STATE_VARIABLE_ModuleAndImports_38_38;
    else
    {
      MR_Word TimestampMap0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_67, (MR_Integer) 0))));

      if ((MaybeTimestamp_20 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ModuleAndImports_41_41 = STATE_VARIABLE_ModuleAndImports_38_38;
      else
      {
        MR_Word Timestamp_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_20, (MR_Integer) 0))));
        MR_Word TimestampInfo_71;
        MR_Word TimestampMap_72;
        MR_Word Var_73;

        {
          TimestampInfo_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TimestampInfo_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__grab_modules_scalar_common_3[2])));
          MR_hl_field(MR_mktag(0), TimestampInfo_71, 1) = ((MR_Box) (Timestamp_69));
          MR_hl_field(MR_mktag(0), TimestampInfo_71, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (TimestampInfo_71)), TimestampMap0_68, &TimestampMap_72);
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (TimestampMap_72));
        }
        parse_tree__module_imports__module_and_imports_set_maybe_timestamp_map_3_p_0(Var_73, STATE_VARIABLE_ModuleAndImports_38_38, &STATE_VARIABLE_ModuleAndImports_41_41);
      }
    }
    parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(Specs_21, Errors_22, STATE_VARIABLE_ModuleAndImports_41_41, &STATE_VARIABLE_ModuleAndImports_42_42);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_14, (MR_Integer) 2))));
    parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(ModuleName_13, Var_43, STATE_VARIABLE_ModuleAndImports_42_42, STATE_VARIABLE_ModuleAndImports_29);
  }
}

static MR_bool MR_CALL 
parse_tree__grab_modules__should_read_interface_3_p_0(
  MR_Word ModuleAndImports_4,
  MR_Word ModuleName_5,
  MR_Word FileKind_6)
{
  {
    MR_bool succeeded;
    MR_Word GrabbedFileMap_7;
    MR_Word OldGrabbedFile_8;
    MR_Box conv0_OldGrabbedFile_8;

    parse_tree__module_imports__module_and_imports_get_grabbed_file_map_2_p_0(ModuleAndImports_4, &GrabbedFileMap_7);
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
      MR_Word Var_15;

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
      parse_tree__file_kind____Compare____file_kind_0_0(&Var_15, Var_11, OldFileKind_9);
      succeeded = ((MR_Integer) 1 == Var_15);
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
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

void mercury__parse_tree__grab_modules__init(void)
{
}

void mercury__parse_tree__grab_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

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
