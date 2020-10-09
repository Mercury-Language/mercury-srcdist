/*
** Automatically generated from `get_dependencies.m'
** by the Mercury compiler,
** version rotd-2020-10-09
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
#include "bimap.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0;

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_avail_needs_0_0[7];

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_avail_needs_0_0[7];

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_avail_needs_0_0[7];

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0;

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_avail_needs_0_0[1];

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_avail_needs_0[1];

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_avail_needs_0[1];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_avail_needs_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__get_dependencies__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_item_contents_0_0[5];

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_item_contents_0_0[5];

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_item_contents_0_0[5];

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_item_contents_0_0;

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_item_contents_0_0[1];

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_item_contents_0[1];

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_item_contents_0[1];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_item_contents_0[1];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2];

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_avail_needs__974__1_2_p_0(
  MR_Word ItemsNeedTablingStatistics_8,
  MR_Word HeadVar__2_27);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromise_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_impl_pragma_3_p_0(
  MR_Word ItemImplPragma_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_32,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_33);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(
  MR_Word ItemInstance_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_solver_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_solver_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_17,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_18);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(
  MR_Word AllDefns_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13);

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
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_22,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_23);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_31,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_32);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0(
  MR_Word IndirectIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_10,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_11);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0(
  MR_Word DirectIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_10,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_11);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3,
  MR_Word STATE_VARIABLE_Contents_0_4,
  MR_Word * STATE_VARIABLE_Contents_5);

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
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_70);

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

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_50,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_51);

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
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_31,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_32);

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
parse_tree__get_dependencies____Unify____item_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____item_contents_0_0_10001(
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


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[7][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[56][3];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[15][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[1][7];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_8[2][4];


/* sealed */ struct parse_tree__get_dependencies__vector_common_type_6_0_s {
  const MR_String parse_tree__get_dependencies__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_6_0_s parse_tree__get_dependencies_vector_common_6[36];



static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[56][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[2])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[2])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[4])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[6])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[7])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[8])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[9])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[10])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[11])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[2])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[12])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[13])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[1])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[3])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[14])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[5])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_solver_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[12])),
    ((MR_Box) (parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))))))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[15][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_implicit_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_8[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_7[0])),
    ((MR_Box) (parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_7[0])),
    ((MR_Box) (parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};


static /* final */ const struct parse_tree__get_dependencies__vector_common_type_6_0_s parse_tree__get_dependencies_vector_common_6[36] = {
  /* row 0 */   {     (MR_String) "io.format" },
  /* row 1 */   {     (MR_String) "io__format" },
  /* row 2 */   {     (MR_String) "string.format" },
  /* row 3 */   {     (MR_String) "string__format" },
  /* row 4 */   {     (MR_String) "stream__string_writer.format" },
  /* row 5 */   {     NULL },
  /* row 6 */   {     (MR_String) "stream.format" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     (MR_String) "stream__format" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) "string_writer__format" },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) "stream__string_writer__format" },
  /* row 22 */   {     (MR_String) "string_writer.format" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "stream.string_writer.format" },
  /* row 32 */   {     (MR_String) "stream.string_writer__format" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_impl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__get_dependencies__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_solver_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0)
  }
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

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_avail_needs_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0
};

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_avail_needs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_avail_needs_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_avail_needs_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_avail_needs_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_avail_needs_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "implicit_avail_needs",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_avail_needs_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_avail_needs_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_avail_needs_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__get_dependencies__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_item_contents_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__cord__ti_cord_1parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_has_main_0)
};

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_item_contents_0_0[5] = {
  (MR_String) "ic_fifos",
  (MR_String) "ic_fact_tables",
  (MR_String) "ic_langs",
  (MR_String) "ic_foreign_export_langs",
  (MR_String) "ic_has_main"
};

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_item_contents_0_0[5] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_item_contents_0_0 = {
  (MR_String) "item_contents",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_item_contents_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_item_contents_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_item_contents_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_item_contents_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_item_contents_0_0
};

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_item_contents_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_item_contents_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_item_contents_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_item_contents_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_item_contents_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__get_dependencies____Unify____item_contents_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____item_contents_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "item_contents",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_item_contents_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_item_contents_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_item_contents_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0 = {
  (MR_String) "dont_need_exception",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1 = {
  (MR_String) "do_need_exception",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_exception",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0 = {
  (MR_String) "dont_need_io",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1 = {
  (MR_String) "do_need_io",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_io",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0 = {
  (MR_String) "dont_need_stm",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1 = {
  (MR_String) "do_need_stm",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stm",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0 = {
  (MR_String) "dont_need_stream_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1 = {
  (MR_String) "do_need_stream_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stream_format",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0 = {
  (MR_String) "dont_need_string_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1 = {
  (MR_String) "do_need_string_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_string_format",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0 = {
  (MR_String) "dont_need_tabling",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1 = {
  (MR_String) "do_need_tabling",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0 = {
  (MR_String) "dont_need_tabling_statistics",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1 = {
  (MR_String) "do_need_tabling_statistics",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling_statistics",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0
};

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_avail_needs__974__1_2_p_0(
  MR_Word ItemsNeedTablingStatistics_8,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded = (ItemsNeedTablingStatistics_8 == HeadVar__2_27);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____item_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_25 < Var_26);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_25 > Var_26);
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

MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____item_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
}

MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(
  MR_Word ItemPromise_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_4, (MR_Integer) 1))));

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_impl_pragma_3_p_0(
  MR_Word ItemImplPragma_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_32,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_33)
{
  {
    MR_Word ImplPragma_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_4, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) ImplPragma_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 3:
            {
              MR_Word TableInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_6, (MR_Integer) 1))));
              MR_Word MaybeAttributes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_9, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ImplicitAvailNeeds_34_34;
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_32, (MR_Integer) 0)));

              {
                STATE_VARIABLE_ImplicitAvailNeeds_34_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_34_34, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
              }
              if ((MaybeAttributes_13 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_34_34;
              else
              {
                MR_Word Attributes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_13, (MR_Integer) 0))));
                MR_Word StatsAttr_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_14, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);

                switch (StatsAttr_15) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_34_34;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_ImplicitAvailNeeds_33 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 5:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 10:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 11:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 12:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
          case (MR_Integer) 13:
            *STATE_VARIABLE_ImplicitAvailNeeds_33 = STATE_VARIABLE_ImplicitAvailNeeds_0_32;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_14;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_14));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(
  MR_Word ItemInstance_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17)
{
  {
    MR_Word InstanceBody_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_4, (MR_Integer) 4))));

    if ((InstanceBody_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitAvailNeeds_17 = STATE_VARIABLE_ImplicitAvailNeeds_0_16;
    else
    {
      MR_Word InstanceMethods_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_10, (MR_Integer) 0))));
      MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_17;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[55]), InstanceMethods_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_16)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_17);
      *STATE_VARIABLE_ImplicitAvailNeeds_17 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_17));
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_solver_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_solver_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  {
    MR_Word DetailsSolver_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 2))));
    MR_Word SolverTypeDetails_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_8, (MR_Integer) 0))));
    MR_Word MutableItems_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_19, (MR_Integer) 3))));
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_13;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[54]), MutableItems_24, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_17,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_18)
{
  {
    MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) TypeDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ImplicitAvailNeeds_18 = STATE_VARIABLE_ImplicitAvailNeeds_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_16 = (MR_Word) (MR_body((MR_Word) (TypeDefn_8), (MR_Integer) 1));
          MR_Word SolverTypeDetails_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_16, (MR_Integer) 0))));
          MR_Word MutableItems_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_24, (MR_Integer) 3))));
          MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_18;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[53]), MutableItems_29, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_17)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_18);
          *STATE_VARIABLE_ImplicitAvailNeeds_18 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_18));
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_ImplicitAvailNeeds_18 = STATE_VARIABLE_ImplicitAvailNeeds_0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ImplicitAvailNeeds_18 = STATE_VARIABLE_ImplicitAvailNeeds_0_17;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ImplicitAvailNeeds_18 = STATE_VARIABLE_ImplicitAvailNeeds_0_17;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_solver_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(
  MR_Word AllDefns_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_12,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_13)
{
  {
    MR_Word SolverNonAbs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_4, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_13;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[3]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[52]), SolverNonAbs_7, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
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
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
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
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptIntSpec_4, (MR_Integer) 0))));
        MR_Word IntTypeDefnMap_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 13))));
        MR_Word IntInstances_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 17))));
        MR_Word IntPromises_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 22))));
        MR_Word ImpTypeDefnMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 23))));
        MR_Word ImpInstances_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 27))));
        MR_Word ImpPromises_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 32))));
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_42_55;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_44_57;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_46_59;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_48_61;
        MR_Word STATE_VARIABLE_ImplicitAvailNeeds_50_63;
        MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_42_55;
        MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_44_57;
        MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_46_59;
        MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_48_61;
        MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_50_63;
        MR_Box conv11_STATE_VARIABLE_ImplicitAvailNeeds_13;

        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[46]), IntTypeDefnMap_34, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_12)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_42_55);
        STATE_VARIABLE_ImplicitAvailNeeds_42_55 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_42_55));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[47]), IntInstances_38, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_42_55)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_44_57);
        STATE_VARIABLE_ImplicitAvailNeeds_44_57 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_44_57));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[48]), IntPromises_43, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_44_57)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_46_59);
        STATE_VARIABLE_ImplicitAvailNeeds_46_59 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_46_59));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[49]), ImpTypeDefnMap_44, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_46_59)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_48_61);
        STATE_VARIABLE_ImplicitAvailNeeds_48_61 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_48_61));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[50]), ImpInstances_48, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_48_61)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_50_63);
        STATE_VARIABLE_ImplicitAvailNeeds_50_63 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_50_63));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[51]), ImpPromises_53, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_50_63)), &conv11_STATE_VARIABLE_ImplicitAvailNeeds_13);
        *STATE_VARIABLE_ImplicitAvailNeeds_13 = ((MR_Word) (conv11_STATE_VARIABLE_ImplicitAvailNeeds_13));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntForOptIntSpec_4, (MR_Integer) 0))));

        parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0(ParseTreeInt1_8, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IntForOptIntSpec_4, (MR_Integer) 0))));

        parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0(ParseTreeInt2_10, STATE_VARIABLE_ImplicitAvailNeeds_0_12, STATE_VARIABLE_ImplicitAvailNeeds_13);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int2_3_p_0(
  MR_Word ParseTreeInt2_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_22,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_23)
{
  {
    MR_Word IntTypeDefnMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_4, (MR_Integer) 9))));
    MR_Word IntInstances_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_4, (MR_Integer) 13))));
    MR_Word ImpTypeDefnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_4, (MR_Integer) 15))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_25_25;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_27_27;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_25_25;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_27_27;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_23;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[43]), IntTypeDefnMap_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_22)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_25_25);
    STATE_VARIABLE_ImplicitAvailNeeds_25_25 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_25_25));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[44]), IntInstances_19, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_25_25)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_27_27);
    STATE_VARIABLE_ImplicitAvailNeeds_27_27 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_27_27));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[45]), ImpTypeDefnMap_21, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_27_27)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_23);
    *STATE_VARIABLE_ImplicitAvailNeeds_23 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_23));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_31,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_32)
{
  {
    MR_Word IntTypeDefnMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_4, (MR_Integer) 11))));
    MR_Word IntInstances_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_4, (MR_Integer) 15))));
    MR_Word IntPromises_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_4, (MR_Integer) 20))));
    MR_Word ImpTypeDefnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_4, (MR_Integer) 22))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_34_34;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_36_36;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_38_38;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_34;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_36;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_38;
    MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_32;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[39]), IntTypeDefnMap_17, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_31)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_34);
    STATE_VARIABLE_ImplicitAvailNeeds_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_34));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[40]), IntInstances_21, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_34_34)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_36);
    STATE_VARIABLE_ImplicitAvailNeeds_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_36));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[41]), IntPromises_26, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_36_36)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_38);
    STATE_VARIABLE_ImplicitAvailNeeds_38_38 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_38));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[42]), ImpTypeDefnMap_28, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_38_38)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_32);
    *STATE_VARIABLE_ImplicitAvailNeeds_32 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_32));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0(
  MR_Word IndirectIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_10,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_11)
{
  if (((MR_tag((MR_Word) IndirectIntSpec_4)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectIntSpec_4, (MR_Integer) 0))));
    MR_Word IntTypeDefnMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 9))));
    MR_Word IntInstances_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 13))));
    MR_Word ImpTypeDefnMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 15))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_25_35;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_27_37;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_25_35;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_27_37;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_11;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[34]), IntTypeDefnMap_27, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_10)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_25_35);
    STATE_VARIABLE_ImplicitAvailNeeds_25_35 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_25_35));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[35]), IntInstances_31, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_25_35)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_27_37);
    STATE_VARIABLE_ImplicitAvailNeeds_27_37 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_27_37));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[36]), ImpTypeDefnMap_33, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_27_37)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_11);
    *STATE_VARIABLE_ImplicitAvailNeeds_11 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_11));
  }
  else
  {
    MR_Word ParseTreeInt3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndirectIntSpec_4, (MR_Integer) 0))));
    MR_Word IntTypeDefnMap_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 6))));
    MR_Word IntInstances_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 10))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_21_70;
    MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_21_70;
    MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_11;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[37]), IntTypeDefnMap_63, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_10)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_21_70);
    STATE_VARIABLE_ImplicitAvailNeeds_21_70 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_21_70));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[38]), IntInstances_67, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_21_70)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_11);
    *STATE_VARIABLE_ImplicitAvailNeeds_11 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_11));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0(
  MR_Word DirectIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_10,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_11)
{
  if (((MR_tag((MR_Word) DirectIntSpec_4)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec_4, (MR_Integer) 0))));
    MR_Word IntTypeDefnMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 11))));
    MR_Word IntInstances_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 15))));
    MR_Word IntPromises_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 20))));
    MR_Word ImpTypeDefnMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 22))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_34_44;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_36_46;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_38_48;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_44;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_46;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_48;
    MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_11;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[28]), IntTypeDefnMap_29, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_10)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_44);
    STATE_VARIABLE_ImplicitAvailNeeds_34_44 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_44));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[29]), IntInstances_33, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_34_44)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_46);
    STATE_VARIABLE_ImplicitAvailNeeds_36_46 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_46));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[30]), IntPromises_38, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_36_46)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_48);
    STATE_VARIABLE_ImplicitAvailNeeds_38_48 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_38_48));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[31]), ImpTypeDefnMap_40, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_38_48)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_11);
    *STATE_VARIABLE_ImplicitAvailNeeds_11 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_11));
  }
  else
  {
    MR_Word ParseTreeInt3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectIntSpec_4, (MR_Integer) 0))));
    MR_Word IntTypeDefnMap_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 6))));
    MR_Word IntInstances_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_8, (MR_Integer) 10))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_21_85;
    MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_21_85;
    MR_Box conv11_STATE_VARIABLE_ImplicitAvailNeeds_11;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[32]), IntTypeDefnMap_78, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_10)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_21_85);
    STATE_VARIABLE_ImplicitAvailNeeds_21_85 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_21_85));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[33]), IntInstances_82, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_21_85)), &conv11_STATE_VARIABLE_ImplicitAvailNeeds_11);
    *STATE_VARIABLE_ImplicitAvailNeeds_11 = ((MR_Word) (conv11_STATE_VARIABLE_ImplicitAvailNeeds_11));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_ctor_add_defns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_8,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_9)
{
  {
    MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_4, (MR_Integer) 0))));
    MR_Word IntTypeDefnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 13))));
    MR_Word IntInstances_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 17))));
    MR_Word IntPromises_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 22))));
    MR_Word ImpTypeDefnMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 23))));
    MR_Word ImpInstances_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 27))));
    MR_Word ImpPromises_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 32))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_42_49;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_44_51;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_46_53;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_48_55;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_50_57;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_42_49;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_44_51;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_46_53;
    MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_48_55;
    MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_50_57;
    MR_Box conv11_STATE_VARIABLE_ImplicitAvailNeeds_9;

    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[22]), IntTypeDefnMap_28, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_8)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_42_49);
    STATE_VARIABLE_ImplicitAvailNeeds_42_49 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_42_49));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[23]), IntInstances_32, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_42_49)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_44_51);
    STATE_VARIABLE_ImplicitAvailNeeds_44_51 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_44_51));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[24]), IntPromises_37, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_44_51)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_46_53);
    STATE_VARIABLE_ImplicitAvailNeeds_46_53 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_46_53));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[25]), ImpTypeDefnMap_38, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_46_53)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_48_55);
    STATE_VARIABLE_ImplicitAvailNeeds_48_55 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_48_55));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[26]), ImpInstances_42, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_48_55)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_50_57);
    STATE_VARIABLE_ImplicitAvailNeeds_50_57 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_50_57));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[27]), ImpPromises_47, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_50_57)), &conv11_STATE_VARIABLE_ImplicitAvailNeeds_9);
    *STATE_VARIABLE_ImplicitAvailNeeds_9 = ((MR_Word) (conv11_STATE_VARIABLE_ImplicitAvailNeeds_9));
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_5_p_0(
  MR_Word IntItems_6,
  MR_Word ImpItems_7,
  MR_Word * IntImplicitAvailNeeds_8,
  MR_Word * IntImpImplicitAvailNeeds_9,
  MR_Word * STATE_VARIABLE_Contents_13)
{
  {
    MR_Word IntHasMain_12;
    MR_Word STATE_VARIABLE_Contents_14_14;
    MR_Word STATE_VARIABLE_Contents_15_15;
    MR_Word STATE_VARIABLE_Contents_16_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    STATE_VARIABLE_Contents_14_14 = parse_tree__get_dependencies__init_item_contents_0_f_0();
    parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0(IntItems_6, (MR_Word) (&parse_tree__get_dependencies_scalar_common_3[0]), IntImplicitAvailNeeds_8, STATE_VARIABLE_Contents_14_14, &STATE_VARIABLE_Contents_15_15);
    IntHasMain_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_15_15, (MR_Integer) 4))) & (MR_Integer) 1);
    parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0(ImpItems_7, *IntImplicitAvailNeeds_8, IntImpImplicitAvailNeeds_9, STATE_VARIABLE_Contents_15_15, &STATE_VARIABLE_Contents_16_16);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_16_16, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_16_16, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_16_16, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_16_16, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Contents_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (IntHasMain_12));
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_14;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_14));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicits_foreigns_fact_tables_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_3,
  MR_Word STATE_VARIABLE_Contents_0_4,
  MR_Word * STATE_VARIABLE_Contents_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Contents_5 = STATE_VARIABLE_Contents_0_4;
      *STATE_VARIABLE_ImplicitAvailNeeds_3 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Contents_171_171;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_173_173;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Contents_0_4;

      switch (MR_tag((MR_Word) Item_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_103 = (MR_Word) ((MR_Word) (Item_12));

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(ItemClause_103, STATE_VARIABLE_ImplicitAvailNeeds_0_2, &STATE_VARIABLE_ImplicitAvailNeeds_173_173);
            STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
            STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
            STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ItemPredDecl_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word SymName_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_111, (MR_Integer) 0))));
                MR_Word PorF_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_111, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgTypes_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_111, (MR_Integer) 2))));
                MR_Word WithType_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_111, (MR_Integer) 4))));
                MR_Word Var_145;
                MR_Word Var_146;

                if (((MR_tag((MR_Word) SymName_112)) == (MR_Integer) 1))
                {
                  MR_String Var_142 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_112, (MR_Integer) 1))));

                  succeeded = (strcmp(Var_142, (MR_String) "main") == 0);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.get_dependencies.get_implicits_foreigns_fact_tables_acc\'/5", (MR_String) "unqualified SymName");
                    return;
                  }
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = (PorF_113 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (WithType_116 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (ArgTypes_114 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_114, (MR_Integer) 1))));
                        succeeded = (Var_145 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_145, (MR_Integer) 1))));
                          succeeded = (Var_146 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                  MR_Word Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                  MR_Word Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                  MR_Word Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));

                  {
                    STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_315));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_316));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Var_317));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_318));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                }
                else
                  STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ItemForeignEnum_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Lang_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_39, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Langs0_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                MR_Word Langs_177;
                MR_Word Var_220;
                MR_Word Var_221;
                MR_Word Var_223;
                MR_Word Var_224;

                mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_40)), Langs0_176, &Langs_177);
                Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                Var_224 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                {
                  STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_220));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_221));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_177));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_223));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_224));
                }
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Goal_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_104, (MR_Integer) 1))));

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_106, STATE_VARIABLE_ImplicitAvailNeeds_0_2, &STATE_VARIABLE_ImplicitAvailNeeds_173_173);
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word InstanceBody_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_94, (MR_Integer) 4))));

                if ((InstanceBody_99 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                else
                {
                  MR_Word InstanceMethods_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_99, (MR_Integer) 0))));
                  MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_173_173;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[20]), InstanceMethods_102, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_2)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_173_173);
                  STATE_VARIABLE_ImplicitAvailNeeds_173_173 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_173_173));
                }
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 7:
            case (MR_Integer) 8:
              {
                MR_Word Var_149;
                MR_Word FELangs0_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                MR_Word FELangs_206;
                MR_Word Var_310;
                MR_Word Var_311;
                MR_Word Var_312;
                MR_Word Var_314;

                Var_149 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_149, FELangs0_205, &FELangs_206);
                Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                Var_314 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                {
                  STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_310));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_311));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Var_312));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (FELangs_206));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_314));
                }
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutable_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word Var_151;
                MR_Word Langs0_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                MR_Word Langs_204;
                MR_Word Var_301;
                MR_Word Var_302;
                MR_Word Var_304;
                MR_Word Var_305;

                Var_151 = parse_tree__prog_foreign__all_foreign_languages_0_f_0();
                mercury__set__insert_list_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Var_151, Langs0_203, &Langs_204);
                Var_301 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                Var_302 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                Var_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                Var_305 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                {
                  STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_301));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_302));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_204));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_304));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_305));
                }
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(ItemMutable_108, STATE_VARIABLE_ImplicitAvailNeeds_0_2, &STATE_VARIABLE_ImplicitAvailNeeds_173_173);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ItemTypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word TypeDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_16, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) TypeDefn_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                      STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word DetailsSolver_23 = (MR_Word) (MR_body((MR_Word) (TypeDefn_19), (MR_Integer) 1));
                      MR_Word SolverTypeDetails_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_23, (MR_Integer) 0))));
                      MR_Word MutableItems_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_24, (MR_Integer) 3))));
                      MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_173_173;

                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[21]), MutableItems_29, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_2)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_173_173);
                      STATE_VARIABLE_ImplicitAvailNeeds_173_173 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_173_173));
                      STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                      STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_19, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word DetailsForeign_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_19, (MR_Integer) 1))));
                          MR_Word ForeignType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_30, (MR_Integer) 0))));
                          MR_Word Langs0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                          MR_Word Langs_35;
                          MR_Word Var_170;
                          MR_Word Var_211;
                          MR_Word Var_212;
                          MR_Word Var_214;
                          MR_Word Var_215;

                          Var_170 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_31);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_170)), Langs0_34, &Langs_35);
                          Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                          Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                          Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                          Var_215 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                          {
                            STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_211));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_212));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_35));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_214));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_215));
                          }
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 11:
              {
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ItemImplPragma_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_12, (MR_Integer) 1))));
                MR_Word ImplPragma_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemImplPragma_45, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) ImplPragma_46)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FDInfo_49 = (MR_Word) ((MR_Word) (ImplPragma_46));
                      MR_Word LiteralOrInclude_400 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_49, (MR_Integer) 1))));
                      MR_Word STATE_VARIABLE_Contents_167_406;
                      MR_Word Langs0_407;
                      MR_Word Langs_408;
                      MR_Word Lang_409 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_49, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
                      MR_Word Var_390;
                      MR_Word Var_391;
                      MR_Word Var_393;
                      MR_Word Var_394;

                      if (((MR_tag((MR_Word) LiteralOrInclude_400)) == (MR_Integer) 1))
                      {
                        MR_String FileName_354 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_400, (MR_Integer) 0))));
                        MR_Word InclFile_355;
                        MR_Word FIFOs0_356;
                        MR_Word FIFOs_357;
                        MR_Word Var_345;
                        MR_Word Var_346;
                        MR_Word Var_347;
                        MR_Word Var_348;

                        {
                          InclFile_355 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_355, 0) = (MR_Box) ((MR_Unsigned) (Lang_409));
                          MR_hl_field(MR_mktag(0), InclFile_355, 1) = ((MR_Box) (FileName_354));
                        }
                        FIFOs0_356 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                        FIFOs_357 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), FIFOs0_356, ((MR_Box) (InclFile_355)));
                        Var_345 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                        Var_346 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                        Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                        Var_348 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                        {
                          STATE_VARIABLE_Contents_167_406 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, 0) = ((MR_Box) (FIFOs_357));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, 1) = ((MR_Box) (Var_345));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, 2) = ((MR_Box) (Var_346));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, 3) = ((MR_Box) (Var_347));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, 4) = (MR_Box) ((MR_Unsigned) (Var_348));
                        }
                      }
                      else
                        STATE_VARIABLE_Contents_167_406 = STATE_VARIABLE_Contents_0_4;
                      Langs0_407 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, (MR_Integer) 2))));
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_409)), Langs0_407, &Langs_408);
                      Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, (MR_Integer) 0))));
                      Var_391 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, (MR_Integer) 1))));
                      Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, (MR_Integer) 3))));
                      Var_394 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_406, (MR_Integer) 4))) & (MR_Integer) 1);
                      {
                        STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_390));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_391));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_408));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_393));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_394));
                      }
                      STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word LiteralOrInclude_51;
                      MR_Word FCInfo_52 = (MR_Word) (MR_body((MR_Word) (ImplPragma_46), (MR_Integer) 1));
                      MR_Word STATE_VARIABLE_Contents_167_167;
                      MR_Word Langs0_178;
                      MR_Word Langs_179;
                      MR_Word Lang_180 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_52, (MR_Integer) 0))) & (MR_Integer) 3);
                      MR_Word Var_238;
                      MR_Word Var_239;
                      MR_Word Var_241;
                      MR_Word Var_242;

                      LiteralOrInclude_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_52, (MR_Integer) 1))));
                      if (((MR_tag((MR_Word) LiteralOrInclude_51)) == (MR_Integer) 1))
                      {
                        MR_String FileName_54 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_51, (MR_Integer) 0))));
                        MR_Word InclFile_55;
                        MR_Word FIFOs0_56;
                        MR_Word FIFOs_57;
                        MR_Word Var_230;
                        MR_Word Var_231;
                        MR_Word Var_232;
                        MR_Word Var_233;

                        {
                          InclFile_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), InclFile_55, 0) = (MR_Box) ((MR_Unsigned) (Lang_180));
                          MR_hl_field(MR_mktag(0), InclFile_55, 1) = ((MR_Box) (FileName_54));
                        }
                        FIFOs0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                        FIFOs_57 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), FIFOs0_56, ((MR_Box) (InclFile_55)));
                        Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                        Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                        Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                        Var_233 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                        {
                          STATE_VARIABLE_Contents_167_167 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, 0) = ((MR_Box) (FIFOs_57));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, 1) = ((MR_Box) (Var_230));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, 2) = ((MR_Box) (Var_231));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, 3) = ((MR_Box) (Var_232));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, 4) = (MR_Box) ((MR_Unsigned) (Var_233));
                        }
                      }
                      else
                        STATE_VARIABLE_Contents_167_167 = STATE_VARIABLE_Contents_0_4;
                      Langs0_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, (MR_Integer) 2))));
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_180)), Langs0_178, &Langs_179);
                      Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, (MR_Integer) 0))));
                      Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, (MR_Integer) 1))));
                      Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, (MR_Integer) 3))));
                      Var_242 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_167_167, (MR_Integer) 4))) & (MR_Integer) 1);
                      {
                        STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_238));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_239));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_179));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_241));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_242));
                      }
                      STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word FPInfo_58 = (MR_Word) (MR_body((MR_Word) (ImplPragma_46), (MR_Integer) 2));
                      MR_Word Attrs_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_58, (MR_Integer) 0))));
                      MR_Word Var_165;
                      MR_Word Langs0_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                      MR_Word Langs_182;
                      MR_Word Var_247;
                      MR_Word Var_248;
                      MR_Word Var_250;
                      MR_Word Var_251;

                      Var_165 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_59);
                      mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_165)), Langs0_181, &Langs_182);
                      Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                      Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                      Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                      Var_251 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                      {
                        STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_247));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_248));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_182));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_250));
                        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_251));
                      }
                      STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImplPragma_46, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word FPEInfo_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_46, (MR_Integer) 1))));
                          MR_Word FELangs0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                          MR_Word FELangs_71;
                          MR_Word Langs0_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                          MR_Word Langs_184;
                          MR_Word Lang_185 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo_66, (MR_Integer) 1))) & (MR_Integer) 3);
                          MR_Word Var_260;
                          MR_Word Var_261;
                          MR_Word Var_264;

                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_185)), FELangs0_70, &FELangs_71);
                          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_185)), Langs0_183, &Langs_184);
                          Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                          Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                          Var_264 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                          {
                            STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_260));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (Var_261));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Langs_184));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (FELangs_71));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_264));
                          }
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word FactTableInfo_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_46, (MR_Integer) 1))));
                          MR_Word FactTables0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 1))));
                          MR_Word FactTables_75;
                          MR_String FileName_186 = ((MR_String) ((MR_hl_field(MR_mktag(0), FactTableInfo_72, (MR_Integer) 1))));
                          MR_Word Var_274;
                          MR_Word Var_276;
                          MR_Word Var_277;
                          MR_Word Var_278;

                          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FileName_186)), FactTables0_74, &FactTables_75);
                          Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 0))));
                          Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 2))));
                          Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 3))));
                          Var_278 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_0_4, (MR_Integer) 4))) & (MR_Integer) 1);
                          {
                            STATE_VARIABLE_Contents_171_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 0) = ((MR_Box) (Var_274));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 1) = ((MR_Box) (FactTables_75));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 2) = ((MR_Box) (Var_276));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 3) = ((MR_Box) (Var_277));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Contents_171_171, 4) = (MR_Box) ((MR_Unsigned) (Var_278));
                          }
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word TableInfo_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImplPragma_46, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_76, (MR_Integer) 3))));
                          MR_Word STATE_VARIABLE_ImplicitAvailNeeds_158_158;
                          MR_Unsigned packed_word_23 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_2, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitAvailNeeds_158_158 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_158_158, 0) = (MR_Box) ((((packed_word_23 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_80 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_158_158;
                          else
                          {
                            MR_Word Attributes_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_80, (MR_Integer) 0))));
                            MR_Word StatsAttr_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_81, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);

                            switch (StatsAttr_82) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_158_158;
                                break;
                              case (MR_Integer) 0:
                                {
                                  STATE_VARIABLE_ImplicitAvailNeeds_173_173 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_173_173, 0) = (MR_Box) ((((packed_word_23 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                }
                                break;
                            }
                          }
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                          STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 13:
              {
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
            case (MR_Integer) 14:
              {
                STATE_VARIABLE_ImplicitAvailNeeds_173_173 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                STATE_VARIABLE_Contents_171_171 = STATE_VARIABLE_Contents_0_4;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_173_173;
      next_value_of_STATE_VARIABLE_Contents_0_4 = STATE_VARIABLE_Contents_171_171;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
      STATE_VARIABLE_Contents_0_4 = next_value_of_STATE_VARIABLE_Contents_0_4;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
parse_tree__get_dependencies__init_item_contents_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_4;
    MR_Word Var_5;

    Var_2 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
    Var_3 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_4 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_5 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImportUseMap_14;

    parse_tree__get_dependencies__add_implicit_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportUseMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportUseMap_14));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImportUseMap_14;

    parse_tree__get_dependencies__add_implicit_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImportUseMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImportUseMap_14));
  }
}

