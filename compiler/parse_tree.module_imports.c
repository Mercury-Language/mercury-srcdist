/*
** Automatically generated from `module_imports.m'
** by the Mercury compiler,
** version rotd-2021-08-14
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_1[2];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_1[2];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_1;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_2[2];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_2[2];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_2;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_3[2];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_3[2];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_3;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_4[2];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_4[2];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_4;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_3[2];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_grabbed_file_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_grabbed_file_0[5];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_grabbed_file_0[5];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_grabbed_file_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_0_0[16];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_0_0[16];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_mai_fields_0_0[16];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_mai_fields_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_mai_fields_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_0[1];

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_0;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_ordinal_ordered_maybe_accessed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_maybe_accessed_0[2];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_accessed_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_maybe_top_module_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_0;

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_maybe_top_module_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_maybe_top_module_0_1[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_maybe_top_module_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_maybe_top_module_0[2];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_top_module_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_direct_int_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_indirect_int_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_type_repn_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[9];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[9];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_and_imports_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_baggage_0_0[8];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_baggage_0_0[8];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_baggage_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_baggage_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_baggage_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_baggage_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_baggage_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_info_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_info_0_1[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_dep_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_dep_info_0[2];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_dep_info_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_summary_0_0[13];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_dep_summary_0_0[13];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_dep_summary_0_0[13];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_summary_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_summary_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_dep_summary_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_dep_summary_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_dep_summary_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_imports_and_baggage_0_0[2];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_imports_and_baggage_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_imports_and_baggage_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_imports_and_baggage_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_imports_and_baggage_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_imports_and_baggage_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_imports_and_baggage_0[1];

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3];

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3];

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_timestamp_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_timestamp_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_timestamp_0_0[1];

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0[1];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0[1];

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_0;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_1;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_2;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_3;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_4;

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_5;

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_ordinal_ordered_recomp_avail_0[6];

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_recomp_avail_0[6];

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_recomp_avail_0[6];

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
parse_tree__module_imports____Compare____mai_fields_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_imports__unsafe_set_accesses_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__module_imports__unsafe_get_accesses_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__module_imports__unlock_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__lock_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__pre_initialise_mutable_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__initialise_mutable_accesses_0_p_0(void);

static void MR_CALL 
parse_tree__module_imports__add_module_dep_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntDeps_0_17,
  MR_Word * STATE_VARIABLE_IntDeps_18,
  MR_Word STATE_VARIABLE_ImpDeps_0_19,
  MR_Word * STATE_VARIABLE_ImpDeps_20);

static void MR_CALL 
parse_tree__module_imports__maybe_nested_init_module_imports_and_baggage_7_p_0(
  MR_String SourceFileName_8,
  MR_Word SourceFileModuleName_9,
  MR_Word AllModuleNames_10,
  MR_Word Specs_11,
  MR_Word Errors_12,
  MR_Word ParseTreeModuleSrc_13,
  MR_Word * ModuleImportsAndBaggage_14);

static void MR_CALL 
parse_tree__module_imports__write_mai_fields_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word Fields_6);

static MR_String MR_CALL 
parse_tree__module_imports__acc_str_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_for_opt_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7);

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_imp_deps_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____grabbed_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____grabbed_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____grabbed_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____grabbed_file_map_0_0_10001(
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
parse_tree__module_imports____Unify____maybe_accessed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_accessed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____maybe_top_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_top_module_0_0_10001(
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
parse_tree__module_imports____Unify____module_baggage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_baggage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_dep_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_dep_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_imports_and_baggage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____module_imports_and_baggage_0_0_10001(
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

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____recomp_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_imports____Compare____recomp_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[12][3];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[1][10];

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_6[1][9];




static /* final */ const MR_Box parse_tree__module_imports_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports_scalar_common_2[9]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__module_imports_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_imports__module_and_imports_get_int_imp_deps_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 15)) | (((((MR_Unsigned) 0U << 14)) | (((((MR_Unsigned) 0U << 13)) | (((((MR_Unsigned) 0U << 12)) | (((((MR_Unsigned) 0U << 11)) | (((((MR_Unsigned) 0U << 10)) | (((((MR_Unsigned) 0U << 9)) | (((((MR_Unsigned) 0U << 8)) | (((((MR_Unsigned) 0U << 7)) | (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))))))))))))))))))))))))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_imports_and_baggage_0))
  },
};

static /* final */ const MR_Box parse_tree__module_imports_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "dir.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "private_builtin.mh"
#include "string.mh"
#include "time.mh"
#include "libs.globals.mh"
#include "libs.timestamp.mh"
#include "parse_tree.module_imports.mh"
#include "string.format.mh"
#line 1036 "module_imports.m"
MR_Word parse_tree__module_imports__mutable_variable_accesses;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__module_imports__mutable_variable_accesses_lock;
#endif


