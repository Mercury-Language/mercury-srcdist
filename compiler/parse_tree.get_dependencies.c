/*
** Automatically generated from `get_dependencies.m'
** by the Mercury compiler,
** version rotd-2024-12-26
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


// :- module parse_tree.get_dependencies.
// :- implementation.

/*
INIT mercury__parse_tree__get_dependencies__init
ENDINIT
*/

#include "parse_tree.get_dependencies.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_format_call_version_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_format_call_version_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_format_call_version_0[2];

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_avail_needs_0_0[7];

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_avail_needs_0_0[7];

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_avail_needs_0_0[7];

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0;

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_avail_needs_0_0[1];

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_avail_needs_0[1];

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_avail_needs_0[1];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_avail_needs_0[1];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_exception_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_io_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_stm_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_stream_format_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_string_format_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_tabling_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_tabling_statistics_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2];

static MR_Word MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__func__get_fim_specs__1096__1_2_f_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_34);

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_avail_needs__921__1_2_p_0(
  MR_Word ItemsNeedTablingStatistics_8,
  MR_Word HeadVar__2_31);

static void MR_CALL 
parse_tree__get_dependencies____Compare____format_call_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____format_call_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_code_langs_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_24,
  MR_Word * STATE_VARIABLE_Langs_25);

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_code_langs_from_foreign_proc_3_p_0(
  MR_Word FPInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_16,
  MR_Word * STATE_VARIABLE_Langs_17);

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_export_langs_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_21,
  MR_Word * STATE_VARIABLE_Langs_22);

static void MR_CALL 
parse_tree__get_dependencies__acc_fact_tables_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_FactTables_0_18,
  MR_Word * STATE_VARIABLE_FactTables_19);

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_include_file_info_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_FIFOs_0_24,
  MR_Word * STATE_VARIABLE_FIFOs_25);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromise_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_21,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_22);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_19);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_14,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_15);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_trans_opt_3_p_0(
  MR_Word ParseTreeTransOpt_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_15,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_16);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_105_109_112_108_105_99_105_116_95_97_118_97_105_108_95_110_101_101_100_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_15,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_16);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0(
  MR_Word ParseTreeInt2_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_19,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_20);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9);

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_code_langs_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_code_langs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_export_langs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_fact_tables_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__add_implicit_avail_4_p_0(
  MR_Word Implicit_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportUseMap_14);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_74);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_catch_exprs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies__is_possible_format_call_2_p_0(
  MR_Word SymName_3,
  MR_Word * Version_4);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_19);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__combine_implicit_needs_acc_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedTabling_0_2,
  MR_Word * STATE_VARIABLE_NeedTabling_3,
  MR_Word STATE_VARIABLE_NeedTablingStatistics_0_4,
  MR_Word * STATE_VARIABLE_NeedTablingStatistics_5,
  MR_Word STATE_VARIABLE_NeedStm_0_6,
  MR_Word * STATE_VARIABLE_NeedStm_7,
  MR_Word STATE_VARIABLE_NeedException_0_8,
  MR_Word * STATE_VARIABLE_NeedException_9,
  MR_Word STATE_VARIABLE_NeedStringFormat_0_10,
  MR_Word * STATE_VARIABLE_NeedStringFormat_11,
  MR_Word STATE_VARIABLE_NeedStreamFormat_0_12,
  MR_Word * STATE_VARIABLE_NeedStreamFormat_13,
  MR_Word STATE_VARIABLE_NeedIO_0_14,
  MR_Word * STATE_VARIABLE_NeedIO_15);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_32,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_33);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____format_call_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____format_call_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[51][3];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[21][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_8[1][7];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_9[2][4];


struct parse_tree__get_dependencies__vector_common_type_6_0_s {
  const MR_String parse_tree__get_dependencies__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_6_0_s parse_tree__get_dependencies_vector_common_6[32];

struct parse_tree__get_dependencies__vector_common_type_7_0_s {
  const MR_String parse_tree__get_dependencies__vector_common_type_7_0__vct_7_f_0;
  const MR_Word parse_tree__get_dependencies__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_7_0_s parse_tree__get_dependencies_vector_common_7[5];



static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[51][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[2])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[2])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[4])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[6])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[7])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[8])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[9])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[10])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[11])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[12])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[2])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__get_fim_specs_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[14])),
    ((MR_Box) (parse_tree__get_dependencies__get_fim_specs_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[15])),
    ((MR_Box) (parse_tree__get_dependencies__get_fim_specs_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[16])),
    ((MR_Box) (parse_tree__get_dependencies__get_fim_specs_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[18])),
    ((MR_Box) (parse_tree__get_dependencies__get_fact_tables_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[19])),
    ((MR_Box) (parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[16])),
    ((MR_Box) (parse_tree__get_dependencies__get_foreign_export_langs_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[14])),
    ((MR_Box) (parse_tree__get_dependencies__get_foreign_code_langs_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[16])),
    ((MR_Box) (parse_tree__get_dependencies__get_foreign_code_langs_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[20])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[20])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[20])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[20])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[20])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  45 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  46 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[20])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  47 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  48 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  49 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  50 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))))))) },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[21][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row  17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row  18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row  19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row  20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_implicit_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_9[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_8[0])),
    ((MR_Box) (parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_8[0])),
    ((MR_Box) (parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};


static /* final */ const struct parse_tree__get_dependencies__vector_common_type_6_0_s parse_tree__get_dependencies_vector_common_6[32] = {
  /* row   0 */   { (MR_String) "stream__string_writer.format" },
  /* row   1 */   { (MR_String) "io__format" },
  /* row   2 */   { (MR_String) "stream.format" },
  /* row   3 */   { (MR_String) "format" },
  /* row   4 */   { (MR_String) "string__format" },
  /* row   5 */   { (MR_String) "stream__format" },
  /* row   6 */   { (MR_String) "io.format" },
  /* row   7 */   { NULL },
  /* row   8 */   { NULL },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { (MR_String) "string_writer__format" },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { (MR_String) "string.format" },
  /* row  16 */   { NULL },
  /* row  17 */   { (MR_String) "stream__string_writer__format" },
  /* row  18 */   { (MR_String) "string_writer.format" },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { (MR_String) "stream.string_writer.format" },
  /* row  28 */   { (MR_String) "stream.string_writer__format" },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_7_0_s parse_tree__get_dependencies_vector_common_7[5] = {
  /* row   0 */
  {
    (MR_String) "builder",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "io",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "stream",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "string",
    (MR_Integer) 0
  },
  /* row   4 */
  {
    (MR_String) "string_writer",
    (MR_Integer) 1
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0) }
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_0 = {
  (MR_String) "format_call_non_stream",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_1 = {
  (MR_String) "format_call_maybe_stream",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_format_call_version_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_format_call_version_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_format_call_version_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_format_call_version_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_format_call_version_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____format_call_version_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____format_call_version_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "format_call_version",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_format_call_version_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_format_call_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_format_call_version_0,

};

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_avail_needs_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0)
};

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_avail_needs_0_0[7] = {
  (MR_String) "ian_tabling",
  (MR_String) "ian_tabling_statistics",
  (MR_String) "ian_stm",
  (MR_String) "ian_exception",
  (MR_String) "ian_string_format",
  (MR_String) "ian_stream_format",
  (MR_String) "ian_io"
};

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_avail_needs_0_0[7] = {
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

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0 = {
  (MR_String) "implicit_avail_needs",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_avail_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_avail_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_avail_needs_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_avail_needs_0_0[1] = { &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0 };

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_avail_needs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_avail_needs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_avail_needs_0[1] = { &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0 };

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_avail_needs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "implicit_avail_needs",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_avail_needs_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_avail_needs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_avail_needs_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0 = {
  (MR_String) "do_not_need_exception",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1 = {
  (MR_String) "do_need_exception",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_exception",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_exception_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0 = {
  (MR_String) "do_not_need_io",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1 = {
  (MR_String) "do_need_io",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_io",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_io_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0 = {
  (MR_String) "do_not_need_stm",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1 = {
  (MR_String) "do_need_stm",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stm",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_stm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0 = {
  (MR_String) "do_not_need_stream_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1 = {
  (MR_String) "do_need_stream_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stream_format",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_stream_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0 = {
  (MR_String) "do_not_need_string_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1 = {
  (MR_String) "do_need_string_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_string_format",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_string_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0 = {
  (MR_String) "do_not_need_tabling",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1 = {
  (MR_String) "do_need_tabling",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_tabling_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0,

};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0 = {
  (MR_String) "do_not_need_tabling_statistics",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1 = {
  (MR_String) "do_need_tabling_statistics",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling_statistics",
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0 },
  { parse_tree__get_dependencies__parse_tree__get_dependencies__enum_ordinal_ordered_maybe_need_tabling_statistics_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0,

};

static MR_Word MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__func__get_fim_specs__1096__1_2_f_0(
  MR_Word ModuleName_17,
  MR_Word LambdaHeadVar__1_34)
{
  MR_Word LambdaHeadVar__2_35;

  {
    LambdaHeadVar__2_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_35, 0) = (MR_Box) ((MR_Unsigned) (LambdaHeadVar__1_34));
    MR_hl_field(0, LambdaHeadVar__2_35, 1) = ((MR_Box) (ModuleName_17));
  }
  return LambdaHeadVar__2_35;
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_avail_needs__921__1_2_p_0(
  MR_Word ItemsNeedTablingStatistics_8,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded = (ItemsNeedTablingStatistics_8 == HeadVar__2_31);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_33 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_34 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_33 < Var_34);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_33 > Var_34);
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
      MR_Integer Var_35 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_36 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_35 < Var_36);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_35 > Var_36);
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
        MR_Integer Var_37 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_38 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_37 < Var_38);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_37 > Var_38);
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
          MR_Integer Var_39 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_40 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_39 < Var_40);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_39 > Var_40);
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
            MR_Integer Var_41 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_42 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_41 < Var_42);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_41 > Var_42);
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
              MR_Integer Var_43 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_44 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_43 < Var_44);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_43 > Var_44);
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
                MR_Integer Var_45 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_46 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_45 < Var_46);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_45 > Var_46);
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

MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                succeeded = (ArgX7_15 == ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____format_call_version_0_0(
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
parse_tree__get_dependencies____Unify____format_call_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_code_langs_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_24,
  MR_Word * STATE_VARIABLE_Langs_25)
{
  switch (MR_tag((MR_Word) ImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Langs_25 = STATE_VARIABLE_Langs_0_24;
      break;
    case (MR_Integer) 1:
      {
        MR_Word FCInfo_6 = (MR_Word) (MR_body((MR_Word) (ImplPragma_4), (MR_Integer) 1));
        MR_Word Lang_27 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_6, (MR_Integer) 0))) & (MR_Integer) 3);

        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_27)), STATE_VARIABLE_Langs_0_24, STATE_VARIABLE_Langs_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo_11 = (MR_Word) (MR_body((MR_Word) (ImplPragma_4), (MR_Integer) 2));
        MR_Word Lang_29 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_11, (MR_Integer) 1))) & (MR_Integer) 3);

        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_29)), STATE_VARIABLE_Langs_0_24, STATE_VARIABLE_Langs_25);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Langs_25 = STATE_VARIABLE_Langs_0_24;
          break;
        case (MR_Integer) 1:
          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_Langs_0_24, STATE_VARIABLE_Langs_25);
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Langs_25 = STATE_VARIABLE_Langs_0_24;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Langs_25 = STATE_VARIABLE_Langs_0_24;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Langs_25 = STATE_VARIABLE_Langs_0_24;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_code_langs_from_foreign_proc_3_p_0(
  MR_Word FPInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_16,
  MR_Word * STATE_VARIABLE_Langs_17)
{
  MR_Word Attrs_6 = ((MR_Word) ((MR_hl_field(0, FPInfo_4, (MR_Integer) 0))));
  MR_Word Lang_15;

  Lang_15 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_6);
  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_15)), STATE_VARIABLE_Langs_0_16, STATE_VARIABLE_Langs_17);
}

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_export_langs_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_Langs_0_21,
  MR_Word * STATE_VARIABLE_Langs_22)
{
  switch (MR_tag((MR_Word) ImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPEInfo_6 = (MR_Word) (MR_body((MR_Word) (ImplPragma_4), (MR_Integer) 2));
        MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(0, FPEInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);

        mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_8)), STATE_VARIABLE_Langs_0_21, STATE_VARIABLE_Langs_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Langs_22 = STATE_VARIABLE_Langs_0_21;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_fact_tables_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_FactTables_0_18,
  MR_Word * STATE_VARIABLE_FactTables_19)
{
  switch (MR_tag((MR_Word) ImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
          break;
        case (MR_Integer) 1:
          {
            MR_Word FactTableInfo_6 = ((MR_Word) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 1))));
            MR_String FileName_8 = ((MR_String) ((MR_hl_field(0, FactTableInfo_6, (MR_Integer) 1))));

            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FileName_8)), STATE_VARIABLE_FactTables_0_18, STATE_VARIABLE_FactTables_19);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_FactTables_19 = STATE_VARIABLE_FactTables_0_18;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_foreign_include_file_info_from_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_FIFOs_0_24,
  MR_Word * STATE_VARIABLE_FIFOs_25)
{
  switch (MR_tag((MR_Word) ImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FDInfo_6 = (MR_Word) ((MR_Word) (ImplPragma_4));
        MR_Word Lang_36 = ((((MR_Unsigned) ((MR_hl_field(0, FDInfo_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        MR_Word LiteralOrInclude_37 = ((MR_Word) ((MR_hl_field(0, FDInfo_6, (MR_Integer) 1))));

        if (((MR_tag((MR_Word) LiteralOrInclude_37)) == (MR_Integer) 1))
        {
          MR_String FileName_27 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_37, (MR_Integer) 0))));
          MR_Word FIFO_28;

          {
            FIFO_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FIFO_28, 0) = (MR_Box) ((MR_Unsigned) (Lang_36));
            MR_hl_field(0, FIFO_28, 1) = ((MR_Box) (FileName_27));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ((MR_Box) (FIFO_28)), STATE_VARIABLE_FIFOs_0_24, STATE_VARIABLE_FIFOs_25);
        }
        else
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Lang_7;
        MR_Word LiteralOrInclude_9;
        MR_Word FCInfo_12 = (MR_Word) (MR_body((MR_Word) (ImplPragma_4), (MR_Integer) 1));

        Lang_7 = ((MR_Unsigned) ((MR_hl_field(0, FCInfo_12, (MR_Integer) 0))) & (MR_Integer) 3);
        LiteralOrInclude_9 = ((MR_Word) ((MR_hl_field(0, FCInfo_12, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) LiteralOrInclude_9)) == (MR_Integer) 1))
        {
          MR_String FileName_16 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_9, (MR_Integer) 0))));
          MR_Word FIFO_17;

          {
            FIFO_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FIFO_17, 0) = (MR_Box) ((MR_Unsigned) (Lang_7));
            MR_hl_field(0, FIFO_17, 1) = ((MR_Box) (FileName_16));
          }
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ((MR_Box) (FIFO_17)), STATE_VARIABLE_FIFOs_0_24, STATE_VARIABLE_FIFOs_25);
        }
        else
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_FIFOs_25 = STATE_VARIABLE_FIFOs_0_24;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromise_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(0, ItemPromise_4, (MR_Integer) 1))));

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_impl_pragma_3_p_0(
  MR_Word ImplPragma_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_21,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_22)
{
  switch (MR_tag((MR_Word) ImplPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
          break;
        case (MR_Integer) 2:
          {
            MR_Word TableInfo_6 = ((MR_Word) ((MR_hl_field(3, ImplPragma_4, (MR_Integer) 1))));
            MR_Word MaybeAttributes_9 = ((MR_Word) ((MR_hl_field(0, TableInfo_6, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_23_23;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_21, (MR_Integer) 0)));

            {
              STATE_VARIABLE_ImplicitAvailNeeds_23_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_23_23, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
            }
            if ((MaybeAttributes_9 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_23_23;
            else
            {
              MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_9, (MR_Integer) 0))));
              MR_Word StatsAttr_13 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);

              switch (StatsAttr_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_23_23;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_ImplicitAvailNeeds_22 = base;
                    MR_hl_field(0, base, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_ImplicitAvailNeeds_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_21;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_19)
{
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) TypeDefn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver_17 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 2));
        MR_Word SolverTypeDetails_20 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_17, (MR_Integer) 0))));
        MR_Word MutableItems_25 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_20, (MR_Integer) 3))));
        MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_19;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[50]), MutableItems_25, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_18)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_19);
        *STATE_VARIABLE_ImplicitAvailNeeds_19 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_19));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(
  MR_Word CheckedDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_14,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_15)
{
  if (((MR_tag((MR_Word) CheckedDefn_4)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn_6 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverDefn_6)) == (MR_Integer) 0))
      *STATE_VARIABLE_ImplicitAvailNeeds_15 = STATE_VARIABLE_ImplicitAvailNeeds_0_14;
    else
    {
      MR_Word ItemTypeDefnSolver_11 = ((MR_Word) ((MR_hl_field(1, SolverDefn_6, (MR_Integer) 1))));
      MR_Word DetailsSolver_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnSolver_11, (MR_Integer) 2))));
      MR_Word SolverTypeDetails_22 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_18, (MR_Integer) 0))));
      MR_Word MutableItems_27 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_22, (MR_Integer) 3))));
      MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_15;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[49]), MutableItems_27, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_14)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_15);
      *STATE_VARIABLE_ImplicitAvailNeeds_15 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_15));
    }
  }
  else
    *STATE_VARIABLE_ImplicitAvailNeeds_15 = STATE_VARIABLE_ImplicitAvailNeeds_0_14;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_trans_opt_3_p_0(
  MR_Word ParseTreeTransOpt_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_15,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_16)
{
  parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_105_109_112_108_105_99_105_116_95_97_118_97_105_108_95_110_101_101_100_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_ImplicitAvailNeeds_0_15, STATE_VARIABLE_ImplicitAvailNeeds_16);
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_105_109_112_108_105_99_105_116_95_97_118_97_105_108_95_110_101_101_100_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_15,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_16)
{
  *STATE_VARIABLE_ImplicitAvailNeeds_16 = STATE_VARIABLE_ImplicitAvailNeeds_0_15;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_15;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_15);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_15));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_15;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_15));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  switch (MR_tag((MR_Word) IntForOptIntSpec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptIntSpec_4, (MR_Integer) 0))));
        MR_Word TypeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 7))));
        MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 11))));
        MR_Word IntPromises_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 16))));
        MR_Word ImpInstances_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 18))));
        MR_Word ImpPromises_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 23))));
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_33_39;
        MR_Word Var_41;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_36_42;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_38_44;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_41_47;
        MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_33_39;
        MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_42;
        MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_44;
        MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_41_47;
        MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_13;

        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[41]), TypeCtorCheckedMap_21, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_33_39);
        STATE_VARIABLE_ImplicitAvailNeeds_33_39 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_33_39));
        Var_41 = (MR_Word) (IntInstances_25);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[42]), Var_41, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_33_39)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_42);
        STATE_VARIABLE_ImplicitAvailNeeds_36_42 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_42));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[43]), IntPromises_30, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_36_42)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_44);
        STATE_VARIABLE_ImplicitAvailNeeds_38_44 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_44));
        Var_46 = (MR_Word) (ImpInstances_32);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[44]), Var_46, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_38_44)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_41_47);
        STATE_VARIABLE_ImplicitAvailNeeds_41_47 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_41_47));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[45]), ImpPromises_37, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_41_47)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_13);
        *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_13));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptIntSpec_4, (MR_Integer) 0))));
        MR_Word TypeDefnCheckedMap_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 7))));
        MR_Word IntInstances_65 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 11))));
        MR_Word IntPromises_70 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 16))));
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_28_74;
        MR_Word Var_76;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_31_77;
        MR_Box conv11_STATE_VARIABLE_ImplicitAvailNeeds_28_74;
        MR_Box conv13_STATE_VARIABLE_ImplicitAvailNeeds_31_77;
        MR_Box conv15_STATE_VARIABLE_ImplicitAvailNeeds_13;

        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[46]), TypeDefnCheckedMap_61, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv11_STATE_VARIABLE_ImplicitAvailNeeds_28_74);
        STATE_VARIABLE_ImplicitAvailNeeds_28_74 = ((MR_Word) (conv11_STATE_VARIABLE_ImplicitAvailNeeds_28_74));
        Var_76 = (MR_Word) (IntInstances_65);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[47]), Var_76, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_28_74)), &conv13_STATE_VARIABLE_ImplicitAvailNeeds_31_77);
        STATE_VARIABLE_ImplicitAvailNeeds_31_77 = ((MR_Word) (conv13_STATE_VARIABLE_ImplicitAvailNeeds_31_77));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[48]), IntPromises_70, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_31_77)), &conv15_STATE_VARIABLE_ImplicitAvailNeeds_13);
        *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv15_STATE_VARIABLE_ImplicitAvailNeeds_13));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptIntSpec_4, (MR_Integer) 0))));

        parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0(ParseTreeInt2_10, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_15;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_15));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0(
  MR_Word ParseTreeInt2_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_19,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_20)
{
  MR_Word TypeDefnCheckedMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_4, (MR_Integer) 7))));
  MR_Word IntInstances_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_4, (MR_Integer) 11))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_22_22;
  MR_Word Var_24;
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_22_22;
  MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_20;

  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[39]), TypeDefnCheckedMap_13, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_19)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_22_22);
  STATE_VARIABLE_ImplicitAvailNeeds_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_22_22));
  Var_24 = (MR_Word) (IntInstances_17);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[40]), Var_24, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_22_22)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_20);
  *STATE_VARIABLE_ImplicitAvailNeeds_20 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_20));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_15;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_15));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 0))));
  MR_Word TypeDefnCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, (MR_Integer) 7))));
  MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, (MR_Integer) 11))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_22_24;
  MR_Word Var_26;
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_22_24;
  MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_9;

  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[37]), TypeDefnCheckedMap_17, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_8)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_22_24);
  STATE_VARIABLE_ImplicitAvailNeeds_22_24 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_22_24));
  Var_26 = (MR_Word) (IntInstances_21);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[38]), Var_26, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_22_24)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_9);
  *STATE_VARIABLE_ImplicitAvailNeeds_9 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_9));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_15;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_15));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word TypeDefnCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 7))));
  MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 11))));
  MR_Word IntPromises_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 16))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_28_30;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_31_33;
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_28_30;
  MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_31_33;
  MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_9;

  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[34]), TypeDefnCheckedMap_17, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_8)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_28_30);
  STATE_VARIABLE_ImplicitAvailNeeds_28_30 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_28_30));
  Var_32 = (MR_Word) (IntInstances_21);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[35]), Var_32, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_28_30)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_31_33);
  STATE_VARIABLE_ImplicitAvailNeeds_31_33 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_31_33));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[36]), IntPromises_26, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_31_33)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_9);
  *STATE_VARIABLE_ImplicitAvailNeeds_9 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_9));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_15;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_checked_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_15));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 0))));
  MR_Word TypeCtorCheckedMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 7))));
  MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 11))));
  MR_Word IntPromises_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 16))));
  MR_Word ImpInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 18))));
  MR_Word ImpPromises_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 23))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_33_35;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_36_38;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_38_40;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_41_43;
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_33_35;
  MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_38;
  MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_40;
  MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_41_43;
  MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_9;

  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[29]), TypeCtorCheckedMap_17, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_8)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_33_35);
  STATE_VARIABLE_ImplicitAvailNeeds_33_35 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_33_35));
  Var_37 = (MR_Word) (IntInstances_21);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[30]), Var_37, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_33_35)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_38);
  STATE_VARIABLE_ImplicitAvailNeeds_36_38 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_38));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[31]), IntPromises_26, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_36_38)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_40);
  STATE_VARIABLE_ImplicitAvailNeeds_38_40 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_40));
  Var_42 = (MR_Word) (ImpInstances_28);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[32]), Var_42, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_38_40)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_41_43);
  STATE_VARIABLE_ImplicitAvailNeeds_41_43 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_41_43));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[33]), ImpPromises_33, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_41_43)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_9);
  *STATE_VARIABLE_ImplicitAvailNeeds_9 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_9));
}

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_code_langs_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Langs_25;

  parse_tree__get_dependencies__acc_foreign_code_langs_from_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Langs_25);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Langs_25));
}

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_code_langs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Langs_17;

  parse_tree__get_dependencies__acc_foreign_code_langs_from_foreign_proc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Langs_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Langs_17));
}