void MR_CALL 
parse_tree__get_dependencies__extend_import_and_or_use_map_with_implicits_5_p_0(
  MR_Word Globals_6,
  MR_Word IntImplicitAvailNeeds_7,
  MR_Word ImpImplicitAvailNeeds_8,
  MR_Word STATE_VARIABLE_ImportUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportUseMap_14)
{
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
    mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[0]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_8[0]), IntImplicitUses_10, ((MR_Box) (STATE_VARIABLE_ImportUseMap_16_16)), &conv1_STATE_VARIABLE_ImportUseMap_18_18);
    STATE_VARIABLE_ImportUseMap_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_ImportUseMap_18_18));
    mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[0]), (MR_Word) (&parse_tree__get_dependencies_scalar_common_8[1]), ImpImplicitUses_11, ((MR_Box) (STATE_VARIABLE_ImportUseMap_18_18)), &conv3_STATE_VARIABLE_ImportUseMap_14);
    *STATE_VARIABLE_ImportUseMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_ImportUseMap_14));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__add_implicit_avail_4_p_0(
  MR_Word Implicit_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_ImportUseMap_0_13,
  MR_Word * STATE_VARIABLE_ImportUseMap_14)
{
  {
    MR_bool succeeded;
    MR_Word OldEntry_8;
    MR_Box conv0_OldEntry_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), STATE_VARIABLE_ImportUseMap_0_13, ((MR_Box) (ModuleName_6)), &conv0_OldEntry_8);
    if (succeeded)
    {
      OldEntry_8 = ((MR_Word) (conv0_OldEntry_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if (((MR_tag((MR_Word) OldEntry_8)) == (MR_Integer) 0))
      {
        MR_Word Explicit_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_8, (MR_Integer) 0))));
        MR_Word NewEntry_10;
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Explicit_9));
        }
        {
          NewEntry_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewEntry_10, 0) = (MR_Box) ((MR_Unsigned) (Implicit_5));
          MR_hl_field(MR_mktag(1), NewEntry_10, 1) = ((MR_Box) (Var_15));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (NewEntry_10)), STATE_VARIABLE_ImportUseMap_0_13, STATE_VARIABLE_ImportUseMap_14);
      }
      else
        *STATE_VARIABLE_ImportUseMap_14 = STATE_VARIABLE_ImportUseMap_0_13;
    else
    {
      MR_Word NewEntry_19;

      {
        NewEntry_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NewEntry_19, 0) = (MR_Box) ((MR_Unsigned) (Implicit_5));
        MR_hl_field(MR_mktag(1), NewEntry_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (NewEntry_19)), STATE_VARIABLE_ImportUseMap_0_13, STATE_VARIABLE_ImportUseMap_14);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(
  MR_Word ItemClause_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_17,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_18)
{
  {
    MR_Word HeadTerms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_4, (MR_Integer) 2))));
    MR_Word MaybeGoal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_4, (MR_Integer) 5))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_19_19;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(HeadTerms_8, STATE_VARIABLE_ImplicitAvailNeeds_0_17, &STATE_VARIABLE_ImplicitAvailNeeds_19_19);
    if (((MR_tag((MR_Word) MaybeGoal_11)) == (MR_Integer) 0))
      *STATE_VARIABLE_ImplicitAvailNeeds_18 = STATE_VARIABLE_ImplicitAvailNeeds_19_19;
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_11, (MR_Integer) 0))));

      parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Goal_14, STATE_VARIABLE_ImplicitAvailNeeds_19_19, STATE_VARIABLE_ImplicitAvailNeeds_18);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_70)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
    MR_Word tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70;

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
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_69 = tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_70;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Goal_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TermA_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
            MR_Word TermB_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_71_71;

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermA_67, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_71_71);
            parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermB_68, STATE_VARIABLE_ImplicitAvailNeeds_71_71, &STATE_VARIABLE_ImplicitAvailNeeds_70);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CalleeSymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 1))));
            MR_Word Args_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_77_77;
            MR_Word ModuleName_62;
            MR_String Var_74;

            succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 0))));
              Var_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 1))));
              succeeded = (strcmp(Var_74, (MR_String) "format") == 0);
            }
            if (succeeded)
            {
              MR_String Var_221;

              succeeded = ((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_221 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));
                if ((strcmp(Var_221, (MR_String) "io") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Var_221, (MR_String) "string") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_77_77, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                }
              }
              else
              {
                if (((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 1))
                {
                  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 0))));
                  MR_String Var_80;
                  MR_String Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 1))));

                  succeeded = (strcmp(Var_81, (MR_String) "string_writer") == 0);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_80, (MR_String) "stream") == 0);
                    }
                  }
                }
                else
                {
                  MR_String Var_222 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));

                  if ((strcmp(Var_222, (MR_String) "stream") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_222, (MR_String) "string_writer") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                if (succeeded)
                {
                  MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitAvailNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_77_77, 0) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                  }
                }
                else
                  STATE_VARIABLE_ImplicitAvailNeeds_77_77 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
              }
            }
            else
            {
              MR_String Var_88;

              succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_88 = ((MR_String) ((MR_hl_field(MR_mktag(0), CalleeSymName_60, (MR_Integer) 0))));
                succeeded = (strcmp(Var_88, (MR_String) "format") == 0);
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_77_77, 0) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                }
              }
              else
                STATE_VARIABLE_ImplicitAvailNeeds_77_77 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
            }
            parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(Args_61, STATE_VARIABLE_ImplicitAvailNeeds_77_77, &STATE_VARIABLE_ImplicitAvailNeeds_70);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 1))));
            MR_Word SubGoalB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_114;
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_9, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_114);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_10;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_114;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word Else_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_100_100;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_101_101;
                MR_Word Then_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Cond_51, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_100_100);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_132, STATE_VARIABLE_ImplicitAvailNeeds_100_100, &STATE_VARIABLE_ImplicitAvailNeeds_101_101);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_52;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_101_101;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoalA_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_202;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_200, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_202);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_201;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_202;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoal_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_209;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoalA_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_212;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_210, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_212);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_211;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_212;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word SubGoal_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_217;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word SubGoal_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_216;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SubGoal_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_215;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SubGoal_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_214;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word SubGoal_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_213;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SubGoal_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_219;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SubGoal_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_218;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word SubGoal_220 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_220;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word MaybeIO_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_110_110;
                MR_Word SubGoal_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                if ((MaybeIO_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitAvailNeeds_110_110 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                else
                {
                  MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitAvailNeeds_110_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_110_110, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_126;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_110_110;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_96_96;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_98_98;
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_96_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_96_96, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((MR_Unsigned) ((MR_Integer) 1) << 4))))));
                }
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(MainGoal_57, STATE_VARIABLE_ImplicitAvailNeeds_96_96, &STATE_VARIABLE_ImplicitAvailNeeds_98_98);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(OrElseGoals_58, STATE_VARIABLE_ImplicitAvailNeeds_98_98, &STATE_VARIABLE_ImplicitAvailNeeds_70);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word Then_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word MaybeElse_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word Catches_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word MaybeCatchAny_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 7))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_103_103;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_105_105;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_106_106;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_107_107;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_108_108;
                MR_Word SubGoal_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_103_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_103_103, 0) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
                }
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal_127, STATE_VARIABLE_ImplicitAvailNeeds_103_103, &STATE_VARIABLE_ImplicitAvailNeeds_105_105);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_46, STATE_VARIABLE_ImplicitAvailNeeds_105_105, &STATE_VARIABLE_ImplicitAvailNeeds_106_106);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_goal_3_p_0(MaybeElse_47, STATE_VARIABLE_ImplicitAvailNeeds_106_106, &STATE_VARIABLE_ImplicitAvailNeeds_107_107);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_catch_exprs_3_p_0(Catches_48, STATE_VARIABLE_ImplicitAvailNeeds_107_107, &STATE_VARIABLE_ImplicitAvailNeeds_108_108);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = MaybeCatchAny_49;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_108_108;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word SubGoalA_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_208;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_206, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_208);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_207;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_208;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word SubGoalA_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_205;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_203, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_205);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_204;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_205;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word EventArgs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(EventArgs_65, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_70);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_70;
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
        MR_Word CatchAnyExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchAnyExpr_7, (MR_Integer) 1))));
        MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_10;
        MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
        tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_3;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_70 = tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70;
    return;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_70)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
    MR_Word tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70;

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
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_69 = tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_70;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Goal_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TermA_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
            MR_Word TermB_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_71_71;

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermA_67, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_71_71);
            parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(TermB_68, STATE_VARIABLE_ImplicitAvailNeeds_71_71, &STATE_VARIABLE_ImplicitAvailNeeds_70);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CalleeSymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 1))));
            MR_Word Args_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_77_77;
            MR_Word ModuleName_62;
            MR_String Var_74;

            succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 0))));
              Var_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 1))));
              succeeded = (strcmp(Var_74, (MR_String) "format") == 0);
            }
            if (succeeded)
            {
              MR_String Var_221;

              succeeded = ((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_221 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));
                if ((strcmp(Var_221, (MR_String) "io") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Var_221, (MR_String) "string") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_77_77, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                }
              }
              else
              {
                if (((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 1))
                {
                  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 0))));
                  MR_String Var_80;
                  MR_String Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 1))));

                  succeeded = (strcmp(Var_81, (MR_String) "string_writer") == 0);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_80, (MR_String) "stream") == 0);
                    }
                  }
                }
                else
                {
                  MR_String Var_222 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));

                  if ((strcmp(Var_222, (MR_String) "stream") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_222, (MR_String) "string_writer") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                if (succeeded)
                {
                  MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitAvailNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_77_77, 0) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                  }
                }
                else
                  STATE_VARIABLE_ImplicitAvailNeeds_77_77 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
              }
            }
            else
            {
              MR_String Var_88;

              succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_88 = ((MR_String) ((MR_hl_field(MR_mktag(0), CalleeSymName_60, (MR_Integer) 0))));
                succeeded = (strcmp(Var_88, (MR_String) "format") == 0);
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_77_77, 0) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                }
              }
              else
                STATE_VARIABLE_ImplicitAvailNeeds_77_77 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
            }
            parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(Args_61, STATE_VARIABLE_ImplicitAvailNeeds_77_77, &STATE_VARIABLE_ImplicitAvailNeeds_70);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 1))));
            MR_Word SubGoalB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_114;
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

            parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_9, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_114);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_10;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_114;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word Else_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_100_100;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_101_101;
                MR_Word Then_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Cond_51, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_100_100);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_132, STATE_VARIABLE_ImplicitAvailNeeds_100_100, &STATE_VARIABLE_ImplicitAvailNeeds_101_101);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_52;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_101_101;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoalA_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_202;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_200, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_202);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_201;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_202;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoal_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_209;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoalA_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_212;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_210, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_212);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_211;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_212;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word SubGoal_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_217;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word SubGoal_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_216;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SubGoal_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_215;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SubGoal_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_214;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word SubGoal_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_213;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SubGoal_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_219;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SubGoal_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_218;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word SubGoal_220 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_220;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word MaybeIO_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_110_110;
                MR_Word SubGoal_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                if ((MaybeIO_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitAvailNeeds_110_110 = STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                else
                {
                  MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitAvailNeeds_110_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_110_110, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_126;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_110_110;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_96_96;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_98_98;
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_96_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_96_96, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((MR_Unsigned) ((MR_Integer) 1) << 4))))));
                }
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(MainGoal_57, STATE_VARIABLE_ImplicitAvailNeeds_96_96, &STATE_VARIABLE_ImplicitAvailNeeds_98_98);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goals_3_p_0(OrElseGoals_58, STATE_VARIABLE_ImplicitAvailNeeds_98_98, &STATE_VARIABLE_ImplicitAvailNeeds_70);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word Then_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word MaybeElse_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word Catches_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word MaybeCatchAny_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 7))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_103_103;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_105_105;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_106_106;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_107_107;
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_108_108;
                MR_Word SubGoal_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_69, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_103_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_103_103, 0) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
                }
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoal_127, STATE_VARIABLE_ImplicitAvailNeeds_103_103, &STATE_VARIABLE_ImplicitAvailNeeds_105_105);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(Then_46, STATE_VARIABLE_ImplicitAvailNeeds_105_105, &STATE_VARIABLE_ImplicitAvailNeeds_106_106);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_maybe_goal_3_p_0(MaybeElse_47, STATE_VARIABLE_ImplicitAvailNeeds_106_106, &STATE_VARIABLE_ImplicitAvailNeeds_107_107);
                parse_tree__get_dependencies__acc_implicit_avail_needs_in_catch_exprs_3_p_0(Catches_48, STATE_VARIABLE_ImplicitAvailNeeds_107_107, &STATE_VARIABLE_ImplicitAvailNeeds_108_108);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = MaybeCatchAny_49;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = STATE_VARIABLE_ImplicitAvailNeeds_108_108;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_2;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word SubGoalA_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_208;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_206, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_208);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_207;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_208;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word SubGoalA_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitAvailNeeds_114_205;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_goal_3_p_0(SubGoalA_203, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_114_205);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_204;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_114_205;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word EventArgs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));

                parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(EventArgs_65, STATE_VARIABLE_ImplicitAvailNeeds_0_69, &STATE_VARIABLE_ImplicitAvailNeeds_70);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_70;
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
        MR_Word CatchAnyExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchAnyExpr_7, (MR_Integer) 1))));
        MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_10;
        MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = STATE_VARIABLE_ImplicitAvailNeeds_0_2;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
        tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitAvailNeeds_0_69;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70 = STATE_VARIABLE_ImplicitAvailNeeds_3;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_ImplicitAvailNeeds_70 = tscc_output_1_STATE_VARIABLE_ImplicitAvailNeeds_70;
    return;
  }
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
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

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
      MR_Word CatchExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CatchExprs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_7, (MR_Integer) 1))));
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
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(
  MR_Word ItemMutableInfo_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_17)
{
  {
    MR_Word InitValue_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutableInfo_4, (MR_Integer) 5))));

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(InitValue_11, STATE_VARIABLE_ImplicitAvailNeeds_0_16, STATE_VARIABLE_ImplicitAvailNeeds_17);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_19)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
    {
      MR_Word Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0))));
      MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitAvailNeeds_22_22;

      switch (MR_tag((MR_Word) Const_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_8, (MR_Integer) 0))));

            succeeded = (strcmp(Atom_10, (MR_String) "format") == 0);
            if (succeeded)
            {
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0)));

              {
                STATE_VARIABLE_ImplicitAvailNeeds_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_22_22, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
              }
            }
            else
            {
              MR_Integer lo_0 = (MR_Integer) 0;
              MR_Integer hi_1 = (MR_Integer) 3;
              MR_Integer mid_2;
              MR_Integer result_3;

              // binary string simple lookup switch
              ;
              do
              {
                mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(Atom_10, ((&parse_tree__get_dependencies_vector_common_6[0 + mid_2]))->parse_tree__get_dependencies__vector_common_type_6_0__vct_6_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
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
              if (succeeded)
              {
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitAvailNeeds_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_22_22, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                }
              }
              else
              {
                MR_Integer slot_4 = ((MR_hash_string5(Atom_10)) & (MR_Integer) 31);
                MR_String str_5 = ((&parse_tree__get_dependencies_vector_common_6[4 + slot_4]))->parse_tree__get_dependencies__vector_common_type_6_0__vct_6_f_0;

                // hashed string simple lookup switch
                ;
                // compute the hash value of the input string
                ;
                // no collisions; no hash chain loop
                ;
                // lookup the string for this hash slot
                ;
                // did we find a match?
                ;
                if ((((str_5 != NULL)) && ((strcmp(str_5, Atom_10) == 0))))
                {
                  // we found a match; look up the results
                  ;
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_1;
                }
                succeeded = MR_FALSE;
              label_1:;
                if (succeeded)
                {
                  MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_0_18, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitAvailNeeds_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitAvailNeeds_22_22, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                  }
                }
                else
                  STATE_VARIABLE_ImplicitAvailNeeds_22_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_ImplicitAvailNeeds_22_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_ImplicitAvailNeeds_22_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitAvailNeeds_22_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ImplicitAvailNeeds_22_22 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
              break;
          }
          break;
      }
      parse_tree__get_dependencies__acc_implicit_avail_needs_in_terms_3_p_0(ArgTerms_9, STATE_VARIABLE_ImplicitAvailNeeds_22_22, STATE_VARIABLE_ImplicitAvailNeeds_19);
    }
    else
      *STATE_VARIABLE_ImplicitAvailNeeds_19 = STATE_VARIABLE_ImplicitAvailNeeds_0_18;
  }
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
      MR_Word Term_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_18;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_18));
  }
}