#line 1036 "module_imports.m"
void 
parse_tree__module_imports__user_init_pred_152_0(void)
#line 1036 "module_imports.m"
{
#line 1036 "module_imports.m"
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

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_0 = {
  (MR_String) "gf_src",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int0_0)
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_1 = {
  (MR_String) "gf_int0",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_1,
  NULL,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int1_0)
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_2 = {
  (MR_String) "gf_int1",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_2,
  NULL,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int2_0)
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_3 = {
  (MR_String) "gf_int2",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_3,
  NULL,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_4[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int3_0)
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_4 = {
  (MR_String) "gf_int3",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__module_imports__parse_tree__module_imports__field_types_grabbed_file_0_4,
  NULL,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_grabbed_file_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_0
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_1[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_1
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_2[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_2
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_3[2] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_3,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_4
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_grabbed_file_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_grabbed_file_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_grabbed_file_0[5] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_2,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_3,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_4,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_grabbed_file_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_grabbed_file_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____grabbed_file_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____grabbed_file_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "grabbed_file",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_grabbed_file_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_grabbed_file_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_grabbed_file_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_grabbed_file_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_imports____Unify____grabbed_file_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____grabbed_file_map_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "grabbed_file_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_grabbed_file_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_mai_fields_0_0[16] = {
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

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_mai_fields_0_0[16] = {
  (MR_String) "mf_source_file_name",
  (MR_String) "mf_source_file_dir",
  (MR_String) "mf_source_file_module_name",
  (MR_String) "mf_maybe_top_module",
  (MR_String) "mf_src",
  (MR_String) "mf_ancestor_int_specs",
  (MR_String) "mf_direct_int_specs",
  (MR_String) "mf_indirect_int_specs",
  (MR_String) "mf_plain_opts",
  (MR_String) "mf_trans_opts",
  (MR_String) "mf_int_for_opt_specs",
  (MR_String) "mf_type_repn_specs",
  (MR_String) "mf_version_numbers_map",
  (MR_String) "mf_maybe_timestamp_map",
  (MR_String) "mf_specs",
  (MR_String) "mf_errors"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_mai_fields_0_0[16] = {
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
  INT16_C(16),
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____mai_fields_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____mai_fields_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "mai_fields",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_mai_fields_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_mai_fields_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_mai_fields_0,

};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_0 = {
  (MR_String) "not_accessed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_maybe_accessed_0_1 = {
  (MR_String) "accessed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_ordinal_ordered_maybe_accessed_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_imports____Unify____maybe_accessed_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____maybe_accessed_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "maybe_accessed",
  {     parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_maybe_accessed_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__enum_ordinal_ordered_maybe_accessed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_accessed_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_maybe_top_module_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_0 = {
  (MR_String) "top_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_maybe_top_module_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_1 = {
  (MR_String) "not_top_module",
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

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_maybe_top_module_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_1
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_maybe_top_module_0_1[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_maybe_top_module_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_maybe_top_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_maybe_top_module_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_maybe_top_module_0[2] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_maybe_top_module_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_top_module_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_top_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____maybe_top_module_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____maybe_top_module_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "maybe_top_module",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_maybe_top_module_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_maybe_top_module_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_maybe_top_module_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_direct_int_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_indirect_int_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_type_repn_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_version_numbers_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0[9] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_direct_int_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_indirect_int_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_type_repn_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0[9] = {
  (MR_String) "mai_src",
  (MR_String) "mai_ancestor_int_specs",
  (MR_String) "mai_direct_int_specs",
  (MR_String) "mai_indirect_int_specs",
  (MR_String) "mai_plain_opts",
  (MR_String) "mai_trans_opts",
  (MR_String) "mai_int_for_opt_specs",
  (MR_String) "mai_type_repn_specs",
  (MR_String) "mai_version_numbers_map"
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_and_imports_0_0 = {
  (MR_String) "module_and_imports",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_and_imports_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_and_imports_0_0,
  NULL,
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_and_imports",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_and_imports_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_and_imports_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_and_imports_0,

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

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_baggage_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_top_module_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_grabbed_file_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_baggage_0_0[8] = {
  (MR_String) "mb_source_file_name",
  (MR_String) "mb_source_file_dir",
  (MR_String) "mb_source_file_module_name",
  (MR_String) "mb_maybe_top_module",
  (MR_String) "mb_maybe_timestamp_map",
  (MR_String) "mb_grabbed_file_map",
  (MR_String) "mb_specs",
  (MR_String) "mb_errors"
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_baggage_0_0 = {
  (MR_String) "module_baggage",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_baggage_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_baggage_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_baggage_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_baggage_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_baggage_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_baggage_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_baggage_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_baggage_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_baggage_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_baggage_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_baggage_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_baggage_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_baggage",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_baggage_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_baggage_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_baggage_0,

};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_imports_and_baggage_0)
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_0 = {
  (MR_String) "module_dep_info_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_summary_0)
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_1 = {
  (MR_String) "module_dep_info_summary",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_info_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_0
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_info_0_1[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_1
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_dep_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_dep_info_0[2] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_0,
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_info_0_1
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_dep_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_dep_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_dep_info_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_dep_info",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_dep_info_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_dep_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_dep_info_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_summary_0_0[13] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_top_module_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_code_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_contains_foreign_export_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_dep_summary_0_0[13] = {
  (MR_String) "mds_source_file_name",
  (MR_String) "mds_source_file_dir",
  (MR_String) "mds_source_file_module_name",
  (MR_String) "mds_module_name",
  (MR_String) "mds_children",
  (MR_String) "mds_maybe_top_module",
  (MR_String) "mds_int_deps",
  (MR_String) "mds_imp_deps",
  (MR_String) "mds_fact_table_file_names",
  (MR_String) "mds_fims",
  (MR_String) "mds_foreign_include_files",
  (MR_String) "mds_contains_foreign_code",
  (MR_String) "mds_contains_foreign_export"
};

static const MR_DuArgLocn parse_tree__module_imports__parse_tree__module_imports__field_locns_module_dep_summary_0_0[13] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_summary_0_0 = {
  (MR_String) "module_dep_summary",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_dep_summary_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_dep_summary_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_locns_module_dep_summary_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_summary_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_summary_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_dep_summary_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_dep_summary_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_dep_summary_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_dep_summary_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_dep_summary_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_summary_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_dep_summary_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_dep_summary_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_dep_summary",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_dep_summary_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_dep_summary_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_dep_summary_0,

};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_imports_and_baggage_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_baggage_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_imports_and_baggage_0_0[2] = {
  (MR_String) "miab_baggage",
  (MR_String) "miab_mai"
};

static const MR_DuFunctorDesc parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_imports_and_baggage_0_0 = {
  (MR_String) "module_imports_and_baggage",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_imports__parse_tree__module_imports__field_types_module_imports_and_baggage_0_0,
  parse_tree__module_imports__parse_tree__module_imports__field_names_module_imports_and_baggage_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_imports_and_baggage_0_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_imports_and_baggage_0_0
};

static const MR_DuPtagLayout parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_imports_and_baggage_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_imports__parse_tree__module_imports__du_stag_ordered_module_imports_and_baggage_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_imports_and_baggage_0[1] = {
  &parse_tree__module_imports__parse_tree__module_imports__du_functor_desc_module_imports_and_baggage_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_imports_and_baggage_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_imports_and_baggage_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_imports_and_baggage_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_imports_and_baggage_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_imports_and_baggage",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_imports_and_baggage_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_imports_and_baggage_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_imports_and_baggage_0,

};

static const MR_PseudoTypeInfo parse_tree__module_imports__parse_tree__module_imports__field_types_module_timestamp_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0),
  (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_recomp_avail_0)
};

static const MR_ConstString parse_tree__module_imports__parse_tree__module_imports__field_names_module_timestamp_0_0[3] = {
  (MR_String) "mts_file_kind",
  (MR_String) "mts_timestamp",
  (MR_String) "mts_avail_kind"
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
    (MR_Integer) 3
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_imports____Unify____module_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____module_timestamp_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "module_timestamp",
  {     parse_tree__module_imports__parse_tree__module_imports__du_name_ordered_module_timestamp_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__du_ptag_ordered_module_timestamp_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_module_timestamp_0,

};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
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
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_0 = {
  (MR_String) "recomp_avail_src",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_1 = {
  (MR_String) "recomp_avail_int_import",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_2 = {
  (MR_String) "recomp_avail_imp_import",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_3 = {
  (MR_String) "recomp_avail_int_use",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_4 = {
  (MR_String) "recomp_avail_imp_use",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_5 = {
  (MR_String) "recomp_avail_int_use_imp_import",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_ordinal_ordered_recomp_avail_0[6] = {
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_0,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_2,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_3,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_4,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_5
};

static const MR_EnumFunctorDescPtr parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_recomp_avail_0[6] = {
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_2,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_4,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_1,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_3,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_5,
  &parse_tree__module_imports__parse_tree__module_imports__enum_functor_desc_recomp_avail_0_0
};

static const MR_Integer parse_tree__module_imports__parse_tree__module_imports__functor_number_map_recomp_avail_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_recomp_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_imports____Unify____recomp_avail_0_0_10001)),
  ((MR_Box) (parse_tree__module_imports____Compare____recomp_avail_0_0_10001)),
  (MR_String) "parse_tree.module_imports",
  (MR_String) "recomp_avail",
  {     parse_tree__module_imports__parse_tree__module_imports__enum_name_ordered_recomp_avail_0 },
  {     parse_tree__module_imports__parse_tree__module_imports__enum_ordinal_ordered_recomp_avail_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__module_imports__parse_tree__module_imports__functor_number_map_recomp_avail_0,

};

void MR_CALL 
parse_tree__module_imports____Compare____recomp_avail_0_0(
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

MR_bool MR_CALL 
parse_tree__module_imports____Unify____recomp_avail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 7);
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
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 7);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);

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
parse_tree__module_imports____Compare____module_dep_info_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = (MR_Word) ((MR_Word) (HeadVar__2_2));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

        parse_tree__module_imports____Compare____module_imports_and_baggage_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

        parse_tree__module_imports____Compare____module_dep_summary_0_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_imports_and_baggage_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__module_imports____Compare____module_baggage_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__module_imports____Compare____module_and_imports_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____module_dep_summary_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_42 == CastY_43);
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
      MR_Word ArgX13_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))) & (MR_Integer) 1);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                parse_tree__module_imports____Compare____maybe_top_module_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[4]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[5]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[6]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            parse_tree__prog_item____Compare____contains_foreign_code_0_0(&SubResult12_39, ArgX12_37, ArgY12_38);
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Integer Var_57 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_58 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_57 < Var_58);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_57 > Var_58);
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

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_dep_info_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
        succeeded = parse_tree__module_imports____Unify____module_imports_and_baggage_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
        succeeded = parse_tree__module_imports____Unify____module_dep_summary_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_imports_and_baggage_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__module_imports____Unify____module_baggage_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_dep_summary_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_33_33;
      MR_Word TypeInfo_34_34;
      MR_Word TypeInfo_35_35;
      MR_Word TypeInfo_36_36;
      MR_Word TypeInfo_37_37;
      MR_Word TypeInfo_38_38;
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
      MR_Word ArgX13_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))) & (MR_Integer) 1);

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
              TypeInfo_33_33 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = parse_tree__module_imports____Unify____maybe_top_module_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_35_35 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_36_36 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_37_37 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[5]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_38_38 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[6]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            succeeded = parse_tree__prog_item____Unify____contains_foreign_code_0_0(ArgX12_25, ArgY12_26);
                            if (succeeded)
                              succeeded = (ArgX13_27 == ArgY13_28);
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

void MR_CALL 
parse_tree__module_imports____Compare____module_baggage_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
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

            parse_tree__module_imports____Compare____maybe_top_module_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[2]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
parse_tree__module_imports____Unify____module_baggage_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
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

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = parse_tree__module_imports____Unify____maybe_top_module_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_25_25 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

void MR_CALL 
parse_tree__module_imports____Compare____module_and_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
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
      MR_Word SubResult1_6;

      parse_tree__prog_item____Compare____parse_tree_module_src_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[6]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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

      succeeded = parse_tree__prog_item____Unify____parse_tree_module_src_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_26_26 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_31_31 = (MR_Word) (&parse_tree__module_imports_scalar_common_2[8]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
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

void MR_CALL 
parse_tree__module_imports____Compare____maybe_top_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____maybe_top_module_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
parse_tree__module_imports____Compare____mai_fields_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY16_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_69 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_70 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_69 < Var_70);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_69 > Var_70);
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
        MR_Integer Var_71 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_72 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_71 < Var_72);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_71 > Var_72);
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
          MR_Integer Var_73 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_74 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_73 < Var_74);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_73 > Var_74);
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
            MR_Integer Var_75 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_76 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_75 < Var_76);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_75 > Var_76);
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
              MR_Integer Var_77 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_78 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_77 < Var_78);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_77 > Var_78);
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
                MR_Integer Var_79 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_80 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_79 < Var_80);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_79 > Var_80);
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
                  MR_Integer Var_81 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_82 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_81 < Var_82);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_81 > Var_82);
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
                    MR_Integer Var_83 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_84 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_83 < Var_84);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_83 > Var_84);
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
                      MR_Integer Var_85 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_86 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_85 < Var_86);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_85 > Var_86);
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
                        MR_Integer Var_87 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_88 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_87 < Var_88);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_87 > Var_88);
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
                          MR_Integer Var_89 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_90 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_89 < Var_90);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_89 > Var_90);
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
                            MR_Integer Var_91 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_92 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_91 < Var_92);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_91 > Var_92);
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
                              MR_Integer Var_93 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_94 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_93 < Var_94);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_93 > Var_94);
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
                                MR_Integer Var_95 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_96 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_95 < Var_96);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_95 > Var_96);
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
                                  MR_Integer Var_97 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_98 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_97 < Var_98);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_97 > Var_98);
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
                                    MR_Integer Var_99 = (MR_Integer) (ArgX16_49);
                                    MR_Integer Var_100 = (MR_Integer) (ArgY16_50);

                                    succeeded = (Var_99 < Var_100);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 1;
                                    else
                                    {
                                      succeeded = (Var_99 > Var_100);
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

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____mai_fields_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_35 == CastY_36);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY16_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                                    succeeded = (ArgX16_33 == ArgY16_34);
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