void MR_CALL 
parse_tree__get_dependencies__get_foreign_code_langs_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * Langs_4)
{
  MR_bool succeeded;
  MR_Word Var_207 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 35))));
  MR_Word Var_208 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 34))));
  MR_Word Var_209 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 33))));

  succeeded = (Var_207 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (Var_209 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (Var_208 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_15;

    Var_15 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
    *Langs_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_15);
  }
  else
  {
    MR_Word Langs1_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 26))));
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Box conv1_Langs1_11;
    MR_Box conv3_Langs_4;

    Var_18 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[27]), Var_17, ((MR_Box) (Var_18)), &conv1_Langs1_11);
    Langs1_11 = ((MR_Word) (conv1_Langs1_11));
    Var_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 30))));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[28]), Var_20, ((MR_Box) (Langs1_11)), &conv3_Langs_4);
    *Langs_4 = ((MR_Word) (conv3_Langs_4));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_export_langs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Langs_22;

  parse_tree__get_dependencies__acc_foreign_export_langs_from_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Langs_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Langs_22));
}

void MR_CALL 
parse_tree__get_dependencies__get_foreign_export_langs_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * Langs_4)
{
  MR_bool succeeded;
  MR_Word Var_128 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 34))));
  MR_Word Var_129 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 33))));

  succeeded = (Var_129 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (Var_128 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word Var_11;

    Var_11 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
    *Langs_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_11);
  }
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 30))));
    MR_Word Var_14;
    MR_Box conv1_Langs_4;

    Var_14 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[26]), Var_13, ((MR_Box) (Var_14)), &conv1_Langs_4);
    *Langs_4 = ((MR_Word) (conv1_Langs_4));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FIFOs_25;

  parse_tree__get_dependencies__acc_foreign_include_file_info_from_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIFOs_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIFOs_25));
}

void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * FIFOs_4)
{
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 30))));
  MR_Word Var_7;
  MR_Box conv1_FIFOs_4;

  Var_7 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[4]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[25]), Var_6, ((MR_Box) (Var_7)), &conv1_FIFOs_4);
  *FIFOs_4 = ((MR_Word) (conv1_FIFOs_4));
}

static void MR_CALL 
parse_tree__get_dependencies__get_fact_tables_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FactTables_19;

  parse_tree__get_dependencies__acc_fact_tables_from_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FactTables_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FactTables_19));
}

void MR_CALL 
parse_tree__get_dependencies__get_fact_tables_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * FactTables_4)
{
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 30))));
  MR_Word Var_7;
  MR_Box conv1_FactTables_4;

  Var_7 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[3]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[24]), Var_6, ((MR_Box) (Var_7)), &conv1_FactTables_4);
  *FactTables_4 = ((MR_Word) (conv1_FactTables_4));
}

static MR_Box MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_35;

  conv8_LambdaHeadVar__2_35 = parse_tree__get_dependencies__IntroducedFrom__func__get_fim_specs__1096__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_35));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_3;

  parse_tree__item_util__acc_needed_self_fim_langs_for_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_enum_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  parse_tree__item_util__acc_needed_self_fim_langs_for_foreign_proc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__item_util__acc_needed_self_fim_langs_for_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