void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_method_3_p_0(
  MR_Word InstanceMethod_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_13,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_14)
{
  {
    MR_Word ProcDef_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod_4, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) ProcDef_8)) == (MR_Integer) 1))
    {
      MR_Word ItemClauses_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcDef_8, (MR_Integer) 0))));
      MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_14;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[19]), ItemClauses_12, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_13)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_14);
      *STATE_VARIABLE_ImplicitAvailNeeds_14 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_14));
    }
    else
      *STATE_VARIABLE_ImplicitAvailNeeds_14 = STATE_VARIABLE_ImplicitAvailNeeds_0_13;
  }
}

void MR_CALL 
parse_tree__get_dependencies__combine_implicit_needs_2_p_0(
  MR_Word ImplicitNeedsList_3,
  MR_Word * ImplicitNeeds_4)
{
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
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (NeedTabling_5) << 6)) | (((((MR_Unsigned) (NeedTablingStatistics_6) << 5)) | (((((MR_Unsigned) (NeedStm_7) << 4)) | (((((MR_Unsigned) (NeedException_8) << 3)) | (((((MR_Unsigned) (NeedStringFormat_9) << 2)) | (((((MR_Unsigned) (NeedStreamFormat_10) << 1)) | (MR_Unsigned) (NeedIO_11)))))))))))));
    }
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
      MR_Word Head_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NeedTabling_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word NeedTablingStatistics_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word NeedStm_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word NeedException_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word NeedStringFormat_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word NeedStreamFormat_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word NeedIO_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Head_37, (MR_Integer) 0))) & (MR_Integer) 1);
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
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_16;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_16);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_16));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_32;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_32);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_32));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_11;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_indirect_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_11);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_11));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_11;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_direct_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_11);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_11));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_9;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_9));
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0(
  MR_Word Globals_4,
  MR_Word AugCompUnit_5,
  MR_Word * ImplicitlyUsedModules_6)
{
  {
    MR_Word ImplicitAvailNeeds_8;
    MR_Word ParseTreeModuleSrc_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 3))));
    MR_Word AncestorIntSpecs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 4))));
    MR_Word DirectIntSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 5))));
    MR_Word IndirectIntSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 6))));
    MR_Word PlainOpts_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 7))));
    MR_Word TransOpts_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 8))));
    MR_Word IntForOptSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_5, (MR_Integer) 9))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_18_31;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_20_33;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_22_35;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_24_37;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_26_39;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_28_41;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_20_33;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_22_35;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_24_37;
    MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_26_39;
    MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_28_41;
    MR_Box conv11_ImplicitAvailNeeds_8;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0(ParseTreeModuleSrc_24, (MR_Word) (&parse_tree__get_dependencies_scalar_common_3[0]), &STATE_VARIABLE_ImplicitAvailNeeds_18_31);
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[13]), AncestorIntSpecs_25, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_18_31)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_20_33);
    STATE_VARIABLE_ImplicitAvailNeeds_20_33 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_20_33));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[14]), DirectIntSpecs_26, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_20_33)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_22_35);
    STATE_VARIABLE_ImplicitAvailNeeds_22_35 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_22_35));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[15]), IndirectIntSpecs_27, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_22_35)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_24_37);
    STATE_VARIABLE_ImplicitAvailNeeds_24_37 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_24_37));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[16]), IntForOptSpecs_30, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_24_37)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_26_39);
    STATE_VARIABLE_ImplicitAvailNeeds_26_39 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_26_39));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[17]), PlainOpts_28, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_26_39)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_28_41);
    STATE_VARIABLE_ImplicitAvailNeeds_28_41 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_28_41));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[18]), TransOpts_29, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_28_41)), &conv11_ImplicitAvailNeeds_8);
    ImplicitAvailNeeds_8 = ((MR_Word) (conv11_ImplicitAvailNeeds_8));
    parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(Globals_4, ImplicitAvailNeeds_8, ImplicitlyUsedModules_6);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_ImplicitAvailNeeds_33;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_impl_pragma_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_ImplicitAvailNeeds_33);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_ImplicitAvailNeeds_33));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ImplicitAvailNeeds_18;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ImplicitAvailNeeds_18);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ImplicitAvailNeeds_18));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImplicitAvailNeeds_18;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImplicitAvailNeeds_18);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImplicitAvailNeeds_18));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_13;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_promise_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_13);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_13));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_18;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_18));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_50,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_51)
{
  {
    MR_Word IntTypeDefnsMer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 14))));
    MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 19))));
    MR_Word IntPromises_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsMer_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 27))));
    MR_Word ImpInstances_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 32))));
    MR_Word ImpClauses_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 35))));
    MR_Word ImpImplPragmas_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 39))));
    MR_Word ImpPromises_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 40))));
    MR_Word ImpMutables_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 43))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_53_53;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_55_55;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_57_57;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_59_59;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_61_61;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_63_63;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_65_65;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_67_67;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_53_53;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_55_55;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_57_57;
    MR_Box conv7_STATE_VARIABLE_ImplicitAvailNeeds_59_59;
    MR_Box conv9_STATE_VARIABLE_ImplicitAvailNeeds_61_61;
    MR_Box conv11_STATE_VARIABLE_ImplicitAvailNeeds_63_63;
    MR_Box conv13_STATE_VARIABLE_ImplicitAvailNeeds_65_65;
    MR_Box conv15_STATE_VARIABLE_ImplicitAvailNeeds_67_67;
    MR_Box conv17_STATE_VARIABLE_ImplicitAvailNeeds_51;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[1]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[4]), IntTypeDefnsMer_20, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_50)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_53_53);
    STATE_VARIABLE_ImplicitAvailNeeds_53_53 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_53_53));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[5]), IntInstances_25, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_53_53)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_55_55);
    STATE_VARIABLE_ImplicitAvailNeeds_55_55 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_55_55));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[6]), IntPromises_30, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_55_55)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_57_57);
    STATE_VARIABLE_ImplicitAvailNeeds_57_57 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_57_57));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[1]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[7]), ImpTypeDefnsMer_33, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_57_57)), &conv7_STATE_VARIABLE_ImplicitAvailNeeds_59_59);
    STATE_VARIABLE_ImplicitAvailNeeds_59_59 = ((MR_Word) (conv7_STATE_VARIABLE_ImplicitAvailNeeds_59_59));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[8]), ImpInstances_38, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_59_59)), &conv9_STATE_VARIABLE_ImplicitAvailNeeds_61_61);
    STATE_VARIABLE_ImplicitAvailNeeds_61_61 = ((MR_Word) (conv9_STATE_VARIABLE_ImplicitAvailNeeds_61_61));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[9]), ImpClauses_41, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_61_61)), &conv11_STATE_VARIABLE_ImplicitAvailNeeds_63_63);
    STATE_VARIABLE_ImplicitAvailNeeds_63_63 = ((MR_Word) (conv11_STATE_VARIABLE_ImplicitAvailNeeds_63_63));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[2]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[10]), ImpImplPragmas_45, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_63_63)), &conv13_STATE_VARIABLE_ImplicitAvailNeeds_65_65);
    STATE_VARIABLE_ImplicitAvailNeeds_65_65 = ((MR_Word) (conv13_STATE_VARIABLE_ImplicitAvailNeeds_65_65));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[11]), ImpPromises_46, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_65_65)), &conv15_STATE_VARIABLE_ImplicitAvailNeeds_67_67);
    STATE_VARIABLE_ImplicitAvailNeeds_67_67 = ((MR_Word) (conv15_STATE_VARIABLE_ImplicitAvailNeeds_67_67));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[12]), ImpMutables_49, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_67_67)), &conv17_STATE_VARIABLE_ImplicitAvailNeeds_51);
    *STATE_VARIABLE_ImplicitAvailNeeds_51 = ((MR_Word) (conv17_STATE_VARIABLE_ImplicitAvailNeeds_51));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_avail_needs__974__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0(
  MR_Word Globals_4,
  MR_Word ImplicitAvailNeeds_5,
  MR_Word * STATE_VARIABLE_ImplicitlyUsedModules_21)
{
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
    MR_Word STATE_VARIABLE_ImplicitlyUsedModules_39_39;
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
    ItemsNeedTabling_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    ItemsNeedTablingStatistics_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    ItemsNeedSTM_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    ItemsNeedException_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    ItemsNeedStringFormat_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    ItemsNeedStreamFormat_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    ItemsNeedIO_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitAvailNeeds_5, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (ItemsNeedTabling_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_36;
          MR_Word STATE_VARIABLE_ImplicitlyUsedModules_37_37;

          Var_36 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_36)), STATE_VARIABLE_ImplicitlyUsedModules_22_22, &STATE_VARIABLE_ImplicitlyUsedModules_37_37);
          switch (ItemsNeedTablingStatistics_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_38;

                Var_38 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
                mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_38)), STATE_VARIABLE_ImplicitlyUsedModules_37_37, &STATE_VARIABLE_ImplicitlyUsedModules_39_39);
              }
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitlyUsedModules_39_39 = STATE_VARIABLE_ImplicitlyUsedModules_37_37;
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_avail_needs_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ItemsNeedTablingStatistics_8));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_avail_needs\'/3", (MR_String) "tabling statistics without tabling");
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 251, (MR_Integer) 1);
          if (!(succeeded))
          {
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 252, (MR_Integer) 1);
            if (!(succeeded))
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 141, (MR_Integer) 1);
          }
          if (succeeded)
          {
            MR_Word Var_34;

            Var_34 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_34)), STATE_VARIABLE_ImplicitlyUsedModules_22_22, &STATE_VARIABLE_ImplicitlyUsedModules_39_39);
          }
          else
            STATE_VARIABLE_ImplicitlyUsedModules_39_39 = STATE_VARIABLE_ImplicitlyUsedModules_22_22;
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
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_40)), STATE_VARIABLE_ImplicitlyUsedModules_39_39, &STATE_VARIABLE_ImplicitlyUsedModules_41_41);
          Var_42 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_42)), STATE_VARIABLE_ImplicitlyUsedModules_41_41, &STATE_VARIABLE_ImplicitlyUsedModules_43_43);
          Var_44 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_44)), STATE_VARIABLE_ImplicitlyUsedModules_43_43, &STATE_VARIABLE_ImplicitlyUsedModules_45_45);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_ImplicitlyUsedModules_45_45 = STATE_VARIABLE_ImplicitlyUsedModules_39_39;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 226, &Deep_14);
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
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 243, (MR_Integer) 1);
    if (!(succeeded))
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 244, (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_63;

      Var_63 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_63)), STATE_VARIABLE_ImplicitlyUsedModules_58_58, &STATE_VARIABLE_ImplicitlyUsedModules_64_64);
    }
    else
      STATE_VARIABLE_ImplicitlyUsedModules_64_64 = STATE_VARIABLE_ImplicitlyUsedModules_58_58;
    libs__globals__get_target_2_p_0(Globals_4, &Target_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 291, &HighLevelCode_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 247, &Parallel_17);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 260, &UseRegions_18);
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

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 154, &DisableSSDB_20);
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
}