void MR_CALL 
parse_tree__module_imports____Compare____grabbed_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_imports____Unify____grabbed_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_imports_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_imports____Compare____grabbed_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_98 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_99 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_98 == CastY_99);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_item____Compare____parse_tree_module_src_0_0(HeadVar__1_1, Var_117, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word SubResult1_23;

                  parse_tree__prog_item____Compare____parse_tree_int0_0_0(&SubResult1_23, Var_110, ArgY1_22);
                  succeeded = (SubResult1_23 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_23;
                  else
                  {
                    MR_Integer Var_118 = (MR_Integer) (Var_109);
                    MR_Integer Var_119 = (MR_Integer) (ArgY2_25);

                    succeeded = (Var_118 < Var_119);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_118 > Var_119);
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
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_111 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word SubResult1_47;

                  parse_tree__prog_item____Compare____parse_tree_int1_0_0(&SubResult1_47, Var_112, ArgY1_46);
                  succeeded = (SubResult1_47 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_47;
                  else
                  {
                    MR_Integer Var_120 = (MR_Integer) (Var_111);
                    MR_Integer Var_121 = (MR_Integer) (ArgY2_49);

                    succeeded = (Var_120 < Var_121);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_120 > Var_121);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
                          MR_Word SubResult1_71;

                          parse_tree__prog_item____Compare____parse_tree_int2_0_0(&SubResult1_71, Var_114, ArgY1_70);
                          succeeded = (SubResult1_71 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_71;
                          else
                          {
                            MR_Integer Var_122 = (MR_Integer) (Var_113);
                            MR_Integer Var_123 = (MR_Integer) (ArgY2_73);

                            succeeded = (Var_122 < Var_123);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_122 > Var_123);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
                MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 15);
                          MR_Word SubResult1_95;

                          parse_tree__prog_item____Compare____parse_tree_int3_0_0(&SubResult1_95, Var_116, ArgY1_94);
                          succeeded = (SubResult1_95 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_95;
                          else
                          {
                            MR_Integer Var_124 = (MR_Integer) (Var_115);
                            MR_Integer Var_125 = (MR_Integer) (ArgY2_97);

                            succeeded = (Var_124 < Var_125);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_124 > Var_125);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
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

MR_bool MR_CALL 
parse_tree__module_imports____Unify____grabbed_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_item____Unify____parse_tree_module_src_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = parse_tree__prog_item____Unify____parse_tree_int0_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = (ArgX2_7 == ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
              succeeded = parse_tree__prog_item____Unify____parse_tree_int1_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
                succeeded = (ArgX2_11 == ArgY2_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_Word ArgY2_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = parse_tree__prog_item____Unify____parse_tree_int2_0_0(ArgX1_13, ArgY1_14);
                  if (succeeded)
                    succeeded = (ArgX2_15 == ArgY2_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 15);
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
                  succeeded = parse_tree__prog_item____Unify____parse_tree_int3_0_0(ArgX1_17, ArgY1_18);
                  if (succeeded)
                    succeeded = (ArgX2_19 == ArgY2_20);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
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

	X = X_1 ;
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

	X = (MR_Word) (&parse_tree__module_imports_scalar_common_3[0]) ;
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
parse_tree__module_imports__add_module_dep_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntDeps_0_17,
  MR_Word * STATE_VARIABLE_IntDeps_18,
  MR_Word STATE_VARIABLE_ImpDeps_0_19,
  MR_Word * STATE_VARIABLE_ImpDeps_20)
{
  {
    MR_bool succeeded;
    MR_Word Section_12;

    if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
    {
      MR_Word SectionImportUse_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeImplicit_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) SectionImportUse_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Section_12 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Section_12 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportUse_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Section_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Section_12 = (MR_Integer) 0;
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word Implicit_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeImplicit_8, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word MaybeExplicit_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicit_8, (MR_Integer) 1))));
      MR_Word ImplicitSection_15;

      switch (Implicit_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          ImplicitSection_15 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ImplicitSection_15 = (MR_Integer) 0;
          break;
      }
      if ((MaybeExplicit_14 == (MR_Word) ((MR_Unsigned) 0U)))
        Section_12 = ImplicitSection_15;
      else
      {
        MR_Word ExplicitSection_16;
        MR_Word SectionImportUse_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_14, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) SectionImportUse_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ExplicitSection_16 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ExplicitSection_16 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportUse_23, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ExplicitSection_16 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                ExplicitSection_16 = (MR_Integer) 0;
                break;
            }
            break;
        }
        succeeded = (ImplicitSection_15 == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (ExplicitSection_16 == (MR_Integer) 0);
        if (succeeded)
          Section_12 = (MR_Integer) 0;
        else
          Section_12 = (MR_Integer) 1;
      }
    }
    switch (Section_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImpDeps_0_19, STATE_VARIABLE_ImpDeps_20);
          *STATE_VARIABLE_IntDeps_18 = STATE_VARIABLE_IntDeps_0_17;
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_IntDeps_0_17, STATE_VARIABLE_IntDeps_18);
          *STATE_VARIABLE_ImpDeps_20 = STATE_VARIABLE_ImpDeps_0_19;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_imports__maybe_nested_init_module_imports_and_baggage_7_p_0(
  MR_String SourceFileName_8,
  MR_Word SourceFileModuleName_9,
  MR_Word AllModuleNames_10,
  MR_Word Specs_11,
  MR_Word Errors_12,
  MR_Word ParseTreeModuleSrc_13,
  MR_Word * ModuleImportsAndBaggage_14)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_13, (MR_Integer) 0))));
    MR_Word MaybeTopModule_17;
    MR_Word GrabbedFileMap_19;
    MR_Word Baggage_20;
    MR_Word ModuleAndImports_21;
    MR_Word Var_22;
    MR_String Var_23;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, SourceFileModuleName_9);
    if (succeeded)
    {
      MR_Word NestedModuleNames_16;

      mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_15)), AllModuleNames_10, &NestedModuleNames_16);
      {
        MaybeTopModule_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTopModule_17, 0) = ((MR_Box) (NestedModuleNames_16));
      }
    }
    else
      MaybeTopModule_17 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (ParseTreeModuleSrc_13));
    }
    GrabbedFileMap_19 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_15)), ((MR_Box) (Var_22)));
    Var_23 = mercury__dir__this_directory_0_f_0();
    {
      Baggage_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Baggage_20, 0) = ((MR_Box) (SourceFileName_8));
      MR_hl_field(MR_mktag(0), Baggage_20, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Baggage_20, 2) = ((MR_Box) (SourceFileModuleName_9));
      MR_hl_field(MR_mktag(0), Baggage_20, 3) = ((MR_Box) (MaybeTopModule_17));
      MR_hl_field(MR_mktag(0), Baggage_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Baggage_20, 5) = ((MR_Box) (GrabbedFileMap_19));
      MR_hl_field(MR_mktag(0), Baggage_20, 6) = ((MR_Box) (Specs_11));
      MR_hl_field(MR_mktag(0), Baggage_20, 7) = ((MR_Box) (Errors_12));
    }
    parse_tree__module_imports__init_module_and_imports_2_p_0(ParseTreeModuleSrc_13, &ModuleAndImports_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ModuleImportsAndBaggage_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Baggage_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleAndImports_21));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__write_mai_stats_3_p_0(
  MR_Word Stream_4)
{
  {
    MR_Word Accesses_6;

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
    parse_tree__module_imports__write_mai_fields_stats_4_p_0(Stream_4, Accesses_6);
  }
}