parse_tree__get_dependencies__get_fim_specs_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * FIMSpecs_4)
{
  MR_Word IntFIMSpecs_5;
  MR_Word ImpFIMSpecs_6;
  MR_Word Mutables_8;
  MR_Word ModuleName_17;
  MR_Word MakeSelfFIM_18;
  MR_Word SelfFIMSpecs_20;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 4))));
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_SelfImportLangs_23_23;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_119;

  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), Var_21, &IntFIMSpecs_5);
  Var_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 5))));
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), Var_22, &ImpFIMSpecs_6);
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 0))));
  Var_119 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 8))));
  Mutables_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 35))));
  if ((Mutables_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IntTypeDefns_12;
    MR_Word ImpForeignEnums_14;
    MR_Word ImpForeignProcs_15;
    MR_Word ImpImplPragmas_16;
    MR_Word STATE_VARIABLE_SelfImportLangs_25_25;
    MR_Word STATE_VARIABLE_SelfImportLangs_27_27;
    MR_Word STATE_VARIABLE_SelfImportLangs_29_29;
    MR_Word STATE_VARIABLE_SelfImportLangs_31_31;
    MR_Word _ImpTypeDefns_13;
    MR_Box conv1_STATE_VARIABLE_SelfImportLangs_27_27;
    MR_Box conv3_STATE_VARIABLE_SelfImportLangs_29_29;
    MR_Box conv5_STATE_VARIABLE_SelfImportLangs_31_31;
    MR_Box conv7_STATE_VARIABLE_SelfImportLangs_23_23;

    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(Var_119, &IntTypeDefns_12, &_ImpTypeDefns_13, &ImpForeignEnums_14);
    ImpForeignProcs_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 26))));
    ImpImplPragmas_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 30))));
    mercury__set__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), &STATE_VARIABLE_SelfImportLangs_25_25);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[1]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[20]), IntTypeDefns_12, ((MR_Box) (STATE_VARIABLE_SelfImportLangs_25_25)), &conv1_STATE_VARIABLE_SelfImportLangs_27_27);
    STATE_VARIABLE_SelfImportLangs_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_SelfImportLangs_27_27));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[21]), ImpForeignProcs_15, ((MR_Box) (STATE_VARIABLE_SelfImportLangs_27_27)), &conv3_STATE_VARIABLE_SelfImportLangs_29_29);
    STATE_VARIABLE_SelfImportLangs_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_SelfImportLangs_29_29));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[22]), ImpForeignEnums_14, ((MR_Box) (STATE_VARIABLE_SelfImportLangs_29_29)), &conv5_STATE_VARIABLE_SelfImportLangs_31_31);
    STATE_VARIABLE_SelfImportLangs_31_31 = ((MR_Word) (conv5_STATE_VARIABLE_SelfImportLangs_31_31));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[23]), ImpImplPragmas_16, ((MR_Box) (STATE_VARIABLE_SelfImportLangs_31_31)), &conv7_STATE_VARIABLE_SelfImportLangs_23_23);
    STATE_VARIABLE_SelfImportLangs_23_23 = ((MR_Word) (conv7_STATE_VARIABLE_SelfImportLangs_23_23));
  }
  else
  {
    MR_Word Var_24;

    Var_24 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
    STATE_VARIABLE_SelfImportLangs_23_23 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_24);
  }
  {
    MakeSelfFIM_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeSelfFIM_18, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[17]));
    MR_hl_field(0, MakeSelfFIM_18, 1) = ((MR_Box) (parse_tree__get_dependencies__get_fim_specs_2_p_0_5));
    MR_hl_field(0, MakeSelfFIM_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeSelfFIM_18, 3) = ((MR_Box) (ModuleName_17));
  }
  SelfFIMSpecs_20 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), MakeSelfFIM_18, STATE_VARIABLE_SelfImportLangs_23_23);
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (SelfFIMSpecs_20));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (ImpFIMSpecs_6));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (IntFIMSpecs_5));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  *FIMSpecs_4 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_36);
}

static void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImportUseMap_14;

  parse_tree__get_dependencies__add_implicit_avail_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportUseMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportUseMap_14));
}

static void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImportUseMap_14;

  parse_tree__get_dependencies__add_implicit_avail_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImportUseMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImportUseMap_14));
}

void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(
  MR_Word Globals_6,
  MR_Word IntImplicitAvailNeeds_7,
  MR_Word ImpImplicitAvailNeeds_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportUseMap_14)
{
  MR_Word IntImplicitUses_10;
  MR_Word ImpImplicitUses_11;
  MR_Word PublicBuiltin_12;
  MR_Word STATE_VARIABLE_ImportUseMap_16_16;
  MR_Word STATE_VARIABLE_ImportUseMap_18_18;
  MR_Box conv1_STATE_VARIABLE_ImportUseMap_18_18;
  MR_Box conv3_STATE_VARIABLE_ImportUseMap_14;

  parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_6, IntImplicitAvailNeeds_7, &IntImplicitUses_10);
  parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_6, ImpImplicitAvailNeeds_8, &ImpImplicitUses_11);
  PublicBuiltin_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  parse_tree__get_dependencies__add_implicit_avail_4_p_0((MR_Integer) 0, PublicBuiltin_12, STATE_VARIABLE_ImportUseMap_0_13, &STATE_VARIABLE_ImportUseMap_16_16);
  mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[0]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_9[0]), IntImplicitUses_10, ((MR_Box) (STATE_VARIABLE_ImportUseMap_16_16)), &conv1_STATE_VARIABLE_ImportUseMap_18_18);
  STATE_VARIABLE_ImportUseMap_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_ImportUseMap_18_18));
  mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[0]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_9[1]), ImpImplicitUses_11, ((MR_Box) (STATE_VARIABLE_ImportUseMap_18_18)), &conv3_STATE_VARIABLE_ImportUseMap_14);
  *STATE_VARIABLE_ImportUseMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_ImportUseMap_14));
}