void MR_CALL 
parse_tree__get_dependencies__get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word * ExplicitModules_5,
  MR_Word * ImplicitAvailNeeds_6)
{
  {
    MR_Word UseMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_4, (MR_Integer) 2))));

    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[0]), UseMap_9, ExplicitModules_5);
    parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(ParseTreePlainOpt_4, (MR_Word) (&parse_tree__get_dependencies_scalar_common_3[0]), ImplicitAvailNeeds_6);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImplicitAvailNeeds_18;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImplicitAvailNeeds_18);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImplicitAvailNeeds_18));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitAvailNeeds_17;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitAvailNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitAvailNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitAvailNeeds_18;

    parse_tree__get_dependencies__acc_implicit_avail_needs_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitAvailNeeds_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitAvailNeeds_18));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__acc_implicit_avail_needs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_ImplicitAvailNeeds_0_31,
  MR_Word * STATE_VARIABLE_ImplicitAvailNeeds_32)
{
  {
    MR_Word TypeDefns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_4, (MR_Integer) 4))));
    MR_Word Instances_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_4, (MR_Integer) 9))));
    MR_Word Clauses_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_4, (MR_Integer) 12))));
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_34_34;
    MR_Word STATE_VARIABLE_ImplicitAvailNeeds_36_36;
    MR_Box conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_34;
    MR_Box conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_36;
    MR_Box conv5_STATE_VARIABLE_ImplicitAvailNeeds_32;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__get_dependencies_scalar_common_1[1]), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[1]), TypeDefns_10, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_0_31)), &conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_34);
    STATE_VARIABLE_ImplicitAvailNeeds_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitAvailNeeds_34_34));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[2]), Instances_15, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_34_34)), &conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_36);
    STATE_VARIABLE_ImplicitAvailNeeds_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitAvailNeeds_36_36));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[3]), Clauses_18, ((MR_Box) (STATE_VARIABLE_ImplicitAvailNeeds_36_36)), &conv5_STATE_VARIABLE_ImplicitAvailNeeds_32);
    *STATE_VARIABLE_ImplicitAvailNeeds_32 = ((MR_Word) (conv5_STATE_VARIABLE_ImplicitAvailNeeds_32));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____implicit_avail_needs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____implicit_avail_needs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____item_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____item_contents_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____item_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____item_contents_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__get_dependencies__init(void)
{
}

void mercury__parse_tree__get_dependencies__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_avail_needs_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_item_contents_0);
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