static void MR_CALL 
parse_tree__module_imports__write_mai_fields_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word Fields_6)
{
  {
    MR_Word SrcFileName_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    MR_Word SrcFileDir_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
    MR_Word SrcFileModuleName_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
    MR_Word MaybeTopModule_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
    MR_Word ParseTreeModuleSrc_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
    MR_Word AncestorSpecs_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
    MR_Word DirectIntSpecs_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
    MR_Word IndirectIntSpecs_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    MR_Word PlainOpts_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    MR_Word TransOpts_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word IntForOptSpecs_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word TypeRepnSpecs_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word VersionNumbersMap_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word MaybeTimestampMap_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Specs_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Errors_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Fields_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String Var_30;
    MR_String Var_33;
    MR_String Var_36;
    MR_String Var_39;
    MR_String Var_42;
    MR_String Var_45;
    MR_String Var_48;
    MR_String Var_51;
    MR_String Var_54;
    MR_String Var_57;
    MR_String Var_60;
    MR_String Var_63;
    MR_String Var_66;
    MR_String Var_69;
    MR_String Var_72;
    MR_String Var_75;

    Var_30 = parse_tree__module_imports__acc_str_1_f_0(SrcFileName_8);
    Var_33 = parse_tree__module_imports__acc_str_1_f_0(SrcFileDir_9);
    Var_36 = parse_tree__module_imports__acc_str_1_f_0(SrcFileModuleName_10);
    Var_39 = parse_tree__module_imports__acc_str_1_f_0(MaybeTopModule_11);
    Var_42 = parse_tree__module_imports__acc_str_1_f_0(ParseTreeModuleSrc_12);
    Var_45 = parse_tree__module_imports__acc_str_1_f_0(AncestorSpecs_13);
    Var_48 = parse_tree__module_imports__acc_str_1_f_0(DirectIntSpecs_14);
    Var_51 = parse_tree__module_imports__acc_str_1_f_0(IndirectIntSpecs_15);
    Var_54 = parse_tree__module_imports__acc_str_1_f_0(PlainOpts_16);
    Var_57 = parse_tree__module_imports__acc_str_1_f_0(TransOpts_17);
    Var_60 = parse_tree__module_imports__acc_str_1_f_0(IntForOptSpecs_18);
    Var_63 = parse_tree__module_imports__acc_str_1_f_0(TypeRepnSpecs_19);
    Var_66 = parse_tree__module_imports__acc_str_1_f_0(VersionNumbersMap_20);
    Var_69 = parse_tree__module_imports__acc_str_1_f_0(MaybeTimestampMap_21);
    Var_72 = parse_tree__module_imports__acc_str_1_f_0(Specs_22);
    Var_75 = parse_tree__module_imports__acc_str_1_f_0(Errors_23);
    mercury__io__write_string_4_p_0(Stream_5, Var_30);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_33);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_36);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_39);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_42);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_45);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_48);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_51);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_54);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_57);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_60);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_63);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_66);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_69);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_72);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_5, Var_75);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
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
parse_tree__module_imports__module_dep_info_get_foreign_include_files_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_6, (MR_Integer) 0))));

    parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_23, X_4);
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 10))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_fims_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_6, (MR_Integer) 0))));

    parse_tree__get_dependencies__get_fims_2_p_0(ParseTreeModuleSrc_23, X_4);
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 9))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_fact_tables_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_6, (MR_Integer) 0))));

    parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_23, X_4);
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 8))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_imp_deps_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word Var_7;

    parse_tree__module_imports__module_and_imports_get_int_imp_deps_3_p_0(ModuleAndImports_6, &Var_7, X_4);
  }
  else
  {
    MR_Word Summary_8 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_8, (MR_Integer) 7))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_int_deps_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word Var_7;

    parse_tree__module_imports__module_and_imports_get_int_imp_deps_3_p_0(ModuleAndImports_6, X_4, &Var_7);
  }
  else
  {
    MR_Word Summary_8 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_8, (MR_Integer) 6))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_maybe_top_module_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_6, (MR_Integer) 3))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 5))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_children_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word Xs_7;

    parse_tree__module_imports__module_and_imports_get_children_2_p_0(ModuleAndImports_6, &Xs_7);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Xs_7, X_4);
  }
  else
  {
    MR_Word Summary_8 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_8, (MR_Integer) 4))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_module_name_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word ModuleAndImports_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_6, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 3))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_source_file_module_name_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_Word * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_6, (MR_Integer) 2))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 2))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_source_file_dir_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_String * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 0))));

    *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage_6, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 1))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_dep_info_get_source_file_name_2_p_0(
  MR_Word ModuleDepInfo_3,
  MR_String * X_4)
{
  if (((MR_tag((MR_Word) ModuleDepInfo_3)) == (MR_Integer) 0))
  {
    MR_Word ModuleImportsAndBaggage_5 = (MR_Word) ((MR_Word) (ModuleDepInfo_3));
    MR_Word Baggage_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImportsAndBaggage_5, (MR_Integer) 0))));

    *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage_6, (MR_Integer) 0))));
  }
  else
  {
    MR_Word Summary_7 = (MR_Word) (MR_body((MR_Word) (ModuleDepInfo_3), (MR_Integer) 1));

    *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Summary_7, (MR_Integer) 0))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_aug_comp_unit_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * AugCompUnit_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));
    MR_Word AncestorIntSpecs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1))));
    MR_Word DirectIntSpecs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2))));
    MR_Word IndirectIntSpecs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3))));
    MR_Word PlainOpts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4))));
    MR_Word TransOpts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5))));
    MR_Word IntForOptSpecs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6))));
    MR_Word TypeRepnSpecs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7))));
    MR_Word VersionNumbersMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *AugCompUnit_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VersionNumbersMap_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ParseTreeModuleSrc_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AncestorIntSpecs_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (DirectIntSpecs_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IndirectIntSpecs_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (PlainOpts_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (TransOpts_10));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntForOptSpecs_11));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeRepnSpecs_12));
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
    MR_Word ModuleVersionNumbersMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8))));
    MR_Word ModuleVersionNumbersMap_10;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (VersionNumbers_8)), ModuleVersionNumbersMap0_9, &ModuleVersionNumbersMap_10);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ModuleVersionNumbersMap_10));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_type_repn_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_10,
  MR_Word * STATE_VARIABLE_ModuleAndImports_11)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 7))));
    MR_Word PT1_7 = (MR_Word) (X_4);
    MR_Word MN_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT1_7, (MR_Integer) 0))));
    MR_Word Map_9;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), ((MR_Box) (MN_8)), ((MR_Box) (X_4)), Map0_6, &Map_9);
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 2))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 4))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 5))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 6))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Map_9));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_80));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_int_for_opt_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_15,
  MR_Word * STATE_VARIABLE_ModuleAndImports_16)
{
  {
    MR_Word Map0_6;
    MR_Word MN_9;
    MR_Word Map_14;

    parse_tree__module_imports__module_and_imports_get_int_for_opt_specs_2_p_0(STATE_VARIABLE_ModuleAndImports_0_15, &Map0_6);
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
    parse_tree__module_imports__module_and_imports_set_int_for_opt_specs_3_p_0(Map_14, STATE_VARIABLE_ModuleAndImports_0_15, STATE_VARIABLE_ModuleAndImports_16);
  }
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_set_int_for_opt_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_6,
  MR_Word * STATE_VARIABLE_ModuleAndImports_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_trans_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_9,
  MR_Word * STATE_VARIABLE_ModuleAndImports_10)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 5))));
    MR_Word MN_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word Map_8;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 1))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 2))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 3))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 4))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 6))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 7))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Map_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_64));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_plain_opt_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_9,
  MR_Word * STATE_VARIABLE_ModuleAndImports_10)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 4))));
    MR_Word MN_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word Map_8;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), ((MR_Box) (MN_7)), ((MR_Box) (X_4)), Map0_6, &Map_8);
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 2))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 3))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 5))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 6))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 7))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_9, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Map_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_80));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_indirect_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_13,
  MR_Word * STATE_VARIABLE_ModuleAndImports_14)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 3))));
    MR_Word MN_9;
    MR_Word Map_12;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;

    if (((MR_tag((MR_Word) X_4)) == (MR_Integer) 0))
    {
      MR_Word PT2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));

      MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT2_7, (MR_Integer) 0))));
    }
    else
    {
      MR_Word PT3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 0))));

      MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT3_10, (MR_Integer) 0))));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_12);
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 1))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 2))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 5))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 6))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 7))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Map_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_86));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_direct_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_13,
  MR_Word * STATE_VARIABLE_ModuleAndImports_14)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 2))));
    MR_Word MN_9;
    MR_Word Map_12;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    if (((MR_tag((MR_Word) X_4)) == (MR_Integer) 0))
    {
      MR_Word PT1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));

      MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT1_7, (MR_Integer) 0))));
    }
    else
    {
      MR_Word PT3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 0))));

      MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT3_10, (MR_Integer) 0))));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_12);
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 0))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 3))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 4))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 5))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 6))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 7))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Map_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_94));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_add_ancestor_int_spec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_ModuleAndImports_0_11,
  MR_Word * STATE_VARIABLE_ModuleAndImports_12)
{
  {
    MR_Word Map0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1))));
    MR_Word PT0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_4, (MR_Integer) 0))));
    MR_Word MN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PT0_7, (MR_Integer) 0))));
    MR_Word Map_10;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;

    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), ((MR_Box) (MN_9)), ((MR_Box) (X_4)), Map0_6, &Map_10);
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModuleAndImports_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_89));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_foreign_include_file_infos_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * FIFOs_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));

    parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_5, FIFOs_4);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_fim_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * FIMSpecs_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));

    parse_tree__get_dependencies__get_fims_2_p_0(ParseTreeModuleSrc_5, FIMSpecs_4);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_fact_tables_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * FactTables_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));

    parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_5, FactTables_4);
  }
}