static void MR_CALL 
parse_tree__get_dependencies__add_implicit_avail_4_p_0(
  MR_Word Implicit_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportUseMap_14)
{
  MR_bool succeeded;
  MR_Word OldEntry_8;
  MR_Box conv0_OldEntry_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_13, ((MR_Box) (ModuleName_6)), &conv0_OldEntry_8);
  if (succeeded)
  {
    OldEntry_8 = ((MR_Word) (conv0_OldEntry_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    if (((MR_tag((MR_Word) OldEntry_8)) == (MR_Integer) 0))
    {
      MR_Word Explicit_9 = ((MR_Word) ((MR_hl_field(0, OldEntry_8, (MR_Integer) 0))));
      MR_Word NewEntry_10;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = ((MR_Box) (Explicit_9));
      }
      {
        NewEntry_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NewEntry_10, 0) = (MR_Box) ((MR_Unsigned) (Implicit_5));
        MR_hl_field(1, NewEntry_10, 1) = ((MR_Box) (Var_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (NewEntry_10)), STATE_VARIABLE_ImportUseMap_0_13, STATE_VARIABLE_ImportUseMap_14);
    }
    else
      *STATE_VARIABLE_ImportUseMap_14 = STATE_VARIABLE_ImportUseMap_0_13;
  else
  {
    MR_Word NewEntry_19;

    {
      NewEntry_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NewEntry_19, 0) = (MR_Box) ((MR_Unsigned) (Implicit_5));
      MR_hl_field(1, NewEntry_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (NewEntry_19)), STATE_VARIABLE_ImportUseMap_0_13, STATE_VARIABLE_ImportUseMap_14);
  }
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(
  MR_Word ItemClause_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17)
{
  MR_Word HeadTerms_8 = ((MR_Word) ((MR_hl_field(0, ItemClause_4, (MR_Integer) 2))));
  MR_Word MaybeGoal_10 = ((MR_Word) ((MR_hl_field(0, ItemClause_4, (MR_Integer) 4))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_18_18;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(HeadTerms_8, STATE_VARIABLE_ImplicitAvailNeeds_0_16, &STATE_VARIABLE_ImplicitAvailNeeds_18_18);
  if (((MR_tag((MR_Word) MaybeGoal_10)) == (MR_Integer) 0))
    *STATE_VARIABLE_ImplicitAvailNeeds_17 = STATE_VARIABLE_ImplicitAvailNeeds_18_18;
  else
  {
    MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_10, (MR_Integer) 0))));

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_13, STATE_VARIABLE_ImplicitAvailNeeds_18_18, STATE_VARIABLE_ImplicitAvailNeeds_17);
  }
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_74)
{
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
  MR_Word tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74;

  // The code for TSCC PROC 1: pred parse_tree.get_dependencies.acc_implicit_avail_needs_in_goal/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.get_dependencies.acc_implicit_avail_needs_in_goal/3-0
  ;
  // proc 2 in TSCC: pred parse_tree.get_dependencies.acc_implicit_avail_needs_in_maybe_catch_any_expr/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_73 = tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_74;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Goal_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_71 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
          MR_Word TermB_72 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_108_108;

          parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermA_71, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_108_108);
          parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermB_72, STATE_VARIABLE_ImplicitAvailNeeds_108_108, &STATE_VARIABLE_ImplicitAvailNeeds_74);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CalleeSymName_64 = ((MR_Word) ((MR_hl_field(1, Goal_4, (MR_Integer) 1))));
          MR_Word Args_65 = ((MR_Word) ((MR_hl_field(1, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_104_104;
          MR_Word FormatCallVersion_66;

          succeeded = parse_tree__get_dependencies__is_possible_format_call_2_p_0(CalleeSymName_64, &FormatCallVersion_66);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_102_102;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));

            {
              STATE_VARIABLE_ImplicitAvailNeeds_102_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_102_102, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
            }
            switch (FormatCallVersion_66) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_ImplicitAvailNeeds_104_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_104_104, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_ImplicitAvailNeeds_104_104 = STATE_VARIABLE_ImplicitAvailNeeds_102_102;
                break;
            }
          }
          else
            STATE_VARIABLE_ImplicitAvailNeeds_104_104 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
          parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(Args_65, STATE_VARIABLE_ImplicitAvailNeeds_104_104, &STATE_VARIABLE_ImplicitAvailNeeds_74);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_9 = ((MR_Word) ((MR_hl_field(2, Goal_4, (MR_Integer) 1))));
          MR_Word SubGoalsB_10 = ((MR_Word) ((MR_hl_field(2, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_75_75;

          parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_9, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_75_75);
          parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(SubGoalsB_10, STATE_VARIABLE_ImplicitAvailNeeds_75_75, &STATE_VARIABLE_ImplicitAvailNeeds_74);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_55 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word Else_56 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_93_93;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_94_94;
              MR_Word Then_127 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Cond_55, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_93_93);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_127, STATE_VARIABLE_ImplicitAvailNeeds_93_93, &STATE_VARIABLE_ImplicitAvailNeeds_94_94);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_56;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_94_94;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal1_16 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoal2_17 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word SubGoals_18 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_79_79;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_80_80;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal1_16, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_79_79);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal2_17, STATE_VARIABLE_ImplicitAvailNeeds_79_79, &STATE_VARIABLE_ImplicitAvailNeeds_80_80);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(SubGoals_18, STATE_VARIABLE_ImplicitAvailNeeds_80_80, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoal_176 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_176;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_177 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalsB_178 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_75_179;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_177, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_75_179);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(SubGoalsB_178, STATE_VARIABLE_ImplicitAvailNeeds_75_179, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubGoal_184 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_184;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubGoal_183 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_183;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoal_182 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_182;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubGoal_181 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_181;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word SubGoal_180 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_180;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SubGoal_186 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_186;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SubGoal_185 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_185;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SubGoal_187 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_187;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubGoal_20 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_20;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeIO_45 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_83_83;
              MR_Word SubGoal_121 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              if ((MaybeIO_45 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_ImplicitAvailNeeds_83_83 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              else
              {
                MR_Unsigned packed_word_8 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_83_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_83_83, 0) = (MR_Box) ((((packed_word_8 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                }
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_121;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_83_83;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_61 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word OrElseGoals_62 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_98_98;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_100_100;
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));

              {
                STATE_VARIABLE_ImplicitAvailNeeds_98_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_98_98, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((MR_Unsigned) ((MR_Integer) 1) << 4))))));
              }
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(MainGoal_61, STATE_VARIABLE_ImplicitAvailNeeds_98_98, &STATE_VARIABLE_ImplicitAvailNeeds_100_100);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(OrElseGoals_62, STATE_VARIABLE_ImplicitAvailNeeds_100_100, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then_50 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word MaybeElse_51 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word Catches_52 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_53 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_86_86;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_88_88;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_89_89;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_90_90;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_91_91;
              MR_Word SubGoal_122 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

              {
                STATE_VARIABLE_ImplicitAvailNeeds_86_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_86_86, 0) = (MR_Box) ((((packed_word_9 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
              }
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal_122, STATE_VARIABLE_ImplicitAvailNeeds_86_86, &STATE_VARIABLE_ImplicitAvailNeeds_88_88);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_50, STATE_VARIABLE_ImplicitAvailNeeds_88_88, &STATE_VARIABLE_ImplicitAvailNeeds_89_89);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_goal_3_p_0(MaybeElse_51, STATE_VARIABLE_ImplicitAvailNeeds_89_89, &STATE_VARIABLE_ImplicitAvailNeeds_90_90);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_catch_exprs_3_p_0(Catches_52, STATE_VARIABLE_ImplicitAvailNeeds_90_90, &STATE_VARIABLE_ImplicitAvailNeeds_91_91);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = MaybeCatchAny_53;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_91_91;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalB_173 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_77_174;
              MR_Word SubGoalA_175 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_175, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_77_174);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_173;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_77_174;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalB_13 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_77_77;
              MR_Word SubGoalA_110 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_110, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_77_77);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_13;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_77_77;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word EventArgs_69 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(EventArgs_69, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_74;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2 = tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    else
    {
      MR_Word CatchAnyExpr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(0, CatchAnyExpr_7, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_10;
      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
      tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_3;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_74 = tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74;
  return;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_74)
{
  MR_Word tscc_proc_1_input_1_Goal_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
  MR_Word tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74;

  // The code for TSCC PROC 2: pred parse_tree.get_dependencies.acc_implicit_avail_needs_in_maybe_catch_any_expr/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.get_dependencies.acc_implicit_avail_needs_in_goal/3-0
  ;
  // proc 2 in TSCC: pred parse_tree.get_dependencies.acc_implicit_avail_needs_in_maybe_catch_any_expr/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_73 = tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_74;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Goal_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_71 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
          MR_Word TermB_72 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_108_108;

          parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermA_71, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_108_108);
          parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermB_72, STATE_VARIABLE_ImplicitAvailNeeds_108_108, &STATE_VARIABLE_ImplicitAvailNeeds_74);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CalleeSymName_64 = ((MR_Word) ((MR_hl_field(1, Goal_4, (MR_Integer) 1))));
          MR_Word Args_65 = ((MR_Word) ((MR_hl_field(1, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_104_104;
          MR_Word FormatCallVersion_66;

          succeeded = parse_tree__get_dependencies__is_possible_format_call_2_p_0(CalleeSymName_64, &FormatCallVersion_66);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_102_102;
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));

            {
              STATE_VARIABLE_ImplicitAvailNeeds_102_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_102_102, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
            }
            switch (FormatCallVersion_66) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_ImplicitAvailNeeds_104_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_104_104, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_ImplicitAvailNeeds_104_104 = STATE_VARIABLE_ImplicitAvailNeeds_102_102;
                break;
            }
          }
          else
            STATE_VARIABLE_ImplicitAvailNeeds_104_104 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
          parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(Args_65, STATE_VARIABLE_ImplicitAvailNeeds_104_104, &STATE_VARIABLE_ImplicitAvailNeeds_74);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_9 = ((MR_Word) ((MR_hl_field(2, Goal_4, (MR_Integer) 1))));
          MR_Word SubGoalsB_10 = ((MR_Word) ((MR_hl_field(2, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_75_75;

          parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_9, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_75_75);
          parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(SubGoalsB_10, STATE_VARIABLE_ImplicitAvailNeeds_75_75, &STATE_VARIABLE_ImplicitAvailNeeds_74);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_55 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word Else_56 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_93_93;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_94_94;
              MR_Word Then_127 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Cond_55, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_93_93);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_127, STATE_VARIABLE_ImplicitAvailNeeds_93_93, &STATE_VARIABLE_ImplicitAvailNeeds_94_94);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_56;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_94_94;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal1_16 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoal2_17 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word SubGoals_18 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_79_79;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_80_80;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal1_16, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_79_79);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal2_17, STATE_VARIABLE_ImplicitAvailNeeds_79_79, &STATE_VARIABLE_ImplicitAvailNeeds_80_80);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(SubGoals_18, STATE_VARIABLE_ImplicitAvailNeeds_80_80, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoal_176 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_176;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 4:
            STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_177 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalsB_178 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_75_179;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_177, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_75_179);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(SubGoalsB_178, STATE_VARIABLE_ImplicitAvailNeeds_75_179, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubGoal_184 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_184;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubGoal_183 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_183;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoal_182 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_182;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubGoal_181 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_181;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word SubGoal_180 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_180;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SubGoal_186 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_186;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SubGoal_185 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_185;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SubGoal_187 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_187;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubGoal_20 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_20;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeIO_45 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_83_83;
              MR_Word SubGoal_121 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              if ((MaybeIO_45 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_ImplicitAvailNeeds_83_83 = STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              else
              {
                MR_Unsigned packed_word_8 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_83_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_83_83, 0) = (MR_Box) ((((packed_word_8 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                }
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_121;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_83_83;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_61 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word OrElseGoals_62 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_98_98;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_100_100;
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));

              {
                STATE_VARIABLE_ImplicitAvailNeeds_98_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_98_98, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((MR_Unsigned) ((MR_Integer) 1) << 4))))));
              }
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(MainGoal_61, STATE_VARIABLE_ImplicitAvailNeeds_98_98, &STATE_VARIABLE_ImplicitAvailNeeds_100_100);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(OrElseGoals_62, STATE_VARIABLE_ImplicitAvailNeeds_100_100, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then_50 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word MaybeElse_51 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word Catches_52 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_53 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_86_86;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_88_88;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_89_89;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_90_90;
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_91_91;
              MR_Word SubGoal_122 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_73, (MR_Integer) 0)));
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

              {
                STATE_VARIABLE_ImplicitAvailNeeds_86_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_86_86, 0) = (MR_Box) ((((packed_word_9 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
              }
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal_122, STATE_VARIABLE_ImplicitAvailNeeds_86_86, &STATE_VARIABLE_ImplicitAvailNeeds_88_88);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_50, STATE_VARIABLE_ImplicitAvailNeeds_88_88, &STATE_VARIABLE_ImplicitAvailNeeds_89_89);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_goal_3_p_0(MaybeElse_51, STATE_VARIABLE_ImplicitAvailNeeds_89_89, &STATE_VARIABLE_ImplicitAvailNeeds_90_90);
              parse_tree__get_dependencies__acc_implicit_avail_needs_in_catch_exprs_3_p_0(Catches_52, STATE_VARIABLE_ImplicitAvailNeeds_90_90, &STATE_VARIABLE_ImplicitAvailNeeds_91_91);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = MaybeCatchAny_53;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_91_91;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalB_173 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_77_174;
              MR_Word SubGoalA_175 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_175, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_77_174);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_173;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_77_174;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalB_13 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_77_77;
              MR_Word SubGoalA_110 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_110, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_77_77);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_13;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_77_77;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word EventArgs_69 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));

              parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(EventArgs_69, STATE_VARIABLE_ImplicitAvailNeeds_0_73, &STATE_VARIABLE_ImplicitAvailNeeds_74);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_74;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2 = tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    else
    {
      MR_Word CatchAnyExpr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(0, CatchAnyExpr_7, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_10;
      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
      tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_73;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74 = STATE_VARIABLE_ImplicitAvailNeeds_3;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_74 = tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_74;
  return;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
  else
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitAvailNeeds_0_2, STATE_VARIABLE_ImplicitAvailNeeds_3);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_catch_exprs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    else
    {
      MR_Word CatchExpr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CatchExprs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, CatchExpr_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

      parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_11, STATE_VARIABLE_ImplicitAvailNeeds_0_2, &STATE_VARIABLE_ImplicitAvailNeeds_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CatchExprs_8;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

      parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitAvailNeeds_0_2, &STATE_VARIABLE_ImplicitAvailNeeds_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__is_possible_format_call_2_p_0(
  MR_Word SymName_3,
  MR_Word * Version_4)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
  {
    MR_Word WrappedModuleName_5 = ((MR_Word) ((MR_hl_field(1, SymName_3, (MR_Integer) 0))));
    MR_Word ModuleName_6;
    MR_String Var_7 = ((MR_String) ((MR_hl_field(1, SymName_3, (MR_Integer) 1))));

    succeeded = (strcmp(Var_7, (MR_String) "format") == 0);
    if (succeeded)
    {
      mdbcomp__builtin_modules__maybe_remove_stdlib_wrapper_2_p_0(WrappedModuleName_5, &ModuleName_6);
      if (((MR_tag((MR_Word) ModuleName_6)) == (MR_Integer) 1))
      {
        MR_String Var_20 = ((MR_String) ((MR_hl_field(1, ModuleName_6, (MR_Integer) 1))));
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, ModuleName_6, (MR_Integer) 0))));
        MR_String Var_23;

        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_23 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
          if ((strcmp(Var_20, (MR_String) "builder") == 0))
          {
            succeeded = (strcmp(Var_23, (MR_String) "string") == 0);
            if (succeeded)
            {
              *Version_4 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(Var_20, (MR_String) "string_writer") == 0))
          {
            succeeded = (strcmp(Var_23, (MR_String) "stream") == 0);
            if (succeeded)
            {
              *Version_4 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
          }
          else
            succeeded = MR_FALSE;
        }
      }
      else
      {
        MR_String Var_22 = ((MR_String) ((MR_hl_field(0, ModuleName_6, (MR_Integer) 0))));
        MR_Integer lo_0 = (MR_Integer) 0;
        MR_Integer hi_1 = (MR_Integer) 4;
        MR_Integer mid_2;
        MR_Integer result_3;

        // binary string simple lookup switch
        ;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Var_22, ((&parse_tree__get_dependencies_vector_common_7[0 + mid_2]))->parse_tree__get_dependencies__vector_common_type_7_0__vct_7_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            *Version_4 = ((&parse_tree__get_dependencies_vector_common_7[0 + mid_2]))->parse_tree__get_dependencies__vector_common_type_7_0__vct_7_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  else
  {
    MR_String Var_19 = ((MR_String) ((MR_hl_field(0, SymName_3, (MR_Integer) 0))));

    succeeded = (strcmp(Var_19, (MR_String) "format") == 0);
    if (succeeded)
    {
      *Version_4 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(
  MR_Word ItemMutableInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17)
{
  MR_Word InitValue_11 = ((MR_Word) ((MR_hl_field(0, ItemMutableInfo_4, (MR_Integer) 5))));

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(InitValue_11, STATE_VARIABLE_ImplicitAvailNeeds_0_16, STATE_VARIABLE_ImplicitAvailNeeds_17);
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_19)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
  {
    MR_Word Const_8 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 0))));
    MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_26_26;

    switch (MR_tag((MR_Word) Const_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Atom_10 = ((MR_String) ((MR_hl_field(0, Const_8, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_20_20;
          MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_53 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
          MR_Word Var_54 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
          MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0)));
          MR_Integer slot_0 = ((MR_hash_string5(Atom_10)) & (MR_Integer) 31);
          MR_String str_1 = ((&parse_tree__get_dependencies_vector_common_6[0 + slot_0]))->parse_tree__get_dependencies__vector_common_type_6_0__vct_6_f_0;

          // hashed string jump switch
          ;
          // compute the hash value of the input string
          ;
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          // did we find a match?
          ;
          if ((((str_1 != NULL)) && ((strcmp(str_1, Atom_10) == 0))))
          {
            // we found a match; dispatch to the corresponding code
            ;
            switch (slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 5:
              case (MR_Integer) 11:
              case (MR_Integer) 17:
              case (MR_Integer) 18:
              case (MR_Integer) 27:
              case (MR_Integer) 28:
                {
                  // case "format", "stream.format", "stream.string_writer.format", "stream.string_writer__format", "stream__format", "stream__string_writer.format", "stream__string_writer__format", "string_writer.format", "string_writer__format"
                  ;
                  {
                    MR_Word Var_36 = Var_56;
                    MR_Word Var_37 = Var_55;
                    MR_Word Var_38 = Var_54;
                    MR_Word Var_39 = Var_53;
                    MR_Word Var_42 = Var_50;

                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_20_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_20_20, 0) = (MR_Box) (((((MR_Unsigned) (Var_36) << 6)) | (((((MR_Unsigned) (Var_37) << 5)) | (((((MR_Unsigned) (Var_38) << 4)) | (((((MR_Unsigned) (Var_39) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_42)))))))))))));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 15:
                {
                  // case "io.format", "io__format", "string.format", "string__format"
                  ;
                  {
                    STATE_VARIABLE_ImplicitAvailNeeds_20_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_ImplicitAvailNeeds_20_20, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            // jump out of search loop
            ;
            goto label_0;
          }
          succeeded = MR_FALSE;
        label_0:;
          if (succeeded)
            STATE_VARIABLE_ImplicitAvailNeeds_26_26 = STATE_VARIABLE_ImplicitAvailNeeds_20_20;
          else
            STATE_VARIABLE_ImplicitAvailNeeds_26_26 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_ImplicitAvailNeeds_26_26 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_ImplicitAvailNeeds_26_26 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ImplicitAvailNeeds_26_26 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_ImplicitAvailNeeds_26_26 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
            break;
        }
        break;
    }
    parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(ArgTerms_9, STATE_VARIABLE_ImplicitAvailNeeds_26_26, STATE_VARIABLE_ImplicitAvailNeeds_19);
  }
  else
    *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    else
    {
      MR_Word Term_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

      parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(Term_7, STATE_VARIABLE_ImplicitAvailNeeds_0_2, &STATE_VARIABLE_ImplicitAvailNeeds_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_8;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(
  MR_Word InstanceMethod_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_11,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_12)
{
  MR_Word ProcDef_7 = ((MR_Word) ((MR_hl_field(0, InstanceMethod_4, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) ProcDef_7)) == (MR_Integer) 1))
  {
    MR_Word ItemClausesCord_10 = ((MR_Word) ((MR_hl_field(1, ProcDef_7, (MR_Integer) 0))));
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_12;

    mercury__cord__foldl_pred_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[19]), ItemClausesCord_10, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_11)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_12);
    *STATE_VARIABLE_ImplicitAvailNeeds_12 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_12));
  }
  else
    *STATE_VARIABLE_ImplicitAvailNeeds_12 = STATE_VARIABLE_ImplicitAvailNeeds_0_11;
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_12;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_12));
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(
  MR_Word ItemInstance_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17)
{
  MR_Word InstanceBody_10 = ((MR_Word) ((MR_hl_field(0, ItemInstance_4, (MR_Integer) 4))));

  if ((InstanceBody_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ImplicitAvailNeeds_17 = STATE_VARIABLE_ImplicitAvailNeeds_0_16;
  else
  {
    MR_Word InstanceMethods_15 = ((MR_Word) ((MR_hl_field(1, InstanceBody_10, (MR_Integer) 0))));
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_17;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[18]), InstanceMethods_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_16)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *STATE_VARIABLE_ImplicitAvailNeeds_17 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

void MR_CALL 
parse_tree__get_dependencies__combine_implicit_needs_2_p_0(
  MR_Word ImplicitNeedsList_3,
  MR_Word * ImplicitNeeds_4)
{
  MR_Word NeedTabling_5;
  MR_Word NeedTablingStatistics_6;
  MR_Word NeedStm_7;
  MR_Word NeedException_8;
  MR_Word NeedStringFormat_9;
  MR_Word NeedStreamFormat_10;
  MR_Word NeedIO_11;

  parse_tree__get_dependencies__combine_implicit_needs_acc_15_p_0(ImplicitNeedsList_3, (MR_Integer) 0, &NeedTabling_5, (MR_Integer) 0, &NeedTablingStatistics_6, (MR_Integer) 0, &NeedStm_7, (MR_Integer) 0, &NeedException_8, (MR_Integer) 0, &NeedStringFormat_9, (MR_Integer) 0, &NeedStreamFormat_10, (MR_Integer) 0, &NeedIO_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *ImplicitNeeds_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (NeedTabling_5) << 6)) | (((((MR_Unsigned) (NeedTablingStatistics_6) << 5)) | (((((MR_Unsigned) (NeedStm_7) << 4)) | (((((MR_Unsigned) (NeedException_8) << 3)) | (((((MR_Unsigned) (NeedStringFormat_9) << 2)) | (((((MR_Unsigned) (NeedStreamFormat_10) << 1)) | (MR_Unsigned) (NeedIO_11)))))))))))));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__combine_implicit_needs_acc_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NeedTabling_0_2,
  MR_Word * STATE_VARIABLE_NeedTabling_3,
  MR_Word STATE_VARIABLE_NeedTablingStatistics_0_4,
  MR_Word * STATE_VARIABLE_NeedTablingStatistics_5,
  MR_Word STATE_VARIABLE_NeedStm_0_6,
  MR_Word * STATE_VARIABLE_NeedStm_7,
  MR_Word STATE_VARIABLE_NeedException_0_8,
  MR_Word * STATE_VARIABLE_NeedException_9,
  MR_Word STATE_VARIABLE_NeedStringFormat_0_10,
  MR_Word * STATE_VARIABLE_NeedStringFormat_11,
  MR_Word STATE_VARIABLE_NeedStreamFormat_0_12,
  MR_Word * STATE_VARIABLE_NeedStreamFormat_13,
  MR_Word STATE_VARIABLE_NeedIO_0_14,
  MR_Word * STATE_VARIABLE_NeedIO_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NeedIO_15 = STATE_VARIABLE_NeedIO_0_14;
      *STATE_VARIABLE_NeedStreamFormat_13 = STATE_VARIABLE_NeedStreamFormat_0_12;
      *STATE_VARIABLE_NeedStringFormat_11 = STATE_VARIABLE_NeedStringFormat_0_10;
      *STATE_VARIABLE_NeedException_9 = STATE_VARIABLE_NeedException_0_8;
      *STATE_VARIABLE_NeedStm_7 = STATE_VARIABLE_NeedStm_0_6;
      *STATE_VARIABLE_NeedTablingStatistics_5 = STATE_VARIABLE_NeedTablingStatistics_0_4;
      *STATE_VARIABLE_NeedTabling_3 = STATE_VARIABLE_NeedTabling_0_2;
    }
    else
    {
      MR_Word Head_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NeedTabling_39 = ((((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word NeedTablingStatistics_40 = ((((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word NeedStm_41 = ((((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word NeedException_42 = ((((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word NeedStringFormat_43 = ((((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word NeedStreamFormat_44 = ((((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word NeedIO_45 = ((MR_Unsigned) ((MR_hl_field(0, Head_37, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_NeedTabling_60_60;
      MR_Word STATE_VARIABLE_NeedTablingStatistics_61_61;
      MR_Word STATE_VARIABLE_NeedStm_62_62;
      MR_Word STATE_VARIABLE_NeedException_63_63;
      MR_Word STATE_VARIABLE_NeedStringFormat_64_64;
      MR_Word STATE_VARIABLE_NeedStreamFormat_65_65;
      MR_Word STATE_VARIABLE_NeedIO_66_66;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NeedTabling_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NeedTablingStatistics_0_4;
      MR_Word next_value_of_STATE_VARIABLE_NeedStm_0_6;
      MR_Word next_value_of_STATE_VARIABLE_NeedException_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NeedStringFormat_0_10;
      MR_Word next_value_of_STATE_VARIABLE_NeedStreamFormat_0_12;
      MR_Word next_value_of_STATE_VARIABLE_NeedIO_0_14;

      switch (NeedTabling_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedTabling_60_60 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedTabling_60_60 = STATE_VARIABLE_NeedTabling_0_2;
          break;
      }
      switch (NeedTablingStatistics_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedTablingStatistics_61_61 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedTablingStatistics_61_61 = STATE_VARIABLE_NeedTablingStatistics_0_4;
          break;
      }
      switch (NeedStm_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedStm_62_62 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedStm_62_62 = STATE_VARIABLE_NeedStm_0_6;
          break;
      }
      switch (NeedException_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedException_63_63 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedException_63_63 = STATE_VARIABLE_NeedException_0_8;
          break;
      }
      switch (NeedStringFormat_43) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedStringFormat_64_64 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedStringFormat_64_64 = STATE_VARIABLE_NeedStringFormat_0_10;
          break;
      }
      switch (NeedStreamFormat_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedStreamFormat_65_65 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedStreamFormat_65_65 = STATE_VARIABLE_NeedStreamFormat_0_12;
          break;
      }
      switch (NeedIO_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_NeedIO_66_66 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NeedIO_66_66 = STATE_VARIABLE_NeedIO_0_14;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_38;
      next_value_of_STATE_VARIABLE_NeedTabling_0_2 = STATE_VARIABLE_NeedTabling_60_60;
      next_value_of_STATE_VARIABLE_NeedTablingStatistics_0_4 = STATE_VARIABLE_NeedTablingStatistics_61_61;
      next_value_of_STATE_VARIABLE_NeedStm_0_6 = STATE_VARIABLE_NeedStm_62_62;
      next_value_of_STATE_VARIABLE_NeedException_0_8 = STATE_VARIABLE_NeedException_63_63;
      next_value_of_STATE_VARIABLE_NeedStringFormat_0_10 = STATE_VARIABLE_NeedStringFormat_64_64;
      next_value_of_STATE_VARIABLE_NeedStreamFormat_0_12 = STATE_VARIABLE_NeedStreamFormat_65_65;
      next_value_of_STATE_VARIABLE_NeedIO_0_14 = STATE_VARIABLE_NeedIO_66_66;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NeedTabling_0_2 = next_value_of_STATE_VARIABLE_NeedTabling_0_2;
      STATE_VARIABLE_NeedTablingStatistics_0_4 = next_value_of_STATE_VARIABLE_NeedTablingStatistics_0_4;
      STATE_VARIABLE_NeedStm_0_6 = next_value_of_STATE_VARIABLE_NeedStm_0_6;
      STATE_VARIABLE_NeedException_0_8 = next_value_of_STATE_VARIABLE_NeedException_0_8;
      STATE_VARIABLE_NeedStringFormat_0_10 = next_value_of_STATE_VARIABLE_NeedStringFormat_0_10;
      STATE_VARIABLE_NeedStreamFormat_0_12 = next_value_of_STATE_VARIABLE_NeedStreamFormat_0_12;
      STATE_VARIABLE_NeedIO_0_14 = next_value_of_STATE_VARIABLE_NeedIO_0_14;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
parse_tree__get_dependencies__init_implicit_avail_needs_0_f_0(void)
{
  return (MR_Word) (&parse_tree__get_dependencies_scalar_common_3[0]);
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv26_STATE_VARIABLE_ImplicitAvailNeeds_16;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_STATE_VARIABLE_ImplicitAvailNeeds_16);
  *wrapper_arg_3 = ((MR_Box) (conv26_STATE_VARIABLE_ImplicitAvailNeeds_16));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_ImplicitAvailNeeds_33;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_ImplicitAvailNeeds_33);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_ImplicitAvailNeeds_33));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_ImplicitAvailNeeds_9;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int2_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_ImplicitAvailNeeds_9);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_ImplicitAvailNeeds_9));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_STATE_VARIABLE_ImplicitAvailNeeds_9;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_ImplicitAvailNeeds_9);
  *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_ImplicitAvailNeeds_9));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_ImplicitAvailNeeds_9;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_ImplicitAvailNeeds_9);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_ImplicitAvailNeeds_9));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_22;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_22);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_22));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_19;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_19);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_19));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_13;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_13));
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0(
  MR_Word Globals_4,
  MR_Word AugCompUnit_5,
  MR_Word * ImplicitlyUsedModules_6)
{
  MR_Word ImplicitAvailNeeds_8;
  MR_Word ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_10 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_11 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_12 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 3))));
  MR_Word PlainOpts_13 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 4))));
  MR_Word TransOpts_14 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 5))));
  MR_Word IntForOptSpecs_15 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_5, (MR_Integer) 6))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_17_18;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_19_20;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_21_22;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_23_24;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_25_26;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_27_28;
  MR_Word TypeCtorCheckedMap_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 8))));
  MR_Word IntInstances_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 14))));
  MR_Word IntPromises_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 19))));
  MR_Word ImpInstances_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 22))));
  MR_Word ImpClauses_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 25))));
  MR_Word ImpImplPragmas_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 30))));
  MR_Word ImpPromises_70 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 32))));
  MR_Word ImpMutables_73 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 35))));
  MR_Word ImpTypeDefns_75;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_48_78;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_50_80;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_52_82;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_54_84;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_56_86;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_58_88;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_60_90;
  MR_Word _IntTypeDefns_74;
  MR_Word _ImpForeignEnums_76;
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_48_78;
  MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_50_80;
  MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_52_82;
  MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_54_84;
  MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_56_86;
  MR_Box conv11_STATE_VARIABLE_ImplicitAvailNeeds_58_88;
  MR_Box conv13_STATE_VARIABLE_ImplicitAvailNeeds_60_90;
  MR_Box conv15_STATE_VARIABLE_ImplicitAvailNeeds_17_18;
  MR_Box conv17_STATE_VARIABLE_ImplicitAvailNeeds_19_20;
  MR_Box conv19_STATE_VARIABLE_ImplicitAvailNeeds_21_22;
  MR_Box conv21_STATE_VARIABLE_ImplicitAvailNeeds_23_24;
  MR_Box conv23_STATE_VARIABLE_ImplicitAvailNeeds_25_26;
  MR_Box conv25_STATE_VARIABLE_ImplicitAvailNeeds_27_28;
  MR_Box conv27_ImplicitAvailNeeds_8;

  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_46, &_IntTypeDefns_74, &ImpTypeDefns_75, &_ImpForeignEnums_76);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[4]), IntInstances_52, ((MR_Box) (&parse_tree__get_dependencies_scalar_common_3[0])), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_48_78);
  STATE_VARIABLE_ImplicitAvailNeeds_48_78 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_48_78));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[5]), IntPromises_57, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_48_78)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_50_80);
  STATE_VARIABLE_ImplicitAvailNeeds_50_80 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_50_80));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[1]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[6]), ImpTypeDefns_75, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_50_80)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_52_82);
  STATE_VARIABLE_ImplicitAvailNeeds_52_82 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_52_82));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[7]), ImpInstances_60, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_52_82)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_54_84);
  STATE_VARIABLE_ImplicitAvailNeeds_54_84 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_54_84));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[8]), ImpClauses_63, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_54_84)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_56_86);
  STATE_VARIABLE_ImplicitAvailNeeds_56_86 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_56_86));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[9]), ImpImplPragmas_68, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_56_86)), &conv11_STATE_VARIABLE_ImplicitAvailNeeds_58_88);
  STATE_VARIABLE_ImplicitAvailNeeds_58_88 = ((MR_Word) (conv11_STATE_VARIABLE_ImplicitAvailNeeds_58_88));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[10]), ImpPromises_70, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_58_88)), &conv13_STATE_VARIABLE_ImplicitAvailNeeds_60_90);
  STATE_VARIABLE_ImplicitAvailNeeds_60_90 = ((MR_Word) (conv13_STATE_VARIABLE_ImplicitAvailNeeds_60_90));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[11]), ImpMutables_73, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_60_90)), &conv15_STATE_VARIABLE_ImplicitAvailNeeds_17_18);
  STATE_VARIABLE_ImplicitAvailNeeds_17_18 = ((MR_Word) (conv15_STATE_VARIABLE_ImplicitAvailNeeds_17_18));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[12]), AncestorIntSpecs_10, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_17_18)), &conv17_STATE_VARIABLE_ImplicitAvailNeeds_19_20);
  STATE_VARIABLE_ImplicitAvailNeeds_19_20 = ((MR_Word) (conv17_STATE_VARIABLE_ImplicitAvailNeeds_19_20));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[13]), DirectInt1Specs_11, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_19_20)), &conv19_STATE_VARIABLE_ImplicitAvailNeeds_21_22);
  STATE_VARIABLE_ImplicitAvailNeeds_21_22 = ((MR_Word) (conv19_STATE_VARIABLE_ImplicitAvailNeeds_21_22));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[14]), IndirectInt2Specs_12, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_21_22)), &conv21_STATE_VARIABLE_ImplicitAvailNeeds_23_24);
  STATE_VARIABLE_ImplicitAvailNeeds_23_24 = ((MR_Word) (conv21_STATE_VARIABLE_ImplicitAvailNeeds_23_24));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[15]), IntForOptSpecs_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_23_24)), &conv23_STATE_VARIABLE_ImplicitAvailNeeds_25_26);
  STATE_VARIABLE_ImplicitAvailNeeds_25_26 = ((MR_Word) (conv23_STATE_VARIABLE_ImplicitAvailNeeds_25_26));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[16]), PlainOpts_13, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_25_26)), &conv25_STATE_VARIABLE_ImplicitAvailNeeds_27_28);
  STATE_VARIABLE_ImplicitAvailNeeds_27_28 = ((MR_Word) (conv25_STATE_VARIABLE_ImplicitAvailNeeds_27_28));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[17]), TransOpts_14, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_27_28)), &conv27_ImplicitAvailNeeds_8);
  ImplicitAvailNeeds_8 = ((MR_Word) (conv27_ImplicitAvailNeeds_8));
  parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_4, ImplicitAvailNeeds_8, ImplicitlyUsedModules_6);
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_avail_needs__921__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(
  MR_Word Globals_4,
  MR_Word ImplicitAvailNeeds_5,
  MR_Word * STATE_VARIABLE_ImplicitlyUsedModules_21)
{
  MR_bool succeeded;
  MR_Word ItemsNeedTabling_7;
  MR_Word ItemsNeedTablingStatistics_8;
  MR_Word ItemsNeedSTM_9;
  MR_Word ItemsNeedException_10;
  MR_Word ItemsNeedStringFormat_11;
  MR_Word ItemsNeedStreamFormat_12;
  MR_Word ItemsNeedIO_13;
  MR_Word Deep_14;
  MR_Word Target_15;
  MR_Word HighLevelCode_16;
  MR_Word Parallel_17;
  MR_Word UseRegions_18;
  MR_Word SSDBTraceLevel_19;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_22_22;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_27_27;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_45_45;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_47_47;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_51_51;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_53_53;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_55_55;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_58_58;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_64_64;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_68_68;
  MR_Word STATE_VARIABLE_ImplicitlyUsedModules_71_71;

  Var_23 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  STATE_VARIABLE_ImplicitlyUsedModules_22_22 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_23)));
  ItemsNeedTabling_7 = ((((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  ItemsNeedTablingStatistics_8 = ((((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
  ItemsNeedSTM_9 = ((((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  ItemsNeedException_10 = ((((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  ItemsNeedStringFormat_11 = ((((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  ItemsNeedStreamFormat_12 = ((((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  ItemsNeedIO_13 = ((MR_Unsigned) ((MR_hl_field(0, ImplicitAvailNeeds_5, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (ItemsNeedTabling_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_24;
        MR_Word STATE_VARIABLE_ImplicitlyUsedModules_25_25;

        Var_24 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_24)), STATE_VARIABLE_ImplicitlyUsedModules_22_22, &STATE_VARIABLE_ImplicitlyUsedModules_25_25);
        switch (ItemsNeedTablingStatistics_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_26;

              Var_26 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_26)), STATE_VARIABLE_ImplicitlyUsedModules_25_25, &STATE_VARIABLE_ImplicitlyUsedModules_27_27);
            }
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_ImplicitlyUsedModules_27_27 = STATE_VARIABLE_ImplicitlyUsedModules_25_25;
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (ItemsNeedTablingStatistics_8));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_avail_needs\'/3", (MR_String) "tabling statistics without tabling");
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 291, (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 292, (MR_Integer) 1);
          if (!(succeeded))
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 180, (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Word Var_38;

          Var_38 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_38)), STATE_VARIABLE_ImplicitlyUsedModules_22_22, &STATE_VARIABLE_ImplicitlyUsedModules_27_27);
        }
        else
          STATE_VARIABLE_ImplicitlyUsedModules_27_27 = STATE_VARIABLE_ImplicitlyUsedModules_22_22;
      }
      break;
  }
  switch (ItemsNeedSTM_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_40;
        MR_Word STATE_VARIABLE_ImplicitlyUsedModules_41_41;
        MR_Word Var_42;
        MR_Word STATE_VARIABLE_ImplicitlyUsedModules_43_43;
        MR_Word Var_44;

        Var_40 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_40)), STATE_VARIABLE_ImplicitlyUsedModules_27_27, &STATE_VARIABLE_ImplicitlyUsedModules_41_41);
        Var_42 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_42)), STATE_VARIABLE_ImplicitlyUsedModules_41_41, &STATE_VARIABLE_ImplicitlyUsedModules_43_43);
        Var_44 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_44)), STATE_VARIABLE_ImplicitlyUsedModules_43_43, &STATE_VARIABLE_ImplicitlyUsedModules_45_45);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_45_45 = STATE_VARIABLE_ImplicitlyUsedModules_27_27;
      break;
  }
  switch (ItemsNeedException_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_46;

        Var_46 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_46)), STATE_VARIABLE_ImplicitlyUsedModules_45_45, &STATE_VARIABLE_ImplicitlyUsedModules_47_47);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_47_47 = STATE_VARIABLE_ImplicitlyUsedModules_45_45;
      break;
  }
  switch (ItemsNeedStringFormat_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_48;
        MR_Word STATE_VARIABLE_ImplicitlyUsedModules_49_49;
        MR_Word Var_50;

        Var_48 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_48)), STATE_VARIABLE_ImplicitlyUsedModules_47_47, &STATE_VARIABLE_ImplicitlyUsedModules_49_49);
        Var_50 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_50)), STATE_VARIABLE_ImplicitlyUsedModules_49_49, &STATE_VARIABLE_ImplicitlyUsedModules_51_51);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_51_51 = STATE_VARIABLE_ImplicitlyUsedModules_47_47;
      break;
  }
  switch (ItemsNeedStreamFormat_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_52;

        Var_52 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_52)), STATE_VARIABLE_ImplicitlyUsedModules_51_51, &STATE_VARIABLE_ImplicitlyUsedModules_53_53);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_53_53 = STATE_VARIABLE_ImplicitlyUsedModules_51_51;
      break;
  }
  switch (ItemsNeedIO_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_54;

        Var_54 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_54)), STATE_VARIABLE_ImplicitlyUsedModules_53_53, &STATE_VARIABLE_ImplicitlyUsedModules_55_55);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_55_55 = STATE_VARIABLE_ImplicitlyUsedModules_53_53;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 267, &Deep_14);
  switch (Deep_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_58_58 = STATE_VARIABLE_ImplicitlyUsedModules_55_55;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_57;

        Var_57 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_57)), STATE_VARIABLE_ImplicitlyUsedModules_55_55, &STATE_VARIABLE_ImplicitlyUsedModules_58_58);
      }
      break;
  }
  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 284, (MR_Integer) 1);
  if (!(succeeded))
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 285, (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_63;

    Var_63 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_63)), STATE_VARIABLE_ImplicitlyUsedModules_58_58, &STATE_VARIABLE_ImplicitlyUsedModules_64_64);
  }
  else
    STATE_VARIABLE_ImplicitlyUsedModules_64_64 = STATE_VARIABLE_ImplicitlyUsedModules_58_58;
  libs__globals__get_target_2_p_0(Globals_4, &Target_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 331, &HighLevelCode_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 288, &Parallel_17);
  succeeded = (Target_15 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (HighLevelCode_16 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Parallel_17 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word Var_67;

    Var_67 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_67)), STATE_VARIABLE_ImplicitlyUsedModules_64_64, &STATE_VARIABLE_ImplicitlyUsedModules_68_68);
  }
  else
    STATE_VARIABLE_ImplicitlyUsedModules_68_68 = STATE_VARIABLE_ImplicitlyUsedModules_64_64;
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 300, &UseRegions_18);
  switch (UseRegions_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_ImplicitlyUsedModules_71_71 = STATE_VARIABLE_ImplicitlyUsedModules_68_68;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_70;

        Var_70 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_70)), STATE_VARIABLE_ImplicitlyUsedModules_68_68, &STATE_VARIABLE_ImplicitlyUsedModules_71_71);
      }
      break;
  }
  libs__globals__get_ssdb_trace_level_2_p_0(Globals_4, &SSDBTraceLevel_19);
  switch (SSDBTraceLevel_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word DisableSSDB_20;

        libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 193, &DisableSSDB_20);
        switch (DisableSSDB_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_73;

              Var_73 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_73)), STATE_VARIABLE_ImplicitlyUsedModules_71_71, STATE_VARIABLE_ImplicitlyUsedModules_21);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ImplicitlyUsedModules_21 = STATE_VARIABLE_ImplicitlyUsedModules_71_71;
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_ImplicitlyUsedModules_21 = STATE_VARIABLE_ImplicitlyUsedModules_71_71;
      break;
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word * ExplicitModules_5,
  MR_Word * ImplicitAvailNeeds_6)
{
  MR_Word UseMap_9 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 2))));

  mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[0]), UseMap_9, ExplicitModules_5);
  parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_4, (MR_Word) (&parse_tree__get_dependencies_scalar_common_3[0]), ImplicitAvailNeeds_6);
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_19;

  parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_19));
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_32,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_33)
{
  MR_Word TypeDefns_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 4))));
  MR_Word Instances_15 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 9))));
  MR_Word Clauses_18 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 12))));
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_35_35;
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_37_37;
  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_35_35;
  MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_37_37;
  MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_33;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[1]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[1]), TypeDefns_10, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_32)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_35_35);
  STATE_VARIABLE_ImplicitAvailNeeds_35_35 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_35_35));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[2]), Instances_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_35_35)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_37_37);
  STATE_VARIABLE_ImplicitAvailNeeds_37_37 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_37_37));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[3]), Clauses_18, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_37_37)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_33);
  *STATE_VARIABLE_ImplicitAvailNeeds_33 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_33));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____format_call_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____format_call_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____format_call_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____format_call_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__get_dependencies__init(void)
{
}

void mercury__parse_tree__get_dependencies__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_format_call_version_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0);
}

void mercury__parse_tree__get_dependencies__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__get_dependencies__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.get_dependencies.