static void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_imp_deps_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IntDeps_18;
    MR_Word conv0_STATE_VARIABLE_ImpDeps_20;

    parse_tree__module_imports__add_module_dep_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_IntDeps_18, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ImpDeps_20);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_IntDeps_18));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ImpDeps_20));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_imp_deps_3_p_0(
  MR_Word ModuleAndImports_4,
  MR_Word * IntDeps_5,
  MR_Word * ImpDeps_6)
{
  {
    MR_Word ParseTreeModuleSrc_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_4, (MR_Integer) 0))));
    MR_Word ImportUseMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 9))));
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Box conv3_IntDeps_5;
    MR_Box conv2_ImpDeps_6;

    Var_10 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    Var_11 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), (MR_Word) (&parse_tree__module_imports_scalar_common_1[0]), (MR_Word) (&parse_tree__module_imports_scalar_common_2[11]), ImportUseMap_8, ((MR_Box) (Var_10)), &conv3_IntDeps_5, ((MR_Box) (Var_11)), &conv2_ImpDeps_6);
    *IntDeps_5 = ((MR_Word) (conv3_IntDeps_5));
    *ImpDeps_6 = ((MR_Word) (conv2_ImpDeps_6));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_set_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * Children_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));
    MR_Word IncludeMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_5, (MR_Integer) 4))));

    *Children_4 = mercury__map__keys_as_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_children_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * Children_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));
    MR_Word IncludeMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_5, (MR_Integer) 4))));

    *Children_4 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_6);
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * ModuleName_4)
{
  {
    MR_Word ParseTreeModuleSrc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));

    *ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_5, (MR_Integer) 0))));
  }
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_type_repn_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 7))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_int_for_opt_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 6))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_trans_opts_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 5))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_plain_opts_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 4))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_indirect_int_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 3))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_direct_int_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 2))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_ancestor_int_specs_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 1))));
}

void MR_CALL 
parse_tree__module_imports__module_and_imports_get_parse_tree_module_src_2_p_0(
  MR_Word ModuleAndImports_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_3, (MR_Integer) 0))));
}

void MR_CALL 
parse_tree__module_imports__init_module_and_imports_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * ModuleAndImports_4)
{
  {
    MR_Word AncestorIntSpecs_5;
    MR_Word DirectIntSpecs_6;
    MR_Word IndirectIntSpecs_7;
    MR_Word PlainOpts_8;
    MR_Word TransOpts_9;
    MR_Word IntForOptSpecs_10;
    MR_Word TypeRepnSpecs_11;
    MR_Word VersionNumbers_12;

    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), &AncestorIntSpecs_5);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), &DirectIntSpecs_6);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), &IndirectIntSpecs_7);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), &PlainOpts_8);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), &TransOpts_9);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), &IntForOptSpecs_10);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), &TypeRepnSpecs_11);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &VersionNumbers_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTreeModuleSrc_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AncestorIntSpecs_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DirectIntSpecs_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IndirectIntSpecs_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PlainOpts_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TransOpts_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntForOptSpecs_10));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeRepnSpecs_11));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (VersionNumbers_12));
    }
  }
}

void MR_CALL 
parse_tree__module_imports__rebuild_module_and_imports_for_dep_file_4_p_0(
  MR_Word Baggage0_5,
  MR_Word * Baggage_6,
  MR_Word ModuleAndImports0_7,
  MR_Word * ModuleAndImports_8)
{
  {
    MR_String SourceFileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage0_5, (MR_Integer) 0))));
    MR_Word SourceFileModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_5, (MR_Integer) 2))));
    MR_Word MaybeTopModule_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_5, (MR_Integer) 3))));
    MR_Word Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_5, (MR_Integer) 6))));
    MR_Word ParseTreeModuleSrc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports0_7, (MR_Integer) 0))));
    MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_17, (MR_Integer) 0))));
    MR_Word GrabbedFileMap_28;
    MR_Word Errors_29;
    MR_Word AncestorIntSpecs_30;
    MR_Word DirectIntSpecs_31;
    MR_Word IndirectIntSpecs_32;
    MR_Word PlainOpts_33;
    MR_Word TransOpts_34;
    MR_Word IntForOptSpecs_35;
    MR_Word TypeRepnSpecs_36;
    MR_Word VersionNumbers_37;
    MR_Word Var_38;
    MR_String Var_39;

    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (ParseTreeModuleSrc_17));
    }
    GrabbedFileMap_28 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_27)), ((MR_Box) (Var_38)));
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_29);
    Var_39 = mercury__dir__this_directory_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *Baggage_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeTopModule_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GrabbedFileMap_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Specs_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Errors_29));
    }
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), &AncestorIntSpecs_30);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), &DirectIntSpecs_31);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), &IndirectIntSpecs_32);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), &PlainOpts_33);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), &TransOpts_34);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), &IntForOptSpecs_35);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), &TypeRepnSpecs_36);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &VersionNumbers_37);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ModuleAndImports_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTreeModuleSrc_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AncestorIntSpecs_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DirectIntSpecs_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IndirectIntSpecs_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PlainOpts_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TransOpts_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntForOptSpecs_35));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeRepnSpecs_36));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (VersionNumbers_37));
    }
  }
}

static void MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ModuleImportsAndBaggage_14;

    parse_tree__module_imports__maybe_nested_init_module_imports_and_baggage_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv1_ModuleImportsAndBaggage_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_ModuleImportsAndBaggage_14));
  }
}

static MR_Box MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ParseTreeSrc_10,
  MR_Word ReadModuleErrors_11,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word * ModuleImportsAndBaggageList_13)
{
  {
    MR_Word ParseTreeModuleSrcs_14;
    MR_Word TopModuleName_15;
    MR_Word AllModuleNames_18;
    MR_Word Var_23;
    MR_Word Var_25;

    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_8, ParseTreeSrc_10, &ParseTreeModuleSrcs_14, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
    TopModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc_10, (MR_Integer) 0))));
    Var_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports_scalar_common_2[10]), ParseTreeModuleSrcs_14);
    AllModuleNames_18 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_23);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__module_imports_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__module_imports__parse_tree_src_to_module_imports_and_baggage_list_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (SourceFileName_9));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TopModuleName_15));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (AllModuleNames_18));
      MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_25, 7) = ((MR_Box) (ReadModuleErrors_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_imports_and_baggage_0), Var_25, ParseTreeModuleSrcs_14, ModuleImportsAndBaggageList_13);
  }
}

MR_Word MR_CALL 
parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(
  MR_Word MaybeTopModule_3)
{
  {
    MR_Word Modules_4;

    if ((MaybeTopModule_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Modules_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ModulesSet_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTopModule_3, (MR_Integer) 0))));

      Modules_4 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesSet_5);
    }
    return Modules_4;
  }
}

MR_Word MR_CALL 
parse_tree__module_imports__get_nested_children_of_top_module_1_f_0(
  MR_Word MaybeTopModule_3)
{
  {
    MR_Word Modules_4;

    if ((MaybeTopModule_3 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Modules_4);
    else
      Modules_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTopModule_3, (MR_Integer) 0))));
    return Modules_4;
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____grabbed_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____grabbed_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____grabbed_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____grabbed_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____grabbed_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____grabbed_file_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____grabbed_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____grabbed_file_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
parse_tree__module_imports____Unify____maybe_top_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____maybe_top_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____maybe_top_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____maybe_top_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
parse_tree__module_imports____Unify____module_baggage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_baggage_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_baggage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_baggage_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_dep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_dep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_dep_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_dep_summary_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_dep_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_dep_summary_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____module_imports_and_baggage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____module_imports_and_baggage_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____module_imports_and_baggage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____module_imports_and_baggage_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

static MR_bool MR_CALL 
parse_tree__module_imports____Unify____recomp_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_imports____Unify____recomp_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_imports____Compare____recomp_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_imports____Compare____recomp_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_map_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_mai_fields_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_accessed_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_maybe_top_module_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_baggage_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_summary_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_imports_and_baggage_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_map_0);
	MR_register_type_ctor_info(&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_recomp_avail_0);
}

void mercury__parse_tree__module_imports__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__module_imports__required_init(void)
{
	parse_tree__module_imports__user_init_pred_152_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_imports__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_imports.
